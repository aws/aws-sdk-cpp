/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/RevokeAssociatedSessionsType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {
namespace RevokeAssociatedSessionsTypeMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int LINKED_HASH = HashingUtils::HashString("LINKED");

RevokeAssociatedSessionsType GetRevokeAssociatedSessionsTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return RevokeAssociatedSessionsType::NONE;
  } else if (hashCode == LINKED_HASH) {
    return RevokeAssociatedSessionsType::LINKED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RevokeAssociatedSessionsType>(hashCode);
  }

  return RevokeAssociatedSessionsType::NOT_SET;
}

Aws::String GetNameForRevokeAssociatedSessionsType(RevokeAssociatedSessionsType enumValue) {
  switch (enumValue) {
    case RevokeAssociatedSessionsType::NOT_SET:
      return {};
    case RevokeAssociatedSessionsType::NONE:
      return "NONE";
    case RevokeAssociatedSessionsType::LINKED:
      return "LINKED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RevokeAssociatedSessionsTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
