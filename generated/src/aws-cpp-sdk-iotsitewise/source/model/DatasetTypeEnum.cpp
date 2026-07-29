/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/DatasetTypeEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace DatasetTypeEnumMapper {

static const int SESSION_HASH = HashingUtils::HashString("SESSION");
static const int CURATED_HASH = HashingUtils::HashString("CURATED");
static const int EXTERNAL_HASH = HashingUtils::HashString("EXTERNAL");

DatasetTypeEnum GetDatasetTypeEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SESSION_HASH) {
    return DatasetTypeEnum::SESSION;
  } else if (hashCode == CURATED_HASH) {
    return DatasetTypeEnum::CURATED;
  } else if (hashCode == EXTERNAL_HASH) {
    return DatasetTypeEnum::EXTERNAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DatasetTypeEnum>(hashCode);
  }

  return DatasetTypeEnum::NOT_SET;
}

Aws::String GetNameForDatasetTypeEnum(DatasetTypeEnum enumValue) {
  switch (enumValue) {
    case DatasetTypeEnum::NOT_SET:
      return {};
    case DatasetTypeEnum::SESSION:
      return "SESSION";
    case DatasetTypeEnum::CURATED:
      return "CURATED";
    case DatasetTypeEnum::EXTERNAL:
      return "EXTERNAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DatasetTypeEnumMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
