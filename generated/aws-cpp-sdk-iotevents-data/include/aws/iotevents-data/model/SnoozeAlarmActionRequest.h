﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Information needed to snooze the alarm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/SnoozeAlarmActionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_IOTEVENTSDATA_API SnoozeAlarmActionRequest
  {
  public:
    SnoozeAlarmActionRequest();
    SnoozeAlarmActionRequest(Aws::Utils::Json::JsonView jsonValue);
    SnoozeAlarmActionRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The request ID. Each ID must be unique within each batch.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The request ID. Each ID must be unique within each batch.</p>
     */
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    /**
     * <p>The request ID. Each ID must be unique within each batch.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    /**
     * <p>The request ID. Each ID must be unique within each batch.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    /**
     * <p>The request ID. Each ID must be unique within each batch.</p>
     */
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    /**
     * <p>The request ID. Each ID must be unique within each batch.</p>
     */
    inline SnoozeAlarmActionRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The request ID. Each ID must be unique within each batch.</p>
     */
    inline SnoozeAlarmActionRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The request ID. Each ID must be unique within each batch.</p>
     */
    inline SnoozeAlarmActionRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}


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
    inline SnoozeAlarmActionRequest& WithAlarmModelName(const Aws::String& value) { SetAlarmModelName(value); return *this;}

    /**
     * <p>The name of the alarm model.</p>
     */
    inline SnoozeAlarmActionRequest& WithAlarmModelName(Aws::String&& value) { SetAlarmModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the alarm model.</p>
     */
    inline SnoozeAlarmActionRequest& WithAlarmModelName(const char* value) { SetAlarmModelName(value); return *this;}


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
    inline SnoozeAlarmActionRequest& WithKeyValue(const Aws::String& value) { SetKeyValue(value); return *this;}

    /**
     * <p>The value of the key used as a filter to select only the alarms associated
     * with the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_CreateAlarmModel.html#iotevents-CreateAlarmModel-request-key">key</a>.</p>
     */
    inline SnoozeAlarmActionRequest& WithKeyValue(Aws::String&& value) { SetKeyValue(std::move(value)); return *this;}

    /**
     * <p>The value of the key used as a filter to select only the alarms associated
     * with the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_CreateAlarmModel.html#iotevents-CreateAlarmModel-request-key">key</a>.</p>
     */
    inline SnoozeAlarmActionRequest& WithKeyValue(const char* value) { SetKeyValue(value); return *this;}


    /**
     * <p>The note that you can leave when you snooze the alarm.</p>
     */
    inline const Aws::String& GetNote() const{ return m_note; }

    /**
     * <p>The note that you can leave when you snooze the alarm.</p>
     */
    inline bool NoteHasBeenSet() const { return m_noteHasBeenSet; }

    /**
     * <p>The note that you can leave when you snooze the alarm.</p>
     */
    inline void SetNote(const Aws::String& value) { m_noteHasBeenSet = true; m_note = value; }

    /**
     * <p>The note that you can leave when you snooze the alarm.</p>
     */
    inline void SetNote(Aws::String&& value) { m_noteHasBeenSet = true; m_note = std::move(value); }

    /**
     * <p>The note that you can leave when you snooze the alarm.</p>
     */
    inline void SetNote(const char* value) { m_noteHasBeenSet = true; m_note.assign(value); }

    /**
     * <p>The note that you can leave when you snooze the alarm.</p>
     */
    inline SnoozeAlarmActionRequest& WithNote(const Aws::String& value) { SetNote(value); return *this;}

    /**
     * <p>The note that you can leave when you snooze the alarm.</p>
     */
    inline SnoozeAlarmActionRequest& WithNote(Aws::String&& value) { SetNote(std::move(value)); return *this;}

    /**
     * <p>The note that you can leave when you snooze the alarm.</p>
     */
    inline SnoozeAlarmActionRequest& WithNote(const char* value) { SetNote(value); return *this;}


    /**
     * <p>The snooze time in seconds. The alarm automatically changes to the
     * <code>NORMAL</code> state after this duration.</p>
     */
    inline int GetSnoozeDuration() const{ return m_snoozeDuration; }

    /**
     * <p>The snooze time in seconds. The alarm automatically changes to the
     * <code>NORMAL</code> state after this duration.</p>
     */
    inline bool SnoozeDurationHasBeenSet() const { return m_snoozeDurationHasBeenSet; }

    /**
     * <p>The snooze time in seconds. The alarm automatically changes to the
     * <code>NORMAL</code> state after this duration.</p>
     */
    inline void SetSnoozeDuration(int value) { m_snoozeDurationHasBeenSet = true; m_snoozeDuration = value; }

    /**
     * <p>The snooze time in seconds. The alarm automatically changes to the
     * <code>NORMAL</code> state after this duration.</p>
     */
    inline SnoozeAlarmActionRequest& WithSnoozeDuration(int value) { SetSnoozeDuration(value); return *this;}

  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet;

    Aws::String m_alarmModelName;
    bool m_alarmModelNameHasBeenSet;

    Aws::String m_keyValue;
    bool m_keyValueHasBeenSet;

    Aws::String m_note;
    bool m_noteHasBeenSet;

    int m_snoozeDuration;
    bool m_snoozeDurationHasBeenSet;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
