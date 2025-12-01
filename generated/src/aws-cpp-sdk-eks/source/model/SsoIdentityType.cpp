/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eks/model/SsoIdentityType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {
namespace SsoIdentityTypeMapper {

static const int SSO_USER_HASH = HashingUtils::HashString("SSO_USER");
static const int SSO_GROUP_HASH = HashingUtils::HashString("SSO_GROUP");

SsoIdentityType GetSsoIdentityTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SSO_USER_HASH) {
    return SsoIdentityType::SSO_USER;
  } else if (hashCode == SSO_GROUP_HASH) {
    return SsoIdentityType::SSO_GROUP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SsoIdentityType>(hashCode);
  }

  return SsoIdentityType::NOT_SET;
}

Aws::String GetNameForSsoIdentityType(SsoIdentityType enumValue) {
  switch (enumValue) {
    case SsoIdentityType::NOT_SET:
      return {};
    case SsoIdentityType::SSO_USER:
      return "SSO_USER";
    case SsoIdentityType::SSO_GROUP:
      return "SSO_GROUP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SsoIdentityTypeMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
