/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{
  enum class TargetFilterName
  {
    NOT_SET,
    TargetStatus,
    ServerInstanceLabel
  };

namespace TargetFilterNameMapper
{
AWS_CODEDEPLOY_API TargetFilterName GetTargetFilterNameForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForTargetFilterName(TargetFilterName value);
} // namespace TargetFilterNameMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
