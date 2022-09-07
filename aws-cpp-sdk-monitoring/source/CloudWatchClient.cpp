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

#include <aws/monitoring/CloudWatchClient.h>
#include <aws/monitoring/CloudWatchEndpoint.h>
#include <aws/monitoring/CloudWatchErrorMarshaller.h>
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


static const char* SERVICE_NAME = "monitoring";
static const char* ALLOCATION_TAG = "CloudWatchClient";

CloudWatchClient::CloudWatchClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchClient::CloudWatchClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchClient::CloudWatchClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchClient::~CloudWatchClient()
{
}

void CloudWatchClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("CloudWatch");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CloudWatchEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CloudWatchClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

Aws::String CloudWatchClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  Aws::StringStream ss;
  ss << "https://" << CloudWatchEndpoint::ForRegion(region);
  ss << "?" << requestToConvert.SerializePayload();

  URI uri(ss.str());
  return GeneratePresignedUrl(uri, Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

DeleteAlarmsOutcome CloudWatchClient::DeleteAlarms(const DeleteAlarmsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAlarmsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteAlarmsOutcomeCallable CloudWatchClient::DeleteAlarmsCallable(const DeleteAlarmsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAlarmsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAlarms(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientDeleteAlarmsAsyncHelper(CloudWatchClient const * const clientThis, const DeleteAlarmsRequest& request, const DeleteAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAlarms(request), context);
}

void CloudWatchClient::DeleteAlarmsAsync(const DeleteAlarmsRequest& request, const DeleteAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientDeleteAlarmsAsyncHelper( this, request, handler, context ); } );
}

DeleteAnomalyDetectorOutcome CloudWatchClient::DeleteAnomalyDetector(const DeleteAnomalyDetectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAnomalyDetectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteAnomalyDetectorOutcomeCallable CloudWatchClient::DeleteAnomalyDetectorCallable(const DeleteAnomalyDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAnomalyDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAnomalyDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientDeleteAnomalyDetectorAsyncHelper(CloudWatchClient const * const clientThis, const DeleteAnomalyDetectorRequest& request, const DeleteAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAnomalyDetector(request), context);
}

void CloudWatchClient::DeleteAnomalyDetectorAsync(const DeleteAnomalyDetectorRequest& request, const DeleteAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientDeleteAnomalyDetectorAsyncHelper( this, request, handler, context ); } );
}

DeleteDashboardsOutcome CloudWatchClient::DeleteDashboards(const DeleteDashboardsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDashboardsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDashboardsOutcomeCallable CloudWatchClient::DeleteDashboardsCallable(const DeleteDashboardsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDashboardsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDashboards(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientDeleteDashboardsAsyncHelper(CloudWatchClient const * const clientThis, const DeleteDashboardsRequest& request, const DeleteDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDashboards(request), context);
}

void CloudWatchClient::DeleteDashboardsAsync(const DeleteDashboardsRequest& request, const DeleteDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientDeleteDashboardsAsyncHelper( this, request, handler, context ); } );
}

DeleteInsightRulesOutcome CloudWatchClient::DeleteInsightRules(const DeleteInsightRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteInsightRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteInsightRulesOutcomeCallable CloudWatchClient::DeleteInsightRulesCallable(const DeleteInsightRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInsightRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInsightRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientDeleteInsightRulesAsyncHelper(CloudWatchClient const * const clientThis, const DeleteInsightRulesRequest& request, const DeleteInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteInsightRules(request), context);
}

void CloudWatchClient::DeleteInsightRulesAsync(const DeleteInsightRulesRequest& request, const DeleteInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientDeleteInsightRulesAsyncHelper( this, request, handler, context ); } );
}

DeleteMetricStreamOutcome CloudWatchClient::DeleteMetricStream(const DeleteMetricStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteMetricStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteMetricStreamOutcomeCallable CloudWatchClient::DeleteMetricStreamCallable(const DeleteMetricStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMetricStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMetricStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientDeleteMetricStreamAsyncHelper(CloudWatchClient const * const clientThis, const DeleteMetricStreamRequest& request, const DeleteMetricStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteMetricStream(request), context);
}

void CloudWatchClient::DeleteMetricStreamAsync(const DeleteMetricStreamRequest& request, const DeleteMetricStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientDeleteMetricStreamAsyncHelper( this, request, handler, context ); } );
}

