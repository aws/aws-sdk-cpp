/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{
  enum class NotificationMessageType
  {
    NOT_SET,
    NEW_INSIGHT,
    CLOSED_INSIGHT,
    NEW_ASSOCIATION,
    SEVERITY_UPGRADED,
    NEW_RECOMMENDATION
  };

namespace NotificationMessageTypeMapper
{
AWS_DEVOPSGURU_API NotificationMessageType GetNotificationMessageTypeForName(const Aws::String& name);

AWS_DEVOPSGURU_API Aws::String GetNameForNotificationMessageType(NotificationMessageType value);
} // namespace NotificationMessageTypeMapper
} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
