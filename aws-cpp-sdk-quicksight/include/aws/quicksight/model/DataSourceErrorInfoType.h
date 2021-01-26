/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class DataSourceErrorInfoType
  {
    NOT_SET,
    ACCESS_DENIED,
    COPY_SOURCE_NOT_FOUND,
    TIMEOUT,
    ENGINE_VERSION_NOT_SUPPORTED,
    UNKNOWN_HOST,
    GENERIC_SQL_FAILURE,
    CONFLICT,
    UNKNOWN
  };

namespace DataSourceErrorInfoTypeMapper
{
AWS_QUICKSIGHT_API DataSourceErrorInfoType GetDataSourceErrorInfoTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDataSourceErrorInfoType(DataSourceErrorInfoType value);
} // namespace DataSourceErrorInfoTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
