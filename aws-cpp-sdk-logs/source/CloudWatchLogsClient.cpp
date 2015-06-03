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
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/logs/CloudWatchLogsClient.h>
#include <aws/logs/CloudWatchLogsEndpoint.h>
#include <aws/logs/CloudWatchLogsErrorMarshaller.h>
#include <aws/logs/model/CreateLogGroupRequest.h>
#include <aws/logs/model/CreateLogStreamRequest.h>
#include <aws/logs/model/DeleteLogGroupRequest.h>
#include <aws/logs/model/DeleteLogStreamRequest.h>
#include <aws/logs/model/DeleteMetricFilterRequest.h>
#include <aws/logs/model/DeleteRetentionPolicyRequest.h>
#include <aws/logs/model/DescribeLogGroupsRequest.h>
#include <aws/logs/model/DescribeLogStreamsRequest.h>
#include <aws/logs/model/DescribeMetricFiltersRequest.h>
#include <aws/logs/model/FilterLogEventsRequest.h>
#include <aws/logs/model/GetLogEventsRequest.h>
#include <aws/logs/model/PutLogEventsRequest.h>
#include <aws/logs/model/PutMetricFilterRequest.h>
#include <aws/logs/model/PutRetentionPolicyRequest.h>
#include <aws/logs/model/TestMetricFilterRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudWatchLogs;
using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "logs";
static const char* ALLOCATION_TAG = "CloudWatchLogsClient";

CloudWatchLogsClient::CloudWatchLogsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudWatchLogsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchLogsClient::CloudWatchLogsClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudWatchLogsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchLogsClient::CloudWatchLogsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudWatchLogsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchLogsClient::~CloudWatchLogsClient()
{
}

void CloudWatchLogsClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << CloudWatchLogsEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

CreateLogGroupOutcome CloudWatchLogsClient::CreateLogGroup(const CreateLogGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateLogGroupOutcome(NoResult());
  }
  else
  {
    return CreateLogGroupOutcome(outcome.GetError());
  }
}

CreateLogGroupOutcomeCallable CloudWatchLogsClient::CreateLogGroupCallable(const CreateLogGroupRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchLogsClient::CreateLogGroup, this, request);
}

void CloudWatchLogsClient::CreateLogGroupAsync(const CreateLogGroupRequest& request) const
{
  m_executor->Submit(&CloudWatchLogsClient::CreateLogGroupAsyncHelper, this, request);
}

void CloudWatchLogsClient::CreateLogGroupAsyncHelper(const CreateLogGroupRequest& request) const
{
  m_onCreateLogGroupOutcomeReceived(this, request, CreateLogGroup(request));
}

CreateLogStreamOutcome CloudWatchLogsClient::CreateLogStream(const CreateLogStreamRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateLogStreamOutcome(NoResult());
  }
  else
  {
    return CreateLogStreamOutcome(outcome.GetError());
  }
}

CreateLogStreamOutcomeCallable CloudWatchLogsClient::CreateLogStreamCallable(const CreateLogStreamRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchLogsClient::CreateLogStream, this, request);
}

void CloudWatchLogsClient::CreateLogStreamAsync(const CreateLogStreamRequest& request) const
{
  m_executor->Submit(&CloudWatchLogsClient::CreateLogStreamAsyncHelper, this, request);
}

void CloudWatchLogsClient::CreateLogStreamAsyncHelper(const CreateLogStreamRequest& request) const
{
  m_onCreateLogStreamOutcomeReceived(this, request, CreateLogStream(request));
}

DeleteLogGroupOutcome CloudWatchLogsClient::DeleteLogGroup(const DeleteLogGroupRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteLogGroupOutcome(NoResult());
  }
  else
  {
    return DeleteLogGroupOutcome(outcome.GetError());
  }
}

DeleteLogGroupOutcomeCallable CloudWatchLogsClient::DeleteLogGroupCallable(const DeleteLogGroupRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchLogsClient::DeleteLogGroup, this, request);
}

