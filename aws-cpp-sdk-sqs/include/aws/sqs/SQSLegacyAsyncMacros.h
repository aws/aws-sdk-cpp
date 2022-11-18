/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddPermissionAsync(...)  SubmitAsync(&SQSClient::AddPermission, __VA_ARGS__)
#define AddPermissionCallable(REQUEST)  SubmitCallable(&SQSClient::AddPermission, REQUEST)

#define ChangeMessageVisibilityAsync(...)  SubmitAsync(&SQSClient::ChangeMessageVisibility, __VA_ARGS__)
#define ChangeMessageVisibilityCallable(REQUEST)  SubmitCallable(&SQSClient::ChangeMessageVisibility, REQUEST)

#define ChangeMessageVisibilityBatchAsync(...)  SubmitAsync(&SQSClient::ChangeMessageVisibilityBatch, __VA_ARGS__)
#define ChangeMessageVisibilityBatchCallable(REQUEST)  SubmitCallable(&SQSClient::ChangeMessageVisibilityBatch, REQUEST)

#define CreateQueueAsync(...)  SubmitAsync(&SQSClient::CreateQueue, __VA_ARGS__)
#define CreateQueueCallable(REQUEST)  SubmitCallable(&SQSClient::CreateQueue, REQUEST)

#define DeleteMessageAsync(...)  SubmitAsync(&SQSClient::DeleteMessage, __VA_ARGS__)
#define DeleteMessageCallable(REQUEST)  SubmitCallable(&SQSClient::DeleteMessage, REQUEST)

#define DeleteMessageBatchAsync(...)  SubmitAsync(&SQSClient::DeleteMessageBatch, __VA_ARGS__)
#define DeleteMessageBatchCallable(REQUEST)  SubmitCallable(&SQSClient::DeleteMessageBatch, REQUEST)

#define DeleteQueueAsync(...)  SubmitAsync(&SQSClient::DeleteQueue, __VA_ARGS__)
#define DeleteQueueCallable(REQUEST)  SubmitCallable(&SQSClient::DeleteQueue, REQUEST)

#define GetQueueAttributesAsync(...)  SubmitAsync(&SQSClient::GetQueueAttributes, __VA_ARGS__)
#define GetQueueAttributesCallable(REQUEST)  SubmitCallable(&SQSClient::GetQueueAttributes, REQUEST)

#define GetQueueUrlAsync(...)  SubmitAsync(&SQSClient::GetQueueUrl, __VA_ARGS__)
#define GetQueueUrlCallable(REQUEST)  SubmitCallable(&SQSClient::GetQueueUrl, REQUEST)

#define ListDeadLetterSourceQueuesAsync(...)  SubmitAsync(&SQSClient::ListDeadLetterSourceQueues, __VA_ARGS__)
#define ListDeadLetterSourceQueuesCallable(REQUEST)  SubmitCallable(&SQSClient::ListDeadLetterSourceQueues, REQUEST)

#define ListQueueTagsAsync(...)  SubmitAsync(&SQSClient::ListQueueTags, __VA_ARGS__)
#define ListQueueTagsCallable(REQUEST)  SubmitCallable(&SQSClient::ListQueueTags, REQUEST)

#define ListQueuesAsync(...)  SubmitAsync(&SQSClient::ListQueues, __VA_ARGS__)
#define ListQueuesCallable(REQUEST)  SubmitCallable(&SQSClient::ListQueues, REQUEST)

#define PurgeQueueAsync(...)  SubmitAsync(&SQSClient::PurgeQueue, __VA_ARGS__)
#define PurgeQueueCallable(REQUEST)  SubmitCallable(&SQSClient::PurgeQueue, REQUEST)

#define ReceiveMessageAsync(...)  SubmitAsync(&SQSClient::ReceiveMessage, __VA_ARGS__)
#define ReceiveMessageCallable(REQUEST)  SubmitCallable(&SQSClient::ReceiveMessage, REQUEST)

#define RemovePermissionAsync(...)  SubmitAsync(&SQSClient::RemovePermission, __VA_ARGS__)
#define RemovePermissionCallable(REQUEST)  SubmitCallable(&SQSClient::RemovePermission, REQUEST)

#define SendMessageAsync(...)  SubmitAsync(&SQSClient::SendMessage, __VA_ARGS__)
#define SendMessageCallable(REQUEST)  SubmitCallable(&SQSClient::SendMessage, REQUEST)

#define SendMessageBatchAsync(...)  SubmitAsync(&SQSClient::SendMessageBatch, __VA_ARGS__)
#define SendMessageBatchCallable(REQUEST)  SubmitCallable(&SQSClient::SendMessageBatch, REQUEST)

#define SetQueueAttributesAsync(...)  SubmitAsync(&SQSClient::SetQueueAttributes, __VA_ARGS__)
#define SetQueueAttributesCallable(REQUEST)  SubmitCallable(&SQSClient::SetQueueAttributes, REQUEST)

#define TagQueueAsync(...)  SubmitAsync(&SQSClient::TagQueue, __VA_ARGS__)
#define TagQueueCallable(REQUEST)  SubmitCallable(&SQSClient::TagQueue, REQUEST)

#define UntagQueueAsync(...)  SubmitAsync(&SQSClient::UntagQueue, __VA_ARGS__)
#define UntagQueueCallable(REQUEST)  SubmitCallable(&SQSClient::UntagQueue, REQUEST)

