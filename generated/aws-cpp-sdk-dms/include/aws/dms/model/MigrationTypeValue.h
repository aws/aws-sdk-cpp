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
  enum class MigrationTypeValue
  {
    NOT_SET,
    full_load,
    cdc,
    full_load_and_cdc
  };

namespace MigrationTypeValueMapper
{
AWS_DATABASEMIGRATIONSERVICE_API MigrationTypeValue GetMigrationTypeValueForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForMigrationTypeValue(MigrationTypeValue value);
} // namespace MigrationTypeValueMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
