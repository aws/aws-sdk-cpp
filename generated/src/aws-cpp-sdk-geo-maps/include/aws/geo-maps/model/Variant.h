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
  enum class Variant
  {
    NOT_SET,
    Default
  };

namespace VariantMapper
{
AWS_GEOMAPS_API Variant GetVariantForName(const Aws::String& name);

AWS_GEOMAPS_API Aws::String GetNameForVariant(Variant value);
} // namespace VariantMapper
} // namespace Model
} // namespace GeoMaps
} // namespace Aws
