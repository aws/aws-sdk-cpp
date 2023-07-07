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
  enum class LongVarcharMappingType
  {
    NOT_SET,
    wstring,
    clob,
    nclob
  };

namespace LongVarcharMappingTypeMapper
{
AWS_DATABASEMIGRATIONSERVICE_API LongVarcharMappingType GetLongVarcharMappingTypeForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForLongVarcharMappingType(LongVarcharMappingType value);
} // namespace LongVarcharMappingTypeMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
