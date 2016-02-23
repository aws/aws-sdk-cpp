/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudtrail/CloudTrailClient.h>
#include <aws/cloudtrail/CloudTrailEndpoint.h>
#include <aws/cloudtrail/CloudTrailErrorMarshaller.h>
#include <aws/cloudtrail/model/AddTagsRequest.h>
#include <aws/cloudtrail/model/CreateTrailRequest.h>
#include <aws/cloudtrail/model/DeleteTrailRequest.h>
#include <aws/cloudtrail/model/DescribeTrailsRequest.h>
#include <aws/cloudtrail/model/GetTrailStatusRequest.h>
#include <aws/cloudtrail/model/ListPublicKeysRequest.h>
#include <aws/cloudtrail/model/ListTagsRequest.h>
#include <aws/cloudtrail/model/LookupEventsRequest.h>
#include <aws/cloudtrail/model/RemoveTagsRequest.h>
#include <aws/cloudtrail/model/StartLoggingRequest.h>
#include <aws/cloudtrail/model/StopLoggingRequest.h>
#include <aws/cloudtrail/model/UpdateTrailRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudTrail;
using namespace Aws::CloudTrail::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "cloudtrail";
static const char* ALLOCATION_TAG = "CloudTrailClient";

CloudTrailClient::CloudTrailClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<CloudTrailErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudTrailClient::CloudTrailClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<CloudTrailErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudTrailClient::CloudTrailClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<CloudTrailErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudTrailClient::~CloudTrailClient()
{
}

void CloudTrailClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << CloudTrailEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}
AddTagsOutcome CloudTrailClient::AddTags(const AddTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AddTagsOutcome(AddTagsResult(outcome.GetResult()));
  }
  else
  {
    return AddTagsOutcome(outcome.GetError());
  }
}

AddTagsOutcomeCallable CloudTrailClient::AddTagsCallable(const AddTagsRequest& request) const
{
  return std::async(std::launch::async, &CloudTrailClient::AddTags, this, request);
}

void CloudTrailClient::AddTagsAsync(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudTrailClient::AddTagsAsyncHelper, this, request, handler, context);
}

void CloudTrailClient::AddTagsAsyncHelper(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTags(request), context);
}

CreateTrailOutcome CloudTrailClient::CreateTrail(const CreateTrailRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateTrailOutcome(CreateTrailResult(outcome.GetResult()));
  }
  else
  {
    return CreateTrailOutcome(outcome.GetError());
  }
}

CreateTrailOutcomeCallable CloudTrailClient::CreateTrailCallable(const CreateTrailRequest& request) const
{
  return std::async(std::launch::async, &CloudTrailClient::CreateTrail, this, request);
}

void CloudTrailClient::CreateTrailAsync(const CreateTrailRequest& request, const CreateTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudTrailClient::CreateTrailAsyncHelper, this, request, handler, context);
}

void CloudTrailClient::CreateTrailAsyncHelper(const CreateTrailRequest& request, const CreateTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTrail(request), context);
}

DeleteTrailOutcome CloudTrailClient::DeleteTrail(const DeleteTrailRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteTrailOutcome(DeleteTrailResult(outcome.GetResult()));
  }
  else
  {
    return DeleteTrailOutcome(outcome.GetError());
  }
}

DeleteTrailOutcomeCallable CloudTrailClient::DeleteTrailCallable(const DeleteTrailRequest& request) const
{
  return std::async(std::launch::async, &CloudTrailClient::DeleteTrail, this, request);
}

void CloudTrailClient::DeleteTrailAsync(const DeleteTrailRequest& request, const DeleteTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudTrailClient::DeleteTrailAsyncHelper, this, request, handler, context);
}

void CloudTrailClient::DeleteTrailAsyncHelper(const DeleteTrailRequest& request, const DeleteTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTrail(request), context);
}

DescribeTrailsOutcome CloudTrailClient::DescribeTrails(const DescribeTrailsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTrailsOutcome(DescribeTrailsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTrailsOutcome(outcome.GetError());
  }
}

DescribeTrailsOutcomeCallable CloudTrailClient::DescribeTrailsCallable(const DescribeTrailsRequest& request) const
{
  return std::async(std::launch::async, &CloudTrailClient::DescribeTrails, this, request);
}

void CloudTrailClient::DescribeTrailsAsync(const DescribeTrailsRequest& request, const DescribeTrailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudTrailClient::DescribeTrailsAsyncHelper, this, request, handler, context);
}

void CloudTrailClient::DescribeTrailsAsyncHelper(const DescribeTrailsRequest& request, const DescribeTrailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTrails(request), context);
}

GetTrailStatusOutcome CloudTrailClient::GetTrailStatus(const GetTrailStatusRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetTrailStatusOutcome(GetTrailStatusResult(outcome.GetResult()));
  }
  else
  {
    return GetTrailStatusOutcome(outcome.GetError());
  }
}

GetTrailStatusOutcomeCallable CloudTrailClient::GetTrailStatusCallable(const GetTrailStatusRequest& request) const
{
  return std::async(std::launch::async, &CloudTrailClient::GetTrailStatus, this, request);
}

void CloudTrailClient::GetTrailStatusAsync(const GetTrailStatusRequest& request, const GetTrailStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudTrailClient::GetTrailStatusAsyncHelper, this, request, handler, context);
}

void CloudTrailClient::GetTrailStatusAsyncHelper(const GetTrailStatusRequest& request, const GetTrailStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTrailStatus(request), context);
}

