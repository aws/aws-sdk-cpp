/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>

namespace Aws {
namespace EndUserMessaging {
namespace Model {
enum class NotifyChannel { NOT_SET, TEXT, VOICE, WHATSAPP };

namespace NotifyChannelMapper {
AWS_ENDUSERMESSAGING_API NotifyChannel GetNotifyChannelForName(const Aws::String& name);

AWS_ENDUSERMESSAGING_API Aws::String GetNameForNotifyChannel(NotifyChannel value);
}  // namespace NotifyChannelMapper
}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
