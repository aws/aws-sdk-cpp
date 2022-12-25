/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/EventSource.h>
#include <aws/config/model/MessageType.h>
#include <aws/config/model/MaximumExecutionFrequency.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Provides the source and the message types that trigger Config to evaluate
   * your Amazon Web Services resources against a rule. It also provides the
   * frequency with which you want Config to run evaluations for the rule if the
   * trigger type is periodic. You can specify the parameter values for
   * <code>SourceDetail</code> only for custom rules. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/SourceDetail">AWS
   * API Reference</a></p>
   */
  class SourceDetail
  {
  public:
    AWS_CONFIGSERVICE_API SourceDetail();
    AWS_CONFIGSERVICE_API SourceDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API SourceDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The source of the event, such as an Amazon Web Services service, that
     * triggers Config to evaluate your Amazon Web Services resources.</p>
     */
    inline const EventSource& GetEventSource() const{ return m_eventSource; }

    /**
     * <p>The source of the event, such as an Amazon Web Services service, that
     * triggers Config to evaluate your Amazon Web Services resources.</p>
     */
    inline bool EventSourceHasBeenSet() const { return m_eventSourceHasBeenSet; }

    /**
     * <p>The source of the event, such as an Amazon Web Services service, that
     * triggers Config to evaluate your Amazon Web Services resources.</p>
     */
    inline void SetEventSource(const EventSource& value) { m_eventSourceHasBeenSet = true; m_eventSource = value; }

    /**
     * <p>The source of the event, such as an Amazon Web Services service, that
     * triggers Config to evaluate your Amazon Web Services resources.</p>
     */
    inline void SetEventSource(EventSource&& value) { m_eventSourceHasBeenSet = true; m_eventSource = std::move(value); }

    /**
     * <p>The source of the event, such as an Amazon Web Services service, that
     * triggers Config to evaluate your Amazon Web Services resources.</p>
     */
    inline SourceDetail& WithEventSource(const EventSource& value) { SetEventSource(value); return *this;}

    /**
     * <p>The source of the event, such as an Amazon Web Services service, that
     * triggers Config to evaluate your Amazon Web Services resources.</p>
     */
    inline SourceDetail& WithEventSource(EventSource&& value) { SetEventSource(std::move(value)); return *this;}


    /**
     * <p>The type of notification that triggers Config to run an evaluation for a
     * rule. You can specify the following notification types:</p> <ul> <li> <p>
     * <code>ConfigurationItemChangeNotification</code> - Triggers an evaluation when
     * Config delivers a configuration item as a result of a resource change.</p> </li>
     * <li> <p> <code>OversizedConfigurationItemChangeNotification</code> - Triggers an
     * evaluation when Config delivers an oversized configuration item. Config may
     * generate this notification type when a resource changes and the notification
     * exceeds the maximum size allowed by Amazon SNS.</p> </li> <li> <p>
     * <code>ScheduledNotification</code> - Triggers a periodic evaluation at the
     * frequency specified for <code>MaximumExecutionFrequency</code>.</p> </li> <li>
     * <p> <code>ConfigurationSnapshotDeliveryCompleted</code> - Triggers a periodic
     * evaluation when Config delivers a configuration snapshot.</p> </li> </ul> <p>If
     * you want your custom rule to be triggered by configuration changes, specify two
     * SourceDetail objects, one for <code>ConfigurationItemChangeNotification</code>
     * and one for <code>OversizedConfigurationItemChangeNotification</code>.</p>
     */
    inline const MessageType& GetMessageType() const{ return m_messageType; }

    /**
     * <p>The type of notification that triggers Config to run an evaluation for a
     * rule. You can specify the following notification types:</p> <ul> <li> <p>
     * <code>ConfigurationItemChangeNotification</code> - Triggers an evaluation when
     * Config delivers a configuration item as a result of a resource change.</p> </li>
     * <li> <p> <code>OversizedConfigurationItemChangeNotification</code> - Triggers an
     * evaluation when Config delivers an oversized configuration item. Config may
     * generate this notification type when a resource changes and the notification
     * exceeds the maximum size allowed by Amazon SNS.</p> </li> <li> <p>
     * <code>ScheduledNotification</code> - Triggers a periodic evaluation at the
     * frequency specified for <code>MaximumExecutionFrequency</code>.</p> </li> <li>
     * <p> <code>ConfigurationSnapshotDeliveryCompleted</code> - Triggers a periodic
     * evaluation when Config delivers a configuration snapshot.</p> </li> </ul> <p>If
     * you want your custom rule to be triggered by configuration changes, specify two
     * SourceDetail objects, one for <code>ConfigurationItemChangeNotification</code>
     * and one for <code>OversizedConfigurationItemChangeNotification</code>.</p>
     */
    inline bool MessageTypeHasBeenSet() const { return m_messageTypeHasBeenSet; }

    /**
     * <p>The type of notification that triggers Config to run an evaluation for a
     * rule. You can specify the following notification types:</p> <ul> <li> <p>
     * <code>ConfigurationItemChangeNotification</code> - Triggers an evaluation when
     * Config delivers a configuration item as a result of a resource change.</p> </li>
     * <li> <p> <code>OversizedConfigurationItemChangeNotification</code> - Triggers an
     * evaluation when Config delivers an oversized configuration item. Config may
     * generate this notification type when a resource changes and the notification
     * exceeds the maximum size allowed by Amazon SNS.</p> </li> <li> <p>
     * <code>ScheduledNotification</code> - Triggers a periodic evaluation at the
     * frequency specified for <code>MaximumExecutionFrequency</code>.</p> </li> <li>
     * <p> <code>ConfigurationSnapshotDeliveryCompleted</code> - Triggers a periodic
     * evaluation when Config delivers a configuration snapshot.</p> </li> </ul> <p>If
     * you want your custom rule to be triggered by configuration changes, specify two
     * SourceDetail objects, one for <code>ConfigurationItemChangeNotification</code>
     * and one for <code>OversizedConfigurationItemChangeNotification</code>.</p>
     */
    inline void SetMessageType(const MessageType& value) { m_messageTypeHasBeenSet = true; m_messageType = value; }

    /**
     * <p>The type of notification that triggers Config to run an evaluation for a
     * rule. You can specify the following notification types:</p> <ul> <li> <p>
     * <code>ConfigurationItemChangeNotification</code> - Triggers an evaluation when
     * Config delivers a configuration item as a result of a resource change.</p> </li>
     * <li> <p> <code>OversizedConfigurationItemChangeNotification</code> - Triggers an
     * evaluation when Config delivers an oversized configuration item. Config may
     * generate this notification type when a resource changes and the notification
     * exceeds the maximum size allowed by Amazon SNS.</p> </li> <li> <p>
     * <code>ScheduledNotification</code> - Triggers a periodic evaluation at the
     * frequency specified for <code>MaximumExecutionFrequency</code>.</p> </li> <li>
     * <p> <code>ConfigurationSnapshotDeliveryCompleted</code> - Triggers a periodic
     * evaluation when Config delivers a configuration snapshot.</p> </li> </ul> <p>If
     * you want your custom rule to be triggered by configuration changes, specify two
     * SourceDetail objects, one for <code>ConfigurationItemChangeNotification</code>
     * and one for <code>OversizedConfigurationItemChangeNotification</code>.</p>
     */
    inline void SetMessageType(MessageType&& value) { m_messageTypeHasBeenSet = true; m_messageType = std::move(value); }

    /**
     * <p>The type of notification that triggers Config to run an evaluation for a
     * rule. You can specify the following notification types:</p> <ul> <li> <p>
     * <code>ConfigurationItemChangeNotification</code> - Triggers an evaluation when
     * Config delivers a configuration item as a result of a resource change.</p> </li>
     * <li> <p> <code>OversizedConfigurationItemChangeNotification</code> - Triggers an
     * evaluation when Config delivers an oversized configuration item. Config may
     * generate this notification type when a resource changes and the notification
     * exceeds the maximum size allowed by Amazon SNS.</p> </li> <li> <p>
     * <code>ScheduledNotification</code> - Triggers a periodic evaluation at the
     * frequency specified for <code>MaximumExecutionFrequency</code>.</p> </li> <li>
     * <p> <code>ConfigurationSnapshotDeliveryCompleted</code> - Triggers a periodic
     * evaluation when Config delivers a configuration snapshot.</p> </li> </ul> <p>If
     * you want your custom rule to be triggered by configuration changes, specify two
     * SourceDetail objects, one for <code>ConfigurationItemChangeNotification</code>
     * and one for <code>OversizedConfigurationItemChangeNotification</code>.</p>
     */
    inline SourceDetail& WithMessageType(const MessageType& value) { SetMessageType(value); return *this;}

    /**
     * <p>The type of notification that triggers Config to run an evaluation for a
     * rule. You can specify the following notification types:</p> <ul> <li> <p>
     * <code>ConfigurationItemChangeNotification</code> - Triggers an evaluation when
     * Config delivers a configuration item as a result of a resource change.</p> </li>
     * <li> <p> <code>OversizedConfigurationItemChangeNotification</code> - Triggers an
     * evaluation when Config delivers an oversized configuration item. Config may
     * generate this notification type when a resource changes and the notification
     * exceeds the maximum size allowed by Amazon SNS.</p> </li> <li> <p>
     * <code>ScheduledNotification</code> - Triggers a periodic evaluation at the
     * frequency specified for <code>MaximumExecutionFrequency</code>.</p> </li> <li>
     * <p> <code>ConfigurationSnapshotDeliveryCompleted</code> - Triggers a periodic
     * evaluation when Config delivers a configuration snapshot.</p> </li> </ul> <p>If
     * you want your custom rule to be triggered by configuration changes, specify two
     * SourceDetail objects, one for <code>ConfigurationItemChangeNotification</code>
     * and one for <code>OversizedConfigurationItemChangeNotification</code>.</p>
     */
    inline SourceDetail& WithMessageType(MessageType&& value) { SetMessageType(std::move(value)); return *this;}


    /**
     * <p>The frequency at which you want Config to run evaluations for a custom rule
     * with a periodic trigger. If you specify a value for
     * <code>MaximumExecutionFrequency</code>, then <code>MessageType</code> must use
     * the <code>ScheduledNotification</code> value.</p>  <p>By default, rules
     * with a periodic trigger are evaluated every 24 hours. To change the frequency,
     * specify a valid value for the <code>MaximumExecutionFrequency</code>
     * parameter.</p> <p>Based on the valid value you choose, Config runs evaluations
     * once for each valid value. For example, if you choose <code>Three_Hours</code>,
     * Config runs evaluations once every three hours. In this case,
     * <code>Three_Hours</code> is the frequency of this rule. </p> 
     */
    inline const MaximumExecutionFrequency& GetMaximumExecutionFrequency() const{ return m_maximumExecutionFrequency; }

    /**
     * <p>The frequency at which you want Config to run evaluations for a custom rule
     * with a periodic trigger. If you specify a value for
     * <code>MaximumExecutionFrequency</code>, then <code>MessageType</code> must use
     * the <code>ScheduledNotification</code> value.</p>  <p>By default, rules
     * with a periodic trigger are evaluated every 24 hours. To change the frequency,
     * specify a valid value for the <code>MaximumExecutionFrequency</code>
     * parameter.</p> <p>Based on the valid value you choose, Config runs evaluations
     * once for each valid value. For example, if you choose <code>Three_Hours</code>,
     * Config runs evaluations once every three hours. In this case,
     * <code>Three_Hours</code> is the frequency of this rule. </p> 
     */
    inline bool MaximumExecutionFrequencyHasBeenSet() const { return m_maximumExecutionFrequencyHasBeenSet; }

    /**
     * <p>The frequency at which you want Config to run evaluations for a custom rule
     * with a periodic trigger. If you specify a value for
     * <code>MaximumExecutionFrequency</code>, then <code>MessageType</code> must use
     * the <code>ScheduledNotification</code> value.</p>  <p>By default, rules
     * with a periodic trigger are evaluated every 24 hours. To change the frequency,
     * specify a valid value for the <code>MaximumExecutionFrequency</code>
     * parameter.</p> <p>Based on the valid value you choose, Config runs evaluations
     * once for each valid value. For example, if you choose <code>Three_Hours</code>,
     * Config runs evaluations once every three hours. In this case,
     * <code>Three_Hours</code> is the frequency of this rule. </p> 
     */
    inline void SetMaximumExecutionFrequency(const MaximumExecutionFrequency& value) { m_maximumExecutionFrequencyHasBeenSet = true; m_maximumExecutionFrequency = value; }

    /**
     * <p>The frequency at which you want Config to run evaluations for a custom rule
     * with a periodic trigger. If you specify a value for
     * <code>MaximumExecutionFrequency</code>, then <code>MessageType</code> must use
     * the <code>ScheduledNotification</code> value.</p>  <p>By default, rules
     * with a periodic trigger are evaluated every 24 hours. To change the frequency,
     * specify a valid value for the <code>MaximumExecutionFrequency</code>
     * parameter.</p> <p>Based on the valid value you choose, Config runs evaluations
     * once for each valid value. For example, if you choose <code>Three_Hours</code>,
     * Config runs evaluations once every three hours. In this case,
     * <code>Three_Hours</code> is the frequency of this rule. </p> 
     */
    inline void SetMaximumExecutionFrequency(MaximumExecutionFrequency&& value) { m_maximumExecutionFrequencyHasBeenSet = true; m_maximumExecutionFrequency = std::move(value); }

    /**
     * <p>The frequency at which you want Config to run evaluations for a custom rule
     * with a periodic trigger. If you specify a value for
     * <code>MaximumExecutionFrequency</code>, then <code>MessageType</code> must use
     * the <code>ScheduledNotification</code> value.</p>  <p>By default, rules
     * with a periodic trigger are evaluated every 24 hours. To change the frequency,
     * specify a valid value for the <code>MaximumExecutionFrequency</code>
     * parameter.</p> <p>Based on the valid value you choose, Config runs evaluations
     * once for each valid value. For example, if you choose <code>Three_Hours</code>,
     * Config runs evaluations once every three hours. In this case,
     * <code>Three_Hours</code> is the frequency of this rule. </p> 
     */
    inline SourceDetail& WithMaximumExecutionFrequency(const MaximumExecutionFrequency& value) { SetMaximumExecutionFrequency(value); return *this;}

    /**
     * <p>The frequency at which you want Config to run evaluations for a custom rule
     * with a periodic trigger. If you specify a value for
     * <code>MaximumExecutionFrequency</code>, then <code>MessageType</code> must use
     * the <code>ScheduledNotification</code> value.</p>  <p>By default, rules
     * with a periodic trigger are evaluated every 24 hours. To change the frequency,
     * specify a valid value for the <code>MaximumExecutionFrequency</code>
     * parameter.</p> <p>Based on the valid value you choose, Config runs evaluations
     * once for each valid value. For example, if you choose <code>Three_Hours</code>,
     * Config runs evaluations once every three hours. In this case,
     * <code>Three_Hours</code> is the frequency of this rule. </p> 
     */
    inline SourceDetail& WithMaximumExecutionFrequency(MaximumExecutionFrequency&& value) { SetMaximumExecutionFrequency(std::move(value)); return *this;}

  private:

    EventSource m_eventSource;
    bool m_eventSourceHasBeenSet = false;

    MessageType m_messageType;
    bool m_messageTypeHasBeenSet = false;

    MaximumExecutionFrequency m_maximumExecutionFrequency;
    bool m_maximumExecutionFrequencyHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
