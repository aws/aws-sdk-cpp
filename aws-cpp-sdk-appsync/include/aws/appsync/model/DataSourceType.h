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
  enum class DataSourceType
  {
    NOT_SET,
    AWS_LAMBDA,
    AMAZON_DYNAMODB,
    AMAZON_ELASTICSEARCH,
    NONE,
    HTTP,
    RELATIONAL_DATABASE
  };

namespace DataSourceTypeMapper
{
AWS_APPSYNC_API DataSourceType GetDataSourceTypeForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForDataSourceType(DataSourceType value);
} // namespace DataSourceTypeMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
