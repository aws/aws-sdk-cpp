/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/KinesisVideoStreamSourceTaskConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   */
  class StartSpeakerSearchTaskRequest : public ChimeSDKMediaPipelinesRequest
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API StartSpeakerSearchTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSpeakerSearchTask"; }

    AWS_CHIMESDKMEDIAPIPELINES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    StartSpeakerSearchTaskRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the voice profile domain that will store the voice profile.</p>
     */
    inline const Aws::String& GetVoiceProfileDomainArn() const { return m_voiceProfileDomainArn; }
    inline bool VoiceProfileDomainArnHasBeenSet() const { return m_voiceProfileDomainArnHasBeenSet; }
    template<typename VoiceProfileDomainArnT = Aws::String>
    void SetVoiceProfileDomainArn(VoiceProfileDomainArnT&& value) { m_voiceProfileDomainArnHasBeenSet = true; m_voiceProfileDomainArn = std::forward<VoiceProfileDomainArnT>(value); }
    template<typename VoiceProfileDomainArnT = Aws::String>
    StartSpeakerSearchTaskRequest& WithVoiceProfileDomainArn(VoiceProfileDomainArnT&& value) { SetVoiceProfileDomainArn(std::forward<VoiceProfileDomainArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task configuration for the Kinesis video stream source of the media
     * insights pipeline.</p>
     */
    inline const KinesisVideoStreamSourceTaskConfiguration& GetKinesisVideoStreamSourceTaskConfiguration() const { return m_kinesisVideoStreamSourceTaskConfiguration; }
    inline bool KinesisVideoStreamSourceTaskConfigurationHasBeenSet() const { return m_kinesisVideoStreamSourceTaskConfigurationHasBeenSet; }
    template<typename KinesisVideoStreamSourceTaskConfigurationT = KinesisVideoStreamSourceTaskConfiguration>
    void SetKinesisVideoStreamSourceTaskConfiguration(KinesisVideoStreamSourceTaskConfigurationT&& value) { m_kinesisVideoStreamSourceTaskConfigurationHasBeenSet = true; m_kinesisVideoStreamSourceTaskConfiguration = std::forward<KinesisVideoStreamSourceTaskConfigurationT>(value); }
    template<typename KinesisVideoStreamSourceTaskConfigurationT = KinesisVideoStreamSourceTaskConfiguration>
    StartSpeakerSearchTaskRequest& WithKinesisVideoStreamSourceTaskConfiguration(KinesisVideoStreamSourceTaskConfigurationT&& value) { SetKinesisVideoStreamSourceTaskConfiguration(std::forward<KinesisVideoStreamSourceTaskConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different speaker search tasks.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    StartSpeakerSearchTaskRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_voiceProfileDomainArn;
    bool m_voiceProfileDomainArnHasBeenSet = false;

    KinesisVideoStreamSourceTaskConfiguration m_kinesisVideoStreamSourceTaskConfiguration;
    bool m_kinesisVideoStreamSourceTaskConfigurationHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
