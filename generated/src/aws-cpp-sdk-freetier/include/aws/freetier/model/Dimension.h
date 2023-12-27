/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/freetier/FreeTier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FreeTier
{
namespace Model
{
  enum class Dimension
  {
    NOT_SET,
    SERVICE,
    OPERATION,
    USAGE_TYPE,
    REGION,
    FREE_TIER_TYPE,
    DESCRIPTION,
    USAGE_PERCENTAGE
  };

namespace DimensionMapper
{
AWS_FREETIER_API Dimension GetDimensionForName(const Aws::String& name);

AWS_FREETIER_API Aws::String GetNameForDimension(Dimension value);
} // namespace DimensionMapper
} // namespace Model
} // namespace FreeTier
} // namespace Aws
