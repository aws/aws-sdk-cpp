/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/MCPServerAuthorizationMethod.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace MCPServerAuthorizationMethodMapper {

static const int oauth_client_credentials_HASH = HashingUtils::HashString("oauth-client-credentials");
static const int oauth_3lo_HASH = HashingUtils::HashString("oauth-3lo");
static const int api_key_HASH = HashingUtils::HashString("api-key");
static const int bearer_token_HASH = HashingUtils::HashString("bearer-token");

MCPServerAuthorizationMethod GetMCPServerAuthorizationMethodForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == oauth_client_credentials_HASH) {
    return MCPServerAuthorizationMethod::oauth_client_credentials;
  } else if (hashCode == oauth_3lo_HASH) {
    return MCPServerAuthorizationMethod::oauth_3lo;
  } else if (hashCode == api_key_HASH) {
    return MCPServerAuthorizationMethod::api_key;
  } else if (hashCode == bearer_token_HASH) {
    return MCPServerAuthorizationMethod::bearer_token;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MCPServerAuthorizationMethod>(hashCode);
  }

  return MCPServerAuthorizationMethod::NOT_SET;
}

Aws::String GetNameForMCPServerAuthorizationMethod(MCPServerAuthorizationMethod enumValue) {
  switch (enumValue) {
    case MCPServerAuthorizationMethod::NOT_SET:
      return {};
    case MCPServerAuthorizationMethod::oauth_client_credentials:
      return "oauth-client-credentials";
    case MCPServerAuthorizationMethod::oauth_3lo:
      return "oauth-3lo";
    case MCPServerAuthorizationMethod::api_key:
      return "api-key";
    case MCPServerAuthorizationMethod::bearer_token:
      return "bearer-token";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MCPServerAuthorizationMethodMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
