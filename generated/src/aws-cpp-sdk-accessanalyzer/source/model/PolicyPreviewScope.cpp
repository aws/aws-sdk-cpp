/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/PolicyPreviewScope.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AccessAnalyzer {
namespace Model {
namespace PolicyPreviewScopeMapper {

static const int GLOBAL_HASH = HashingUtils::HashString("GLOBAL");

PolicyPreviewScope GetPolicyPreviewScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GLOBAL_HASH) {
    return PolicyPreviewScope::GLOBAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PolicyPreviewScope>(hashCode);
  }

  return PolicyPreviewScope::NOT_SET;
}

Aws::String GetNameForPolicyPreviewScope(PolicyPreviewScope enumValue) {
  switch (enumValue) {
    case PolicyPreviewScope::NOT_SET:
      return {};
    case PolicyPreviewScope::GLOBAL:
      return "GLOBAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PolicyPreviewScopeMapper
}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws
