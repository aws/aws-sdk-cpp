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
    AWS_CHIMESDKMEDIAPIPELINES_API StartSpeakerSearchTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSpeakerSearchTask"; }

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
    inline StartSpeakerSearchTaskRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline StartSpeakerSearchTaskRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the resource to be updated. Valid values include the
     * ID and ARN of the media insights pipeline.</p>
     */
    inline StartSpeakerSearchTaskRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The ARN of the voice profile domain that will store the voice profile.</p>
     */
    inline const Aws::String& GetVoiceProfileDomainArn() const{ return m_voiceProfileDomainArn; }

    /**
     * <p>The ARN of the voice profile domain that will store the voice profile.</p>
     */
    inline bool VoiceProfileDomainArnHasBeenSet() const { return m_voiceProfileDomainArnHasBeenSet; }

    /**
     * <p>The ARN of the voice profile domain that will store the voice profile.</p>
     */
    inline void SetVoiceProfileDomainArn(const Aws::String& value) { m_voiceProfileDomainArnHasBeenSet = true; m_voiceProfileDomainArn = value; }

    /**
     * <p>The ARN of the voice profile domain that will store the voice profile.</p>
     */
    inline void SetVoiceProfileDomainArn(Aws::String&& value) { m_voiceProfileDomainArnHasBeenSet = true; m_voiceProfileDomainArn = std::move(value); }

    /**
     * <p>The ARN of the voice profile domain that will store the voice profile.</p>
     */
    inline void SetVoiceProfileDomainArn(const char* value) { m_voiceProfileDomainArnHasBeenSet = true; m_voiceProfileDomainArn.assign(value); }

    /**
     * <p>The ARN of the voice profile domain that will store the voice profile.</p>
     */
    inline StartSpeakerSearchTaskRequest& WithVoiceProfileDomainArn(const Aws::String& value) { SetVoiceProfileDomainArn(value); return *this;}

    /**
     * <p>The ARN of the voice profile domain that will store the voice profile.</p>
     */
    inline StartSpeakerSearchTaskRequest& WithVoiceProfileDomainArn(Aws::String&& value) { SetVoiceProfileDomainArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the voice profile domain that will store the voice profile.</p>
     */
    inline StartSpeakerSearchTaskRequest& WithVoiceProfileDomainArn(const char* value) { SetVoiceProfileDomainArn(value); return *this;}


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
    inline StartSpeakerSearchTaskRequest& WithKinesisVideoStreamSourceTaskConfiguration(const KinesisVideoStreamSourceTaskConfiguration& value) { SetKinesisVideoStreamSourceTaskConfiguration(value); return *this;}

    /**
     * <p>The task configuration for the Kinesis video stream source of the media
     * insights pipeline.</p>
     */
    inline StartSpeakerSearchTaskRequest& WithKinesisVideoStreamSourceTaskConfiguration(KinesisVideoStreamSourceTaskConfiguration&& value) { SetKinesisVideoStreamSourceTaskConfiguration(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different speaker search tasks.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different speaker search tasks.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different speaker search tasks.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different speaker search tasks.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different speaker search tasks.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different speaker search tasks.</p>
     */
    inline StartSpeakerSearchTaskRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different speaker search tasks.</p>
     */
    inline StartSpeakerSearchTaskRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the client request. Use a different token for
     * different speaker search tasks.</p>
     */
    inline StartSpeakerSearchTaskRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_voiceProfileDomainArn;
    bool m_voiceProfileDomainArnHasBeenSet = false;

    KinesisVideoStreamSourceTaskConfiguration m_kinesisVideoStreamSourceTaskConfiguration;
    bool m_kinesisVideoStreamSourceTaskConfigurationHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
