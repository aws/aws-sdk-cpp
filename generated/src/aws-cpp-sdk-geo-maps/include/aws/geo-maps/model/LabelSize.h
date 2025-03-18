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
  enum class LabelSize
  {
    NOT_SET,
    Small,
    Large
  };

namespace LabelSizeMapper
{
AWS_GEOMAPS_API LabelSize GetLabelSizeForName(const Aws::String& name);

AWS_GEOMAPS_API Aws::String GetNameForLabelSize(LabelSize value);
} // namespace LabelSizeMapper
} // namespace Model
} // namespace GeoMaps
} // namespace Aws
