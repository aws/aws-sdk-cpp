/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ResultAggregation.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace ResultAggregationMapper {

static const int Min_HASH = HashingUtils::HashString("Min");
static const int Max_HASH = HashingUtils::HashString("Max");
static const int Mean_HASH = HashingUtils::HashString("Mean");
static const int AllMatch_HASH = HashingUtils::HashString("AllMatch");
static const int AnyMatch_HASH = HashingUtils::HashString("AnyMatch");

ResultAggregation GetResultAggregationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Min_HASH) {
    return ResultAggregation::Min;
  } else if (hashCode == Max_HASH) {
    return ResultAggregation::Max;
  } else if (hashCode == Mean_HASH) {
    return ResultAggregation::Mean;
  } else if (hashCode == AllMatch_HASH) {
    return ResultAggregation::AllMatch;
  } else if (hashCode == AnyMatch_HASH) {
    return ResultAggregation::AnyMatch;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResultAggregation>(hashCode);
  }

  return ResultAggregation::NOT_SET;
}

Aws::String GetNameForResultAggregation(ResultAggregation enumValue) {
  switch (enumValue) {
    case ResultAggregation::NOT_SET:
      return {};
    case ResultAggregation::Min:
      return "Min";
    case ResultAggregation::Max:
      return "Max";
    case ResultAggregation::Mean:
      return "Mean";
    case ResultAggregation::AllMatch:
      return "AllMatch";
    case ResultAggregation::AnyMatch:
      return "AnyMatch";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResultAggregationMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
