/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

NotificationConfig::NotificationConfig(const JsonValue& jsonValue) : 
    m_notificationArnHasBeenSet(false),
    m_notificationEventsHasBeenSet(false),
    m_notificationType(NotificationType::NOT_SET),
    m_notificationTypeHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationConfig& NotificationConfig::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("NotificationArn"))
  {
    m_notificationArn = jsonValue.GetString("NotificationArn");

    m_notificationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotificationEvents"))
  {
    Array<JsonValue> notificationEventsJsonList = jsonValue.GetArray("NotificationEvents");
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
   Array<JsonValue> notificationEventsJsonList(m_notificationEvents.size());
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