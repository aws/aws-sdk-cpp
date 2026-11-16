/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/IssuedTokenTypeIdentifierType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {
namespace IssuedTokenTypeIdentifierTypeMapper {

static const int ACCESS_TOKEN_HASH = HashingUtils::HashString("ACCESS_TOKEN");
static const int ID_TOKEN_HASH = HashingUtils::HashString("ID_TOKEN");

IssuedTokenTypeIdentifierType GetIssuedTokenTypeIdentifierTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACCESS_TOKEN_HASH) {
    return IssuedTokenTypeIdentifierType::ACCESS_TOKEN;
  } else if (hashCode == ID_TOKEN_HASH) {
    return IssuedTokenTypeIdentifierType::ID_TOKEN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IssuedTokenTypeIdentifierType>(hashCode);
  }

  return IssuedTokenTypeIdentifierType::NOT_SET;
}

Aws::String GetNameForIssuedTokenTypeIdentifierType(IssuedTokenTypeIdentifierType enumValue) {
  switch (enumValue) {
    case IssuedTokenTypeIdentifierType::NOT_SET:
      return {};
    case IssuedTokenTypeIdentifierType::ACCESS_TOKEN:
      return "ACCESS_TOKEN";
    case IssuedTokenTypeIdentifierType::ID_TOKEN:
      return "ID_TOKEN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IssuedTokenTypeIdentifierTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
