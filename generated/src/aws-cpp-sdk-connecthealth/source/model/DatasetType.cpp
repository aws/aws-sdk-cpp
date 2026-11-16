/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/DatasetType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {
namespace DatasetTypeMapper {

static const int MEDICAL_CODING_HASH = HashingUtils::HashString("MEDICAL_CODING");

DatasetType GetDatasetTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MEDICAL_CODING_HASH) {
    return DatasetType::MEDICAL_CODING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DatasetType>(hashCode);
  }

  return DatasetType::NOT_SET;
}

Aws::String GetNameForDatasetType(DatasetType enumValue) {
  switch (enumValue) {
    case DatasetType::NOT_SET:
      return {};
    case DatasetType::MEDICAL_CODING:
      return "MEDICAL_CODING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DatasetTypeMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
