/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector/model/EventSubscription.h>
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
   * <p>This data type is used as a response element in the
   * <a>ListEventSubscriptions</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/Subscription">AWS
   * API Reference</a></p>
   */
  class Subscription
  {
  public:
    AWS_INSPECTOR_API Subscription() = default;
    AWS_INSPECTOR_API Subscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Subscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the assessment template that is used during the event for which
     * the SNS notification is sent.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    Subscription& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon Simple Notification Service (SNS) topic to which the
     * SNS notifications are sent.</p>
     */
    inline const Aws::String& GetTopicArn() const { return m_topicArn; }
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }
    template<typename TopicArnT = Aws::String>
    void SetTopicArn(TopicArnT&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::forward<TopicArnT>(value); }
    template<typename TopicArnT = Aws::String>
    Subscription& WithTopicArn(TopicArnT&& value) { SetTopicArn(std::forward<TopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of existing event subscriptions.</p>
     */
    inline const Aws::Vector<EventSubscription>& GetEventSubscriptions() const { return m_eventSubscriptions; }
    inline bool EventSubscriptionsHasBeenSet() const { return m_eventSubscriptionsHasBeenSet; }
    template<typename EventSubscriptionsT = Aws::Vector<EventSubscription>>
    void SetEventSubscriptions(EventSubscriptionsT&& value) { m_eventSubscriptionsHasBeenSet = true; m_eventSubscriptions = std::forward<EventSubscriptionsT>(value); }
    template<typename EventSubscriptionsT = Aws::Vector<EventSubscription>>
    Subscription& WithEventSubscriptions(EventSubscriptionsT&& value) { SetEventSubscriptions(std::forward<EventSubscriptionsT>(value)); return *this;}
    template<typename EventSubscriptionsT = EventSubscription>
    Subscription& AddEventSubscriptions(EventSubscriptionsT&& value) { m_eventSubscriptionsHasBeenSet = true; m_eventSubscriptions.emplace_back(std::forward<EventSubscriptionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;

    Aws::Vector<EventSubscription> m_eventSubscriptions;
    bool m_eventSubscriptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
