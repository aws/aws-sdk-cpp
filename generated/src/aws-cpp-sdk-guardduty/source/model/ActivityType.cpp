/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/ActivityType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace ActivityTypeMapper {

static const int API_CALL_HASH = HashingUtils::HashString("API_CALL");

ActivityType GetActivityTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == API_CALL_HASH) {
    return ActivityType::API_CALL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ActivityType>(hashCode);
  }

  return ActivityType::NOT_SET;
}

Aws::String GetNameForActivityType(ActivityType enumValue) {
  switch (enumValue) {
    case ActivityType::NOT_SET:
      return {};
    case ActivityType::API_CALL:
      return "API_CALL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ActivityTypeMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
