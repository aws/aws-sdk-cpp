/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class JobEndBehavior
  {
    NOT_SET,
    STOP_ROLLOUT,
    CANCEL,
    FORCE_CANCEL
  };

namespace JobEndBehaviorMapper
{
AWS_IOT_API JobEndBehavior GetJobEndBehaviorForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForJobEndBehavior(JobEndBehavior value);
} // namespace JobEndBehaviorMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
