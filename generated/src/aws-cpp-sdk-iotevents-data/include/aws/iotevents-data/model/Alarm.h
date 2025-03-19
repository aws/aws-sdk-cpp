/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents-data/model/AlarmState.h>
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
namespace IoTEventsData
{
namespace Model
{

  /**
   * <p>Contains information about an alarm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/Alarm">AWS
   * API Reference</a></p>
   */
  class Alarm
  {
  public:
    AWS_IOTEVENTSDATA_API Alarm() = default;
    AWS_IOTEVENTSDATA_API Alarm(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Alarm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelName() const { return m_alarmModelName; }
    inline bool AlarmModelNameHasBeenSet() const { return m_alarmModelNameHasBeenSet; }
    template<typename AlarmModelNameT = Aws::String>
    void SetAlarmModelName(AlarmModelNameT&& value) { m_alarmModelNameHasBeenSet = true; m_alarmModelName = std::forward<AlarmModelNameT>(value); }
    template<typename AlarmModelNameT = Aws::String>
    Alarm& WithAlarmModelName(AlarmModelNameT&& value) { SetAlarmModelName(std::forward<AlarmModelNameT>(value)); return *this;}
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
    Alarm& WithAlarmModelVersion(AlarmModelVersionT&& value) { SetAlarmModelVersion(std::forward<AlarmModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the key used as a filter to select only the alarms associated
     * with the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_CreateAlarmModel.html#iotevents-CreateAlarmModel-request-key">key</a>.</p>
     */
    inline const Aws::String& GetKeyValue() const { return m_keyValue; }
    inline bool KeyValueHasBeenSet() const { return m_keyValueHasBeenSet; }
    template<typename KeyValueT = Aws::String>
    void SetKeyValue(KeyValueT&& value) { m_keyValueHasBeenSet = true; m_keyValue = std::forward<KeyValueT>(value); }
    template<typename KeyValueT = Aws::String>
    Alarm& WithKeyValue(KeyValueT&& value) { SetKeyValue(std::forward<KeyValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the current state of the alarm.</p>
     */
    inline const AlarmState& GetAlarmState() const { return m_alarmState; }
    inline bool AlarmStateHasBeenSet() const { return m_alarmStateHasBeenSet; }
    template<typename AlarmStateT = AlarmState>
    void SetAlarmState(AlarmStateT&& value) { m_alarmStateHasBeenSet = true; m_alarmState = std::forward<AlarmStateT>(value); }
    template<typename AlarmStateT = AlarmState>
    Alarm& WithAlarmState(AlarmStateT&& value) { SetAlarmState(std::forward<AlarmStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A non-negative integer that reflects the severity level of the alarm.</p>
     */
    inline int GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(int value) { m_severityHasBeenSet = true; m_severity = value; }
    inline Alarm& WithSeverity(int value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the alarm was created, in the Unix epoch format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Alarm& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the alarm was last updated, in the Unix epoch format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    Alarm& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_alarmModelName;
    bool m_alarmModelNameHasBeenSet = false;

    Aws::String m_alarmModelVersion;
    bool m_alarmModelVersionHasBeenSet = false;

    Aws::String m_keyValue;
    bool m_keyValueHasBeenSet = false;

    AlarmState m_alarmState;
    bool m_alarmStateHasBeenSet = false;

    int m_severity{0};
    bool m_severityHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
