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
    AWS_INSPECTOR_API Subscription();
    AWS_INSPECTOR_API Subscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Subscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the assessment template that is used during the event for which
     * the SNS notification is sent.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN of the assessment template that is used during the event for which
     * the SNS notification is sent.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The ARN of the assessment template that is used during the event for which
     * the SNS notification is sent.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN of the assessment template that is used during the event for which
     * the SNS notification is sent.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The ARN of the assessment template that is used during the event for which
     * the SNS notification is sent.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN of the assessment template that is used during the event for which
     * the SNS notification is sent.</p>
     */
    inline Subscription& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN of the assessment template that is used during the event for which
     * the SNS notification is sent.</p>
     */
    inline Subscription& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the assessment template that is used during the event for which
     * the SNS notification is sent.</p>
     */
    inline Subscription& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The ARN of the Amazon Simple Notification Service (SNS) topic to which the
     * SNS notifications are sent.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The ARN of the Amazon Simple Notification Service (SNS) topic to which the
     * SNS notifications are sent.</p>
     */
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }

    /**
     * <p>The ARN of the Amazon Simple Notification Service (SNS) topic to which the
     * SNS notifications are sent.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The ARN of the Amazon Simple Notification Service (SNS) topic to which the
     * SNS notifications are sent.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }

    /**
     * <p>The ARN of the Amazon Simple Notification Service (SNS) topic to which the
     * SNS notifications are sent.</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * <p>The ARN of the Amazon Simple Notification Service (SNS) topic to which the
     * SNS notifications are sent.</p>
     */
    inline Subscription& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon Simple Notification Service (SNS) topic to which the
     * SNS notifications are sent.</p>
     */
    inline Subscription& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon Simple Notification Service (SNS) topic to which the
     * SNS notifications are sent.</p>
     */
    inline Subscription& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}


    /**
     * <p>The list of existing event subscriptions.</p>
     */
    inline const Aws::Vector<EventSubscription>& GetEventSubscriptions() const{ return m_eventSubscriptions; }

    /**
     * <p>The list of existing event subscriptions.</p>
     */
    inline bool EventSubscriptionsHasBeenSet() const { return m_eventSubscriptionsHasBeenSet; }

    /**
     * <p>The list of existing event subscriptions.</p>
     */
    inline void SetEventSubscriptions(const Aws::Vector<EventSubscription>& value) { m_eventSubscriptionsHasBeenSet = true; m_eventSubscriptions = value; }

    /**
     * <p>The list of existing event subscriptions.</p>
     */
    inline void SetEventSubscriptions(Aws::Vector<EventSubscription>&& value) { m_eventSubscriptionsHasBeenSet = true; m_eventSubscriptions = std::move(value); }

    /**
     * <p>The list of existing event subscriptions.</p>
     */
    inline Subscription& WithEventSubscriptions(const Aws::Vector<EventSubscription>& value) { SetEventSubscriptions(value); return *this;}

    /**
     * <p>The list of existing event subscriptions.</p>
     */
    inline Subscription& WithEventSubscriptions(Aws::Vector<EventSubscription>&& value) { SetEventSubscriptions(std::move(value)); return *this;}

    /**
     * <p>The list of existing event subscriptions.</p>
     */
    inline Subscription& AddEventSubscriptions(const EventSubscription& value) { m_eventSubscriptionsHasBeenSet = true; m_eventSubscriptions.push_back(value); return *this; }

    /**
     * <p>The list of existing event subscriptions.</p>
     */
    inline Subscription& AddEventSubscriptions(EventSubscription&& value) { m_eventSubscriptionsHasBeenSet = true; m_eventSubscriptions.push_back(std::move(value)); return *this; }

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