void CloudWatchLogsClient::DeleteLogGroupAsync(const DeleteLogGroupRequest& request) const
{
  m_executor->Submit(&CloudWatchLogsClient::DeleteLogGroupAsyncHelper, this, request);
}

void CloudWatchLogsClient::DeleteLogGroupAsyncHelper(const DeleteLogGroupRequest& request) const
{
  m_onDeleteLogGroupOutcomeReceived(this, request, DeleteLogGroup(request));
}

DeleteLogStreamOutcome CloudWatchLogsClient::DeleteLogStream(const DeleteLogStreamRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteLogStreamOutcome(NoResult());
  }
  else
  {
    return DeleteLogStreamOutcome(outcome.GetError());
  }
}

DeleteLogStreamOutcomeCallable CloudWatchLogsClient::DeleteLogStreamCallable(const DeleteLogStreamRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchLogsClient::DeleteLogStream, this, request);
}

void CloudWatchLogsClient::DeleteLogStreamAsync(const DeleteLogStreamRequest& request) const
{
  m_executor->Submit(&CloudWatchLogsClient::DeleteLogStreamAsyncHelper, this, request);
}

void CloudWatchLogsClient::DeleteLogStreamAsyncHelper(const DeleteLogStreamRequest& request) const
{
  m_onDeleteLogStreamOutcomeReceived(this, request, DeleteLogStream(request));
}

DeleteMetricFilterOutcome CloudWatchLogsClient::DeleteMetricFilter(const DeleteMetricFilterRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteMetricFilterOutcome(NoResult());
  }
  else
  {
    return DeleteMetricFilterOutcome(outcome.GetError());
  }
}

DeleteMetricFilterOutcomeCallable CloudWatchLogsClient::DeleteMetricFilterCallable(const DeleteMetricFilterRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchLogsClient::DeleteMetricFilter, this, request);
}

void CloudWatchLogsClient::DeleteMetricFilterAsync(const DeleteMetricFilterRequest& request) const
{
  m_executor->Submit(&CloudWatchLogsClient::DeleteMetricFilterAsyncHelper, this, request);
}

void CloudWatchLogsClient::DeleteMetricFilterAsyncHelper(const DeleteMetricFilterRequest& request) const
{
  m_onDeleteMetricFilterOutcomeReceived(this, request, DeleteMetricFilter(request));
}

DeleteRetentionPolicyOutcome CloudWatchLogsClient::DeleteRetentionPolicy(const DeleteRetentionPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteRetentionPolicyOutcome(NoResult());
  }
  else
  {
    return DeleteRetentionPolicyOutcome(outcome.GetError());
  }
}

DeleteRetentionPolicyOutcomeCallable CloudWatchLogsClient::DeleteRetentionPolicyCallable(const DeleteRetentionPolicyRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchLogsClient::DeleteRetentionPolicy, this, request);
}

void CloudWatchLogsClient::DeleteRetentionPolicyAsync(const DeleteRetentionPolicyRequest& request) const
{
  m_executor->Submit(&CloudWatchLogsClient::DeleteRetentionPolicyAsyncHelper, this, request);
}

void CloudWatchLogsClient::DeleteRetentionPolicyAsyncHelper(const DeleteRetentionPolicyRequest& request) const
{
  m_onDeleteRetentionPolicyOutcomeReceived(this, request, DeleteRetentionPolicy(request));
}

DescribeLogGroupsOutcome CloudWatchLogsClient::DescribeLogGroups(const DescribeLogGroupsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeLogGroupsOutcome(DescribeLogGroupsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLogGroupsOutcome(outcome.GetError());
  }
}

DescribeLogGroupsOutcomeCallable CloudWatchLogsClient::DescribeLogGroupsCallable(const DescribeLogGroupsRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchLogsClient::DescribeLogGroups, this, request);
}