DescribeAlarmHistoryOutcome CloudWatchClient::DescribeAlarmHistory(const DescribeAlarmHistoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAlarmHistoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAlarmHistoryOutcomeCallable CloudWatchClient::DescribeAlarmHistoryCallable(const DescribeAlarmHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAlarmHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAlarmHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientDescribeAlarmHistoryAsyncHelper(CloudWatchClient const * const clientThis, const DescribeAlarmHistoryRequest& request, const DescribeAlarmHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAlarmHistory(request), context);
}

void CloudWatchClient::DescribeAlarmHistoryAsync(const DescribeAlarmHistoryRequest& request, const DescribeAlarmHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientDescribeAlarmHistoryAsyncHelper( this, request, handler, context ); } );
}

DescribeAlarmsOutcome CloudWatchClient::DescribeAlarms(const DescribeAlarmsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAlarmsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAlarmsOutcomeCallable CloudWatchClient::DescribeAlarmsCallable(const DescribeAlarmsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAlarmsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAlarms(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientDescribeAlarmsAsyncHelper(CloudWatchClient const * const clientThis, const DescribeAlarmsRequest& request, const DescribeAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAlarms(request), context);
}

void CloudWatchClient::DescribeAlarmsAsync(const DescribeAlarmsRequest& request, const DescribeAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientDescribeAlarmsAsyncHelper( this, request, handler, context ); } );
}

DescribeAlarmsForMetricOutcome CloudWatchClient::DescribeAlarmsForMetric(const DescribeAlarmsForMetricRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAlarmsForMetricOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAlarmsForMetricOutcomeCallable CloudWatchClient::DescribeAlarmsForMetricCallable(const DescribeAlarmsForMetricRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAlarmsForMetricOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAlarmsForMetric(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientDescribeAlarmsForMetricAsyncHelper(CloudWatchClient const * const clientThis, const DescribeAlarmsForMetricRequest& request, const DescribeAlarmsForMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAlarmsForMetric(request), context);
}

void CloudWatchClient::DescribeAlarmsForMetricAsync(const DescribeAlarmsForMetricRequest& request, const DescribeAlarmsForMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientDescribeAlarmsForMetricAsyncHelper( this, request, handler, context ); } );
}

DescribeAnomalyDetectorsOutcome CloudWatchClient::DescribeAnomalyDetectors(const DescribeAnomalyDetectorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAnomalyDetectorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAnomalyDetectorsOutcomeCallable CloudWatchClient::DescribeAnomalyDetectorsCallable(const DescribeAnomalyDetectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAnomalyDetectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAnomalyDetectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientDescribeAnomalyDetectorsAsyncHelper(CloudWatchClient const * const clientThis, const DescribeAnomalyDetectorsRequest& request, const DescribeAnomalyDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAnomalyDetectors(request), context);
}

void CloudWatchClient::DescribeAnomalyDetectorsAsync(const DescribeAnomalyDetectorsRequest& request, const DescribeAnomalyDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientDescribeAnomalyDetectorsAsyncHelper( this, request, handler, context ); } );
}

DescribeInsightRulesOutcome CloudWatchClient::DescribeInsightRules(const DescribeInsightRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeInsightRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeInsightRulesOutcomeCallable CloudWatchClient::DescribeInsightRulesCallable(const DescribeInsightRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInsightRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInsightRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientDescribeInsightRulesAsyncHelper(CloudWatchClient const * const clientThis, const DescribeInsightRulesRequest& request, const DescribeInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeInsightRules(request), context);
}

void CloudWatchClient::DescribeInsightRulesAsync(const DescribeInsightRulesRequest& request, const DescribeInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientDescribeInsightRulesAsyncHelper( this, request, handler, context ); } );
}

