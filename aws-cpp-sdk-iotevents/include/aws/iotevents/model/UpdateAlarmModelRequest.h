/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/IoTEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/AlarmRule.h>
#include <aws/iotevents/model/AlarmNotification.h>
#include <aws/iotevents/model/AlarmEventActions.h>
#include <aws/iotevents/model/AlarmCapabilities.h>
#include <utility>

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

  /**
   */
  class UpdateAlarmModelRequest : public IoTEventsRequest
  {
  public:
    AWS_IOTEVENTS_API UpdateAlarmModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAlarmModel"; }

    AWS_IOTEVENTS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelName() const{ return m_alarmModelName; }

    /**
     * <p>The name of the alarm model.</p>
     */
    inline bool AlarmModelNameHasBeenSet() const { return m_alarmModelNameHasBeenSet; }

    /**
     * <p>The name of the alarm model.</p>
     */
    inline void SetAlarmModelName(const Aws::String& value) { m_alarmModelNameHasBeenSet = true; m_alarmModelName = value; }

    /**
     * <p>The name of the alarm model.</p>
     */
    inline void SetAlarmModelName(Aws::String&& value) { m_alarmModelNameHasBeenSet = true; m_alarmModelName = std::move(value); }

    /**
     * <p>The name of the alarm model.</p>
     */
    inline void SetAlarmModelName(const char* value) { m_alarmModelNameHasBeenSet = true; m_alarmModelName.assign(value); }

    /**
     * <p>The name of the alarm model.</p>
     */
    inline UpdateAlarmModelRequest& WithAlarmModelName(const Aws::String& value) { SetAlarmModelName(value); return *this;}

    /**
     * <p>The name of the alarm model.</p>
     */
    inline UpdateAlarmModelRequest& WithAlarmModelName(Aws::String&& value) { SetAlarmModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the alarm model.</p>
     */
    inline UpdateAlarmModelRequest& WithAlarmModelName(const char* value) { SetAlarmModelName(value); return *this;}


    /**
     * <p>The description of the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelDescription() const{ return m_alarmModelDescription; }

    /**
     * <p>The description of the alarm model.</p>
     */
    inline bool AlarmModelDescriptionHasBeenSet() const { return m_alarmModelDescriptionHasBeenSet; }

    /**
     * <p>The description of the alarm model.</p>
     */
    inline void SetAlarmModelDescription(const Aws::String& value) { m_alarmModelDescriptionHasBeenSet = true; m_alarmModelDescription = value; }

    /**
     * <p>The description of the alarm model.</p>
     */
    inline void SetAlarmModelDescription(Aws::String&& value) { m_alarmModelDescriptionHasBeenSet = true; m_alarmModelDescription = std::move(value); }

    /**
     * <p>The description of the alarm model.</p>
     */
    inline void SetAlarmModelDescription(const char* value) { m_alarmModelDescriptionHasBeenSet = true; m_alarmModelDescription.assign(value); }

    /**
     * <p>The description of the alarm model.</p>
     */
    inline UpdateAlarmModelRequest& WithAlarmModelDescription(const Aws::String& value) { SetAlarmModelDescription(value); return *this;}

    /**
     * <p>The description of the alarm model.</p>
     */
    inline UpdateAlarmModelRequest& WithAlarmModelDescription(Aws::String&& value) { SetAlarmModelDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the alarm model.</p>
     */
    inline UpdateAlarmModelRequest& WithAlarmModelDescription(const char* value) { SetAlarmModelDescription(value); return *this;}


    /**
     * <p>The ARN of the IAM role that allows the alarm to perform actions and access
     * AWS resources. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role that allows the alarm to perform actions and access
     * AWS resources. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that allows the alarm to perform actions and access
     * AWS resources. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role that allows the alarm to perform actions and access
     * AWS resources. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that allows the alarm to perform actions and access
     * AWS resources. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that allows the alarm to perform actions and access
     * AWS resources. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline UpdateAlarmModelRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that allows the alarm to perform actions and access
     * AWS resources. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline UpdateAlarmModelRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that allows the alarm to perform actions and access
     * AWS resources. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline UpdateAlarmModelRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>A non-negative integer that reflects the severity level of the alarm.</p>
     */
    inline int GetSeverity() const{ return m_severity; }

    /**
     * <p>A non-negative integer that reflects the severity level of the alarm.</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>A non-negative integer that reflects the severity level of the alarm.</p>
     */
    inline void SetSeverity(int value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>A non-negative integer that reflects the severity level of the alarm.</p>
     */
    inline UpdateAlarmModelRequest& WithSeverity(int value) { SetSeverity(value); return *this;}


    /**
     * <p>Defines when your alarm is invoked.</p>
     */
    inline const AlarmRule& GetAlarmRule() const{ return m_alarmRule; }

    /**
     * <p>Defines when your alarm is invoked.</p>
     */
    inline bool AlarmRuleHasBeenSet() const { return m_alarmRuleHasBeenSet; }

    /**
     * <p>Defines when your alarm is invoked.</p>
     */
    inline void SetAlarmRule(const AlarmRule& value) { m_alarmRuleHasBeenSet = true; m_alarmRule = value; }

    /**
     * <p>Defines when your alarm is invoked.</p>
     */
    inline void SetAlarmRule(AlarmRule&& value) { m_alarmRuleHasBeenSet = true; m_alarmRule = std::move(value); }

    /**
     * <p>Defines when your alarm is invoked.</p>
     */
    inline UpdateAlarmModelRequest& WithAlarmRule(const AlarmRule& value) { SetAlarmRule(value); return *this;}

    /**
     * <p>Defines when your alarm is invoked.</p>
     */
    inline UpdateAlarmModelRequest& WithAlarmRule(AlarmRule&& value) { SetAlarmRule(std::move(value)); return *this;}


    /**
     * <p>Contains information about one or more notification actions.</p>
     */
    inline const AlarmNotification& GetAlarmNotification() const{ return m_alarmNotification; }

    /**
     * <p>Contains information about one or more notification actions.</p>
     */
    inline bool AlarmNotificationHasBeenSet() const { return m_alarmNotificationHasBeenSet; }

    /**
     * <p>Contains information about one or more notification actions.</p>
     */
    inline void SetAlarmNotification(const AlarmNotification& value) { m_alarmNotificationHasBeenSet = true; m_alarmNotification = value; }

    /**
     * <p>Contains information about one or more notification actions.</p>
     */
    inline void SetAlarmNotification(AlarmNotification&& value) { m_alarmNotificationHasBeenSet = true; m_alarmNotification = std::move(value); }

    /**
     * <p>Contains information about one or more notification actions.</p>
     */
    inline UpdateAlarmModelRequest& WithAlarmNotification(const AlarmNotification& value) { SetAlarmNotification(value); return *this;}

    /**
     * <p>Contains information about one or more notification actions.</p>
     */
    inline UpdateAlarmModelRequest& WithAlarmNotification(AlarmNotification&& value) { SetAlarmNotification(std::move(value)); return *this;}


    /**
     * <p>Contains information about one or more alarm actions.</p>
     */
    inline const AlarmEventActions& GetAlarmEventActions() const{ return m_alarmEventActions; }

    /**
     * <p>Contains information about one or more alarm actions.</p>
     */
    inline bool AlarmEventActionsHasBeenSet() const { return m_alarmEventActionsHasBeenSet; }

    /**
     * <p>Contains information about one or more alarm actions.</p>
     */
    inline void SetAlarmEventActions(const AlarmEventActions& value) { m_alarmEventActionsHasBeenSet = true; m_alarmEventActions = value; }

    /**
     * <p>Contains information about one or more alarm actions.</p>
     */
    inline void SetAlarmEventActions(AlarmEventActions&& value) { m_alarmEventActionsHasBeenSet = true; m_alarmEventActions = std::move(value); }

    /**
     * <p>Contains information about one or more alarm actions.</p>
     */
    inline UpdateAlarmModelRequest& WithAlarmEventActions(const AlarmEventActions& value) { SetAlarmEventActions(value); return *this;}

    /**
     * <p>Contains information about one or more alarm actions.</p>
     */
    inline UpdateAlarmModelRequest& WithAlarmEventActions(AlarmEventActions&& value) { SetAlarmEventActions(std::move(value)); return *this;}


    /**
     * <p>Contains the configuration information of alarm state changes.</p>
     */
    inline const AlarmCapabilities& GetAlarmCapabilities() const{ return m_alarmCapabilities; }

    /**
     * <p>Contains the configuration information of alarm state changes.</p>
     */
    inline bool AlarmCapabilitiesHasBeenSet() const { return m_alarmCapabilitiesHasBeenSet; }

    /**
     * <p>Contains the configuration information of alarm state changes.</p>
     */
    inline void SetAlarmCapabilities(const AlarmCapabilities& value) { m_alarmCapabilitiesHasBeenSet = true; m_alarmCapabilities = value; }

    /**
     * <p>Contains the configuration information of alarm state changes.</p>
     */
    inline void SetAlarmCapabilities(AlarmCapabilities&& value) { m_alarmCapabilitiesHasBeenSet = true; m_alarmCapabilities = std::move(value); }

    /**
     * <p>Contains the configuration information of alarm state changes.</p>
     */
    inline UpdateAlarmModelRequest& WithAlarmCapabilities(const AlarmCapabilities& value) { SetAlarmCapabilities(value); return *this;}

    /**
     * <p>Contains the configuration information of alarm state changes.</p>
     */
    inline UpdateAlarmModelRequest& WithAlarmCapabilities(AlarmCapabilities&& value) { SetAlarmCapabilities(std::move(value)); return *this;}

  private:

    Aws::String m_alarmModelName;
    bool m_alarmModelNameHasBeenSet = false;

    Aws::String m_alarmModelDescription;
    bool m_alarmModelDescriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    int m_severity;
    bool m_severityHasBeenSet = false;

    AlarmRule m_alarmRule;
    bool m_alarmRuleHasBeenSet = false;

    AlarmNotification m_alarmNotification;
    bool m_alarmNotificationHasBeenSet = false;

    AlarmEventActions m_alarmEventActions;
    bool m_alarmEventActionsHasBeenSet = false;

    AlarmCapabilities m_alarmCapabilities;
    bool m_alarmCapabilitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
