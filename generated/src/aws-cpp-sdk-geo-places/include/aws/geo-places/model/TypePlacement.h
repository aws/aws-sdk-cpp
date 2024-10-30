/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GeoPlaces
{
namespace Model
{
  enum class TypePlacement
  {
    NOT_SET,
    BeforeBaseName,
    AfterBaseName
  };

namespace TypePlacementMapper
{
AWS_GEOPLACES_API TypePlacement GetTypePlacementForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForTypePlacement(TypePlacement value);
} // namespace TypePlacementMapper
} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
