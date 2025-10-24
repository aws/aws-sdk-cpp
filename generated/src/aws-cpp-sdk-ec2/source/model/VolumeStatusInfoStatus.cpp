﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/VolumeStatusInfoStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace VolumeStatusInfoStatusMapper {

static const int ok_HASH = HashingUtils::HashString("ok");
static const int impaired_HASH = HashingUtils::HashString("impaired");
static const int insufficient_data_HASH = HashingUtils::HashString("insufficient-data");
static const int warning_HASH = HashingUtils::HashString("warning");

VolumeStatusInfoStatus GetVolumeStatusInfoStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ok_HASH) {
    return VolumeStatusInfoStatus::ok;
  } else if (hashCode == impaired_HASH) {
    return VolumeStatusInfoStatus::impaired;
  } else if (hashCode == insufficient_data_HASH) {
    return VolumeStatusInfoStatus::insufficient_data;
  } else if (hashCode == warning_HASH) {
    return VolumeStatusInfoStatus::warning;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VolumeStatusInfoStatus>(hashCode);
  }

  return VolumeStatusInfoStatus::NOT_SET;
}

Aws::String GetNameForVolumeStatusInfoStatus(VolumeStatusInfoStatus enumValue) {
  switch (enumValue) {
    case VolumeStatusInfoStatus::NOT_SET:
      return {};
    case VolumeStatusInfoStatus::ok:
      return "ok";
    case VolumeStatusInfoStatus::impaired:
      return "impaired";
    case VolumeStatusInfoStatus::insufficient_data:
      return "insufficient-data";
    case VolumeStatusInfoStatus::warning:
      return "warning";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VolumeStatusInfoStatusMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
