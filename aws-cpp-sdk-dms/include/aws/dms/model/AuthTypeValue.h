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
  enum class AuthTypeValue
  {
    NOT_SET,
    no,
    password
  };

namespace AuthTypeValueMapper
{
AWS_DATABASEMIGRATIONSERVICE_API AuthTypeValue GetAuthTypeValueForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForAuthTypeValue(AuthTypeValue value);
} // namespace AuthTypeValueMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
