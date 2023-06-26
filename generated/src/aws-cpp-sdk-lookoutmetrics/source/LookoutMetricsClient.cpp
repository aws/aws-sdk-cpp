/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/lookoutmetrics/LookoutMetricsClient.h>
#include <aws/lookoutmetrics/LookoutMetricsErrorMarshaller.h>
#include <aws/lookoutmetrics/LookoutMetricsEndpointProvider.h>
#include <aws/lookoutmetrics/model/ActivateAnomalyDetectorRequest.h>
#include <aws/lookoutmetrics/model/BackTestAnomalyDetectorRequest.h>
#include <aws/lookoutmetrics/model/CreateAlertRequest.h>
#include <aws/lookoutmetrics/model/CreateAnomalyDetectorRequest.h>
#include <aws/lookoutmetrics/model/CreateMetricSetRequest.h>
#include <aws/lookoutmetrics/model/DeactivateAnomalyDetectorRequest.h>
#include <aws/lookoutmetrics/model/DeleteAlertRequest.h>
#include <aws/lookoutmetrics/model/DeleteAnomalyDetectorRequest.h>
#include <aws/lookoutmetrics/model/DescribeAlertRequest.h>
#include <aws/lookoutmetrics/model/DescribeAnomalyDetectionExecutionsRequest.h>
#include <aws/lookoutmetrics/model/DescribeAnomalyDetectorRequest.h>
#include <aws/lookoutmetrics/model/DescribeMetricSetRequest.h>
#include <aws/lookoutmetrics/model/DetectMetricSetConfigRequest.h>
#include <aws/lookoutmetrics/model/GetAnomalyGroupRequest.h>
#include <aws/lookoutmetrics/model/GetDataQualityMetricsRequest.h>
#include <aws/lookoutmetrics/model/GetFeedbackRequest.h>
#include <aws/lookoutmetrics/model/GetSampleDataRequest.h>
#include <aws/lookoutmetrics/model/ListAlertsRequest.h>
#include <aws/lookoutmetrics/model/ListAnomalyDetectorsRequest.h>
#include <aws/lookoutmetrics/model/ListAnomalyGroupRelatedMetricsRequest.h>
#include <aws/lookoutmetrics/model/ListAnomalyGroupSummariesRequest.h>
#include <aws/lookoutmetrics/model/ListAnomalyGroupTimeSeriesRequest.h>
#include <aws/lookoutmetrics/model/ListMetricSetsRequest.h>
#include <aws/lookoutmetrics/model/ListTagsForResourceRequest.h>
#include <aws/lookoutmetrics/model/PutFeedbackRequest.h>
#include <aws/lookoutmetrics/model/TagResourceRequest.h>
#include <aws/lookoutmetrics/model/UntagResourceRequest.h>
#include <aws/lookoutmetrics/model/UpdateAlertRequest.h>
#include <aws/lookoutmetrics/model/UpdateAnomalyDetectorRequest.h>
#include <aws/lookoutmetrics/model/UpdateMetricSetRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LookoutMetrics;
using namespace Aws::LookoutMetrics::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* LookoutMetricsClient::SERVICE_NAME = "lookoutmetrics";
const char* LookoutMetricsClient::ALLOCATION_TAG = "LookoutMetricsClient";

