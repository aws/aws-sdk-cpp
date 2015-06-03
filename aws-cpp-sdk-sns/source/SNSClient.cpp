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
#include <aws/sns/SNSClient.h>
#include <aws/sns/SNSEndpoint.h>
#include <aws/sns/SNSErrorMarshaller.h>
#include <aws/sns/model/AddPermissionRequest.h>
#include <aws/sns/model/AddTagsToResourceRequest.h>
#include <aws/sns/model/ConfirmSubscriptionRequest.h>
#include <aws/sns/model/CreatePlatformApplicationRequest.h>
#include <aws/sns/model/CreatePlatformEndpointRequest.h>
#include <aws/sns/model/CreateTopicRequest.h>
#include <aws/sns/model/DeleteEndpointRequest.h>
#include <aws/sns/model/DeletePlatformApplicationRequest.h>
#include <aws/sns/model/DeleteTopicRequest.h>
#include <aws/sns/model/GetEndpointAttributesRequest.h>
#include <aws/sns/model/GetPlatformApplicationAttributesRequest.h>
#include <aws/sns/model/GetSubscriptionAttributesRequest.h>
#include <aws/sns/model/GetTopicAttributesRequest.h>
#include <aws/sns/model/ListEndpointsByPlatformApplicationRequest.h>
#include <aws/sns/model/ListPlatformApplicationsRequest.h>
#include <aws/sns/model/ListSubscriptionsRequest.h>
#include <aws/sns/model/ListSubscriptionsByTopicRequest.h>
#include <aws/sns/model/ListTagsForResourceRequest.h>
#include <aws/sns/model/ListTopicsRequest.h>
#include <aws/sns/model/PublishRequest.h>
#include <aws/sns/model/RemovePermissionRequest.h>
#include <aws/sns/model/RemoveTagsFromResourceRequest.h>
#include <aws/sns/model/SetEndpointAttributesRequest.h>
#include <aws/sns/model/SetPlatformApplicationAttributesRequest.h>
#include <aws/sns/model/SetSubscriptionAttributesRequest.h>
#include <aws/sns/model/SetTopicAttributesRequest.h>
#include <aws/sns/model/SubscribeRequest.h>
#include <aws/sns/model/UnsubscribeRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SNS;
using namespace Aws::SNS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "sns";
static const char* ALLOCATION_TAG = "SNSClient";

SNSClient::SNSClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SNSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SNSClient::SNSClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SNSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SNSClient::SNSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SNSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SNSClient::~SNSClient()
{
}

void SNSClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << SNSEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AddPermissionOutcome SNSClient::AddPermission(const AddPermissionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AddPermissionOutcome(NoResult());
  }
  else
  {
    return AddPermissionOutcome(outcome.GetError());
  }
}

AddPermissionOutcomeCallable SNSClient::AddPermissionCallable(const AddPermissionRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::AddPermission, this, request);
}

void SNSClient::AddPermissionAsync(const AddPermissionRequest& request) const
{
  m_executor->Submit(&SNSClient::AddPermissionAsyncHelper, this, request);
}

void SNSClient::AddPermissionAsyncHelper(const AddPermissionRequest& request) const
{
  m_onAddPermissionOutcomeReceived(this, request, AddPermission(request));
}

AddTagsToResourceOutcome SNSClient::AddTagsToResource(const AddTagsToResourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AddTagsToResourceOutcome(NoResult());
  }
  else
  {
    return AddTagsToResourceOutcome(outcome.GetError());
  }
}

AddTagsToResourceOutcomeCallable SNSClient::AddTagsToResourceCallable(const AddTagsToResourceRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::AddTagsToResource, this, request);
}

void SNSClient::AddTagsToResourceAsync(const AddTagsToResourceRequest& request) const
{
  m_executor->Submit(&SNSClient::AddTagsToResourceAsyncHelper, this, request);
}

void SNSClient::AddTagsToResourceAsyncHelper(const AddTagsToResourceRequest& request) const
{
  m_onAddTagsToResourceOutcomeReceived(this, request, AddTagsToResource(request));
}

ConfirmSubscriptionOutcome SNSClient::ConfirmSubscription(const ConfirmSubscriptionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ConfirmSubscriptionOutcome(ConfirmSubscriptionResult(outcome.GetResult()));
  }
  else
  {
    return ConfirmSubscriptionOutcome(outcome.GetError());
  }
}

