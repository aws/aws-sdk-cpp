/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/StreamingNotificationTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

StreamingNotificationTarget::StreamingNotificationTarget() : 
    m_notificationTarget(NotificationTarget::NOT_SET),
    m_notificationTargetHasBeenSet(false)
{
}

StreamingNotificationTarget::StreamingNotificationTarget(JsonView jsonValue) : 
    m_notificationTarget(NotificationTarget::NOT_SET),
    m_notificationTargetHasBeenSet(false)
{
  *this = jsonValue;
}

StreamingNotificationTarget& StreamingNotificationTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NotificationTarget"))
  {
    m_notificationTarget = NotificationTargetMapper::GetNotificationTargetForName(jsonValue.GetString("NotificationTarget"));

    m_notificationTargetHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamingNotificationTarget::Jsonize() const
{
  JsonValue payload;

  if(m_notificationTargetHasBeenSet)
  {
   payload.WithString("NotificationTarget", NotificationTargetMapper::GetNameForNotificationTarget(m_notificationTarget));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