void CloudWatchLogsClient::DescribeLogGroupsAsync(const DescribeLogGroupsRequest& request) const
{
  m_executor->Submit(&CloudWatchLogsClient::DescribeLogGroupsAsyncHelper, this, request);
}

void CloudWatchLogsClient::DescribeLogGroupsAsyncHelper(const DescribeLogGroupsRequest& request) const
{
  m_onDescribeLogGroupsOutcomeReceived(this, request, DescribeLogGroups(request));
}

DescribeLogStreamsOutcome CloudWatchLogsClient::DescribeLogStreams(const DescribeLogStreamsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeLogStreamsOutcome(DescribeLogStreamsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLogStreamsOutcome(outcome.GetError());
  }
}

DescribeLogStreamsOutcomeCallable CloudWatchLogsClient::DescribeLogStreamsCallable(const DescribeLogStreamsRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchLogsClient::DescribeLogStreams, this, request);
}

void CloudWatchLogsClient::DescribeLogStreamsAsync(const DescribeLogStreamsRequest& request) const
{
  m_executor->Submit(&CloudWatchLogsClient::DescribeLogStreamsAsyncHelper, this, request);
}

void CloudWatchLogsClient::DescribeLogStreamsAsyncHelper(const DescribeLogStreamsRequest& request) const
{
  m_onDescribeLogStreamsOutcomeReceived(this, request, DescribeLogStreams(request));
}

DescribeMetricFiltersOutcome CloudWatchLogsClient::DescribeMetricFilters(const DescribeMetricFiltersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeMetricFiltersOutcome(DescribeMetricFiltersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeMetricFiltersOutcome(outcome.GetError());
  }
}

DescribeMetricFiltersOutcomeCallable CloudWatchLogsClient::DescribeMetricFiltersCallable(const DescribeMetricFiltersRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchLogsClient::DescribeMetricFilters, this, request);
}

void CloudWatchLogsClient::DescribeMetricFiltersAsync(const DescribeMetricFiltersRequest& request) const
{
  m_executor->Submit(&CloudWatchLogsClient::DescribeMetricFiltersAsyncHelper, this, request);
}

void CloudWatchLogsClient::DescribeMetricFiltersAsyncHelper(const DescribeMetricFiltersRequest& request) const
{
  m_onDescribeMetricFiltersOutcomeReceived(this, request, DescribeMetricFilters(request));
}

FilterLogEventsOutcome CloudWatchLogsClient::FilterLogEvents(const FilterLogEventsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return FilterLogEventsOutcome(FilterLogEventsResult(outcome.GetResult()));
  }
  else
  {
    return FilterLogEventsOutcome(outcome.GetError());
  }
}

FilterLogEventsOutcomeCallable CloudWatchLogsClient::FilterLogEventsCallable(const FilterLogEventsRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchLogsClient::FilterLogEvents, this, request);
}

void CloudWatchLogsClient::FilterLogEventsAsync(const FilterLogEventsRequest& request) const
{
  m_executor->Submit(&CloudWatchLogsClient::FilterLogEventsAsyncHelper, this, request);
}

void CloudWatchLogsClient::FilterLogEventsAsyncHelper(const FilterLogEventsRequest& request) const
{
  m_onFilterLogEventsOutcomeReceived(this, request, FilterLogEvents(request));
}

GetLogEventsOutcome CloudWatchLogsClient::GetLogEvents(const GetLogEventsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetLogEventsOutcome(GetLogEventsResult(outcome.GetResult()));
  }
  else
  {
    return GetLogEventsOutcome(outcome.GetError());
  }
}

GetLogEventsOutcomeCallable CloudWatchLogsClient::GetLogEventsCallable(const GetLogEventsRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchLogsClient::GetLogEvents, this, request);
}

void CloudWatchLogsClient::GetLogEventsAsync(const GetLogEventsRequest& request) const
{
  m_executor->Submit(&CloudWatchLogsClient::GetLogEventsAsyncHelper, this, request);
}

