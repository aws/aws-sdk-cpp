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
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/sqs/SQSClient.h>
#include <aws/sqs/SQSEndpoint.h>
#include <aws/sqs/SQSErrorMarshaller.h>
#include <aws/sqs/model/AddPermissionRequest.h>
#include <aws/sqs/model/ChangeMessageVisibilityRequest.h>
#include <aws/sqs/model/ChangeMessageVisibilityBatchRequest.h>
#include <aws/sqs/model/CreateQueueRequest.h>
#include <aws/sqs/model/DeleteMessageRequest.h>
#include <aws/sqs/model/DeleteMessageBatchRequest.h>
#include <aws/sqs/model/DeleteQueueRequest.h>
#include <aws/sqs/model/GetQueueAttributesRequest.h>
#include <aws/sqs/model/GetQueueUrlRequest.h>
#include <aws/sqs/model/ListDeadLetterSourceQueuesRequest.h>
#include <aws/sqs/model/ListQueuesRequest.h>
#include <aws/sqs/model/PurgeQueueRequest.h>
#include <aws/sqs/model/ReceiveMessageRequest.h>
#include <aws/sqs/model/RemovePermissionRequest.h>
#include <aws/sqs/model/SendMessageRequest.h>
#include <aws/sqs/model/SendMessageBatchRequest.h>
#include <aws/sqs/model/SetQueueAttributesRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SQS;
using namespace Aws::SQS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "sqs";
static const char* ALLOCATION_TAG = "SQSClient";

SQSClient::SQSClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<SQSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SQSClient::SQSClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<SQSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SQSClient::SQSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<SQSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SQSClient::~SQSClient()
{
}

void SQSClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << SQSEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AddPermissionOutcome SQSClient::AddPermission(const AddPermissionRequest& request) const
{
  XmlOutcome outcome = MakeRequest(request.GetQueueUrl(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AddPermissionOutcome(NoResult());
  }
  else
  {
    return AddPermissionOutcome(outcome.GetError());
  }
}

AddPermissionOutcomeCallable SQSClient::AddPermissionCallable(const AddPermissionRequest& request) const
{
  return std::async(std::launch::async, &SQSClient::AddPermission, this, request);
}

void SQSClient::AddPermissionAsync(const AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SQSClient::AddPermissionAsyncHelper, this, request, handler, context);
}

void SQSClient::AddPermissionAsyncHelper(const AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddPermission(request), context);
}

ChangeMessageVisibilityOutcome SQSClient::ChangeMessageVisibility(const ChangeMessageVisibilityRequest& request) const
{
  XmlOutcome outcome = MakeRequest(request.GetQueueUrl(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ChangeMessageVisibilityOutcome(NoResult());
  }
  else
  {
    return ChangeMessageVisibilityOutcome(outcome.GetError());
  }
}

ChangeMessageVisibilityOutcomeCallable SQSClient::ChangeMessageVisibilityCallable(const ChangeMessageVisibilityRequest& request) const
{
  return std::async(std::launch::async, &SQSClient::ChangeMessageVisibility, this, request);
}

void SQSClient::ChangeMessageVisibilityAsync(const ChangeMessageVisibilityRequest& request, const ChangeMessageVisibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SQSClient::ChangeMessageVisibilityAsyncHelper, this, request, handler, context);
}

void SQSClient::ChangeMessageVisibilityAsyncHelper(const ChangeMessageVisibilityRequest& request, const ChangeMessageVisibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ChangeMessageVisibility(request), context);
}

ChangeMessageVisibilityBatchOutcome SQSClient::ChangeMessageVisibilityBatch(const ChangeMessageVisibilityBatchRequest& request) const
{
  XmlOutcome outcome = MakeRequest(request.GetQueueUrl(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ChangeMessageVisibilityBatchOutcome(ChangeMessageVisibilityBatchResult(outcome.GetResult()));
  }
  else
  {
    return ChangeMessageVisibilityBatchOutcome(outcome.GetError());
  }
}

ChangeMessageVisibilityBatchOutcomeCallable SQSClient::ChangeMessageVisibilityBatchCallable(const ChangeMessageVisibilityBatchRequest& request) const
{
  return std::async(std::launch::async, &SQSClient::ChangeMessageVisibilityBatch, this, request);
}

void SQSClient::ChangeMessageVisibilityBatchAsync(const ChangeMessageVisibilityBatchRequest& request, const ChangeMessageVisibilityBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SQSClient::ChangeMessageVisibilityBatchAsyncHelper, this, request, handler, context);
}

