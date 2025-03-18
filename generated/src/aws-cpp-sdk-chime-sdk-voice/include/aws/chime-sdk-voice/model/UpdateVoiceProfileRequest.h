/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class UpdateVoiceProfileRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API UpdateVoiceProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVoiceProfile"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The profile ID.</p>
     */
    inline const Aws::String& GetVoiceProfileId() const { return m_voiceProfileId; }
    inline bool VoiceProfileIdHasBeenSet() const { return m_voiceProfileIdHasBeenSet; }
    template<typename VoiceProfileIdT = Aws::String>
    void SetVoiceProfileId(VoiceProfileIdT&& value) { m_voiceProfileIdHasBeenSet = true; m_voiceProfileId = std::forward<VoiceProfileIdT>(value); }
    template<typename VoiceProfileIdT = Aws::String>
    UpdateVoiceProfileRequest& WithVoiceProfileId(VoiceProfileIdT&& value) { SetVoiceProfileId(std::forward<VoiceProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the speaker search task.</p>
     */
    inline const Aws::String& GetSpeakerSearchTaskId() const { return m_speakerSearchTaskId; }
    inline bool SpeakerSearchTaskIdHasBeenSet() const { return m_speakerSearchTaskIdHasBeenSet; }
    template<typename SpeakerSearchTaskIdT = Aws::String>
    void SetSpeakerSearchTaskId(SpeakerSearchTaskIdT&& value) { m_speakerSearchTaskIdHasBeenSet = true; m_speakerSearchTaskId = std::forward<SpeakerSearchTaskIdT>(value); }
    template<typename SpeakerSearchTaskIdT = Aws::String>
    UpdateVoiceProfileRequest& WithSpeakerSearchTaskId(SpeakerSearchTaskIdT&& value) { SetSpeakerSearchTaskId(std::forward<SpeakerSearchTaskIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_voiceProfileId;
    bool m_voiceProfileIdHasBeenSet = false;

    Aws::String m_speakerSearchTaskId;
    bool m_speakerSearchTaskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
