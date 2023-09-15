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
    AWS_CHIMESDKMEDIAPIPELINES_API StartVoiceToneAnalysisTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartVoiceToneAnalysisTask"; }

    AWS_CHIMESDKMEDIAPIPELINES_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline StartVoiceToneAnalysisTaskRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline StartVoiceToneAnalysisTaskRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline StartVoiceToneAnalysisTaskRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The language code.</p>
     */
    inline const VoiceAnalyticsLanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code.</p>
     */
    inline void SetLanguageCode(const VoiceAnalyticsLanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code.</p>
     */
    inline void SetLanguageCode(VoiceAnalyticsLanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code.</p>
     */
    inline StartVoiceToneAnalysisTaskRequest& WithLanguageCode(const VoiceAnalyticsLanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code.</p>
     */
    inline StartVoiceToneAnalysisTaskRequest& WithLanguageCode(VoiceAnalyticsLanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The task configuration for the Kinesis video stream source of the media
     * insights pipeline.</p>
     */
    inline const KinesisVideoStreamSourceTaskConfiguration& GetKinesisVideoStreamSourceTaskConfiguration() const{ return m_kinesisVideoStreamSourceTaskConfiguration; }

    /**
     * <p>The task configuration for the Kinesis video stream source of the media
     * insights pipeline.</p>
     */
    inline bool KinesisVideoStreamSourceTaskConfigurationHasBeenSet() const { return m_kinesisVideoStreamSourceTaskConfigurationHasBeenSet; }

    /**
     * <p>The task configuration for the Kinesis video stream source of the media
     * insights pipeline.</p>
     */
    inline void SetKinesisVideoStreamSourceTaskConfiguration(const KinesisVideoStreamSourceTaskConfiguration& value) { m_kinesisVideoStreamSourceTaskConfigurationHasBeenSet = true; m_kinesisVideoStreamSourceTaskConfiguration = value; }

    /**
     * <p>The task configuration for the Kinesis video stream source of the media
     * insights pipeline.</p>
     */
    inline void SetKinesisVideoStreamSourceTaskConfiguration(KinesisVideoStreamSourceTaskConfiguration&& value) { m_kinesisVideoStreamSourceTaskConfigurationHasBeenSet = true; m_kinesisVideoStreamSourceTaskConfiguration = std::move(value); }

    /**
     * <p>The task configuration for the Kinesis video stream source of the media
     * insights pipeline.</p>
     */
    inline StartVoiceToneAnalysisTaskRequest& WithKinesisVideoStreamSourceTaskConfiguration(const KinesisVideoStreamSourceTaskConfiguration& value) { SetKinesisVideoStreamSourceTaskConfiguration(value); return *this;}

    /**
     * <p>The task configuration for the Kinesis video stream source of the media
     * insights pipeline.</p>
     */
    inline StartVoiceToneAnalysisTaskRequest& WithKinesisVideoStreamSourceTaskConfiguration(KinesisVideoStreamSourceTaskConfiguration&& value) { SetKinesisVideoStreamSourceTaskConfiguration(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different voice tone analysis tasks.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different voice tone analysis tasks.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different voice tone analysis tasks.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different voice tone analysis tasks.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different voice tone analysis tasks.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different voice tone analysis tasks.</p>
     */
    inline StartVoiceToneAnalysisTaskRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different voice tone analysis tasks.</p>
     */
    inline StartVoiceToneAnalysisTaskRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different voice tone analysis tasks.</p>
     */
    inline StartVoiceToneAnalysisTaskRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    VoiceAnalyticsLanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    KinesisVideoStreamSourceTaskConfiguration m_kinesisVideoStreamSourceTaskConfiguration;
    bool m_kinesisVideoStreamSourceTaskConfigurationHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
