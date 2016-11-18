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
#include <aws/ssm/SSM_EXPORTS.h>

namespace Aws
{
namespace SSM
{
enum class SSMErrors
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
  SLOW_DOWN = 19,
  REQUEST_TIME_TOO_SKEWED = 20,
  INVALID_SIGNATURE = 21,
  SIGNATURE_DOES_NOT_MATCH = 22,
  NETWORK_CONNECTION = 99,
  
  UNKNOWN = 100,
  ///////////////////////////////////////////////////////////////////////////////////////////

  ASSOCIATED_INSTANCES= static_cast<int>(Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  ASSOCIATION_ALREADY_EXISTS,
  ASSOCIATION_DOES_NOT_EXIST,
  ASSOCIATION_LIMIT_EXCEEDED,
  DOCUMENT_ALREADY_EXISTS,
  DOCUMENT_LIMIT_EXCEEDED,
  DOCUMENT_PERMISSION_LIMIT,
  DUPLICATE_INSTANCE_ID,
  INVALID_ACTIVATION,
  INVALID_ACTIVATION_ID,
  INVALID_COMMAND_ID,
  INVALID_DOCUMENT,
  INVALID_DOCUMENT_CONTENT,
  INVALID_DOCUMENT_OPERATION,
  INVALID_FILTER,
  INVALID_FILTER_KEY,
  INVALID_INSTANCE_ID,
  INVALID_INSTANCE_INFORMATION_FILTER_VALUE,
  INVALID_NEXT_TOKEN,
  INVALID_NOTIFICATION_CONFIG,
  INVALID_OUTPUT_FOLDER,
  INVALID_PARAMETERS,
  INVALID_PERMISSION_TYPE,
  INVALID_RESOURCE_ID,
  INVALID_RESOURCE_TYPE,
  INVALID_ROLE,
  MAX_DOCUMENT_SIZE_EXCEEDED,
  STATUS_UNCHANGED,
  TOO_MANY_UPDATES,
  UNSUPPORTED_PLATFORM_TYPE
};
namespace SSMErrorMapper
{
  AWS_SSM_API Client::AWSError<Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace SSM
} // namespace Aws