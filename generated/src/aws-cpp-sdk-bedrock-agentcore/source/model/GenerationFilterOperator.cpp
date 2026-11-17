/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GenerationFilterOperator.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace GenerationFilterOperatorMapper {

static const int Equals_HASH = HashingUtils::HashString("Equals");
static const int NotEquals_HASH = HashingUtils::HashString("NotEquals");
static const int GreaterThan_HASH = HashingUtils::HashString("GreaterThan");
static const int LessThan_HASH = HashingUtils::HashString("LessThan");
static const int GreaterThanOrEqual_HASH = HashingUtils::HashString("GreaterThanOrEqual");
static const int LessThanOrEqual_HASH = HashingUtils::HashString("LessThanOrEqual");
static const int Contains_HASH = HashingUtils::HashString("Contains");
static const int NotContains_HASH = HashingUtils::HashString("NotContains");

GenerationFilterOperator GetGenerationFilterOperatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Equals_HASH) {
    return GenerationFilterOperator::Equals;
  } else if (hashCode == NotEquals_HASH) {
    return GenerationFilterOperator::NotEquals;
  } else if (hashCode == GreaterThan_HASH) {
    return GenerationFilterOperator::GreaterThan;
  } else if (hashCode == LessThan_HASH) {
    return GenerationFilterOperator::LessThan;
  } else if (hashCode == GreaterThanOrEqual_HASH) {
    return GenerationFilterOperator::GreaterThanOrEqual;
  } else if (hashCode == LessThanOrEqual_HASH) {
    return GenerationFilterOperator::LessThanOrEqual;
  } else if (hashCode == Contains_HASH) {
    return GenerationFilterOperator::Contains;
  } else if (hashCode == NotContains_HASH) {
    return GenerationFilterOperator::NotContains;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GenerationFilterOperator>(hashCode);
  }

  return GenerationFilterOperator::NOT_SET;
}

Aws::String GetNameForGenerationFilterOperator(GenerationFilterOperator enumValue) {
  switch (enumValue) {
    case GenerationFilterOperator::NOT_SET:
      return {};
    case GenerationFilterOperator::Equals:
      return "Equals";
    case GenerationFilterOperator::NotEquals:
      return "NotEquals";
    case GenerationFilterOperator::GreaterThan:
      return "GreaterThan";
    case GenerationFilterOperator::LessThan:
      return "LessThan";
    case GenerationFilterOperator::GreaterThanOrEqual:
      return "GreaterThanOrEqual";
    case GenerationFilterOperator::LessThanOrEqual:
      return "LessThanOrEqual";
    case GenerationFilterOperator::Contains:
      return "Contains";
    case GenerationFilterOperator::NotContains:
      return "NotContains";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GenerationFilterOperatorMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
