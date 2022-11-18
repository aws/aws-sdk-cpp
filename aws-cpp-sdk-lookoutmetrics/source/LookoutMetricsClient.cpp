/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
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
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ActivateAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ActivateAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ActivateAnomalyDetector");
  return ActivateAnomalyDetectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ActivateAnomalyDetectorOutcomeCallable LookoutMetricsClient::ActivateAnomalyDetectorCallable(const ActivateAnomalyDetectorRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ActivateAnomalyDetector, request, m_executor.get());
}

void LookoutMetricsClient::ActivateAnomalyDetectorAsync(const ActivateAnomalyDetectorRequest& request, const ActivateAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ActivateAnomalyDetector, request, handler, context, m_executor.get());
}

BackTestAnomalyDetectorOutcome LookoutMetricsClient::BackTestAnomalyDetector(const BackTestAnomalyDetectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BackTestAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BackTestAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/BackTestAnomalyDetector");
  return BackTestAnomalyDetectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BackTestAnomalyDetectorOutcomeCallable LookoutMetricsClient::BackTestAnomalyDetectorCallable(const BackTestAnomalyDetectorRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(BackTestAnomalyDetector, request, m_executor.get());
}

void LookoutMetricsClient::BackTestAnomalyDetectorAsync(const BackTestAnomalyDetectorRequest& request, const BackTestAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(BackTestAnomalyDetector, request, handler, context, m_executor.get());
}

CreateAlertOutcome LookoutMetricsClient::CreateAlert(const CreateAlertRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAlert, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAlert, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CreateAlert");
  return CreateAlertOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAlertOutcomeCallable LookoutMetricsClient::CreateAlertCallable(const CreateAlertRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateAlert, request, m_executor.get());
}

void LookoutMetricsClient::CreateAlertAsync(const CreateAlertRequest& request, const CreateAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateAlert, request, handler, context, m_executor.get());
}

CreateAnomalyDetectorOutcome LookoutMetricsClient::CreateAnomalyDetector(const CreateAnomalyDetectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CreateAnomalyDetector");
  return CreateAnomalyDetectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAnomalyDetectorOutcomeCallable LookoutMetricsClient::CreateAnomalyDetectorCallable(const CreateAnomalyDetectorRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateAnomalyDetector, request, m_executor.get());
}

void LookoutMetricsClient::CreateAnomalyDetectorAsync(const CreateAnomalyDetectorRequest& request, const CreateAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateAnomalyDetector, request, handler, context, m_executor.get());
}

CreateMetricSetOutcome LookoutMetricsClient::CreateMetricSet(const CreateMetricSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMetricSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMetricSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CreateMetricSet");
  return CreateMetricSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMetricSetOutcomeCallable LookoutMetricsClient::CreateMetricSetCallable(const CreateMetricSetRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateMetricSet, request, m_executor.get());
}

void LookoutMetricsClient::CreateMetricSetAsync(const CreateMetricSetRequest& request, const CreateMetricSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateMetricSet, request, handler, context, m_executor.get());
}

DeactivateAnomalyDetectorOutcome LookoutMetricsClient::DeactivateAnomalyDetector(const DeactivateAnomalyDetectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeactivateAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeactivateAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeactivateAnomalyDetector");
  return DeactivateAnomalyDetectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeactivateAnomalyDetectorOutcomeCallable LookoutMetricsClient::DeactivateAnomalyDetectorCallable(const DeactivateAnomalyDetectorRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeactivateAnomalyDetector, request, m_executor.get());
}

void LookoutMetricsClient::DeactivateAnomalyDetectorAsync(const DeactivateAnomalyDetectorRequest& request, const DeactivateAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeactivateAnomalyDetector, request, handler, context, m_executor.get());
}

DeleteAlertOutcome LookoutMetricsClient::DeleteAlert(const DeleteAlertRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAlert, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAlert, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteAlert");
  return DeleteAlertOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAlertOutcomeCallable LookoutMetricsClient::DeleteAlertCallable(const DeleteAlertRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteAlert, request, m_executor.get());
}

void LookoutMetricsClient::DeleteAlertAsync(const DeleteAlertRequest& request, const DeleteAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteAlert, request, handler, context, m_executor.get());
}

