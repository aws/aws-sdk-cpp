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
  enum class FleetScalingType
  {
    NOT_SET,
    TARGET_TRACKING_SCALING
  };

namespace FleetScalingTypeMapper
{
AWS_CODEBUILD_API FleetScalingType GetFleetScalingTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForFleetScalingType(FleetScalingType value);
} // namespace FleetScalingTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
