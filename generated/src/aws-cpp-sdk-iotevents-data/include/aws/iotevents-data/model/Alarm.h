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
    AWS_IOTEVENTSDATA_API Alarm();
    AWS_IOTEVENTSDATA_API Alarm(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Alarm& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline Alarm& WithAlarmModelName(const Aws::String& value) { SetAlarmModelName(value); return *this;}

    /**
     * <p>The name of the alarm model.</p>
     */
    inline Alarm& WithAlarmModelName(Aws::String&& value) { SetAlarmModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the alarm model.</p>
     */
    inline Alarm& WithAlarmModelName(const char* value) { SetAlarmModelName(value); return *this;}


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
    inline Alarm& WithAlarmModelVersion(const Aws::String& value) { SetAlarmModelVersion(value); return *this;}

    /**
     * <p>The version of the alarm model.</p>
     */
    inline Alarm& WithAlarmModelVersion(Aws::String&& value) { SetAlarmModelVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the alarm model.</p>
     */
    inline Alarm& WithAlarmModelVersion(const char* value) { SetAlarmModelVersion(value); return *this;}


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
    inline Alarm& WithKeyValue(const Aws::String& value) { SetKeyValue(value); return *this;}

    /**
     * <p>The value of the key used as a filter to select only the alarms associated
     * with the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_CreateAlarmModel.html#iotevents-CreateAlarmModel-request-key">key</a>.</p>
     */
    inline Alarm& WithKeyValue(Aws::String&& value) { SetKeyValue(std::move(value)); return *this;}

    /**
     * <p>The value of the key used as a filter to select only the alarms associated
     * with the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_CreateAlarmModel.html#iotevents-CreateAlarmModel-request-key">key</a>.</p>
     */
    inline Alarm& WithKeyValue(const char* value) { SetKeyValue(value); return *this;}


    /**
     * <p>Contains information about the current state of the alarm.</p>
     */
    inline const AlarmState& GetAlarmState() const{ return m_alarmState; }

    /**
     * <p>Contains information about the current state of the alarm.</p>
     */
    inline bool AlarmStateHasBeenSet() const { return m_alarmStateHasBeenSet; }

    /**
     * <p>Contains information about the current state of the alarm.</p>
     */
    inline void SetAlarmState(const AlarmState& value) { m_alarmStateHasBeenSet = true; m_alarmState = value; }

    /**
     * <p>Contains information about the current state of the alarm.</p>
     */
    inline void SetAlarmState(AlarmState&& value) { m_alarmStateHasBeenSet = true; m_alarmState = std::move(value); }

    /**
     * <p>Contains information about the current state of the alarm.</p>
     */
    inline Alarm& WithAlarmState(const AlarmState& value) { SetAlarmState(value); return *this;}

    /**
     * <p>Contains information about the current state of the alarm.</p>
     */
    inline Alarm& WithAlarmState(AlarmState&& value) { SetAlarmState(std::move(value)); return *this;}


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
    inline Alarm& WithSeverity(int value) { SetSeverity(value); return *this;}


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
    inline Alarm& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the alarm was created, in the Unix epoch format.</p>
     */
    inline Alarm& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


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
    inline Alarm& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The time the alarm was last updated, in the Unix epoch format.</p>
     */
    inline Alarm& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_alarmModelName;
    bool m_alarmModelNameHasBeenSet = false;

    Aws::String m_alarmModelVersion;
    bool m_alarmModelVersionHasBeenSet = false;

    Aws::String m_keyValue;
    bool m_keyValueHasBeenSet = false;

    AlarmState m_alarmState;
    bool m_alarmStateHasBeenSet = false;

    int m_severity;
    bool m_severityHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
