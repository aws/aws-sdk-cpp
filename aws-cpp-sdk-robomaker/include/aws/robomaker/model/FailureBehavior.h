/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{
  enum class FailureBehavior
  {
    NOT_SET,
    Fail,
    Continue
  };

namespace FailureBehaviorMapper
{
AWS_ROBOMAKER_API FailureBehavior GetFailureBehaviorForName(const Aws::String& name);

AWS_ROBOMAKER_API Aws::String GetNameForFailureBehavior(FailureBehavior value);
} // namespace FailureBehaviorMapper
} // namespace Model
} // namespace RoboMaker
} // namespace Aws
