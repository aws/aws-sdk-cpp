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
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/monitoring/CloudWatchClient.h>
#include <aws/monitoring/CloudWatchErrorMarshaller.h>
#include <aws/monitoring/CloudWatchEndpointProvider.h>
#include <aws/monitoring/model/DeleteAlarmsRequest.h>
#include <aws/monitoring/model/DeleteAnomalyDetectorRequest.h>
#include <aws/monitoring/model/DeleteDashboardsRequest.h>
#include <aws/monitoring/model/DeleteInsightRulesRequest.h>
#include <aws/monitoring/model/DeleteMetricStreamRequest.h>
#include <aws/monitoring/model/DescribeAlarmHistoryRequest.h>
#include <aws/monitoring/model/DescribeAlarmsRequest.h>
#include <aws/monitoring/model/DescribeAlarmsForMetricRequest.h>
#include <aws/monitoring/model/DescribeAnomalyDetectorsRequest.h>
#include <aws/monitoring/model/DescribeInsightRulesRequest.h>
#include <aws/monitoring/model/DisableAlarmActionsRequest.h>
#include <aws/monitoring/model/DisableInsightRulesRequest.h>
#include <aws/monitoring/model/EnableAlarmActionsRequest.h>
#include <aws/monitoring/model/EnableInsightRulesRequest.h>
#include <aws/monitoring/model/GetDashboardRequest.h>
#include <aws/monitoring/model/GetInsightRuleReportRequest.h>
#include <aws/monitoring/model/GetMetricDataRequest.h>
#include <aws/monitoring/model/GetMetricStatisticsRequest.h>
#include <aws/monitoring/model/GetMetricStreamRequest.h>
#include <aws/monitoring/model/GetMetricWidgetImageRequest.h>
#include <aws/monitoring/model/ListDashboardsRequest.h>
#include <aws/monitoring/model/ListManagedInsightRulesRequest.h>
#include <aws/monitoring/model/ListMetricStreamsRequest.h>
#include <aws/monitoring/model/ListMetricsRequest.h>
#include <aws/monitoring/model/ListTagsForResourceRequest.h>
#include <aws/monitoring/model/PutAnomalyDetectorRequest.h>
#include <aws/monitoring/model/PutCompositeAlarmRequest.h>
#include <aws/monitoring/model/PutDashboardRequest.h>
#include <aws/monitoring/model/PutInsightRuleRequest.h>
#include <aws/monitoring/model/PutManagedInsightRulesRequest.h>
#include <aws/monitoring/model/PutMetricAlarmRequest.h>
#include <aws/monitoring/model/PutMetricDataRequest.h>
#include <aws/monitoring/model/PutMetricStreamRequest.h>
#include <aws/monitoring/model/SetAlarmStateRequest.h>
#include <aws/monitoring/model/StartMetricStreamsRequest.h>
#include <aws/monitoring/model/StopMetricStreamsRequest.h>
#include <aws/monitoring/model/TagResourceRequest.h>
#include <aws/monitoring/model/UntagResourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudWatch;
using namespace Aws::CloudWatch::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;


const char* CloudWatchClient::SERVICE_NAME = "monitoring";
const char* CloudWatchClient::ALLOCATION_TAG = "CloudWatchClient";

