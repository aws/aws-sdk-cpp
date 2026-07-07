/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/ContainerImagePullDateRescanDuration.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace ContainerImagePullDateRescanDurationMapper {

static const int DAYS_3_HASH = HashingUtils::HashString("DAYS_3");
static const int DAYS_7_HASH = HashingUtils::HashString("DAYS_7");
static const int DAYS_14_HASH = HashingUtils::HashString("DAYS_14");
static const int DAYS_30_HASH = HashingUtils::HashString("DAYS_30");
static const int DAYS_60_HASH = HashingUtils::HashString("DAYS_60");
static const int DAYS_90_HASH = HashingUtils::HashString("DAYS_90");
static const int DAYS_180_HASH = HashingUtils::HashString("DAYS_180");

ContainerImagePullDateRescanDuration GetContainerImagePullDateRescanDurationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DAYS_3_HASH) {
    return ContainerImagePullDateRescanDuration::DAYS_3;
  } else if (hashCode == DAYS_7_HASH) {
    return ContainerImagePullDateRescanDuration::DAYS_7;
  } else if (hashCode == DAYS_14_HASH) {
    return ContainerImagePullDateRescanDuration::DAYS_14;
  } else if (hashCode == DAYS_30_HASH) {
    return ContainerImagePullDateRescanDuration::DAYS_30;
  } else if (hashCode == DAYS_60_HASH) {
    return ContainerImagePullDateRescanDuration::DAYS_60;
  } else if (hashCode == DAYS_90_HASH) {
    return ContainerImagePullDateRescanDuration::DAYS_90;
  } else if (hashCode == DAYS_180_HASH) {
    return ContainerImagePullDateRescanDuration::DAYS_180;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContainerImagePullDateRescanDuration>(hashCode);
  }

  return ContainerImagePullDateRescanDuration::NOT_SET;
}

Aws::String GetNameForContainerImagePullDateRescanDuration(ContainerImagePullDateRescanDuration enumValue) {
  switch (enumValue) {
    case ContainerImagePullDateRescanDuration::NOT_SET:
      return {};
    case ContainerImagePullDateRescanDuration::DAYS_3:
      return "DAYS_3";
    case ContainerImagePullDateRescanDuration::DAYS_7:
      return "DAYS_7";
    case ContainerImagePullDateRescanDuration::DAYS_14:
      return "DAYS_14";
    case ContainerImagePullDateRescanDuration::DAYS_30:
      return "DAYS_30";
    case ContainerImagePullDateRescanDuration::DAYS_60:
      return "DAYS_60";
    case ContainerImagePullDateRescanDuration::DAYS_90:
      return "DAYS_90";
    case ContainerImagePullDateRescanDuration::DAYS_180:
      return "DAYS_180";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContainerImagePullDateRescanDurationMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
