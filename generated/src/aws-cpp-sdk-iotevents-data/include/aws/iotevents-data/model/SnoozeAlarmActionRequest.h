/**
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
  class SnoozeAlarmActionRequest
  {
  public:
    AWS_IOTEVENTSDATA_API SnoozeAlarmActionRequest() = default;
    AWS_IOTEVENTSDATA_API SnoozeAlarmActionRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API SnoozeAlarmActionRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The request ID. Each ID must be unique within each batch.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SnoozeAlarmActionRequest& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelName() const { return m_alarmModelName; }
    inline bool AlarmModelNameHasBeenSet() const { return m_alarmModelNameHasBeenSet; }
    template<typename AlarmModelNameT = Aws::String>
    void SetAlarmModelName(AlarmModelNameT&& value) { m_alarmModelNameHasBeenSet = true; m_alarmModelName = std::forward<AlarmModelNameT>(value); }
    template<typename AlarmModelNameT = Aws::String>
    SnoozeAlarmActionRequest& WithAlarmModelName(AlarmModelNameT&& value) { SetAlarmModelName(std::forward<AlarmModelNameT>(value)); return *this;}
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
    SnoozeAlarmActionRequest& WithKeyValue(KeyValueT&& value) { SetKeyValue(std::forward<KeyValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The note that you can leave when you snooze the alarm.</p>
     */
    inline const Aws::String& GetNote() const { return m_note; }
    inline bool NoteHasBeenSet() const { return m_noteHasBeenSet; }
    template<typename NoteT = Aws::String>
    void SetNote(NoteT&& value) { m_noteHasBeenSet = true; m_note = std::forward<NoteT>(value); }
    template<typename NoteT = Aws::String>
    SnoozeAlarmActionRequest& WithNote(NoteT&& value) { SetNote(std::forward<NoteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snooze time in seconds. The alarm automatically changes to the
     * <code>NORMAL</code> state after this duration.</p>
     */
    inline int GetSnoozeDuration() const { return m_snoozeDuration; }
    inline bool SnoozeDurationHasBeenSet() const { return m_snoozeDurationHasBeenSet; }
    inline void SetSnoozeDuration(int value) { m_snoozeDurationHasBeenSet = true; m_snoozeDuration = value; }
    inline SnoozeAlarmActionRequest& WithSnoozeDuration(int value) { SetSnoozeDuration(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_alarmModelName;
    bool m_alarmModelNameHasBeenSet = false;

    Aws::String m_keyValue;
    bool m_keyValueHasBeenSet = false;

    Aws::String m_note;
    bool m_noteHasBeenSet = false;

    int m_snoozeDuration{0};
    bool m_snoozeDurationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