CloudWatchClient::CloudWatchClient(const CloudWatch::CloudWatchClientConfiguration& clientConfiguration,
                                   std::shared_ptr<CloudWatchEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CloudWatchClient::CloudWatchClient(const AWSCredentials& credentials,
                                   std::shared_ptr<CloudWatchEndpointProviderBase> endpointProvider,
                                   const CloudWatch::CloudWatchClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CloudWatchClient::CloudWatchClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<CloudWatchEndpointProviderBase> endpointProvider,
                                   const CloudWatch::CloudWatchClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  CloudWatchClient::CloudWatchClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<CloudWatchEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CloudWatchClient::CloudWatchClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CloudWatchEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CloudWatchClient::CloudWatchClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CloudWatchEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
CloudWatchClient::~CloudWatchClient()
{
}

std::shared_ptr<CloudWatchEndpointProviderBase>& CloudWatchClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void CloudWatchClient::init(const CloudWatch::CloudWatchClientConfiguration& config)
{
  AWSClient::SetServiceClientName("CloudWatch");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void CloudWatchClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

Aws::String CloudWatchClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  if (!m_endpointProvider)
  {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Endpoint provider is not initialized.");
    return "";
  }
  Aws::Endpoint::EndpointParameters endpointParameters;
  endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", Aws::String(region)));
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
  if (!endpointResolutionOutcome.IsSuccess())
  {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Endpoint resolution failed: " << endpointResolutionOutcome.GetError().GetMessage());
    return "";
  }
  Aws::StringStream ss;
  ss << "?" << requestToConvert.SerializePayload();
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());

  return GeneratePresignedUrl(endpointResolutionOutcome.GetResult().GetURI(), Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

DeleteAlarmsOutcome CloudWatchClient::DeleteAlarms(const DeleteAlarmsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAlarms, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAlarms, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAlarmsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteAlarmsOutcomeCallable CloudWatchClient::DeleteAlarmsCallable(const DeleteAlarmsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAlarmsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAlarms(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::DeleteAlarmsAsync(const DeleteAlarmsRequest& request, const DeleteAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAlarms(request), context);
    } );
}

DeleteAnomalyDetectorOutcome CloudWatchClient::DeleteAnomalyDetector(const DeleteAnomalyDetectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAnomalyDetectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteAnomalyDetectorOutcomeCallable CloudWatchClient::DeleteAnomalyDetectorCallable(const DeleteAnomalyDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAnomalyDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAnomalyDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::DeleteAnomalyDetectorAsync(const DeleteAnomalyDetectorRequest& request, const DeleteAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAnomalyDetector(request), context);
    } );
}

DeleteDashboardsOutcome CloudWatchClient::DeleteDashboards(const DeleteDashboardsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDashboards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDashboards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDashboardsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDashboardsOutcomeCallable CloudWatchClient::DeleteDashboardsCallable(const DeleteDashboardsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDashboardsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDashboards(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::DeleteDashboardsAsync(const DeleteDashboardsRequest& request, const DeleteDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDashboards(request), context);
    } );
}

DeleteInsightRulesOutcome CloudWatchClient::DeleteInsightRules(const DeleteInsightRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInsightRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInsightRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteInsightRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteInsightRulesOutcomeCallable CloudWatchClient::DeleteInsightRulesCallable(const DeleteInsightRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInsightRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInsightRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::DeleteInsightRulesAsync(const DeleteInsightRulesRequest& request, const DeleteInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteInsightRules(request), context);
    } );
}

DeleteMetricStreamOutcome CloudWatchClient::DeleteMetricStream(const DeleteMetricStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMetricStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMetricStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteMetricStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteMetricStreamOutcomeCallable CloudWatchClient::DeleteMetricStreamCallable(const DeleteMetricStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMetricStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMetricStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::DeleteMetricStreamAsync(const DeleteMetricStreamRequest& request, const DeleteMetricStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteMetricStream(request), context);
    } );
}

DescribeAlarmHistoryOutcome CloudWatchClient::DescribeAlarmHistory(const DescribeAlarmHistoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAlarmHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAlarmHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAlarmHistoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAlarmHistoryOutcomeCallable CloudWatchClient::DescribeAlarmHistoryCallable(const DescribeAlarmHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAlarmHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAlarmHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::DescribeAlarmHistoryAsync(const DescribeAlarmHistoryRequest& request, const DescribeAlarmHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAlarmHistory(request), context);
    } );
}

DescribeAlarmsOutcome CloudWatchClient::DescribeAlarms(const DescribeAlarmsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAlarms, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAlarms, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAlarmsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAlarmsOutcomeCallable CloudWatchClient::DescribeAlarmsCallable(const DescribeAlarmsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAlarmsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAlarms(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::DescribeAlarmsAsync(const DescribeAlarmsRequest& request, const DescribeAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAlarms(request), context);
    } );
}

DescribeAlarmsForMetricOutcome CloudWatchClient::DescribeAlarmsForMetric(const DescribeAlarmsForMetricRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAlarmsForMetric, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAlarmsForMetric, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAlarmsForMetricOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAlarmsForMetricOutcomeCallable CloudWatchClient::DescribeAlarmsForMetricCallable(const DescribeAlarmsForMetricRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAlarmsForMetricOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAlarmsForMetric(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::DescribeAlarmsForMetricAsync(const DescribeAlarmsForMetricRequest& request, const DescribeAlarmsForMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAlarmsForMetric(request), context);
    } );
}

