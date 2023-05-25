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
  enum class DatePartitionDelimiterValue
  {
    NOT_SET,
    SLASH,
    UNDERSCORE,
    DASH,
    NONE
  };

namespace DatePartitionDelimiterValueMapper
{
AWS_DATABASEMIGRATIONSERVICE_API DatePartitionDelimiterValue GetDatePartitionDelimiterValueForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForDatePartitionDelimiterValue(DatePartitionDelimiterValue value);
} // namespace DatePartitionDelimiterValueMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
