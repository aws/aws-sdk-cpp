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
  enum class ReloadOptionValue
  {
    NOT_SET,
    data_reload,
    validate_only
  };

namespace ReloadOptionValueMapper
{
AWS_DATABASEMIGRATIONSERVICE_API ReloadOptionValue GetReloadOptionValueForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForReloadOptionValue(ReloadOptionValue value);
} // namespace ReloadOptionValueMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