DisableAlarmActionsOutcome CloudWatchClient::DisableAlarmActions(const DisableAlarmActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisableAlarmActionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DisableAlarmActionsOutcomeCallable CloudWatchClient::DisableAlarmActionsCallable(const DisableAlarmActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableAlarmActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableAlarmActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientDisableAlarmActionsAsyncHelper(CloudWatchClient const * const clientThis, const DisableAlarmActionsRequest& request, const DisableAlarmActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableAlarmActions(request), context);
}

void CloudWatchClient::DisableAlarmActionsAsync(const DisableAlarmActionsRequest& request, const DisableAlarmActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientDisableAlarmActionsAsyncHelper( this, request, handler, context ); } );
}

DisableInsightRulesOutcome CloudWatchClient::DisableInsightRules(const DisableInsightRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisableInsightRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DisableInsightRulesOutcomeCallable CloudWatchClient::DisableInsightRulesCallable(const DisableInsightRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableInsightRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableInsightRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientDisableInsightRulesAsyncHelper(CloudWatchClient const * const clientThis, const DisableInsightRulesRequest& request, const DisableInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableInsightRules(request), context);
}

void CloudWatchClient::DisableInsightRulesAsync(const DisableInsightRulesRequest& request, const DisableInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientDisableInsightRulesAsyncHelper( this, request, handler, context ); } );
}

EnableAlarmActionsOutcome CloudWatchClient::EnableAlarmActions(const EnableAlarmActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EnableAlarmActionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

EnableAlarmActionsOutcomeCallable CloudWatchClient::EnableAlarmActionsCallable(const EnableAlarmActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableAlarmActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableAlarmActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientEnableAlarmActionsAsyncHelper(CloudWatchClient const * const clientThis, const EnableAlarmActionsRequest& request, const EnableAlarmActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableAlarmActions(request), context);
}

void CloudWatchClient::EnableAlarmActionsAsync(const EnableAlarmActionsRequest& request, const EnableAlarmActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientEnableAlarmActionsAsyncHelper( this, request, handler, context ); } );
}

EnableInsightRulesOutcome CloudWatchClient::EnableInsightRules(const EnableInsightRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EnableInsightRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

EnableInsightRulesOutcomeCallable CloudWatchClient::EnableInsightRulesCallable(const EnableInsightRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableInsightRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableInsightRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientEnableInsightRulesAsyncHelper(CloudWatchClient const * const clientThis, const EnableInsightRulesRequest& request, const EnableInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableInsightRules(request), context);
}

void CloudWatchClient::EnableInsightRulesAsync(const EnableInsightRulesRequest& request, const EnableInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientEnableInsightRulesAsyncHelper( this, request, handler, context ); } );
}

GetDashboardOutcome CloudWatchClient::GetDashboard(const GetDashboardRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDashboardOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetDashboardOutcomeCallable CloudWatchClient::GetDashboardCallable(const GetDashboardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDashboardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDashboard(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientGetDashboardAsyncHelper(CloudWatchClient const * const clientThis, const GetDashboardRequest& request, const GetDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDashboard(request), context);
}

void CloudWatchClient::GetDashboardAsync(const GetDashboardRequest& request, const GetDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientGetDashboardAsyncHelper( this, request, handler, context ); } );
}

GetInsightRuleReportOutcome CloudWatchClient::GetInsightRuleReport(const GetInsightRuleReportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetInsightRuleReportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetInsightRuleReportOutcomeCallable CloudWatchClient::GetInsightRuleReportCallable(const GetInsightRuleReportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInsightRuleReportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInsightRuleReport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientGetInsightRuleReportAsyncHelper(CloudWatchClient const * const clientThis, const GetInsightRuleReportRequest& request, const GetInsightRuleReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInsightRuleReport(request), context);
}

void CloudWatchClient::GetInsightRuleReportAsync(const GetInsightRuleReportRequest& request, const GetInsightRuleReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientGetInsightRuleReportAsyncHelper( this, request, handler, context ); } );
}

GetMetricDataOutcome CloudWatchClient::GetMetricData(const GetMetricDataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetMetricDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetMetricDataOutcomeCallable CloudWatchClient::GetMetricDataCallable(const GetMetricDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMetricDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMetricData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientGetMetricDataAsyncHelper(CloudWatchClient const * const clientThis, const GetMetricDataRequest& request, const GetMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMetricData(request), context);
}

void CloudWatchClient::GetMetricDataAsync(const GetMetricDataRequest& request, const GetMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientGetMetricDataAsyncHelper( this, request, handler, context ); } );
}

