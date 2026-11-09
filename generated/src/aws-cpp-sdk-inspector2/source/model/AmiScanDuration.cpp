/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/AmiScanDuration.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace AmiScanDurationMapper {

static const int DAYS_180_HASH = HashingUtils::HashString("DAYS_180");
static const int DAYS_90_HASH = HashingUtils::HashString("DAYS_90");
static const int DAYS_60_HASH = HashingUtils::HashString("DAYS_60");
static const int DAYS_30_HASH = HashingUtils::HashString("DAYS_30");
static const int DAYS_14_HASH = HashingUtils::HashString("DAYS_14");
static const int DAYS_7_HASH = HashingUtils::HashString("DAYS_7");

AmiScanDuration GetAmiScanDurationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DAYS_180_HASH) {
    return AmiScanDuration::DAYS_180;
  } else if (hashCode == DAYS_90_HASH) {
    return AmiScanDuration::DAYS_90;
  } else if (hashCode == DAYS_60_HASH) {
    return AmiScanDuration::DAYS_60;
  } else if (hashCode == DAYS_30_HASH) {
    return AmiScanDuration::DAYS_30;
  } else if (hashCode == DAYS_14_HASH) {
    return AmiScanDuration::DAYS_14;
  } else if (hashCode == DAYS_7_HASH) {
    return AmiScanDuration::DAYS_7;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AmiScanDuration>(hashCode);
  }

  return AmiScanDuration::NOT_SET;
}

Aws::String GetNameForAmiScanDuration(AmiScanDuration enumValue) {
  switch (enumValue) {
    case AmiScanDuration::NOT_SET:
      return {};
    case AmiScanDuration::DAYS_180:
      return "DAYS_180";
    case AmiScanDuration::DAYS_90:
      return "DAYS_90";
    case AmiScanDuration::DAYS_60:
      return "DAYS_60";
    case AmiScanDuration::DAYS_30:
      return "DAYS_30";
    case AmiScanDuration::DAYS_14:
      return "DAYS_14";
    case AmiScanDuration::DAYS_7:
      return "DAYS_7";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AmiScanDurationMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