void CloudWatchLogsClient::GetLogEventsAsyncHelper(const GetLogEventsRequest& request) const
{
  m_onGetLogEventsOutcomeReceived(this, request, GetLogEvents(request));
}

PutLogEventsOutcome CloudWatchLogsClient::PutLogEvents(const PutLogEventsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutLogEventsOutcome(PutLogEventsResult(outcome.GetResult()));
  }
  else
  {
    return PutLogEventsOutcome(outcome.GetError());
  }
}

PutLogEventsOutcomeCallable CloudWatchLogsClient::PutLogEventsCallable(const PutLogEventsRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchLogsClient::PutLogEvents, this, request);
}

void CloudWatchLogsClient::PutLogEventsAsync(const PutLogEventsRequest& request) const
{
  m_executor->Submit(&CloudWatchLogsClient::PutLogEventsAsyncHelper, this, request);
}

void CloudWatchLogsClient::PutLogEventsAsyncHelper(const PutLogEventsRequest& request) const
{
  m_onPutLogEventsOutcomeReceived(this, request, PutLogEvents(request));
}

PutMetricFilterOutcome CloudWatchLogsClient::PutMetricFilter(const PutMetricFilterRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutMetricFilterOutcome(NoResult());
  }
  else
  {
    return PutMetricFilterOutcome(outcome.GetError());
  }
}

PutMetricFilterOutcomeCallable CloudWatchLogsClient::PutMetricFilterCallable(const PutMetricFilterRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchLogsClient::PutMetricFilter, this, request);
}

void CloudWatchLogsClient::PutMetricFilterAsync(const PutMetricFilterRequest& request) const
{
  m_executor->Submit(&CloudWatchLogsClient::PutMetricFilterAsyncHelper, this, request);
}

void CloudWatchLogsClient::PutMetricFilterAsyncHelper(const PutMetricFilterRequest& request) const
{
  m_onPutMetricFilterOutcomeReceived(this, request, PutMetricFilter(request));
}

PutRetentionPolicyOutcome CloudWatchLogsClient::PutRetentionPolicy(const PutRetentionPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutRetentionPolicyOutcome(NoResult());
  }
  else
  {
    return PutRetentionPolicyOutcome(outcome.GetError());
  }
}

PutRetentionPolicyOutcomeCallable CloudWatchLogsClient::PutRetentionPolicyCallable(const PutRetentionPolicyRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchLogsClient::PutRetentionPolicy, this, request);
}

void CloudWatchLogsClient::PutRetentionPolicyAsync(const PutRetentionPolicyRequest& request) const
{
  m_executor->Submit(&CloudWatchLogsClient::PutRetentionPolicyAsyncHelper, this, request);
}

void CloudWatchLogsClient::PutRetentionPolicyAsyncHelper(const PutRetentionPolicyRequest& request) const
{
  m_onPutRetentionPolicyOutcomeReceived(this, request, PutRetentionPolicy(request));
}

TestMetricFilterOutcome CloudWatchLogsClient::TestMetricFilter(const TestMetricFilterRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return TestMetricFilterOutcome(TestMetricFilterResult(outcome.GetResult()));
  }
  else
  {
    return TestMetricFilterOutcome(outcome.GetError());
  }
}

TestMetricFilterOutcomeCallable CloudWatchLogsClient::TestMetricFilterCallable(const TestMetricFilterRequest& request) const
{
  return std::async(std::launch::async, &CloudWatchLogsClient::TestMetricFilter, this, request);
}

void CloudWatchLogsClient::TestMetricFilterAsync(const TestMetricFilterRequest& request) const
{
  m_executor->Submit(&CloudWatchLogsClient::TestMetricFilterAsyncHelper, this, request);
}

void CloudWatchLogsClient::TestMetricFilterAsyncHelper(const TestMetricFilterRequest& request) const
{
  m_onTestMetricFilterOutcomeReceived(this, request, TestMetricFilter(request));
}