LookoutMetricsClient::LookoutMetricsClient(const LookoutMetrics::LookoutMetricsClientConfiguration& clientConfiguration,
                                           std::shared_ptr<LookoutMetricsEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LookoutMetricsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

LookoutMetricsClient::LookoutMetricsClient(const AWSCredentials& credentials,
                                           std::shared_ptr<LookoutMetricsEndpointProviderBase> endpointProvider,
                                           const LookoutMetrics::LookoutMetricsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LookoutMetricsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

LookoutMetricsClient::LookoutMetricsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<LookoutMetricsEndpointProviderBase> endpointProvider,
                                           const LookoutMetrics::LookoutMetricsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LookoutMetricsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  LookoutMetricsClient::LookoutMetricsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LookoutMetricsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<LookoutMetricsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

LookoutMetricsClient::LookoutMetricsClient(const AWSCredentials& credentials,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LookoutMetricsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<LookoutMetricsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

LookoutMetricsClient::LookoutMetricsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LookoutMetricsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<LookoutMetricsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
LookoutMetricsClient::~LookoutMetricsClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<LookoutMetricsEndpointProviderBase>& LookoutMetricsClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void LookoutMetricsClient::init(const LookoutMetrics::LookoutMetricsClientConfiguration& config)
{
  AWSClient::SetServiceClientName("LookoutMetrics");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void LookoutMetricsClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

ActivateAnomalyDetectorOutcome LookoutMetricsClient::ActivateAnomalyDetector(const ActivateAnomalyDetectorRequest& request) const
{
  AWS_OPERATION_GUARD(ActivateAnomalyDetector);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ActivateAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ActivateAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ActivateAnomalyDetector");
  return ActivateAnomalyDetectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BackTestAnomalyDetectorOutcome LookoutMetricsClient::BackTestAnomalyDetector(const BackTestAnomalyDetectorRequest& request) const
{
  AWS_OPERATION_GUARD(BackTestAnomalyDetector);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BackTestAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BackTestAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/BackTestAnomalyDetector");
  return BackTestAnomalyDetectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAlertOutcome LookoutMetricsClient::CreateAlert(const CreateAlertRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAlert);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAlert, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAlert, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CreateAlert");
  return CreateAlertOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAnomalyDetectorOutcome LookoutMetricsClient::CreateAnomalyDetector(const CreateAnomalyDetectorRequest& request) const
{
  AWS_OPERATION_GUARD(CreateAnomalyDetector);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CreateAnomalyDetector");
  return CreateAnomalyDetectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMetricSetOutcome LookoutMetricsClient::CreateMetricSet(const CreateMetricSetRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMetricSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMetricSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMetricSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CreateMetricSet");
  return CreateMetricSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeactivateAnomalyDetectorOutcome LookoutMetricsClient::DeactivateAnomalyDetector(const DeactivateAnomalyDetectorRequest& request) const
{
  AWS_OPERATION_GUARD(DeactivateAnomalyDetector);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeactivateAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeactivateAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeactivateAnomalyDetector");
  return DeactivateAnomalyDetectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAlertOutcome LookoutMetricsClient::DeleteAlert(const DeleteAlertRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAlert);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAlert, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAlert, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteAlert");
  return DeleteAlertOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAnomalyDetectorOutcome LookoutMetricsClient::DeleteAnomalyDetector(const DeleteAnomalyDetectorRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteAnomalyDetector);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteAnomalyDetector");
  return DeleteAnomalyDetectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAlertOutcome LookoutMetricsClient::DescribeAlert(const DescribeAlertRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeAlert);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAlert, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAlert, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeAlert");
  return DescribeAlertOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAnomalyDetectionExecutionsOutcome LookoutMetricsClient::DescribeAnomalyDetectionExecutions(const DescribeAnomalyDetectionExecutionsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeAnomalyDetectionExecutions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAnomalyDetectionExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAnomalyDetectionExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeAnomalyDetectionExecutions");
  return DescribeAnomalyDetectionExecutionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAnomalyDetectorOutcome LookoutMetricsClient::DescribeAnomalyDetector(const DescribeAnomalyDetectorRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeAnomalyDetector);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeAnomalyDetector");
  return DescribeAnomalyDetectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMetricSetOutcome LookoutMetricsClient::DescribeMetricSet(const DescribeMetricSetRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeMetricSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMetricSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMetricSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeMetricSet");
  return DescribeMetricSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetectMetricSetConfigOutcome LookoutMetricsClient::DetectMetricSetConfig(const DetectMetricSetConfigRequest& request) const
{
  AWS_OPERATION_GUARD(DetectMetricSetConfig);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetectMetricSetConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetectMetricSetConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DetectMetricSetConfig");
  return DetectMetricSetConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAnomalyGroupOutcome LookoutMetricsClient::GetAnomalyGroup(const GetAnomalyGroupRequest& request) const
{
  AWS_OPERATION_GUARD(GetAnomalyGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAnomalyGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAnomalyGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetAnomalyGroup");
  return GetAnomalyGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDataQualityMetricsOutcome LookoutMetricsClient::GetDataQualityMetrics(const GetDataQualityMetricsRequest& request) const
{
  AWS_OPERATION_GUARD(GetDataQualityMetrics);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDataQualityMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDataQualityMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetDataQualityMetrics");
  return GetDataQualityMetricsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFeedbackOutcome LookoutMetricsClient::GetFeedback(const GetFeedbackRequest& request) const
{
  AWS_OPERATION_GUARD(GetFeedback);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetFeedback");
  return GetFeedbackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSampleDataOutcome LookoutMetricsClient::GetSampleData(const GetSampleDataRequest& request) const
{
  AWS_OPERATION_GUARD(GetSampleData);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSampleData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSampleData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetSampleData");
  return GetSampleDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAlertsOutcome LookoutMetricsClient::ListAlerts(const ListAlertsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAlerts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAlerts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAlerts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListAlerts");
  return ListAlertsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAnomalyDetectorsOutcome LookoutMetricsClient::ListAnomalyDetectors(const ListAnomalyDetectorsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAnomalyDetectors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAnomalyDetectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAnomalyDetectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListAnomalyDetectors");
  return ListAnomalyDetectorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAnomalyGroupRelatedMetricsOutcome LookoutMetricsClient::ListAnomalyGroupRelatedMetrics(const ListAnomalyGroupRelatedMetricsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAnomalyGroupRelatedMetrics);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAnomalyGroupRelatedMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAnomalyGroupRelatedMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListAnomalyGroupRelatedMetrics");
  return ListAnomalyGroupRelatedMetricsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAnomalyGroupSummariesOutcome LookoutMetricsClient::ListAnomalyGroupSummaries(const ListAnomalyGroupSummariesRequest& request) const
{
  AWS_OPERATION_GUARD(ListAnomalyGroupSummaries);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAnomalyGroupSummaries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAnomalyGroupSummaries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListAnomalyGroupSummaries");
  return ListAnomalyGroupSummariesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAnomalyGroupTimeSeriesOutcome LookoutMetricsClient::ListAnomalyGroupTimeSeries(const ListAnomalyGroupTimeSeriesRequest& request) const
{
  AWS_OPERATION_GUARD(ListAnomalyGroupTimeSeries);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAnomalyGroupTimeSeries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAnomalyGroupTimeSeries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListAnomalyGroupTimeSeries");
  return ListAnomalyGroupTimeSeriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMetricSetsOutcome LookoutMetricsClient::ListMetricSets(const ListMetricSetsRequest& request) const
{
  AWS_OPERATION_GUARD(ListMetricSets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMetricSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMetricSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListMetricSets");
  return ListMetricSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome LookoutMetricsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<LookoutMetricsErrors>(LookoutMetricsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

PutFeedbackOutcome LookoutMetricsClient::PutFeedback(const PutFeedbackRequest& request) const
{
  AWS_OPERATION_GUARD(PutFeedback);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/PutFeedback");
  return PutFeedbackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome LookoutMetricsClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<LookoutMetricsErrors>(LookoutMetricsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome LookoutMetricsClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LookoutMetricsErrors>(LookoutMetricsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LookoutMetricsErrors>(LookoutMetricsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdateAlertOutcome LookoutMetricsClient::UpdateAlert(const UpdateAlertRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAlert);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAlert, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAlert, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateAlert");
  return UpdateAlertOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAnomalyDetectorOutcome LookoutMetricsClient::UpdateAnomalyDetector(const UpdateAnomalyDetectorRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAnomalyDetector);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateAnomalyDetector");
  return UpdateAnomalyDetectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMetricSetOutcome LookoutMetricsClient::UpdateMetricSet(const UpdateMetricSetRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateMetricSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMetricSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMetricSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateMetricSet");
  return UpdateMetricSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

