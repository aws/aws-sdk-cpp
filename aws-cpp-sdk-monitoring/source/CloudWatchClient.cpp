/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/monitoring/model/DescribeAlarmHistoryRequest.h>
#include <aws/monitoring/model/DescribeAlarmsRequest.h>
#include <aws/monitoring/model/DescribeAlarmsForMetricRequest.h>
#include <aws/monitoring/model/DescribeAnomalyDetectorsRequest.h>
#include <aws/monitoring/model/DisableAlarmActionsRequest.h>
#include <aws/monitoring/model/EnableAlarmActionsRequest.h>
#include <aws/monitoring/model/GetDashboardRequest.h>
#include <aws/monitoring/model/GetMetricDataRequest.h>
#include <aws/monitoring/model/GetMetricStatisticsRequest.h>
#include <aws/monitoring/model/GetMetricWidgetImageRequest.h>
#include <aws/monitoring/model/ListDashboardsRequest.h>
#include <aws/monitoring/model/ListMetricsRequest.h>
#include <aws/monitoring/model/ListTagsForResourceRequest.h>
#include <aws/monitoring/model/PutAnomalyDetectorRequest.h>
#include <aws/monitoring/model/PutDashboardRequest.h>
#include <aws/monitoring/model/PutMetricAlarmRequest.h>
#include <aws/monitoring/model/PutMetricDataRequest.h>
#include <aws/monitoring/model/SetAlarmStateRequest.h>
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudWatchErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchClient::CloudWatchClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudWatchErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchClient::CloudWatchClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudWatchErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchClient::~CloudWatchClient()
{
}

void CloudWatchClient::init(const ClientConfiguration& config)
{
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
  return GeneratePresignedUrl(uri, HttpMethod::HTTP_GET, region, 3600);
}

DeleteAlarmsOutcome CloudWatchClient::DeleteAlarms(const DeleteAlarmsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteAlarmsOutcome(NoResult());
  }
  else
  {
    return DeleteAlarmsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAlarmsAsyncHelper( request, handler, context ); } );
}

void CloudWatchClient::DeleteAlarmsAsyncHelper(const DeleteAlarmsRequest& request, const DeleteAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAlarms(request), context);
}

DeleteAnomalyDetectorOutcome CloudWatchClient::DeleteAnomalyDetector(const DeleteAnomalyDetectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteAnomalyDetectorOutcome(DeleteAnomalyDetectorResult(outcome.GetResult()));
  }
  else
  {
    return DeleteAnomalyDetectorOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAnomalyDetectorAsyncHelper( request, handler, context ); } );
}

void CloudWatchClient::DeleteAnomalyDetectorAsyncHelper(const DeleteAnomalyDetectorRequest& request, const DeleteAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAnomalyDetector(request), context);
}

DeleteDashboardsOutcome CloudWatchClient::DeleteDashboards(const DeleteDashboardsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteDashboardsOutcome(DeleteDashboardsResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDashboardsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDashboardsAsyncHelper( request, handler, context ); } );
}

void CloudWatchClient::DeleteDashboardsAsyncHelper(const DeleteDashboardsRequest& request, const DeleteDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDashboards(request), context);
}

DescribeAlarmHistoryOutcome CloudWatchClient::DescribeAlarmHistory(const DescribeAlarmHistoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeAlarmHistoryOutcome(DescribeAlarmHistoryResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAlarmHistoryOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAlarmHistoryAsyncHelper( request, handler, context ); } );
}

void CloudWatchClient::DescribeAlarmHistoryAsyncHelper(const DescribeAlarmHistoryRequest& request, const DescribeAlarmHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAlarmHistory(request), context);
}

DescribeAlarmsOutcome CloudWatchClient::DescribeAlarms(const DescribeAlarmsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeAlarmsOutcome(DescribeAlarmsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAlarmsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAlarmsAsyncHelper( request, handler, context ); } );
}

void CloudWatchClient::DescribeAlarmsAsyncHelper(const DescribeAlarmsRequest& request, const DescribeAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAlarms(request), context);
}

DescribeAlarmsForMetricOutcome CloudWatchClient::DescribeAlarmsForMetric(const DescribeAlarmsForMetricRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeAlarmsForMetricOutcome(DescribeAlarmsForMetricResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAlarmsForMetricOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAlarmsForMetricAsyncHelper( request, handler, context ); } );
}

void CloudWatchClient::DescribeAlarmsForMetricAsyncHelper(const DescribeAlarmsForMetricRequest& request, const DescribeAlarmsForMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAlarmsForMetric(request), context);
}

DescribeAnomalyDetectorsOutcome CloudWatchClient::DescribeAnomalyDetectors(const DescribeAnomalyDetectorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeAnomalyDetectorsOutcome(DescribeAnomalyDetectorsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAnomalyDetectorsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAnomalyDetectorsAsyncHelper( request, handler, context ); } );
}

void CloudWatchClient::DescribeAnomalyDetectorsAsyncHelper(const DescribeAnomalyDetectorsRequest& request, const DescribeAnomalyDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAnomalyDetectors(request), context);
}

DisableAlarmActionsOutcome CloudWatchClient::DisableAlarmActions(const DisableAlarmActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisableAlarmActionsOutcome(NoResult());
  }
  else
  {
    return DisableAlarmActionsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DisableAlarmActionsAsyncHelper( request, handler, context ); } );
}

void CloudWatchClient::DisableAlarmActionsAsyncHelper(const DisableAlarmActionsRequest& request, const DisableAlarmActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableAlarmActions(request), context);
}

