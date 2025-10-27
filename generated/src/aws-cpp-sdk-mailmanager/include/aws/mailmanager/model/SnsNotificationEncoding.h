/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/MailManager_EXPORTS.h>

namespace Aws {
namespace MailManager {
namespace Model {
enum class SnsNotificationEncoding { NOT_SET, UTF_8, BASE64 };

namespace SnsNotificationEncodingMapper {
AWS_MAILMANAGER_API SnsNotificationEncoding GetSnsNotificationEncodingForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForSnsNotificationEncoding(SnsNotificationEncoding value);
}  // namespace SnsNotificationEncodingMapper
}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
