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

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/cloudformation/CloudFormationErrors.h>

using namespace Aws::Client;
using namespace Aws::CloudFormation;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace CloudFormationErrorMapper
{

static const int STACK_INSTANCE_NOT_FOUND_HASH = HashingUtils::HashString("StackInstanceNotFoundException");
static const int STACK_SET_NOT_FOUND_HASH = HashingUtils::HashString("StackSetNotFoundException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int ALREADY_EXISTS_HASH = HashingUtils::HashString("AlreadyExistsException");
static const int OPERATION_IN_PROGRESS_HASH = HashingUtils::HashString("OperationInProgressException");
static const int CHANGE_SET_NOT_FOUND_HASH = HashingUtils::HashString("ChangeSetNotFound");
static const int OPERATION_ID_ALREADY_EXISTS_HASH = HashingUtils::HashString("OperationIdAlreadyExistsException");
static const int STALE_REQUEST_HASH = HashingUtils::HashString("StaleRequestException");
static const int OPERATION_NOT_FOUND_HASH = HashingUtils::HashString("OperationNotFoundException");
static const int INVALID_CHANGE_SET_STATUS_HASH = HashingUtils::HashString("InvalidChangeSetStatus");
static const int INSUFFICIENT_CAPABILITIES_HASH = HashingUtils::HashString("InsufficientCapabilitiesException");
static const int CREATED_BUT_MODIFIED_HASH = HashingUtils::HashString("CreatedButModifiedException");
static const int INVALID_OPERATION_HASH = HashingUtils::HashString("InvalidOperationException");
static const int TOKEN_ALREADY_EXISTS_HASH = HashingUtils::HashString("TokenAlreadyExistsException");
static const int NAME_ALREADY_EXISTS_HASH = HashingUtils::HashString("NameAlreadyExistsException");
static const int STACK_SET_NOT_EMPTY_HASH = HashingUtils::HashString("StackSetNotEmptyException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == STACK_INSTANCE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::STACK_INSTANCE_NOT_FOUND), false);
  }
  else if (hashCode == STACK_SET_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::STACK_SET_NOT_FOUND), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::ALREADY_EXISTS), false);
  }
  else if (hashCode == OPERATION_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::OPERATION_IN_PROGRESS), false);
  }
  else if (hashCode == CHANGE_SET_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::CHANGE_SET_NOT_FOUND), false);
  }
  else if (hashCode == OPERATION_ID_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::OPERATION_ID_ALREADY_EXISTS), false);
  }
  else if (hashCode == STALE_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::STALE_REQUEST), false);
  }
  else if (hashCode == OPERATION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::OPERATION_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_CHANGE_SET_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::INVALID_CHANGE_SET_STATUS), false);
  }
  else if (hashCode == INSUFFICIENT_CAPABILITIES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::INSUFFICIENT_CAPABILITIES), false);
  }
  else if (hashCode == CREATED_BUT_MODIFIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::CREATED_BUT_MODIFIED), false);
  }
  else if (hashCode == INVALID_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::INVALID_OPERATION), false);
  }
  else if (hashCode == TOKEN_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::TOKEN_ALREADY_EXISTS), false);
  }
  else if (hashCode == NAME_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::NAME_ALREADY_EXISTS), false);
  }
  else if (hashCode == STACK_SET_NOT_EMPTY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::STACK_SET_NOT_EMPTY), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudFormationErrorMapper
} // namespace CloudFormation
} // namespace Aws
