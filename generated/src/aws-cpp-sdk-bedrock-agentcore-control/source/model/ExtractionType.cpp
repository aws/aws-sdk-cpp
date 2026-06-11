/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ExtractionType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace ExtractionTypeMapper {

static const int LLM_INFERRED_HASH = HashingUtils::HashString("LLM_INFERRED");
static const int STRICTLY_CONSISTENT_HASH = HashingUtils::HashString("STRICTLY_CONSISTENT");

ExtractionType GetExtractionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LLM_INFERRED_HASH) {
    return ExtractionType::LLM_INFERRED;
  } else if (hashCode == STRICTLY_CONSISTENT_HASH) {
    return ExtractionType::STRICTLY_CONSISTENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExtractionType>(hashCode);
  }

  return ExtractionType::NOT_SET;
}

Aws::String GetNameForExtractionType(ExtractionType enumValue) {
  switch (enumValue) {
    case ExtractionType::NOT_SET:
      return {};
    case ExtractionType::LLM_INFERRED:
      return "LLM_INFERRED";
    case ExtractionType::STRICTLY_CONSISTENT:
      return "STRICTLY_CONSISTENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExtractionTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
