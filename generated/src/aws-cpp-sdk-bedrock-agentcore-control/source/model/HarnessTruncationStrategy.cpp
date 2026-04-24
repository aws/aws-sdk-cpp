/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessTruncationStrategy.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace HarnessTruncationStrategyMapper {

static const int sliding_window_HASH = HashingUtils::HashString("sliding_window");
static const int summarization_HASH = HashingUtils::HashString("summarization");
static const int none_HASH = HashingUtils::HashString("none");

HarnessTruncationStrategy GetHarnessTruncationStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == sliding_window_HASH) {
    return HarnessTruncationStrategy::sliding_window;
  } else if (hashCode == summarization_HASH) {
    return HarnessTruncationStrategy::summarization;
  } else if (hashCode == none_HASH) {
    return HarnessTruncationStrategy::none;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HarnessTruncationStrategy>(hashCode);
  }

  return HarnessTruncationStrategy::NOT_SET;
}

Aws::String GetNameForHarnessTruncationStrategy(HarnessTruncationStrategy enumValue) {
  switch (enumValue) {
    case HarnessTruncationStrategy::NOT_SET:
      return {};
    case HarnessTruncationStrategy::sliding_window:
      return "sliding_window";
    case HarnessTruncationStrategy::summarization:
      return "summarization";
    case HarnessTruncationStrategy::none:
      return "none";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HarnessTruncationStrategyMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
