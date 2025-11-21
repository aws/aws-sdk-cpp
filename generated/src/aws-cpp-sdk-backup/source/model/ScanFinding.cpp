/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ScanFinding.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Backup {
namespace Model {
namespace ScanFindingMapper {

static const int MALWARE_HASH = HashingUtils::HashString("MALWARE");

ScanFinding GetScanFindingForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MALWARE_HASH) {
    return ScanFinding::MALWARE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScanFinding>(hashCode);
  }

  return ScanFinding::NOT_SET;
}

Aws::String GetNameForScanFinding(ScanFinding enumValue) {
  switch (enumValue) {
    case ScanFinding::NOT_SET:
      return {};
    case ScanFinding::MALWARE:
      return "MALWARE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScanFindingMapper
}  // namespace Model
}  // namespace Backup
}  // namespace Aws
