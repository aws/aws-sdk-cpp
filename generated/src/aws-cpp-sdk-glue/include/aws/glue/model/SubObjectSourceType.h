/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Model {
enum class SubObjectSourceType { NOT_SET, HIVE_PARQUET, HIVE_ORC, HIVE_CSV, HIVE_JSON, PLAIN_PARQUET, ICEBERG };

namespace SubObjectSourceTypeMapper {
AWS_GLUE_API SubObjectSourceType GetSubObjectSourceTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForSubObjectSourceType(SubObjectSourceType value);
}  // namespace SubObjectSourceTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
