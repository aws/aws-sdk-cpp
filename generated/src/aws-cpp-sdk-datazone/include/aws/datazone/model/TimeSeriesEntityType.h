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
  enum class TimeSeriesEntityType
  {
    NOT_SET,
    ASSET,
    LISTING
  };

namespace TimeSeriesEntityTypeMapper
{
AWS_DATAZONE_API TimeSeriesEntityType GetTimeSeriesEntityTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForTimeSeriesEntityType(TimeSeriesEntityType value);
} // namespace TimeSeriesEntityTypeMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
