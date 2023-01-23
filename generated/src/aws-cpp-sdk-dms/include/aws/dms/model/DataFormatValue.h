/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{
  enum class DataFormatValue
  {
    NOT_SET,
    csv,
    parquet
  };

namespace DataFormatValueMapper
{
AWS_DATABASEMIGRATIONSERVICE_API DataFormatValue GetDataFormatValueForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForDataFormatValue(DataFormatValue value);
} // namespace DataFormatValueMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
