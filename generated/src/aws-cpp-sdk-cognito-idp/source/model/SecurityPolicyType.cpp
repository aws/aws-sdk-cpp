/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/SecurityPolicyType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {
namespace SecurityPolicyTypeMapper {

static const int TLS_V1_HASH = HashingUtils::HashString("TLS_V1");
static const int TLS_V1_2_2021_HASH = HashingUtils::HashString("TLS_V1_2_2021");
static const int TLS_V1_3_2025_HASH = HashingUtils::HashString("TLS_V1_3_2025");

SecurityPolicyType GetSecurityPolicyTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TLS_V1_HASH) {
    return SecurityPolicyType::TLS_V1;
  } else if (hashCode == TLS_V1_2_2021_HASH) {
    return SecurityPolicyType::TLS_V1_2_2021;
  } else if (hashCode == TLS_V1_3_2025_HASH) {
    return SecurityPolicyType::TLS_V1_3_2025;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SecurityPolicyType>(hashCode);
  }

  return SecurityPolicyType::NOT_SET;
}

Aws::String GetNameForSecurityPolicyType(SecurityPolicyType enumValue) {
  switch (enumValue) {
    case SecurityPolicyType::NOT_SET:
      return {};
    case SecurityPolicyType::TLS_V1:
      return "TLS_V1";
    case SecurityPolicyType::TLS_V1_2_2021:
      return "TLS_V1_2_2021";
    case SecurityPolicyType::TLS_V1_3_2025:
      return "TLS_V1_3_2025";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SecurityPolicyTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
