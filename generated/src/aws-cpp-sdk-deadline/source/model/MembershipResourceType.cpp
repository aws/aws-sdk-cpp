/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/deadline/model/MembershipResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {
namespace MembershipResourceTypeMapper {

static const int FARM_HASH = HashingUtils::HashString("FARM");
static const int QUEUE_HASH = HashingUtils::HashString("QUEUE");
static const int FLEET_HASH = HashingUtils::HashString("FLEET");
static const int JOB_HASH = HashingUtils::HashString("JOB");

MembershipResourceType GetMembershipResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FARM_HASH) {
    return MembershipResourceType::FARM;
  } else if (hashCode == QUEUE_HASH) {
    return MembershipResourceType::QUEUE;
  } else if (hashCode == FLEET_HASH) {
    return MembershipResourceType::FLEET;
  } else if (hashCode == JOB_HASH) {
    return MembershipResourceType::JOB;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MembershipResourceType>(hashCode);
  }

  return MembershipResourceType::NOT_SET;
}

Aws::String GetNameForMembershipResourceType(MembershipResourceType enumValue) {
  switch (enumValue) {
    case MembershipResourceType::NOT_SET:
      return {};
    case MembershipResourceType::FARM:
      return "FARM";
    case MembershipResourceType::QUEUE:
      return "QUEUE";
    case MembershipResourceType::FLEET:
      return "FLEET";
    case MembershipResourceType::JOB:
      return "JOB";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MembershipResourceTypeMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws
