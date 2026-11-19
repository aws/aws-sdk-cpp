/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/NestedVirtualization.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace NestedVirtualizationMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

NestedVirtualization GetNestedVirtualizationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return NestedVirtualization::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return NestedVirtualization::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NestedVirtualization>(hashCode);
  }

  return NestedVirtualization::NOT_SET;
}

Aws::String GetNameForNestedVirtualization(NestedVirtualization enumValue) {
  switch (enumValue) {
    case NestedVirtualization::NOT_SET:
      return {};
    case NestedVirtualization::ENABLED:
      return "ENABLED";
    case NestedVirtualization::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NestedVirtualizationMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
