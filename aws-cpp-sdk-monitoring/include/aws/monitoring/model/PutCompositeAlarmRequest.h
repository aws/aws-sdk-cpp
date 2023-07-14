﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCH_API PutCompositeAlarmRequest : public CloudWatchRequest
  {
  public:
    PutCompositeAlarmRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutCompositeAlarm"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Indicates whether actions should be executed during any changes to the alarm
     * state of the composite alarm. The default is <code>TRUE</code>.</p>
     */
    inline bool GetActionsEnabled() const{ return m_actionsEnabled; }

    /**
     * <p>Indicates whether actions should be executed during any changes to the alarm
     * state of the composite alarm. The default is <code>TRUE</code>.</p>
     */
    inline bool ActionsEnabledHasBeenSet() const { return m_actionsEnabledHasBeenSet; }

    /**
     * <p>Indicates whether actions should be executed during any changes to the alarm
     * state of the composite alarm. The default is <code>TRUE</code>.</p>
     */
    inline void SetActionsEnabled(bool value) { m_actionsEnabledHasBeenSet = true; m_actionsEnabled = value; }

    /**
     * <p>Indicates whether actions should be executed during any changes to the alarm
     * state of the composite alarm. The default is <code>TRUE</code>.</p>
     */
    inline PutCompositeAlarmRequest& WithActionsEnabled(bool value) { SetActionsEnabled(value); return *this;}


    /**
     * <p>The actions to execute when this alarm transitions to the <code>ALARM</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * | <code>arn:aws:ssm:<i>region</i>:<i>account-id</i>:opsitem:<i>severity</i>
     * </code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetAlarmActions() const{ return m_alarmActions; }

    /**
     * <p>The actions to execute when this alarm transitions to the <code>ALARM</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * | <code>arn:aws:ssm:<i>region</i>:<i>account-id</i>:opsitem:<i>severity</i>
     * </code> </p>
     */
    inline bool AlarmActionsHasBeenSet() const { return m_alarmActionsHasBeenSet; }

    /**
     * <p>The actions to execute when this alarm transitions to the <code>ALARM</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * | <code>arn:aws:ssm:<i>region</i>:<i>account-id</i>:opsitem:<i>severity</i>
     * </code> </p>
     */
    inline void SetAlarmActions(const Aws::Vector<Aws::String>& value) { m_alarmActionsHasBeenSet = true; m_alarmActions = value; }

    /**
     * <p>The actions to execute when this alarm transitions to the <code>ALARM</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * | <code>arn:aws:ssm:<i>region</i>:<i>account-id</i>:opsitem:<i>severity</i>
     * </code> </p>
     */
    inline void SetAlarmActions(Aws::Vector<Aws::String>&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions = std::move(value); }

    /**
     * <p>The actions to execute when this alarm transitions to the <code>ALARM</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * | <code>arn:aws:ssm:<i>region</i>:<i>account-id</i>:opsitem:<i>severity</i>
     * </code> </p>
     */
    inline PutCompositeAlarmRequest& WithAlarmActions(const Aws::Vector<Aws::String>& value) { SetAlarmActions(value); return *this;}

    /**
     * <p>The actions to execute when this alarm transitions to the <code>ALARM</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * | <code>arn:aws:ssm:<i>region</i>:<i>account-id</i>:opsitem:<i>severity</i>
     * </code> </p>
     */
    inline PutCompositeAlarmRequest& WithAlarmActions(Aws::Vector<Aws::String>&& value) { SetAlarmActions(std::move(value)); return *this;}

    /**
     * <p>The actions to execute when this alarm transitions to the <code>ALARM</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * | <code>arn:aws:ssm:<i>region</i>:<i>account-id</i>:opsitem:<i>severity</i>
     * </code> </p>
     */
    inline PutCompositeAlarmRequest& AddAlarmActions(const Aws::String& value) { m_alarmActionsHasBeenSet = true; m_alarmActions.push_back(value); return *this; }

    /**
     * <p>The actions to execute when this alarm transitions to the <code>ALARM</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * | <code>arn:aws:ssm:<i>region</i>:<i>account-id</i>:opsitem:<i>severity</i>
     * </code> </p>
     */
    inline PutCompositeAlarmRequest& AddAlarmActions(Aws::String&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions.push_back(std::move(value)); return *this; }

    /**
     * <p>The actions to execute when this alarm transitions to the <code>ALARM</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * | <code>arn:aws:ssm:<i>region</i>:<i>account-id</i>:opsitem:<i>severity</i>
     * </code> </p>
     */
    inline PutCompositeAlarmRequest& AddAlarmActions(const char* value) { m_alarmActionsHasBeenSet = true; m_alarmActions.push_back(value); return *this; }


    /**
     * <p>The description for the composite alarm.</p>
     */
    inline const Aws::String& GetAlarmDescription() const{ return m_alarmDescription; }

    /**
     * <p>The description for the composite alarm.</p>
     */
    inline bool AlarmDescriptionHasBeenSet() const { return m_alarmDescriptionHasBeenSet; }

    /**
     * <p>The description for the composite alarm.</p>
     */
    inline void SetAlarmDescription(const Aws::String& value) { m_alarmDescriptionHasBeenSet = true; m_alarmDescription = value; }

    /**
     * <p>The description for the composite alarm.</p>
     */
    inline void SetAlarmDescription(Aws::String&& value) { m_alarmDescriptionHasBeenSet = true; m_alarmDescription = std::move(value); }

    /**
     * <p>The description for the composite alarm.</p>
     */
    inline void SetAlarmDescription(const char* value) { m_alarmDescriptionHasBeenSet = true; m_alarmDescription.assign(value); }

    /**
     * <p>The description for the composite alarm.</p>
     */
    inline PutCompositeAlarmRequest& WithAlarmDescription(const Aws::String& value) { SetAlarmDescription(value); return *this;}

    /**
     * <p>The description for the composite alarm.</p>
     */
    inline PutCompositeAlarmRequest& WithAlarmDescription(Aws::String&& value) { SetAlarmDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the composite alarm.</p>
     */
    inline PutCompositeAlarmRequest& WithAlarmDescription(const char* value) { SetAlarmDescription(value); return *this;}


    /**
     * <p>The name for the composite alarm. This name must be unique within the
     * Region.</p>
     */
    inline const Aws::String& GetAlarmName() const{ return m_alarmName; }

    /**
     * <p>The name for the composite alarm. This name must be unique within the
     * Region.</p>
     */
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }

    /**
     * <p>The name for the composite alarm. This name must be unique within the
     * Region.</p>
     */
    inline void SetAlarmName(const Aws::String& value) { m_alarmNameHasBeenSet = true; m_alarmName = value; }

    /**
     * <p>The name for the composite alarm. This name must be unique within the
     * Region.</p>
     */
    inline void SetAlarmName(Aws::String&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::move(value); }

    /**
     * <p>The name for the composite alarm. This name must be unique within the
     * Region.</p>
     */
    inline void SetAlarmName(const char* value) { m_alarmNameHasBeenSet = true; m_alarmName.assign(value); }

    /**
     * <p>The name for the composite alarm. This name must be unique within the
     * Region.</p>
     */
    inline PutCompositeAlarmRequest& WithAlarmName(const Aws::String& value) { SetAlarmName(value); return *this;}

    /**
     * <p>The name for the composite alarm. This name must be unique within the
     * Region.</p>
     */
    inline PutCompositeAlarmRequest& WithAlarmName(Aws::String&& value) { SetAlarmName(std::move(value)); return *this;}

    /**
     * <p>The name for the composite alarm. This name must be unique within the
     * Region.</p>
     */
    inline PutCompositeAlarmRequest& WithAlarmName(const char* value) { SetAlarmName(value); return *this;}


    /**
     * <p>An expression that specifies which other alarms are to be evaluated to
     * determine this composite alarm's state. For each alarm that you reference, you
     * designate a function that specifies whether that alarm needs to be in ALARM
     * state, OK state, or INSUFFICIENT_DATA state. You can use operators (AND, OR and
     * NOT) to combine multiple functions in a single expression. You can use
     * parenthesis to logically group the functions in your expression.</p> <p>You can
     * use either alarm names or ARNs to reference the other alarms that are to be
     * evaluated.</p> <p>Functions can include the following:</p> <ul> <li> <p>
     * <code>ALARM("<i>alarm-name</i> or <i>alarm-ARN</i>")</code> is TRUE if the named
     * alarm is in ALARM state.</p> </li> <li> <p> <code>OK("<i>alarm-name</i> or
     * <i>alarm-ARN</i>")</code> is TRUE if the named alarm is in OK state.</p> </li>
     * <li> <p> <code>INSUFFICIENT_DATA("<i>alarm-name</i> or <i>alarm-ARN</i>")</code>
     * is TRUE if the named alarm is in INSUFFICIENT_DATA state.</p> </li> <li> <p>
     * <code>TRUE</code> always evaluates to TRUE.</p> </li> <li> <p>
     * <code>FALSE</code> always evaluates to FALSE.</p> </li> </ul> <p>TRUE and FALSE
     * are useful for testing a complex <code>AlarmRule</code> structure, and for
     * testing your alarm actions.</p> <p>Alarm names specified in
     * <code>AlarmRule</code> can be surrounded with double-quotes ("), but do not have
     * to be.</p> <p>The following are some examples of <code>AlarmRule</code>:</p>
     * <ul> <li> <p> <code>ALARM(CPUUtilizationTooHigh) AND
     * ALARM(DiskReadOpsTooHigh)</code> specifies that the composite alarm goes into
     * ALARM state only if both CPUUtilizationTooHigh and DiskReadOpsTooHigh alarms are
     * in ALARM state.</p> </li> <li> <p> <code>ALARM(CPUUtilizationTooHigh) AND NOT
     * ALARM(DeploymentInProgress)</code> specifies that the alarm goes to ALARM state
     * if CPUUtilizationTooHigh is in ALARM state and DeploymentInProgress is not in
     * ALARM state. This example reduces alarm noise during a known deployment
     * window.</p> </li> <li> <p> <code>(ALARM(CPUUtilizationTooHigh) OR
     * ALARM(DiskReadOpsTooHigh)) AND OK(NetworkOutTooHigh)</code> goes into ALARM
     * state if CPUUtilizationTooHigh OR DiskReadOpsTooHigh is in ALARM state, and if
     * NetworkOutTooHigh is in OK state. This provides another example of using a
     * composite alarm to prevent noise. This rule ensures that you are not notified
     * with an alarm action on high CPU or disk usage if a known network problem is
     * also occurring.</p> </li> </ul> <p>The <code>AlarmRule</code> can specify as
     * many as 100 "children" alarms. The <code>AlarmRule</code> expression can have as
     * many as 500 elements. Elements are child alarms, TRUE or FALSE statements, and
     * parentheses.</p>
     */
    inline const Aws::String& GetAlarmRule() const{ return m_alarmRule; }

    /**
     * <p>An expression that specifies which other alarms are to be evaluated to
     * determine this composite alarm's state. For each alarm that you reference, you
     * designate a function that specifies whether that alarm needs to be in ALARM
     * state, OK state, or INSUFFICIENT_DATA state. You can use operators (AND, OR and
     * NOT) to combine multiple functions in a single expression. You can use
     * parenthesis to logically group the functions in your expression.</p> <p>You can
     * use either alarm names or ARNs to reference the other alarms that are to be
     * evaluated.</p> <p>Functions can include the following:</p> <ul> <li> <p>
     * <code>ALARM("<i>alarm-name</i> or <i>alarm-ARN</i>")</code> is TRUE if the named
     * alarm is in ALARM state.</p> </li> <li> <p> <code>OK("<i>alarm-name</i> or
     * <i>alarm-ARN</i>")</code> is TRUE if the named alarm is in OK state.</p> </li>
     * <li> <p> <code>INSUFFICIENT_DATA("<i>alarm-name</i> or <i>alarm-ARN</i>")</code>
     * is TRUE if the named alarm is in INSUFFICIENT_DATA state.</p> </li> <li> <p>
     * <code>TRUE</code> always evaluates to TRUE.</p> </li> <li> <p>
     * <code>FALSE</code> always evaluates to FALSE.</p> </li> </ul> <p>TRUE and FALSE
     * are useful for testing a complex <code>AlarmRule</code> structure, and for
     * testing your alarm actions.</p> <p>Alarm names specified in
     * <code>AlarmRule</code> can be surrounded with double-quotes ("), but do not have
     * to be.</p> <p>The following are some examples of <code>AlarmRule</code>:</p>
     * <ul> <li> <p> <code>ALARM(CPUUtilizationTooHigh) AND
     * ALARM(DiskReadOpsTooHigh)</code> specifies that the composite alarm goes into
     * ALARM state only if both CPUUtilizationTooHigh and DiskReadOpsTooHigh alarms are
     * in ALARM state.</p> </li> <li> <p> <code>ALARM(CPUUtilizationTooHigh) AND NOT
     * ALARM(DeploymentInProgress)</code> specifies that the alarm goes to ALARM state
     * if CPUUtilizationTooHigh is in ALARM state and DeploymentInProgress is not in
     * ALARM state. This example reduces alarm noise during a known deployment
     * window.</p> </li> <li> <p> <code>(ALARM(CPUUtilizationTooHigh) OR
     * ALARM(DiskReadOpsTooHigh)) AND OK(NetworkOutTooHigh)</code> goes into ALARM
     * state if CPUUtilizationTooHigh OR DiskReadOpsTooHigh is in ALARM state, and if
     * NetworkOutTooHigh is in OK state. This provides another example of using a
     * composite alarm to prevent noise. This rule ensures that you are not notified
     * with an alarm action on high CPU or disk usage if a known network problem is
     * also occurring.</p> </li> </ul> <p>The <code>AlarmRule</code> can specify as
     * many as 100 "children" alarms. The <code>AlarmRule</code> expression can have as
     * many as 500 elements. Elements are child alarms, TRUE or FALSE statements, and
     * parentheses.</p>
     */
    inline bool AlarmRuleHasBeenSet() const { return m_alarmRuleHasBeenSet; }

    /**
     * <p>An expression that specifies which other alarms are to be evaluated to
     * determine this composite alarm's state. For each alarm that you reference, you
     * designate a function that specifies whether that alarm needs to be in ALARM
     * state, OK state, or INSUFFICIENT_DATA state. You can use operators (AND, OR and
     * NOT) to combine multiple functions in a single expression. You can use
     * parenthesis to logically group the functions in your expression.</p> <p>You can
     * use either alarm names or ARNs to reference the other alarms that are to be
     * evaluated.</p> <p>Functions can include the following:</p> <ul> <li> <p>
     * <code>ALARM("<i>alarm-name</i> or <i>alarm-ARN</i>")</code> is TRUE if the named
     * alarm is in ALARM state.</p> </li> <li> <p> <code>OK("<i>alarm-name</i> or
     * <i>alarm-ARN</i>")</code> is TRUE if the named alarm is in OK state.</p> </li>
     * <li> <p> <code>INSUFFICIENT_DATA("<i>alarm-name</i> or <i>alarm-ARN</i>")</code>
     * is TRUE if the named alarm is in INSUFFICIENT_DATA state.</p> </li> <li> <p>
     * <code>TRUE</code> always evaluates to TRUE.</p> </li> <li> <p>
     * <code>FALSE</code> always evaluates to FALSE.</p> </li> </ul> <p>TRUE and FALSE
     * are useful for testing a complex <code>AlarmRule</code> structure, and for
     * testing your alarm actions.</p> <p>Alarm names specified in
     * <code>AlarmRule</code> can be surrounded with double-quotes ("), but do not have
     * to be.</p> <p>The following are some examples of <code>AlarmRule</code>:</p>
     * <ul> <li> <p> <code>ALARM(CPUUtilizationTooHigh) AND
     * ALARM(DiskReadOpsTooHigh)</code> specifies that the composite alarm goes into
     * ALARM state only if both CPUUtilizationTooHigh and DiskReadOpsTooHigh alarms are
     * in ALARM state.</p> </li> <li> <p> <code>ALARM(CPUUtilizationTooHigh) AND NOT
     * ALARM(DeploymentInProgress)</code> specifies that the alarm goes to ALARM state
     * if CPUUtilizationTooHigh is in ALARM state and DeploymentInProgress is not in
     * ALARM state. This example reduces alarm noise during a known deployment
     * window.</p> </li> <li> <p> <code>(ALARM(CPUUtilizationTooHigh) OR
     * ALARM(DiskReadOpsTooHigh)) AND OK(NetworkOutTooHigh)</code> goes into ALARM
     * state if CPUUtilizationTooHigh OR DiskReadOpsTooHigh is in ALARM state, and if
     * NetworkOutTooHigh is in OK state. This provides another example of using a
     * composite alarm to prevent noise. This rule ensures that you are not notified
     * with an alarm action on high CPU or disk usage if a known network problem is
     * also occurring.</p> </li> </ul> <p>The <code>AlarmRule</code> can specify as
     * many as 100 "children" alarms. The <code>AlarmRule</code> expression can have as
     * many as 500 elements. Elements are child alarms, TRUE or FALSE statements, and
     * parentheses.</p>
     */
    inline void SetAlarmRule(const Aws::String& value) { m_alarmRuleHasBeenSet = true; m_alarmRule = value; }

    /**
     * <p>An expression that specifies which other alarms are to be evaluated to
     * determine this composite alarm's state. For each alarm that you reference, you
     * designate a function that specifies whether that alarm needs to be in ALARM
     * state, OK state, or INSUFFICIENT_DATA state. You can use operators (AND, OR and
     * NOT) to combine multiple functions in a single expression. You can use
     * parenthesis to logically group the functions in your expression.</p> <p>You can
     * use either alarm names or ARNs to reference the other alarms that are to be
     * evaluated.</p> <p>Functions can include the following:</p> <ul> <li> <p>
     * <code>ALARM("<i>alarm-name</i> or <i>alarm-ARN</i>")</code> is TRUE if the named
     * alarm is in ALARM state.</p> </li> <li> <p> <code>OK("<i>alarm-name</i> or
     * <i>alarm-ARN</i>")</code> is TRUE if the named alarm is in OK state.</p> </li>
     * <li> <p> <code>INSUFFICIENT_DATA("<i>alarm-name</i> or <i>alarm-ARN</i>")</code>
     * is TRUE if the named alarm is in INSUFFICIENT_DATA state.</p> </li> <li> <p>
     * <code>TRUE</code> always evaluates to TRUE.</p> </li> <li> <p>
     * <code>FALSE</code> always evaluates to FALSE.</p> </li> </ul> <p>TRUE and FALSE
     * are useful for testing a complex <code>AlarmRule</code> structure, and for
     * testing your alarm actions.</p> <p>Alarm names specified in
     * <code>AlarmRule</code> can be surrounded with double-quotes ("), but do not have
     * to be.</p> <p>The following are some examples of <code>AlarmRule</code>:</p>
     * <ul> <li> <p> <code>ALARM(CPUUtilizationTooHigh) AND
     * ALARM(DiskReadOpsTooHigh)</code> specifies that the composite alarm goes into
     * ALARM state only if both CPUUtilizationTooHigh and DiskReadOpsTooHigh alarms are
     * in ALARM state.</p> </li> <li> <p> <code>ALARM(CPUUtilizationTooHigh) AND NOT
     * ALARM(DeploymentInProgress)</code> specifies that the alarm goes to ALARM state
     * if CPUUtilizationTooHigh is in ALARM state and DeploymentInProgress is not in
     * ALARM state. This example reduces alarm noise during a known deployment
     * window.</p> </li> <li> <p> <code>(ALARM(CPUUtilizationTooHigh) OR
     * ALARM(DiskReadOpsTooHigh)) AND OK(NetworkOutTooHigh)</code> goes into ALARM
     * state if CPUUtilizationTooHigh OR DiskReadOpsTooHigh is in ALARM state, and if
     * NetworkOutTooHigh is in OK state. This provides another example of using a
     * composite alarm to prevent noise. This rule ensures that you are not notified
     * with an alarm action on high CPU or disk usage if a known network problem is
     * also occurring.</p> </li> </ul> <p>The <code>AlarmRule</code> can specify as
     * many as 100 "children" alarms. The <code>AlarmRule</code> expression can have as
     * many as 500 elements. Elements are child alarms, TRUE or FALSE statements, and
     * parentheses.</p>
     */
    inline void SetAlarmRule(Aws::String&& value) { m_alarmRuleHasBeenSet = true; m_alarmRule = std::move(value); }

    /**
     * <p>An expression that specifies which other alarms are to be evaluated to
     * determine this composite alarm's state. For each alarm that you reference, you
     * designate a function that specifies whether that alarm needs to be in ALARM
     * state, OK state, or INSUFFICIENT_DATA state. You can use operators (AND, OR and
     * NOT) to combine multiple functions in a single expression. You can use
     * parenthesis to logically group the functions in your expression.</p> <p>You can
     * use either alarm names or ARNs to reference the other alarms that are to be
     * evaluated.</p> <p>Functions can include the following:</p> <ul> <li> <p>
     * <code>ALARM("<i>alarm-name</i> or <i>alarm-ARN</i>")</code> is TRUE if the named
     * alarm is in ALARM state.</p> </li> <li> <p> <code>OK("<i>alarm-name</i> or
     * <i>alarm-ARN</i>")</code> is TRUE if the named alarm is in OK state.</p> </li>
     * <li> <p> <code>INSUFFICIENT_DATA("<i>alarm-name</i> or <i>alarm-ARN</i>")</code>
     * is TRUE if the named alarm is in INSUFFICIENT_DATA state.</p> </li> <li> <p>
     * <code>TRUE</code> always evaluates to TRUE.</p> </li> <li> <p>
     * <code>FALSE</code> always evaluates to FALSE.</p> </li> </ul> <p>TRUE and FALSE
     * are useful for testing a complex <code>AlarmRule</code> structure, and for
     * testing your alarm actions.</p> <p>Alarm names specified in
     * <code>AlarmRule</code> can be surrounded with double-quotes ("), but do not have
     * to be.</p> <p>The following are some examples of <code>AlarmRule</code>:</p>
     * <ul> <li> <p> <code>ALARM(CPUUtilizationTooHigh) AND
     * ALARM(DiskReadOpsTooHigh)</code> specifies that the composite alarm goes into
     * ALARM state only if both CPUUtilizationTooHigh and DiskReadOpsTooHigh alarms are
     * in ALARM state.</p> </li> <li> <p> <code>ALARM(CPUUtilizationTooHigh) AND NOT
     * ALARM(DeploymentInProgress)</code> specifies that the alarm goes to ALARM state
     * if CPUUtilizationTooHigh is in ALARM state and DeploymentInProgress is not in
     * ALARM state. This example reduces alarm noise during a known deployment
     * window.</p> </li> <li> <p> <code>(ALARM(CPUUtilizationTooHigh) OR
     * ALARM(DiskReadOpsTooHigh)) AND OK(NetworkOutTooHigh)</code> goes into ALARM
     * state if CPUUtilizationTooHigh OR DiskReadOpsTooHigh is in ALARM state, and if
     * NetworkOutTooHigh is in OK state. This provides another example of using a
     * composite alarm to prevent noise. This rule ensures that you are not notified
     * with an alarm action on high CPU or disk usage if a known network problem is
     * also occurring.</p> </li> </ul> <p>The <code>AlarmRule</code> can specify as
     * many as 100 "children" alarms. The <code>AlarmRule</code> expression can have as
     * many as 500 elements. Elements are child alarms, TRUE or FALSE statements, and
     * parentheses.</p>
     */
    inline void SetAlarmRule(const char* value) { m_alarmRuleHasBeenSet = true; m_alarmRule.assign(value); }

    /**
     * <p>An expression that specifies which other alarms are to be evaluated to
     * determine this composite alarm's state. For each alarm that you reference, you
     * designate a function that specifies whether that alarm needs to be in ALARM
     * state, OK state, or INSUFFICIENT_DATA state. You can use operators (AND, OR and
     * NOT) to combine multiple functions in a single expression. You can use
     * parenthesis to logically group the functions in your expression.</p> <p>You can
     * use either alarm names or ARNs to reference the other alarms that are to be
     * evaluated.</p> <p>Functions can include the following:</p> <ul> <li> <p>
     * <code>ALARM("<i>alarm-name</i> or <i>alarm-ARN</i>")</code> is TRUE if the named
     * alarm is in ALARM state.</p> </li> <li> <p> <code>OK("<i>alarm-name</i> or
     * <i>alarm-ARN</i>")</code> is TRUE if the named alarm is in OK state.</p> </li>
     * <li> <p> <code>INSUFFICIENT_DATA("<i>alarm-name</i> or <i>alarm-ARN</i>")</code>
     * is TRUE if the named alarm is in INSUFFICIENT_DATA state.</p> </li> <li> <p>
     * <code>TRUE</code> always evaluates to TRUE.</p> </li> <li> <p>
     * <code>FALSE</code> always evaluates to FALSE.</p> </li> </ul> <p>TRUE and FALSE
     * are useful for testing a complex <code>AlarmRule</code> structure, and for
     * testing your alarm actions.</p> <p>Alarm names specified in
     * <code>AlarmRule</code> can be surrounded with double-quotes ("), but do not have
     * to be.</p> <p>The following are some examples of <code>AlarmRule</code>:</p>
     * <ul> <li> <p> <code>ALARM(CPUUtilizationTooHigh) AND
     * ALARM(DiskReadOpsTooHigh)</code> specifies that the composite alarm goes into
     * ALARM state only if both CPUUtilizationTooHigh and DiskReadOpsTooHigh alarms are
     * in ALARM state.</p> </li> <li> <p> <code>ALARM(CPUUtilizationTooHigh) AND NOT
     * ALARM(DeploymentInProgress)</code> specifies that the alarm goes to ALARM state
     * if CPUUtilizationTooHigh is in ALARM state and DeploymentInProgress is not in
     * ALARM state. This example reduces alarm noise during a known deployment
     * window.</p> </li> <li> <p> <code>(ALARM(CPUUtilizationTooHigh) OR
     * ALARM(DiskReadOpsTooHigh)) AND OK(NetworkOutTooHigh)</code> goes into ALARM
     * state if CPUUtilizationTooHigh OR DiskReadOpsTooHigh is in ALARM state, and if
     * NetworkOutTooHigh is in OK state. This provides another example of using a
     * composite alarm to prevent noise. This rule ensures that you are not notified
     * with an alarm action on high CPU or disk usage if a known network problem is
     * also occurring.</p> </li> </ul> <p>The <code>AlarmRule</code> can specify as
     * many as 100 "children" alarms. The <code>AlarmRule</code> expression can have as
     * many as 500 elements. Elements are child alarms, TRUE or FALSE statements, and
     * parentheses.</p>
     */
    inline PutCompositeAlarmRequest& WithAlarmRule(const Aws::String& value) { SetAlarmRule(value); return *this;}

    /**
     * <p>An expression that specifies which other alarms are to be evaluated to
     * determine this composite alarm's state. For each alarm that you reference, you
     * designate a function that specifies whether that alarm needs to be in ALARM
     * state, OK state, or INSUFFICIENT_DATA state. You can use operators (AND, OR and
     * NOT) to combine multiple functions in a single expression. You can use
     * parenthesis to logically group the functions in your expression.</p> <p>You can
     * use either alarm names or ARNs to reference the other alarms that are to be
     * evaluated.</p> <p>Functions can include the following:</p> <ul> <li> <p>
     * <code>ALARM("<i>alarm-name</i> or <i>alarm-ARN</i>")</code> is TRUE if the named
     * alarm is in ALARM state.</p> </li> <li> <p> <code>OK("<i>alarm-name</i> or
     * <i>alarm-ARN</i>")</code> is TRUE if the named alarm is in OK state.</p> </li>
     * <li> <p> <code>INSUFFICIENT_DATA("<i>alarm-name</i> or <i>alarm-ARN</i>")</code>
     * is TRUE if the named alarm is in INSUFFICIENT_DATA state.</p> </li> <li> <p>
     * <code>TRUE</code> always evaluates to TRUE.</p> </li> <li> <p>
     * <code>FALSE</code> always evaluates to FALSE.</p> </li> </ul> <p>TRUE and FALSE
     * are useful for testing a complex <code>AlarmRule</code> structure, and for
     * testing your alarm actions.</p> <p>Alarm names specified in
     * <code>AlarmRule</code> can be surrounded with double-quotes ("), but do not have
     * to be.</p> <p>The following are some examples of <code>AlarmRule</code>:</p>
     * <ul> <li> <p> <code>ALARM(CPUUtilizationTooHigh) AND
     * ALARM(DiskReadOpsTooHigh)</code> specifies that the composite alarm goes into
     * ALARM state only if both CPUUtilizationTooHigh and DiskReadOpsTooHigh alarms are
     * in ALARM state.</p> </li> <li> <p> <code>ALARM(CPUUtilizationTooHigh) AND NOT
     * ALARM(DeploymentInProgress)</code> specifies that the alarm goes to ALARM state
     * if CPUUtilizationTooHigh is in ALARM state and DeploymentInProgress is not in
     * ALARM state. This example reduces alarm noise during a known deployment
     * window.</p> </li> <li> <p> <code>(ALARM(CPUUtilizationTooHigh) OR
     * ALARM(DiskReadOpsTooHigh)) AND OK(NetworkOutTooHigh)</code> goes into ALARM
     * state if CPUUtilizationTooHigh OR DiskReadOpsTooHigh is in ALARM state, and if
     * NetworkOutTooHigh is in OK state. This provides another example of using a
     * composite alarm to prevent noise. This rule ensures that you are not notified
     * with an alarm action on high CPU or disk usage if a known network problem is
     * also occurring.</p> </li> </ul> <p>The <code>AlarmRule</code> can specify as
     * many as 100 "children" alarms. The <code>AlarmRule</code> expression can have as
     * many as 500 elements. Elements are child alarms, TRUE or FALSE statements, and
     * parentheses.</p>
     */
    inline PutCompositeAlarmRequest& WithAlarmRule(Aws::String&& value) { SetAlarmRule(std::move(value)); return *this;}

    /**
     * <p>An expression that specifies which other alarms are to be evaluated to
     * determine this composite alarm's state. For each alarm that you reference, you
     * designate a function that specifies whether that alarm needs to be in ALARM
     * state, OK state, or INSUFFICIENT_DATA state. You can use operators (AND, OR and
     * NOT) to combine multiple functions in a single expression. You can use
     * parenthesis to logically group the functions in your expression.</p> <p>You can
     * use either alarm names or ARNs to reference the other alarms that are to be
     * evaluated.</p> <p>Functions can include the following:</p> <ul> <li> <p>
     * <code>ALARM("<i>alarm-name</i> or <i>alarm-ARN</i>")</code> is TRUE if the named
     * alarm is in ALARM state.</p> </li> <li> <p> <code>OK("<i>alarm-name</i> or
     * <i>alarm-ARN</i>")</code> is TRUE if the named alarm is in OK state.</p> </li>
     * <li> <p> <code>INSUFFICIENT_DATA("<i>alarm-name</i> or <i>alarm-ARN</i>")</code>
     * is TRUE if the named alarm is in INSUFFICIENT_DATA state.</p> </li> <li> <p>
     * <code>TRUE</code> always evaluates to TRUE.</p> </li> <li> <p>
     * <code>FALSE</code> always evaluates to FALSE.</p> </li> </ul> <p>TRUE and FALSE
     * are useful for testing a complex <code>AlarmRule</code> structure, and for
     * testing your alarm actions.</p> <p>Alarm names specified in
     * <code>AlarmRule</code> can be surrounded with double-quotes ("), but do not have
     * to be.</p> <p>The following are some examples of <code>AlarmRule</code>:</p>
     * <ul> <li> <p> <code>ALARM(CPUUtilizationTooHigh) AND
     * ALARM(DiskReadOpsTooHigh)</code> specifies that the composite alarm goes into
     * ALARM state only if both CPUUtilizationTooHigh and DiskReadOpsTooHigh alarms are
     * in ALARM state.</p> </li> <li> <p> <code>ALARM(CPUUtilizationTooHigh) AND NOT
     * ALARM(DeploymentInProgress)</code> specifies that the alarm goes to ALARM state
     * if CPUUtilizationTooHigh is in ALARM state and DeploymentInProgress is not in
     * ALARM state. This example reduces alarm noise during a known deployment
     * window.</p> </li> <li> <p> <code>(ALARM(CPUUtilizationTooHigh) OR
     * ALARM(DiskReadOpsTooHigh)) AND OK(NetworkOutTooHigh)</code> goes into ALARM
     * state if CPUUtilizationTooHigh OR DiskReadOpsTooHigh is in ALARM state, and if
     * NetworkOutTooHigh is in OK state. This provides another example of using a
     * composite alarm to prevent noise. This rule ensures that you are not notified
     * with an alarm action on high CPU or disk usage if a known network problem is
     * also occurring.</p> </li> </ul> <p>The <code>AlarmRule</code> can specify as
     * many as 100 "children" alarms. The <code>AlarmRule</code> expression can have as
     * many as 500 elements. Elements are child alarms, TRUE or FALSE statements, and
     * parentheses.</p>
     */
    inline PutCompositeAlarmRequest& WithAlarmRule(const char* value) { SetAlarmRule(value); return *this;}


    /**
     * <p>The actions to execute when this alarm transitions to the
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetInsufficientDataActions() const{ return m_insufficientDataActions; }

    /**
     * <p>The actions to execute when this alarm transitions to the
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * </p>
     */
    inline bool InsufficientDataActionsHasBeenSet() const { return m_insufficientDataActionsHasBeenSet; }

    /**
     * <p>The actions to execute when this alarm transitions to the
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * </p>
     */
    inline void SetInsufficientDataActions(const Aws::Vector<Aws::String>& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions = value; }

    /**
     * <p>The actions to execute when this alarm transitions to the
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * </p>
     */
    inline void SetInsufficientDataActions(Aws::Vector<Aws::String>&& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions = std::move(value); }

    /**
     * <p>The actions to execute when this alarm transitions to the
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * </p>
     */
    inline PutCompositeAlarmRequest& WithInsufficientDataActions(const Aws::Vector<Aws::String>& value) { SetInsufficientDataActions(value); return *this;}

    /**
     * <p>The actions to execute when this alarm transitions to the
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * </p>
     */
    inline PutCompositeAlarmRequest& WithInsufficientDataActions(Aws::Vector<Aws::String>&& value) { SetInsufficientDataActions(std::move(value)); return *this;}

    /**
     * <p>The actions to execute when this alarm transitions to the
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * </p>
     */
    inline PutCompositeAlarmRequest& AddInsufficientDataActions(const Aws::String& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions.push_back(value); return *this; }

    /**
     * <p>The actions to execute when this alarm transitions to the
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * </p>
     */
    inline PutCompositeAlarmRequest& AddInsufficientDataActions(Aws::String&& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions.push_back(std::move(value)); return *this; }

    /**
     * <p>The actions to execute when this alarm transitions to the
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * </p>
     */
    inline PutCompositeAlarmRequest& AddInsufficientDataActions(const char* value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions.push_back(value); return *this; }


    /**
     * <p>The actions to execute when this alarm transitions to an <code>OK</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetOKActions() const{ return m_oKActions; }

    /**
     * <p>The actions to execute when this alarm transitions to an <code>OK</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * </p>
     */
    inline bool OKActionsHasBeenSet() const { return m_oKActionsHasBeenSet; }

    /**
     * <p>The actions to execute when this alarm transitions to an <code>OK</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * </p>
     */
    inline void SetOKActions(const Aws::Vector<Aws::String>& value) { m_oKActionsHasBeenSet = true; m_oKActions = value; }

    /**
     * <p>The actions to execute when this alarm transitions to an <code>OK</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * </p>
     */
    inline void SetOKActions(Aws::Vector<Aws::String>&& value) { m_oKActionsHasBeenSet = true; m_oKActions = std::move(value); }

    /**
     * <p>The actions to execute when this alarm transitions to an <code>OK</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * </p>
     */
    inline PutCompositeAlarmRequest& WithOKActions(const Aws::Vector<Aws::String>& value) { SetOKActions(value); return *this;}

    /**
     * <p>The actions to execute when this alarm transitions to an <code>OK</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * </p>
     */
    inline PutCompositeAlarmRequest& WithOKActions(Aws::Vector<Aws::String>&& value) { SetOKActions(std::move(value)); return *this;}

    /**
     * <p>The actions to execute when this alarm transitions to an <code>OK</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * </p>
     */
    inline PutCompositeAlarmRequest& AddOKActions(const Aws::String& value) { m_oKActionsHasBeenSet = true; m_oKActions.push_back(value); return *this; }

    /**
     * <p>The actions to execute when this alarm transitions to an <code>OK</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * </p>
     */
    inline PutCompositeAlarmRequest& AddOKActions(Aws::String&& value) { m_oKActionsHasBeenSet = true; m_oKActions.push_back(std::move(value)); return *this; }

    /**
     * <p>The actions to execute when this alarm transitions to an <code>OK</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p> <p>Valid Values:
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * </p>
     */
    inline PutCompositeAlarmRequest& AddOKActions(const char* value) { m_oKActionsHasBeenSet = true; m_oKActions.push_back(value); return *this; }


    /**
     * <p>A list of key-value pairs to associate with the composite alarm. You can
     * associate as many as 50 tags with an alarm.</p> <p>Tags can help you organize
     * and categorize your resources. You can also use them to scope user permissions,
     * by granting a user permission to access or change only resources with certain
     * tag values.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs to associate with the composite alarm. You can
     * associate as many as 50 tags with an alarm.</p> <p>Tags can help you organize
     * and categorize your resources. You can also use them to scope user permissions,
     * by granting a user permission to access or change only resources with certain
     * tag values.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key-value pairs to associate with the composite alarm. You can
     * associate as many as 50 tags with an alarm.</p> <p>Tags can help you organize
     * and categorize your resources. You can also use them to scope user permissions,
     * by granting a user permission to access or change only resources with certain
     * tag values.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key-value pairs to associate with the composite alarm. You can
     * associate as many as 50 tags with an alarm.</p> <p>Tags can help you organize
     * and categorize your resources. You can also use them to scope user permissions,
     * by granting a user permission to access or change only resources with certain
     * tag values.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs to associate with the composite alarm. You can
     * associate as many as 50 tags with an alarm.</p> <p>Tags can help you organize
     * and categorize your resources. You can also use them to scope user permissions,
     * by granting a user permission to access or change only resources with certain
     * tag values.</p>
     */
    inline PutCompositeAlarmRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs to associate with the composite alarm. You can
     * associate as many as 50 tags with an alarm.</p> <p>Tags can help you organize
     * and categorize your resources. You can also use them to scope user permissions,
     * by granting a user permission to access or change only resources with certain
     * tag values.</p>
     */
    inline PutCompositeAlarmRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs to associate with the composite alarm. You can
     * associate as many as 50 tags with an alarm.</p> <p>Tags can help you organize
     * and categorize your resources. You can also use them to scope user permissions,
     * by granting a user permission to access or change only resources with certain
     * tag values.</p>
     */
    inline PutCompositeAlarmRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of key-value pairs to associate with the composite alarm. You can
     * associate as many as 50 tags with an alarm.</p> <p>Tags can help you organize
     * and categorize your resources. You can also use them to scope user permissions,
     * by granting a user permission to access or change only resources with certain
     * tag values.</p>
     */
    inline PutCompositeAlarmRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    bool m_actionsEnabled;
    bool m_actionsEnabledHasBeenSet;

    Aws::Vector<Aws::String> m_alarmActions;
    bool m_alarmActionsHasBeenSet;

    Aws::String m_alarmDescription;
    bool m_alarmDescriptionHasBeenSet;

    Aws::String m_alarmName;
    bool m_alarmNameHasBeenSet;

    Aws::String m_alarmRule;
    bool m_alarmRuleHasBeenSet;

    Aws::Vector<Aws::String> m_insufficientDataActions;
    bool m_insufficientDataActionsHasBeenSet;

    Aws::Vector<Aws::String> m_oKActions;
    bool m_oKActionsHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
