﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/Transcript.h>
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
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   * <p>Represents a set of transcription results from the server to the client. It
   * contains one or more segments of the transcription.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/TranscriptEvent">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESTREAMINGSERVICE_API TranscriptEvent
  {
  public:
    TranscriptEvent();
    TranscriptEvent(Aws::Utils::Json::JsonView jsonValue);
    TranscriptEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The transcription of the audio stream. The transcription is composed of all
     * of the items in the results list.</p>
     */
    inline const Transcript& GetTranscript() const{ return m_transcript; }

    /**
     * <p>The transcription of the audio stream. The transcription is composed of all
     * of the items in the results list.</p>
     */
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }

    /**
     * <p>The transcription of the audio stream. The transcription is composed of all
     * of the items in the results list.</p>
     */
    inline void SetTranscript(const Transcript& value) { m_transcriptHasBeenSet = true; m_transcript = value; }

    /**
     * <p>The transcription of the audio stream. The transcription is composed of all
     * of the items in the results list.</p>
     */
    inline void SetTranscript(Transcript&& value) { m_transcriptHasBeenSet = true; m_transcript = std::move(value); }

    /**
     * <p>The transcription of the audio stream. The transcription is composed of all
     * of the items in the results list.</p>
     */
    inline TranscriptEvent& WithTranscript(const Transcript& value) { SetTranscript(value); return *this;}

    /**
     * <p>The transcription of the audio stream. The transcription is composed of all
     * of the items in the results list.</p>
     */
    inline TranscriptEvent& WithTranscript(Transcript&& value) { SetTranscript(std::move(value)); return *this;}

  private:

    Transcript m_transcript;
    bool m_transcriptHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