ConfirmSubscriptionOutcomeCallable SNSClient::ConfirmSubscriptionCallable(const ConfirmSubscriptionRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::ConfirmSubscription, this, request);
}

void SNSClient::ConfirmSubscriptionAsync(const ConfirmSubscriptionRequest& request) const
{
  m_executor->Submit(&SNSClient::ConfirmSubscriptionAsyncHelper, this, request);
}

void SNSClient::ConfirmSubscriptionAsyncHelper(const ConfirmSubscriptionRequest& request) const
{
  m_onConfirmSubscriptionOutcomeReceived(this, request, ConfirmSubscription(request));
}

CreatePlatformApplicationOutcome SNSClient::CreatePlatformApplication(const CreatePlatformApplicationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreatePlatformApplicationOutcome(CreatePlatformApplicationResult(outcome.GetResult()));
  }
  else
  {
    return CreatePlatformApplicationOutcome(outcome.GetError());
  }
}

CreatePlatformApplicationOutcomeCallable SNSClient::CreatePlatformApplicationCallable(const CreatePlatformApplicationRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::CreatePlatformApplication, this, request);
}

void SNSClient::CreatePlatformApplicationAsync(const CreatePlatformApplicationRequest& request) const
{
  m_executor->Submit(&SNSClient::CreatePlatformApplicationAsyncHelper, this, request);
}

void SNSClient::CreatePlatformApplicationAsyncHelper(const CreatePlatformApplicationRequest& request) const
{
  m_onCreatePlatformApplicationOutcomeReceived(this, request, CreatePlatformApplication(request));
}

CreatePlatformEndpointOutcome SNSClient::CreatePlatformEndpoint(const CreatePlatformEndpointRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreatePlatformEndpointOutcome(CreatePlatformEndpointResult(outcome.GetResult()));
  }
  else
  {
    return CreatePlatformEndpointOutcome(outcome.GetError());
  }
}

CreatePlatformEndpointOutcomeCallable SNSClient::CreatePlatformEndpointCallable(const CreatePlatformEndpointRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::CreatePlatformEndpoint, this, request);
}

void SNSClient::CreatePlatformEndpointAsync(const CreatePlatformEndpointRequest& request) const
{
  m_executor->Submit(&SNSClient::CreatePlatformEndpointAsyncHelper, this, request);
}

void SNSClient::CreatePlatformEndpointAsyncHelper(const CreatePlatformEndpointRequest& request) const
{
  m_onCreatePlatformEndpointOutcomeReceived(this, request, CreatePlatformEndpoint(request));
}

CreateTopicOutcome SNSClient::CreateTopic(const CreateTopicRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateTopicOutcome(CreateTopicResult(outcome.GetResult()));
  }
  else
  {
    return CreateTopicOutcome(outcome.GetError());
  }
}

CreateTopicOutcomeCallable SNSClient::CreateTopicCallable(const CreateTopicRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::CreateTopic, this, request);
}

void SNSClient::CreateTopicAsync(const CreateTopicRequest& request) const
{
  m_executor->Submit(&SNSClient::CreateTopicAsyncHelper, this, request);
}

void SNSClient::CreateTopicAsyncHelper(const CreateTopicRequest& request) const
{
  m_onCreateTopicOutcomeReceived(this, request, CreateTopic(request));
}

DeleteEndpointOutcome SNSClient::DeleteEndpoint(const DeleteEndpointRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteEndpointOutcome(NoResult());
  }
  else
  {
    return DeleteEndpointOutcome(outcome.GetError());
  }
}

DeleteEndpointOutcomeCallable SNSClient::DeleteEndpointCallable(const DeleteEndpointRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::DeleteEndpoint, this, request);
}

void SNSClient::DeleteEndpointAsync(const DeleteEndpointRequest& request) const
{
  m_executor->Submit(&SNSClient::DeleteEndpointAsyncHelper, this, request);
}

void SNSClient::DeleteEndpointAsyncHelper(const DeleteEndpointRequest& request) const
{
  m_onDeleteEndpointOutcomeReceived(this, request, DeleteEndpoint(request));
}

DeletePlatformApplicationOutcome SNSClient::DeletePlatformApplication(const DeletePlatformApplicationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeletePlatformApplicationOutcome(NoResult());
  }
  else
  {
    return DeletePlatformApplicationOutcome(outcome.GetError());
  }
}

