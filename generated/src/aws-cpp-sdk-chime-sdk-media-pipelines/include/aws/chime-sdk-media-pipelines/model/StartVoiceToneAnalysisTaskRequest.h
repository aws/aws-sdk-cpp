/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/VoiceAnalyticsLanguageCode.h>
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
  class StartVoiceToneAnalysisTaskRequest : public ChimeSDKMediaPipelinesRequest
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API StartVoiceToneAnalysisTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartVoiceToneAnalysisTask"; }

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
    StartVoiceToneAnalysisTaskRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code.</p>
     */
    inline VoiceAnalyticsLanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(VoiceAnalyticsLanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline StartVoiceToneAnalysisTaskRequest& WithLanguageCode(VoiceAnalyticsLanguageCode value) { SetLanguageCode(value); return *this;}
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
    StartVoiceToneAnalysisTaskRequest& WithKinesisVideoStreamSourceTaskConfiguration(KinesisVideoStreamSourceTaskConfigurationT&& value) { SetKinesisVideoStreamSourceTaskConfiguration(std::forward<KinesisVideoStreamSourceTaskConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different voice tone analysis tasks.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    StartVoiceToneAnalysisTaskRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    VoiceAnalyticsLanguageCode m_languageCode{VoiceAnalyticsLanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    KinesisVideoStreamSourceTaskConfiguration m_kinesisVideoStreamSourceTaskConfiguration;
    bool m_kinesisVideoStreamSourceTaskConfigurationHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
