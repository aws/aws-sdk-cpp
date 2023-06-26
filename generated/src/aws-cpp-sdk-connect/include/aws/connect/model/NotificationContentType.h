/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class NotificationContentType
  {
    NOT_SET,
    PLAIN_TEXT
  };

namespace NotificationContentTypeMapper
{
AWS_CONNECT_API NotificationContentType GetNotificationContentTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForNotificationContentType(NotificationContentType value);
} // namespace NotificationContentTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
