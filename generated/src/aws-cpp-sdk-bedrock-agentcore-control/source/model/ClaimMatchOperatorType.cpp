/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ClaimMatchOperatorType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace ClaimMatchOperatorTypeMapper {

static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
static const int CONTAINS_ANY_HASH = HashingUtils::HashString("CONTAINS_ANY");

ClaimMatchOperatorType GetClaimMatchOperatorTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EQUALS_HASH) {
    return ClaimMatchOperatorType::EQUALS;
  } else if (hashCode == CONTAINS_HASH) {
    return ClaimMatchOperatorType::CONTAINS;
  } else if (hashCode == CONTAINS_ANY_HASH) {
    return ClaimMatchOperatorType::CONTAINS_ANY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClaimMatchOperatorType>(hashCode);
  }

  return ClaimMatchOperatorType::NOT_SET;
}

Aws::String GetNameForClaimMatchOperatorType(ClaimMatchOperatorType enumValue) {
  switch (enumValue) {
    case ClaimMatchOperatorType::NOT_SET:
      return {};
    case ClaimMatchOperatorType::EQUALS:
      return "EQUALS";
    case ClaimMatchOperatorType::CONTAINS:
      return "CONTAINS";
    case ClaimMatchOperatorType::CONTAINS_ANY:
      return "CONTAINS_ANY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClaimMatchOperatorTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