GetMetricStatisticsOutcome CloudWatchClient::GetMetricStatistics(const GetMetricStatisticsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetMetricStatisticsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetMetricStatisticsOutcomeCallable CloudWatchClient::GetMetricStatisticsCallable(const GetMetricStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMetricStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMetricStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientGetMetricStatisticsAsyncHelper(CloudWatchClient const * const clientThis, const GetMetricStatisticsRequest& request, const GetMetricStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMetricStatistics(request), context);
}

void CloudWatchClient::GetMetricStatisticsAsync(const GetMetricStatisticsRequest& request, const GetMetricStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientGetMetricStatisticsAsyncHelper( this, request, handler, context ); } );
}

GetMetricStreamOutcome CloudWatchClient::GetMetricStream(const GetMetricStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetMetricStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetMetricStreamOutcomeCallable CloudWatchClient::GetMetricStreamCallable(const GetMetricStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMetricStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMetricStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientGetMetricStreamAsyncHelper(CloudWatchClient const * const clientThis, const GetMetricStreamRequest& request, const GetMetricStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMetricStream(request), context);
}

void CloudWatchClient::GetMetricStreamAsync(const GetMetricStreamRequest& request, const GetMetricStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientGetMetricStreamAsyncHelper( this, request, handler, context ); } );
}

GetMetricWidgetImageOutcome CloudWatchClient::GetMetricWidgetImage(const GetMetricWidgetImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetMetricWidgetImageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetMetricWidgetImageOutcomeCallable CloudWatchClient::GetMetricWidgetImageCallable(const GetMetricWidgetImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMetricWidgetImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMetricWidgetImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientGetMetricWidgetImageAsyncHelper(CloudWatchClient const * const clientThis, const GetMetricWidgetImageRequest& request, const GetMetricWidgetImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMetricWidgetImage(request), context);
}

void CloudWatchClient::GetMetricWidgetImageAsync(const GetMetricWidgetImageRequest& request, const GetMetricWidgetImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientGetMetricWidgetImageAsyncHelper( this, request, handler, context ); } );
}

ListDashboardsOutcome CloudWatchClient::ListDashboards(const ListDashboardsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDashboardsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListDashboardsOutcomeCallable CloudWatchClient::ListDashboardsCallable(const ListDashboardsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDashboardsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDashboards(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientListDashboardsAsyncHelper(CloudWatchClient const * const clientThis, const ListDashboardsRequest& request, const ListDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDashboards(request), context);
}

void CloudWatchClient::ListDashboardsAsync(const ListDashboardsRequest& request, const ListDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientListDashboardsAsyncHelper( this, request, handler, context ); } );
}

ListManagedInsightRulesOutcome CloudWatchClient::ListManagedInsightRules(const ListManagedInsightRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListManagedInsightRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListManagedInsightRulesOutcomeCallable CloudWatchClient::ListManagedInsightRulesCallable(const ListManagedInsightRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListManagedInsightRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListManagedInsightRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientListManagedInsightRulesAsyncHelper(CloudWatchClient const * const clientThis, const ListManagedInsightRulesRequest& request, const ListManagedInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListManagedInsightRules(request), context);
}

void CloudWatchClient::ListManagedInsightRulesAsync(const ListManagedInsightRulesRequest& request, const ListManagedInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientListManagedInsightRulesAsyncHelper( this, request, handler, context ); } );
}

ListMetricStreamsOutcome CloudWatchClient::ListMetricStreams(const ListMetricStreamsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListMetricStreamsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListMetricStreamsOutcomeCallable CloudWatchClient::ListMetricStreamsCallable(const ListMetricStreamsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMetricStreamsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMetricStreams(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientListMetricStreamsAsyncHelper(CloudWatchClient const * const clientThis, const ListMetricStreamsRequest& request, const ListMetricStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMetricStreams(request), context);
}

void CloudWatchClient::ListMetricStreamsAsync(const ListMetricStreamsRequest& request, const ListMetricStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientListMetricStreamsAsyncHelper( this, request, handler, context ); } );
}

