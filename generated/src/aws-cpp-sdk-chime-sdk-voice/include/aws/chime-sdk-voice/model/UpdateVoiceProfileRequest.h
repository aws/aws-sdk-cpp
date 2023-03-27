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
    AWS_CHIMESDKVOICE_API UpdateVoiceProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVoiceProfile"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The profile ID.</p>
     */
    inline const Aws::String& GetVoiceProfileId() const{ return m_voiceProfileId; }

    /**
     * <p>The profile ID.</p>
     */
    inline bool VoiceProfileIdHasBeenSet() const { return m_voiceProfileIdHasBeenSet; }

    /**
     * <p>The profile ID.</p>
     */
    inline void SetVoiceProfileId(const Aws::String& value) { m_voiceProfileIdHasBeenSet = true; m_voiceProfileId = value; }

    /**
     * <p>The profile ID.</p>
     */
    inline void SetVoiceProfileId(Aws::String&& value) { m_voiceProfileIdHasBeenSet = true; m_voiceProfileId = std::move(value); }

    /**
     * <p>The profile ID.</p>
     */
    inline void SetVoiceProfileId(const char* value) { m_voiceProfileIdHasBeenSet = true; m_voiceProfileId.assign(value); }

    /**
     * <p>The profile ID.</p>
     */
    inline UpdateVoiceProfileRequest& WithVoiceProfileId(const Aws::String& value) { SetVoiceProfileId(value); return *this;}

    /**
     * <p>The profile ID.</p>
     */
    inline UpdateVoiceProfileRequest& WithVoiceProfileId(Aws::String&& value) { SetVoiceProfileId(std::move(value)); return *this;}

    /**
     * <p>The profile ID.</p>
     */
    inline UpdateVoiceProfileRequest& WithVoiceProfileId(const char* value) { SetVoiceProfileId(value); return *this;}


    /**
     * <p>The ID of the speaker search task.</p>
     */
    inline const Aws::String& GetSpeakerSearchTaskId() const{ return m_speakerSearchTaskId; }

    /**
     * <p>The ID of the speaker search task.</p>
     */
    inline bool SpeakerSearchTaskIdHasBeenSet() const { return m_speakerSearchTaskIdHasBeenSet; }

    /**
     * <p>The ID of the speaker search task.</p>
     */
    inline void SetSpeakerSearchTaskId(const Aws::String& value) { m_speakerSearchTaskIdHasBeenSet = true; m_speakerSearchTaskId = value; }

    /**
     * <p>The ID of the speaker search task.</p>
     */
    inline void SetSpeakerSearchTaskId(Aws::String&& value) { m_speakerSearchTaskIdHasBeenSet = true; m_speakerSearchTaskId = std::move(value); }

    /**
     * <p>The ID of the speaker search task.</p>
     */
    inline void SetSpeakerSearchTaskId(const char* value) { m_speakerSearchTaskIdHasBeenSet = true; m_speakerSearchTaskId.assign(value); }

    /**
     * <p>The ID of the speaker search task.</p>
     */
    inline UpdateVoiceProfileRequest& WithSpeakerSearchTaskId(const Aws::String& value) { SetSpeakerSearchTaskId(value); return *this;}

    /**
     * <p>The ID of the speaker search task.</p>
     */
    inline UpdateVoiceProfileRequest& WithSpeakerSearchTaskId(Aws::String&& value) { SetSpeakerSearchTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the speaker search task.</p>
     */
    inline UpdateVoiceProfileRequest& WithSpeakerSearchTaskId(const char* value) { SetSpeakerSearchTaskId(value); return *this;}

  private:

    Aws::String m_voiceProfileId;
    bool m_voiceProfileIdHasBeenSet = false;

    Aws::String m_speakerSearchTaskId;
    bool m_speakerSearchTaskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
