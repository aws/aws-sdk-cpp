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
  enum class IsolineOptimizationObjective
  {
    NOT_SET,
    AccurateCalculation,
    BalancedCalculation,
    FastCalculation
  };

namespace IsolineOptimizationObjectiveMapper
{
AWS_GEOROUTES_API IsolineOptimizationObjective GetIsolineOptimizationObjectiveForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForIsolineOptimizationObjective(IsolineOptimizationObjective value);
} // namespace IsolineOptimizationObjectiveMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
