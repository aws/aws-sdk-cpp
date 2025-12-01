/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eks/model/ArgoCdRole.h>

using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {
namespace ArgoCdRoleMapper {

static const int ADMIN_HASH = HashingUtils::HashString("ADMIN");
static const int EDITOR_HASH = HashingUtils::HashString("EDITOR");
static const int VIEWER_HASH = HashingUtils::HashString("VIEWER");

ArgoCdRole GetArgoCdRoleForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ADMIN_HASH) {
    return ArgoCdRole::ADMIN;
  } else if (hashCode == EDITOR_HASH) {
    return ArgoCdRole::EDITOR;
  } else if (hashCode == VIEWER_HASH) {
    return ArgoCdRole::VIEWER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ArgoCdRole>(hashCode);
  }

  return ArgoCdRole::NOT_SET;
}

Aws::String GetNameForArgoCdRole(ArgoCdRole enumValue) {
  switch (enumValue) {
    case ArgoCdRole::NOT_SET:
      return {};
    case ArgoCdRole::ADMIN:
      return "ADMIN";
    case ArgoCdRole::EDITOR:
      return "EDITOR";
    case ArgoCdRole::VIEWER:
      return "VIEWER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ArgoCdRoleMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
