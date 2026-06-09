/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ReplicaStatusType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {
namespace ReplicaStatusTypeMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

ReplicaStatusType GetReplicaStatusTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return ReplicaStatusType::CREATING;
  } else if (hashCode == ACTIVE_HASH) {
    return ReplicaStatusType::ACTIVE;
  } else if (hashCode == INACTIVE_HASH) {
    return ReplicaStatusType::INACTIVE;
  } else if (hashCode == DELETING_HASH) {
    return ReplicaStatusType::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReplicaStatusType>(hashCode);
  }

  return ReplicaStatusType::NOT_SET;
}

Aws::String GetNameForReplicaStatusType(ReplicaStatusType enumValue) {
  switch (enumValue) {
    case ReplicaStatusType::NOT_SET:
      return {};
    case ReplicaStatusType::CREATING:
      return "CREATING";
    case ReplicaStatusType::ACTIVE:
      return "ACTIVE";
    case ReplicaStatusType::INACTIVE:
      return "INACTIVE";
    case ReplicaStatusType::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReplicaStatusTypeMapper
}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
