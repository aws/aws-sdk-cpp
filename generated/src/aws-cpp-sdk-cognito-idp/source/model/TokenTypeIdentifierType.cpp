/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/TokenTypeIdentifierType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {
namespace TokenTypeIdentifierTypeMapper {

static const int ACCESS_TOKEN_HASH = HashingUtils::HashString("ACCESS_TOKEN");
static const int ID_TOKEN_HASH = HashingUtils::HashString("ID_TOKEN");
static const int SAML2_HASH = HashingUtils::HashString("SAML2");

TokenTypeIdentifierType GetTokenTypeIdentifierTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACCESS_TOKEN_HASH) {
    return TokenTypeIdentifierType::ACCESS_TOKEN;
  } else if (hashCode == ID_TOKEN_HASH) {
    return TokenTypeIdentifierType::ID_TOKEN;
  } else if (hashCode == SAML2_HASH) {
    return TokenTypeIdentifierType::SAML2;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TokenTypeIdentifierType>(hashCode);
  }

  return TokenTypeIdentifierType::NOT_SET;
}

Aws::String GetNameForTokenTypeIdentifierType(TokenTypeIdentifierType enumValue) {
  switch (enumValue) {
    case TokenTypeIdentifierType::NOT_SET:
      return {};
    case TokenTypeIdentifierType::ACCESS_TOKEN:
      return "ACCESS_TOKEN";
    case TokenTypeIdentifierType::ID_TOKEN:
      return "ID_TOKEN";
    case TokenTypeIdentifierType::SAML2:
      return "SAML2";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TokenTypeIdentifierTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
