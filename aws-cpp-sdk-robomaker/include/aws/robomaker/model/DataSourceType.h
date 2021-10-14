/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{
  enum class DataSourceType
  {
    NOT_SET,
    Prefix,
    Archive,
    File
  };

namespace DataSourceTypeMapper
{
AWS_ROBOMAKER_API DataSourceType GetDataSourceTypeForName(const Aws::String& name);

AWS_ROBOMAKER_API Aws::String GetNameForDataSourceType(DataSourceType value);
} // namespace DataSourceTypeMapper
} // namespace Model
} // namespace RoboMaker
} // namespace Aws
