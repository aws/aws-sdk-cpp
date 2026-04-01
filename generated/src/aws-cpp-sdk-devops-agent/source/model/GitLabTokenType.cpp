/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/GitLabTokenType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace GitLabTokenTypeMapper {

static const int personal_HASH = HashingUtils::HashString("personal");
static const int group_HASH = HashingUtils::HashString("group");

GitLabTokenType GetGitLabTokenTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == personal_HASH) {
    return GitLabTokenType::personal;
  } else if (hashCode == group_HASH) {
    return GitLabTokenType::group;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GitLabTokenType>(hashCode);
  }

  return GitLabTokenType::NOT_SET;
}

Aws::String GetNameForGitLabTokenType(GitLabTokenType enumValue) {
  switch (enumValue) {
    case GitLabTokenType::NOT_SET:
      return {};
    case GitLabTokenType::personal:
      return "personal";
    case GitLabTokenType::group:
      return "group";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GitLabTokenTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
