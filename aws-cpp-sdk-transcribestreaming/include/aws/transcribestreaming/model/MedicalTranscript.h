/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribestreaming/model/MedicalResult.h>
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
   * <p>The medical transcript in a <a>MedicalTranscriptEvent</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/MedicalTranscript">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalTranscript
  {
  public:
    MedicalTranscript();
    MedicalTranscript(Aws::Utils::Json::JsonView jsonValue);
    MedicalTranscript& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> <a>MedicalResult</a> objects that contain the results of transcribing a
     * portion of the input audio stream. The array can be empty.</p>
     */
    inline const Aws::Vector<MedicalResult>& GetResults() const{ return m_results; }

    /**
     * <p> <a>MedicalResult</a> objects that contain the results of transcribing a
     * portion of the input audio stream. The array can be empty.</p>
     */
    inline bool ResultsHasBeenSet() const { return m_resultsHasBeenSet; }

    /**
     * <p> <a>MedicalResult</a> objects that contain the results of transcribing a
     * portion of the input audio stream. The array can be empty.</p>
     */
    inline void SetResults(const Aws::Vector<MedicalResult>& value) { m_resultsHasBeenSet = true; m_results = value; }

    /**
     * <p> <a>MedicalResult</a> objects that contain the results of transcribing a
     * portion of the input audio stream. The array can be empty.</p>
     */
    inline void SetResults(Aws::Vector<MedicalResult>&& value) { m_resultsHasBeenSet = true; m_results = std::move(value); }

    /**
     * <p> <a>MedicalResult</a> objects that contain the results of transcribing a
     * portion of the input audio stream. The array can be empty.</p>
     */
    inline MedicalTranscript& WithResults(const Aws::Vector<MedicalResult>& value) { SetResults(value); return *this;}

    /**
     * <p> <a>MedicalResult</a> objects that contain the results of transcribing a
     * portion of the input audio stream. The array can be empty.</p>
     */
    inline MedicalTranscript& WithResults(Aws::Vector<MedicalResult>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p> <a>MedicalResult</a> objects that contain the results of transcribing a
     * portion of the input audio stream. The array can be empty.</p>
     */
    inline MedicalTranscript& AddResults(const MedicalResult& value) { m_resultsHasBeenSet = true; m_results.push_back(value); return *this; }

    /**
     * <p> <a>MedicalResult</a> objects that contain the results of transcribing a
     * portion of the input audio stream. The array can be empty.</p>
     */
    inline MedicalTranscript& AddResults(MedicalResult&& value) { m_resultsHasBeenSet = true; m_results.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<MedicalResult> m_results;
    bool m_resultsHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
