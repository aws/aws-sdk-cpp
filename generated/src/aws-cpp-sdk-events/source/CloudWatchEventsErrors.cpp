/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/events/CloudWatchEventsErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CloudWatchEvents;

namespace Aws
{
namespace CloudWatchEvents
{
namespace CloudWatchEventsErrorMapper
{

static constexpr uint32_t INTERNAL_HASH = ConstExprHashingUtils::HashString("InternalException");
static constexpr uint32_t OPERATION_DISABLED_HASH = ConstExprHashingUtils::HashString("OperationDisabledException");
static constexpr uint32_t INVALID_EVENT_PATTERN_HASH = ConstExprHashingUtils::HashString("InvalidEventPatternException");
static constexpr uint32_t MANAGED_RULE_HASH = ConstExprHashingUtils::HashString("ManagedRuleException");
static constexpr uint32_t RESOURCE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ResourceAlreadyExistsException");
static constexpr uint32_t POLICY_LENGTH_EXCEEDED_HASH = ConstExprHashingUtils::HashString("PolicyLengthExceededException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t CONCURRENT_MODIFICATION_HASH = ConstExprHashingUtils::HashString("ConcurrentModificationException");
static constexpr uint32_t ILLEGAL_STATUS_HASH = ConstExprHashingUtils::HashString("IllegalStatusException");
static constexpr uint32_t INVALID_STATE_HASH = ConstExprHashingUtils::HashString("InvalidStateException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchEventsErrors::INTERNAL), false);
  }
  else if (hashCode == OPERATION_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchEventsErrors::OPERATION_DISABLED), false);
  }
  else if (hashCode == INVALID_EVENT_PATTERN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchEventsErrors::INVALID_EVENT_PATTERN), false);
  }
  else if (hashCode == MANAGED_RULE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchEventsErrors::MANAGED_RULE), false);
  }
  else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchEventsErrors::RESOURCE_ALREADY_EXISTS), false);
  }
  else if (hashCode == POLICY_LENGTH_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchEventsErrors::POLICY_LENGTH_EXCEEDED), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchEventsErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchEventsErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == ILLEGAL_STATUS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchEventsErrors::ILLEGAL_STATUS), false);
  }
  else if (hashCode == INVALID_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchEventsErrors::INVALID_STATE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudWatchEventsErrorMapper
} // namespace CloudWatchEvents
} // namespace Aws
