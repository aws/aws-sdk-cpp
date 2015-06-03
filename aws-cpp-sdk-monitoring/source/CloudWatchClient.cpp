/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/monitoring/CloudWatchClient.h>
#include <aws/monitoring/CloudWatchEndpoint.h>
#include <aws/monitoring/CloudWatchErrorMarshaller.h>
#include <aws/monitoring/model/DeleteAlarmsRequest.h>
#include <aws/monitoring/model/DescribeAlarmHistoryRequest.h>
#include <aws/monitoring/model/DescribeAlarmsRequest.h>
#include <aws/monitoring/model/DescribeAlarmsForMetricRequest.h>
#include <aws/monitoring/model/DisableAlarmActionsRequest.h>
#include <aws/monitoring/model/EnableAlarmActionsRequest.h>
#include <aws/monitoring/model/GetMetricStatisticsRequest.h>
#include <aws/monitoring/model/ListHostInfoRequest.h>
#include <aws/monitoring/model/ListMetricsRequest.h>
#include <aws/monitoring/model/PutMetricAlarmRequest.h>
#include <aws/monitoring/model/PutMetricDataRequest.h>
#include <aws/monitoring/model/PutMetricDataBatchRequest.h>
#include <aws/monitoring/model/SetAlarmStateRequest.h>

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
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudWatchErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchClient::CloudWatchClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudWatchErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchClient::CloudWatchClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME, clientConfiguration.region),
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
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << CloudWatchEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

DeleteAlarmsOutcome CloudWatchClient::DeleteAlarms(const DeleteAlarmsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CloudWatchClient::DeleteAlarms, this, request);
}

void CloudWatchClient::DeleteAlarmsAsync(const DeleteAlarmsRequest& request) const
{
  m_executor->Submit(&CloudWatchClient::DeleteAlarmsAsyncHelper, this, request);
}

void CloudWatchClient::DeleteAlarmsAsyncHelper(const DeleteAlarmsRequest& request) const
{
  m_onDeleteAlarmsOutcomeReceived(this, request, DeleteAlarms(request));
}

DescribeAlarmHistoryOutcome CloudWatchClient::DescribeAlarmHistory(const DescribeAlarmHistoryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CloudWatchClient::DescribeAlarmHistory, this, request);
}

void CloudWatchClient::DescribeAlarmHistoryAsync(const DescribeAlarmHistoryRequest& request) const
{
  m_executor->Submit(&CloudWatchClient::DescribeAlarmHistoryAsyncHelper, this, request);
}

void CloudWatchClient::DescribeAlarmHistoryAsyncHelper(const DescribeAlarmHistoryRequest& request) const
{
  m_onDescribeAlarmHistoryOutcomeReceived(this, request, DescribeAlarmHistory(request));
}

DescribeAlarmsOutcome CloudWatchClient::DescribeAlarms(const DescribeAlarmsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CloudWatchClient::DescribeAlarms, this, request);
}

void CloudWatchClient::DescribeAlarmsAsync(const DescribeAlarmsRequest& request) const
{
  m_executor->Submit(&CloudWatchClient::DescribeAlarmsAsyncHelper, this, request);
}

void CloudWatchClient::DescribeAlarmsAsyncHelper(const DescribeAlarmsRequest& request) const
{
  m_onDescribeAlarmsOutcomeReceived(this, request, DescribeAlarms(request));
}

DescribeAlarmsForMetricOutcome CloudWatchClient::DescribeAlarmsForMetric(const DescribeAlarmsForMetricRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CloudWatchClient::DescribeAlarmsForMetric, this, request);
}

void CloudWatchClient::DescribeAlarmsForMetricAsync(const DescribeAlarmsForMetricRequest& request) const
{
  m_executor->Submit(&CloudWatchClient::DescribeAlarmsForMetricAsyncHelper, this, request);
}

void CloudWatchClient::DescribeAlarmsForMetricAsyncHelper(const DescribeAlarmsForMetricRequest& request) const
{
  m_onDescribeAlarmsForMetricOutcomeReceived(this, request, DescribeAlarmsForMetric(request));
}

DisableAlarmActionsOutcome CloudWatchClient::DisableAlarmActions(const DisableAlarmActionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CloudWatchClient::DisableAlarmActions, this, request);
}

void CloudWatchClient::DisableAlarmActionsAsync(const DisableAlarmActionsRequest& request) const
{
  m_executor->Submit(&CloudWatchClient::DisableAlarmActionsAsyncHelper, this, request);
}

void CloudWatchClient::DisableAlarmActionsAsyncHelper(const DisableAlarmActionsRequest& request) const
{
  m_onDisableAlarmActionsOutcomeReceived(this, request, DisableAlarmActions(request));
}

EnableAlarmActionsOutcome CloudWatchClient::EnableAlarmActions(const EnableAlarmActionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CloudWatchClient::EnableAlarmActions, this, request);
}