void SQSClient::ChangeMessageVisibilityBatchAsyncHelper(const ChangeMessageVisibilityBatchRequest& request, const ChangeMessageVisibilityBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ChangeMessageVisibilityBatch(request), context);
}

CreateQueueOutcome SQSClient::CreateQueue(const CreateQueueRequest& request) const
{

  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateQueueOutcome(CreateQueueResult(outcome.GetResult()));
  }
  else
  {
    return CreateQueueOutcome(outcome.GetError());
  }
}

CreateQueueOutcomeCallable SQSClient::CreateQueueCallable(const CreateQueueRequest& request) const
{
  return std::async(std::launch::async, &SQSClient::CreateQueue, this, request);
}

void SQSClient::CreateQueueAsync(const CreateQueueRequest& request, const CreateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SQSClient::CreateQueueAsyncHelper, this, request, handler, context);
}

void SQSClient::CreateQueueAsyncHelper(const CreateQueueRequest& request, const CreateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateQueue(request), context);
}

DeleteMessageOutcome SQSClient::DeleteMessage(const DeleteMessageRequest& request) const
{
  XmlOutcome outcome = MakeRequest(request.GetQueueUrl(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteMessageOutcome(NoResult());
  }
  else
  {
    return DeleteMessageOutcome(outcome.GetError());
  }
}

DeleteMessageOutcomeCallable SQSClient::DeleteMessageCallable(const DeleteMessageRequest& request) const
{
  return std::async(std::launch::async, &SQSClient::DeleteMessage, this, request);
}

void SQSClient::DeleteMessageAsync(const DeleteMessageRequest& request, const DeleteMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SQSClient::DeleteMessageAsyncHelper, this, request, handler, context);
}

void SQSClient::DeleteMessageAsyncHelper(const DeleteMessageRequest& request, const DeleteMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMessage(request), context);
}

DeleteMessageBatchOutcome SQSClient::DeleteMessageBatch(const DeleteMessageBatchRequest& request) const
{
  XmlOutcome outcome = MakeRequest(request.GetQueueUrl(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteMessageBatchOutcome(DeleteMessageBatchResult(outcome.GetResult()));
  }
  else
  {
    return DeleteMessageBatchOutcome(outcome.GetError());
  }
}

DeleteMessageBatchOutcomeCallable SQSClient::DeleteMessageBatchCallable(const DeleteMessageBatchRequest& request) const
{
  return std::async(std::launch::async, &SQSClient::DeleteMessageBatch, this, request);
}

void SQSClient::DeleteMessageBatchAsync(const DeleteMessageBatchRequest& request, const DeleteMessageBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SQSClient::DeleteMessageBatchAsyncHelper, this, request, handler, context);
}

void SQSClient::DeleteMessageBatchAsyncHelper(const DeleteMessageBatchRequest& request, const DeleteMessageBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMessageBatch(request), context);
}

DeleteQueueOutcome SQSClient::DeleteQueue(const DeleteQueueRequest& request) const
{
  XmlOutcome outcome = MakeRequest(request.GetQueueUrl(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteQueueOutcome(NoResult());
  }
  else
  {
    return DeleteQueueOutcome(outcome.GetError());
  }
}

DeleteQueueOutcomeCallable SQSClient::DeleteQueueCallable(const DeleteQueueRequest& request) const
{
  return std::async(std::launch::async, &SQSClient::DeleteQueue, this, request);
}

void SQSClient::DeleteQueueAsync(const DeleteQueueRequest& request, const DeleteQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SQSClient::DeleteQueueAsyncHelper, this, request, handler, context);
}

void SQSClient::DeleteQueueAsyncHelper(const DeleteQueueRequest& request, const DeleteQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteQueue(request), context);
}

GetQueueAttributesOutcome SQSClient::GetQueueAttributes(const GetQueueAttributesRequest& request) const
{
  XmlOutcome outcome = MakeRequest(request.GetQueueUrl(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetQueueAttributesOutcome(GetQueueAttributesResult(outcome.GetResult()));
  }
  else
  {
    return GetQueueAttributesOutcome(outcome.GetError());
  }
}

GetQueueAttributesOutcomeCallable SQSClient::GetQueueAttributesCallable(const GetQueueAttributesRequest& request) const
{
  return std::async(std::launch::async, &SQSClient::GetQueueAttributes, this, request);
}

void SQSClient::GetQueueAttributesAsync(const GetQueueAttributesRequest& request, const GetQueueAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SQSClient::GetQueueAttributesAsyncHelper, this, request, handler, context);
}

