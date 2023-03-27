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
  class DeleteVoiceProfileRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API DeleteVoiceProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVoiceProfile"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


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
    inline DeleteVoiceProfileRequest& WithVoiceProfileId(const Aws::String& value) { SetVoiceProfileId(value); return *this;}

    /**
     * <p>The voice profile ID.</p>
     */
    inline DeleteVoiceProfileRequest& WithVoiceProfileId(Aws::String&& value) { SetVoiceProfileId(std::move(value)); return *this;}

    /**
     * <p>The voice profile ID.</p>
     */
    inline DeleteVoiceProfileRequest& WithVoiceProfileId(const char* value) { SetVoiceProfileId(value); return *this;}

  private:

    Aws::String m_voiceProfileId;
    bool m_voiceProfileIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
