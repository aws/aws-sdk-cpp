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
  enum class FleetOverflowBehavior
  {
    NOT_SET,
    QUEUE,
    ON_DEMAND
  };

namespace FleetOverflowBehaviorMapper
{
AWS_CODEBUILD_API FleetOverflowBehavior GetFleetOverflowBehaviorForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForFleetOverflowBehavior(FleetOverflowBehavior value);
} // namespace FleetOverflowBehaviorMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
