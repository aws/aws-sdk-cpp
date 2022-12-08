/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/monitoring/model/StateValue.h>
#include <aws/monitoring/model/ActionsSuppressedBy.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>The details about a composite alarm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/CompositeAlarm">AWS
   * API Reference</a></p>
   */
  class CompositeAlarm
  {
  public:
    AWS_CLOUDWATCH_API CompositeAlarm();
    AWS_CLOUDWATCH_API CompositeAlarm(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API CompositeAlarm& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether actions should be executed during any changes to the alarm
     * state.</p>
     */
    inline bool GetActionsEnabled() const{ return m_actionsEnabled; }

    /**
     * <p>Indicates whether actions should be executed during any changes to the alarm
     * state.</p>
     */
    inline bool ActionsEnabledHasBeenSet() const { return m_actionsEnabledHasBeenSet; }

    /**
     * <p>Indicates whether actions should be executed during any changes to the alarm
     * state.</p>
     */
    inline void SetActionsEnabled(bool value) { m_actionsEnabledHasBeenSet = true; m_actionsEnabled = value; }

    /**
     * <p>Indicates whether actions should be executed during any changes to the alarm
     * state.</p>
     */
    inline CompositeAlarm& WithActionsEnabled(bool value) { SetActionsEnabled(value); return *this;}


    /**
     * <p>The actions to execute when this alarm transitions to the ALARM state from
     * any other state. Each action is specified as an Amazon Resource Name (ARN).</p>
     */
    inline const Aws::Vector<Aws::String>& GetAlarmActions() const{ return m_alarmActions; }

    /**
     * <p>The actions to execute when this alarm transitions to the ALARM state from
     * any other state. Each action is specified as an Amazon Resource Name (ARN).</p>
     */
    inline bool AlarmActionsHasBeenSet() const { return m_alarmActionsHasBeenSet; }

    /**
     * <p>The actions to execute when this alarm transitions to the ALARM state from
     * any other state. Each action is specified as an Amazon Resource Name (ARN).</p>
     */
    inline void SetAlarmActions(const Aws::Vector<Aws::String>& value) { m_alarmActionsHasBeenSet = true; m_alarmActions = value; }

    /**
     * <p>The actions to execute when this alarm transitions to the ALARM state from
     * any other state. Each action is specified as an Amazon Resource Name (ARN).</p>
     */
    inline void SetAlarmActions(Aws::Vector<Aws::String>&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions = std::move(value); }

    /**
     * <p>The actions to execute when this alarm transitions to the ALARM state from
     * any other state. Each action is specified as an Amazon Resource Name (ARN).</p>
     */
    inline CompositeAlarm& WithAlarmActions(const Aws::Vector<Aws::String>& value) { SetAlarmActions(value); return *this;}

    /**
     * <p>The actions to execute when this alarm transitions to the ALARM state from
     * any other state. Each action is specified as an Amazon Resource Name (ARN).</p>
     */
    inline CompositeAlarm& WithAlarmActions(Aws::Vector<Aws::String>&& value) { SetAlarmActions(std::move(value)); return *this;}

    /**
     * <p>The actions to execute when this alarm transitions to the ALARM state from
     * any other state. Each action is specified as an Amazon Resource Name (ARN).</p>
     */
    inline CompositeAlarm& AddAlarmActions(const Aws::String& value) { m_alarmActionsHasBeenSet = true; m_alarmActions.push_back(value); return *this; }

    /**
     * <p>The actions to execute when this alarm transitions to the ALARM state from
     * any other state. Each action is specified as an Amazon Resource Name (ARN).</p>
     */
    inline CompositeAlarm& AddAlarmActions(Aws::String&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions.push_back(std::move(value)); return *this; }

    /**
     * <p>The actions to execute when this alarm transitions to the ALARM state from
     * any other state. Each action is specified as an Amazon Resource Name (ARN).</p>
     */
    inline CompositeAlarm& AddAlarmActions(const char* value) { m_alarmActionsHasBeenSet = true; m_alarmActions.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline const Aws::String& GetAlarmArn() const{ return m_alarmArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline bool AlarmArnHasBeenSet() const { return m_alarmArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline void SetAlarmArn(const Aws::String& value) { m_alarmArnHasBeenSet = true; m_alarmArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline void SetAlarmArn(Aws::String&& value) { m_alarmArnHasBeenSet = true; m_alarmArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline void SetAlarmArn(const char* value) { m_alarmArnHasBeenSet = true; m_alarmArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline CompositeAlarm& WithAlarmArn(const Aws::String& value) { SetAlarmArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline CompositeAlarm& WithAlarmArn(Aws::String&& value) { SetAlarmArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline CompositeAlarm& WithAlarmArn(const char* value) { SetAlarmArn(value); return *this;}


    /**
     * <p>The time stamp of the last update to the alarm configuration.</p>
     */
    inline const Aws::Utils::DateTime& GetAlarmConfigurationUpdatedTimestamp() const{ return m_alarmConfigurationUpdatedTimestamp; }

    /**
     * <p>The time stamp of the last update to the alarm configuration.</p>
     */
    inline bool AlarmConfigurationUpdatedTimestampHasBeenSet() const { return m_alarmConfigurationUpdatedTimestampHasBeenSet; }

    /**
     * <p>The time stamp of the last update to the alarm configuration.</p>
     */
    inline void SetAlarmConfigurationUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_alarmConfigurationUpdatedTimestampHasBeenSet = true; m_alarmConfigurationUpdatedTimestamp = value; }

    /**
     * <p>The time stamp of the last update to the alarm configuration.</p>
     */
    inline void SetAlarmConfigurationUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_alarmConfigurationUpdatedTimestampHasBeenSet = true; m_alarmConfigurationUpdatedTimestamp = std::move(value); }

    /**
     * <p>The time stamp of the last update to the alarm configuration.</p>
     */
    inline CompositeAlarm& WithAlarmConfigurationUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetAlarmConfigurationUpdatedTimestamp(value); return *this;}

    /**
     * <p>The time stamp of the last update to the alarm configuration.</p>
     */
    inline CompositeAlarm& WithAlarmConfigurationUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetAlarmConfigurationUpdatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The description of the alarm.</p>
     */
    inline const Aws::String& GetAlarmDescription() const{ return m_alarmDescription; }

    /**
     * <p>The description of the alarm.</p>
     */
    inline bool AlarmDescriptionHasBeenSet() const { return m_alarmDescriptionHasBeenSet; }

    /**
     * <p>The description of the alarm.</p>
     */
    inline void SetAlarmDescription(const Aws::String& value) { m_alarmDescriptionHasBeenSet = true; m_alarmDescription = value; }

    /**
     * <p>The description of the alarm.</p>
     */
    inline void SetAlarmDescription(Aws::String&& value) { m_alarmDescriptionHasBeenSet = true; m_alarmDescription = std::move(value); }

    /**
     * <p>The description of the alarm.</p>
     */
    inline void SetAlarmDescription(const char* value) { m_alarmDescriptionHasBeenSet = true; m_alarmDescription.assign(value); }

    /**
     * <p>The description of the alarm.</p>
     */
    inline CompositeAlarm& WithAlarmDescription(const Aws::String& value) { SetAlarmDescription(value); return *this;}

    /**
     * <p>The description of the alarm.</p>
     */
    inline CompositeAlarm& WithAlarmDescription(Aws::String&& value) { SetAlarmDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the alarm.</p>
     */
    inline CompositeAlarm& WithAlarmDescription(const char* value) { SetAlarmDescription(value); return *this;}


    /**
     * <p>The name of the alarm.</p>
     */
    inline const Aws::String& GetAlarmName() const{ return m_alarmName; }

    /**
     * <p>The name of the alarm.</p>
     */
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }

    /**
     * <p>The name of the alarm.</p>
     */
    inline void SetAlarmName(const Aws::String& value) { m_alarmNameHasBeenSet = true; m_alarmName = value; }

    /**
     * <p>The name of the alarm.</p>
     */
    inline void SetAlarmName(Aws::String&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::move(value); }

    /**
     * <p>The name of the alarm.</p>
     */
    inline void SetAlarmName(const char* value) { m_alarmNameHasBeenSet = true; m_alarmName.assign(value); }

    /**
     * <p>The name of the alarm.</p>
     */
    inline CompositeAlarm& WithAlarmName(const Aws::String& value) { SetAlarmName(value); return *this;}

    /**
     * <p>The name of the alarm.</p>
     */
    inline CompositeAlarm& WithAlarmName(Aws::String&& value) { SetAlarmName(std::move(value)); return *this;}

    /**
     * <p>The name of the alarm.</p>
     */
    inline CompositeAlarm& WithAlarmName(const char* value) { SetAlarmName(value); return *this;}


    /**
     * <p>The rule that this alarm uses to evaluate its alarm state.</p>
     */
    inline const Aws::String& GetAlarmRule() const{ return m_alarmRule; }

    /**
     * <p>The rule that this alarm uses to evaluate its alarm state.</p>
     */
    inline bool AlarmRuleHasBeenSet() const { return m_alarmRuleHasBeenSet; }

    /**
     * <p>The rule that this alarm uses to evaluate its alarm state.</p>
     */
    inline void SetAlarmRule(const Aws::String& value) { m_alarmRuleHasBeenSet = true; m_alarmRule = value; }

    /**
     * <p>The rule that this alarm uses to evaluate its alarm state.</p>
     */
    inline void SetAlarmRule(Aws::String&& value) { m_alarmRuleHasBeenSet = true; m_alarmRule = std::move(value); }

    /**
     * <p>The rule that this alarm uses to evaluate its alarm state.</p>
     */
    inline void SetAlarmRule(const char* value) { m_alarmRuleHasBeenSet = true; m_alarmRule.assign(value); }

    /**
     * <p>The rule that this alarm uses to evaluate its alarm state.</p>
     */
    inline CompositeAlarm& WithAlarmRule(const Aws::String& value) { SetAlarmRule(value); return *this;}

    /**
     * <p>The rule that this alarm uses to evaluate its alarm state.</p>
     */
    inline CompositeAlarm& WithAlarmRule(Aws::String&& value) { SetAlarmRule(std::move(value)); return *this;}

    /**
     * <p>The rule that this alarm uses to evaluate its alarm state.</p>
     */
    inline CompositeAlarm& WithAlarmRule(const char* value) { SetAlarmRule(value); return *this;}


    /**
     * <p>The actions to execute when this alarm transitions to the INSUFFICIENT_DATA
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline const Aws::Vector<Aws::String>& GetInsufficientDataActions() const{ return m_insufficientDataActions; }

    /**
     * <p>The actions to execute when this alarm transitions to the INSUFFICIENT_DATA
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline bool InsufficientDataActionsHasBeenSet() const { return m_insufficientDataActionsHasBeenSet; }

    /**
     * <p>The actions to execute when this alarm transitions to the INSUFFICIENT_DATA
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline void SetInsufficientDataActions(const Aws::Vector<Aws::String>& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions = value; }

    /**
     * <p>The actions to execute when this alarm transitions to the INSUFFICIENT_DATA
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline void SetInsufficientDataActions(Aws::Vector<Aws::String>&& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions = std::move(value); }

    /**
     * <p>The actions to execute when this alarm transitions to the INSUFFICIENT_DATA
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline CompositeAlarm& WithInsufficientDataActions(const Aws::Vector<Aws::String>& value) { SetInsufficientDataActions(value); return *this;}

    /**
     * <p>The actions to execute when this alarm transitions to the INSUFFICIENT_DATA
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline CompositeAlarm& WithInsufficientDataActions(Aws::Vector<Aws::String>&& value) { SetInsufficientDataActions(std::move(value)); return *this;}

    /**
     * <p>The actions to execute when this alarm transitions to the INSUFFICIENT_DATA
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline CompositeAlarm& AddInsufficientDataActions(const Aws::String& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions.push_back(value); return *this; }

    /**
     * <p>The actions to execute when this alarm transitions to the INSUFFICIENT_DATA
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline CompositeAlarm& AddInsufficientDataActions(Aws::String&& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions.push_back(std::move(value)); return *this; }

    /**
     * <p>The actions to execute when this alarm transitions to the INSUFFICIENT_DATA
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline CompositeAlarm& AddInsufficientDataActions(const char* value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions.push_back(value); return *this; }


    /**
     * <p>The actions to execute when this alarm transitions to the OK state from any
     * other state. Each action is specified as an Amazon Resource Name (ARN).</p>
     */
    inline const Aws::Vector<Aws::String>& GetOKActions() const{ return m_oKActions; }

    /**
     * <p>The actions to execute when this alarm transitions to the OK state from any
     * other state. Each action is specified as an Amazon Resource Name (ARN).</p>
     */
    inline bool OKActionsHasBeenSet() const { return m_oKActionsHasBeenSet; }

    /**
     * <p>The actions to execute when this alarm transitions to the OK state from any
     * other state. Each action is specified as an Amazon Resource Name (ARN).</p>
     */
    inline void SetOKActions(const Aws::Vector<Aws::String>& value) { m_oKActionsHasBeenSet = true; m_oKActions = value; }

    /**
     * <p>The actions to execute when this alarm transitions to the OK state from any
     * other state. Each action is specified as an Amazon Resource Name (ARN).</p>
     */
    inline void SetOKActions(Aws::Vector<Aws::String>&& value) { m_oKActionsHasBeenSet = true; m_oKActions = std::move(value); }

    /**
     * <p>The actions to execute when this alarm transitions to the OK state from any
     * other state. Each action is specified as an Amazon Resource Name (ARN).</p>
     */
    inline CompositeAlarm& WithOKActions(const Aws::Vector<Aws::String>& value) { SetOKActions(value); return *this;}

    /**
     * <p>The actions to execute when this alarm transitions to the OK state from any
     * other state. Each action is specified as an Amazon Resource Name (ARN).</p>
     */
    inline CompositeAlarm& WithOKActions(Aws::Vector<Aws::String>&& value) { SetOKActions(std::move(value)); return *this;}

    /**
     * <p>The actions to execute when this alarm transitions to the OK state from any
     * other state. Each action is specified as an Amazon Resource Name (ARN).</p>
     */
    inline CompositeAlarm& AddOKActions(const Aws::String& value) { m_oKActionsHasBeenSet = true; m_oKActions.push_back(value); return *this; }

    /**
     * <p>The actions to execute when this alarm transitions to the OK state from any
     * other state. Each action is specified as an Amazon Resource Name (ARN).</p>
     */
    inline CompositeAlarm& AddOKActions(Aws::String&& value) { m_oKActionsHasBeenSet = true; m_oKActions.push_back(std::move(value)); return *this; }

    /**
     * <p>The actions to execute when this alarm transitions to the OK state from any
     * other state. Each action is specified as an Amazon Resource Name (ARN).</p>
     */
    inline CompositeAlarm& AddOKActions(const char* value) { m_oKActionsHasBeenSet = true; m_oKActions.push_back(value); return *this; }


    /**
     * <p>An explanation for the alarm state, in text format.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }

    /**
     * <p>An explanation for the alarm state, in text format.</p>
     */
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }

    /**
     * <p>An explanation for the alarm state, in text format.</p>
     */
    inline void SetStateReason(const Aws::String& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }

    /**
     * <p>An explanation for the alarm state, in text format.</p>
     */
    inline void SetStateReason(Aws::String&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }

    /**
     * <p>An explanation for the alarm state, in text format.</p>
     */
    inline void SetStateReason(const char* value) { m_stateReasonHasBeenSet = true; m_stateReason.assign(value); }

    /**
     * <p>An explanation for the alarm state, in text format.</p>
     */
    inline CompositeAlarm& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}

    /**
     * <p>An explanation for the alarm state, in text format.</p>
     */
    inline CompositeAlarm& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}

    /**
     * <p>An explanation for the alarm state, in text format.</p>
     */
    inline CompositeAlarm& WithStateReason(const char* value) { SetStateReason(value); return *this;}


    /**
     * <p>An explanation for the alarm state, in JSON format.</p>
     */
    inline const Aws::String& GetStateReasonData() const{ return m_stateReasonData; }

    /**
     * <p>An explanation for the alarm state, in JSON format.</p>
     */
    inline bool StateReasonDataHasBeenSet() const { return m_stateReasonDataHasBeenSet; }

    /**
     * <p>An explanation for the alarm state, in JSON format.</p>
     */
    inline void SetStateReasonData(const Aws::String& value) { m_stateReasonDataHasBeenSet = true; m_stateReasonData = value; }

    /**
     * <p>An explanation for the alarm state, in JSON format.</p>
     */
    inline void SetStateReasonData(Aws::String&& value) { m_stateReasonDataHasBeenSet = true; m_stateReasonData = std::move(value); }

    /**
     * <p>An explanation for the alarm state, in JSON format.</p>
     */
    inline void SetStateReasonData(const char* value) { m_stateReasonDataHasBeenSet = true; m_stateReasonData.assign(value); }

    /**
     * <p>An explanation for the alarm state, in JSON format.</p>
     */
    inline CompositeAlarm& WithStateReasonData(const Aws::String& value) { SetStateReasonData(value); return *this;}

    /**
     * <p>An explanation for the alarm state, in JSON format.</p>
     */
    inline CompositeAlarm& WithStateReasonData(Aws::String&& value) { SetStateReasonData(std::move(value)); return *this;}

    /**
     * <p>An explanation for the alarm state, in JSON format.</p>
     */
    inline CompositeAlarm& WithStateReasonData(const char* value) { SetStateReasonData(value); return *this;}


    /**
     * <p>Tracks the timestamp of any state update, even if <code>StateValue</code>
     * doesn't change.</p>
     */
    inline const Aws::Utils::DateTime& GetStateUpdatedTimestamp() const{ return m_stateUpdatedTimestamp; }

    /**
     * <p>Tracks the timestamp of any state update, even if <code>StateValue</code>
     * doesn't change.</p>
     */
    inline bool StateUpdatedTimestampHasBeenSet() const { return m_stateUpdatedTimestampHasBeenSet; }

    /**
     * <p>Tracks the timestamp of any state update, even if <code>StateValue</code>
     * doesn't change.</p>
     */
    inline void SetStateUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_stateUpdatedTimestampHasBeenSet = true; m_stateUpdatedTimestamp = value; }

    /**
     * <p>Tracks the timestamp of any state update, even if <code>StateValue</code>
     * doesn't change.</p>
     */
    inline void SetStateUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_stateUpdatedTimestampHasBeenSet = true; m_stateUpdatedTimestamp = std::move(value); }

    /**
     * <p>Tracks the timestamp of any state update, even if <code>StateValue</code>
     * doesn't change.</p>
     */
    inline CompositeAlarm& WithStateUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetStateUpdatedTimestamp(value); return *this;}

    /**
     * <p>Tracks the timestamp of any state update, even if <code>StateValue</code>
     * doesn't change.</p>
     */
    inline CompositeAlarm& WithStateUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetStateUpdatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The state value for the alarm.</p>
     */
    inline const StateValue& GetStateValue() const{ return m_stateValue; }

    /**
     * <p>The state value for the alarm.</p>
     */
    inline bool StateValueHasBeenSet() const { return m_stateValueHasBeenSet; }

    /**
     * <p>The state value for the alarm.</p>
     */
    inline void SetStateValue(const StateValue& value) { m_stateValueHasBeenSet = true; m_stateValue = value; }

    /**
     * <p>The state value for the alarm.</p>
     */
    inline void SetStateValue(StateValue&& value) { m_stateValueHasBeenSet = true; m_stateValue = std::move(value); }

    /**
     * <p>The state value for the alarm.</p>
     */
    inline CompositeAlarm& WithStateValue(const StateValue& value) { SetStateValue(value); return *this;}

    /**
     * <p>The state value for the alarm.</p>
     */
    inline CompositeAlarm& WithStateValue(StateValue&& value) { SetStateValue(std::move(value)); return *this;}


    /**
     * <p> The timestamp of the last change to the alarm's <code>StateValue</code>.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetStateTransitionedTimestamp() const{ return m_stateTransitionedTimestamp; }

    /**
     * <p> The timestamp of the last change to the alarm's <code>StateValue</code>.
     * </p>
     */
    inline bool StateTransitionedTimestampHasBeenSet() const { return m_stateTransitionedTimestampHasBeenSet; }

    /**
     * <p> The timestamp of the last change to the alarm's <code>StateValue</code>.
     * </p>
     */
    inline void SetStateTransitionedTimestamp(const Aws::Utils::DateTime& value) { m_stateTransitionedTimestampHasBeenSet = true; m_stateTransitionedTimestamp = value; }

    /**
     * <p> The timestamp of the last change to the alarm's <code>StateValue</code>.
     * </p>
     */
    inline void SetStateTransitionedTimestamp(Aws::Utils::DateTime&& value) { m_stateTransitionedTimestampHasBeenSet = true; m_stateTransitionedTimestamp = std::move(value); }

    /**
     * <p> The timestamp of the last change to the alarm's <code>StateValue</code>.
     * </p>
     */
    inline CompositeAlarm& WithStateTransitionedTimestamp(const Aws::Utils::DateTime& value) { SetStateTransitionedTimestamp(value); return *this;}

    /**
     * <p> The timestamp of the last change to the alarm's <code>StateValue</code>.
     * </p>
     */
    inline CompositeAlarm& WithStateTransitionedTimestamp(Aws::Utils::DateTime&& value) { SetStateTransitionedTimestamp(std::move(value)); return *this;}


    /**
     * <p> When the value is <code>ALARM</code>, it means that the actions are
     * suppressed because the suppressor alarm is in <code>ALARM</code> When the value
     * is <code>WaitPeriod</code>, it means that the actions are suppressed because the
     * composite alarm is waiting for the suppressor alarm to go into into the
     * <code>ALARM</code> state. The maximum waiting time is as specified in
     * <code>ActionsSuppressorWaitPeriod</code>. After this time, the composite alarm
     * performs its actions. When the value is <code>ExtensionPeriod</code>, it means
     * that the actions are suppressed because the composite alarm is waiting after the
     * suppressor alarm went out of the <code>ALARM</code> state. The maximum waiting
     * time is as specified in <code>ActionsSuppressorExtensionPeriod</code>. After
     * this time, the composite alarm performs its actions. </p>
     */
    inline const ActionsSuppressedBy& GetActionsSuppressedBy() const{ return m_actionsSuppressedBy; }

    /**
     * <p> When the value is <code>ALARM</code>, it means that the actions are
     * suppressed because the suppressor alarm is in <code>ALARM</code> When the value
     * is <code>WaitPeriod</code>, it means that the actions are suppressed because the
     * composite alarm is waiting for the suppressor alarm to go into into the
     * <code>ALARM</code> state. The maximum waiting time is as specified in
     * <code>ActionsSuppressorWaitPeriod</code>. After this time, the composite alarm
     * performs its actions. When the value is <code>ExtensionPeriod</code>, it means
     * that the actions are suppressed because the composite alarm is waiting after the
     * suppressor alarm went out of the <code>ALARM</code> state. The maximum waiting
     * time is as specified in <code>ActionsSuppressorExtensionPeriod</code>. After
     * this time, the composite alarm performs its actions. </p>
     */
    inline bool ActionsSuppressedByHasBeenSet() const { return m_actionsSuppressedByHasBeenSet; }

    /**
     * <p> When the value is <code>ALARM</code>, it means that the actions are
     * suppressed because the suppressor alarm is in <code>ALARM</code> When the value
     * is <code>WaitPeriod</code>, it means that the actions are suppressed because the
     * composite alarm is waiting for the suppressor alarm to go into into the
     * <code>ALARM</code> state. The maximum waiting time is as specified in
     * <code>ActionsSuppressorWaitPeriod</code>. After this time, the composite alarm
     * performs its actions. When the value is <code>ExtensionPeriod</code>, it means
     * that the actions are suppressed because the composite alarm is waiting after the
     * suppressor alarm went out of the <code>ALARM</code> state. The maximum waiting
     * time is as specified in <code>ActionsSuppressorExtensionPeriod</code>. After
     * this time, the composite alarm performs its actions. </p>
     */
    inline void SetActionsSuppressedBy(const ActionsSuppressedBy& value) { m_actionsSuppressedByHasBeenSet = true; m_actionsSuppressedBy = value; }

    /**
     * <p> When the value is <code>ALARM</code>, it means that the actions are
     * suppressed because the suppressor alarm is in <code>ALARM</code> When the value
     * is <code>WaitPeriod</code>, it means that the actions are suppressed because the
     * composite alarm is waiting for the suppressor alarm to go into into the
     * <code>ALARM</code> state. The maximum waiting time is as specified in
     * <code>ActionsSuppressorWaitPeriod</code>. After this time, the composite alarm
     * performs its actions. When the value is <code>ExtensionPeriod</code>, it means
     * that the actions are suppressed because the composite alarm is waiting after the
     * suppressor alarm went out of the <code>ALARM</code> state. The maximum waiting
     * time is as specified in <code>ActionsSuppressorExtensionPeriod</code>. After
     * this time, the composite alarm performs its actions. </p>
     */
    inline void SetActionsSuppressedBy(ActionsSuppressedBy&& value) { m_actionsSuppressedByHasBeenSet = true; m_actionsSuppressedBy = std::move(value); }

    /**
     * <p> When the value is <code>ALARM</code>, it means that the actions are
     * suppressed because the suppressor alarm is in <code>ALARM</code> When the value
     * is <code>WaitPeriod</code>, it means that the actions are suppressed because the
     * composite alarm is waiting for the suppressor alarm to go into into the
     * <code>ALARM</code> state. The maximum waiting time is as specified in
     * <code>ActionsSuppressorWaitPeriod</code>. After this time, the composite alarm
     * performs its actions. When the value is <code>ExtensionPeriod</code>, it means
     * that the actions are suppressed because the composite alarm is waiting after the
     * suppressor alarm went out of the <code>ALARM</code> state. The maximum waiting
     * time is as specified in <code>ActionsSuppressorExtensionPeriod</code>. After
     * this time, the composite alarm performs its actions. </p>
     */
    inline CompositeAlarm& WithActionsSuppressedBy(const ActionsSuppressedBy& value) { SetActionsSuppressedBy(value); return *this;}

    /**
     * <p> When the value is <code>ALARM</code>, it means that the actions are
     * suppressed because the suppressor alarm is in <code>ALARM</code> When the value
     * is <code>WaitPeriod</code>, it means that the actions are suppressed because the
     * composite alarm is waiting for the suppressor alarm to go into into the
     * <code>ALARM</code> state. The maximum waiting time is as specified in
     * <code>ActionsSuppressorWaitPeriod</code>. After this time, the composite alarm
     * performs its actions. When the value is <code>ExtensionPeriod</code>, it means
     * that the actions are suppressed because the composite alarm is waiting after the
     * suppressor alarm went out of the <code>ALARM</code> state. The maximum waiting
     * time is as specified in <code>ActionsSuppressorExtensionPeriod</code>. After
     * this time, the composite alarm performs its actions. </p>
     */
    inline CompositeAlarm& WithActionsSuppressedBy(ActionsSuppressedBy&& value) { SetActionsSuppressedBy(std::move(value)); return *this;}


    /**
     * <p> Captures the reason for action suppression. </p>
     */
    inline const Aws::String& GetActionsSuppressedReason() const{ return m_actionsSuppressedReason; }

    /**
     * <p> Captures the reason for action suppression. </p>
     */
    inline bool ActionsSuppressedReasonHasBeenSet() const { return m_actionsSuppressedReasonHasBeenSet; }

    /**
     * <p> Captures the reason for action suppression. </p>
     */
    inline void SetActionsSuppressedReason(const Aws::String& value) { m_actionsSuppressedReasonHasBeenSet = true; m_actionsSuppressedReason = value; }

    /**
     * <p> Captures the reason for action suppression. </p>
     */
    inline void SetActionsSuppressedReason(Aws::String&& value) { m_actionsSuppressedReasonHasBeenSet = true; m_actionsSuppressedReason = std::move(value); }

    /**
     * <p> Captures the reason for action suppression. </p>
     */
    inline void SetActionsSuppressedReason(const char* value) { m_actionsSuppressedReasonHasBeenSet = true; m_actionsSuppressedReason.assign(value); }

    /**
     * <p> Captures the reason for action suppression. </p>
     */
    inline CompositeAlarm& WithActionsSuppressedReason(const Aws::String& value) { SetActionsSuppressedReason(value); return *this;}

    /**
     * <p> Captures the reason for action suppression. </p>
     */
    inline CompositeAlarm& WithActionsSuppressedReason(Aws::String&& value) { SetActionsSuppressedReason(std::move(value)); return *this;}

    /**
     * <p> Captures the reason for action suppression. </p>
     */
    inline CompositeAlarm& WithActionsSuppressedReason(const char* value) { SetActionsSuppressedReason(value); return *this;}


    /**
     * <p> Actions will be suppressed if the suppressor alarm is in the
     * <code>ALARM</code> state. <code>ActionsSuppressor</code> can be an AlarmName or
     * an Amazon Resource Name (ARN) from an existing alarm. </p>
     */
    inline const Aws::String& GetActionsSuppressor() const{ return m_actionsSuppressor; }

    /**
     * <p> Actions will be suppressed if the suppressor alarm is in the
     * <code>ALARM</code> state. <code>ActionsSuppressor</code> can be an AlarmName or
     * an Amazon Resource Name (ARN) from an existing alarm. </p>
     */
    inline bool ActionsSuppressorHasBeenSet() const { return m_actionsSuppressorHasBeenSet; }

    /**
     * <p> Actions will be suppressed if the suppressor alarm is in the
     * <code>ALARM</code> state. <code>ActionsSuppressor</code> can be an AlarmName or
     * an Amazon Resource Name (ARN) from an existing alarm. </p>
     */
    inline void SetActionsSuppressor(const Aws::String& value) { m_actionsSuppressorHasBeenSet = true; m_actionsSuppressor = value; }

    /**
     * <p> Actions will be suppressed if the suppressor alarm is in the
     * <code>ALARM</code> state. <code>ActionsSuppressor</code> can be an AlarmName or
     * an Amazon Resource Name (ARN) from an existing alarm. </p>
     */
    inline void SetActionsSuppressor(Aws::String&& value) { m_actionsSuppressorHasBeenSet = true; m_actionsSuppressor = std::move(value); }

    /**
     * <p> Actions will be suppressed if the suppressor alarm is in the
     * <code>ALARM</code> state. <code>ActionsSuppressor</code> can be an AlarmName or
     * an Amazon Resource Name (ARN) from an existing alarm. </p>
     */
    inline void SetActionsSuppressor(const char* value) { m_actionsSuppressorHasBeenSet = true; m_actionsSuppressor.assign(value); }

    /**
     * <p> Actions will be suppressed if the suppressor alarm is in the
     * <code>ALARM</code> state. <code>ActionsSuppressor</code> can be an AlarmName or
     * an Amazon Resource Name (ARN) from an existing alarm. </p>
     */
    inline CompositeAlarm& WithActionsSuppressor(const Aws::String& value) { SetActionsSuppressor(value); return *this;}

    /**
     * <p> Actions will be suppressed if the suppressor alarm is in the
     * <code>ALARM</code> state. <code>ActionsSuppressor</code> can be an AlarmName or
     * an Amazon Resource Name (ARN) from an existing alarm. </p>
     */
    inline CompositeAlarm& WithActionsSuppressor(Aws::String&& value) { SetActionsSuppressor(std::move(value)); return *this;}

    /**
     * <p> Actions will be suppressed if the suppressor alarm is in the
     * <code>ALARM</code> state. <code>ActionsSuppressor</code> can be an AlarmName or
     * an Amazon Resource Name (ARN) from an existing alarm. </p>
     */
    inline CompositeAlarm& WithActionsSuppressor(const char* value) { SetActionsSuppressor(value); return *this;}


    /**
     * <p> The maximum time in seconds that the composite alarm waits for the
     * suppressor alarm to go into the <code>ALARM</code> state. After this time, the
     * composite alarm performs its actions. </p>  <p>
     * <code>WaitPeriod</code> is required only when <code>ActionsSuppressor</code> is
     * specified. </p> 
     */
    inline int GetActionsSuppressorWaitPeriod() const{ return m_actionsSuppressorWaitPeriod; }

    /**
     * <p> The maximum time in seconds that the composite alarm waits for the
     * suppressor alarm to go into the <code>ALARM</code> state. After this time, the
     * composite alarm performs its actions. </p>  <p>
     * <code>WaitPeriod</code> is required only when <code>ActionsSuppressor</code> is
     * specified. </p> 
     */
    inline bool ActionsSuppressorWaitPeriodHasBeenSet() const { return m_actionsSuppressorWaitPeriodHasBeenSet; }

    /**
     * <p> The maximum time in seconds that the composite alarm waits for the
     * suppressor alarm to go into the <code>ALARM</code> state. After this time, the
     * composite alarm performs its actions. </p>  <p>
     * <code>WaitPeriod</code> is required only when <code>ActionsSuppressor</code> is
     * specified. </p> 
     */
    inline void SetActionsSuppressorWaitPeriod(int value) { m_actionsSuppressorWaitPeriodHasBeenSet = true; m_actionsSuppressorWaitPeriod = value; }

    /**
     * <p> The maximum time in seconds that the composite alarm waits for the
     * suppressor alarm to go into the <code>ALARM</code> state. After this time, the
     * composite alarm performs its actions. </p>  <p>
     * <code>WaitPeriod</code> is required only when <code>ActionsSuppressor</code> is
     * specified. </p> 
     */
    inline CompositeAlarm& WithActionsSuppressorWaitPeriod(int value) { SetActionsSuppressorWaitPeriod(value); return *this;}


    /**
     * <p> The maximum time in seconds that the composite alarm waits after suppressor
     * alarm goes out of the <code>ALARM</code> state. After this time, the composite
     * alarm performs its actions. </p>  <p> <code>ExtensionPeriod</code> is
     * required only when <code>ActionsSuppressor</code> is specified. </p>
     * 
     */
    inline int GetActionsSuppressorExtensionPeriod() const{ return m_actionsSuppressorExtensionPeriod; }

    /**
     * <p> The maximum time in seconds that the composite alarm waits after suppressor
     * alarm goes out of the <code>ALARM</code> state. After this time, the composite
     * alarm performs its actions. </p>  <p> <code>ExtensionPeriod</code> is
     * required only when <code>ActionsSuppressor</code> is specified. </p>
     * 
     */
    inline bool ActionsSuppressorExtensionPeriodHasBeenSet() const { return m_actionsSuppressorExtensionPeriodHasBeenSet; }

    /**
     * <p> The maximum time in seconds that the composite alarm waits after suppressor
     * alarm goes out of the <code>ALARM</code> state. After this time, the composite
     * alarm performs its actions. </p>  <p> <code>ExtensionPeriod</code> is
     * required only when <code>ActionsSuppressor</code> is specified. </p>
     * 
     */
    inline void SetActionsSuppressorExtensionPeriod(int value) { m_actionsSuppressorExtensionPeriodHasBeenSet = true; m_actionsSuppressorExtensionPeriod = value; }

    /**
     * <p> The maximum time in seconds that the composite alarm waits after suppressor
     * alarm goes out of the <code>ALARM</code> state. After this time, the composite
     * alarm performs its actions. </p>  <p> <code>ExtensionPeriod</code> is
     * required only when <code>ActionsSuppressor</code> is specified. </p>
     * 
     */
    inline CompositeAlarm& WithActionsSuppressorExtensionPeriod(int value) { SetActionsSuppressorExtensionPeriod(value); return *this;}

  private:

    bool m_actionsEnabled;
    bool m_actionsEnabledHasBeenSet = false;

    Aws::Vector<Aws::String> m_alarmActions;
    bool m_alarmActionsHasBeenSet = false;

    Aws::String m_alarmArn;
    bool m_alarmArnHasBeenSet = false;

    Aws::Utils::DateTime m_alarmConfigurationUpdatedTimestamp;
    bool m_alarmConfigurationUpdatedTimestampHasBeenSet = false;

    Aws::String m_alarmDescription;
    bool m_alarmDescriptionHasBeenSet = false;

    Aws::String m_alarmName;
    bool m_alarmNameHasBeenSet = false;

    Aws::String m_alarmRule;
    bool m_alarmRuleHasBeenSet = false;

    Aws::Vector<Aws::String> m_insufficientDataActions;
    bool m_insufficientDataActionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_oKActions;
    bool m_oKActionsHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::String m_stateReasonData;
    bool m_stateReasonDataHasBeenSet = false;

    Aws::Utils::DateTime m_stateUpdatedTimestamp;
    bool m_stateUpdatedTimestampHasBeenSet = false;

    StateValue m_stateValue;
    bool m_stateValueHasBeenSet = false;

    Aws::Utils::DateTime m_stateTransitionedTimestamp;
    bool m_stateTransitionedTimestampHasBeenSet = false;

    ActionsSuppressedBy m_actionsSuppressedBy;
    bool m_actionsSuppressedByHasBeenSet = false;

    Aws::String m_actionsSuppressedReason;
    bool m_actionsSuppressedReasonHasBeenSet = false;

    Aws::String m_actionsSuppressor;
    bool m_actionsSuppressorHasBeenSet = false;

    int m_actionsSuppressorWaitPeriod;
    bool m_actionsSuppressorWaitPeriodHasBeenSet = false;

    int m_actionsSuppressorExtensionPeriod;
    bool m_actionsSuppressorExtensionPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
