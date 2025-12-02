/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/InboundTokenClaimValueType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace InboundTokenClaimValueTypeMapper {

static const int STRING_HASH = HashingUtils::HashString("STRING");
static const int STRING_ARRAY_HASH = HashingUtils::HashString("STRING_ARRAY");

InboundTokenClaimValueType GetInboundTokenClaimValueTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STRING_HASH) {
    return InboundTokenClaimValueType::STRING;
  } else if (hashCode == STRING_ARRAY_HASH) {
    return InboundTokenClaimValueType::STRING_ARRAY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InboundTokenClaimValueType>(hashCode);
  }

  return InboundTokenClaimValueType::NOT_SET;
}

Aws::String GetNameForInboundTokenClaimValueType(InboundTokenClaimValueType enumValue) {
  switch (enumValue) {
    case InboundTokenClaimValueType::NOT_SET:
      return {};
    case InboundTokenClaimValueType::STRING:
      return "STRING";
    case InboundTokenClaimValueType::STRING_ARRAY:
      return "STRING_ARRAY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InboundTokenClaimValueTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