EnableAlarmActionsOutcome CloudWatchClient::EnableAlarmActions(const EnableAlarmActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return EnableAlarmActionsOutcome(NoResult());
  }
  else
  {
    return EnableAlarmActionsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->EnableAlarmActionsAsyncHelper( request, handler, context ); } );
}

void CloudWatchClient::EnableAlarmActionsAsyncHelper(const EnableAlarmActionsRequest& request, const EnableAlarmActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableAlarmActions(request), context);
}

GetDashboardOutcome CloudWatchClient::GetDashboard(const GetDashboardRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetDashboardOutcome(GetDashboardResult(outcome.GetResult()));
  }
  else
  {
    return GetDashboardOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetDashboardAsyncHelper( request, handler, context ); } );
}

void CloudWatchClient::GetDashboardAsyncHelper(const GetDashboardRequest& request, const GetDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDashboard(request), context);
}

GetMetricDataOutcome CloudWatchClient::GetMetricData(const GetMetricDataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetMetricDataOutcome(GetMetricDataResult(outcome.GetResult()));
  }
  else
  {
    return GetMetricDataOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetMetricDataAsyncHelper( request, handler, context ); } );
}

void CloudWatchClient::GetMetricDataAsyncHelper(const GetMetricDataRequest& request, const GetMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMetricData(request), context);
}

GetMetricStatisticsOutcome CloudWatchClient::GetMetricStatistics(const GetMetricStatisticsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetMetricStatisticsOutcome(GetMetricStatisticsResult(outcome.GetResult()));
  }
  else
  {
    return GetMetricStatisticsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetMetricStatisticsAsyncHelper( request, handler, context ); } );
}

void CloudWatchClient::GetMetricStatisticsAsyncHelper(const GetMetricStatisticsRequest& request, const GetMetricStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMetricStatistics(request), context);
}

GetMetricWidgetImageOutcome CloudWatchClient::GetMetricWidgetImage(const GetMetricWidgetImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetMetricWidgetImageOutcome(GetMetricWidgetImageResult(outcome.GetResult()));
  }
  else
  {
    return GetMetricWidgetImageOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetMetricWidgetImageAsyncHelper( request, handler, context ); } );
}

void CloudWatchClient::GetMetricWidgetImageAsyncHelper(const GetMetricWidgetImageRequest& request, const GetMetricWidgetImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMetricWidgetImage(request), context);
}

ListDashboardsOutcome CloudWatchClient::ListDashboards(const ListDashboardsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListDashboardsOutcome(ListDashboardsResult(outcome.GetResult()));
  }
  else
  {
    return ListDashboardsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListDashboardsAsyncHelper( request, handler, context ); } );
}

void CloudWatchClient::ListDashboardsAsyncHelper(const ListDashboardsRequest& request, const ListDashboardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDashboards(request), context);
}

ListMetricsOutcome CloudWatchClient::ListMetrics(const ListMetricsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListMetricsOutcome(ListMetricsResult(outcome.GetResult()));
  }
  else
  {
    return ListMetricsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListMetricsAsyncHelper( request, handler, context ); } );
}

void CloudWatchClient::ListMetricsAsyncHelper(const ListMetricsRequest& request, const ListMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListMetrics(request), context);
}

ListTagsForResourceOutcome CloudWatchClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void CloudWatchClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PutAnomalyDetectorOutcome CloudWatchClient::PutAnomalyDetector(const PutAnomalyDetectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutAnomalyDetectorOutcome(PutAnomalyDetectorResult(outcome.GetResult()));
  }
  else
  {
    return PutAnomalyDetectorOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->PutAnomalyDetectorAsyncHelper( request, handler, context ); } );
}

void CloudWatchClient::PutAnomalyDetectorAsyncHelper(const PutAnomalyDetectorRequest& request, const PutAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutAnomalyDetector(request), context);
}

PutDashboardOutcome CloudWatchClient::PutDashboard(const PutDashboardRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutDashboardOutcome(PutDashboardResult(outcome.GetResult()));
  }
  else
  {
    return PutDashboardOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->PutDashboardAsyncHelper( request, handler, context ); } );
}

void CloudWatchClient::PutDashboardAsyncHelper(const PutDashboardRequest& request, const PutDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutDashboard(request), context);
}

PutMetricAlarmOutcome CloudWatchClient::PutMetricAlarm(const PutMetricAlarmRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutMetricAlarmOutcome(NoResult());
  }
  else
  {
    return PutMetricAlarmOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->PutMetricAlarmAsyncHelper( request, handler, context ); } );
}

void CloudWatchClient::PutMetricAlarmAsyncHelper(const PutMetricAlarmRequest& request, const PutMetricAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutMetricAlarm(request), context);
}

PutMetricDataOutcome CloudWatchClient::PutMetricData(const PutMetricDataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutMetricDataOutcome(NoResult());
  }
  else
  {
    return PutMetricDataOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->PutMetricDataAsyncHelper( request, handler, context ); } );
}

void CloudWatchClient::PutMetricDataAsyncHelper(const PutMetricDataRequest& request, const PutMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutMetricData(request), context);
}

SetAlarmStateOutcome CloudWatchClient::SetAlarmState(const SetAlarmStateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetAlarmStateOutcome(NoResult());
  }
  else
  {
    return SetAlarmStateOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->SetAlarmStateAsyncHelper( request, handler, context ); } );
}

void CloudWatchClient::SetAlarmStateAsyncHelper(const SetAlarmStateRequest& request, const SetAlarmStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetAlarmState(request), context);
}

TagResourceOutcome CloudWatchClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(TagResourceResult(outcome.GetResult()));
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void CloudWatchClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome CloudWatchClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(UntagResourceResult(outcome.GetResult()));
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void CloudWatchClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}



