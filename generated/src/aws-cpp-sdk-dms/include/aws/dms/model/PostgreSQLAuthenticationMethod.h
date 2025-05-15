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
  enum class PostgreSQLAuthenticationMethod
  {
    NOT_SET,
    password,
    iam
  };

namespace PostgreSQLAuthenticationMethodMapper
{
AWS_DATABASEMIGRATIONSERVICE_API PostgreSQLAuthenticationMethod GetPostgreSQLAuthenticationMethodForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForPostgreSQLAuthenticationMethod(PostgreSQLAuthenticationMethod value);
} // namespace PostgreSQLAuthenticationMethodMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