DescribeAnomalyDetectorsOutcome CloudWatchClient::DescribeAnomalyDetectors(const DescribeAnomalyDetectorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAnomalyDetectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAnomalyDetectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAnomalyDetectorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAnomalyDetectorsOutcomeCallable CloudWatchClient::DescribeAnomalyDetectorsCallable(const DescribeAnomalyDetectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAnomalyDetectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAnomalyDetectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::DescribeAnomalyDetectorsAsync(const DescribeAnomalyDetectorsRequest& request, const DescribeAnomalyDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAnomalyDetectors(request), context);
    } );
}

DescribeInsightRulesOutcome CloudWatchClient::DescribeInsightRules(const DescribeInsightRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInsightRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInsightRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeInsightRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeInsightRulesOutcomeCallable CloudWatchClient::DescribeInsightRulesCallable(const DescribeInsightRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInsightRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInsightRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::DescribeInsightRulesAsync(const DescribeInsightRulesRequest& request, const DescribeInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeInsightRules(request), context);
    } );
}

DisableAlarmActionsOutcome CloudWatchClient::DisableAlarmActions(const DisableAlarmActionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableAlarmActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableAlarmActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableAlarmActionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableAlarmActionsOutcomeCallable CloudWatchClient::DisableAlarmActionsCallable(const DisableAlarmActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableAlarmActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableAlarmActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::DisableAlarmActionsAsync(const DisableAlarmActionsRequest& request, const DisableAlarmActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisableAlarmActions(request), context);
    } );
}

DisableInsightRulesOutcome CloudWatchClient::DisableInsightRules(const DisableInsightRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableInsightRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableInsightRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableInsightRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableInsightRulesOutcomeCallable CloudWatchClient::DisableInsightRulesCallable(const DisableInsightRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableInsightRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableInsightRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::DisableInsightRulesAsync(const DisableInsightRulesRequest& request, const DisableInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisableInsightRules(request), context);
    } );
}

EnableAlarmActionsOutcome CloudWatchClient::EnableAlarmActions(const EnableAlarmActionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableAlarmActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableAlarmActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableAlarmActionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableAlarmActionsOutcomeCallable CloudWatchClient::EnableAlarmActionsCallable(const EnableAlarmActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableAlarmActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableAlarmActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::EnableAlarmActionsAsync(const EnableAlarmActionsRequest& request, const EnableAlarmActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, EnableAlarmActions(request), context);
    } );
}

EnableInsightRulesOutcome CloudWatchClient::EnableInsightRules(const EnableInsightRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableInsightRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableInsightRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableInsightRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableInsightRulesOutcomeCallable CloudWatchClient::EnableInsightRulesCallable(const EnableInsightRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableInsightRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableInsightRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::EnableInsightRulesAsync(const EnableInsightRulesRequest& request, const EnableInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, EnableInsightRules(request), context);
    } );
}

GetDashboardOutcome CloudWatchClient::GetDashboard(const GetDashboardRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDashboard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDashboard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDashboardOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetDashboardOutcomeCallable CloudWatchClient::GetDashboardCallable(const GetDashboardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDashboardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDashboard(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::GetDashboardAsync(const GetDashboardRequest& request, const GetDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDashboard(request), context);
    } );
}

GetInsightRuleReportOutcome CloudWatchClient::GetInsightRuleReport(const GetInsightRuleReportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInsightRuleReport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInsightRuleReport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInsightRuleReportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetInsightRuleReportOutcomeCallable CloudWatchClient::GetInsightRuleReportCallable(const GetInsightRuleReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInsightRuleReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInsightRuleReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::GetInsightRuleReportAsync(const GetInsightRuleReportRequest& request, const GetInsightRuleReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetInsightRuleReport(request), context);
    } );
}

GetMetricDataOutcome CloudWatchClient::GetMetricData(const GetMetricDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetMetricDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetMetricDataOutcomeCallable CloudWatchClient::GetMetricDataCallable(const GetMetricDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMetricDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMetricData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::GetMetricDataAsync(const GetMetricDataRequest& request, const GetMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMetricData(request), context);
    } );
}

