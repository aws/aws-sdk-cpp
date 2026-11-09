/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/GitLabTargetType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace GitLabTargetTypeMapper {

static const int GROUP_HASH = HashingUtils::HashString("GROUP");
static const int PROJECT_HASH = HashingUtils::HashString("PROJECT");

GitLabTargetType GetGitLabTargetTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GROUP_HASH) {
    return GitLabTargetType::GROUP;
  } else if (hashCode == PROJECT_HASH) {
    return GitLabTargetType::PROJECT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GitLabTargetType>(hashCode);
  }

  return GitLabTargetType::NOT_SET;
}

Aws::String GetNameForGitLabTargetType(GitLabTargetType enumValue) {
  switch (enumValue) {
    case GitLabTargetType::NOT_SET:
      return {};
    case GitLabTargetType::GROUP:
      return "GROUP";
    case GitLabTargetType::PROJECT:
      return "PROJECT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GitLabTargetTypeMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
