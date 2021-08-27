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
  enum class RefreshSchemasStatusTypeValue
  {
    NOT_SET,
    successful,
    failed,
    refreshing
  };

namespace RefreshSchemasStatusTypeValueMapper
{
AWS_DATABASEMIGRATIONSERVICE_API RefreshSchemasStatusTypeValue GetRefreshSchemasStatusTypeValueForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForRefreshSchemasStatusTypeValue(RefreshSchemasStatusTypeValue value);
} // namespace RefreshSchemasStatusTypeValueMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
