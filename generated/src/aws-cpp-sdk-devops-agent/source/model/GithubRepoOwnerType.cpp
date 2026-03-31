/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/GithubRepoOwnerType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace GithubRepoOwnerTypeMapper {

static const int organization_HASH = HashingUtils::HashString("organization");
static const int user_HASH = HashingUtils::HashString("user");

GithubRepoOwnerType GetGithubRepoOwnerTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == organization_HASH) {
    return GithubRepoOwnerType::organization;
  } else if (hashCode == user_HASH) {
    return GithubRepoOwnerType::user;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GithubRepoOwnerType>(hashCode);
  }

  return GithubRepoOwnerType::NOT_SET;
}

Aws::String GetNameForGithubRepoOwnerType(GithubRepoOwnerType enumValue) {
  switch (enumValue) {
    case GithubRepoOwnerType::NOT_SET:
      return {};
    case GithubRepoOwnerType::organization:
      return "organization";
    case GithubRepoOwnerType::user:
      return "user";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GithubRepoOwnerTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
