/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/ScanOrigin.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace ScanOriginMapper {

static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");
static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");

ScanOrigin GetScanOriginForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MANUAL_HASH) {
    return ScanOrigin::MANUAL;
  } else if (hashCode == SCHEDULED_HASH) {
    return ScanOrigin::SCHEDULED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScanOrigin>(hashCode);
  }

  return ScanOrigin::NOT_SET;
}

Aws::String GetNameForScanOrigin(ScanOrigin enumValue) {
  switch (enumValue) {
    case ScanOrigin::NOT_SET:
      return {};
    case ScanOrigin::MANUAL:
      return "MANUAL";
    case ScanOrigin::SCHEDULED:
      return "SCHEDULED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScanOriginMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
