/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/StreamingConfiguration.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class PutVoiceConnectorStreamingConfigurationRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API PutVoiceConnectorStreamingConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutVoiceConnectorStreamingConfiguration"; }

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
    inline PutVoiceConnectorStreamingConfigurationRequest& WithVoiceConnectorId(const Aws::String& value) { SetVoiceConnectorId(value); return *this;}

    /**
     * <p>The Voice Connector ID.</p>
     */
    inline PutVoiceConnectorStreamingConfigurationRequest& WithVoiceConnectorId(Aws::String&& value) { SetVoiceConnectorId(std::move(value)); return *this;}

    /**
     * <p>The Voice Connector ID.</p>
     */
    inline PutVoiceConnectorStreamingConfigurationRequest& WithVoiceConnectorId(const char* value) { SetVoiceConnectorId(value); return *this;}


    /**
     * <p>The streaming settings being updated.</p>
     */
    inline const StreamingConfiguration& GetStreamingConfiguration() const{ return m_streamingConfiguration; }

    /**
     * <p>The streaming settings being updated.</p>
     */
    inline bool StreamingConfigurationHasBeenSet() const { return m_streamingConfigurationHasBeenSet; }

    /**
     * <p>The streaming settings being updated.</p>
     */
    inline void SetStreamingConfiguration(const StreamingConfiguration& value) { m_streamingConfigurationHasBeenSet = true; m_streamingConfiguration = value; }

    /**
     * <p>The streaming settings being updated.</p>
     */
    inline void SetStreamingConfiguration(StreamingConfiguration&& value) { m_streamingConfigurationHasBeenSet = true; m_streamingConfiguration = std::move(value); }

    /**
     * <p>The streaming settings being updated.</p>
     */
    inline PutVoiceConnectorStreamingConfigurationRequest& WithStreamingConfiguration(const StreamingConfiguration& value) { SetStreamingConfiguration(value); return *this;}

    /**
     * <p>The streaming settings being updated.</p>
     */
    inline PutVoiceConnectorStreamingConfigurationRequest& WithStreamingConfiguration(StreamingConfiguration&& value) { SetStreamingConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet = false;

    StreamingConfiguration m_streamingConfiguration;
    bool m_streamingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
