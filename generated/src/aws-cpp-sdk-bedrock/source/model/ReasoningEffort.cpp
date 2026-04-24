/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ReasoningEffort.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {
namespace ReasoningEffortMapper {

static const int low_HASH = HashingUtils::HashString("low");
static const int medium_HASH = HashingUtils::HashString("medium");
static const int high_HASH = HashingUtils::HashString("high");

ReasoningEffort GetReasoningEffortForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == low_HASH) {
    return ReasoningEffort::low;
  } else if (hashCode == medium_HASH) {
    return ReasoningEffort::medium;
  } else if (hashCode == high_HASH) {
    return ReasoningEffort::high;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReasoningEffort>(hashCode);
  }

  return ReasoningEffort::NOT_SET;
}

Aws::String GetNameForReasoningEffort(ReasoningEffort enumValue) {
  switch (enumValue) {
    case ReasoningEffort::NOT_SET:
      return {};
    case ReasoningEffort::low:
      return "low";
    case ReasoningEffort::medium:
      return "medium";
    case ReasoningEffort::high:
      return "high";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReasoningEffortMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
