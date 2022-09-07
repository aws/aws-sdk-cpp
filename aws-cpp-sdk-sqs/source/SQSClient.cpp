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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SQSErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SQSClient::SQSClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SQSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SQSClient::SQSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SQSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SQSClient::~SQSClient()
{
}

void SQSClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("SQS");
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
  return AddPermissionOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

AddPermissionOutcomeCallable SQSClient::AddPermissionCallable(const AddPermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddPermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddPermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClientAddPermissionAsyncHelper(SQSClient const * const clientThis, const AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddPermission(request), context);
}

void SQSClient::AddPermissionAsync(const AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SQSClientAddPermissionAsyncHelper(this, request, handler, context); } );
}

ChangeMessageVisibilityOutcome SQSClient::ChangeMessageVisibility(const ChangeMessageVisibilityRequest& request) const
{
  return ChangeMessageVisibilityOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

ChangeMessageVisibilityOutcomeCallable SQSClient::ChangeMessageVisibilityCallable(const ChangeMessageVisibilityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ChangeMessageVisibilityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ChangeMessageVisibility(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClientChangeMessageVisibilityAsyncHelper(SQSClient const * const clientThis, const ChangeMessageVisibilityRequest& request, const ChangeMessageVisibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ChangeMessageVisibility(request), context);
}

void SQSClient::ChangeMessageVisibilityAsync(const ChangeMessageVisibilityRequest& request, const ChangeMessageVisibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SQSClientChangeMessageVisibilityAsyncHelper(this, request, handler, context); } );
}

ChangeMessageVisibilityBatchOutcome SQSClient::ChangeMessageVisibilityBatch(const ChangeMessageVisibilityBatchRequest& request) const
{
  return ChangeMessageVisibilityBatchOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

ChangeMessageVisibilityBatchOutcomeCallable SQSClient::ChangeMessageVisibilityBatchCallable(const ChangeMessageVisibilityBatchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ChangeMessageVisibilityBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ChangeMessageVisibilityBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClientChangeMessageVisibilityBatchAsyncHelper(SQSClient const * const clientThis, const ChangeMessageVisibilityBatchRequest& request, const ChangeMessageVisibilityBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ChangeMessageVisibilityBatch(request), context);
}

void SQSClient::ChangeMessageVisibilityBatchAsync(const ChangeMessageVisibilityBatchRequest& request, const ChangeMessageVisibilityBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SQSClientChangeMessageVisibilityBatchAsyncHelper(this, request, handler, context); } );
}

CreateQueueOutcome SQSClient::CreateQueue(const CreateQueueRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateQueueOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateQueueOutcomeCallable SQSClient::CreateQueueCallable(const CreateQueueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateQueueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateQueue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClientCreateQueueAsyncHelper(SQSClient const * const clientThis, const CreateQueueRequest& request, const CreateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateQueue(request), context);
}

void SQSClient::CreateQueueAsync(const CreateQueueRequest& request, const CreateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SQSClientCreateQueueAsyncHelper(this, request, handler, context); } );
}

DeleteMessageOutcome SQSClient::DeleteMessage(const DeleteMessageRequest& request) const
{
  return DeleteMessageOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteMessageOutcomeCallable SQSClient::DeleteMessageCallable(const DeleteMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClientDeleteMessageAsyncHelper(SQSClient const * const clientThis, const DeleteMessageRequest& request, const DeleteMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteMessage(request), context);
}

void SQSClient::DeleteMessageAsync(const DeleteMessageRequest& request, const DeleteMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SQSClientDeleteMessageAsyncHelper(this, request, handler, context); } );
}

DeleteMessageBatchOutcome SQSClient::DeleteMessageBatch(const DeleteMessageBatchRequest& request) const
{
  return DeleteMessageBatchOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteMessageBatchOutcomeCallable SQSClient::DeleteMessageBatchCallable(const DeleteMessageBatchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMessageBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMessageBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClientDeleteMessageBatchAsyncHelper(SQSClient const * const clientThis, const DeleteMessageBatchRequest& request, const DeleteMessageBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteMessageBatch(request), context);
}

void SQSClient::DeleteMessageBatchAsync(const DeleteMessageBatchRequest& request, const DeleteMessageBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SQSClientDeleteMessageBatchAsyncHelper(this, request, handler, context); } );
}

