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
  enum class DataSourceIntrospectionStatus
  {
    NOT_SET,
    PROCESSING,
    FAILED,
    SUCCESS
  };

namespace DataSourceIntrospectionStatusMapper
{
AWS_APPSYNC_API DataSourceIntrospectionStatus GetDataSourceIntrospectionStatusForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForDataSourceIntrospectionStatus(DataSourceIntrospectionStatus value);
} // namespace DataSourceIntrospectionStatusMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
