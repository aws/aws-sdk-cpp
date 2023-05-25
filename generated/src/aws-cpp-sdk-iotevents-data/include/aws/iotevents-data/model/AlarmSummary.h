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
    AWS_IOTEVENTSDATA_API AlarmSummary();
    AWS_IOTEVENTSDATA_API AlarmSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API AlarmSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline AlarmSummary& WithAlarmModelName(const Aws::String& value) { SetAlarmModelName(value); return *this;}

    /**
     * <p>The name of the alarm model.</p>
     */
    inline AlarmSummary& WithAlarmModelName(Aws::String&& value) { SetAlarmModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the alarm model.</p>
     */
    inline AlarmSummary& WithAlarmModelName(const char* value) { SetAlarmModelName(value); return *this;}


    /**
     * <p>The version of the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelVersion() const{ return m_alarmModelVersion; }

    /**
     * <p>The version of the alarm model.</p>
     */
    inline bool AlarmModelVersionHasBeenSet() const { return m_alarmModelVersionHasBeenSet; }

    /**
     * <p>The version of the alarm model.</p>
     */
    inline void SetAlarmModelVersion(const Aws::String& value) { m_alarmModelVersionHasBeenSet = true; m_alarmModelVersion = value; }

    /**
     * <p>The version of the alarm model.</p>
     */
    inline void SetAlarmModelVersion(Aws::String&& value) { m_alarmModelVersionHasBeenSet = true; m_alarmModelVersion = std::move(value); }

    /**
     * <p>The version of the alarm model.</p>
     */
    inline void SetAlarmModelVersion(const char* value) { m_alarmModelVersionHasBeenSet = true; m_alarmModelVersion.assign(value); }

    /**
     * <p>The version of the alarm model.</p>
     */
    inline AlarmSummary& WithAlarmModelVersion(const Aws::String& value) { SetAlarmModelVersion(value); return *this;}

    /**
     * <p>The version of the alarm model.</p>
     */
    inline AlarmSummary& WithAlarmModelVersion(Aws::String&& value) { SetAlarmModelVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the alarm model.</p>
     */
    inline AlarmSummary& WithAlarmModelVersion(const char* value) { SetAlarmModelVersion(value); return *this;}


    /**
     * <p>The value of the key used as a filter to select only the alarms associated
     * with the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_CreateAlarmModel.html#iotevents-CreateAlarmModel-request-key">key</a>.</p>
     */
    inline const Aws::String& GetKeyValue() const{ return m_keyValue; }

    /**
     * <p>The value of the key used as a filter to select only the alarms associated
     * with the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_CreateAlarmModel.html#iotevents-CreateAlarmModel-request-key">key</a>.</p>
     */
    inline bool KeyValueHasBeenSet() const { return m_keyValueHasBeenSet; }

    /**
     * <p>The value of the key used as a filter to select only the alarms associated
     * with the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_CreateAlarmModel.html#iotevents-CreateAlarmModel-request-key">key</a>.</p>
     */
    inline void SetKeyValue(const Aws::String& value) { m_keyValueHasBeenSet = true; m_keyValue = value; }

    /**
     * <p>The value of the key used as a filter to select only the alarms associated
     * with the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_CreateAlarmModel.html#iotevents-CreateAlarmModel-request-key">key</a>.</p>
     */
    inline void SetKeyValue(Aws::String&& value) { m_keyValueHasBeenSet = true; m_keyValue = std::move(value); }

    /**
     * <p>The value of the key used as a filter to select only the alarms associated
     * with the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_CreateAlarmModel.html#iotevents-CreateAlarmModel-request-key">key</a>.</p>
     */
    inline void SetKeyValue(const char* value) { m_keyValueHasBeenSet = true; m_keyValue.assign(value); }

    /**
     * <p>The value of the key used as a filter to select only the alarms associated
     * with the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_CreateAlarmModel.html#iotevents-CreateAlarmModel-request-key">key</a>.</p>
     */
    inline AlarmSummary& WithKeyValue(const Aws::String& value) { SetKeyValue(value); return *this;}

    /**
     * <p>The value of the key used as a filter to select only the alarms associated
     * with the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_CreateAlarmModel.html#iotevents-CreateAlarmModel-request-key">key</a>.</p>
     */
    inline AlarmSummary& WithKeyValue(Aws::String&& value) { SetKeyValue(std::move(value)); return *this;}

    /**
     * <p>The value of the key used as a filter to select only the alarms associated
     * with the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_CreateAlarmModel.html#iotevents-CreateAlarmModel-request-key">key</a>.</p>
     */
    inline AlarmSummary& WithKeyValue(const char* value) { SetKeyValue(value); return *this;}


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
    inline const AlarmStateName& GetStateName() const{ return m_stateName; }

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
    inline bool StateNameHasBeenSet() const { return m_stateNameHasBeenSet; }

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
    inline void SetStateName(const AlarmStateName& value) { m_stateNameHasBeenSet = true; m_stateName = value; }

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
    inline void SetStateName(AlarmStateName&& value) { m_stateNameHasBeenSet = true; m_stateName = std::move(value); }

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
    inline AlarmSummary& WithStateName(const AlarmStateName& value) { SetStateName(value); return *this;}

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
    inline AlarmSummary& WithStateName(AlarmStateName&& value) { SetStateName(std::move(value)); return *this;}


    /**
     * <p>The time the alarm was created, in the Unix epoch format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the alarm was created, in the Unix epoch format.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time the alarm was created, in the Unix epoch format.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time the alarm was created, in the Unix epoch format.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time the alarm was created, in the Unix epoch format.</p>
     */
    inline AlarmSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the alarm was created, in the Unix epoch format.</p>
     */
    inline AlarmSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time the alarm was last updated, in the Unix epoch format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The time the alarm was last updated, in the Unix epoch format.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>The time the alarm was last updated, in the Unix epoch format.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The time the alarm was last updated, in the Unix epoch format.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>The time the alarm was last updated, in the Unix epoch format.</p>
     */
    inline AlarmSummary& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The time the alarm was last updated, in the Unix epoch format.</p>
     */
    inline AlarmSummary& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_alarmModelName;
    bool m_alarmModelNameHasBeenSet = false;

    Aws::String m_alarmModelVersion;
    bool m_alarmModelVersionHasBeenSet = false;

    Aws::String m_keyValue;
    bool m_keyValueHasBeenSet = false;

    AlarmStateName m_stateName;
    bool m_stateNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
