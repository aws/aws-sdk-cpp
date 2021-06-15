/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{
  /**
   * <p>Provides a wrapper for the audio chunks that you are sending.</p> <p>For
   * information on audio encoding in Amazon Transcribe, see <a>input</a>. For
   * information on audio encoding formats in Amazon Transcribe Medical, see
   * <a>input-med</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/AudioEvent">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESTREAMINGSERVICE_API AudioEvent
  {
  public:
    AudioEvent() = default;
    AudioEvent(Aws::Vector<unsigned char>&& value) { m_audioChunk = std::move(value); }

    /**
     * <p>An audio blob that contains the next part of the audio that you want to
     * transcribe. The maximum audio chunk size is 32 KB.</p>
     */
    inline const Aws::Vector<unsigned char>& GetAudioChunk() const { return m_audioChunk; }

    /**
     * <p>An audio blob that contains the next part of the audio that you want to
     * transcribe. The maximum audio chunk size is 32 KB.</p>
     */
    inline Aws::Vector<unsigned char>&& GetAudioChunkWithOwnership() { return std::move(m_audioChunk); }

    /**
     * <p>An audio blob that contains the next part of the audio that you want to
     * transcribe. The maximum audio chunk size is 32 KB.</p>
     */
    inline void SetAudioChunk(const Aws::Vector<unsigned char>& value) { m_audioChunkHasBeenSet = true; m_audioChunk = value; }

    /**
     * <p>An audio blob that contains the next part of the audio that you want to
     * transcribe. The maximum audio chunk size is 32 KB.</p>
     */
    inline void SetAudioChunk(Aws::Vector<unsigned char>&& value) { m_audioChunkHasBeenSet = true; m_audioChunk = std::move(value); }

    /**
     * <p>An audio blob that contains the next part of the audio that you want to
     * transcribe. The maximum audio chunk size is 32 KB.</p>
     */
    inline AudioEvent& WithAudioChunk(const Aws::Vector<unsigned char>& value) { SetAudioChunk(value); return *this;}

    /**
     * <p>An audio blob that contains the next part of the audio that you want to
     * transcribe. The maximum audio chunk size is 32 KB.</p>
     */
    inline AudioEvent& WithAudioChunk(Aws::Vector<unsigned char>&& value) { SetAudioChunk(std::move(value)); return *this;}

  private:

    Aws::Vector<unsigned char> m_audioChunk;
    bool m_audioChunkHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