DeleteQueueOutcome SQSClient::DeleteQueue(const DeleteQueueRequest& request) const
{
  return DeleteQueueOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteQueueOutcomeCallable SQSClient::DeleteQueueCallable(const DeleteQueueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteQueueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteQueue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClientDeleteQueueAsyncHelper(SQSClient const * const clientThis, const DeleteQueueRequest& request, const DeleteQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteQueue(request), context);
}

void SQSClient::DeleteQueueAsync(const DeleteQueueRequest& request, const DeleteQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SQSClientDeleteQueueAsyncHelper(this, request, handler, context); } );
}

GetQueueAttributesOutcome SQSClient::GetQueueAttributes(const GetQueueAttributesRequest& request) const
{
  return GetQueueAttributesOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

GetQueueAttributesOutcomeCallable SQSClient::GetQueueAttributesCallable(const GetQueueAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetQueueAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetQueueAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClientGetQueueAttributesAsyncHelper(SQSClient const * const clientThis, const GetQueueAttributesRequest& request, const GetQueueAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetQueueAttributes(request), context);
}

void SQSClient::GetQueueAttributesAsync(const GetQueueAttributesRequest& request, const GetQueueAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SQSClientGetQueueAttributesAsyncHelper(this, request, handler, context); } );
}

GetQueueUrlOutcome SQSClient::GetQueueUrl(const GetQueueUrlRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetQueueUrlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetQueueUrlOutcomeCallable SQSClient::GetQueueUrlCallable(const GetQueueUrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetQueueUrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetQueueUrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClientGetQueueUrlAsyncHelper(SQSClient const * const clientThis, const GetQueueUrlRequest& request, const GetQueueUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetQueueUrl(request), context);
}

void SQSClient::GetQueueUrlAsync(const GetQueueUrlRequest& request, const GetQueueUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SQSClientGetQueueUrlAsyncHelper(this, request, handler, context); } );
}

ListDeadLetterSourceQueuesOutcome SQSClient::ListDeadLetterSourceQueues(const ListDeadLetterSourceQueuesRequest& request) const
{
  return ListDeadLetterSourceQueuesOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

ListDeadLetterSourceQueuesOutcomeCallable SQSClient::ListDeadLetterSourceQueuesCallable(const ListDeadLetterSourceQueuesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeadLetterSourceQueuesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeadLetterSourceQueues(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClientListDeadLetterSourceQueuesAsyncHelper(SQSClient const * const clientThis, const ListDeadLetterSourceQueuesRequest& request, const ListDeadLetterSourceQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDeadLetterSourceQueues(request), context);
}

void SQSClient::ListDeadLetterSourceQueuesAsync(const ListDeadLetterSourceQueuesRequest& request, const ListDeadLetterSourceQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SQSClientListDeadLetterSourceQueuesAsyncHelper(this, request, handler, context); } );
}

ListQueueTagsOutcome SQSClient::ListQueueTags(const ListQueueTagsRequest& request) const
{
  return ListQueueTagsOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

ListQueueTagsOutcomeCallable SQSClient::ListQueueTagsCallable(const ListQueueTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListQueueTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListQueueTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClientListQueueTagsAsyncHelper(SQSClient const * const clientThis, const ListQueueTagsRequest& request, const ListQueueTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListQueueTags(request), context);
}

void SQSClient::ListQueueTagsAsync(const ListQueueTagsRequest& request, const ListQueueTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SQSClientListQueueTagsAsyncHelper(this, request, handler, context); } );
}

ListQueuesOutcome SQSClient::ListQueues(const ListQueuesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListQueuesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListQueuesOutcomeCallable SQSClient::ListQueuesCallable(const ListQueuesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListQueuesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListQueues(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClientListQueuesAsyncHelper(SQSClient const * const clientThis, const ListQueuesRequest& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListQueues(request), context);
}

void SQSClient::ListQueuesAsync(const ListQueuesRequest& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SQSClientListQueuesAsyncHelper(this, request, handler, context); } );
}

PurgeQueueOutcome SQSClient::PurgeQueue(const PurgeQueueRequest& request) const
{
  return PurgeQueueOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

PurgeQueueOutcomeCallable SQSClient::PurgeQueueCallable(const PurgeQueueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PurgeQueueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PurgeQueue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClientPurgeQueueAsyncHelper(SQSClient const * const clientThis, const PurgeQueueRequest& request, const PurgeQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PurgeQueue(request), context);
}

void SQSClient::PurgeQueueAsync(const PurgeQueueRequest& request, const PurgeQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SQSClientPurgeQueueAsyncHelper(this, request, handler, context); } );
}

