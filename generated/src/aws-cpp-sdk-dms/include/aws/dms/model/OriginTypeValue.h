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
  enum class OriginTypeValue
  {
    NOT_SET,
    SOURCE,
    TARGET
  };

namespace OriginTypeValueMapper
{
AWS_DATABASEMIGRATIONSERVICE_API OriginTypeValue GetOriginTypeValueForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForOriginTypeValue(OriginTypeValue value);
} // namespace OriginTypeValueMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