DeleteAnomalyDetectorOutcome LookoutMetricsClient::DeleteAnomalyDetector(const DeleteAnomalyDetectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteAnomalyDetector");
  return DeleteAnomalyDetectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAnomalyDetectorOutcomeCallable LookoutMetricsClient::DeleteAnomalyDetectorCallable(const DeleteAnomalyDetectorRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteAnomalyDetector, request, m_executor.get());
}

void LookoutMetricsClient::DeleteAnomalyDetectorAsync(const DeleteAnomalyDetectorRequest& request, const DeleteAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteAnomalyDetector, request, handler, context, m_executor.get());
}

DescribeAlertOutcome LookoutMetricsClient::DescribeAlert(const DescribeAlertRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAlert, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAlert, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeAlert");
  return DescribeAlertOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAlertOutcomeCallable LookoutMetricsClient::DescribeAlertCallable(const DescribeAlertRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeAlert, request, m_executor.get());
}

void LookoutMetricsClient::DescribeAlertAsync(const DescribeAlertRequest& request, const DescribeAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeAlert, request, handler, context, m_executor.get());
}

DescribeAnomalyDetectionExecutionsOutcome LookoutMetricsClient::DescribeAnomalyDetectionExecutions(const DescribeAnomalyDetectionExecutionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAnomalyDetectionExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAnomalyDetectionExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeAnomalyDetectionExecutions");
  return DescribeAnomalyDetectionExecutionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAnomalyDetectionExecutionsOutcomeCallable LookoutMetricsClient::DescribeAnomalyDetectionExecutionsCallable(const DescribeAnomalyDetectionExecutionsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeAnomalyDetectionExecutions, request, m_executor.get());
}

void LookoutMetricsClient::DescribeAnomalyDetectionExecutionsAsync(const DescribeAnomalyDetectionExecutionsRequest& request, const DescribeAnomalyDetectionExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeAnomalyDetectionExecutions, request, handler, context, m_executor.get());
}

DescribeAnomalyDetectorOutcome LookoutMetricsClient::DescribeAnomalyDetector(const DescribeAnomalyDetectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeAnomalyDetector");
  return DescribeAnomalyDetectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAnomalyDetectorOutcomeCallable LookoutMetricsClient::DescribeAnomalyDetectorCallable(const DescribeAnomalyDetectorRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeAnomalyDetector, request, m_executor.get());
}

void LookoutMetricsClient::DescribeAnomalyDetectorAsync(const DescribeAnomalyDetectorRequest& request, const DescribeAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeAnomalyDetector, request, handler, context, m_executor.get());
}

DescribeMetricSetOutcome LookoutMetricsClient::DescribeMetricSet(const DescribeMetricSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMetricSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMetricSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeMetricSet");
  return DescribeMetricSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMetricSetOutcomeCallable LookoutMetricsClient::DescribeMetricSetCallable(const DescribeMetricSetRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeMetricSet, request, m_executor.get());
}

void LookoutMetricsClient::DescribeMetricSetAsync(const DescribeMetricSetRequest& request, const DescribeMetricSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeMetricSet, request, handler, context, m_executor.get());
}

DetectMetricSetConfigOutcome LookoutMetricsClient::DetectMetricSetConfig(const DetectMetricSetConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetectMetricSetConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetectMetricSetConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DetectMetricSetConfig");
  return DetectMetricSetConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetectMetricSetConfigOutcomeCallable LookoutMetricsClient::DetectMetricSetConfigCallable(const DetectMetricSetConfigRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DetectMetricSetConfig, request, m_executor.get());
}

void LookoutMetricsClient::DetectMetricSetConfigAsync(const DetectMetricSetConfigRequest& request, const DetectMetricSetConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DetectMetricSetConfig, request, handler, context, m_executor.get());
}

GetAnomalyGroupOutcome LookoutMetricsClient::GetAnomalyGroup(const GetAnomalyGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAnomalyGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAnomalyGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetAnomalyGroup");
  return GetAnomalyGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAnomalyGroupOutcomeCallable LookoutMetricsClient::GetAnomalyGroupCallable(const GetAnomalyGroupRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetAnomalyGroup, request, m_executor.get());
}

void LookoutMetricsClient::GetAnomalyGroupAsync(const GetAnomalyGroupRequest& request, const GetAnomalyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetAnomalyGroup, request, handler, context, m_executor.get());
}

