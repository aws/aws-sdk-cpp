/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class ScaleDownBehavior
  {
    NOT_SET,
    TERMINATE_AT_INSTANCE_HOUR,
    TERMINATE_AT_TASK_COMPLETION
  };

namespace ScaleDownBehaviorMapper
{
AWS_EMR_API ScaleDownBehavior GetScaleDownBehaviorForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForScaleDownBehavior(ScaleDownBehavior value);
} // namespace ScaleDownBehaviorMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
