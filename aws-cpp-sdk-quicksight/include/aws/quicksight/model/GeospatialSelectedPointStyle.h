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
  enum class GeospatialSelectedPointStyle
  {
    NOT_SET,
    POINT,
    CLUSTER
  };

namespace GeospatialSelectedPointStyleMapper
{
AWS_QUICKSIGHT_API GeospatialSelectedPointStyle GetGeospatialSelectedPointStyleForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForGeospatialSelectedPointStyle(GeospatialSelectedPointStyle value);
} // namespace GeospatialSelectedPointStyleMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
