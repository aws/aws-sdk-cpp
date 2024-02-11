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
  enum class DatabaseMode
  {
    NOT_SET,
    default_,
    babelfish
  };

namespace DatabaseModeMapper
{
AWS_DATABASEMIGRATIONSERVICE_API DatabaseMode GetDatabaseModeForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForDatabaseMode(DatabaseMode value);
} // namespace DatabaseModeMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
