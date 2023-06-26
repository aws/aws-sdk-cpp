/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
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
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   * <p>The result of a speaker search analysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/SpeakerSearchResult">AWS
   * API Reference</a></p>
   */
  class SpeakerSearchResult
  {
  public:
    AWS_CHIMESDKVOICE_API SpeakerSearchResult();
    AWS_CHIMESDKVOICE_API SpeakerSearchResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API SpeakerSearchResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The confidence score in the speaker search analysis.</p>
     */
    inline double GetConfidenceScore() const{ return m_confidenceScore; }

    /**
     * <p>The confidence score in the speaker search analysis.</p>
     */
    inline bool ConfidenceScoreHasBeenSet() const { return m_confidenceScoreHasBeenSet; }

    /**
     * <p>The confidence score in the speaker search analysis.</p>
     */
    inline void SetConfidenceScore(double value) { m_confidenceScoreHasBeenSet = true; m_confidenceScore = value; }

    /**
     * <p>The confidence score in the speaker search analysis.</p>
     */
    inline SpeakerSearchResult& WithConfidenceScore(double value) { SetConfidenceScore(value); return *this;}


    /**
     * <p>The voice profile ID.</p>
     */
    inline const Aws::String& GetVoiceProfileId() const{ return m_voiceProfileId; }

    /**
     * <p>The voice profile ID.</p>
     */
    inline bool VoiceProfileIdHasBeenSet() const { return m_voiceProfileIdHasBeenSet; }

    /**
     * <p>The voice profile ID.</p>
     */
    inline void SetVoiceProfileId(const Aws::String& value) { m_voiceProfileIdHasBeenSet = true; m_voiceProfileId = value; }

    /**
     * <p>The voice profile ID.</p>
     */
    inline void SetVoiceProfileId(Aws::String&& value) { m_voiceProfileIdHasBeenSet = true; m_voiceProfileId = std::move(value); }

    /**
     * <p>The voice profile ID.</p>
     */
    inline void SetVoiceProfileId(const char* value) { m_voiceProfileIdHasBeenSet = true; m_voiceProfileId.assign(value); }

    /**
     * <p>The voice profile ID.</p>
     */
    inline SpeakerSearchResult& WithVoiceProfileId(const Aws::String& value) { SetVoiceProfileId(value); return *this;}

    /**
     * <p>The voice profile ID.</p>
     */
    inline SpeakerSearchResult& WithVoiceProfileId(Aws::String&& value) { SetVoiceProfileId(std::move(value)); return *this;}

    /**
     * <p>The voice profile ID.</p>
     */
    inline SpeakerSearchResult& WithVoiceProfileId(const char* value) { SetVoiceProfileId(value); return *this;}

  private:

    double m_confidenceScore;
    bool m_confidenceScoreHasBeenSet = false;

    Aws::String m_voiceProfileId;
    bool m_voiceProfileIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
