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
    AWS_LEXRUNTIMEV2_API AudioResponseEvent() = default;
    AWS_LEXRUNTIMEV2_API AudioResponseEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API AudioResponseEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A chunk of the audio to play. </p>
     */
    inline const Aws::Utils::ByteBuffer& GetAudioChunk() const { return m_audioChunk; }
    inline bool AudioChunkHasBeenSet() const { return m_audioChunkHasBeenSet; }
    template<typename AudioChunkT = Aws::Utils::ByteBuffer>
    void SetAudioChunk(AudioChunkT&& value) { m_audioChunkHasBeenSet = true; m_audioChunk = std::forward<AudioChunkT>(value); }
    template<typename AudioChunkT = Aws::Utils::ByteBuffer>
    AudioResponseEvent& WithAudioChunk(AudioChunkT&& value) { SetAudioChunk(std::forward<AudioChunkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encoding of the audio chunk. This is the same as the encoding configure
     * in the <code>contentType</code> field of the
     * <code>ConfigurationEvent</code>.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    AudioResponseEvent& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
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
    AudioResponseEvent& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_audioChunk{};
    bool m_audioChunkHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
