/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{
  enum class FallbackAction
  {
    NOT_SET,
    CONTINUE,
    ABORT
  };

namespace FallbackActionMapper
{
AWS_CHIMESDKMESSAGING_API FallbackAction GetFallbackActionForName(const Aws::String& name);

AWS_CHIMESDKMESSAGING_API Aws::String GetNameForFallbackAction(FallbackAction value);
} // namespace FallbackActionMapper
} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
