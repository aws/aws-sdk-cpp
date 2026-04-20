/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/WebAuthnFactorConfigurationType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {
namespace WebAuthnFactorConfigurationTypeMapper {

static const int SINGLE_FACTOR_HASH = HashingUtils::HashString("SINGLE_FACTOR");
static const int MULTI_FACTOR_WITH_USER_VERIFICATION_HASH = HashingUtils::HashString("MULTI_FACTOR_WITH_USER_VERIFICATION");

WebAuthnFactorConfigurationType GetWebAuthnFactorConfigurationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SINGLE_FACTOR_HASH) {
    return WebAuthnFactorConfigurationType::SINGLE_FACTOR;
  } else if (hashCode == MULTI_FACTOR_WITH_USER_VERIFICATION_HASH) {
    return WebAuthnFactorConfigurationType::MULTI_FACTOR_WITH_USER_VERIFICATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WebAuthnFactorConfigurationType>(hashCode);
  }

  return WebAuthnFactorConfigurationType::NOT_SET;
}

Aws::String GetNameForWebAuthnFactorConfigurationType(WebAuthnFactorConfigurationType enumValue) {
  switch (enumValue) {
    case WebAuthnFactorConfigurationType::NOT_SET:
      return {};
    case WebAuthnFactorConfigurationType::SINGLE_FACTOR:
      return "SINGLE_FACTOR";
    case WebAuthnFactorConfigurationType::MULTI_FACTOR_WITH_USER_VERIFICATION:
      return "MULTI_FACTOR_WITH_USER_VERIFICATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WebAuthnFactorConfigurationTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
