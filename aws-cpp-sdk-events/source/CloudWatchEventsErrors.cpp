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
#include <aws/events/CloudWatchEventsErrors.h>

using namespace Aws::Client;
using namespace Aws::CloudWatchEvents;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvents
{
namespace CloudWatchEventsErrorMapper
{

static const int INTERNAL_HASH = HashingUtils::HashString("InternalException");
static const int INVALID_EVENT_PATTERN_HASH = HashingUtils::HashString("InvalidEventPatternException");
static const int MANAGED_RULE_HASH = HashingUtils::HashString("ManagedRuleException");
static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResourceAlreadyExistsException");
static const int POLICY_LENGTH_EXCEEDED_HASH = HashingUtils::HashString("PolicyLengthExceededException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int INVALID_STATE_HASH = HashingUtils::HashString("InvalidStateException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchEventsErrors::INTERNAL), false);
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
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchEventsErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudWatchEventsErrors::CONCURRENT_MODIFICATION), false);
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
