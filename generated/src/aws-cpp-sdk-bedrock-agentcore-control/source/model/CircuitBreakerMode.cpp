/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CircuitBreakerMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace CircuitBreakerModeMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

CircuitBreakerMode GetCircuitBreakerModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return CircuitBreakerMode::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return CircuitBreakerMode::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CircuitBreakerMode>(hashCode);
  }

  return CircuitBreakerMode::NOT_SET;
}

Aws::String GetNameForCircuitBreakerMode(CircuitBreakerMode enumValue) {
  switch (enumValue) {
    case CircuitBreakerMode::NOT_SET:
      return {};
    case CircuitBreakerMode::ENABLED:
      return "ENABLED";
    case CircuitBreakerMode::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CircuitBreakerModeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
