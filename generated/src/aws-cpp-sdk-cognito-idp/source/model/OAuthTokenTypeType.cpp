/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/OAuthTokenTypeType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {
namespace OAuthTokenTypeTypeMapper {

static const int Bearer_HASH = HashingUtils::HashString("Bearer");
static const int N_A_HASH = HashingUtils::HashString("N_A");

OAuthTokenTypeType GetOAuthTokenTypeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Bearer_HASH) {
    return OAuthTokenTypeType::Bearer;
  } else if (hashCode == N_A_HASH) {
    return OAuthTokenTypeType::N_A;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OAuthTokenTypeType>(hashCode);
  }

  return OAuthTokenTypeType::NOT_SET;
}

Aws::String GetNameForOAuthTokenTypeType(OAuthTokenTypeType enumValue) {
  switch (enumValue) {
    case OAuthTokenTypeType::NOT_SET:
      return {};
    case OAuthTokenTypeType::Bearer:
      return "Bearer";
    case OAuthTokenTypeType::N_A:
      return "N_A";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OAuthTokenTypeTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
