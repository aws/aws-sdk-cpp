/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/CloudWatchEvents_EXPORTS.h>

namespace Aws {
namespace CloudWatchEvents {
namespace Model {
enum class ReplayState { NOT_SET, STARTING, RUNNING, CANCELLING, COMPLETED, CANCELLED, FAILED };

namespace ReplayStateMapper {
AWS_CLOUDWATCHEVENTS_API ReplayState GetReplayStateForName(const Aws::String& name);

AWS_CLOUDWATCHEVENTS_API Aws::String GetNameForReplayState(ReplayState value);
}  // namespace ReplayStateMapper
}  // namespace Model
}  // namespace CloudWatchEvents
}  // namespace Aws
