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
namespace Http
{
    class URI;
} //namespace Http
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class GetVoiceToneAnalysisTaskRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API GetVoiceToneAnalysisTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetVoiceToneAnalysisTask"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;

    AWS_CHIMESDKVOICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Voice Connector ID.</p>
     */
    inline const Aws::String& GetVoiceConnectorId() const { return m_voiceConnectorId; }
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }
    template<typename VoiceConnectorIdT = Aws::String>
    void SetVoiceConnectorId(VoiceConnectorIdT&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::forward<VoiceConnectorIdT>(value); }
    template<typename VoiceConnectorIdT = Aws::String>
    GetVoiceToneAnalysisTaskRequest& WithVoiceConnectorId(VoiceConnectorIdT&& value) { SetVoiceConnectorId(std::forward<VoiceConnectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline const Aws::String& GetVoiceToneAnalysisTaskId() const { return m_voiceToneAnalysisTaskId; }
    inline bool VoiceToneAnalysisTaskIdHasBeenSet() const { return m_voiceToneAnalysisTaskIdHasBeenSet; }
    template<typename VoiceToneAnalysisTaskIdT = Aws::String>
    void SetVoiceToneAnalysisTaskId(VoiceToneAnalysisTaskIdT&& value) { m_voiceToneAnalysisTaskIdHasBeenSet = true; m_voiceToneAnalysisTaskId = std::forward<VoiceToneAnalysisTaskIdT>(value); }
    template<typename VoiceToneAnalysisTaskIdT = Aws::String>
    GetVoiceToneAnalysisTaskRequest& WithVoiceToneAnalysisTaskId(VoiceToneAnalysisTaskIdT&& value) { SetVoiceToneAnalysisTaskId(std::forward<VoiceToneAnalysisTaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the voice being analyzed is the caller (originator) or the
     * callee (responder).</p>
     */
    inline bool GetIsCaller() const { return m_isCaller; }
    inline bool IsCallerHasBeenSet() const { return m_isCallerHasBeenSet; }
    inline void SetIsCaller(bool value) { m_isCallerHasBeenSet = true; m_isCaller = value; }
    inline GetVoiceToneAnalysisTaskRequest& WithIsCaller(bool value) { SetIsCaller(value); return *this;}
    ///@}
  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet = false;

    Aws::String m_voiceToneAnalysisTaskId;
    bool m_voiceToneAnalysisTaskIdHasBeenSet = false;

    bool m_isCaller{false};
    bool m_isCallerHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
