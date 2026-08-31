/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/customer-profiles/model/SubscriptionEventType.h>

using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {
namespace SubscriptionEventTypeMapper {

static const int LIVE_HASH = HashingUtils::HashString("LIVE");
static const int SCHEDULE_HASH = HashingUtils::HashString("SCHEDULE");

SubscriptionEventType GetSubscriptionEventTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LIVE_HASH) {
    return SubscriptionEventType::LIVE;
  } else if (hashCode == SCHEDULE_HASH) {
    return SubscriptionEventType::SCHEDULE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SubscriptionEventType>(hashCode);
  }

  return SubscriptionEventType::NOT_SET;
}

Aws::String GetNameForSubscriptionEventType(SubscriptionEventType enumValue) {
  switch (enumValue) {
    case SubscriptionEventType::NOT_SET:
      return {};
    case SubscriptionEventType::LIVE:
      return "LIVE";
    case SubscriptionEventType::SCHEDULE:
      return "SCHEDULE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SubscriptionEventTypeMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
