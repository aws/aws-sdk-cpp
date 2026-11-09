/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/DataQualityEvaluationConfigLevel.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace DataQualityEvaluationConfigLevelMapper {

static const int CATALOG_HASH = HashingUtils::HashString("CATALOG");
static const int DATABASE_HASH = HashingUtils::HashString("DATABASE");
static const int TABLE_HASH = HashingUtils::HashString("TABLE");

DataQualityEvaluationConfigLevel GetDataQualityEvaluationConfigLevelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CATALOG_HASH) {
    return DataQualityEvaluationConfigLevel::CATALOG;
  } else if (hashCode == DATABASE_HASH) {
    return DataQualityEvaluationConfigLevel::DATABASE;
  } else if (hashCode == TABLE_HASH) {
    return DataQualityEvaluationConfigLevel::TABLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataQualityEvaluationConfigLevel>(hashCode);
  }

  return DataQualityEvaluationConfigLevel::NOT_SET;
}

Aws::String GetNameForDataQualityEvaluationConfigLevel(DataQualityEvaluationConfigLevel enumValue) {
  switch (enumValue) {
    case DataQualityEvaluationConfigLevel::NOT_SET:
      return {};
    case DataQualityEvaluationConfigLevel::CATALOG:
      return "CATALOG";
    case DataQualityEvaluationConfigLevel::DATABASE:
      return "DATABASE";
    case DataQualityEvaluationConfigLevel::TABLE:
      return "TABLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataQualityEvaluationConfigLevelMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
