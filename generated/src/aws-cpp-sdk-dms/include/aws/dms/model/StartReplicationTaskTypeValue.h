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
  enum class StartReplicationTaskTypeValue
  {
    NOT_SET,
    start_replication,
    resume_processing,
    reload_target
  };

namespace StartReplicationTaskTypeValueMapper
{
AWS_DATABASEMIGRATIONSERVICE_API StartReplicationTaskTypeValue GetStartReplicationTaskTypeValueForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForStartReplicationTaskTypeValue(StartReplicationTaskTypeValue value);
} // namespace StartReplicationTaskTypeValueMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
