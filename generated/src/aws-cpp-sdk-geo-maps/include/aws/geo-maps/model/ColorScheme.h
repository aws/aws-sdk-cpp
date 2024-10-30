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
  enum class ColorScheme
  {
    NOT_SET,
    Light,
    Dark
  };

namespace ColorSchemeMapper
{
AWS_GEOMAPS_API ColorScheme GetColorSchemeForName(const Aws::String& name);

AWS_GEOMAPS_API Aws::String GetNameForColorScheme(ColorScheme value);
} // namespace ColorSchemeMapper
} // namespace Model
} // namespace GeoMaps
} // namespace Aws
