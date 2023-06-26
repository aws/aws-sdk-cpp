/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{
  enum class NotificationTarget
  {
    NOT_SET,
    EventBridge,
    SNS,
    SQS
  };

namespace NotificationTargetMapper
{
AWS_CHIMESDKVOICE_API NotificationTarget GetNotificationTargetForName(const Aws::String& name);

AWS_CHIMESDKVOICE_API Aws::String GetNameForNotificationTarget(NotificationTarget value);
} // namespace NotificationTargetMapper
} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
