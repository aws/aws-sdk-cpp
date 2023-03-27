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
  class StopVoiceToneAnalysisTaskRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API StopVoiceToneAnalysisTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopVoiceToneAnalysisTask"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The Voice Connector ID.</p>
     */
    inline const Aws::String& GetVoiceConnectorId() const{ return m_voiceConnectorId; }

    /**
     * <p>The Voice Connector ID.</p>
     */
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }

    /**
     * <p>The Voice Connector ID.</p>
     */
    inline void SetVoiceConnectorId(const Aws::String& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = value; }

    /**
     * <p>The Voice Connector ID.</p>
     */
    inline void SetVoiceConnectorId(Aws::String&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::move(value); }

    /**
     * <p>The Voice Connector ID.</p>
     */
    inline void SetVoiceConnectorId(const char* value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId.assign(value); }

    /**
     * <p>The Voice Connector ID.</p>
     */
    inline StopVoiceToneAnalysisTaskRequest& WithVoiceConnectorId(const Aws::String& value) { SetVoiceConnectorId(value); return *this;}

    /**
     * <p>The Voice Connector ID.</p>
     */
    inline StopVoiceToneAnalysisTaskRequest& WithVoiceConnectorId(Aws::String&& value) { SetVoiceConnectorId(std::move(value)); return *this;}

    /**
     * <p>The Voice Connector ID.</p>
     */
    inline StopVoiceToneAnalysisTaskRequest& WithVoiceConnectorId(const char* value) { SetVoiceConnectorId(value); return *this;}


    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline const Aws::String& GetVoiceToneAnalysisTaskId() const{ return m_voiceToneAnalysisTaskId; }

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline bool VoiceToneAnalysisTaskIdHasBeenSet() const { return m_voiceToneAnalysisTaskIdHasBeenSet; }

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline void SetVoiceToneAnalysisTaskId(const Aws::String& value) { m_voiceToneAnalysisTaskIdHasBeenSet = true; m_voiceToneAnalysisTaskId = value; }

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline void SetVoiceToneAnalysisTaskId(Aws::String&& value) { m_voiceToneAnalysisTaskIdHasBeenSet = true; m_voiceToneAnalysisTaskId = std::move(value); }

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline void SetVoiceToneAnalysisTaskId(const char* value) { m_voiceToneAnalysisTaskIdHasBeenSet = true; m_voiceToneAnalysisTaskId.assign(value); }

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline StopVoiceToneAnalysisTaskRequest& WithVoiceToneAnalysisTaskId(const Aws::String& value) { SetVoiceToneAnalysisTaskId(value); return *this;}

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline StopVoiceToneAnalysisTaskRequest& WithVoiceToneAnalysisTaskId(Aws::String&& value) { SetVoiceToneAnalysisTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the voice tone analysis task.</p>
     */
    inline StopVoiceToneAnalysisTaskRequest& WithVoiceToneAnalysisTaskId(const char* value) { SetVoiceToneAnalysisTaskId(value); return *this;}

  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet = false;

    Aws::String m_voiceToneAnalysisTaskId;
    bool m_voiceToneAnalysisTaskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
