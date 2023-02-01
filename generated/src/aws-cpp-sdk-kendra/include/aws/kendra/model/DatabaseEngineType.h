/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class DatabaseEngineType
  {
    NOT_SET,
    RDS_AURORA_MYSQL,
    RDS_AURORA_POSTGRESQL,
    RDS_MYSQL,
    RDS_POSTGRESQL
  };

namespace DatabaseEngineTypeMapper
{
AWS_KENDRA_API DatabaseEngineType GetDatabaseEngineTypeForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForDatabaseEngineType(DatabaseEngineType value);
} // namespace DatabaseEngineTypeMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
