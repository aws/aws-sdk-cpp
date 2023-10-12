/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/cloudformation/CloudFormationErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CloudFormation;

namespace Aws
{
namespace CloudFormation
{
namespace CloudFormationErrorMapper
{

static constexpr uint32_t STACK_INSTANCE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("StackInstanceNotFoundException");
static constexpr uint32_t TYPE_CONFIGURATION_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("TypeConfigurationNotFoundException");
static constexpr uint32_t STACK_SET_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("StackSetNotFoundException");
static constexpr uint32_t OPERATION_STATUS_CHECK_FAILED_HASH = ConstExprHashingUtils::HashString("ConditionalCheckFailed");
static constexpr uint32_t C_F_N_REGISTRY_HASH = ConstExprHashingUtils::HashString("CFNRegistryException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("AlreadyExistsException");
static constexpr uint32_t OPERATION_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("OperationInProgressException");
static constexpr uint32_t CHANGE_SET_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("ChangeSetNotFound");
static constexpr uint32_t OPERATION_ID_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("OperationIdAlreadyExistsException");
static constexpr uint32_t STALE_REQUEST_HASH = ConstExprHashingUtils::HashString("StaleRequestException");
static constexpr uint32_t OPERATION_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("OperationNotFoundException");
static constexpr uint32_t TYPE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("TypeNotFoundException");
static constexpr uint32_t INVALID_CHANGE_SET_STATUS_HASH = ConstExprHashingUtils::HashString("InvalidChangeSetStatus");
static constexpr uint32_t STACK_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("StackNotFoundException");
static constexpr uint32_t INSUFFICIENT_CAPABILITIES_HASH = ConstExprHashingUtils::HashString("InsufficientCapabilitiesException");
static constexpr uint32_t CREATED_BUT_MODIFIED_HASH = ConstExprHashingUtils::HashString("CreatedButModifiedException");
static constexpr uint32_t INVALID_OPERATION_HASH = ConstExprHashingUtils::HashString("InvalidOperationException");
static constexpr uint32_t TOKEN_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("TokenAlreadyExistsException");
static constexpr uint32_t NAME_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("NameAlreadyExistsException");
static constexpr uint32_t STACK_SET_NOT_EMPTY_HASH = ConstExprHashingUtils::HashString("StackSetNotEmptyException");
static constexpr uint32_t INVALID_STATE_TRANSITION_HASH = ConstExprHashingUtils::HashString("InvalidStateTransition");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == STACK_INSTANCE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::STACK_INSTANCE_NOT_FOUND), false);
  }
  else if (hashCode == TYPE_CONFIGURATION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::TYPE_CONFIGURATION_NOT_FOUND), false);
  }
  else if (hashCode == STACK_SET_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::STACK_SET_NOT_FOUND), false);
  }
  else if (hashCode == OPERATION_STATUS_CHECK_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::OPERATION_STATUS_CHECK_FAILED), false);
  }
  else if (hashCode == C_F_N_REGISTRY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::C_F_N_REGISTRY), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::LIMIT_EXCEEDED), true);
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
  else if (hashCode == TYPE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::TYPE_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_CHANGE_SET_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::INVALID_CHANGE_SET_STATUS), false);
  }
  else if (hashCode == STACK_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::STACK_NOT_FOUND), false);
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
  else if (hashCode == INVALID_STATE_TRANSITION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::INVALID_STATE_TRANSITION), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudFormationErrorMapper
} // namespace CloudFormation
} // namespace Aws
