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
  enum class DataSourceType
  {
    NOT_SET,
    S3,
    SHAREPOINT,
    DATABASE,
    SALESFORCE,
    ONEDRIVE,
    SERVICENOW,
    CUSTOM,
    CONFLUENCE
  };

namespace DataSourceTypeMapper
{
AWS_KENDRA_API DataSourceType GetDataSourceTypeForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForDataSourceType(DataSourceType value);
} // namespace DataSourceTypeMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
