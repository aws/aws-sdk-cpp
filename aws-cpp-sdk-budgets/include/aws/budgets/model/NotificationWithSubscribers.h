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

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/model/Notification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/budgets/model/Subscriber.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Budgets
{
namespace Model
{

  /**
   * <p>A notification with subscribers. A notification can have one SNS subscriber
   * and up to 10 email subscribers, for a total of 11 subscribers.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/NotificationWithSubscribers">AWS
   * API Reference</a></p>
   */
  class AWS_BUDGETS_API NotificationWithSubscribers
  {
  public:
    NotificationWithSubscribers();
    NotificationWithSubscribers(Aws::Utils::Json::JsonView jsonValue);
    NotificationWithSubscribers& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The notification that is associated with a budget.</p>
     */
    inline const Notification& GetNotification() const{ return m_notification; }

    /**
     * <p>The notification that is associated with a budget.</p>
     */
    inline bool NotificationHasBeenSet() const { return m_notificationHasBeenSet; }

    /**
     * <p>The notification that is associated with a budget.</p>
     */
    inline void SetNotification(const Notification& value) { m_notificationHasBeenSet = true; m_notification = value; }

    /**
     * <p>The notification that is associated with a budget.</p>
     */
    inline void SetNotification(Notification&& value) { m_notificationHasBeenSet = true; m_notification = std::move(value); }

    /**
     * <p>The notification that is associated with a budget.</p>
     */
    inline NotificationWithSubscribers& WithNotification(const Notification& value) { SetNotification(value); return *this;}

    /**
     * <p>The notification that is associated with a budget.</p>
     */
    inline NotificationWithSubscribers& WithNotification(Notification&& value) { SetNotification(std::move(value)); return *this;}


    /**
     * <p>A list of subscribers who are subscribed to this notification.</p>
     */
    inline const Aws::Vector<Subscriber>& GetSubscribers() const{ return m_subscribers; }

    /**
     * <p>A list of subscribers who are subscribed to this notification.</p>
     */
    inline bool SubscribersHasBeenSet() const { return m_subscribersHasBeenSet; }

    /**
     * <p>A list of subscribers who are subscribed to this notification.</p>
     */
    inline void SetSubscribers(const Aws::Vector<Subscriber>& value) { m_subscribersHasBeenSet = true; m_subscribers = value; }

    /**
     * <p>A list of subscribers who are subscribed to this notification.</p>
     */
    inline void SetSubscribers(Aws::Vector<Subscriber>&& value) { m_subscribersHasBeenSet = true; m_subscribers = std::move(value); }

    /**
     * <p>A list of subscribers who are subscribed to this notification.</p>
     */
    inline NotificationWithSubscribers& WithSubscribers(const Aws::Vector<Subscriber>& value) { SetSubscribers(value); return *this;}

    /**
     * <p>A list of subscribers who are subscribed to this notification.</p>
     */
    inline NotificationWithSubscribers& WithSubscribers(Aws::Vector<Subscriber>&& value) { SetSubscribers(std::move(value)); return *this;}

    /**
     * <p>A list of subscribers who are subscribed to this notification.</p>
     */
    inline NotificationWithSubscribers& AddSubscribers(const Subscriber& value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(value); return *this; }

    /**
     * <p>A list of subscribers who are subscribed to this notification.</p>
     */
    inline NotificationWithSubscribers& AddSubscribers(Subscriber&& value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(std::move(value)); return *this; }

  private:

    Notification m_notification;
    bool m_notificationHasBeenSet;

    Aws::Vector<Subscriber> m_subscribers;
    bool m_subscribersHasBeenSet;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
