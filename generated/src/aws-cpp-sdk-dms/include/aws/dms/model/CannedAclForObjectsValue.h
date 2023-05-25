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
  enum class CannedAclForObjectsValue
  {
    NOT_SET,
    none,
    private_,
    public_read,
    public_read_write,
    authenticated_read,
    aws_exec_read,
    bucket_owner_read,
    bucket_owner_full_control
  };

namespace CannedAclForObjectsValueMapper
{
AWS_DATABASEMIGRATIONSERVICE_API CannedAclForObjectsValue GetCannedAclForObjectsValueForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForCannedAclForObjectsValue(CannedAclForObjectsValue value);
} // namespace CannedAclForObjectsValueMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
