/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PolicyGenerationStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace PolicyGenerationStatusMapper {

static const int GENERATING_HASH = HashingUtils::HashString("GENERATING");
static const int GENERATED_HASH = HashingUtils::HashString("GENERATED");
static const int GENERATE_FAILED_HASH = HashingUtils::HashString("GENERATE_FAILED");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");

PolicyGenerationStatus GetPolicyGenerationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GENERATING_HASH) {
    return PolicyGenerationStatus::GENERATING;
  } else if (hashCode == GENERATED_HASH) {
    return PolicyGenerationStatus::GENERATED;
  } else if (hashCode == GENERATE_FAILED_HASH) {
    return PolicyGenerationStatus::GENERATE_FAILED;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return PolicyGenerationStatus::DELETE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PolicyGenerationStatus>(hashCode);
  }

  return PolicyGenerationStatus::NOT_SET;
}

Aws::String GetNameForPolicyGenerationStatus(PolicyGenerationStatus enumValue) {
  switch (enumValue) {
    case PolicyGenerationStatus::NOT_SET:
      return {};
    case PolicyGenerationStatus::GENERATING:
      return "GENERATING";
    case PolicyGenerationStatus::GENERATED:
      return "GENERATED";
    case PolicyGenerationStatus::GENERATE_FAILED:
      return "GENERATE_FAILED";
    case PolicyGenerationStatus::DELETE_FAILED:
      return "DELETE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PolicyGenerationStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
