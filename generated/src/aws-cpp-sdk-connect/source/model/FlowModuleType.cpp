/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/FlowModuleType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace FlowModuleTypeMapper {

static const int MCP_HASH = HashingUtils::HashString("MCP");

FlowModuleType GetFlowModuleTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MCP_HASH) {
    return FlowModuleType::MCP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FlowModuleType>(hashCode);
  }

  return FlowModuleType::NOT_SET;
}

Aws::String GetNameForFlowModuleType(FlowModuleType enumValue) {
  switch (enumValue) {
    case FlowModuleType::NOT_SET:
      return {};
    case FlowModuleType::MCP:
      return "MCP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FlowModuleTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
