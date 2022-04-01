/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/model/MedicalTranscript.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/MedicalTranscriptEvent">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalTranscriptEvent
  {
  public:
    MedicalTranscriptEvent();
    MedicalTranscriptEvent(Aws::Utils::Json::JsonView jsonValue);
    MedicalTranscriptEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The transcription of the audio stream. The transcription is composed of all
     * of the items in the results list.</p>
     */
    inline const MedicalTranscript& GetTranscript() const{ return m_transcript; }

    /**
     * <p>The transcription of the audio stream. The transcription is composed of all
     * of the items in the results list.</p>
     */
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }

    /**
     * <p>The transcription of the audio stream. The transcription is composed of all
     * of the items in the results list.</p>
     */
    inline void SetTranscript(const MedicalTranscript& value) { m_transcriptHasBeenSet = true; m_transcript = value; }

    /**
     * <p>The transcription of the audio stream. The transcription is composed of all
     * of the items in the results list.</p>
     */
    inline void SetTranscript(MedicalTranscript&& value) { m_transcriptHasBeenSet = true; m_transcript = std::move(value); }

    /**
     * <p>The transcription of the audio stream. The transcription is composed of all
     * of the items in the results list.</p>
     */
    inline MedicalTranscriptEvent& WithTranscript(const MedicalTranscript& value) { SetTranscript(value); return *this;}

    /**
     * <p>The transcription of the audio stream. The transcription is composed of all
     * of the items in the results list.</p>
     */
    inline MedicalTranscriptEvent& WithTranscript(MedicalTranscript&& value) { SetTranscript(std::move(value)); return *this;}

  private:

    MedicalTranscript m_transcript;
    bool m_transcriptHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