void SQSClient::GetQueueAttributesAsyncHelper(const GetQueueAttributesRequest& request, const GetQueueAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetQueueAttributes(request), context);
}

GetQueueUrlOutcome SQSClient::GetQueueUrl(const GetQueueUrlRequest& request) const
{

  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetQueueUrlOutcome(GetQueueUrlResult(outcome.GetResult()));
  }
  else
  {
    return GetQueueUrlOutcome(outcome.GetError());
  }
}

GetQueueUrlOutcomeCallable SQSClient::GetQueueUrlCallable(const GetQueueUrlRequest& request) const
{
  return std::async(std::launch::async, &SQSClient::GetQueueUrl, this, request);
}

void SQSClient::GetQueueUrlAsync(const GetQueueUrlRequest& request, const GetQueueUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SQSClient::GetQueueUrlAsyncHelper, this, request, handler, context);
}

void SQSClient::GetQueueUrlAsyncHelper(const GetQueueUrlRequest& request, const GetQueueUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetQueueUrl(request), context);
}

ListDeadLetterSourceQueuesOutcome SQSClient::ListDeadLetterSourceQueues(const ListDeadLetterSourceQueuesRequest& request) const
{
  XmlOutcome outcome = MakeRequest(request.GetQueueUrl(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListDeadLetterSourceQueuesOutcome(ListDeadLetterSourceQueuesResult(outcome.GetResult()));
  }
  else
  {
    return ListDeadLetterSourceQueuesOutcome(outcome.GetError());
  }
}

ListDeadLetterSourceQueuesOutcomeCallable SQSClient::ListDeadLetterSourceQueuesCallable(const ListDeadLetterSourceQueuesRequest& request) const
{
  return std::async(std::launch::async, &SQSClient::ListDeadLetterSourceQueues, this, request);
}

void SQSClient::ListDeadLetterSourceQueuesAsync(const ListDeadLetterSourceQueuesRequest& request, const ListDeadLetterSourceQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SQSClient::ListDeadLetterSourceQueuesAsyncHelper, this, request, handler, context);
}

void SQSClient::ListDeadLetterSourceQueuesAsyncHelper(const ListDeadLetterSourceQueuesRequest& request, const ListDeadLetterSourceQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDeadLetterSourceQueues(request), context);
}

ListQueuesOutcome SQSClient::ListQueues(const ListQueuesRequest& request) const
{

  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListQueuesOutcome(ListQueuesResult(outcome.GetResult()));
  }
  else
  {
    return ListQueuesOutcome(outcome.GetError());
  }
}

ListQueuesOutcomeCallable SQSClient::ListQueuesCallable(const ListQueuesRequest& request) const
{
  return std::async(std::launch::async, &SQSClient::ListQueues, this, request);
}

void SQSClient::ListQueuesAsync(const ListQueuesRequest& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SQSClient::ListQueuesAsyncHelper, this, request, handler, context);
}

void SQSClient::ListQueuesAsyncHelper(const ListQueuesRequest& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListQueues(request), context);
}

PurgeQueueOutcome SQSClient::PurgeQueue(const PurgeQueueRequest& request) const
{
  XmlOutcome outcome = MakeRequest(request.GetQueueUrl(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PurgeQueueOutcome(NoResult());
  }
  else
  {
    return PurgeQueueOutcome(outcome.GetError());
  }
}

PurgeQueueOutcomeCallable SQSClient::PurgeQueueCallable(const PurgeQueueRequest& request) const
{
  return std::async(std::launch::async, &SQSClient::PurgeQueue, this, request);
}

void SQSClient::PurgeQueueAsync(const PurgeQueueRequest& request, const PurgeQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SQSClient::PurgeQueueAsyncHelper, this, request, handler, context);
}

void SQSClient::PurgeQueueAsyncHelper(const PurgeQueueRequest& request, const PurgeQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PurgeQueue(request), context);
}

