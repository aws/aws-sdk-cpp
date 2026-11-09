/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/GitLabTokenRotation.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace GitLabTokenRotationMapper {

static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");
static const int NONE_HASH = HashingUtils::HashString("NONE");

GitLabTokenRotation GetGitLabTokenRotationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AUTOMATIC_HASH) {
    return GitLabTokenRotation::AUTOMATIC;
  } else if (hashCode == NONE_HASH) {
    return GitLabTokenRotation::NONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GitLabTokenRotation>(hashCode);
  }

  return GitLabTokenRotation::NOT_SET;
}

Aws::String GetNameForGitLabTokenRotation(GitLabTokenRotation enumValue) {
  switch (enumValue) {
    case GitLabTokenRotation::NOT_SET:
      return {};
    case GitLabTokenRotation::AUTOMATIC:
      return "AUTOMATIC";
    case GitLabTokenRotation::NONE:
      return "NONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GitLabTokenRotationMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
