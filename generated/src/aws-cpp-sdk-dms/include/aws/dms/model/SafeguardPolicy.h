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
  enum class SafeguardPolicy
  {
    NOT_SET,
    rely_on_sql_server_replication_agent,
    exclusive_automatic_truncation,
    shared_automatic_truncation
  };

namespace SafeguardPolicyMapper
{
AWS_DATABASEMIGRATIONSERVICE_API SafeguardPolicy GetSafeguardPolicyForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForSafeguardPolicy(SafeguardPolicy value);
} // namespace SafeguardPolicyMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
