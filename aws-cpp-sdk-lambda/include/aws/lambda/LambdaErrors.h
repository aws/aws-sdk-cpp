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
#include <aws/lambda/Lambda_EXPORTS.h>

namespace Aws
{
namespace Lambda
{
enum class LambdaErrors
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

  CODE_STORAGE_EXCEEDED= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  E_C2_ACCESS_DENIED,
  E_C2_THROTTLED,
  E_C2_UNEXPECTED,
  E_N_I_LIMIT_REACHED,
  INVALID_REQUEST_CONTENT,
  INVALID_RUNTIME,
  INVALID_SECURITY_GROUP_I_D,
  INVALID_SUBNET_I_D,
  INVALID_ZIP_FILE,
  K_M_S_ACCESS_DENIED,
  K_M_S_DISABLED,
  K_M_S_INVALID_STATE,
  K_M_S_NOT_FOUND,
  POLICY_LENGTH_EXCEEDED,
  PRECONDITION_FAILED,
  REQUEST_TOO_LARGE,
  RESOURCE_CONFLICT,
  RESOURCE_IN_USE,
  SERVICE,
  SUBNET_I_P_ADDRESS_LIMIT_REACHED,
  TOO_MANY_REQUESTS,
  UNSUPPORTED_MEDIA_TYPE
};
namespace LambdaErrorMapper
{
  AWS_LAMBDA_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace Lambda
} // namespace Aws