void CloudWatchClient::EnableAlarmActionsAsync(const EnableAlarmActionsRequest& request) const
{
  m_executor->Submit(&CloudWatchClient::EnableAlarmActionsAsyncHelper, this, request);
}

void CloudWatchClient::EnableAlarmActionsAsyncHelper(const EnableAlarmActionsRequest& request) const
{
  m_onEnableAlarmActionsOutcomeReceived(this, request, EnableAlarmActions(request));
}

GetMetricStatisticsOutcome CloudWatchClient::GetMetricStatistics(const GetMetricStatisticsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CloudWatchClient::GetMetricStatistics, this, request);
}

void CloudWatchClient::GetMetricStatisticsAsync(const GetMetricStatisticsRequest& request) const
{
  m_executor->Submit(&CloudWatchClient::GetMetricStatisticsAsyncHelper, this, request);
}

void CloudWatchClient::GetMetricStatisticsAsyncHelper(const GetMetricStatisticsRequest& request) const
{
  m_onGetMetricStatisticsOutcomeReceived(this, request, GetMetricStatistics(request));
}

ListHostInfoOutcome CloudWatchClient::ListHostInfo(const ListHostInfoRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListHostInfoOutcome(ListHostInfoResult(outcome.GetResult()));
  }
  else
  {
    return ListHostInfoOutcome(outcome.GetError());
  }
}

ListHostInfoOutcomeCallable CloudWatchClient::ListHostInfoCallable(const ListHostInfoRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchClient::ListHostInfo, this, request);
}

void CloudWatchClient::ListHostInfoAsync(const ListHostInfoRequest& request) const
{
  m_executor->Submit(&CloudWatchClient::ListHostInfoAsyncHelper, this, request);
}

void CloudWatchClient::ListHostInfoAsyncHelper(const ListHostInfoRequest& request) const
{
  m_onListHostInfoOutcomeReceived(this, request, ListHostInfo(request));
}

ListMetricsOutcome CloudWatchClient::ListMetrics(const ListMetricsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CloudWatchClient::ListMetrics, this, request);
}

void CloudWatchClient::ListMetricsAsync(const ListMetricsRequest& request) const
{
  m_executor->Submit(&CloudWatchClient::ListMetricsAsyncHelper, this, request);
}

void CloudWatchClient::ListMetricsAsyncHelper(const ListMetricsRequest& request) const
{
  m_onListMetricsOutcomeReceived(this, request, ListMetrics(request));
}

PutMetricAlarmOutcome CloudWatchClient::PutMetricAlarm(const PutMetricAlarmRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CloudWatchClient::PutMetricAlarm, this, request);
}

void CloudWatchClient::PutMetricAlarmAsync(const PutMetricAlarmRequest& request) const
{
  m_executor->Submit(&CloudWatchClient::PutMetricAlarmAsyncHelper, this, request);
}

void CloudWatchClient::PutMetricAlarmAsyncHelper(const PutMetricAlarmRequest& request) const
{
  m_onPutMetricAlarmOutcomeReceived(this, request, PutMetricAlarm(request));
}

PutMetricDataOutcome CloudWatchClient::PutMetricData(const PutMetricDataRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CloudWatchClient::PutMetricData, this, request);
}

void CloudWatchClient::PutMetricDataAsync(const PutMetricDataRequest& request) const
{
  m_executor->Submit(&CloudWatchClient::PutMetricDataAsyncHelper, this, request);
}

void CloudWatchClient::PutMetricDataAsyncHelper(const PutMetricDataRequest& request) const
{
  m_onPutMetricDataOutcomeReceived(this, request, PutMetricData(request));
}

PutMetricDataBatchOutcome CloudWatchClient::PutMetricDataBatch(const PutMetricDataBatchRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutMetricDataBatchOutcome(NoResult());
  }
  else
  {
    return PutMetricDataBatchOutcome(outcome.GetError());
  }
}

PutMetricDataBatchOutcomeCallable CloudWatchClient::PutMetricDataBatchCallable(const PutMetricDataBatchRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchClient::PutMetricDataBatch, this, request);
}

void CloudWatchClient::PutMetricDataBatchAsync(const PutMetricDataBatchRequest& request) const
{
  m_executor->Submit(&CloudWatchClient::PutMetricDataBatchAsyncHelper, this, request);
}

void CloudWatchClient::PutMetricDataBatchAsyncHelper(const PutMetricDataBatchRequest& request) const
{
  m_onPutMetricDataBatchOutcomeReceived(this, request, PutMetricDataBatch(request));
}

SetAlarmStateOutcome CloudWatchClient::SetAlarmState(const SetAlarmStateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &CloudWatchClient::SetAlarmState, this, request);
}

void CloudWatchClient::SetAlarmStateAsync(const SetAlarmStateRequest& request) const
{
  m_executor->Submit(&CloudWatchClient::SetAlarmStateAsyncHelper, this, request);
}

void CloudWatchClient::SetAlarmStateAsyncHelper(const SetAlarmStateRequest& request) const
{
  m_onSetAlarmStateOutcomeReceived(this, request, SetAlarmState(request));
}

