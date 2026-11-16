/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/health/model/TagsOnboardingStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Health {
namespace Model {
namespace TagsOnboardingStatusMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

TagsOnboardingStatus GetTagsOnboardingStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return TagsOnboardingStatus::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return TagsOnboardingStatus::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TagsOnboardingStatus>(hashCode);
  }

  return TagsOnboardingStatus::NOT_SET;
}

Aws::String GetNameForTagsOnboardingStatus(TagsOnboardingStatus enumValue) {
  switch (enumValue) {
    case TagsOnboardingStatus::NOT_SET:
      return {};
    case TagsOnboardingStatus::ENABLED:
      return "ENABLED";
    case TagsOnboardingStatus::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TagsOnboardingStatusMapper
}  // namespace Model
}  // namespace Health
}  // namespace Aws
