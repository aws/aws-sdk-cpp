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
  enum class TargetLabel
  {
    NOT_SET,
    Blue,
    Green
  };

namespace TargetLabelMapper
{
AWS_CODEDEPLOY_API TargetLabel GetTargetLabelForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForTargetLabel(TargetLabel value);
} // namespace TargetLabelMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
