/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataExchange
{
namespace Model
{
  enum class NotificationType
  {
    NOT_SET,
    DATA_DELAY,
    DATA_UPDATE,
    DEPRECATION,
    SCHEMA_CHANGE
  };

namespace NotificationTypeMapper
{
AWS_DATAEXCHANGE_API NotificationType GetNotificationTypeForName(const Aws::String& name);

AWS_DATAEXCHANGE_API Aws::String GetNameForNotificationType(NotificationType value);
} // namespace NotificationTypeMapper
} // namespace Model
} // namespace DataExchange
} // namespace Aws
