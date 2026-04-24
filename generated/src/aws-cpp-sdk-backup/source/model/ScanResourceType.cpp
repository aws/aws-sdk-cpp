/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ScanResourceType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Backup {
namespace Model {
namespace ScanResourceTypeMapper {

static const int EBS_HASH = HashingUtils::HashString("EBS");
static const int EC2_HASH = HashingUtils::HashString("EC2");
static const int S3_HASH = HashingUtils::HashString("S3");

ScanResourceType GetScanResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EBS_HASH) {
    return ScanResourceType::EBS;
  } else if (hashCode == EC2_HASH) {
    return ScanResourceType::EC2;
  } else if (hashCode == S3_HASH) {
    return ScanResourceType::S3;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScanResourceType>(hashCode);
  }

  return ScanResourceType::NOT_SET;
}

Aws::String GetNameForScanResourceType(ScanResourceType enumValue) {
  switch (enumValue) {
    case ScanResourceType::NOT_SET:
      return {};
    case ScanResourceType::EBS:
      return "EBS";
    case ScanResourceType::EC2:
      return "EC2";
    case ScanResourceType::S3:
      return "S3";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScanResourceTypeMapper
}  // namespace Model
}  // namespace Backup
}  // namespace Aws
