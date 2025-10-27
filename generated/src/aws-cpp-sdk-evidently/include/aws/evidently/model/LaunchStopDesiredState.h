/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>

namespace Aws {
namespace CloudWatchEvidently {
namespace Model {
enum class LaunchStopDesiredState { NOT_SET, COMPLETED, CANCELLED };

namespace LaunchStopDesiredStateMapper {
AWS_CLOUDWATCHEVIDENTLY_API LaunchStopDesiredState GetLaunchStopDesiredStateForName(const Aws::String& name);

AWS_CLOUDWATCHEVIDENTLY_API Aws::String GetNameForLaunchStopDesiredState(LaunchStopDesiredState value);
}  // namespace LaunchStopDesiredStateMapper
}  // namespace Model
}  // namespace CloudWatchEvidently
}  // namespace Aws
