/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/ConnectorOAuth2GrantType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace ConnectorOAuth2GrantTypeMapper {

static const int CLIENT_CREDENTIALS_HASH = HashingUtils::HashString("CLIENT_CREDENTIALS");
static const int JWT_BEARER_HASH = HashingUtils::HashString("JWT_BEARER");
static const int AUTHORIZATION_CODE_HASH = HashingUtils::HashString("AUTHORIZATION_CODE");

ConnectorOAuth2GrantType GetConnectorOAuth2GrantTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CLIENT_CREDENTIALS_HASH) {
    return ConnectorOAuth2GrantType::CLIENT_CREDENTIALS;
  } else if (hashCode == JWT_BEARER_HASH) {
    return ConnectorOAuth2GrantType::JWT_BEARER;
  } else if (hashCode == AUTHORIZATION_CODE_HASH) {
    return ConnectorOAuth2GrantType::AUTHORIZATION_CODE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConnectorOAuth2GrantType>(hashCode);
  }

  return ConnectorOAuth2GrantType::NOT_SET;
}

Aws::String GetNameForConnectorOAuth2GrantType(ConnectorOAuth2GrantType enumValue) {
  switch (enumValue) {
    case ConnectorOAuth2GrantType::NOT_SET:
      return {};
    case ConnectorOAuth2GrantType::CLIENT_CREDENTIALS:
      return "CLIENT_CREDENTIALS";
    case ConnectorOAuth2GrantType::JWT_BEARER:
      return "JWT_BEARER";
    case ConnectorOAuth2GrantType::AUTHORIZATION_CODE:
      return "AUTHORIZATION_CODE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConnectorOAuth2GrantTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
