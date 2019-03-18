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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/model/InspectorEvent.h>
#include <aws/core/utils/DateTime.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>This data type is used in the <a>Subscription</a> data type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/EventSubscription">AWS
   * API Reference</a></p>
   */
  class AWS_INSPECTOR_API EventSubscription
  {
  public:
    EventSubscription();
    EventSubscription(Aws::Utils::Json::JsonView jsonValue);
    EventSubscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The event for which Amazon Simple Notification Service (SNS) notifications
     * are sent.</p>
     */
    inline const InspectorEvent& GetEvent() const{ return m_event; }

    /**
     * <p>The event for which Amazon Simple Notification Service (SNS) notifications
     * are sent.</p>
     */
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }

    /**
     * <p>The event for which Amazon Simple Notification Service (SNS) notifications
     * are sent.</p>
     */
    inline void SetEvent(const InspectorEvent& value) { m_eventHasBeenSet = true; m_event = value; }

    /**
     * <p>The event for which Amazon Simple Notification Service (SNS) notifications
     * are sent.</p>
     */
    inline void SetEvent(InspectorEvent&& value) { m_eventHasBeenSet = true; m_event = std::move(value); }

    /**
     * <p>The event for which Amazon Simple Notification Service (SNS) notifications
     * are sent.</p>
     */
    inline EventSubscription& WithEvent(const InspectorEvent& value) { SetEvent(value); return *this;}

    /**
     * <p>The event for which Amazon Simple Notification Service (SNS) notifications
     * are sent.</p>
     */
    inline EventSubscription& WithEvent(InspectorEvent&& value) { SetEvent(std::move(value)); return *this;}


    /**
     * <p>The time at which <a>SubscribeToEvent</a> is called.</p>
     */
    inline const Aws::Utils::DateTime& GetSubscribedAt() const{ return m_subscribedAt; }

    /**
     * <p>The time at which <a>SubscribeToEvent</a> is called.</p>
     */
    inline bool SubscribedAtHasBeenSet() const { return m_subscribedAtHasBeenSet; }

    /**
     * <p>The time at which <a>SubscribeToEvent</a> is called.</p>
     */
    inline void SetSubscribedAt(const Aws::Utils::DateTime& value) { m_subscribedAtHasBeenSet = true; m_subscribedAt = value; }

    /**
     * <p>The time at which <a>SubscribeToEvent</a> is called.</p>
     */
    inline void SetSubscribedAt(Aws::Utils::DateTime&& value) { m_subscribedAtHasBeenSet = true; m_subscribedAt = std::move(value); }

    /**
     * <p>The time at which <a>SubscribeToEvent</a> is called.</p>
     */
    inline EventSubscription& WithSubscribedAt(const Aws::Utils::DateTime& value) { SetSubscribedAt(value); return *this;}

    /**
     * <p>The time at which <a>SubscribeToEvent</a> is called.</p>
     */
    inline EventSubscription& WithSubscribedAt(Aws::Utils::DateTime&& value) { SetSubscribedAt(std::move(value)); return *this;}

  private:

    InspectorEvent m_event;
    bool m_eventHasBeenSet;

    Aws::Utils::DateTime m_subscribedAt;
    bool m_subscribedAtHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
