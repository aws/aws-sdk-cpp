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
#include <aws/sqs/model/ListQueueTagsRequest.h>
#include <aws/sqs/model/ListQueuesRequest.h>
#include <aws/sqs/model/PurgeQueueRequest.h>
#include <aws/sqs/model/ReceiveMessageRequest.h>
#include <aws/sqs/model/RemovePermissionRequest.h>
#include <aws/sqs/model/SendMessageRequest.h>
#include <aws/sqs/model/SendMessageBatchRequest.h>
#include <aws/sqs/model/SetQueueAttributesRequest.h>
#include <aws/sqs/model/TagQueueRequest.h>
#include <aws/sqs/model/UntagQueueRequest.h>

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
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SQSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SQSClient::SQSClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SQSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SQSClient::SQSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
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
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SQSEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SQSClient::OverrideEndpoint(const Aws::String& endpoint)
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
  auto task = Aws::MakeShared< std::packaged_task< AddPermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddPermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClient::AddPermissionAsync(const AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddPermissionAsyncHelper(request, handler, context); } );
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
  auto task = Aws::MakeShared< std::packaged_task< ChangeMessageVisibilityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ChangeMessageVisibility(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClient::ChangeMessageVisibilityAsync(const ChangeMessageVisibilityRequest& request, const ChangeMessageVisibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ChangeMessageVisibilityAsyncHelper(request, handler, context); } );
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
  auto task = Aws::MakeShared< std::packaged_task< ChangeMessageVisibilityBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ChangeMessageVisibilityBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClient::ChangeMessageVisibilityBatchAsync(const ChangeMessageVisibilityBatchRequest& request, const ChangeMessageVisibilityBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ChangeMessageVisibilityBatchAsyncHelper(request, handler, context); } );
}

void SQSClient::ChangeMessageVisibilityBatchAsyncHelper(const ChangeMessageVisibilityBatchRequest& request, const ChangeMessageVisibilityBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ChangeMessageVisibilityBatch(request), context);
}

CreateQueueOutcome SQSClient::CreateQueue(const CreateQueueRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< CreateQueueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateQueue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClient::CreateQueueAsync(const CreateQueueRequest& request, const CreateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateQueueAsyncHelper(request, handler, context); } );
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClient::DeleteMessageAsync(const DeleteMessageRequest& request, const DeleteMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMessageAsyncHelper(request, handler, context); } );
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteMessageBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMessageBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClient::DeleteMessageBatchAsync(const DeleteMessageBatchRequest& request, const DeleteMessageBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMessageBatchAsyncHelper(request, handler, context); } );
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteQueueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteQueue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClient::DeleteQueueAsync(const DeleteQueueRequest& request, const DeleteQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteQueueAsyncHelper(request, handler, context); } );
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
  auto task = Aws::MakeShared< std::packaged_task< GetQueueAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetQueueAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClient::GetQueueAttributesAsync(const GetQueueAttributesRequest& request, const GetQueueAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetQueueAttributesAsyncHelper(request, handler, context); } );
}

void SQSClient::GetQueueAttributesAsyncHelper(const GetQueueAttributesRequest& request, const GetQueueAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetQueueAttributes(request), context);
}

GetQueueUrlOutcome SQSClient::GetQueueUrl(const GetQueueUrlRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< GetQueueUrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetQueueUrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClient::GetQueueUrlAsync(const GetQueueUrlRequest& request, const GetQueueUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetQueueUrlAsyncHelper(request, handler, context); } );
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
  auto task = Aws::MakeShared< std::packaged_task< ListDeadLetterSourceQueuesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeadLetterSourceQueues(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClient::ListDeadLetterSourceQueuesAsync(const ListDeadLetterSourceQueuesRequest& request, const ListDeadLetterSourceQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDeadLetterSourceQueuesAsyncHelper(request, handler, context); } );
}

void SQSClient::ListDeadLetterSourceQueuesAsyncHelper(const ListDeadLetterSourceQueuesRequest& request, const ListDeadLetterSourceQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDeadLetterSourceQueues(request), context);
}

