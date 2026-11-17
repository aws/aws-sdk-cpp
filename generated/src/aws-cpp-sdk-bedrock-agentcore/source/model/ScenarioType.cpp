/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ScenarioType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace ScenarioTypeMapper {

static const int FIXED_HASH = HashingUtils::HashString("FIXED");
static const int DYNAMIC_HASH = HashingUtils::HashString("DYNAMIC");

ScenarioType GetScenarioTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FIXED_HASH) {
    return ScenarioType::FIXED;
  } else if (hashCode == DYNAMIC_HASH) {
    return ScenarioType::DYNAMIC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScenarioType>(hashCode);
  }

  return ScenarioType::NOT_SET;
}

Aws::String GetNameForScenarioType(ScenarioType enumValue) {
  switch (enumValue) {
    case ScenarioType::NOT_SET:
      return {};
    case ScenarioType::FIXED:
      return "FIXED";
    case ScenarioType::DYNAMIC:
      return "DYNAMIC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScenarioTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
