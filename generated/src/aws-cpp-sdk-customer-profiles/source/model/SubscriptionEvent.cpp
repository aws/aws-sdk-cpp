/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/customer-profiles/model/SubscriptionEvent.h>

using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {
namespace SubscriptionEventMapper {

static const int JOINED_HASH = HashingUtils::HashString("JOINED");
static const int LEFT_HASH = HashingUtils::HashString("LEFT");

SubscriptionEvent GetSubscriptionEventForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == JOINED_HASH) {
    return SubscriptionEvent::JOINED;
  } else if (hashCode == LEFT_HASH) {
    return SubscriptionEvent::LEFT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SubscriptionEvent>(hashCode);
  }

  return SubscriptionEvent::NOT_SET;
}

Aws::String GetNameForSubscriptionEvent(SubscriptionEvent enumValue) {
  switch (enumValue) {
    case SubscriptionEvent::NOT_SET:
      return {};
    case SubscriptionEvent::JOINED:
      return "JOINED";
    case SubscriptionEvent::LEFT:
      return "LEFT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SubscriptionEventMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
