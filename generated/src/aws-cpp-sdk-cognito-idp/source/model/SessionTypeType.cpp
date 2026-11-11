/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/SessionTypeType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {
namespace SessionTypeTypeMapper {

static const int TOKEN_HASH = HashingUtils::HashString("TOKEN");
static const int SSO_HASH = HashingUtils::HashString("SSO");

SessionTypeType GetSessionTypeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TOKEN_HASH) {
    return SessionTypeType::TOKEN;
  } else if (hashCode == SSO_HASH) {
    return SessionTypeType::SSO;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SessionTypeType>(hashCode);
  }

  return SessionTypeType::NOT_SET;
}

Aws::String GetNameForSessionTypeType(SessionTypeType enumValue) {
  switch (enumValue) {
    case SessionTypeType::NOT_SET:
      return {};
    case SessionTypeType::TOKEN:
      return "TOKEN";
    case SessionTypeType::SSO:
      return "SSO";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SessionTypeTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
