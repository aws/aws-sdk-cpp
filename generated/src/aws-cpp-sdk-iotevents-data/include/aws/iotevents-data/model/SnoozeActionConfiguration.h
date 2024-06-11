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
   * <p>Contains the configuration information of a snooze action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-data-2018-10-23/SnoozeActionConfiguration">AWS
   * API Reference</a></p>
   */
  class SnoozeActionConfiguration
  {
  public:
    AWS_IOTEVENTSDATA_API SnoozeActionConfiguration();
    AWS_IOTEVENTSDATA_API SnoozeActionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API SnoozeActionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTSDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The snooze time in seconds. The alarm automatically changes to the
     * <code>NORMAL</code> state after this duration.</p>
     */
    inline int GetSnoozeDuration() const{ return m_snoozeDuration; }
    inline bool SnoozeDurationHasBeenSet() const { return m_snoozeDurationHasBeenSet; }
    inline void SetSnoozeDuration(int value) { m_snoozeDurationHasBeenSet = true; m_snoozeDuration = value; }
    inline SnoozeActionConfiguration& WithSnoozeDuration(int value) { SetSnoozeDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The note that you can leave when you snooze the alarm.</p>
     */
    inline const Aws::String& GetNote() const{ return m_note; }
    inline bool NoteHasBeenSet() const { return m_noteHasBeenSet; }
    inline void SetNote(const Aws::String& value) { m_noteHasBeenSet = true; m_note = value; }
    inline void SetNote(Aws::String&& value) { m_noteHasBeenSet = true; m_note = std::move(value); }
    inline void SetNote(const char* value) { m_noteHasBeenSet = true; m_note.assign(value); }
    inline SnoozeActionConfiguration& WithNote(const Aws::String& value) { SetNote(value); return *this;}
    inline SnoozeActionConfiguration& WithNote(Aws::String&& value) { SetNote(std::move(value)); return *this;}
    inline SnoozeActionConfiguration& WithNote(const char* value) { SetNote(value); return *this;}
    ///@}
  private:

    int m_snoozeDuration;
    bool m_snoozeDurationHasBeenSet = false;

    Aws::String m_note;
    bool m_noteHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
