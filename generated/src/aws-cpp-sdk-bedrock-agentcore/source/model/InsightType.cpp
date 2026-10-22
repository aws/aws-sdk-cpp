/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/InsightType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace InsightTypeMapper {

static const int FAILURE_HASH = HashingUtils::HashString("FAILURE");

InsightType GetInsightTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FAILURE_HASH) {
    return InsightType::FAILURE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InsightType>(hashCode);
  }

  return InsightType::NOT_SET;
}

Aws::String GetNameForInsightType(InsightType enumValue) {
  switch (enumValue) {
    case InsightType::NOT_SET:
      return {};
    case InsightType::FAILURE:
      return "FAILURE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InsightTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
