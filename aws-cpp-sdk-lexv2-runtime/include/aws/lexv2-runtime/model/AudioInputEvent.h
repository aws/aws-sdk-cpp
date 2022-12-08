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
    AWS_LEXRUNTIMEV2_API AudioInputEvent();
    AWS_LEXRUNTIMEV2_API AudioInputEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API AudioInputEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An encoded stream of audio.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetAudioChunk() const{ return m_audioChunk; }

    /**
     * <p>An encoded stream of audio.</p>
     */
    inline bool AudioChunkHasBeenSet() const { return m_audioChunkHasBeenSet; }

    /**
     * <p>An encoded stream of audio.</p>
     */
    inline void SetAudioChunk(const Aws::Utils::ByteBuffer& value) { m_audioChunkHasBeenSet = true; m_audioChunk = value; }

    /**
     * <p>An encoded stream of audio.</p>
     */
    inline void SetAudioChunk(Aws::Utils::ByteBuffer&& value) { m_audioChunkHasBeenSet = true; m_audioChunk = std::move(value); }

    /**
     * <p>An encoded stream of audio.</p>
     */
    inline AudioInputEvent& WithAudioChunk(const Aws::Utils::ByteBuffer& value) { SetAudioChunk(value); return *this;}

    /**
     * <p>An encoded stream of audio.</p>
     */
    inline AudioInputEvent& WithAudioChunk(Aws::Utils::ByteBuffer&& value) { SetAudioChunk(std::move(value)); return *this;}


    /**
     * <p>The encoding used for the audio chunk. You must use 8 KHz PCM 16-bit
     * mono-channel little-endian format. The value of the field should be:</p> <p>
     * <code>audio/lpcm; sample-rate=8000; sample-size-bits=16; channel-count=1;
     * is-big-endian=false</code> </p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The encoding used for the audio chunk. You must use 8 KHz PCM 16-bit
     * mono-channel little-endian format. The value of the field should be:</p> <p>
     * <code>audio/lpcm; sample-rate=8000; sample-size-bits=16; channel-count=1;
     * is-big-endian=false</code> </p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The encoding used for the audio chunk. You must use 8 KHz PCM 16-bit
     * mono-channel little-endian format. The value of the field should be:</p> <p>
     * <code>audio/lpcm; sample-rate=8000; sample-size-bits=16; channel-count=1;
     * is-big-endian=false</code> </p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The encoding used for the audio chunk. You must use 8 KHz PCM 16-bit
     * mono-channel little-endian format. The value of the field should be:</p> <p>
     * <code>audio/lpcm; sample-rate=8000; sample-size-bits=16; channel-count=1;
     * is-big-endian=false</code> </p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The encoding used for the audio chunk. You must use 8 KHz PCM 16-bit
     * mono-channel little-endian format. The value of the field should be:</p> <p>
     * <code>audio/lpcm; sample-rate=8000; sample-size-bits=16; channel-count=1;
     * is-big-endian=false</code> </p>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>The encoding used for the audio chunk. You must use 8 KHz PCM 16-bit
     * mono-channel little-endian format. The value of the field should be:</p> <p>
     * <code>audio/lpcm; sample-rate=8000; sample-size-bits=16; channel-count=1;
     * is-big-endian=false</code> </p>
     */
    inline AudioInputEvent& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The encoding used for the audio chunk. You must use 8 KHz PCM 16-bit
     * mono-channel little-endian format. The value of the field should be:</p> <p>
     * <code>audio/lpcm; sample-rate=8000; sample-size-bits=16; channel-count=1;
     * is-big-endian=false</code> </p>
     */
    inline AudioInputEvent& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The encoding used for the audio chunk. You must use 8 KHz PCM 16-bit
     * mono-channel little-endian format. The value of the field should be:</p> <p>
     * <code>audio/lpcm; sample-rate=8000; sample-size-bits=16; channel-count=1;
     * is-big-endian=false</code> </p>
     */
    inline AudioInputEvent& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline AudioInputEvent& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline AudioInputEvent& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that your application assigns to the event. You can use
     * this to identify events in logs.</p>
     */
    inline AudioInputEvent& WithEventId(const char* value) { SetEventId(value); return *this;}


    /**
     * <p>A timestamp set by the client of the date and time that the event was sent to
     * Amazon Lex V2.</p>
     */
    inline long long GetClientTimestampMillis() const{ return m_clientTimestampMillis; }

    /**
     * <p>A timestamp set by the client of the date and time that the event was sent to
     * Amazon Lex V2.</p>
     */
    inline bool ClientTimestampMillisHasBeenSet() const { return m_clientTimestampMillisHasBeenSet; }

    /**
     * <p>A timestamp set by the client of the date and time that the event was sent to
     * Amazon Lex V2.</p>
     */
    inline void SetClientTimestampMillis(long long value) { m_clientTimestampMillisHasBeenSet = true; m_clientTimestampMillis = value; }

    /**
     * <p>A timestamp set by the client of the date and time that the event was sent to
     * Amazon Lex V2.</p>
     */
    inline AudioInputEvent& WithClientTimestampMillis(long long value) { SetClientTimestampMillis(value); return *this;}

  private:

    Aws::Utils::ByteBuffer m_audioChunk;
    bool m_audioChunkHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    long long m_clientTimestampMillis;
    bool m_clientTimestampMillisHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
