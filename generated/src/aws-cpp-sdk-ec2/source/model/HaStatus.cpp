/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/HaStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace HaStatusMapper {

static const int processing_HASH = HashingUtils::HashString("processing");
static const int active_HASH = HashingUtils::HashString("active");
static const int standby_HASH = HashingUtils::HashString("standby");
static const int invalid_HASH = HashingUtils::HashString("invalid");

HaStatus GetHaStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == processing_HASH) {
    return HaStatus::processing;
  } else if (hashCode == active_HASH) {
    return HaStatus::active;
  } else if (hashCode == standby_HASH) {
    return HaStatus::standby;
  } else if (hashCode == invalid_HASH) {
    return HaStatus::invalid;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HaStatus>(hashCode);
  }

  return HaStatus::NOT_SET;
}

Aws::String GetNameForHaStatus(HaStatus enumValue) {
  switch (enumValue) {
    case HaStatus::NOT_SET:
      return {};
    case HaStatus::processing:
      return "processing";
    case HaStatus::active:
      return "active";
    case HaStatus::standby:
      return "standby";
    case HaStatus::invalid:
      return "invalid";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HaStatusMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
