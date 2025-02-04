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
  enum class TablePreparationMode
  {
    NOT_SET,
    do_nothing,
    truncate,
    drop_tables_on_target
  };

namespace TablePreparationModeMapper
{
AWS_DATABASEMIGRATIONSERVICE_API TablePreparationMode GetTablePreparationModeForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForTablePreparationMode(TablePreparationMode value);
} // namespace TablePreparationModeMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
