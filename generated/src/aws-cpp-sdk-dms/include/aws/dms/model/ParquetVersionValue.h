/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>

namespace Aws {
namespace DatabaseMigrationService {
namespace Model {
enum class ParquetVersionValue { NOT_SET, parquet_1_0, parquet_2_0 };

namespace ParquetVersionValueMapper {
AWS_DATABASEMIGRATIONSERVICE_API ParquetVersionValue GetParquetVersionValueForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForParquetVersionValue(ParquetVersionValue value);
}  // namespace ParquetVersionValueMapper
}  // namespace Model
}  // namespace DatabaseMigrationService
}  // namespace Aws
