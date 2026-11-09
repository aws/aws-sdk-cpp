/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/MatchOperator.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace MatchOperatorMapper {

static const int StringEquals_HASH = HashingUtils::HashString("StringEquals");
static const int StringLike_HASH = HashingUtils::HashString("StringLike");

MatchOperator GetMatchOperatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == StringEquals_HASH) {
    return MatchOperator::StringEquals;
  } else if (hashCode == StringLike_HASH) {
    return MatchOperator::StringLike;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MatchOperator>(hashCode);
  }

  return MatchOperator::NOT_SET;
}

Aws::String GetNameForMatchOperator(MatchOperator enumValue) {
  switch (enumValue) {
    case MatchOperator::NOT_SET:
      return {};
    case MatchOperator::StringEquals:
      return "StringEquals";
    case MatchOperator::StringLike:
      return "StringLike";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MatchOperatorMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
