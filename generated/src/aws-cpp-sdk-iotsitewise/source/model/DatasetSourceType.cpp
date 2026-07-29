/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/DatasetSourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace DatasetSourceTypeMapper {

static const int KENDRA_HASH = HashingUtils::HashString("KENDRA");
static const int SITEWISE_HASH = HashingUtils::HashString("SITEWISE");

DatasetSourceType GetDatasetSourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == KENDRA_HASH) {
    return DatasetSourceType::KENDRA;
  } else if (hashCode == SITEWISE_HASH) {
    return DatasetSourceType::SITEWISE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DatasetSourceType>(hashCode);
  }

  return DatasetSourceType::NOT_SET;
}

Aws::String GetNameForDatasetSourceType(DatasetSourceType enumValue) {
  switch (enumValue) {
    case DatasetSourceType::NOT_SET:
      return {};
    case DatasetSourceType::KENDRA:
      return "KENDRA";
    case DatasetSourceType::SITEWISE:
      return "SITEWISE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DatasetSourceTypeMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
