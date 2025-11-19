/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/GroupSharingPreferenceEnum.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BCMPricingCalculator {
namespace Model {
namespace GroupSharingPreferenceEnumMapper {

static const int OPEN_HASH = HashingUtils::HashString("OPEN");
static const int PRIORITIZED_HASH = HashingUtils::HashString("PRIORITIZED");
static const int RESTRICTED_HASH = HashingUtils::HashString("RESTRICTED");

GroupSharingPreferenceEnum GetGroupSharingPreferenceEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OPEN_HASH) {
    return GroupSharingPreferenceEnum::OPEN;
  } else if (hashCode == PRIORITIZED_HASH) {
    return GroupSharingPreferenceEnum::PRIORITIZED;
  } else if (hashCode == RESTRICTED_HASH) {
    return GroupSharingPreferenceEnum::RESTRICTED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GroupSharingPreferenceEnum>(hashCode);
  }

  return GroupSharingPreferenceEnum::NOT_SET;
}

Aws::String GetNameForGroupSharingPreferenceEnum(GroupSharingPreferenceEnum enumValue) {
  switch (enumValue) {
    case GroupSharingPreferenceEnum::NOT_SET:
      return {};
    case GroupSharingPreferenceEnum::OPEN:
      return "OPEN";
    case GroupSharingPreferenceEnum::PRIORITIZED:
      return "PRIORITIZED";
    case GroupSharingPreferenceEnum::RESTRICTED:
      return "RESTRICTED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GroupSharingPreferenceEnumMapper
}  // namespace Model
}  // namespace BCMPricingCalculator
}  // namespace Aws
