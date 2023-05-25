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
  enum class TargetDbType
  {
    NOT_SET,
    specific_database,
    multiple_databases
  };

namespace TargetDbTypeMapper
{
AWS_DATABASEMIGRATIONSERVICE_API TargetDbType GetTargetDbTypeForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForTargetDbType(TargetDbType value);
} // namespace TargetDbTypeMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
