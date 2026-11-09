/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/ScanSource.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace ScanSourceMapper {

static const int INSTANCE_SCAN_HASH = HashingUtils::HashString("INSTANCE_SCAN");
static const int MACHINE_IMAGE_SCAN_HASH = HashingUtils::HashString("MACHINE_IMAGE_SCAN");

ScanSource GetScanSourceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INSTANCE_SCAN_HASH) {
    return ScanSource::INSTANCE_SCAN;
  } else if (hashCode == MACHINE_IMAGE_SCAN_HASH) {
    return ScanSource::MACHINE_IMAGE_SCAN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScanSource>(hashCode);
  }

  return ScanSource::NOT_SET;
}

Aws::String GetNameForScanSource(ScanSource enumValue) {
  switch (enumValue) {
    case ScanSource::NOT_SET:
      return {};
    case ScanSource::INSTANCE_SCAN:
      return "INSTANCE_SCAN";
    case ScanSource::MACHINE_IMAGE_SCAN:
      return "MACHINE_IMAGE_SCAN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScanSourceMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
