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
  enum class VersionStatus
  {
    NOT_SET,
    UP_TO_DATE,
    OUTDATED,
    UNSUPPORTED
  };

namespace VersionStatusMapper
{
AWS_DATABASEMIGRATIONSERVICE_API VersionStatus GetVersionStatusForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForVersionStatus(VersionStatus value);
} // namespace VersionStatusMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