GetDataQualityMetricsOutcome LookoutMetricsClient::GetDataQualityMetrics(const GetDataQualityMetricsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDataQualityMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDataQualityMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetDataQualityMetrics");
  return GetDataQualityMetricsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDataQualityMetricsOutcomeCallable LookoutMetricsClient::GetDataQualityMetricsCallable(const GetDataQualityMetricsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetDataQualityMetrics, request, m_executor.get());
}

void LookoutMetricsClient::GetDataQualityMetricsAsync(const GetDataQualityMetricsRequest& request, const GetDataQualityMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetDataQualityMetrics, request, handler, context, m_executor.get());
}

GetFeedbackOutcome LookoutMetricsClient::GetFeedback(const GetFeedbackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetFeedback");
  return GetFeedbackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFeedbackOutcomeCallable LookoutMetricsClient::GetFeedbackCallable(const GetFeedbackRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetFeedback, request, m_executor.get());
}

void LookoutMetricsClient::GetFeedbackAsync(const GetFeedbackRequest& request, const GetFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetFeedback, request, handler, context, m_executor.get());
}

GetSampleDataOutcome LookoutMetricsClient::GetSampleData(const GetSampleDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSampleData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSampleData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetSampleData");
  return GetSampleDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSampleDataOutcomeCallable LookoutMetricsClient::GetSampleDataCallable(const GetSampleDataRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetSampleData, request, m_executor.get());
}

void LookoutMetricsClient::GetSampleDataAsync(const GetSampleDataRequest& request, const GetSampleDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetSampleData, request, handler, context, m_executor.get());
}

ListAlertsOutcome LookoutMetricsClient::ListAlerts(const ListAlertsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAlerts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAlerts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListAlerts");
  return ListAlertsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAlertsOutcomeCallable LookoutMetricsClient::ListAlertsCallable(const ListAlertsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListAlerts, request, m_executor.get());
}

void LookoutMetricsClient::ListAlertsAsync(const ListAlertsRequest& request, const ListAlertsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListAlerts, request, handler, context, m_executor.get());
}

ListAnomalyDetectorsOutcome LookoutMetricsClient::ListAnomalyDetectors(const ListAnomalyDetectorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAnomalyDetectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAnomalyDetectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListAnomalyDetectors");
  return ListAnomalyDetectorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAnomalyDetectorsOutcomeCallable LookoutMetricsClient::ListAnomalyDetectorsCallable(const ListAnomalyDetectorsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListAnomalyDetectors, request, m_executor.get());
}

void LookoutMetricsClient::ListAnomalyDetectorsAsync(const ListAnomalyDetectorsRequest& request, const ListAnomalyDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListAnomalyDetectors, request, handler, context, m_executor.get());
}

ListAnomalyGroupRelatedMetricsOutcome LookoutMetricsClient::ListAnomalyGroupRelatedMetrics(const ListAnomalyGroupRelatedMetricsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAnomalyGroupRelatedMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAnomalyGroupRelatedMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListAnomalyGroupRelatedMetrics");
  return ListAnomalyGroupRelatedMetricsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAnomalyGroupRelatedMetricsOutcomeCallable LookoutMetricsClient::ListAnomalyGroupRelatedMetricsCallable(const ListAnomalyGroupRelatedMetricsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListAnomalyGroupRelatedMetrics, request, m_executor.get());
}

void LookoutMetricsClient::ListAnomalyGroupRelatedMetricsAsync(const ListAnomalyGroupRelatedMetricsRequest& request, const ListAnomalyGroupRelatedMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListAnomalyGroupRelatedMetrics, request, handler, context, m_executor.get());
}

ListAnomalyGroupSummariesOutcome LookoutMetricsClient::ListAnomalyGroupSummaries(const ListAnomalyGroupSummariesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAnomalyGroupSummaries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAnomalyGroupSummaries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListAnomalyGroupSummaries");
  return ListAnomalyGroupSummariesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAnomalyGroupSummariesOutcomeCallable LookoutMetricsClient::ListAnomalyGroupSummariesCallable(const ListAnomalyGroupSummariesRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListAnomalyGroupSummaries, request, m_executor.get());
}

void LookoutMetricsClient::ListAnomalyGroupSummariesAsync(const ListAnomalyGroupSummariesRequest& request, const ListAnomalyGroupSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListAnomalyGroupSummaries, request, handler, context, m_executor.get());
}

