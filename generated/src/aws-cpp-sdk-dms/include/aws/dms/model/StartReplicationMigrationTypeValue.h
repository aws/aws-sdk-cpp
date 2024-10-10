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
  enum class StartReplicationMigrationTypeValue
  {
    NOT_SET,
    reload_target,
    resume_processing,
    start_replication
  };

namespace StartReplicationMigrationTypeValueMapper
{
AWS_DATABASEMIGRATIONSERVICE_API StartReplicationMigrationTypeValue GetStartReplicationMigrationTypeValueForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForStartReplicationMigrationTypeValue(StartReplicationMigrationTypeValue value);
} // namespace StartReplicationMigrationTypeValueMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
