/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
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

#include <aws/sqs/SQSClient.h>
#include <aws/sqs/SQSErrorMarshaller.h>
#include <aws/sqs/SQSEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;


const char* SQSClient::SERVICE_NAME = "sqs";
const char* SQSClient::ALLOCATION_TAG = "SQSClient";

SQSClient::SQSClient(const SQS::SQSClientConfiguration& clientConfiguration,
                     std::shared_ptr<SQSEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SQSErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SQSClient::SQSClient(const AWSCredentials& credentials,
                     std::shared_ptr<SQSEndpointProviderBase> endpointProvider,
                     const SQS::SQSClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SQSErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SQSClient::SQSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<SQSEndpointProviderBase> endpointProvider,
                     const SQS::SQSClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SQSErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  SQSClient::SQSClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SQSErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<SQSEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SQSClient::SQSClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SQSErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SQSEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SQSClient::SQSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SQSErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SQSEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
SQSClient::~SQSClient()
{
}

std::shared_ptr<SQSEndpointProviderBase>& SQSClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void SQSClient::init(const SQS::SQSClientConfiguration& config)
{
  AWSClient::SetServiceClientName("SQS");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void SQSClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AddPermissionOutcome SQSClient::AddPermission(const AddPermissionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddPermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  return AddPermissionOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

AddPermissionOutcomeCallable SQSClient::AddPermissionCallable(const AddPermissionRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(AddPermission, request, m_executor.get());
}

void SQSClient::AddPermissionAsync(const AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(AddPermission, request, handler, context, m_executor.get());
}
ChangeMessageVisibilityOutcome SQSClient::ChangeMessageVisibility(const ChangeMessageVisibilityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ChangeMessageVisibility, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  return ChangeMessageVisibilityOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

ChangeMessageVisibilityOutcomeCallable SQSClient::ChangeMessageVisibilityCallable(const ChangeMessageVisibilityRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ChangeMessageVisibility, request, m_executor.get());
}

void SQSClient::ChangeMessageVisibilityAsync(const ChangeMessageVisibilityRequest& request, const ChangeMessageVisibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ChangeMessageVisibility, request, handler, context, m_executor.get());
}
ChangeMessageVisibilityBatchOutcome SQSClient::ChangeMessageVisibilityBatch(const ChangeMessageVisibilityBatchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ChangeMessageVisibilityBatch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  return ChangeMessageVisibilityBatchOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

ChangeMessageVisibilityBatchOutcomeCallable SQSClient::ChangeMessageVisibilityBatchCallable(const ChangeMessageVisibilityBatchRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ChangeMessageVisibilityBatch, request, m_executor.get());
}

void SQSClient::ChangeMessageVisibilityBatchAsync(const ChangeMessageVisibilityBatchRequest& request, const ChangeMessageVisibilityBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ChangeMessageVisibilityBatch, request, handler, context, m_executor.get());
}
CreateQueueOutcome SQSClient::CreateQueue(const CreateQueueRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateQueueOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateQueueOutcomeCallable SQSClient::CreateQueueCallable(const CreateQueueRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateQueue, request, m_executor.get());
}

void SQSClient::CreateQueueAsync(const CreateQueueRequest& request, const CreateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateQueue, request, handler, context, m_executor.get());
}
DeleteMessageOutcome SQSClient::DeleteMessage(const DeleteMessageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  return DeleteMessageOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteMessageOutcomeCallable SQSClient::DeleteMessageCallable(const DeleteMessageRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteMessage, request, m_executor.get());
}

void SQSClient::DeleteMessageAsync(const DeleteMessageRequest& request, const DeleteMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteMessage, request, handler, context, m_executor.get());
}
DeleteMessageBatchOutcome SQSClient::DeleteMessageBatch(const DeleteMessageBatchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMessageBatch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  return DeleteMessageBatchOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteMessageBatchOutcomeCallable SQSClient::DeleteMessageBatchCallable(const DeleteMessageBatchRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteMessageBatch, request, m_executor.get());
}

void SQSClient::DeleteMessageBatchAsync(const DeleteMessageBatchRequest& request, const DeleteMessageBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteMessageBatch, request, handler, context, m_executor.get());
}
DeleteQueueOutcome SQSClient::DeleteQueue(const DeleteQueueRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  return DeleteQueueOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteQueueOutcomeCallable SQSClient::DeleteQueueCallable(const DeleteQueueRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteQueue, request, m_executor.get());
}

void SQSClient::DeleteQueueAsync(const DeleteQueueRequest& request, const DeleteQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteQueue, request, handler, context, m_executor.get());
}
GetQueueAttributesOutcome SQSClient::GetQueueAttributes(const GetQueueAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetQueueAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  return GetQueueAttributesOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

GetQueueAttributesOutcomeCallable SQSClient::GetQueueAttributesCallable(const GetQueueAttributesRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetQueueAttributes, request, m_executor.get());
}

void SQSClient::GetQueueAttributesAsync(const GetQueueAttributesRequest& request, const GetQueueAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetQueueAttributes, request, handler, context, m_executor.get());
}
GetQueueUrlOutcome SQSClient::GetQueueUrl(const GetQueueUrlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetQueueUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetQueueUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetQueueUrlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetQueueUrlOutcomeCallable SQSClient::GetQueueUrlCallable(const GetQueueUrlRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetQueueUrl, request, m_executor.get());
}

