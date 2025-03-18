/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-maps/GeoMaps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GeoMaps
{
namespace Model
{
  enum class StaticMapStyle
  {
    NOT_SET,
    Satellite,
    Standard
  };

namespace StaticMapStyleMapper
{
AWS_GEOMAPS_API StaticMapStyle GetStaticMapStyleForName(const Aws::String& name);

AWS_GEOMAPS_API Aws::String GetNameForStaticMapStyle(StaticMapStyle value);
} // namespace StaticMapStyleMapper
} // namespace Model
} // namespace GeoMaps
} // namespace Aws
