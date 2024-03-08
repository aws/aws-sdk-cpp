/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Artifact
{
namespace Model
{
  enum class NotificationSubscriptionStatus
  {
    NOT_SET,
    SUBSCRIBED,
    NOT_SUBSCRIBED
  };

namespace NotificationSubscriptionStatusMapper
{
AWS_ARTIFACT_API NotificationSubscriptionStatus GetNotificationSubscriptionStatusForName(const Aws::String& name);

AWS_ARTIFACT_API Aws::String GetNameForNotificationSubscriptionStatus(NotificationSubscriptionStatus value);
} // namespace NotificationSubscriptionStatusMapper
} // namespace Model
} // namespace Artifact
} // namespace Aws
