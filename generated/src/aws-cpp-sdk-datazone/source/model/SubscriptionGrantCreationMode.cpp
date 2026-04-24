/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/SubscriptionGrantCreationMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace SubscriptionGrantCreationModeMapper {

static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");
static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");

SubscriptionGrantCreationMode GetSubscriptionGrantCreationModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AUTOMATIC_HASH) {
    return SubscriptionGrantCreationMode::AUTOMATIC;
  } else if (hashCode == MANUAL_HASH) {
    return SubscriptionGrantCreationMode::MANUAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SubscriptionGrantCreationMode>(hashCode);
  }

  return SubscriptionGrantCreationMode::NOT_SET;
}

Aws::String GetNameForSubscriptionGrantCreationMode(SubscriptionGrantCreationMode enumValue) {
  switch (enumValue) {
    case SubscriptionGrantCreationMode::NOT_SET:
      return {};
    case SubscriptionGrantCreationMode::AUTOMATIC:
      return "AUTOMATIC";
    case SubscriptionGrantCreationMode::MANUAL:
      return "MANUAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SubscriptionGrantCreationModeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
