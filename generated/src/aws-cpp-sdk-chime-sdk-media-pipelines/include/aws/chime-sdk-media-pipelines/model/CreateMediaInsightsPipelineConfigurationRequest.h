/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/RealTimeAlertConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-media-pipelines/model/MediaInsightsPipelineConfigurationElement.h>
#include <aws/chime-sdk-media-pipelines/model/Tag.h>
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
  class CreateMediaInsightsPipelineConfigurationRequest : public ChimeSDKMediaPipelinesRequest
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaInsightsPipelineConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMediaInsightsPipelineConfiguration"; }

    AWS_CHIMESDKMEDIAPIPELINES_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the media insights pipeline configuration.</p>
     */
    inline const Aws::String& GetMediaInsightsPipelineConfigurationName() const{ return m_mediaInsightsPipelineConfigurationName; }

    /**
     * <p>The name of the media insights pipeline configuration.</p>
     */
    inline bool MediaInsightsPipelineConfigurationNameHasBeenSet() const { return m_mediaInsightsPipelineConfigurationNameHasBeenSet; }

    /**
     * <p>The name of the media insights pipeline configuration.</p>
     */
    inline void SetMediaInsightsPipelineConfigurationName(const Aws::String& value) { m_mediaInsightsPipelineConfigurationNameHasBeenSet = true; m_mediaInsightsPipelineConfigurationName = value; }

    /**
     * <p>The name of the media insights pipeline configuration.</p>
     */
    inline void SetMediaInsightsPipelineConfigurationName(Aws::String&& value) { m_mediaInsightsPipelineConfigurationNameHasBeenSet = true; m_mediaInsightsPipelineConfigurationName = std::move(value); }

    /**
     * <p>The name of the media insights pipeline configuration.</p>
     */
    inline void SetMediaInsightsPipelineConfigurationName(const char* value) { m_mediaInsightsPipelineConfigurationNameHasBeenSet = true; m_mediaInsightsPipelineConfigurationName.assign(value); }

    /**
     * <p>The name of the media insights pipeline configuration.</p>
     */
    inline CreateMediaInsightsPipelineConfigurationRequest& WithMediaInsightsPipelineConfigurationName(const Aws::String& value) { SetMediaInsightsPipelineConfigurationName(value); return *this;}

    /**
     * <p>The name of the media insights pipeline configuration.</p>
     */
    inline CreateMediaInsightsPipelineConfigurationRequest& WithMediaInsightsPipelineConfigurationName(Aws::String&& value) { SetMediaInsightsPipelineConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The name of the media insights pipeline configuration.</p>
     */
    inline CreateMediaInsightsPipelineConfigurationRequest& WithMediaInsightsPipelineConfigurationName(const char* value) { SetMediaInsightsPipelineConfigurationName(value); return *this;}


    /**
     * <p>The ARN of the role used by the service to access Amazon Web Services
     * resources, including <code>Transcribe</code> and <code>Transcribe Call
     * Analytics</code>, on the caller’s behalf.</p>
     */
    inline const Aws::String& GetResourceAccessRoleArn() const{ return m_resourceAccessRoleArn; }

    /**
     * <p>The ARN of the role used by the service to access Amazon Web Services
     * resources, including <code>Transcribe</code> and <code>Transcribe Call
     * Analytics</code>, on the caller’s behalf.</p>
     */
    inline bool ResourceAccessRoleArnHasBeenSet() const { return m_resourceAccessRoleArnHasBeenSet; }

    /**
     * <p>The ARN of the role used by the service to access Amazon Web Services
     * resources, including <code>Transcribe</code> and <code>Transcribe Call
     * Analytics</code>, on the caller’s behalf.</p>
     */
    inline void SetResourceAccessRoleArn(const Aws::String& value) { m_resourceAccessRoleArnHasBeenSet = true; m_resourceAccessRoleArn = value; }

    /**
     * <p>The ARN of the role used by the service to access Amazon Web Services
     * resources, including <code>Transcribe</code> and <code>Transcribe Call
     * Analytics</code>, on the caller’s behalf.</p>
     */
    inline void SetResourceAccessRoleArn(Aws::String&& value) { m_resourceAccessRoleArnHasBeenSet = true; m_resourceAccessRoleArn = std::move(value); }

    /**
     * <p>The ARN of the role used by the service to access Amazon Web Services
     * resources, including <code>Transcribe</code> and <code>Transcribe Call
     * Analytics</code>, on the caller’s behalf.</p>
     */
    inline void SetResourceAccessRoleArn(const char* value) { m_resourceAccessRoleArnHasBeenSet = true; m_resourceAccessRoleArn.assign(value); }

    /**
     * <p>The ARN of the role used by the service to access Amazon Web Services
     * resources, including <code>Transcribe</code> and <code>Transcribe Call
     * Analytics</code>, on the caller’s behalf.</p>
     */
    inline CreateMediaInsightsPipelineConfigurationRequest& WithResourceAccessRoleArn(const Aws::String& value) { SetResourceAccessRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role used by the service to access Amazon Web Services
     * resources, including <code>Transcribe</code> and <code>Transcribe Call
     * Analytics</code>, on the caller’s behalf.</p>
     */
    inline CreateMediaInsightsPipelineConfigurationRequest& WithResourceAccessRoleArn(Aws::String&& value) { SetResourceAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role used by the service to access Amazon Web Services
     * resources, including <code>Transcribe</code> and <code>Transcribe Call
     * Analytics</code>, on the caller’s behalf.</p>
     */
    inline CreateMediaInsightsPipelineConfigurationRequest& WithResourceAccessRoleArn(const char* value) { SetResourceAccessRoleArn(value); return *this;}


    /**
     * <p>The configuration settings for the real-time alerts in a media insights
     * pipeline configuration.</p>
     */
    inline const RealTimeAlertConfiguration& GetRealTimeAlertConfiguration() const{ return m_realTimeAlertConfiguration; }

    /**
     * <p>The configuration settings for the real-time alerts in a media insights
     * pipeline configuration.</p>
     */
    inline bool RealTimeAlertConfigurationHasBeenSet() const { return m_realTimeAlertConfigurationHasBeenSet; }

    /**
     * <p>The configuration settings for the real-time alerts in a media insights
     * pipeline configuration.</p>
     */
    inline void SetRealTimeAlertConfiguration(const RealTimeAlertConfiguration& value) { m_realTimeAlertConfigurationHasBeenSet = true; m_realTimeAlertConfiguration = value; }

    /**
     * <p>The configuration settings for the real-time alerts in a media insights
     * pipeline configuration.</p>
     */
    inline void SetRealTimeAlertConfiguration(RealTimeAlertConfiguration&& value) { m_realTimeAlertConfigurationHasBeenSet = true; m_realTimeAlertConfiguration = std::move(value); }

    /**
     * <p>The configuration settings for the real-time alerts in a media insights
     * pipeline configuration.</p>
     */
    inline CreateMediaInsightsPipelineConfigurationRequest& WithRealTimeAlertConfiguration(const RealTimeAlertConfiguration& value) { SetRealTimeAlertConfiguration(value); return *this;}

    /**
     * <p>The configuration settings for the real-time alerts in a media insights
     * pipeline configuration.</p>
     */
    inline CreateMediaInsightsPipelineConfigurationRequest& WithRealTimeAlertConfiguration(RealTimeAlertConfiguration&& value) { SetRealTimeAlertConfiguration(std::move(value)); return *this;}


    /**
     * <p>The elements in the request, such as a processor for Amazon Transcribe or a
     * sink for a Kinesis Data Stream.</p>
     */
    inline const Aws::Vector<MediaInsightsPipelineConfigurationElement>& GetElements() const{ return m_elements; }

    /**
     * <p>The elements in the request, such as a processor for Amazon Transcribe or a
     * sink for a Kinesis Data Stream.</p>
     */
    inline bool ElementsHasBeenSet() const { return m_elementsHasBeenSet; }

    /**
     * <p>The elements in the request, such as a processor for Amazon Transcribe or a
     * sink for a Kinesis Data Stream.</p>
     */
    inline void SetElements(const Aws::Vector<MediaInsightsPipelineConfigurationElement>& value) { m_elementsHasBeenSet = true; m_elements = value; }

    /**
     * <p>The elements in the request, such as a processor for Amazon Transcribe or a
     * sink for a Kinesis Data Stream.</p>
     */
    inline void SetElements(Aws::Vector<MediaInsightsPipelineConfigurationElement>&& value) { m_elementsHasBeenSet = true; m_elements = std::move(value); }

    /**
     * <p>The elements in the request, such as a processor for Amazon Transcribe or a
     * sink for a Kinesis Data Stream.</p>
     */
    inline CreateMediaInsightsPipelineConfigurationRequest& WithElements(const Aws::Vector<MediaInsightsPipelineConfigurationElement>& value) { SetElements(value); return *this;}

    /**
     * <p>The elements in the request, such as a processor for Amazon Transcribe or a
     * sink for a Kinesis Data Stream.</p>
     */
    inline CreateMediaInsightsPipelineConfigurationRequest& WithElements(Aws::Vector<MediaInsightsPipelineConfigurationElement>&& value) { SetElements(std::move(value)); return *this;}

    /**
     * <p>The elements in the request, such as a processor for Amazon Transcribe or a
     * sink for a Kinesis Data Stream.</p>
     */
    inline CreateMediaInsightsPipelineConfigurationRequest& AddElements(const MediaInsightsPipelineConfigurationElement& value) { m_elementsHasBeenSet = true; m_elements.push_back(value); return *this; }

    /**
     * <p>The elements in the request, such as a processor for Amazon Transcribe or a
     * sink for a Kinesis Data Stream.</p>
     */
    inline CreateMediaInsightsPipelineConfigurationRequest& AddElements(MediaInsightsPipelineConfigurationElement&& value) { m_elementsHasBeenSet = true; m_elements.push_back(std::move(value)); return *this; }


    /**
     * <p>The tags assigned to the media insights pipeline configuration.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the media insights pipeline configuration.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the media insights pipeline configuration.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the media insights pipeline configuration.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the media insights pipeline configuration.</p>
     */
    inline CreateMediaInsightsPipelineConfigurationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the media insights pipeline configuration.</p>
     */
    inline CreateMediaInsightsPipelineConfigurationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the media insights pipeline configuration.</p>
     */
    inline CreateMediaInsightsPipelineConfigurationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags assigned to the media insights pipeline configuration.</p>
     */
    inline CreateMediaInsightsPipelineConfigurationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The unique identifier for the media insights pipeline configuration
     * request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The unique identifier for the media insights pipeline configuration
     * request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>The unique identifier for the media insights pipeline configuration
     * request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>The unique identifier for the media insights pipeline configuration
     * request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>The unique identifier for the media insights pipeline configuration
     * request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>The unique identifier for the media insights pipeline configuration
     * request.</p>
     */
    inline CreateMediaInsightsPipelineConfigurationRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The unique identifier for the media insights pipeline configuration
     * request.</p>
     */
    inline CreateMediaInsightsPipelineConfigurationRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the media insights pipeline configuration
     * request.</p>
     */
    inline CreateMediaInsightsPipelineConfigurationRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_mediaInsightsPipelineConfigurationName;
    bool m_mediaInsightsPipelineConfigurationNameHasBeenSet = false;

    Aws::String m_resourceAccessRoleArn;
    bool m_resourceAccessRoleArnHasBeenSet = false;

    RealTimeAlertConfiguration m_realTimeAlertConfiguration;
    bool m_realTimeAlertConfigurationHasBeenSet = false;

    Aws::Vector<MediaInsightsPipelineConfigurationElement> m_elements;
    bool m_elementsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