ListAnomalyGroupTimeSeriesOutcome LookoutMetricsClient::ListAnomalyGroupTimeSeries(const ListAnomalyGroupTimeSeriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAnomalyGroupTimeSeries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAnomalyGroupTimeSeries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListAnomalyGroupTimeSeries");
  return ListAnomalyGroupTimeSeriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAnomalyGroupTimeSeriesOutcomeCallable LookoutMetricsClient::ListAnomalyGroupTimeSeriesCallable(const ListAnomalyGroupTimeSeriesRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListAnomalyGroupTimeSeries, request, m_executor.get());
}

void LookoutMetricsClient::ListAnomalyGroupTimeSeriesAsync(const ListAnomalyGroupTimeSeriesRequest& request, const ListAnomalyGroupTimeSeriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListAnomalyGroupTimeSeries, request, handler, context, m_executor.get());
}

ListMetricSetsOutcome LookoutMetricsClient::ListMetricSets(const ListMetricSetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMetricSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMetricSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListMetricSets");
  return ListMetricSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMetricSetsOutcomeCallable LookoutMetricsClient::ListMetricSetsCallable(const ListMetricSetsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListMetricSets, request, m_executor.get());
}

void LookoutMetricsClient::ListMetricSetsAsync(const ListMetricSetsRequest& request, const ListMetricSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListMetricSets, request, handler, context, m_executor.get());
}

ListTagsForResourceOutcome LookoutMetricsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
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

ListTagsForResourceOutcomeCallable LookoutMetricsClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListTagsForResource, request, m_executor.get());
}

void LookoutMetricsClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListTagsForResource, request, handler, context, m_executor.get());
}

PutFeedbackOutcome LookoutMetricsClient::PutFeedback(const PutFeedbackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/PutFeedback");
  return PutFeedbackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutFeedbackOutcomeCallable LookoutMetricsClient::PutFeedbackCallable(const PutFeedbackRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(PutFeedback, request, m_executor.get());
}

void LookoutMetricsClient::PutFeedbackAsync(const PutFeedbackRequest& request, const PutFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(PutFeedback, request, handler, context, m_executor.get());
}

TagResourceOutcome LookoutMetricsClient::TagResource(const TagResourceRequest& request) const
{
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

TagResourceOutcomeCallable LookoutMetricsClient::TagResourceCallable(const TagResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(TagResource, request, m_executor.get());
}

void LookoutMetricsClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(TagResource, request, handler, context, m_executor.get());
}

UntagResourceOutcome LookoutMetricsClient::UntagResource(const UntagResourceRequest& request) const
{
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

UntagResourceOutcomeCallable LookoutMetricsClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UntagResource, request, m_executor.get());
}

void LookoutMetricsClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UntagResource, request, handler, context, m_executor.get());
}

UpdateAlertOutcome LookoutMetricsClient::UpdateAlert(const UpdateAlertRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAlert, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAlert, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateAlert");
  return UpdateAlertOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAlertOutcomeCallable LookoutMetricsClient::UpdateAlertCallable(const UpdateAlertRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateAlert, request, m_executor.get());
}

void LookoutMetricsClient::UpdateAlertAsync(const UpdateAlertRequest& request, const UpdateAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateAlert, request, handler, context, m_executor.get());
}

UpdateAnomalyDetectorOutcome LookoutMetricsClient::UpdateAnomalyDetector(const UpdateAnomalyDetectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateAnomalyDetector");
  return UpdateAnomalyDetectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAnomalyDetectorOutcomeCallable LookoutMetricsClient::UpdateAnomalyDetectorCallable(const UpdateAnomalyDetectorRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateAnomalyDetector, request, m_executor.get());
}

void LookoutMetricsClient::UpdateAnomalyDetectorAsync(const UpdateAnomalyDetectorRequest& request, const UpdateAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateAnomalyDetector, request, handler, context, m_executor.get());
}

UpdateMetricSetOutcome LookoutMetricsClient::UpdateMetricSet(const UpdateMetricSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMetricSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMetricSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateMetricSet");
  return UpdateMetricSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMetricSetOutcomeCallable LookoutMetricsClient::UpdateMetricSetCallable(const UpdateMetricSetRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateMetricSet, request, m_executor.get());
}

void LookoutMetricsClient::UpdateMetricSetAsync(const UpdateMetricSetRequest& request, const UpdateMetricSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateMetricSet, request, handler, context, m_executor.get());
}

