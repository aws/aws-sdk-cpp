/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/MountStorageType.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace MountStorageTypeMapper {

static const int SHARED_STORAGE_HASH = HashingUtils::HashString("SHARED_STORAGE");

MountStorageType GetMountStorageTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SHARED_STORAGE_HASH) {
    return MountStorageType::SHARED_STORAGE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MountStorageType>(hashCode);
  }

  return MountStorageType::NOT_SET;
}

Aws::String GetNameForMountStorageType(MountStorageType enumValue) {
  switch (enumValue) {
    case MountStorageType::NOT_SET:
      return {};
    case MountStorageType::SHARED_STORAGE:
      return "SHARED_STORAGE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MountStorageTypeMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
