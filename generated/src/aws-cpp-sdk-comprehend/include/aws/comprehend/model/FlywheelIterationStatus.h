/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Comprehend
{
namespace Model
{
  enum class FlywheelIterationStatus
  {
    NOT_SET,
    TRAINING,
    EVALUATING,
    COMPLETED,
    FAILED,
    STOP_REQUESTED,
    STOPPED
  };

namespace FlywheelIterationStatusMapper
{
AWS_COMPREHEND_API FlywheelIterationStatus GetFlywheelIterationStatusForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForFlywheelIterationStatus(FlywheelIterationStatus value);
} // namespace FlywheelIterationStatusMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
