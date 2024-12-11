/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MigrationHub
{
namespace Model
{
  enum class UpdateType
  {
    NOT_SET,
    MIGRATION_TASK_STATE_UPDATED
  };

namespace UpdateTypeMapper
{
AWS_MIGRATIONHUB_API UpdateType GetUpdateTypeForName(const Aws::String& name);

AWS_MIGRATIONHUB_API Aws::String GetNameForUpdateType(UpdateType value);
} // namespace UpdateTypeMapper
} // namespace Model
} // namespace MigrationHub
} // namespace Aws
