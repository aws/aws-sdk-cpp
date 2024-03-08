/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class DataSourceRunType
  {
    NOT_SET,
    PRIORITIZED,
    SCHEDULED
  };

namespace DataSourceRunTypeMapper
{
AWS_DATAZONE_API DataSourceRunType GetDataSourceRunTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForDataSourceRunType(DataSourceRunType value);
} // namespace DataSourceRunTypeMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