DeletePlatformApplicationOutcomeCallable SNSClient::DeletePlatformApplicationCallable(const DeletePlatformApplicationRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::DeletePlatformApplication, this, request);
}

void SNSClient::DeletePlatformApplicationAsync(const DeletePlatformApplicationRequest& request) const
{
  m_executor->Submit(&SNSClient::DeletePlatformApplicationAsyncHelper, this, request);
}

void SNSClient::DeletePlatformApplicationAsyncHelper(const DeletePlatformApplicationRequest& request) const
{
  m_onDeletePlatformApplicationOutcomeReceived(this, request, DeletePlatformApplication(request));
}

DeleteTopicOutcome SNSClient::DeleteTopic(const DeleteTopicRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteTopicOutcome(NoResult());
  }
  else
  {
    return DeleteTopicOutcome(outcome.GetError());
  }
}

DeleteTopicOutcomeCallable SNSClient::DeleteTopicCallable(const DeleteTopicRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::DeleteTopic, this, request);
}

void SNSClient::DeleteTopicAsync(const DeleteTopicRequest& request) const
{
  m_executor->Submit(&SNSClient::DeleteTopicAsyncHelper, this, request);
}

void SNSClient::DeleteTopicAsyncHelper(const DeleteTopicRequest& request) const
{
  m_onDeleteTopicOutcomeReceived(this, request, DeleteTopic(request));
}

GetEndpointAttributesOutcome SNSClient::GetEndpointAttributes(const GetEndpointAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetEndpointAttributesOutcome(GetEndpointAttributesResult(outcome.GetResult()));
  }
  else
  {
    return GetEndpointAttributesOutcome(outcome.GetError());
  }
}

GetEndpointAttributesOutcomeCallable SNSClient::GetEndpointAttributesCallable(const GetEndpointAttributesRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::GetEndpointAttributes, this, request);
}

void SNSClient::GetEndpointAttributesAsync(const GetEndpointAttributesRequest& request) const
{
  m_executor->Submit(&SNSClient::GetEndpointAttributesAsyncHelper, this, request);
}

void SNSClient::GetEndpointAttributesAsyncHelper(const GetEndpointAttributesRequest& request) const
{
  m_onGetEndpointAttributesOutcomeReceived(this, request, GetEndpointAttributes(request));
}

GetPlatformApplicationAttributesOutcome SNSClient::GetPlatformApplicationAttributes(const GetPlatformApplicationAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetPlatformApplicationAttributesOutcome(GetPlatformApplicationAttributesResult(outcome.GetResult()));
  }
  else
  {
    return GetPlatformApplicationAttributesOutcome(outcome.GetError());
  }
}

GetPlatformApplicationAttributesOutcomeCallable SNSClient::GetPlatformApplicationAttributesCallable(const GetPlatformApplicationAttributesRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::GetPlatformApplicationAttributes, this, request);
}

void SNSClient::GetPlatformApplicationAttributesAsync(const GetPlatformApplicationAttributesRequest& request) const
{
  m_executor->Submit(&SNSClient::GetPlatformApplicationAttributesAsyncHelper, this, request);
}

void SNSClient::GetPlatformApplicationAttributesAsyncHelper(const GetPlatformApplicationAttributesRequest& request) const
{
  m_onGetPlatformApplicationAttributesOutcomeReceived(this, request, GetPlatformApplicationAttributes(request));
}

GetSubscriptionAttributesOutcome SNSClient::GetSubscriptionAttributes(const GetSubscriptionAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetSubscriptionAttributesOutcome(GetSubscriptionAttributesResult(outcome.GetResult()));
  }
  else
  {
    return GetSubscriptionAttributesOutcome(outcome.GetError());
  }
}

GetSubscriptionAttributesOutcomeCallable SNSClient::GetSubscriptionAttributesCallable(const GetSubscriptionAttributesRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::GetSubscriptionAttributes, this, request);
}

void SNSClient::GetSubscriptionAttributesAsync(const GetSubscriptionAttributesRequest& request) const
{
  m_executor->Submit(&SNSClient::GetSubscriptionAttributesAsyncHelper, this, request);
}

void SNSClient::GetSubscriptionAttributesAsyncHelper(const GetSubscriptionAttributesRequest& request) const
{
  m_onGetSubscriptionAttributesOutcomeReceived(this, request, GetSubscriptionAttributes(request));
}