GetMetricStatisticsOutcome CloudWatchClient::GetMetricStatistics(const GetMetricStatisticsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMetricStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMetricStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetMetricStatisticsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetMetricStatisticsOutcomeCallable CloudWatchClient::GetMetricStatisticsCallable(const GetMetricStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMetricStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMetricStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::GetMetricStatisticsAsync(const GetMetricStatisticsRequest& request, const GetMetricStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMetricStatistics(request), context);
    } );
}

GetMetricStreamOutcome CloudWatchClient::GetMetricStream(const GetMetricStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMetricStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMetricStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetMetricStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetMetricStreamOutcomeCallable CloudWatchClient::GetMetricStreamCallable(const GetMetricStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMetricStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMetricStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::GetMetricStreamAsync(const GetMetricStreamRequest& request, const GetMetricStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMetricStream(request), context);
    } );
}

GetMetricWidgetImageOutcome CloudWatchClient::GetMetricWidgetImage(const GetMetricWidgetImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMetricWidgetImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMetricWidgetImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetMetricWidgetImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetMetricWidgetImageOutcomeCallable CloudWatchClient::GetMetricWidgetImageCallable(const GetMetricWidgetImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMetricWidgetImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMetricWidgetImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::GetMetricWidgetImageAsync(const GetMetricWidgetImageRequest& request, const GetMetricWidgetImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMetricWidgetImage(request), context);
    } );
}

ListDashboardsOutcome CloudWatchClient::ListDashboards(const ListDashboardsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDashboards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDashboards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDashboardsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListDashboardsOutcomeCallable CloudWatchClient::ListDashboardsCallable(const ListDashboardsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDashboardsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDashboards(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::ListDashboardsAsync(const ListDashboardsRequest& request, const ListDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDashboards(request), context);
    } );
}

ListManagedInsightRulesOutcome CloudWatchClient::ListManagedInsightRules(const ListManagedInsightRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListManagedInsightRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListManagedInsightRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListManagedInsightRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListManagedInsightRulesOutcomeCallable CloudWatchClient::ListManagedInsightRulesCallable(const ListManagedInsightRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListManagedInsightRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListManagedInsightRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::ListManagedInsightRulesAsync(const ListManagedInsightRulesRequest& request, const ListManagedInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListManagedInsightRules(request), context);
    } );
}

ListMetricStreamsOutcome CloudWatchClient::ListMetricStreams(const ListMetricStreamsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMetricStreams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMetricStreams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListMetricStreamsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListMetricStreamsOutcomeCallable CloudWatchClient::ListMetricStreamsCallable(const ListMetricStreamsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMetricStreamsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMetricStreams(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::ListMetricStreamsAsync(const ListMetricStreamsRequest& request, const ListMetricStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMetricStreams(request), context);
    } );
}

ListMetricsOutcome CloudWatchClient::ListMetrics(const ListMetricsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListMetricsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListMetricsOutcomeCallable CloudWatchClient::ListMetricsCallable(const ListMetricsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMetricsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMetrics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::ListMetricsAsync(const ListMetricsRequest& request, const ListMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMetrics(request), context);
    } );
}

ListTagsForResourceOutcome CloudWatchClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListTagsForResourceOutcomeCallable CloudWatchClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

PutAnomalyDetectorOutcome CloudWatchClient::PutAnomalyDetector(const PutAnomalyDetectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutAnomalyDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutAnomalyDetectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

PutAnomalyDetectorOutcomeCallable CloudWatchClient::PutAnomalyDetectorCallable(const PutAnomalyDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAnomalyDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAnomalyDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::PutAnomalyDetectorAsync(const PutAnomalyDetectorRequest& request, const PutAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutAnomalyDetector(request), context);
    } );
}

PutCompositeAlarmOutcome CloudWatchClient::PutCompositeAlarm(const PutCompositeAlarmRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutCompositeAlarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutCompositeAlarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutCompositeAlarmOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

PutCompositeAlarmOutcomeCallable CloudWatchClient::PutCompositeAlarmCallable(const PutCompositeAlarmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutCompositeAlarmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutCompositeAlarm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::PutCompositeAlarmAsync(const PutCompositeAlarmRequest& request, const PutCompositeAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutCompositeAlarm(request), context);
    } );
}

