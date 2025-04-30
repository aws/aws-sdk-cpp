/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MailManager
{
namespace Model
{
  enum class SnsNotificationPayloadType
  {
    NOT_SET,
    HEADERS,
    CONTENT
  };

namespace SnsNotificationPayloadTypeMapper
{
AWS_MAILMANAGER_API SnsNotificationPayloadType GetSnsNotificationPayloadTypeForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForSnsNotificationPayloadType(SnsNotificationPayloadType value);
} // namespace SnsNotificationPayloadTypeMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