GetTopicAttributesOutcome SNSClient::GetTopicAttributes(const GetTopicAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetTopicAttributesOutcome(GetTopicAttributesResult(outcome.GetResult()));
  }
  else
  {
    return GetTopicAttributesOutcome(outcome.GetError());
  }
}

GetTopicAttributesOutcomeCallable SNSClient::GetTopicAttributesCallable(const GetTopicAttributesRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::GetTopicAttributes, this, request);
}

void SNSClient::GetTopicAttributesAsync(const GetTopicAttributesRequest& request) const
{
  m_executor->Submit(&SNSClient::GetTopicAttributesAsyncHelper, this, request);
}

void SNSClient::GetTopicAttributesAsyncHelper(const GetTopicAttributesRequest& request) const
{
  m_onGetTopicAttributesOutcomeReceived(this, request, GetTopicAttributes(request));
}

ListEndpointsByPlatformApplicationOutcome SNSClient::ListEndpointsByPlatformApplication(const ListEndpointsByPlatformApplicationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListEndpointsByPlatformApplicationOutcome(ListEndpointsByPlatformApplicationResult(outcome.GetResult()));
  }
  else
  {
    return ListEndpointsByPlatformApplicationOutcome(outcome.GetError());
  }
}

ListEndpointsByPlatformApplicationOutcomeCallable SNSClient::ListEndpointsByPlatformApplicationCallable(const ListEndpointsByPlatformApplicationRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::ListEndpointsByPlatformApplication, this, request);
}

void SNSClient::ListEndpointsByPlatformApplicationAsync(const ListEndpointsByPlatformApplicationRequest& request) const
{
  m_executor->Submit(&SNSClient::ListEndpointsByPlatformApplicationAsyncHelper, this, request);
}

void SNSClient::ListEndpointsByPlatformApplicationAsyncHelper(const ListEndpointsByPlatformApplicationRequest& request) const
{
  m_onListEndpointsByPlatformApplicationOutcomeReceived(this, request, ListEndpointsByPlatformApplication(request));
}

ListPlatformApplicationsOutcome SNSClient::ListPlatformApplications(const ListPlatformApplicationsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListPlatformApplicationsOutcome(ListPlatformApplicationsResult(outcome.GetResult()));
  }
  else
  {
    return ListPlatformApplicationsOutcome(outcome.GetError());
  }
}

ListPlatformApplicationsOutcomeCallable SNSClient::ListPlatformApplicationsCallable(const ListPlatformApplicationsRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::ListPlatformApplications, this, request);
}

void SNSClient::ListPlatformApplicationsAsync(const ListPlatformApplicationsRequest& request) const
{
  m_executor->Submit(&SNSClient::ListPlatformApplicationsAsyncHelper, this, request);
}

void SNSClient::ListPlatformApplicationsAsyncHelper(const ListPlatformApplicationsRequest& request) const
{
  m_onListPlatformApplicationsOutcomeReceived(this, request, ListPlatformApplications(request));
}

ListSubscriptionsOutcome SNSClient::ListSubscriptions(const ListSubscriptionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListSubscriptionsOutcome(ListSubscriptionsResult(outcome.GetResult()));
  }
  else
  {
    return ListSubscriptionsOutcome(outcome.GetError());
  }
}

ListSubscriptionsOutcomeCallable SNSClient::ListSubscriptionsCallable(const ListSubscriptionsRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::ListSubscriptions, this, request);
}

void SNSClient::ListSubscriptionsAsync(const ListSubscriptionsRequest& request) const
{
  m_executor->Submit(&SNSClient::ListSubscriptionsAsyncHelper, this, request);
}

void SNSClient::ListSubscriptionsAsyncHelper(const ListSubscriptionsRequest& request) const
{
  m_onListSubscriptionsOutcomeReceived(this, request, ListSubscriptions(request));
}

ListSubscriptionsByTopicOutcome SNSClient::ListSubscriptionsByTopic(const ListSubscriptionsByTopicRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListSubscriptionsByTopicOutcome(ListSubscriptionsByTopicResult(outcome.GetResult()));
  }
  else
  {
    return ListSubscriptionsByTopicOutcome(outcome.GetError());
  }
}

ListSubscriptionsByTopicOutcomeCallable SNSClient::ListSubscriptionsByTopicCallable(const ListSubscriptionsByTopicRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::ListSubscriptionsByTopic, this, request);
}

