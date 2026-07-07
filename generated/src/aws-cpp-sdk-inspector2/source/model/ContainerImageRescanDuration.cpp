/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/ContainerImageRescanDuration.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace ContainerImageRescanDurationMapper {

static const int LIFETIME_HASH = HashingUtils::HashString("LIFETIME");
static const int DAYS_3_HASH = HashingUtils::HashString("DAYS_3");
static const int DAYS_7_HASH = HashingUtils::HashString("DAYS_7");
static const int DAYS_30_HASH = HashingUtils::HashString("DAYS_30");
static const int DAYS_180_HASH = HashingUtils::HashString("DAYS_180");
static const int DAYS_14_HASH = HashingUtils::HashString("DAYS_14");
static const int DAYS_60_HASH = HashingUtils::HashString("DAYS_60");
static const int DAYS_90_HASH = HashingUtils::HashString("DAYS_90");

ContainerImageRescanDuration GetContainerImageRescanDurationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LIFETIME_HASH) {
    return ContainerImageRescanDuration::LIFETIME;
  } else if (hashCode == DAYS_3_HASH) {
    return ContainerImageRescanDuration::DAYS_3;
  } else if (hashCode == DAYS_7_HASH) {
    return ContainerImageRescanDuration::DAYS_7;
  } else if (hashCode == DAYS_30_HASH) {
    return ContainerImageRescanDuration::DAYS_30;
  } else if (hashCode == DAYS_180_HASH) {
    return ContainerImageRescanDuration::DAYS_180;
  } else if (hashCode == DAYS_14_HASH) {
    return ContainerImageRescanDuration::DAYS_14;
  } else if (hashCode == DAYS_60_HASH) {
    return ContainerImageRescanDuration::DAYS_60;
  } else if (hashCode == DAYS_90_HASH) {
    return ContainerImageRescanDuration::DAYS_90;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContainerImageRescanDuration>(hashCode);
  }

  return ContainerImageRescanDuration::NOT_SET;
}

Aws::String GetNameForContainerImageRescanDuration(ContainerImageRescanDuration enumValue) {
  switch (enumValue) {
    case ContainerImageRescanDuration::NOT_SET:
      return {};
    case ContainerImageRescanDuration::LIFETIME:
      return "LIFETIME";
    case ContainerImageRescanDuration::DAYS_3:
      return "DAYS_3";
    case ContainerImageRescanDuration::DAYS_7:
      return "DAYS_7";
    case ContainerImageRescanDuration::DAYS_30:
      return "DAYS_30";
    case ContainerImageRescanDuration::DAYS_180:
      return "DAYS_180";
    case ContainerImageRescanDuration::DAYS_14:
      return "DAYS_14";
    case ContainerImageRescanDuration::DAYS_60:
      return "DAYS_60";
    case ContainerImageRescanDuration::DAYS_90:
      return "DAYS_90";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContainerImageRescanDurationMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
