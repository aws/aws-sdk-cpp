/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CoinbaseCdpSecret.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace CoinbaseCdpSecretMapper {

static const int API_KEY_HASH = HashingUtils::HashString("API_KEY");
static const int WALLET_SECRET_HASH = HashingUtils::HashString("WALLET_SECRET");

CoinbaseCdpSecret GetCoinbaseCdpSecretForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == API_KEY_HASH) {
    return CoinbaseCdpSecret::API_KEY;
  } else if (hashCode == WALLET_SECRET_HASH) {
    return CoinbaseCdpSecret::WALLET_SECRET;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CoinbaseCdpSecret>(hashCode);
  }

  return CoinbaseCdpSecret::NOT_SET;
}

Aws::String GetNameForCoinbaseCdpSecret(CoinbaseCdpSecret enumValue) {
  switch (enumValue) {
    case CoinbaseCdpSecret::NOT_SET:
      return {};
    case CoinbaseCdpSecret::API_KEY:
      return "API_KEY";
    case CoinbaseCdpSecret::WALLET_SECRET:
      return "WALLET_SECRET";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CoinbaseCdpSecretMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