ListMetricsOutcome CloudWatchClient::ListMetrics(const ListMetricsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListMetricsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListMetricsOutcomeCallable CloudWatchClient::ListMetricsCallable(const ListMetricsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMetricsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMetrics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientListMetricsAsyncHelper(CloudWatchClient const * const clientThis, const ListMetricsRequest& request, const ListMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMetrics(request), context);
}

void CloudWatchClient::ListMetricsAsync(const ListMetricsRequest& request, const ListMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientListMetricsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome CloudWatchClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListTagsForResourceOutcomeCallable CloudWatchClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientListTagsForResourceAsyncHelper(CloudWatchClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void CloudWatchClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

PutAnomalyDetectorOutcome CloudWatchClient::PutAnomalyDetector(const PutAnomalyDetectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutAnomalyDetectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PutAnomalyDetectorOutcomeCallable CloudWatchClient::PutAnomalyDetectorCallable(const PutAnomalyDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAnomalyDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAnomalyDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientPutAnomalyDetectorAsyncHelper(CloudWatchClient const * const clientThis, const PutAnomalyDetectorRequest& request, const PutAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutAnomalyDetector(request), context);
}

void CloudWatchClient::PutAnomalyDetectorAsync(const PutAnomalyDetectorRequest& request, const PutAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientPutAnomalyDetectorAsyncHelper( this, request, handler, context ); } );
}

PutCompositeAlarmOutcome CloudWatchClient::PutCompositeAlarm(const PutCompositeAlarmRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutCompositeAlarmOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PutCompositeAlarmOutcomeCallable CloudWatchClient::PutCompositeAlarmCallable(const PutCompositeAlarmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutCompositeAlarmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutCompositeAlarm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientPutCompositeAlarmAsyncHelper(CloudWatchClient const * const clientThis, const PutCompositeAlarmRequest& request, const PutCompositeAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutCompositeAlarm(request), context);
}

void CloudWatchClient::PutCompositeAlarmAsync(const PutCompositeAlarmRequest& request, const PutCompositeAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientPutCompositeAlarmAsyncHelper( this, request, handler, context ); } );
}

PutDashboardOutcome CloudWatchClient::PutDashboard(const PutDashboardRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutDashboardOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PutDashboardOutcomeCallable CloudWatchClient::PutDashboardCallable(const PutDashboardRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDashboardOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDashboard(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientPutDashboardAsyncHelper(CloudWatchClient const * const clientThis, const PutDashboardRequest& request, const PutDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutDashboard(request), context);
}

void CloudWatchClient::PutDashboardAsync(const PutDashboardRequest& request, const PutDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientPutDashboardAsyncHelper( this, request, handler, context ); } );
}

PutInsightRuleOutcome CloudWatchClient::PutInsightRule(const PutInsightRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutInsightRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PutInsightRuleOutcomeCallable CloudWatchClient::PutInsightRuleCallable(const PutInsightRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutInsightRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutInsightRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientPutInsightRuleAsyncHelper(CloudWatchClient const * const clientThis, const PutInsightRuleRequest& request, const PutInsightRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutInsightRule(request), context);
}

void CloudWatchClient::PutInsightRuleAsync(const PutInsightRuleRequest& request, const PutInsightRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientPutInsightRuleAsyncHelper( this, request, handler, context ); } );
}

PutManagedInsightRulesOutcome CloudWatchClient::PutManagedInsightRules(const PutManagedInsightRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutManagedInsightRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PutManagedInsightRulesOutcomeCallable CloudWatchClient::PutManagedInsightRulesCallable(const PutManagedInsightRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutManagedInsightRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutManagedInsightRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientPutManagedInsightRulesAsyncHelper(CloudWatchClient const * const clientThis, const PutManagedInsightRulesRequest& request, const PutManagedInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutManagedInsightRules(request), context);
}

void CloudWatchClient::PutManagedInsightRulesAsync(const PutManagedInsightRulesRequest& request, const PutManagedInsightRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientPutManagedInsightRulesAsyncHelper( this, request, handler, context ); } );
}

