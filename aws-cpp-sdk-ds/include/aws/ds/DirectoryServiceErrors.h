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
#include <aws/ds/DirectoryService_EXPORTS.h>

namespace Aws
{
namespace DirectoryService
{
enum class DirectoryServiceErrors
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

  AUTHENTICATION_FAILED= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  CLIENT,
  DIRECTORY_ALREADY_SHARED,
  DIRECTORY_LIMIT_EXCEEDED,
  DIRECTORY_NOT_SHARED,
  DIRECTORY_UNAVAILABLE,
  DOMAIN_CONTROLLER_LIMIT_EXCEEDED,
  ENTITY_ALREADY_EXISTS,
  ENTITY_DOES_NOT_EXIST,
  INSUFFICIENT_PERMISSIONS,
  INVALID_NEXT_TOKEN,
  INVALID_PARAMETER,
  INVALID_PASSWORD,
  INVALID_TARGET,
  IP_ROUTE_LIMIT_EXCEEDED,
  ORGANIZATIONS,
  SERVICE,
  SHARE_LIMIT_EXCEEDED,
  SNAPSHOT_LIMIT_EXCEEDED,
  TAG_LIMIT_EXCEEDED,
  UNSUPPORTED_OPERATION,
  USER_DOES_NOT_EXIST
};
namespace DirectoryServiceErrorMapper
{
  AWS_DIRECTORYSERVICE_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace DirectoryService
} // namespace Aws
