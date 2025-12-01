/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/MembershipInferenceAttackVersion.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CleanRoomsML {
namespace Model {
namespace MembershipInferenceAttackVersionMapper {

static const int DISTANCE_TO_CLOSEST_RECORD_V1_HASH = HashingUtils::HashString("DISTANCE_TO_CLOSEST_RECORD_V1");

MembershipInferenceAttackVersion GetMembershipInferenceAttackVersionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISTANCE_TO_CLOSEST_RECORD_V1_HASH) {
    return MembershipInferenceAttackVersion::DISTANCE_TO_CLOSEST_RECORD_V1;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MembershipInferenceAttackVersion>(hashCode);
  }

  return MembershipInferenceAttackVersion::NOT_SET;
}

Aws::String GetNameForMembershipInferenceAttackVersion(MembershipInferenceAttackVersion enumValue) {
  switch (enumValue) {
    case MembershipInferenceAttackVersion::NOT_SET:
      return {};
    case MembershipInferenceAttackVersion::DISTANCE_TO_CLOSEST_RECORD_V1:
      return "DISTANCE_TO_CLOSEST_RECORD_V1";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MembershipInferenceAttackVersionMapper
}  // namespace Model
}  // namespace CleanRoomsML
}  // namespace Aws
