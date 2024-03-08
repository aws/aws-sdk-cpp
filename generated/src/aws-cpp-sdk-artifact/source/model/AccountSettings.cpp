/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/AccountSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Artifact
{
namespace Model
{

AccountSettings::AccountSettings() : 
    m_notificationSubscriptionStatus(NotificationSubscriptionStatus::NOT_SET),
    m_notificationSubscriptionStatusHasBeenSet(false)
{
}

AccountSettings::AccountSettings(JsonView jsonValue) : 
    m_notificationSubscriptionStatus(NotificationSubscriptionStatus::NOT_SET),
    m_notificationSubscriptionStatusHasBeenSet(false)
{
  *this = jsonValue;
}

AccountSettings& AccountSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("notificationSubscriptionStatus"))
  {
    m_notificationSubscriptionStatus = NotificationSubscriptionStatusMapper::GetNotificationSubscriptionStatusForName(jsonValue.GetString("notificationSubscriptionStatus"));

    m_notificationSubscriptionStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountSettings::Jsonize() const
{
  JsonValue payload;

  if(m_notificationSubscriptionStatusHasBeenSet)
  {
   payload.WithString("notificationSubscriptionStatus", NotificationSubscriptionStatusMapper::GetNameForNotificationSubscriptionStatus(m_notificationSubscriptionStatus));
  }

  return payload;
}

} // namespace Model
} // namespace Artifact
} // namespace Aws
