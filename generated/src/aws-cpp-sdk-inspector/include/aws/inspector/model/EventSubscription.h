/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class EventSubscription
  {
  public:
    AWS_INSPECTOR_API EventSubscription() = default;
    AWS_INSPECTOR_API EventSubscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API EventSubscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The event for which Amazon Simple Notification Service (SNS) notifications
     * are sent.</p>
     */
    inline InspectorEvent GetEvent() const { return m_event; }
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }
    inline void SetEvent(InspectorEvent value) { m_eventHasBeenSet = true; m_event = value; }
    inline EventSubscription& WithEvent(InspectorEvent value) { SetEvent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which <a>SubscribeToEvent</a> is called.</p>
     */
    inline const Aws::Utils::DateTime& GetSubscribedAt() const { return m_subscribedAt; }
    inline bool SubscribedAtHasBeenSet() const { return m_subscribedAtHasBeenSet; }
    template<typename SubscribedAtT = Aws::Utils::DateTime>
    void SetSubscribedAt(SubscribedAtT&& value) { m_subscribedAtHasBeenSet = true; m_subscribedAt = std::forward<SubscribedAtT>(value); }
    template<typename SubscribedAtT = Aws::Utils::DateTime>
    EventSubscription& WithSubscribedAt(SubscribedAtT&& value) { SetSubscribedAt(std::forward<SubscribedAtT>(value)); return *this;}
    ///@}
  private:

    InspectorEvent m_event{InspectorEvent::NOT_SET};
    bool m_eventHasBeenSet = false;

    Aws::Utils::DateTime m_subscribedAt{};
    bool m_subscribedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
