/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{
  enum class ApiDestinationState
  {
    NOT_SET,
    ACTIVE,
    INACTIVE
  };

namespace ApiDestinationStateMapper
{
AWS_CLOUDWATCHEVENTS_API ApiDestinationState GetApiDestinationStateForName(const Aws::String& name);

AWS_CLOUDWATCHEVENTS_API Aws::String GetNameForApiDestinationState(ApiDestinationState value);
} // namespace ApiDestinationStateMapper
} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
