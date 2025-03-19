/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/SpeakerSearchResult.h>
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
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   * <p>The details of a speaker search task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/SpeakerSearchDetails">AWS
   * API Reference</a></p>
   */
  class SpeakerSearchDetails
  {
  public:
    AWS_CHIMESDKVOICE_API SpeakerSearchDetails() = default;
    AWS_CHIMESDKVOICE_API SpeakerSearchDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API SpeakerSearchDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The result value in the speaker search details.</p>
     */
    inline const Aws::Vector<SpeakerSearchResult>& GetResults() const { return m_results; }
    inline bool ResultsHasBeenSet() const { return m_resultsHasBeenSet; }
    template<typename ResultsT = Aws::Vector<SpeakerSearchResult>>
    void SetResults(ResultsT&& value) { m_resultsHasBeenSet = true; m_results = std::forward<ResultsT>(value); }
    template<typename ResultsT = Aws::Vector<SpeakerSearchResult>>
    SpeakerSearchDetails& WithResults(ResultsT&& value) { SetResults(std::forward<ResultsT>(value)); return *this;}
    template<typename ResultsT = SpeakerSearchResult>
    SpeakerSearchDetails& AddResults(ResultsT&& value) { m_resultsHasBeenSet = true; m_results.emplace_back(std::forward<ResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of a voice print generation operation,
     * <code>VoiceprintGenerationSuccess</code> or
     * <code>VoiceprintGenerationFailure</code>..</p>
     */
    inline const Aws::String& GetVoiceprintGenerationStatus() const { return m_voiceprintGenerationStatus; }
    inline bool VoiceprintGenerationStatusHasBeenSet() const { return m_voiceprintGenerationStatusHasBeenSet; }
    template<typename VoiceprintGenerationStatusT = Aws::String>
    void SetVoiceprintGenerationStatus(VoiceprintGenerationStatusT&& value) { m_voiceprintGenerationStatusHasBeenSet = true; m_voiceprintGenerationStatus = std::forward<VoiceprintGenerationStatusT>(value); }
    template<typename VoiceprintGenerationStatusT = Aws::String>
    SpeakerSearchDetails& WithVoiceprintGenerationStatus(VoiceprintGenerationStatusT&& value) { SetVoiceprintGenerationStatus(std::forward<VoiceprintGenerationStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SpeakerSearchResult> m_results;
    bool m_resultsHasBeenSet = false;

    Aws::String m_voiceprintGenerationStatus;
    bool m_voiceprintGenerationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
