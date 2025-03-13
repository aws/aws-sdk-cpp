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
  class GetVoiceProfileRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API GetVoiceProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetVoiceProfile"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The voice profile ID.</p>
     */
    inline const Aws::String& GetVoiceProfileId() const { return m_voiceProfileId; }
    inline bool VoiceProfileIdHasBeenSet() const { return m_voiceProfileIdHasBeenSet; }
    template<typename VoiceProfileIdT = Aws::String>
    void SetVoiceProfileId(VoiceProfileIdT&& value) { m_voiceProfileIdHasBeenSet = true; m_voiceProfileId = std::forward<VoiceProfileIdT>(value); }
    template<typename VoiceProfileIdT = Aws::String>
    GetVoiceProfileRequest& WithVoiceProfileId(VoiceProfileIdT&& value) { SetVoiceProfileId(std::forward<VoiceProfileIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_voiceProfileId;
    bool m_voiceProfileIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
