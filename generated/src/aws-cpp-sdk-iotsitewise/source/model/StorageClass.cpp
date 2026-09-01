/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/StorageClass.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace StorageClassMapper {

static const int STANDARD_1_HASH = HashingUtils::HashString("STANDARD_1");
static const int STANDARD_2_HASH = HashingUtils::HashString("STANDARD_2");
static const int THROUGHPUT_1_HASH = HashingUtils::HashString("THROUGHPUT_1");
static const int THROUGHPUT_2_HASH = HashingUtils::HashString("THROUGHPUT_2");

StorageClass GetStorageClassForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STANDARD_1_HASH) {
    return StorageClass::STANDARD_1;
  } else if (hashCode == STANDARD_2_HASH) {
    return StorageClass::STANDARD_2;
  } else if (hashCode == THROUGHPUT_1_HASH) {
    return StorageClass::THROUGHPUT_1;
  } else if (hashCode == THROUGHPUT_2_HASH) {
    return StorageClass::THROUGHPUT_2;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StorageClass>(hashCode);
  }

  return StorageClass::NOT_SET;
}

Aws::String GetNameForStorageClass(StorageClass enumValue) {
  switch (enumValue) {
    case StorageClass::NOT_SET:
      return {};
    case StorageClass::STANDARD_1:
      return "STANDARD_1";
    case StorageClass::STANDARD_2:
      return "STANDARD_2";
    case StorageClass::THROUGHPUT_1:
      return "THROUGHPUT_1";
    case StorageClass::THROUGHPUT_2:
      return "THROUGHPUT_2";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StorageClassMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
