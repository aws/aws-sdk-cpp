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
#include <aws/codecommit/CodeCommit_EXPORTS.h>

namespace Aws
{
namespace CodeCommit
{
enum class CodeCommitErrors
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

  BRANCH_DOES_NOT_EXIST= static_cast<int>(Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  BRANCH_NAME_EXISTS,
  BRANCH_NAME_REQUIRED,
  COMMIT_DOES_NOT_EXIST,
  COMMIT_ID_DOES_NOT_EXIST,
  COMMIT_ID_REQUIRED,
  ENCRYPTION_INTEGRITY_CHECKS_FAILED,
  ENCRYPTION_KEY_ACCESS_DENIED,
  ENCRYPTION_KEY_DISABLED,
  ENCRYPTION_KEY_NOT_FOUND,
  ENCRYPTION_KEY_UNAVAILABLE,
  INVALID_BRANCH_NAME,
  INVALID_COMMIT_ID,
  INVALID_CONTINUATION_TOKEN,
  INVALID_ORDER,
  INVALID_REPOSITORY_DESCRIPTION,
  INVALID_REPOSITORY_NAME,
  INVALID_REPOSITORY_TRIGGER_BRANCH_NAME,
  INVALID_REPOSITORY_TRIGGER_CUSTOM_DATA,
  INVALID_REPOSITORY_TRIGGER_DESTINATION_ARN,
  INVALID_REPOSITORY_TRIGGER_EVENTS,
  INVALID_REPOSITORY_TRIGGER_NAME,
  INVALID_REPOSITORY_TRIGGER_REGION,
  INVALID_SORT_BY,
  MAXIMUM_BRANCHES_EXCEEDED,
  MAXIMUM_REPOSITORY_NAMES_EXCEEDED,
  MAXIMUM_REPOSITORY_TRIGGERS_EXCEEDED,
  REPOSITORY_DOES_NOT_EXIST,
  REPOSITORY_LIMIT_EXCEEDED,
  REPOSITORY_NAMES_REQUIRED,
  REPOSITORY_NAME_EXISTS,
  REPOSITORY_NAME_REQUIRED,
  REPOSITORY_TRIGGERS_LIST_REQUIRED,
  REPOSITORY_TRIGGER_BRANCH_NAME_LIST_REQUIRED,
  REPOSITORY_TRIGGER_DESTINATION_ARN_REQUIRED,
  REPOSITORY_TRIGGER_EVENTS_LIST_REQUIRED,
  REPOSITORY_TRIGGER_NAME_REQUIRED
};
namespace CodeCommitErrorMapper
{
  AWS_CODECOMMIT_API Client::AWSError<Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace CodeCommit
} // namespace Aws