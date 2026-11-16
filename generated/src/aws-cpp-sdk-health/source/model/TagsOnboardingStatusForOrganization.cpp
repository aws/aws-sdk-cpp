/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/health/model/TagsOnboardingStatusForOrganization.h>

using namespace Aws::Utils;

namespace Aws {
namespace Health {
namespace Model {
namespace TagsOnboardingStatusForOrganizationMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

TagsOnboardingStatusForOrganization GetTagsOnboardingStatusForOrganizationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return TagsOnboardingStatusForOrganization::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return TagsOnboardingStatusForOrganization::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TagsOnboardingStatusForOrganization>(hashCode);
  }

  return TagsOnboardingStatusForOrganization::NOT_SET;
}

Aws::String GetNameForTagsOnboardingStatusForOrganization(TagsOnboardingStatusForOrganization enumValue) {
  switch (enumValue) {
    case TagsOnboardingStatusForOrganization::NOT_SET:
      return {};
    case TagsOnboardingStatusForOrganization::ENABLED:
      return "ENABLED";
    case TagsOnboardingStatusForOrganization::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TagsOnboardingStatusForOrganizationMapper
}  // namespace Model
}  // namespace Health
}  // namespace Aws
