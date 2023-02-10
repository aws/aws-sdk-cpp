/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{
  enum class ScaleInProtectedInstances
  {
    NOT_SET,
    Refresh,
    Ignore,
    Wait
  };

namespace ScaleInProtectedInstancesMapper
{
AWS_AUTOSCALING_API ScaleInProtectedInstances GetScaleInProtectedInstancesForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForScaleInProtectedInstances(ScaleInProtectedInstances value);
} // namespace ScaleInProtectedInstancesMapper
} // namespace Model
} // namespace AutoScaling
} // namespace Aws
