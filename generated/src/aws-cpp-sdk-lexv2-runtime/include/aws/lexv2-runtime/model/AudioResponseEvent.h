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
   * <p>An event sent from Amazon Lex V2 to your client application containing audio
   * to play to the user. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/AudioResponseEvent">AWS
   * API Reference</a></p>
   */
  class AudioResponseEvent
  {
  public:
    AWS_LEXRUNTIMEV2_API AudioResponseEvent();
    AWS_LEXRUNTIMEV2_API AudioResponseEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API AudioResponseEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A chunk of the audio to play. </p>
     */
    inline const Aws::Utils::ByteBuffer& GetAudioChunk() const{ return m_audioChunk; }

    /**
     * <p>A chunk of the audio to play. </p>
     */
    inline bool AudioChunkHasBeenSet() const { return m_audioChunkHasBeenSet; }

    /**
     * <p>A chunk of the audio to play. </p>
     */
    inline void SetAudioChunk(const Aws::Utils::ByteBuffer& value) { m_audioChunkHasBeenSet = true; m_audioChunk = value; }

    /**
     * <p>A chunk of the audio to play. </p>
     */
    inline void SetAudioChunk(Aws::Utils::ByteBuffer&& value) { m_audioChunkHasBeenSet = true; m_audioChunk = std::move(value); }

    /**
     * <p>A chunk of the audio to play. </p>
     */
    inline AudioResponseEvent& WithAudioChunk(const Aws::Utils::ByteBuffer& value) { SetAudioChunk(value); return *this;}

    /**
     * <p>A chunk of the audio to play. </p>
     */
    inline AudioResponseEvent& WithAudioChunk(Aws::Utils::ByteBuffer&& value) { SetAudioChunk(std::move(value)); return *this;}


    /**
     * <p>The encoding of the audio chunk. This is the same as the encoding configure
     * in the <code>contentType</code> field of the
     * <code>ConfigurationEvent</code>.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The encoding of the audio chunk. This is the same as the encoding configure
     * in the <code>contentType</code> field of the
     * <code>ConfigurationEvent</code>.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The encoding of the audio chunk. This is the same as the encoding configure
     * in the <code>contentType</code> field of the
     * <code>ConfigurationEvent</code>.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The encoding of the audio chunk. This is the same as the encoding configure
     * in the <code>contentType</code> field of the
     * <code>ConfigurationEvent</code>.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The encoding of the audio chunk. This is the same as the encoding configure
     * in the <code>contentType</code> field of the
     * <code>ConfigurationEvent</code>.</p>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>The encoding of the audio chunk. This is the same as the encoding configure
     * in the <code>contentType</code> field of the
     * <code>ConfigurationEvent</code>.</p>
     */
    inline AudioResponseEvent& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The encoding of the audio chunk. This is the same as the encoding configure
     * in the <code>contentType</code> field of the
     * <code>ConfigurationEvent</code>.</p>
     */
    inline AudioResponseEvent& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The encoding of the audio chunk. This is the same as the encoding configure
     * in the <code>contentType</code> field of the
     * <code>ConfigurationEvent</code>.</p>
     */
    inline AudioResponseEvent& WithContentType(const char* value) { SetContentType(value); return *this;}


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
    inline AudioResponseEvent& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>A unique identifier of the event sent by Amazon Lex V2. The identifier is in
     * the form <code>RESPONSE-N</code>, where N is a number starting with one and
     * incremented for each event sent by Amazon Lex V2 in the current session.</p>
     */
    inline AudioResponseEvent& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier of the event sent by Amazon Lex V2. The identifier is in
     * the form <code>RESPONSE-N</code>, where N is a number starting with one and
     * incremented for each event sent by Amazon Lex V2 in the current session.</p>
     */
    inline AudioResponseEvent& WithEventId(const char* value) { SetEventId(value); return *this;}

  private:

    Aws::Utils::ByteBuffer m_audioChunk;
    bool m_audioChunkHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