ListPublicKeysOutcome CloudTrailClient::ListPublicKeys(const ListPublicKeysRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListPublicKeysOutcome(ListPublicKeysResult(outcome.GetResult()));
  }
  else
  {
    return ListPublicKeysOutcome(outcome.GetError());
  }
}

ListPublicKeysOutcomeCallable CloudTrailClient::ListPublicKeysCallable(const ListPublicKeysRequest& request) const
{
  return std::async(std::launch::async, &CloudTrailClient::ListPublicKeys, this, request);
}

void CloudTrailClient::ListPublicKeysAsync(const ListPublicKeysRequest& request, const ListPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudTrailClient::ListPublicKeysAsyncHelper, this, request, handler, context);
}

void CloudTrailClient::ListPublicKeysAsyncHelper(const ListPublicKeysRequest& request, const ListPublicKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPublicKeys(request), context);
}

ListTagsOutcome CloudTrailClient::ListTags(const ListTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListTagsOutcome(ListTagsResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsOutcome(outcome.GetError());
  }
}

ListTagsOutcomeCallable CloudTrailClient::ListTagsCallable(const ListTagsRequest& request) const
{
  return std::async(std::launch::async, &CloudTrailClient::ListTags, this, request);
}

void CloudTrailClient::ListTagsAsync(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudTrailClient::ListTagsAsyncHelper, this, request, handler, context);
}

void CloudTrailClient::ListTagsAsyncHelper(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTags(request), context);
}

LookupEventsOutcome CloudTrailClient::LookupEvents(const LookupEventsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return LookupEventsOutcome(LookupEventsResult(outcome.GetResult()));
  }
  else
  {
    return LookupEventsOutcome(outcome.GetError());
  }
}

LookupEventsOutcomeCallable CloudTrailClient::LookupEventsCallable(const LookupEventsRequest& request) const
{
  return std::async(std::launch::async, &CloudTrailClient::LookupEvents, this, request);
}

void CloudTrailClient::LookupEventsAsync(const LookupEventsRequest& request, const LookupEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudTrailClient::LookupEventsAsyncHelper, this, request, handler, context);
}

void CloudTrailClient::LookupEventsAsyncHelper(const LookupEventsRequest& request, const LookupEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, LookupEvents(request), context);
}

RemoveTagsOutcome CloudTrailClient::RemoveTags(const RemoveTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RemoveTagsOutcome(RemoveTagsResult(outcome.GetResult()));
  }
  else
  {
    return RemoveTagsOutcome(outcome.GetError());
  }
}

RemoveTagsOutcomeCallable CloudTrailClient::RemoveTagsCallable(const RemoveTagsRequest& request) const
{
  return std::async(std::launch::async, &CloudTrailClient::RemoveTags, this, request);
}

void CloudTrailClient::RemoveTagsAsync(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudTrailClient::RemoveTagsAsyncHelper, this, request, handler, context);
}

void CloudTrailClient::RemoveTagsAsyncHelper(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTags(request), context);
}

StartLoggingOutcome CloudTrailClient::StartLogging(const StartLoggingRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return StartLoggingOutcome(StartLoggingResult(outcome.GetResult()));
  }
  else
  {
    return StartLoggingOutcome(outcome.GetError());
  }
}

StartLoggingOutcomeCallable CloudTrailClient::StartLoggingCallable(const StartLoggingRequest& request) const
{
  return std::async(std::launch::async, &CloudTrailClient::StartLogging, this, request);
}

void CloudTrailClient::StartLoggingAsync(const StartLoggingRequest& request, const StartLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudTrailClient::StartLoggingAsyncHelper, this, request, handler, context);
}

void CloudTrailClient::StartLoggingAsyncHelper(const StartLoggingRequest& request, const StartLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartLogging(request), context);
}

StopLoggingOutcome CloudTrailClient::StopLogging(const StopLoggingRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return StopLoggingOutcome(StopLoggingResult(outcome.GetResult()));
  }
  else
  {
    return StopLoggingOutcome(outcome.GetError());
  }
}

StopLoggingOutcomeCallable CloudTrailClient::StopLoggingCallable(const StopLoggingRequest& request) const
{
  return std::async(std::launch::async, &CloudTrailClient::StopLogging, this, request);
}

void CloudTrailClient::StopLoggingAsync(const StopLoggingRequest& request, const StopLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudTrailClient::StopLoggingAsyncHelper, this, request, handler, context);
}

void CloudTrailClient::StopLoggingAsyncHelper(const StopLoggingRequest& request, const StopLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopLogging(request), context);
}

UpdateTrailOutcome CloudTrailClient::UpdateTrail(const UpdateTrailRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateTrailOutcome(UpdateTrailResult(outcome.GetResult()));
  }
  else
  {
    return UpdateTrailOutcome(outcome.GetError());
  }
}

UpdateTrailOutcomeCallable CloudTrailClient::UpdateTrailCallable(const UpdateTrailRequest& request) const
{
  return std::async(std::launch::async, &CloudTrailClient::UpdateTrail, this, request);
}

void CloudTrailClient::UpdateTrailAsync(const UpdateTrailRequest& request, const UpdateTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudTrailClient::UpdateTrailAsyncHelper, this, request, handler, context);
}

void CloudTrailClient::UpdateTrailAsyncHelper(const UpdateTrailRequest& request, const UpdateTrailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTrail(request), context);
}

