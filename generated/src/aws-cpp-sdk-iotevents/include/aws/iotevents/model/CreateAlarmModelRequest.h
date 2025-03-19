/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/IoTEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents/model/AlarmRule.h>
#include <aws/iotevents/model/AlarmNotification.h>
#include <aws/iotevents/model/AlarmEventActions.h>
#include <aws/iotevents/model/AlarmCapabilities.h>
#include <aws/iotevents/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

  /**
   */
  class CreateAlarmModelRequest : public IoTEventsRequest
  {
  public:
    AWS_IOTEVENTS_API CreateAlarmModelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAlarmModel"; }

    AWS_IOTEVENTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique name that helps you identify the alarm model. You can't change this
     * name after you create the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelName() const { return m_alarmModelName; }
    inline bool AlarmModelNameHasBeenSet() const { return m_alarmModelNameHasBeenSet; }
    template<typename AlarmModelNameT = Aws::String>
    void SetAlarmModelName(AlarmModelNameT&& value) { m_alarmModelNameHasBeenSet = true; m_alarmModelName = std::forward<AlarmModelNameT>(value); }
    template<typename AlarmModelNameT = Aws::String>
    CreateAlarmModelRequest& WithAlarmModelName(AlarmModelNameT&& value) { SetAlarmModelName(std::forward<AlarmModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description that tells you what the alarm model detects.</p>
     */
    inline const Aws::String& GetAlarmModelDescription() const { return m_alarmModelDescription; }
    inline bool AlarmModelDescriptionHasBeenSet() const { return m_alarmModelDescriptionHasBeenSet; }
    template<typename AlarmModelDescriptionT = Aws::String>
    void SetAlarmModelDescription(AlarmModelDescriptionT&& value) { m_alarmModelDescriptionHasBeenSet = true; m_alarmModelDescription = std::forward<AlarmModelDescriptionT>(value); }
    template<typename AlarmModelDescriptionT = Aws::String>
    CreateAlarmModelRequest& WithAlarmModelDescription(AlarmModelDescriptionT&& value) { SetAlarmModelDescription(std::forward<AlarmModelDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that allows the alarm to perform actions and access
     * AWS resources. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateAlarmModelRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that contain metadata for the alarm model. The tags
     * help you manage the alarm model. For more information, see <a
     * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/tagging-iotevents.html">Tagging
     * your AWS IoT Events resources</a> in the <i>AWS IoT Events Developer
     * Guide</i>.</p> <p>You can create up to 50 tags for one alarm model.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateAlarmModelRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateAlarmModelRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An input attribute used as a key to create an alarm. AWS IoT Events routes <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_Input.html">inputs</a>
     * associated with this key to the alarm.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    CreateAlarmModelRequest& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A non-negative integer that reflects the severity level of the alarm.</p>
     */
    inline int GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(int value) { m_severityHasBeenSet = true; m_severity = value; }
    inline CreateAlarmModelRequest& WithSeverity(int value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines when your alarm is invoked.</p>
     */
    inline const AlarmRule& GetAlarmRule() const { return m_alarmRule; }
    inline bool AlarmRuleHasBeenSet() const { return m_alarmRuleHasBeenSet; }
    template<typename AlarmRuleT = AlarmRule>
    void SetAlarmRule(AlarmRuleT&& value) { m_alarmRuleHasBeenSet = true; m_alarmRule = std::forward<AlarmRuleT>(value); }
    template<typename AlarmRuleT = AlarmRule>
    CreateAlarmModelRequest& WithAlarmRule(AlarmRuleT&& value) { SetAlarmRule(std::forward<AlarmRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about one or more notification actions.</p>
     */
    inline const AlarmNotification& GetAlarmNotification() const { return m_alarmNotification; }
    inline bool AlarmNotificationHasBeenSet() const { return m_alarmNotificationHasBeenSet; }
    template<typename AlarmNotificationT = AlarmNotification>
    void SetAlarmNotification(AlarmNotificationT&& value) { m_alarmNotificationHasBeenSet = true; m_alarmNotification = std::forward<AlarmNotificationT>(value); }
    template<typename AlarmNotificationT = AlarmNotification>
    CreateAlarmModelRequest& WithAlarmNotification(AlarmNotificationT&& value) { SetAlarmNotification(std::forward<AlarmNotificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about one or more alarm actions.</p>
     */
    inline const AlarmEventActions& GetAlarmEventActions() const { return m_alarmEventActions; }
    inline bool AlarmEventActionsHasBeenSet() const { return m_alarmEventActionsHasBeenSet; }
    template<typename AlarmEventActionsT = AlarmEventActions>
    void SetAlarmEventActions(AlarmEventActionsT&& value) { m_alarmEventActionsHasBeenSet = true; m_alarmEventActions = std::forward<AlarmEventActionsT>(value); }
    template<typename AlarmEventActionsT = AlarmEventActions>
    CreateAlarmModelRequest& WithAlarmEventActions(AlarmEventActionsT&& value) { SetAlarmEventActions(std::forward<AlarmEventActionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the configuration information of alarm state changes.</p>
     */
    inline const AlarmCapabilities& GetAlarmCapabilities() const { return m_alarmCapabilities; }
    inline bool AlarmCapabilitiesHasBeenSet() const { return m_alarmCapabilitiesHasBeenSet; }
    template<typename AlarmCapabilitiesT = AlarmCapabilities>
    void SetAlarmCapabilities(AlarmCapabilitiesT&& value) { m_alarmCapabilitiesHasBeenSet = true; m_alarmCapabilities = std::forward<AlarmCapabilitiesT>(value); }
    template<typename AlarmCapabilitiesT = AlarmCapabilities>
    CreateAlarmModelRequest& WithAlarmCapabilities(AlarmCapabilitiesT&& value) { SetAlarmCapabilities(std::forward<AlarmCapabilitiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_alarmModelName;
    bool m_alarmModelNameHasBeenSet = false;

    Aws::String m_alarmModelDescription;
    bool m_alarmModelDescriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

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
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
