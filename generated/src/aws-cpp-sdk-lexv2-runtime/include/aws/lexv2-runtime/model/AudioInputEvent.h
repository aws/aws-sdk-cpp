/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
   * <p>Represents a chunk of audio sent from the client application to Amazon Lex
   * V2. The audio is all or part of an utterance from the user.</p> <p>Amazon Lex V2
   * accumulates audio chunks until it recognizes a natural pause in speech before
   * processing the input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/AudioInputEvent">AWS
   * API Reference</a></p>
   */
  class AudioInputEvent
  {
  public:
    AWS_LEXRUNTIMEV2_API AudioInputEvent() = default;
    AWS_LEXRUNTIMEV2_API AudioInputEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API AudioInputEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An encoded stream of audio.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetAudioChunk() const { return m_audioChunk; }
    inline bool AudioChunkHasBeenSet() const { return m_audioChunkHasBeenSet; }
    template<typename AudioChunkT = Aws::Utils::ByteBuffer>
    void SetAudioChunk(AudioChunkT&& value) { m_audioChunkHasBeenSet = true; m_audioChunk = std::forward<AudioChunkT>(value); }
    template<typename AudioChunkT = Aws::Utils::ByteBuffer>
    AudioInputEvent& WithAudioChunk(AudioChunkT&& value) { SetAudioChunk(std::forward<AudioChunkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encoding used for the audio chunk. You must use 8 KHz PCM 16-bit
     * mono-channel little-endian format. The value of the field should be:</p> <p>
     * <code>audio/lpcm; sample-rate=8000; sample-size-bits=16; channel-count=1;
     * is-big-endian=false</code> </p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    AudioInputEvent& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    AudioInputEvent& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp set by the client of the date and time that the event was sent to
     * Amazon Lex V2.</p>
     */
    inline long long GetClientTimestampMillis() const { return m_clientTimestampMillis; }
    inline bool ClientTimestampMillisHasBeenSet() const { return m_clientTimestampMillisHasBeenSet; }
    inline void SetClientTimestampMillis(long long value) { m_clientTimestampMillisHasBeenSet = true; m_clientTimestampMillis = value; }
    inline AudioInputEvent& WithClientTimestampMillis(long long value) { SetClientTimestampMillis(value); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_audioChunk{};
    bool m_audioChunkHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    long long m_clientTimestampMillis{0};
    bool m_clientTimestampMillisHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
