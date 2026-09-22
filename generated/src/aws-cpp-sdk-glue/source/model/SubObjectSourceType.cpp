/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/SubObjectSourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace SubObjectSourceTypeMapper {

static const int HIVE_PARQUET_HASH = HashingUtils::HashString("HIVE_PARQUET");
static const int HIVE_ORC_HASH = HashingUtils::HashString("HIVE_ORC");
static const int HIVE_CSV_HASH = HashingUtils::HashString("HIVE_CSV");
static const int HIVE_JSON_HASH = HashingUtils::HashString("HIVE_JSON");
static const int PLAIN_PARQUET_HASH = HashingUtils::HashString("PLAIN_PARQUET");
static const int ICEBERG_HASH = HashingUtils::HashString("ICEBERG");

SubObjectSourceType GetSubObjectSourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HIVE_PARQUET_HASH) {
    return SubObjectSourceType::HIVE_PARQUET;
  } else if (hashCode == HIVE_ORC_HASH) {
    return SubObjectSourceType::HIVE_ORC;
  } else if (hashCode == HIVE_CSV_HASH) {
    return SubObjectSourceType::HIVE_CSV;
  } else if (hashCode == HIVE_JSON_HASH) {
    return SubObjectSourceType::HIVE_JSON;
  } else if (hashCode == PLAIN_PARQUET_HASH) {
    return SubObjectSourceType::PLAIN_PARQUET;
  } else if (hashCode == ICEBERG_HASH) {
    return SubObjectSourceType::ICEBERG;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SubObjectSourceType>(hashCode);
  }

  return SubObjectSourceType::NOT_SET;
}

Aws::String GetNameForSubObjectSourceType(SubObjectSourceType enumValue) {
  switch (enumValue) {
    case SubObjectSourceType::NOT_SET:
      return {};
    case SubObjectSourceType::HIVE_PARQUET:
      return "HIVE_PARQUET";
    case SubObjectSourceType::HIVE_ORC:
      return "HIVE_ORC";
    case SubObjectSourceType::HIVE_CSV:
      return "HIVE_CSV";
    case SubObjectSourceType::HIVE_JSON:
      return "HIVE_JSON";
    case SubObjectSourceType::PLAIN_PARQUET:
      return "PLAIN_PARQUET";
    case SubObjectSourceType::ICEBERG:
      return "ICEBERG";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SubObjectSourceTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