void SNSClient::ListSubscriptionsByTopicAsync(const ListSubscriptionsByTopicRequest& request) const
{
  m_executor->Submit(&SNSClient::ListSubscriptionsByTopicAsyncHelper, this, request);
}

void SNSClient::ListSubscriptionsByTopicAsyncHelper(const ListSubscriptionsByTopicRequest& request) const
{
  m_onListSubscriptionsByTopicOutcomeReceived(this, request, ListSubscriptionsByTopic(request));
}

ListTagsForResourceOutcome SNSClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable SNSClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::ListTagsForResource, this, request);
}

void SNSClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request) const
{
  m_executor->Submit(&SNSClient::ListTagsForResourceAsyncHelper, this, request);
}

void SNSClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request) const
{
  m_onListTagsForResourceOutcomeReceived(this, request, ListTagsForResource(request));
}

ListTopicsOutcome SNSClient::ListTopics(const ListTopicsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListTopicsOutcome(ListTopicsResult(outcome.GetResult()));
  }
  else
  {
    return ListTopicsOutcome(outcome.GetError());
  }
}

ListTopicsOutcomeCallable SNSClient::ListTopicsCallable(const ListTopicsRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::ListTopics, this, request);
}

void SNSClient::ListTopicsAsync(const ListTopicsRequest& request) const
{
  m_executor->Submit(&SNSClient::ListTopicsAsyncHelper, this, request);
}

void SNSClient::ListTopicsAsyncHelper(const ListTopicsRequest& request) const
{
  m_onListTopicsOutcomeReceived(this, request, ListTopics(request));
}

PublishOutcome SNSClient::Publish(const PublishRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PublishOutcome(PublishResult(outcome.GetResult()));
  }
  else
  {
    return PublishOutcome(outcome.GetError());
  }
}

PublishOutcomeCallable SNSClient::PublishCallable(const PublishRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::Publish, this, request);
}

void SNSClient::PublishAsync(const PublishRequest& request) const
{
  m_executor->Submit(&SNSClient::PublishAsyncHelper, this, request);
}

void SNSClient::PublishAsyncHelper(const PublishRequest& request) const
{
  m_onPublishOutcomeReceived(this, request, Publish(request));
}

RemovePermissionOutcome SNSClient::RemovePermission(const RemovePermissionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RemovePermissionOutcome(NoResult());
  }
  else
  {
    return RemovePermissionOutcome(outcome.GetError());
  }
}

RemovePermissionOutcomeCallable SNSClient::RemovePermissionCallable(const RemovePermissionRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::RemovePermission, this, request);
}

void SNSClient::RemovePermissionAsync(const RemovePermissionRequest& request) const
{
  m_executor->Submit(&SNSClient::RemovePermissionAsyncHelper, this, request);
}

void SNSClient::RemovePermissionAsyncHelper(const RemovePermissionRequest& request) const
{
  m_onRemovePermissionOutcomeReceived(this, request, RemovePermission(request));
}

RemoveTagsFromResourceOutcome SNSClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RemoveTagsFromResourceOutcome(NoResult());
  }
  else
  {
    return RemoveTagsFromResourceOutcome(outcome.GetError());
  }
}

RemoveTagsFromResourceOutcomeCallable SNSClient::RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::RemoveTagsFromResource, this, request);
}

void SNSClient::RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequest& request) const
{
  m_executor->Submit(&SNSClient::RemoveTagsFromResourceAsyncHelper, this, request);
}

void SNSClient::RemoveTagsFromResourceAsyncHelper(const RemoveTagsFromResourceRequest& request) const
{
  m_onRemoveTagsFromResourceOutcomeReceived(this, request, RemoveTagsFromResource(request));
}

SetEndpointAttributesOutcome SNSClient::SetEndpointAttributes(const SetEndpointAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetEndpointAttributesOutcome(NoResult());
  }
  else
  {
    return SetEndpointAttributesOutcome(outcome.GetError());
  }
}

SetEndpointAttributesOutcomeCallable SNSClient::SetEndpointAttributesCallable(const SetEndpointAttributesRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::SetEndpointAttributes, this, request);
}

void SNSClient::SetEndpointAttributesAsync(const SetEndpointAttributesRequest& request) const
{
  m_executor->Submit(&SNSClient::SetEndpointAttributesAsyncHelper, this, request);
}

void SNSClient::SetEndpointAttributesAsyncHelper(const SetEndpointAttributesRequest& request) const
{
  m_onSetEndpointAttributesOutcomeReceived(this, request, SetEndpointAttributes(request));
}

