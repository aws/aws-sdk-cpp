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
  enum class FleetProxyRuleBehavior
  {
    NOT_SET,
    ALLOW_ALL,
    DENY_ALL
  };

namespace FleetProxyRuleBehaviorMapper
{
AWS_CODEBUILD_API FleetProxyRuleBehavior GetFleetProxyRuleBehaviorForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForFleetProxyRuleBehavior(FleetProxyRuleBehavior value);
} // namespace FleetProxyRuleBehaviorMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
