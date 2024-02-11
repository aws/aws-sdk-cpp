/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LocationService
{
namespace Model
{
  enum class OptimizationMode
  {
    NOT_SET,
    FastestRoute,
    ShortestRoute
  };

namespace OptimizationModeMapper
{
AWS_LOCATIONSERVICE_API OptimizationMode GetOptimizationModeForName(const Aws::String& name);

AWS_LOCATIONSERVICE_API Aws::String GetNameForOptimizationMode(OptimizationMode value);
} // namespace OptimizationModeMapper
} // namespace Model
} // namespace LocationService
} // namespace Aws
