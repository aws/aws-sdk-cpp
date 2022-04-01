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
  enum class ApiDestinationState
  {
    NOT_SET,
    ACTIVE,
    INACTIVE
  };

namespace ApiDestinationStateMapper
{
AWS_EVENTBRIDGE_API ApiDestinationState GetApiDestinationStateForName(const Aws::String& name);

AWS_EVENTBRIDGE_API Aws::String GetNameForApiDestinationState(ApiDestinationState value);
} // namespace ApiDestinationStateMapper
} // namespace Model
} // namespace EventBridge
} // namespace Aws
