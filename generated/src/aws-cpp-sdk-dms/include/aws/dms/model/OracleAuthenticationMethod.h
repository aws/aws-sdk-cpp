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
  enum class OracleAuthenticationMethod
  {
    NOT_SET,
    password,
    kerberos
  };

namespace OracleAuthenticationMethodMapper
{
AWS_DATABASEMIGRATIONSERVICE_API OracleAuthenticationMethod GetOracleAuthenticationMethodForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForOracleAuthenticationMethod(OracleAuthenticationMethod value);
} // namespace OracleAuthenticationMethodMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
