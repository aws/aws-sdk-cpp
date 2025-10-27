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
enum class ExperimentStopDesiredState { NOT_SET, COMPLETED, CANCELLED };

namespace ExperimentStopDesiredStateMapper {
AWS_CLOUDWATCHEVIDENTLY_API ExperimentStopDesiredState GetExperimentStopDesiredStateForName(const Aws::String& name);

AWS_CLOUDWATCHEVIDENTLY_API Aws::String GetNameForExperimentStopDesiredState(ExperimentStopDesiredState value);
}  // namespace ExperimentStopDesiredStateMapper
}  // namespace Model
}  // namespace CloudWatchEvidently
}  // namespace Aws
