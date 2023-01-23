/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
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
   * <p>Event sent from Amazon Lex V2 to your client application that contains a
   * transcript of voice audio. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/TranscriptEvent">AWS
   * API Reference</a></p>
   */
  class TranscriptEvent
  {
  public:
    AWS_LEXRUNTIMEV2_API TranscriptEvent();
    AWS_LEXRUNTIMEV2_API TranscriptEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API TranscriptEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The transcript of the voice audio from the user.</p>
     */
    inline const Aws::String& GetTranscript() const{ return m_transcript; }

    /**
     * <p>The transcript of the voice audio from the user.</p>
     */
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }

    /**
     * <p>The transcript of the voice audio from the user.</p>
     */
    inline void SetTranscript(const Aws::String& value) { m_transcriptHasBeenSet = true; m_transcript = value; }

    /**
     * <p>The transcript of the voice audio from the user.</p>
     */
    inline void SetTranscript(Aws::String&& value) { m_transcriptHasBeenSet = true; m_transcript = std::move(value); }

    /**
     * <p>The transcript of the voice audio from the user.</p>
     */
    inline void SetTranscript(const char* value) { m_transcriptHasBeenSet = true; m_transcript.assign(value); }

    /**
     * <p>The transcript of the voice audio from the user.</p>
     */
    inline TranscriptEvent& WithTranscript(const Aws::String& value) { SetTranscript(value); return *this;}

    /**
     * <p>The transcript of the voice audio from the user.</p>
     */
    inline TranscriptEvent& WithTranscript(Aws::String&& value) { SetTranscript(std::move(value)); return *this;}

    /**
     * <p>The transcript of the voice audio from the user.</p>
     */
    inline TranscriptEvent& WithTranscript(const char* value) { SetTranscript(value); return *this;}


    /**
     * <p>A unique identifier of the event sent by Amazon Lex V2. The identifier is in
     * the form <code>RESPONSE-N</code>, where N is a number starting with one and
     * incremented for each event sent by Amazon Lex V2 in the current session.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>A unique identifier of the event sent by Amazon Lex V2. The identifier is in
     * the form <code>RESPONSE-N</code>, where N is a number starting with one and
     * incremented for each event sent by Amazon Lex V2 in the current session.</p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p>A unique identifier of the event sent by Amazon Lex V2. The identifier is in
     * the form <code>RESPONSE-N</code>, where N is a number starting with one and
     * incremented for each event sent by Amazon Lex V2 in the current session.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>A unique identifier of the event sent by Amazon Lex V2. The identifier is in
     * the form <code>RESPONSE-N</code>, where N is a number starting with one and
     * incremented for each event sent by Amazon Lex V2 in the current session.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>A unique identifier of the event sent by Amazon Lex V2. The identifier is in
     * the form <code>RESPONSE-N</code>, where N is a number starting with one and
     * incremented for each event sent by Amazon Lex V2 in the current session.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>A unique identifier of the event sent by Amazon Lex V2. The identifier is in
     * the form <code>RESPONSE-N</code>, where N is a number starting with one and
     * incremented for each event sent by Amazon Lex V2 in the current session.</p>
     */
    inline TranscriptEvent& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>A unique identifier of the event sent by Amazon Lex V2. The identifier is in
     * the form <code>RESPONSE-N</code>, where N is a number starting with one and
     * incremented for each event sent by Amazon Lex V2 in the current session.</p>
     */
    inline TranscriptEvent& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier of the event sent by Amazon Lex V2. The identifier is in
     * the form <code>RESPONSE-N</code>, where N is a number starting with one and
     * incremented for each event sent by Amazon Lex V2 in the current session.</p>
     */
    inline TranscriptEvent& WithEventId(const char* value) { SetEventId(value); return *this;}

  private:

    Aws::String m_transcript;
    bool m_transcriptHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
