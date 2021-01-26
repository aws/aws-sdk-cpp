/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/personalize-events/PersonalizeEventsErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::PersonalizeEvents;

namespace Aws
{
namespace PersonalizeEvents
{
namespace PersonalizeEventsErrorMapper
{

static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInputException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PersonalizeEventsErrors::INVALID_INPUT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace PersonalizeEventsErrorMapper
} // namespace PersonalizeEvents
} // namespace Aws
