/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/AlarmNotification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

AlarmNotification::AlarmNotification() : 
    m_notificationActionsHasBeenSet(false)
{
}

AlarmNotification::AlarmNotification(JsonView jsonValue) : 
    m_notificationActionsHasBeenSet(false)
{
  *this = jsonValue;
}

AlarmNotification& AlarmNotification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("notificationActions"))
  {
    Aws::Utils::Array<JsonView> notificationActionsJsonList = jsonValue.GetArray("notificationActions");
    for(unsigned notificationActionsIndex = 0; notificationActionsIndex < notificationActionsJsonList.GetLength(); ++notificationActionsIndex)
    {
      m_notificationActions.push_back(notificationActionsJsonList[notificationActionsIndex].AsObject());
    }
    m_notificationActionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AlarmNotification::Jsonize() const
{
  JsonValue payload;

  if(m_notificationActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notificationActionsJsonList(m_notificationActions.size());
   for(unsigned notificationActionsIndex = 0; notificationActionsIndex < notificationActionsJsonList.GetLength(); ++notificationActionsIndex)
   {
     notificationActionsJsonList[notificationActionsIndex].AsObject(m_notificationActions[notificationActionsIndex].Jsonize());
   }
   payload.WithArray("notificationActions", std::move(notificationActionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
