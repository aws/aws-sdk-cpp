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
    AWS_CHIMESDKVOICE_API SpeakerSearchDetails();
    AWS_CHIMESDKVOICE_API SpeakerSearchDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API SpeakerSearchDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The result value in the speaker search details.</p>
     */
    inline const Aws::Vector<SpeakerSearchResult>& GetResults() const{ return m_results; }
    inline bool ResultsHasBeenSet() const { return m_resultsHasBeenSet; }
    inline void SetResults(const Aws::Vector<SpeakerSearchResult>& value) { m_resultsHasBeenSet = true; m_results = value; }
    inline void SetResults(Aws::Vector<SpeakerSearchResult>&& value) { m_resultsHasBeenSet = true; m_results = std::move(value); }
    inline SpeakerSearchDetails& WithResults(const Aws::Vector<SpeakerSearchResult>& value) { SetResults(value); return *this;}
    inline SpeakerSearchDetails& WithResults(Aws::Vector<SpeakerSearchResult>&& value) { SetResults(std::move(value)); return *this;}
    inline SpeakerSearchDetails& AddResults(const SpeakerSearchResult& value) { m_resultsHasBeenSet = true; m_results.push_back(value); return *this; }
    inline SpeakerSearchDetails& AddResults(SpeakerSearchResult&& value) { m_resultsHasBeenSet = true; m_results.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of a voice print generation operation,
     * <code>VoiceprintGenerationSuccess</code> or
     * <code>VoiceprintGenerationFailure</code>..</p>
     */
    inline const Aws::String& GetVoiceprintGenerationStatus() const{ return m_voiceprintGenerationStatus; }
    inline bool VoiceprintGenerationStatusHasBeenSet() const { return m_voiceprintGenerationStatusHasBeenSet; }
    inline void SetVoiceprintGenerationStatus(const Aws::String& value) { m_voiceprintGenerationStatusHasBeenSet = true; m_voiceprintGenerationStatus = value; }
    inline void SetVoiceprintGenerationStatus(Aws::String&& value) { m_voiceprintGenerationStatusHasBeenSet = true; m_voiceprintGenerationStatus = std::move(value); }
    inline void SetVoiceprintGenerationStatus(const char* value) { m_voiceprintGenerationStatusHasBeenSet = true; m_voiceprintGenerationStatus.assign(value); }
    inline SpeakerSearchDetails& WithVoiceprintGenerationStatus(const Aws::String& value) { SetVoiceprintGenerationStatus(value); return *this;}
    inline SpeakerSearchDetails& WithVoiceprintGenerationStatus(Aws::String&& value) { SetVoiceprintGenerationStatus(std::move(value)); return *this;}
    inline SpeakerSearchDetails& WithVoiceprintGenerationStatus(const char* value) { SetVoiceprintGenerationStatus(value); return *this;}
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
