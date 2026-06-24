/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/RemoteAgentAuthorizationMethod.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace RemoteAgentAuthorizationMethodMapper {

static const int oauth_client_credentials_HASH = HashingUtils::HashString("oauth-client-credentials");
static const int api_key_HASH = HashingUtils::HashString("api-key");
static const int bearer_token_HASH = HashingUtils::HashString("bearer-token");

RemoteAgentAuthorizationMethod GetRemoteAgentAuthorizationMethodForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == oauth_client_credentials_HASH) {
    return RemoteAgentAuthorizationMethod::oauth_client_credentials;
  } else if (hashCode == api_key_HASH) {
    return RemoteAgentAuthorizationMethod::api_key;
  } else if (hashCode == bearer_token_HASH) {
    return RemoteAgentAuthorizationMethod::bearer_token;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RemoteAgentAuthorizationMethod>(hashCode);
  }

  return RemoteAgentAuthorizationMethod::NOT_SET;
}

Aws::String GetNameForRemoteAgentAuthorizationMethod(RemoteAgentAuthorizationMethod enumValue) {
  switch (enumValue) {
    case RemoteAgentAuthorizationMethod::NOT_SET:
      return {};
    case RemoteAgentAuthorizationMethod::oauth_client_credentials:
      return "oauth-client-credentials";
    case RemoteAgentAuthorizationMethod::api_key:
      return "api-key";
    case RemoteAgentAuthorizationMethod::bearer_token:
      return "bearer-token";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RemoteAgentAuthorizationMethodMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
