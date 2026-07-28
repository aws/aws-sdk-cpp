/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ClientAuthenticationMethodType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace ClientAuthenticationMethodTypeMapper {

static const int CLIENT_SECRET_BASIC_HASH = HashingUtils::HashString("CLIENT_SECRET_BASIC");
static const int CLIENT_SECRET_POST_HASH = HashingUtils::HashString("CLIENT_SECRET_POST");
static const int AWS_IAM_ID_TOKEN_JWT_HASH = HashingUtils::HashString("AWS_IAM_ID_TOKEN_JWT");
static const int PRIVATE_KEY_JWT_HASH = HashingUtils::HashString("PRIVATE_KEY_JWT");

ClientAuthenticationMethodType GetClientAuthenticationMethodTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CLIENT_SECRET_BASIC_HASH) {
    return ClientAuthenticationMethodType::CLIENT_SECRET_BASIC;
  } else if (hashCode == CLIENT_SECRET_POST_HASH) {
    return ClientAuthenticationMethodType::CLIENT_SECRET_POST;
  } else if (hashCode == AWS_IAM_ID_TOKEN_JWT_HASH) {
    return ClientAuthenticationMethodType::AWS_IAM_ID_TOKEN_JWT;
  } else if (hashCode == PRIVATE_KEY_JWT_HASH) {
    return ClientAuthenticationMethodType::PRIVATE_KEY_JWT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClientAuthenticationMethodType>(hashCode);
  }

  return ClientAuthenticationMethodType::NOT_SET;
}

Aws::String GetNameForClientAuthenticationMethodType(ClientAuthenticationMethodType enumValue) {
  switch (enumValue) {
    case ClientAuthenticationMethodType::NOT_SET:
      return {};
    case ClientAuthenticationMethodType::CLIENT_SECRET_BASIC:
      return "CLIENT_SECRET_BASIC";
    case ClientAuthenticationMethodType::CLIENT_SECRET_POST:
      return "CLIENT_SECRET_POST";
    case ClientAuthenticationMethodType::AWS_IAM_ID_TOKEN_JWT:
      return "AWS_IAM_ID_TOKEN_JWT";
    case ClientAuthenticationMethodType::PRIVATE_KEY_JWT:
      return "PRIVATE_KEY_JWT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClientAuthenticationMethodTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
