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
  enum class AuthMechanismValue
  {
    NOT_SET,
    default_,
    mongodb_cr,
    scram_sha_1
  };

namespace AuthMechanismValueMapper
{
AWS_DATABASEMIGRATIONSERVICE_API AuthMechanismValue GetAuthMechanismValueForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForAuthMechanismValue(AuthMechanismValue value);
} // namespace AuthMechanismValueMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
