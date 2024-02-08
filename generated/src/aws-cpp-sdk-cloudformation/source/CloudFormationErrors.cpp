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

static const int STACK_SET_NOT_FOUND_HASH = HashingUtils::HashString("StackSetNotFoundException");
static const int C_F_N_REGISTRY_HASH = HashingUtils::HashString("CFNRegistryException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int OPERATION_NOT_FOUND_HASH = HashingUtils::HashString("OperationNotFoundException");
static const int RESOURCE_SCAN_NOT_FOUND_HASH = HashingUtils::HashString("ResourceScanNotFound");
static const int INSUFFICIENT_CAPABILITIES_HASH = HashingUtils::HashString("InsufficientCapabilitiesException");
static const int RESOURCE_SCAN_IN_PROGRESS_HASH = HashingUtils::HashString("ResourceScanInProgress");
static const int CONCURRENT_RESOURCES_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ConcurrentResourcesLimitExceeded");
static const int INVALID_OPERATION_HASH = HashingUtils::HashString("InvalidOperationException");
static const int TOKEN_ALREADY_EXISTS_HASH = HashingUtils::HashString("TokenAlreadyExistsException");
static const int STACK_SET_NOT_EMPTY_HASH = HashingUtils::HashString("StackSetNotEmptyException");
static const int INVALID_STATE_TRANSITION_HASH = HashingUtils::HashString("InvalidStateTransition");
static const int STACK_INSTANCE_NOT_FOUND_HASH = HashingUtils::HashString("StackInstanceNotFoundException");
static const int TYPE_CONFIGURATION_NOT_FOUND_HASH = HashingUtils::HashString("TypeConfigurationNotFoundException");
static const int OPERATION_STATUS_CHECK_FAILED_HASH = HashingUtils::HashString("ConditionalCheckFailed");
static const int ALREADY_EXISTS_HASH = HashingUtils::HashString("AlreadyExistsException");
static const int OPERATION_IN_PROGRESS_HASH = HashingUtils::HashString("OperationInProgressException");
static const int CHANGE_SET_NOT_FOUND_HASH = HashingUtils::HashString("ChangeSetNotFound");
static const int OPERATION_ID_ALREADY_EXISTS_HASH = HashingUtils::HashString("OperationIdAlreadyExistsException");
static const int STALE_REQUEST_HASH = HashingUtils::HashString("StaleRequestException");
static const int GENERATED_TEMPLATE_NOT_FOUND_HASH = HashingUtils::HashString("GeneratedTemplateNotFound");
static const int TYPE_NOT_FOUND_HASH = HashingUtils::HashString("TypeNotFoundException");
static const int INVALID_CHANGE_SET_STATUS_HASH = HashingUtils::HashString("InvalidChangeSetStatus");
static const int STACK_NOT_FOUND_HASH = HashingUtils::HashString("StackNotFoundException");
static const int CREATED_BUT_MODIFIED_HASH = HashingUtils::HashString("CreatedButModifiedException");
static const int RESOURCE_SCAN_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ResourceScanLimitExceeded");
static const int NAME_ALREADY_EXISTS_HASH = HashingUtils::HashString("NameAlreadyExistsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == STACK_SET_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::STACK_SET_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == C_F_N_REGISTRY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::C_F_N_REGISTRY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == OPERATION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::OPERATION_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_SCAN_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::RESOURCE_SCAN_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INSUFFICIENT_CAPABILITIES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::INSUFFICIENT_CAPABILITIES), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_SCAN_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::RESOURCE_SCAN_IN_PROGRESS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CONCURRENT_RESOURCES_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::CONCURRENT_RESOURCES_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::INVALID_OPERATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TOKEN_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::TOKEN_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == STACK_SET_NOT_EMPTY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::STACK_SET_NOT_EMPTY), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_STATE_TRANSITION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::INVALID_STATE_TRANSITION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == STACK_INSTANCE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::STACK_INSTANCE_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TYPE_CONFIGURATION_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::TYPE_CONFIGURATION_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == OPERATION_STATUS_CHECK_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::OPERATION_STATUS_CHECK_FAILED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == OPERATION_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::OPERATION_IN_PROGRESS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CHANGE_SET_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::CHANGE_SET_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == OPERATION_ID_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::OPERATION_ID_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == STALE_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::STALE_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == GENERATED_TEMPLATE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::GENERATED_TEMPLATE_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == TYPE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::TYPE_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_CHANGE_SET_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::INVALID_CHANGE_SET_STATUS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == STACK_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::STACK_NOT_FOUND), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == CREATED_BUT_MODIFIED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::CREATED_BUT_MODIFIED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_SCAN_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::RESOURCE_SCAN_LIMIT_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == NAME_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFormationErrors::NAME_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudFormationErrorMapper
} // namespace CloudFormation
} // namespace Aws
