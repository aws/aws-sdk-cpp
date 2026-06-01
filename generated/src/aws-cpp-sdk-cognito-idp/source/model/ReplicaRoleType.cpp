/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ReplicaRoleType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {
namespace ReplicaRoleTypeMapper {

static const int PRIMARY_HASH = HashingUtils::HashString("PRIMARY");
static const int SECONDARY_HASH = HashingUtils::HashString("SECONDARY");

ReplicaRoleType GetReplicaRoleTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRIMARY_HASH) {
    return ReplicaRoleType::PRIMARY;
  } else if (hashCode == SECONDARY_HASH) {
    return ReplicaRoleType::SECONDARY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReplicaRoleType>(hashCode);
  }

  return ReplicaRoleType::NOT_SET;
}

Aws::String GetNameForReplicaRoleType(ReplicaRoleType enumValue) {
  switch (enumValue) {
    case ReplicaRoleType::NOT_SET:
      return {};
    case ReplicaRoleType::PRIMARY:
      return "PRIMARY";
    case ReplicaRoleType::SECONDARY:
      return "SECONDARY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReplicaRoleTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
