/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iotevents/model/AlarmModelVersionStatus.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Contains a summary of an alarm model version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/AlarmModelVersionSummary">AWS
   * API Reference</a></p>
   */
  class AlarmModelVersionSummary
  {
  public:
    AWS_IOTEVENTS_API AlarmModelVersionSummary() = default;
    AWS_IOTEVENTS_API AlarmModelVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API AlarmModelVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelName() const { return m_alarmModelName; }
    inline bool AlarmModelNameHasBeenSet() const { return m_alarmModelNameHasBeenSet; }
    template<typename AlarmModelNameT = Aws::String>
    void SetAlarmModelName(AlarmModelNameT&& value) { m_alarmModelNameHasBeenSet = true; m_alarmModelName = std::forward<AlarmModelNameT>(value); }
    template<typename AlarmModelNameT = Aws::String>
    AlarmModelVersionSummary& WithAlarmModelName(AlarmModelNameT&& value) { SetAlarmModelName(std::forward<AlarmModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the alarm model. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetAlarmModelArn() const { return m_alarmModelArn; }
    inline bool AlarmModelArnHasBeenSet() const { return m_alarmModelArnHasBeenSet; }
    template<typename AlarmModelArnT = Aws::String>
    void SetAlarmModelArn(AlarmModelArnT&& value) { m_alarmModelArnHasBeenSet = true; m_alarmModelArn = std::forward<AlarmModelArnT>(value); }
    template<typename AlarmModelArnT = Aws::String>
    AlarmModelVersionSummary& WithAlarmModelArn(AlarmModelArnT&& value) { SetAlarmModelArn(std::forward<AlarmModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelVersion() const { return m_alarmModelVersion; }
    inline bool AlarmModelVersionHasBeenSet() const { return m_alarmModelVersionHasBeenSet; }
    template<typename AlarmModelVersionT = Aws::String>
    void SetAlarmModelVersion(AlarmModelVersionT&& value) { m_alarmModelVersionHasBeenSet = true; m_alarmModelVersion = std::forward<AlarmModelVersionT>(value); }
    template<typename AlarmModelVersionT = Aws::String>
    AlarmModelVersionSummary& WithAlarmModelVersion(AlarmModelVersionT&& value) { SetAlarmModelVersion(std::forward<AlarmModelVersionT>(value)); return *this;}
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
    AlarmModelVersionSummary& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the alarm model was created, in the Unix epoch format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    AlarmModelVersionSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the alarm model was last updated, in the Unix epoch format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    AlarmModelVersionSummary& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AlarmModelVersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AlarmModelVersionSummary& WithStatus(AlarmModelVersionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains information about the status of the alarm model version. </p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    AlarmModelVersionSummary& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_alarmModelName;
    bool m_alarmModelNameHasBeenSet = false;

    Aws::String m_alarmModelArn;
    bool m_alarmModelArnHasBeenSet = false;

    Aws::String m_alarmModelVersion;
    bool m_alarmModelVersionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;

    AlarmModelVersionStatus m_status{AlarmModelVersionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
