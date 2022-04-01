/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EventBridge
{
namespace Model
{
  enum class ReplayState
  {
    NOT_SET,
    STARTING,
    RUNNING,
    CANCELLING,
    COMPLETED,
    CANCELLED,
    FAILED
  };

namespace ReplayStateMapper
{
AWS_EVENTBRIDGE_API ReplayState GetReplayStateForName(const Aws::String& name);

AWS_EVENTBRIDGE_API Aws::String GetNameForReplayState(ReplayState value);
} // namespace ReplayStateMapper
} // namespace Model
} // namespace EventBridge
} // namespace Aws
