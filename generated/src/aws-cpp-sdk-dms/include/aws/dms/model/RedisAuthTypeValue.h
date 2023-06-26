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
  enum class RedisAuthTypeValue
  {
    NOT_SET,
    none,
    auth_role,
    auth_token
  };

namespace RedisAuthTypeValueMapper
{
AWS_DATABASEMIGRATIONSERVICE_API RedisAuthTypeValue GetRedisAuthTypeValueForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForRedisAuthTypeValue(RedisAuthTypeValue value);
} // namespace RedisAuthTypeValueMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
