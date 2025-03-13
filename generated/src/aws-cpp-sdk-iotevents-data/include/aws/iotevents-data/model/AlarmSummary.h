/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents-data/model/AlarmStateName.h>
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
   * <p>Contains a summary of an alarm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/AlarmSummary">AWS
   * API Reference</a></p>
   */
  class AlarmSummary
  {
  public:
    AWS_IOTEVENTSDATA_API AlarmSummary() = default;
    AWS_IOTEVENTSDATA_API AlarmSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API AlarmSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    AlarmSummary& WithAlarmModelName(AlarmModelNameT&& value) { SetAlarmModelName(std::forward<AlarmModelNameT>(value)); return *this;}
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
    AlarmSummary& WithAlarmModelVersion(AlarmModelVersionT&& value) { SetAlarmModelVersion(std::forward<AlarmModelVersionT>(value)); return *this;}
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
    AlarmSummary& WithKeyValue(KeyValueT&& value) { SetKeyValue(std::forward<KeyValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the alarm state. The state name can be one of the following
     * values:</p> <ul> <li> <p> <code>DISABLED</code> - When the alarm is in the
     * <code>DISABLED</code> state, it isn't ready to evaluate data. To enable the
     * alarm, you must change the alarm to the <code>NORMAL</code> state.</p> </li>
     * <li> <p> <code>NORMAL</code> - When the alarm is in the <code>NORMAL</code>
     * state, it's ready to evaluate data.</p> </li> <li> <p> <code>ACTIVE</code> - If
     * the alarm is in the <code>ACTIVE</code> state, the alarm is invoked.</p> </li>
     * <li> <p> <code>ACKNOWLEDGED</code> - When the alarm is in the
     * <code>ACKNOWLEDGED</code> state, the alarm was invoked and you acknowledged the
     * alarm.</p> </li> <li> <p> <code>SNOOZE_DISABLED</code> - When the alarm is in
     * the <code>SNOOZE_DISABLED</code> state, the alarm is disabled for a specified
     * period of time. After the snooze time, the alarm automatically changes to the
     * <code>NORMAL</code> state. </p> </li> <li> <p> <code>LATCHED</code> - When the
     * alarm is in the <code>LATCHED</code> state, the alarm was invoked. However, the
     * data that the alarm is currently evaluating is within the specified range. To
     * change the alarm to the <code>NORMAL</code> state, you must acknowledge the
     * alarm.</p> </li> </ul>
     */
    inline AlarmStateName GetStateName() const { return m_stateName; }
    inline bool StateNameHasBeenSet() const { return m_stateNameHasBeenSet; }
    inline void SetStateName(AlarmStateName value) { m_stateNameHasBeenSet = true; m_stateName = value; }
    inline AlarmSummary& WithStateName(AlarmStateName value) { SetStateName(value); return *this;}
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
    AlarmSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
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
    AlarmSummary& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_alarmModelName;
    bool m_alarmModelNameHasBeenSet = false;

    Aws::String m_alarmModelVersion;
    bool m_alarmModelVersionHasBeenSet = false;

    Aws::String m_keyValue;
    bool m_keyValueHasBeenSet = false;

    AlarmStateName m_stateName{AlarmStateName::NOT_SET};
    bool m_stateNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
