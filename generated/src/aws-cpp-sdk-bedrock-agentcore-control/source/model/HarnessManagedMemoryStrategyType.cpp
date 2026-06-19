/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessManagedMemoryStrategyType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace HarnessManagedMemoryStrategyTypeMapper {

static const int SEMANTIC_HASH = HashingUtils::HashString("SEMANTIC");
static const int SUMMARIZATION_HASH = HashingUtils::HashString("SUMMARIZATION");
static const int USER_PREFERENCE_HASH = HashingUtils::HashString("USER_PREFERENCE");
static const int EPISODIC_HASH = HashingUtils::HashString("EPISODIC");

HarnessManagedMemoryStrategyType GetHarnessManagedMemoryStrategyTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SEMANTIC_HASH) {
    return HarnessManagedMemoryStrategyType::SEMANTIC;
  } else if (hashCode == SUMMARIZATION_HASH) {
    return HarnessManagedMemoryStrategyType::SUMMARIZATION;
  } else if (hashCode == USER_PREFERENCE_HASH) {
    return HarnessManagedMemoryStrategyType::USER_PREFERENCE;
  } else if (hashCode == EPISODIC_HASH) {
    return HarnessManagedMemoryStrategyType::EPISODIC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HarnessManagedMemoryStrategyType>(hashCode);
  }

  return HarnessManagedMemoryStrategyType::NOT_SET;
}

Aws::String GetNameForHarnessManagedMemoryStrategyType(HarnessManagedMemoryStrategyType enumValue) {
  switch (enumValue) {
    case HarnessManagedMemoryStrategyType::NOT_SET:
      return {};
    case HarnessManagedMemoryStrategyType::SEMANTIC:
      return "SEMANTIC";
    case HarnessManagedMemoryStrategyType::SUMMARIZATION:
      return "SUMMARIZATION";
    case HarnessManagedMemoryStrategyType::USER_PREFERENCE:
      return "USER_PREFERENCE";
    case HarnessManagedMemoryStrategyType::EPISODIC:
      return "EPISODIC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HarnessManagedMemoryStrategyTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
