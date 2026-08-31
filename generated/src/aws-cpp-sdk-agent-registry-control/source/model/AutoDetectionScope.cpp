/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/AutoDetectionScope.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {
namespace AutoDetectionScopeMapper {

static const int ORGANIZATION_HASH = HashingUtils::HashString("ORGANIZATION");

AutoDetectionScope GetAutoDetectionScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ORGANIZATION_HASH) {
    return AutoDetectionScope::ORGANIZATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AutoDetectionScope>(hashCode);
  }

  return AutoDetectionScope::NOT_SET;
}

Aws::String GetNameForAutoDetectionScope(AutoDetectionScope enumValue) {
  switch (enumValue) {
    case AutoDetectionScope::NOT_SET:
      return {};
    case AutoDetectionScope::ORGANIZATION:
      return "ORGANIZATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AutoDetectionScopeMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
