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
   * <p>The <code>MedicalTranscriptEvent</code> associated with a
   * <code>MedicalTranscriptResultStream</code>.</p> <p>Contains a set of
   * transcription results from one or more audio segments, along with additional
   * information per your request parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/MedicalTranscriptEvent">AWS
   * API Reference</a></p>
   */
  class MedicalTranscriptEvent
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalTranscriptEvent();
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalTranscriptEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalTranscriptEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains <code>Results</code>, which contains a set of transcription results
     * from one or more audio segments, along with additional information per your
     * request parameters. This can include information relating to alternative
     * transcriptions, channel identification, partial result stabilization, language
     * identification, and other transcription-related data.</p>
     */
    inline const MedicalTranscript& GetTranscript() const{ return m_transcript; }

    /**
     * <p>Contains <code>Results</code>, which contains a set of transcription results
     * from one or more audio segments, along with additional information per your
     * request parameters. This can include information relating to alternative
     * transcriptions, channel identification, partial result stabilization, language
     * identification, and other transcription-related data.</p>
     */
    inline bool TranscriptHasBeenSet() const { return m_transcriptHasBeenSet; }

    /**
     * <p>Contains <code>Results</code>, which contains a set of transcription results
     * from one or more audio segments, along with additional information per your
     * request parameters. This can include information relating to alternative
     * transcriptions, channel identification, partial result stabilization, language
     * identification, and other transcription-related data.</p>
     */
    inline void SetTranscript(const MedicalTranscript& value) { m_transcriptHasBeenSet = true; m_transcript = value; }

    /**
     * <p>Contains <code>Results</code>, which contains a set of transcription results
     * from one or more audio segments, along with additional information per your
     * request parameters. This can include information relating to alternative
     * transcriptions, channel identification, partial result stabilization, language
     * identification, and other transcription-related data.</p>
     */
    inline void SetTranscript(MedicalTranscript&& value) { m_transcriptHasBeenSet = true; m_transcript = std::move(value); }

    /**
     * <p>Contains <code>Results</code>, which contains a set of transcription results
     * from one or more audio segments, along with additional information per your
     * request parameters. This can include information relating to alternative
     * transcriptions, channel identification, partial result stabilization, language
     * identification, and other transcription-related data.</p>
     */
    inline MedicalTranscriptEvent& WithTranscript(const MedicalTranscript& value) { SetTranscript(value); return *this;}

    /**
     * <p>Contains <code>Results</code>, which contains a set of transcription results
     * from one or more audio segments, along with additional information per your
     * request parameters. This can include information relating to alternative
     * transcriptions, channel identification, partial result stabilization, language
     * identification, and other transcription-related data.</p>
     */
    inline MedicalTranscriptEvent& WithTranscript(MedicalTranscript&& value) { SetTranscript(std::move(value)); return *this;}

  private:

    MedicalTranscript m_transcript;
    bool m_transcriptHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
