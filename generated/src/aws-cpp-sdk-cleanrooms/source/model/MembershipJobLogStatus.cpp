﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/MembershipJobLogStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {
namespace MembershipJobLogStatusMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

MembershipJobLogStatus GetMembershipJobLogStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return MembershipJobLogStatus::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return MembershipJobLogStatus::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MembershipJobLogStatus>(hashCode);
  }

  return MembershipJobLogStatus::NOT_SET;
}

Aws::String GetNameForMembershipJobLogStatus(MembershipJobLogStatus enumValue) {
  switch (enumValue) {
    case MembershipJobLogStatus::NOT_SET:
      return {};
    case MembershipJobLogStatus::ENABLED:
      return "ENABLED";
    case MembershipJobLogStatus::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MembershipJobLogStatusMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
