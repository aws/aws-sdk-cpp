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
   * <p>Information needed to enable the alarm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/EnableAlarmActionRequest">AWS
   * API Reference</a></p>
   */
  class EnableAlarmActionRequest
  {
  public:
    AWS_IOTEVENTSDATA_API EnableAlarmActionRequest();
    AWS_IOTEVENTSDATA_API EnableAlarmActionRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API EnableAlarmActionRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The request ID. Each ID must be unique within each batch.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline EnableAlarmActionRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline EnableAlarmActionRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline EnableAlarmActionRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelName() const{ return m_alarmModelName; }
    inline bool AlarmModelNameHasBeenSet() const { return m_alarmModelNameHasBeenSet; }
    inline void SetAlarmModelName(const Aws::String& value) { m_alarmModelNameHasBeenSet = true; m_alarmModelName = value; }
    inline void SetAlarmModelName(Aws::String&& value) { m_alarmModelNameHasBeenSet = true; m_alarmModelName = std::move(value); }
    inline void SetAlarmModelName(const char* value) { m_alarmModelNameHasBeenSet = true; m_alarmModelName.assign(value); }
    inline EnableAlarmActionRequest& WithAlarmModelName(const Aws::String& value) { SetAlarmModelName(value); return *this;}
    inline EnableAlarmActionRequest& WithAlarmModelName(Aws::String&& value) { SetAlarmModelName(std::move(value)); return *this;}
    inline EnableAlarmActionRequest& WithAlarmModelName(const char* value) { SetAlarmModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the key used as a filter to select only the alarms associated
     * with the <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_CreateAlarmModel.html#iotevents-CreateAlarmModel-request-key">key</a>.</p>
     */
    inline const Aws::String& GetKeyValue() const{ return m_keyValue; }
    inline bool KeyValueHasBeenSet() const { return m_keyValueHasBeenSet; }
    inline void SetKeyValue(const Aws::String& value) { m_keyValueHasBeenSet = true; m_keyValue = value; }
    inline void SetKeyValue(Aws::String&& value) { m_keyValueHasBeenSet = true; m_keyValue = std::move(value); }
    inline void SetKeyValue(const char* value) { m_keyValueHasBeenSet = true; m_keyValue.assign(value); }
    inline EnableAlarmActionRequest& WithKeyValue(const Aws::String& value) { SetKeyValue(value); return *this;}
    inline EnableAlarmActionRequest& WithKeyValue(Aws::String&& value) { SetKeyValue(std::move(value)); return *this;}
    inline EnableAlarmActionRequest& WithKeyValue(const char* value) { SetKeyValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The note that you can leave when you enable the alarm.</p>
     */
    inline const Aws::String& GetNote() const{ return m_note; }
    inline bool NoteHasBeenSet() const { return m_noteHasBeenSet; }
    inline void SetNote(const Aws::String& value) { m_noteHasBeenSet = true; m_note = value; }
    inline void SetNote(Aws::String&& value) { m_noteHasBeenSet = true; m_note = std::move(value); }
    inline void SetNote(const char* value) { m_noteHasBeenSet = true; m_note.assign(value); }
    inline EnableAlarmActionRequest& WithNote(const Aws::String& value) { SetNote(value); return *this;}
    inline EnableAlarmActionRequest& WithNote(Aws::String&& value) { SetNote(std::move(value)); return *this;}
    inline EnableAlarmActionRequest& WithNote(const char* value) { SetNote(value); return *this;}
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
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
