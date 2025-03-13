/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/AlarmModelVersionStatus.h>
#include <aws/iotevents/model/AlarmRule.h>
#include <aws/iotevents/model/AlarmNotification.h>
#include <aws/iotevents/model/AlarmEventActions.h>
#include <aws/iotevents/model/AlarmCapabilities.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTEvents
{
namespace Model
{
  class DescribeAlarmModelResult
  {
  public:
    AWS_IOTEVENTS_API DescribeAlarmModelResult() = default;
    AWS_IOTEVENTS_API DescribeAlarmModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTS_API DescribeAlarmModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time the alarm model was created, in the Unix epoch format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeAlarmModelResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the alarm model. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetAlarmModelArn() const { return m_alarmModelArn; }
    template<typename AlarmModelArnT = Aws::String>
    void SetAlarmModelArn(AlarmModelArnT&& value) { m_alarmModelArnHasBeenSet = true; m_alarmModelArn = std::forward<AlarmModelArnT>(value); }
    template<typename AlarmModelArnT = Aws::String>
    DescribeAlarmModelResult& WithAlarmModelArn(AlarmModelArnT&& value) { SetAlarmModelArn(std::forward<AlarmModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelVersion() const { return m_alarmModelVersion; }
    template<typename AlarmModelVersionT = Aws::String>
    void SetAlarmModelVersion(AlarmModelVersionT&& value) { m_alarmModelVersionHasBeenSet = true; m_alarmModelVersion = std::forward<AlarmModelVersionT>(value); }
    template<typename AlarmModelVersionT = Aws::String>
    DescribeAlarmModelResult& WithAlarmModelVersion(AlarmModelVersionT&& value) { SetAlarmModelVersion(std::forward<AlarmModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the alarm model was last updated, in the Unix epoch format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    DescribeAlarmModelResult& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the alarm model. The status can be one of the following
     * values:</p> <ul> <li> <p> <code>ACTIVE</code> - The alarm model is active and
     * it's ready to evaluate data.</p> </li> <li> <p> <code>ACTIVATING</code> - AWS
     * IoT Events is activating your alarm model. Activating an alarm model can take up
     * to a few minutes.</p> </li> <li> <p> <code>INACTIVE</code> - The alarm model is
     * inactive, so it isn't ready to evaluate data. Check your alarm model information
     * and update the alarm model.</p> </li> <li> <p> <code>FAILED</code> - You
     * couldn't create or update the alarm model. Check your alarm model information
     * and try again.</p> </li> </ul>
     */
    inline AlarmModelVersionStatus GetStatus() const { return m_status; }
    inline void SetStatus(AlarmModelVersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeAlarmModelResult& WithStatus(AlarmModelVersionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains information about the status of the alarm model. </p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    DescribeAlarmModelResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelName() const { return m_alarmModelName; }
    template<typename AlarmModelNameT = Aws::String>
    void SetAlarmModelName(AlarmModelNameT&& value) { m_alarmModelNameHasBeenSet = true; m_alarmModelName = std::forward<AlarmModelNameT>(value); }
    template<typename AlarmModelNameT = Aws::String>
    DescribeAlarmModelResult& WithAlarmModelName(AlarmModelNameT&& value) { SetAlarmModelName(std::forward<AlarmModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelDescription() const { return m_alarmModelDescription; }
    template<typename AlarmModelDescriptionT = Aws::String>
    void SetAlarmModelDescription(AlarmModelDescriptionT&& value) { m_alarmModelDescriptionHasBeenSet = true; m_alarmModelDescription = std::forward<AlarmModelDescriptionT>(value); }
    template<typename AlarmModelDescriptionT = Aws::String>
    DescribeAlarmModelResult& WithAlarmModelDescription(AlarmModelDescriptionT&& value) { SetAlarmModelDescription(std::forward<AlarmModelDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that allows the alarm to perform actions and access
     * AWS resources. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeAlarmModelResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An input attribute used as a key to create an alarm. AWS IoT Events routes <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_Input.html">inputs</a>
     * associated with this key to the alarm.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    DescribeAlarmModelResult& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A non-negative integer that reflects the severity level of the alarm.</p>
     */
    inline int GetSeverity() const { return m_severity; }
    inline void SetSeverity(int value) { m_severityHasBeenSet = true; m_severity = value; }
    inline DescribeAlarmModelResult& WithSeverity(int value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines when your alarm is invoked.</p>
     */
    inline const AlarmRule& GetAlarmRule() const { return m_alarmRule; }
    template<typename AlarmRuleT = AlarmRule>
    void SetAlarmRule(AlarmRuleT&& value) { m_alarmRuleHasBeenSet = true; m_alarmRule = std::forward<AlarmRuleT>(value); }
    template<typename AlarmRuleT = AlarmRule>
    DescribeAlarmModelResult& WithAlarmRule(AlarmRuleT&& value) { SetAlarmRule(std::forward<AlarmRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about one or more notification actions.</p>
     */
    inline const AlarmNotification& GetAlarmNotification() const { return m_alarmNotification; }
    template<typename AlarmNotificationT = AlarmNotification>
    void SetAlarmNotification(AlarmNotificationT&& value) { m_alarmNotificationHasBeenSet = true; m_alarmNotification = std::forward<AlarmNotificationT>(value); }
    template<typename AlarmNotificationT = AlarmNotification>
    DescribeAlarmModelResult& WithAlarmNotification(AlarmNotificationT&& value) { SetAlarmNotification(std::forward<AlarmNotificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about one or more alarm actions.</p>
     */
    inline const AlarmEventActions& GetAlarmEventActions() const { return m_alarmEventActions; }
    template<typename AlarmEventActionsT = AlarmEventActions>
    void SetAlarmEventActions(AlarmEventActionsT&& value) { m_alarmEventActionsHasBeenSet = true; m_alarmEventActions = std::forward<AlarmEventActionsT>(value); }
    template<typename AlarmEventActionsT = AlarmEventActions>
    DescribeAlarmModelResult& WithAlarmEventActions(AlarmEventActionsT&& value) { SetAlarmEventActions(std::forward<AlarmEventActionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration information of alarm state changes.</p>
     */
    inline const AlarmCapabilities& GetAlarmCapabilities() const { return m_alarmCapabilities; }
    template<typename AlarmCapabilitiesT = AlarmCapabilities>
    void SetAlarmCapabilities(AlarmCapabilitiesT&& value) { m_alarmCapabilitiesHasBeenSet = true; m_alarmCapabilities = std::forward<AlarmCapabilitiesT>(value); }
    template<typename AlarmCapabilitiesT = AlarmCapabilities>
    DescribeAlarmModelResult& WithAlarmCapabilities(AlarmCapabilitiesT&& value) { SetAlarmCapabilities(std::forward<AlarmCapabilitiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAlarmModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_alarmModelArn;
    bool m_alarmModelArnHasBeenSet = false;

    Aws::String m_alarmModelVersion;
    bool m_alarmModelVersionHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;

    AlarmModelVersionStatus m_status{AlarmModelVersionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_alarmModelName;
    bool m_alarmModelNameHasBeenSet = false;

    Aws::String m_alarmModelDescription;
    bool m_alarmModelDescriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    int m_severity{0};
    bool m_severityHasBeenSet = false;

    AlarmRule m_alarmRule;
    bool m_alarmRuleHasBeenSet = false;

    AlarmNotification m_alarmNotification;
    bool m_alarmNotificationHasBeenSet = false;

    AlarmEventActions m_alarmEventActions;
    bool m_alarmEventActionsHasBeenSet = false;

    AlarmCapabilities m_alarmCapabilities;
    bool m_alarmCapabilitiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
