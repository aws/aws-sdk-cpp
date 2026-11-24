/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/fsx/model/SnapshotPolicyScope.h>

using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {
namespace SnapshotPolicyScopeMapper {

static const int FILESYSTEM_HASH = HashingUtils::HashString("FILESYSTEM");
static const int SVM_HASH = HashingUtils::HashString("SVM");

SnapshotPolicyScope GetSnapshotPolicyScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FILESYSTEM_HASH) {
    return SnapshotPolicyScope::FILESYSTEM;
  } else if (hashCode == SVM_HASH) {
    return SnapshotPolicyScope::SVM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SnapshotPolicyScope>(hashCode);
  }

  return SnapshotPolicyScope::NOT_SET;
}

Aws::String GetNameForSnapshotPolicyScope(SnapshotPolicyScope enumValue) {
  switch (enumValue) {
    case SnapshotPolicyScope::NOT_SET:
      return {};
    case SnapshotPolicyScope::FILESYSTEM:
      return "FILESYSTEM";
    case SnapshotPolicyScope::SVM:
      return "SVM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SnapshotPolicyScopeMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
