/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/chime/model/StreamingNotificationTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
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
} // namespace Chime
} // namespace Aws
