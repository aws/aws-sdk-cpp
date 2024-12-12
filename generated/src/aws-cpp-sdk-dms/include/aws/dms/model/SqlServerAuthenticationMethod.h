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
  enum class SqlServerAuthenticationMethod
  {
    NOT_SET,
    password,
    kerberos
  };

namespace SqlServerAuthenticationMethodMapper
{
AWS_DATABASEMIGRATIONSERVICE_API SqlServerAuthenticationMethod GetSqlServerAuthenticationMethodForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForSqlServerAuthenticationMethod(SqlServerAuthenticationMethod value);
} // namespace SqlServerAuthenticationMethodMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
