/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppSync
{
namespace Model
{
  enum class RelationalDatabaseSourceType
  {
    NOT_SET,
    RDS_HTTP_ENDPOINT
  };

namespace RelationalDatabaseSourceTypeMapper
{
AWS_APPSYNC_API RelationalDatabaseSourceType GetRelationalDatabaseSourceTypeForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForRelationalDatabaseSourceType(RelationalDatabaseSourceType value);
} // namespace RelationalDatabaseSourceTypeMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
