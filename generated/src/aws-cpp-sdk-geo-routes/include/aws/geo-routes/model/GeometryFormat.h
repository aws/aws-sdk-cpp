/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{
  enum class GeometryFormat
  {
    NOT_SET,
    FlexiblePolyline,
    Simple
  };

namespace GeometryFormatMapper
{
AWS_GEOROUTES_API GeometryFormat GetGeometryFormatForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForGeometryFormat(GeometryFormat value);
} // namespace GeometryFormatMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