ListQueueTagsOutcome SQSClient::ListQueueTags(const ListQueueTagsRequest& request) const
{
  XmlOutcome outcome = MakeRequest(request.GetQueueUrl(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListQueueTagsOutcome(ListQueueTagsResult(outcome.GetResult()));
  }
  else
  {
    return ListQueueTagsOutcome(outcome.GetError());
  }
}

ListQueueTagsOutcomeCallable SQSClient::ListQueueTagsCallable(const ListQueueTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListQueueTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListQueueTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClient::ListQueueTagsAsync(const ListQueueTagsRequest& request, const ListQueueTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListQueueTagsAsyncHelper(request, handler, context); } );
}

void SQSClient::ListQueueTagsAsyncHelper(const ListQueueTagsRequest& request, const ListQueueTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListQueueTags(request), context);
}

ListQueuesOutcome SQSClient::ListQueues(const ListQueuesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
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
  auto task = Aws::MakeShared< std::packaged_task< ListQueuesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListQueues(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClient::ListQueuesAsync(const ListQueuesRequest& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListQueuesAsyncHelper(request, handler, context); } );
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
  auto task = Aws::MakeShared< std::packaged_task< PurgeQueueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PurgeQueue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClient::PurgeQueueAsync(const PurgeQueueRequest& request, const PurgeQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PurgeQueueAsyncHelper(request, handler, context); } );
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
  auto task = Aws::MakeShared< std::packaged_task< ReceiveMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReceiveMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClient::ReceiveMessageAsync(const ReceiveMessageRequest& request, const ReceiveMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ReceiveMessageAsyncHelper(request, handler, context); } );
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
  auto task = Aws::MakeShared< std::packaged_task< RemovePermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemovePermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClient::RemovePermissionAsync(const RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemovePermissionAsyncHelper(request, handler, context); } );
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
  auto task = Aws::MakeShared< std::packaged_task< SendMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClient::SendMessageAsync(const SendMessageRequest& request, const SendMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SendMessageAsyncHelper(request, handler, context); } );
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
  auto task = Aws::MakeShared< std::packaged_task< SendMessageBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendMessageBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClient::SendMessageBatchAsync(const SendMessageBatchRequest& request, const SendMessageBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SendMessageBatchAsyncHelper(request, handler, context); } );
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
  auto task = Aws::MakeShared< std::packaged_task< SetQueueAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetQueueAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClient::SetQueueAttributesAsync(const SetQueueAttributesRequest& request, const SetQueueAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetQueueAttributesAsyncHelper(request, handler, context); } );
}

void SQSClient::SetQueueAttributesAsyncHelper(const SetQueueAttributesRequest& request, const SetQueueAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetQueueAttributes(request), context);
}

TagQueueOutcome SQSClient::TagQueue(const TagQueueRequest& request) const
{
  XmlOutcome outcome = MakeRequest(request.GetQueueUrl(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return TagQueueOutcome(NoResult());
  }
  else
  {
    return TagQueueOutcome(outcome.GetError());
  }
}

TagQueueOutcomeCallable SQSClient::TagQueueCallable(const TagQueueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagQueueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagQueue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClient::TagQueueAsync(const TagQueueRequest& request, const TagQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagQueueAsyncHelper(request, handler, context); } );
}

void SQSClient::TagQueueAsyncHelper(const TagQueueRequest& request, const TagQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagQueue(request), context);
}

UntagQueueOutcome SQSClient::UntagQueue(const UntagQueueRequest& request) const
{
  XmlOutcome outcome = MakeRequest(request.GetQueueUrl(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UntagQueueOutcome(NoResult());
  }
  else
  {
    return UntagQueueOutcome(outcome.GetError());
  }
}

UntagQueueOutcomeCallable SQSClient::UntagQueueCallable(const UntagQueueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagQueueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagQueue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClient::UntagQueueAsync(const UntagQueueRequest& request, const UntagQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagQueueAsyncHelper(request, handler, context); } );
}

void SQSClient::UntagQueueAsyncHelper(const UntagQueueRequest& request, const UntagQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagQueue(request), context);
}

