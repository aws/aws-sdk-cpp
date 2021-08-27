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
  enum class DatePartitionSequenceValue
  {
    NOT_SET,
    YYYYMMDD,
    YYYYMMDDHH,
    YYYYMM,
    MMYYYYDD,
    DDMMYYYY
  };

namespace DatePartitionSequenceValueMapper
{
AWS_DATABASEMIGRATIONSERVICE_API DatePartitionSequenceValue GetDatePartitionSequenceValueForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForDatePartitionSequenceValue(DatePartitionSequenceValue value);
} // namespace DatePartitionSequenceValueMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