PutDashboardOutcome CloudWatchClient::PutDashboard(const PutDashboardRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutDashboard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutDashboard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutDashboardOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

PutDashboardOutcomeCallable CloudWatchClient::PutDashboardCallable(const PutDashboardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDashboardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDashboard(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::PutDashboardAsync(const PutDashboardRequest& request, const PutDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutDashboard(request), context);
    } );
}

PutInsightRuleOutcome CloudWatchClient::PutInsightRule(const PutInsightRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutInsightRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutInsightRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutInsightRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

PutInsightRuleOutcomeCallable CloudWatchClient::PutInsightRuleCallable(const PutInsightRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutInsightRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutInsightRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::PutInsightRuleAsync(const PutInsightRuleRequest& request, const PutInsightRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutInsightRule(request), context);
    } );
}

PutManagedInsightRulesOutcome CloudWatchClient::PutManagedInsightRules(const PutManagedInsightRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutManagedInsightRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutManagedInsightRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutManagedInsightRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

PutManagedInsightRulesOutcomeCallable CloudWatchClient::PutManagedInsightRulesCallable(const PutManagedInsightRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutManagedInsightRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutManagedInsightRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::PutManagedInsightRulesAsync(const PutManagedInsightRulesRequest& request, const PutManagedInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutManagedInsightRules(request), context);
    } );
}

PutMetricAlarmOutcome CloudWatchClient::PutMetricAlarm(const PutMetricAlarmRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutMetricAlarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutMetricAlarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutMetricAlarmOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

PutMetricAlarmOutcomeCallable CloudWatchClient::PutMetricAlarmCallable(const PutMetricAlarmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutMetricAlarmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutMetricAlarm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::PutMetricAlarmAsync(const PutMetricAlarmRequest& request, const PutMetricAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutMetricAlarm(request), context);
    } );
}

PutMetricDataOutcome CloudWatchClient::PutMetricData(const PutMetricDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutMetricDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

PutMetricDataOutcomeCallable CloudWatchClient::PutMetricDataCallable(const PutMetricDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutMetricDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutMetricData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::PutMetricDataAsync(const PutMetricDataRequest& request, const PutMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutMetricData(request), context);
    } );
}

PutMetricStreamOutcome CloudWatchClient::PutMetricStream(const PutMetricStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutMetricStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutMetricStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutMetricStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

PutMetricStreamOutcomeCallable CloudWatchClient::PutMetricStreamCallable(const PutMetricStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutMetricStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutMetricStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::PutMetricStreamAsync(const PutMetricStreamRequest& request, const PutMetricStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutMetricStream(request), context);
    } );
}

SetAlarmStateOutcome CloudWatchClient::SetAlarmState(const SetAlarmStateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetAlarmState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetAlarmState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetAlarmStateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

SetAlarmStateOutcomeCallable CloudWatchClient::SetAlarmStateCallable(const SetAlarmStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetAlarmStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetAlarmState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::SetAlarmStateAsync(const SetAlarmStateRequest& request, const SetAlarmStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetAlarmState(request), context);
    } );
}

StartMetricStreamsOutcome CloudWatchClient::StartMetricStreams(const StartMetricStreamsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartMetricStreams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartMetricStreams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartMetricStreamsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

StartMetricStreamsOutcomeCallable CloudWatchClient::StartMetricStreamsCallable(const StartMetricStreamsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMetricStreamsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMetricStreams(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::StartMetricStreamsAsync(const StartMetricStreamsRequest& request, const StartMetricStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartMetricStreams(request), context);
    } );
}

StopMetricStreamsOutcome CloudWatchClient::StopMetricStreams(const StopMetricStreamsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopMetricStreams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopMetricStreams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopMetricStreamsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

StopMetricStreamsOutcomeCallable CloudWatchClient::StopMetricStreamsCallable(const StopMetricStreamsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopMetricStreamsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopMetricStreams(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::StopMetricStreamsAsync(const StopMetricStreamsRequest& request, const StopMetricStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopMetricStreams(request), context);
    } );
}

TagResourceOutcome CloudWatchClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

TagResourceOutcomeCallable CloudWatchClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome CloudWatchClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UntagResourceOutcomeCallable CloudWatchClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

