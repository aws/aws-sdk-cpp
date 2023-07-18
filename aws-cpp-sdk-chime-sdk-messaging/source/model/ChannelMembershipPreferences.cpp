/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/ChannelMembershipPreferences.h>
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

ChannelMembershipPreferences::ChannelMembershipPreferences() : 
    m_pushNotificationsHasBeenSet(false)
{
}

ChannelMembershipPreferences::ChannelMembershipPreferences(JsonView jsonValue) : 
    m_pushNotificationsHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelMembershipPreferences& ChannelMembershipPreferences::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PushNotifications"))
  {
    m_pushNotifications = jsonValue.GetObject("PushNotifications");

    m_pushNotificationsHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelMembershipPreferences::Jsonize() const
{
  JsonValue payload;

  if(m_pushNotificationsHasBeenSet)
  {
   payload.WithObject("PushNotifications", m_pushNotifications.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