ReceiveMessageOutcome SQSClient::ReceiveMessage(const ReceiveMessageRequest& request) const
{
  XmlOutcome outcome = MakeRequest(request.GetQueueUrl(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ReceiveMessageOutcome(ReceiveMessageResult(outcome.GetResult()));
  }
  else
  {
    return ReceiveMessageOutcome(outcome.GetError());
  }
}

ReceiveMessageOutcomeCallable SQSClient::ReceiveMessageCallable(const ReceiveMessageRequest& request) const
{
  return std::async(std::launch::async, &SQSClient::ReceiveMessage, this, request);
}

void SQSClient::ReceiveMessageAsync(const ReceiveMessageRequest& request, const ReceiveMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SQSClient::ReceiveMessageAsyncHelper, this, request, handler, context);
}

void SQSClient::ReceiveMessageAsyncHelper(const ReceiveMessageRequest& request, const ReceiveMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReceiveMessage(request), context);
}

RemovePermissionOutcome SQSClient::RemovePermission(const RemovePermissionRequest& request) const
{
  XmlOutcome outcome = MakeRequest(request.GetQueueUrl(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RemovePermissionOutcome(NoResult());
  }
  else
  {
    return RemovePermissionOutcome(outcome.GetError());
  }
}

RemovePermissionOutcomeCallable SQSClient::RemovePermissionCallable(const RemovePermissionRequest& request) const
{
  return std::async(std::launch::async, &SQSClient::RemovePermission, this, request);
}

void SQSClient::RemovePermissionAsync(const RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SQSClient::RemovePermissionAsyncHelper, this, request, handler, context);
}

void SQSClient::RemovePermissionAsyncHelper(const RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemovePermission(request), context);
}

SendMessageOutcome SQSClient::SendMessage(const SendMessageRequest& request) const
{
  XmlOutcome outcome = MakeRequest(request.GetQueueUrl(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SendMessageOutcome(SendMessageResult(outcome.GetResult()));
  }
  else
  {
    return SendMessageOutcome(outcome.GetError());
  }
}

SendMessageOutcomeCallable SQSClient::SendMessageCallable(const SendMessageRequest& request) const
{
  return std::async(std::launch::async, &SQSClient::SendMessage, this, request);
}

void SQSClient::SendMessageAsync(const SendMessageRequest& request, const SendMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SQSClient::SendMessageAsyncHelper, this, request, handler, context);
}

void SQSClient::SendMessageAsyncHelper(const SendMessageRequest& request, const SendMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SendMessage(request), context);
}

SendMessageBatchOutcome SQSClient::SendMessageBatch(const SendMessageBatchRequest& request) const
{
  XmlOutcome outcome = MakeRequest(request.GetQueueUrl(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SendMessageBatchOutcome(SendMessageBatchResult(outcome.GetResult()));
  }
  else
  {
    return SendMessageBatchOutcome(outcome.GetError());
  }
}

SendMessageBatchOutcomeCallable SQSClient::SendMessageBatchCallable(const SendMessageBatchRequest& request) const
{
  return std::async(std::launch::async, &SQSClient::SendMessageBatch, this, request);
}

void SQSClient::SendMessageBatchAsync(const SendMessageBatchRequest& request, const SendMessageBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SQSClient::SendMessageBatchAsyncHelper, this, request, handler, context);
}

void SQSClient::SendMessageBatchAsyncHelper(const SendMessageBatchRequest& request, const SendMessageBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SendMessageBatch(request), context);
}

SetQueueAttributesOutcome SQSClient::SetQueueAttributes(const SetQueueAttributesRequest& request) const
{
  XmlOutcome outcome = MakeRequest(request.GetQueueUrl(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetQueueAttributesOutcome(NoResult());
  }
  else
  {
    return SetQueueAttributesOutcome(outcome.GetError());
  }
}

SetQueueAttributesOutcomeCallable SQSClient::SetQueueAttributesCallable(const SetQueueAttributesRequest& request) const
{
  return std::async(std::launch::async, &SQSClient::SetQueueAttributes, this, request);
}

void SQSClient::SetQueueAttributesAsync(const SetQueueAttributesRequest& request, const SetQueueAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&SQSClient::SetQueueAttributesAsyncHelper, this, request, handler, context);
}

void SQSClient::SetQueueAttributesAsyncHelper(const SetQueueAttributesRequest& request, const SetQueueAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetQueueAttributes(request), context);
}

