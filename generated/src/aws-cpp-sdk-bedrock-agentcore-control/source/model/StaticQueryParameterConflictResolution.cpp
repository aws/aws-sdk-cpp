/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/StaticQueryParameterConflictResolution.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace StaticQueryParameterConflictResolutionMapper {

static const int CLIENT_OVERRIDE_HASH = HashingUtils::HashString("CLIENT_OVERRIDE");
static const int STATIC_OVERRIDE_HASH = HashingUtils::HashString("STATIC_OVERRIDE");

StaticQueryParameterConflictResolution GetStaticQueryParameterConflictResolutionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CLIENT_OVERRIDE_HASH) {
    return StaticQueryParameterConflictResolution::CLIENT_OVERRIDE;
  } else if (hashCode == STATIC_OVERRIDE_HASH) {
    return StaticQueryParameterConflictResolution::STATIC_OVERRIDE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StaticQueryParameterConflictResolution>(hashCode);
  }

  return StaticQueryParameterConflictResolution::NOT_SET;
}

Aws::String GetNameForStaticQueryParameterConflictResolution(StaticQueryParameterConflictResolution enumValue) {
  switch (enumValue) {
    case StaticQueryParameterConflictResolution::NOT_SET:
      return {};
    case StaticQueryParameterConflictResolution::CLIENT_OVERRIDE:
      return "CLIENT_OVERRIDE";
    case StaticQueryParameterConflictResolution::STATIC_OVERRIDE:
      return "STATIC_OVERRIDE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StaticQueryParameterConflictResolutionMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
