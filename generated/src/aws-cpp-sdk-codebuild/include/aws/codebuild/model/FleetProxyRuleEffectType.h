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
  enum class FleetProxyRuleEffectType
  {
    NOT_SET,
    ALLOW,
    DENY
  };

namespace FleetProxyRuleEffectTypeMapper
{
AWS_CODEBUILD_API FleetProxyRuleEffectType GetFleetProxyRuleEffectTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForFleetProxyRuleEffectType(FleetProxyRuleEffectType value);
} // namespace FleetProxyRuleEffectTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
