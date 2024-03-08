/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridge/EventBridgeErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::EventBridge;

namespace Aws
{
namespace EventBridge
{
namespace EventBridgeErrorMapper
{

static const int INTERNAL_HASH = HashingUtils::HashString("InternalException");
static const int OPERATION_DISABLED_HASH = HashingUtils::HashString("OperationDisabledException");
static const int INVALID_EVENT_PATTERN_HASH = HashingUtils::HashString("InvalidEventPatternException");
static const int MANAGED_RULE_HASH = HashingUtils::HashString("ManagedRuleException");
static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int POLICY_LENGTH_EXCEEDED_HASH = HashingUtils::HashString("PolicyLengthExceededException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int ILLEGAL_STATUS_HASH = HashingUtils::HashString("IllegalStatusException");
static const int INVALID_STATE_HASH = HashingUtils::HashString("InvalidStateException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EventBridgeErrors::INTERNAL), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == OPERATION_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EventBridgeErrors::OPERATION_DISABLED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_EVENT_PATTERN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EventBridgeErrors::INVALID_EVENT_PATTERN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == MANAGED_RULE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EventBridgeErrors::MANAGED_RULE), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EventBridgeErrors::RESOURCE_ALREADY_EXISTS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == POLICY_LENGTH_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EventBridgeErrors::POLICY_LENGTH_EXCEEDED), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EventBridgeErrors::LIMIT_EXCEEDED), RetryableType::RETRYABLE);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EventBridgeErrors::CONCURRENT_MODIFICATION), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == ILLEGAL_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EventBridgeErrors::ILLEGAL_STATUS), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EventBridgeErrors::INVALID_STATE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace EventBridgeErrorMapper
} // namespace EventBridge
} // namespace Aws
