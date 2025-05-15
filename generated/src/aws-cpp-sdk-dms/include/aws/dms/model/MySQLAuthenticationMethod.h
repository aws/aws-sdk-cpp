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
  enum class MySQLAuthenticationMethod
  {
    NOT_SET,
    password,
    iam
  };

namespace MySQLAuthenticationMethodMapper
{
AWS_DATABASEMIGRATIONSERVICE_API MySQLAuthenticationMethod GetMySQLAuthenticationMethodForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForMySQLAuthenticationMethod(MySQLAuthenticationMethod value);
} // namespace MySQLAuthenticationMethodMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
