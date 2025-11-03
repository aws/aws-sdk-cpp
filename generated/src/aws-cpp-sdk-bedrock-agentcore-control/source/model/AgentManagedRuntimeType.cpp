/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/AgentManagedRuntimeType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace AgentManagedRuntimeTypeMapper {

static const int PYTHON_3_10_HASH = HashingUtils::HashString("PYTHON_3_10");
static const int PYTHON_3_11_HASH = HashingUtils::HashString("PYTHON_3_11");
static const int PYTHON_3_12_HASH = HashingUtils::HashString("PYTHON_3_12");
static const int PYTHON_3_13_HASH = HashingUtils::HashString("PYTHON_3_13");

AgentManagedRuntimeType GetAgentManagedRuntimeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PYTHON_3_10_HASH) {
    return AgentManagedRuntimeType::PYTHON_3_10;
  } else if (hashCode == PYTHON_3_11_HASH) {
    return AgentManagedRuntimeType::PYTHON_3_11;
  } else if (hashCode == PYTHON_3_12_HASH) {
    return AgentManagedRuntimeType::PYTHON_3_12;
  } else if (hashCode == PYTHON_3_13_HASH) {
    return AgentManagedRuntimeType::PYTHON_3_13;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgentManagedRuntimeType>(hashCode);
  }

  return AgentManagedRuntimeType::NOT_SET;
}

Aws::String GetNameForAgentManagedRuntimeType(AgentManagedRuntimeType enumValue) {
  switch (enumValue) {
    case AgentManagedRuntimeType::NOT_SET:
      return {};
    case AgentManagedRuntimeType::PYTHON_3_10:
      return "PYTHON_3_10";
    case AgentManagedRuntimeType::PYTHON_3_11:
      return "PYTHON_3_11";
    case AgentManagedRuntimeType::PYTHON_3_12:
      return "PYTHON_3_12";
    case AgentManagedRuntimeType::PYTHON_3_13:
      return "PYTHON_3_13";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgentManagedRuntimeTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
