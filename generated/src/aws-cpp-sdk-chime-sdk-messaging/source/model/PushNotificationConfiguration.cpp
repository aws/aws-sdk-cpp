/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/PushNotificationConfiguration.h>
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

PushNotificationConfiguration::PushNotificationConfiguration() : 
    m_titleHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_type(PushNotificationType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

PushNotificationConfiguration::PushNotificationConfiguration(JsonView jsonValue) : 
    m_titleHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_type(PushNotificationType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

PushNotificationConfiguration& PushNotificationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Body"))
  {
    m_body = jsonValue.GetString("Body");

    m_bodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = PushNotificationTypeMapper::GetPushNotificationTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue PushNotificationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_bodyHasBeenSet)
  {
   payload.WithString("Body", m_body);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", PushNotificationTypeMapper::GetNameForPushNotificationType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
