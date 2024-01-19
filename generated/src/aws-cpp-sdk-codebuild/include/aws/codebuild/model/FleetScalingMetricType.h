/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{
  enum class FleetScalingMetricType
  {
    NOT_SET,
    FLEET_UTILIZATION_RATE
  };

namespace FleetScalingMetricTypeMapper
{
AWS_CODEBUILD_API FleetScalingMetricType GetFleetScalingMetricTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForFleetScalingMetricType(FleetScalingMetricType value);
} // namespace FleetScalingMetricTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