void SQSClient::GetQueueUrlAsync(const GetQueueUrlRequest& request, const GetQueueUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetQueueUrl, request, handler, context, m_executor.get());
}
ListDeadLetterSourceQueuesOutcome SQSClient::ListDeadLetterSourceQueues(const ListDeadLetterSourceQueuesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDeadLetterSourceQueues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  return ListDeadLetterSourceQueuesOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

ListDeadLetterSourceQueuesOutcomeCallable SQSClient::ListDeadLetterSourceQueuesCallable(const ListDeadLetterSourceQueuesRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListDeadLetterSourceQueues, request, m_executor.get());
}

void SQSClient::ListDeadLetterSourceQueuesAsync(const ListDeadLetterSourceQueuesRequest& request, const ListDeadLetterSourceQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListDeadLetterSourceQueues, request, handler, context, m_executor.get());
}
ListQueueTagsOutcome SQSClient::ListQueueTags(const ListQueueTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListQueueTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  return ListQueueTagsOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

ListQueueTagsOutcomeCallable SQSClient::ListQueueTagsCallable(const ListQueueTagsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListQueueTags, request, m_executor.get());
}

void SQSClient::ListQueueTagsAsync(const ListQueueTagsRequest& request, const ListQueueTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListQueueTags, request, handler, context, m_executor.get());
}
ListQueuesOutcome SQSClient::ListQueues(const ListQueuesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListQueues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListQueues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListQueuesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListQueuesOutcomeCallable SQSClient::ListQueuesCallable(const ListQueuesRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListQueues, request, m_executor.get());
}

void SQSClient::ListQueuesAsync(const ListQueuesRequest& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListQueues, request, handler, context, m_executor.get());
}
PurgeQueueOutcome SQSClient::PurgeQueue(const PurgeQueueRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PurgeQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  return PurgeQueueOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

PurgeQueueOutcomeCallable SQSClient::PurgeQueueCallable(const PurgeQueueRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(PurgeQueue, request, m_executor.get());
}

void SQSClient::PurgeQueueAsync(const PurgeQueueRequest& request, const PurgeQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(PurgeQueue, request, handler, context, m_executor.get());
}
ReceiveMessageOutcome SQSClient::ReceiveMessage(const ReceiveMessageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReceiveMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  return ReceiveMessageOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

ReceiveMessageOutcomeCallable SQSClient::ReceiveMessageCallable(const ReceiveMessageRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ReceiveMessage, request, m_executor.get());
}

void SQSClient::ReceiveMessageAsync(const ReceiveMessageRequest& request, const ReceiveMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ReceiveMessage, request, handler, context, m_executor.get());
}
RemovePermissionOutcome SQSClient::RemovePermission(const RemovePermissionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemovePermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  return RemovePermissionOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

RemovePermissionOutcomeCallable SQSClient::RemovePermissionCallable(const RemovePermissionRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(RemovePermission, request, m_executor.get());
}

void SQSClient::RemovePermissionAsync(const RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(RemovePermission, request, handler, context, m_executor.get());
}
SendMessageOutcome SQSClient::SendMessage(const SendMessageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  return SendMessageOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

SendMessageOutcomeCallable SQSClient::SendMessageCallable(const SendMessageRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(SendMessage, request, m_executor.get());
}

void SQSClient::SendMessageAsync(const SendMessageRequest& request, const SendMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(SendMessage, request, handler, context, m_executor.get());
}
SendMessageBatchOutcome SQSClient::SendMessageBatch(const SendMessageBatchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendMessageBatch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  return SendMessageBatchOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

SendMessageBatchOutcomeCallable SQSClient::SendMessageBatchCallable(const SendMessageBatchRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(SendMessageBatch, request, m_executor.get());
}

void SQSClient::SendMessageBatchAsync(const SendMessageBatchRequest& request, const SendMessageBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(SendMessageBatch, request, handler, context, m_executor.get());
}
SetQueueAttributesOutcome SQSClient::SetQueueAttributes(const SetQueueAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetQueueAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  return SetQueueAttributesOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

SetQueueAttributesOutcomeCallable SQSClient::SetQueueAttributesCallable(const SetQueueAttributesRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(SetQueueAttributes, request, m_executor.get());
}

void SQSClient::SetQueueAttributesAsync(const SetQueueAttributesRequest& request, const SetQueueAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(SetQueueAttributes, request, handler, context, m_executor.get());
}
TagQueueOutcome SQSClient::TagQueue(const TagQueueRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  return TagQueueOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

TagQueueOutcomeCallable SQSClient::TagQueueCallable(const TagQueueRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(TagQueue, request, m_executor.get());
}

void SQSClient::TagQueueAsync(const TagQueueRequest& request, const TagQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(TagQueue, request, handler, context, m_executor.get());
}
UntagQueueOutcome SQSClient::UntagQueue(const UntagQueueRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagQueue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  return UntagQueueOutcome(MakeRequest(request.GetQueueUrl(), request, Aws::Http::HttpMethod::HTTP_POST));
}

UntagQueueOutcomeCallable SQSClient::UntagQueueCallable(const UntagQueueRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UntagQueue, request, m_executor.get());
}

void SQSClient::UntagQueueAsync(const UntagQueueRequest& request, const UntagQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UntagQueue, request, handler, context, m_executor.get());
}
