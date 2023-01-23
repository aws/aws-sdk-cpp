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
  enum class ReleaseStatusValues
  {
    NOT_SET,
    beta
  };

namespace ReleaseStatusValuesMapper
{
AWS_DATABASEMIGRATIONSERVICE_API ReleaseStatusValues GetReleaseStatusValuesForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForReleaseStatusValues(ReleaseStatusValues value);
} // namespace ReleaseStatusValuesMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
