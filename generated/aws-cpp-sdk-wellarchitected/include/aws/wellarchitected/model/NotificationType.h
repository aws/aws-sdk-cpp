/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{
  enum class NotificationType
  {
    NOT_SET,
    LENS_VERSION_UPGRADED,
    LENS_VERSION_DEPRECATED
  };

namespace NotificationTypeMapper
{
AWS_WELLARCHITECTED_API NotificationType GetNotificationTypeForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForNotificationType(NotificationType value);
} // namespace NotificationTypeMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
