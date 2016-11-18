﻿/*
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
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sqs/SQSErrors.h>

using namespace Aws::Client;
using namespace Aws::SQS;
using namespace Aws::Utils;

namespace Aws
{
namespace SQS
{
namespace SQSErrorMapper
{

static const int UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("AWS.SimpleQueueService.UnsupportedOperation");
static const int BATCH_REQUEST_TOO_LONG_HASH = HashingUtils::HashString("AWS.SimpleQueueService.BatchRequestTooLong");
static const int QUEUE_DELETED_RECENTLY_HASH = HashingUtils::HashString("AWS.SimpleQueueService.QueueDeletedRecently");
static const int EMPTY_BATCH_REQUEST_HASH = HashingUtils::HashString("AWS.SimpleQueueService.EmptyBatchRequest");
static const int INVALID_BATCH_ENTRY_ID_HASH = HashingUtils::HashString("AWS.SimpleQueueService.InvalidBatchEntryId");
static const int PURGE_QUEUE_IN_PROGRESS_HASH = HashingUtils::HashString("AWS.SimpleQueueService.PurgeQueueInProgress");
static const int QUEUE_NAME_EXISTS_HASH = HashingUtils::HashString("QueueAlreadyExists");
static const int OVER_LIMIT_HASH = HashingUtils::HashString("OverLimit");
static const int MESSAGE_NOT_INFLIGHT_HASH = HashingUtils::HashString("AWS.SimpleQueueService.MessageNotInflight");
static const int QUEUE_DOES_NOT_EXIST_HASH = HashingUtils::HashString("AWS.SimpleQueueService.NonExistentQueue");
static const int RECEIPT_HANDLE_IS_INVALID_HASH = HashingUtils::HashString("ReceiptHandleIsInvalid");
static const int INVALID_MESSAGE_CONTENTS_HASH = HashingUtils::HashString("InvalidMessageContents");
static const int INVALID_ID_FORMAT_HASH = HashingUtils::HashString("InvalidIdFormat");
static const int BATCH_ENTRY_IDS_NOT_DISTINCT_HASH = HashingUtils::HashString("AWS.SimpleQueueService.BatchEntryIdsNotDistinct");
static const int TOO_MANY_ENTRIES_IN_BATCH_REQUEST_HASH = HashingUtils::HashString("AWS.SimpleQueueService.TooManyEntriesInBatchRequest");
static const int INVALID_ATTRIBUTE_NAME_HASH = HashingUtils::HashString("InvalidAttributeName");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::UNSUPPORTED_OPERATION), false);
  }
  else if (hashCode == BATCH_REQUEST_TOO_LONG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::BATCH_REQUEST_TOO_LONG), false);
  }
  else if (hashCode == QUEUE_DELETED_RECENTLY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::QUEUE_DELETED_RECENTLY), false);
  }
  else if (hashCode == EMPTY_BATCH_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::EMPTY_BATCH_REQUEST), false);
  }
  else if (hashCode == INVALID_BATCH_ENTRY_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::INVALID_BATCH_ENTRY_ID), false);
  }
  else if (hashCode == PURGE_QUEUE_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::PURGE_QUEUE_IN_PROGRESS), false);
  }
  else if (hashCode == QUEUE_NAME_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::QUEUE_NAME_EXISTS), false);
  }
  else if (hashCode == OVER_LIMIT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::OVER_LIMIT), false);
  }
  else if (hashCode == MESSAGE_NOT_INFLIGHT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::MESSAGE_NOT_INFLIGHT), false);
  }
  else if (hashCode == QUEUE_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::QUEUE_DOES_NOT_EXIST), false);
  }
  else if (hashCode == RECEIPT_HANDLE_IS_INVALID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::RECEIPT_HANDLE_IS_INVALID), false);
  }
  else if (hashCode == INVALID_MESSAGE_CONTENTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::INVALID_MESSAGE_CONTENTS), false);
  }
  else if (hashCode == INVALID_ID_FORMAT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::INVALID_ID_FORMAT), false);
  }
  else if (hashCode == BATCH_ENTRY_IDS_NOT_DISTINCT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::BATCH_ENTRY_IDS_NOT_DISTINCT), false);
  }
  else if (hashCode == TOO_MANY_ENTRIES_IN_BATCH_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::TOO_MANY_ENTRIES_IN_BATCH_REQUEST), false);
  }
  else if (hashCode == INVALID_ATTRIBUTE_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SQSErrors::INVALID_ATTRIBUTE_NAME), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SQSErrorMapper
} // namespace SQS
} // namespace Aws
