﻿/**
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
  enum class FleetProxyRuleType
  {
    NOT_SET,
    DOMAIN_,
    IP
  };

namespace FleetProxyRuleTypeMapper
{
AWS_CODEBUILD_API FleetProxyRuleType GetFleetProxyRuleTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForFleetProxyRuleType(FleetProxyRuleType value);
} // namespace FleetProxyRuleTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
