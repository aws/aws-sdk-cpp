/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GroundTruthField.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace GroundTruthFieldMapper {

static const int expected_response_HASH = HashingUtils::HashString("expected_response");
static const int expected_trajectory_HASH = HashingUtils::HashString("expected_trajectory");

GroundTruthField GetGroundTruthFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == expected_response_HASH) {
    return GroundTruthField::expected_response;
  } else if (hashCode == expected_trajectory_HASH) {
    return GroundTruthField::expected_trajectory;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GroundTruthField>(hashCode);
  }

  return GroundTruthField::NOT_SET;
}

Aws::String GetNameForGroundTruthField(GroundTruthField enumValue) {
  switch (enumValue) {
    case GroundTruthField::NOT_SET:
      return {};
    case GroundTruthField::expected_response:
      return "expected_response";
    case GroundTruthField::expected_trajectory:
      return "expected_trajectory";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GroundTruthFieldMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