ReceiveMessageOutcome SQSClient::ReceiveMessage(const ReceiveMessageRequest& request) const
{
  return ReceiveMessageOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

ReceiveMessageOutcomeCallable SQSClient::ReceiveMessageCallable(const ReceiveMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReceiveMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReceiveMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClientReceiveMessageAsyncHelper(SQSClient const * const clientThis, const ReceiveMessageRequest& request, const ReceiveMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ReceiveMessage(request), context);
}

void SQSClient::ReceiveMessageAsync(const ReceiveMessageRequest& request, const ReceiveMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SQSClientReceiveMessageAsyncHelper(this, request, handler, context); } );
}

RemovePermissionOutcome SQSClient::RemovePermission(const RemovePermissionRequest& request) const
{
  return RemovePermissionOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

RemovePermissionOutcomeCallable SQSClient::RemovePermissionCallable(const RemovePermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemovePermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemovePermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClientRemovePermissionAsyncHelper(SQSClient const * const clientThis, const RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemovePermission(request), context);
}

void SQSClient::RemovePermissionAsync(const RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SQSClientRemovePermissionAsyncHelper(this, request, handler, context); } );
}

SendMessageOutcome SQSClient::SendMessage(const SendMessageRequest& request) const
{
  return SendMessageOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

SendMessageOutcomeCallable SQSClient::SendMessageCallable(const SendMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClientSendMessageAsyncHelper(SQSClient const * const clientThis, const SendMessageRequest& request, const SendMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendMessage(request), context);
}

void SQSClient::SendMessageAsync(const SendMessageRequest& request, const SendMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SQSClientSendMessageAsyncHelper(this, request, handler, context); } );
}

SendMessageBatchOutcome SQSClient::SendMessageBatch(const SendMessageBatchRequest& request) const
{
  return SendMessageBatchOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

SendMessageBatchOutcomeCallable SQSClient::SendMessageBatchCallable(const SendMessageBatchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendMessageBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendMessageBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClientSendMessageBatchAsyncHelper(SQSClient const * const clientThis, const SendMessageBatchRequest& request, const SendMessageBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendMessageBatch(request), context);
}

void SQSClient::SendMessageBatchAsync(const SendMessageBatchRequest& request, const SendMessageBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SQSClientSendMessageBatchAsyncHelper(this, request, handler, context); } );
}

SetQueueAttributesOutcome SQSClient::SetQueueAttributes(const SetQueueAttributesRequest& request) const
{
  return SetQueueAttributesOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

SetQueueAttributesOutcomeCallable SQSClient::SetQueueAttributesCallable(const SetQueueAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetQueueAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetQueueAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClientSetQueueAttributesAsyncHelper(SQSClient const * const clientThis, const SetQueueAttributesRequest& request, const SetQueueAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetQueueAttributes(request), context);
}

void SQSClient::SetQueueAttributesAsync(const SetQueueAttributesRequest& request, const SetQueueAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SQSClientSetQueueAttributesAsyncHelper(this, request, handler, context); } );
}

TagQueueOutcome SQSClient::TagQueue(const TagQueueRequest& request) const
{
  return TagQueueOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

TagQueueOutcomeCallable SQSClient::TagQueueCallable(const TagQueueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagQueueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagQueue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClientTagQueueAsyncHelper(SQSClient const * const clientThis, const TagQueueRequest& request, const TagQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagQueue(request), context);
}

void SQSClient::TagQueueAsync(const TagQueueRequest& request, const TagQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SQSClientTagQueueAsyncHelper(this, request, handler, context); } );
}

UntagQueueOutcome SQSClient::UntagQueue(const UntagQueueRequest& request) const
{
  return UntagQueueOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

UntagQueueOutcomeCallable SQSClient::UntagQueueCallable(const UntagQueueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagQueueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagQueue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SQSClientUntagQueueAsyncHelper(SQSClient const * const clientThis, const UntagQueueRequest& request, const UntagQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagQueue(request), context);
}

void SQSClient::UntagQueueAsync(const UntagQueueRequest& request, const UntagQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ SQSClientUntagQueueAsyncHelper(this, request, handler, context); } );
}

