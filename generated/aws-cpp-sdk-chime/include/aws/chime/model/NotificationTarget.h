/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
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
AWS_CHIME_API NotificationTarget GetNotificationTargetForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForNotificationTarget(NotificationTarget value);
} // namespace NotificationTargetMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
