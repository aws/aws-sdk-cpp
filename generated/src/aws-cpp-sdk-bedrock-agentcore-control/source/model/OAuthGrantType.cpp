/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/OAuthGrantType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace OAuthGrantTypeMapper {

static const int CLIENT_CREDENTIALS_HASH = HashingUtils::HashString("CLIENT_CREDENTIALS");
static const int AUTHORIZATION_CODE_HASH = HashingUtils::HashString("AUTHORIZATION_CODE");

OAuthGrantType GetOAuthGrantTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CLIENT_CREDENTIALS_HASH) {
    return OAuthGrantType::CLIENT_CREDENTIALS;
  } else if (hashCode == AUTHORIZATION_CODE_HASH) {
    return OAuthGrantType::AUTHORIZATION_CODE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OAuthGrantType>(hashCode);
  }

  return OAuthGrantType::NOT_SET;
}

Aws::String GetNameForOAuthGrantType(OAuthGrantType enumValue) {
  switch (enumValue) {
    case OAuthGrantType::NOT_SET:
      return {};
    case OAuthGrantType::CLIENT_CREDENTIALS:
      return "CLIENT_CREDENTIALS";
    case OAuthGrantType::AUTHORIZATION_CODE:
      return "AUTHORIZATION_CODE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OAuthGrantTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
