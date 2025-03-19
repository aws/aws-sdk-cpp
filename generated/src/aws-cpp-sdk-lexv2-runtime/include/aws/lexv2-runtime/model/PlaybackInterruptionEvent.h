/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/lexv2-runtime/model/PlaybackInterruptionReason.h>
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
namespace LexRuntimeV2
{
namespace Model
{

  /**
   * <p>Event sent from Amazon Lex V2 to indicate to the client application should
   * stop playback of audio. For example, if the client is playing a prompt that asks
   * for the user's telephone number, the user might start to say the phone number
   * before the prompt is complete. Amazon Lex V2 sends this event to the client
   * application to indicate that the user is responding and that Amazon Lex V2 is
   * processing their input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/PlaybackInterruptionEvent">AWS
   * API Reference</a></p>
   */
  class PlaybackInterruptionEvent
  {
  public:
    AWS_LEXRUNTIMEV2_API PlaybackInterruptionEvent() = default;
    AWS_LEXRUNTIMEV2_API PlaybackInterruptionEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API PlaybackInterruptionEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the type of user input that Amazon Lex V2 detected.</p>
     */
    inline PlaybackInterruptionReason GetEventReason() const { return m_eventReason; }
    inline bool EventReasonHasBeenSet() const { return m_eventReasonHasBeenSet; }
    inline void SetEventReason(PlaybackInterruptionReason value) { m_eventReasonHasBeenSet = true; m_eventReason = value; }
    inline PlaybackInterruptionEvent& WithEventReason(PlaybackInterruptionReason value) { SetEventReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the event that contained the audio, DTMF, or text that
     * caused the interruption.</p>
     */
    inline const Aws::String& GetCausedByEventId() const { return m_causedByEventId; }
    inline bool CausedByEventIdHasBeenSet() const { return m_causedByEventIdHasBeenSet; }
    template<typename CausedByEventIdT = Aws::String>
    void SetCausedByEventId(CausedByEventIdT&& value) { m_causedByEventIdHasBeenSet = true; m_causedByEventId = std::forward<CausedByEventIdT>(value); }
    template<typename CausedByEventIdT = Aws::String>
    PlaybackInterruptionEvent& WithCausedByEventId(CausedByEventIdT&& value) { SetCausedByEventId(std::forward<CausedByEventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier of the event sent by Amazon Lex V2. The identifier is in
     * the form <code>RESPONSE-N</code>, where N is a number starting with one and
     * incremented for each event sent by Amazon Lex V2 in the current session.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    PlaybackInterruptionEvent& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}
  private:

    PlaybackInterruptionReason m_eventReason{PlaybackInterruptionReason::NOT_SET};
    bool m_eventReasonHasBeenSet = false;

    Aws::String m_causedByEventId;
    bool m_causedByEventIdHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
