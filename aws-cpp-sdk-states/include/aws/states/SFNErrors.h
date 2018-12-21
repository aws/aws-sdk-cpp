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

#pragma once

#include <aws/core/client/CoreErrors.h>
#include <aws/states/SFN_EXPORTS.h>

namespace Aws
{
namespace SFN
{
enum class SFNErrors
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
  INVALID_ACCESS_KEY_ID = 23,
  REQUEST_TIMEOUT = 24,
  NETWORK_CONNECTION = 99,
  
  UNKNOWN = 100,
  ///////////////////////////////////////////////////////////////////////////////////////////

  ACTIVITY_DOES_NOT_EXIST= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  ACTIVITY_LIMIT_EXCEEDED,
  ACTIVITY_WORKER_LIMIT_EXCEEDED,
  EXECUTION_ALREADY_EXISTS,
  EXECUTION_DOES_NOT_EXIST,
  EXECUTION_LIMIT_EXCEEDED,
  INVALID_ARN,
  INVALID_DEFINITION,
  INVALID_EXECUTION_INPUT,
  INVALID_NAME,
  INVALID_OUTPUT,
  INVALID_TOKEN,
  MISSING_REQUIRED_PARAMETER,
  STATE_MACHINE_ALREADY_EXISTS,
  STATE_MACHINE_DELETING,
  STATE_MACHINE_DOES_NOT_EXIST,
  STATE_MACHINE_LIMIT_EXCEEDED,
  TASK_DOES_NOT_EXIST,
  TASK_TIMED_OUT,
  TOO_MANY_TAGS
};
namespace SFNErrorMapper
{
  AWS_SFN_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace SFN
} // namespace Aws
