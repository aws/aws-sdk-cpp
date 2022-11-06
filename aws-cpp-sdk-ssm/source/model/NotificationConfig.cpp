/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/NotificationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

NotificationConfig::NotificationConfig() : 
    m_notificationArnHasBeenSet(false),
    m_notificationEventsHasBeenSet(false),
    m_notificationType(NotificationType::NOT_SET),
    m_notificationTypeHasBeenSet(false)
{
}

NotificationConfig::NotificationConfig(JsonView jsonValue) : 
    m_notificationArnHasBeenSet(false),
    m_notificationEventsHasBeenSet(false),
    m_notificationType(NotificationType::NOT_SET),
    m_notificationTypeHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationConfig& NotificationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NotificationArn"))
  {
    m_notificationArn = jsonValue.GetString("NotificationArn");

    m_notificationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotificationEvents"))
  {
    Aws::Utils::Array<JsonView> notificationEventsJsonList = jsonValue.GetArray("NotificationEvents");
    for(unsigned notificationEventsIndex = 0; notificationEventsIndex < notificationEventsJsonList.GetLength(); ++notificationEventsIndex)
    {
      m_notificationEvents.push_back(NotificationEventMapper::GetNotificationEventForName(notificationEventsJsonList[notificationEventsIndex].AsString()));
    }
    m_notificationEventsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotificationType"))
  {
    m_notificationType = NotificationTypeMapper::GetNotificationTypeForName(jsonValue.GetString("NotificationType"));

    m_notificationTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_notificationArnHasBeenSet)
  {
   payload.WithString("NotificationArn", m_notificationArn);

  }

  if(m_notificationEventsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notificationEventsJsonList(m_notificationEvents.size());
   for(unsigned notificationEventsIndex = 0; notificationEventsIndex < notificationEventsJsonList.GetLength(); ++notificationEventsIndex)
   {
     notificationEventsJsonList[notificationEventsIndex].AsString(NotificationEventMapper::GetNameForNotificationEvent(m_notificationEvents[notificationEventsIndex]));
   }
   payload.WithArray("NotificationEvents", std::move(notificationEventsJsonList));

  }

  if(m_notificationTypeHasBeenSet)
  {
   payload.WithString("NotificationType", NotificationTypeMapper::GetNameForNotificationType(m_notificationType));
  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
