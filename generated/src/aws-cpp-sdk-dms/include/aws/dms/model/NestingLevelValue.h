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
  enum class NestingLevelValue
  {
    NOT_SET,
    none,
    one
  };

namespace NestingLevelValueMapper
{
AWS_DATABASEMIGRATIONSERVICE_API NestingLevelValue GetNestingLevelValueForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForNestingLevelValue(NestingLevelValue value);
} // namespace NestingLevelValueMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
