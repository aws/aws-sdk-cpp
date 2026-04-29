/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PrincipalMatchOperator.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace PrincipalMatchOperatorMapper {

static const int StringEquals_HASH = HashingUtils::HashString("StringEquals");
static const int StringLike_HASH = HashingUtils::HashString("StringLike");

PrincipalMatchOperator GetPrincipalMatchOperatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == StringEquals_HASH) {
    return PrincipalMatchOperator::StringEquals;
  } else if (hashCode == StringLike_HASH) {
    return PrincipalMatchOperator::StringLike;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PrincipalMatchOperator>(hashCode);
  }

  return PrincipalMatchOperator::NOT_SET;
}

Aws::String GetNameForPrincipalMatchOperator(PrincipalMatchOperator enumValue) {
  switch (enumValue) {
    case PrincipalMatchOperator::NOT_SET:
      return {};
    case PrincipalMatchOperator::StringEquals:
      return "StringEquals";
    case PrincipalMatchOperator::StringLike:
      return "StringLike";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PrincipalMatchOperatorMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
