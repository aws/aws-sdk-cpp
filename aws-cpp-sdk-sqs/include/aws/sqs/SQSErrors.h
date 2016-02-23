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
#pragma once

#include <aws/core/client/CoreErrors.h>
#include <aws/sqs/SQS_EXPORTS.h>

namespace Aws
{
namespace SQS
{
enum class AWS_SQS_API SQSErrors
{
  //From Core//
  //////////////////////////////////////////////////////////////////////////////////////////
  INCOMPLETE_SIGNATURE = 0,
  INTERNAL_FAILURE = 1,
  INVALID_ACTION = 2,
  INVALID_CLIENT_TOKEN_ID = 3,
  INVALID_PARAMETER_COMBINATION = 4,
  INVALID_QUERY_PARAMETER = 5,
  INVALID_PARAMETER_VALUE = 6,
  MISSING_ACTION = 7, // SDK should never allow
  MISSING_AUTHENTICATION_TOKEN = 8, // SDK should never allow
  MISSING_PARAMETER = 9, // SDK should never allow
  OPT_IN_REQUIRED = 10,
  REQUEST_EXPIRED = 11,
  SERVICE_UNAVAILABLE = 12,
  THROTTLING = 13,
  VALIDATION = 14,
  ACCESS_DENIED = 15,
  RESOURCE_NOT_FOUND = 16,
  UNRECOGNIZED_CLIENT = 17,
  MALFORMED_QUERY_STRING = 18,
  NETWORK_CONNECTION = 99,
  UNKNOWN = 100,
  ///////////////////////////////////////////////////////////////////////////////////////////

  A_W_S__SIMPLE_QUEUE_SERVICE__BATCH_ENTRY_IDS_NOT_DISTINCT= static_cast<int>(Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  A_W_S__SIMPLE_QUEUE_SERVICE__BATCH_REQUEST_TOO_LONG,
  A_W_S__SIMPLE_QUEUE_SERVICE__EMPTY_BATCH_REQUEST,
  A_W_S__SIMPLE_QUEUE_SERVICE__INVALID_BATCH_ENTRY_ID,
  A_W_S__SIMPLE_QUEUE_SERVICE__MESSAGE_NOT_INFLIGHT,
  A_W_S__SIMPLE_QUEUE_SERVICE__NON_EXISTENT_QUEUE,
  A_W_S__SIMPLE_QUEUE_SERVICE__PURGE_QUEUE_IN_PROGRESS,
  A_W_S__SIMPLE_QUEUE_SERVICE__QUEUE_DELETED_RECENTLY,
  A_W_S__SIMPLE_QUEUE_SERVICE__TOO_MANY_ENTRIES_IN_BATCH_REQUEST,
  A_W_S__SIMPLE_QUEUE_SERVICE__UNSUPPORTED_OPERATION,
  INVALID_ATTRIBUTE_NAME,
  INVALID_ID_FORMAT,
  INVALID_MESSAGE_CONTENTS,
  OVER_LIMIT,
  QUEUE_ALREADY_EXISTS,
  RECEIPT_HANDLE_IS_INVALID
};
namespace SQSErrorMapper
{
  AWS_SQS_API Client::AWSError<Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace SQS
} // namespace Aws