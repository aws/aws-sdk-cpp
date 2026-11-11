/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesisanalyticsv2/model/StorageLocationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {
namespace StorageLocationTypeMapper {

static const int S3_HASH = HashingUtils::HashString("S3");

StorageLocationType GetStorageLocationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == S3_HASH) {
    return StorageLocationType::S3;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StorageLocationType>(hashCode);
  }

  return StorageLocationType::NOT_SET;
}

Aws::String GetNameForStorageLocationType(StorageLocationType enumValue) {
  switch (enumValue) {
    case StorageLocationType::NOT_SET:
      return {};
    case StorageLocationType::S3:
      return "S3";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StorageLocationTypeMapper
}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
