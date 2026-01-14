/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RecurrenceFrequency.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace RecurrenceFrequencyMapper {

static const int WEEKLY_HASH = HashingUtils::HashString("WEEKLY");
static const int MONTHLY_HASH = HashingUtils::HashString("MONTHLY");
static const int YEARLY_HASH = HashingUtils::HashString("YEARLY");

RecurrenceFrequency GetRecurrenceFrequencyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == WEEKLY_HASH) {
    return RecurrenceFrequency::WEEKLY;
  } else if (hashCode == MONTHLY_HASH) {
    return RecurrenceFrequency::MONTHLY;
  } else if (hashCode == YEARLY_HASH) {
    return RecurrenceFrequency::YEARLY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecurrenceFrequency>(hashCode);
  }

  return RecurrenceFrequency::NOT_SET;
}

Aws::String GetNameForRecurrenceFrequency(RecurrenceFrequency enumValue) {
  switch (enumValue) {
    case RecurrenceFrequency::NOT_SET:
      return {};
    case RecurrenceFrequency::WEEKLY:
      return "WEEKLY";
    case RecurrenceFrequency::MONTHLY:
      return "MONTHLY";
    case RecurrenceFrequency::YEARLY:
      return "YEARLY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecurrenceFrequencyMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
