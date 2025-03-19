/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/PushNotificationPreferences.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

PushNotificationPreferences::PushNotificationPreferences(JsonView jsonValue)
{
  *this = jsonValue;
}

PushNotificationPreferences& PushNotificationPreferences::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AllowNotifications"))
  {
    m_allowNotifications = AllowNotificationsMapper::GetAllowNotificationsForName(jsonValue.GetString("AllowNotifications"));
    m_allowNotificationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FilterRule"))
  {
    m_filterRule = jsonValue.GetString("FilterRule");
    m_filterRuleHasBeenSet = true;
  }
  return *this;
}

JsonValue PushNotificationPreferences::Jsonize() const
{
  JsonValue payload;

  if(m_allowNotificationsHasBeenSet)
  {
   payload.WithString("AllowNotifications", AllowNotificationsMapper::GetNameForAllowNotifications(m_allowNotifications));
  }

  if(m_filterRuleHasBeenSet)
  {
   payload.WithString("FilterRule", m_filterRule);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