PutMetricAlarmOutcome CloudWatchClient::PutMetricAlarm(const PutMetricAlarmRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutMetricAlarmOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PutMetricAlarmOutcomeCallable CloudWatchClient::PutMetricAlarmCallable(const PutMetricAlarmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutMetricAlarmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutMetricAlarm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientPutMetricAlarmAsyncHelper(CloudWatchClient const * const clientThis, const PutMetricAlarmRequest& request, const PutMetricAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutMetricAlarm(request), context);
}

void CloudWatchClient::PutMetricAlarmAsync(const PutMetricAlarmRequest& request, const PutMetricAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientPutMetricAlarmAsyncHelper( this, request, handler, context ); } );
}

PutMetricDataOutcome CloudWatchClient::PutMetricData(const PutMetricDataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutMetricDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PutMetricDataOutcomeCallable CloudWatchClient::PutMetricDataCallable(const PutMetricDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutMetricDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutMetricData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientPutMetricDataAsyncHelper(CloudWatchClient const * const clientThis, const PutMetricDataRequest& request, const PutMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutMetricData(request), context);
}

void CloudWatchClient::PutMetricDataAsync(const PutMetricDataRequest& request, const PutMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientPutMetricDataAsyncHelper( this, request, handler, context ); } );
}

PutMetricStreamOutcome CloudWatchClient::PutMetricStream(const PutMetricStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutMetricStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PutMetricStreamOutcomeCallable CloudWatchClient::PutMetricStreamCallable(const PutMetricStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutMetricStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutMetricStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientPutMetricStreamAsyncHelper(CloudWatchClient const * const clientThis, const PutMetricStreamRequest& request, const PutMetricStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutMetricStream(request), context);
}

void CloudWatchClient::PutMetricStreamAsync(const PutMetricStreamRequest& request, const PutMetricStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientPutMetricStreamAsyncHelper( this, request, handler, context ); } );
}

SetAlarmStateOutcome CloudWatchClient::SetAlarmState(const SetAlarmStateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetAlarmStateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetAlarmStateOutcomeCallable CloudWatchClient::SetAlarmStateCallable(const SetAlarmStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetAlarmStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetAlarmState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientSetAlarmStateAsyncHelper(CloudWatchClient const * const clientThis, const SetAlarmStateRequest& request, const SetAlarmStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetAlarmState(request), context);
}

void CloudWatchClient::SetAlarmStateAsync(const SetAlarmStateRequest& request, const SetAlarmStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientSetAlarmStateAsyncHelper( this, request, handler, context ); } );
}

StartMetricStreamsOutcome CloudWatchClient::StartMetricStreams(const StartMetricStreamsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartMetricStreamsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StartMetricStreamsOutcomeCallable CloudWatchClient::StartMetricStreamsCallable(const StartMetricStreamsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMetricStreamsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMetricStreams(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientStartMetricStreamsAsyncHelper(CloudWatchClient const * const clientThis, const StartMetricStreamsRequest& request, const StartMetricStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartMetricStreams(request), context);
}

void CloudWatchClient::StartMetricStreamsAsync(const StartMetricStreamsRequest& request, const StartMetricStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientStartMetricStreamsAsyncHelper( this, request, handler, context ); } );
}

StopMetricStreamsOutcome CloudWatchClient::StopMetricStreams(const StopMetricStreamsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopMetricStreamsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

StopMetricStreamsOutcomeCallable CloudWatchClient::StopMetricStreamsCallable(const StopMetricStreamsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopMetricStreamsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopMetricStreams(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientStopMetricStreamsAsyncHelper(CloudWatchClient const * const clientThis, const StopMetricStreamsRequest& request, const StopMetricStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopMetricStreams(request), context);
}

void CloudWatchClient::StopMetricStreamsAsync(const StopMetricStreamsRequest& request, const StopMetricStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientStopMetricStreamsAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome CloudWatchClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

TagResourceOutcomeCallable CloudWatchClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientTagResourceAsyncHelper(CloudWatchClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void CloudWatchClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome CloudWatchClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UntagResourceOutcomeCallable CloudWatchClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchClientUntagResourceAsyncHelper(CloudWatchClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void CloudWatchClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