SetPlatformApplicationAttributesOutcome SNSClient::SetPlatformApplicationAttributes(const SetPlatformApplicationAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetPlatformApplicationAttributesOutcome(NoResult());
  }
  else
  {
    return SetPlatformApplicationAttributesOutcome(outcome.GetError());
  }
}

SetPlatformApplicationAttributesOutcomeCallable SNSClient::SetPlatformApplicationAttributesCallable(const SetPlatformApplicationAttributesRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::SetPlatformApplicationAttributes, this, request);
}

void SNSClient::SetPlatformApplicationAttributesAsync(const SetPlatformApplicationAttributesRequest& request) const
{
  m_executor->Submit(&SNSClient::SetPlatformApplicationAttributesAsyncHelper, this, request);
}

void SNSClient::SetPlatformApplicationAttributesAsyncHelper(const SetPlatformApplicationAttributesRequest& request) const
{
  m_onSetPlatformApplicationAttributesOutcomeReceived(this, request, SetPlatformApplicationAttributes(request));
}

SetSubscriptionAttributesOutcome SNSClient::SetSubscriptionAttributes(const SetSubscriptionAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetSubscriptionAttributesOutcome(NoResult());
  }
  else
  {
    return SetSubscriptionAttributesOutcome(outcome.GetError());
  }
}

SetSubscriptionAttributesOutcomeCallable SNSClient::SetSubscriptionAttributesCallable(const SetSubscriptionAttributesRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::SetSubscriptionAttributes, this, request);
}

void SNSClient::SetSubscriptionAttributesAsync(const SetSubscriptionAttributesRequest& request) const
{
  m_executor->Submit(&SNSClient::SetSubscriptionAttributesAsyncHelper, this, request);
}

void SNSClient::SetSubscriptionAttributesAsyncHelper(const SetSubscriptionAttributesRequest& request) const
{
  m_onSetSubscriptionAttributesOutcomeReceived(this, request, SetSubscriptionAttributes(request));
}

SetTopicAttributesOutcome SNSClient::SetTopicAttributes(const SetTopicAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetTopicAttributesOutcome(NoResult());
  }
  else
  {
    return SetTopicAttributesOutcome(outcome.GetError());
  }
}

SetTopicAttributesOutcomeCallable SNSClient::SetTopicAttributesCallable(const SetTopicAttributesRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::SetTopicAttributes, this, request);
}

void SNSClient::SetTopicAttributesAsync(const SetTopicAttributesRequest& request) const
{
  m_executor->Submit(&SNSClient::SetTopicAttributesAsyncHelper, this, request);
}

void SNSClient::SetTopicAttributesAsyncHelper(const SetTopicAttributesRequest& request) const
{
  m_onSetTopicAttributesOutcomeReceived(this, request, SetTopicAttributes(request));
}

SubscribeOutcome SNSClient::Subscribe(const SubscribeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SubscribeOutcome(SubscribeResult(outcome.GetResult()));
  }
  else
  {
    return SubscribeOutcome(outcome.GetError());
  }
}

SubscribeOutcomeCallable SNSClient::SubscribeCallable(const SubscribeRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::Subscribe, this, request);
}

void SNSClient::SubscribeAsync(const SubscribeRequest& request) const
{
  m_executor->Submit(&SNSClient::SubscribeAsyncHelper, this, request);
}

void SNSClient::SubscribeAsyncHelper(const SubscribeRequest& request) const
{
  m_onSubscribeOutcomeReceived(this, request, Subscribe(request));
}

UnsubscribeOutcome SNSClient::Unsubscribe(const UnsubscribeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UnsubscribeOutcome(NoResult());
  }
  else
  {
    return UnsubscribeOutcome(outcome.GetError());
  }
}

UnsubscribeOutcomeCallable SNSClient::UnsubscribeCallable(const UnsubscribeRequest& request) const
{
  return std::async(std::launch::async, &SNSClient::Unsubscribe, this, request);
}

void SNSClient::UnsubscribeAsync(const UnsubscribeRequest& request) const
{
  m_executor->Submit(&SNSClient::UnsubscribeAsyncHelper, this, request);
}

void SNSClient::UnsubscribeAsyncHelper(const UnsubscribeRequest& request) const
{
  m_onUnsubscribeOutcomeReceived(this, request, Unsubscribe(request));
}

