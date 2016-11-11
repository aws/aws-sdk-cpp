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
#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/model/Notification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/budgets/model/Subscriber.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Budgets
{
namespace Model
{

  /**
   * A structure to relate notification and a list of subscribers who belong to the
   * notification.
   */
  class AWS_BUDGETS_API NotificationWithSubscribers
  {
  public:
    NotificationWithSubscribers();
    NotificationWithSubscribers(const Aws::Utils::Json::JsonValue& jsonValue);
    NotificationWithSubscribers& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Notification& GetNotification() const{ return m_notification; }

    
    inline void SetNotification(const Notification& value) { m_notificationHasBeenSet = true; m_notification = value; }

    
    inline void SetNotification(Notification&& value) { m_notificationHasBeenSet = true; m_notification = value; }

    
    inline NotificationWithSubscribers& WithNotification(const Notification& value) { SetNotification(value); return *this;}

    
    inline NotificationWithSubscribers& WithNotification(Notification&& value) { SetNotification(value); return *this;}

    
    inline const Aws::Vector<Subscriber>& GetSubscribers() const{ return m_subscribers; }

    
    inline void SetSubscribers(const Aws::Vector<Subscriber>& value) { m_subscribersHasBeenSet = true; m_subscribers = value; }

    
    inline void SetSubscribers(Aws::Vector<Subscriber>&& value) { m_subscribersHasBeenSet = true; m_subscribers = value; }

    
    inline NotificationWithSubscribers& WithSubscribers(const Aws::Vector<Subscriber>& value) { SetSubscribers(value); return *this;}

    
    inline NotificationWithSubscribers& WithSubscribers(Aws::Vector<Subscriber>&& value) { SetSubscribers(value); return *this;}

    
    inline NotificationWithSubscribers& AddSubscribers(const Subscriber& value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(value); return *this; }

    
    inline NotificationWithSubscribers& AddSubscribers(Subscriber&& value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(value); return *this; }

  private:
    Notification m_notification;
    bool m_notificationHasBeenSet;
    Aws::Vector<Subscriber> m_subscribers;
    bool m_subscribersHasBeenSet;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
