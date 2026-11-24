/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/fsx/model/SnapmirrorPolicyScope.h>

using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {
namespace SnapmirrorPolicyScopeMapper {

static const int FILESYSTEM_HASH = HashingUtils::HashString("FILESYSTEM");
static const int SVM_HASH = HashingUtils::HashString("SVM");

SnapmirrorPolicyScope GetSnapmirrorPolicyScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FILESYSTEM_HASH) {
    return SnapmirrorPolicyScope::FILESYSTEM;
  } else if (hashCode == SVM_HASH) {
    return SnapmirrorPolicyScope::SVM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SnapmirrorPolicyScope>(hashCode);
  }

  return SnapmirrorPolicyScope::NOT_SET;
}

Aws::String GetNameForSnapmirrorPolicyScope(SnapmirrorPolicyScope enumValue) {
  switch (enumValue) {
    case SnapmirrorPolicyScope::NOT_SET:
      return {};
    case SnapmirrorPolicyScope::FILESYSTEM:
      return "FILESYSTEM";
    case SnapmirrorPolicyScope::SVM:
      return "SVM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SnapmirrorPolicyScopeMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
