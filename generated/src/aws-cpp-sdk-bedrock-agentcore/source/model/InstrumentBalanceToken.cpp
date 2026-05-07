/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/InstrumentBalanceToken.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace InstrumentBalanceTokenMapper {

static const int USDC_HASH = HashingUtils::HashString("USDC");

InstrumentBalanceToken GetInstrumentBalanceTokenForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == USDC_HASH) {
    return InstrumentBalanceToken::USDC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InstrumentBalanceToken>(hashCode);
  }

  return InstrumentBalanceToken::NOT_SET;
}

Aws::String GetNameForInstrumentBalanceToken(InstrumentBalanceToken enumValue) {
  switch (enumValue) {
    case InstrumentBalanceToken::NOT_SET:
      return {};
    case InstrumentBalanceToken::USDC:
      return "USDC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InstrumentBalanceTokenMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
