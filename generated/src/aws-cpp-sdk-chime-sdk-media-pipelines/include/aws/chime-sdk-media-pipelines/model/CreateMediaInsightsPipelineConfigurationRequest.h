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


    ///@{
    /**
     * <p>The name of the media insights pipeline configuration.</p>
     */
    inline const Aws::String& GetMediaInsightsPipelineConfigurationName() const{ return m_mediaInsightsPipelineConfigurationName; }
    inline bool MediaInsightsPipelineConfigurationNameHasBeenSet() const { return m_mediaInsightsPipelineConfigurationNameHasBeenSet; }
    inline void SetMediaInsightsPipelineConfigurationName(const Aws::String& value) { m_mediaInsightsPipelineConfigurationNameHasBeenSet = true; m_mediaInsightsPipelineConfigurationName = value; }
    inline void SetMediaInsightsPipelineConfigurationName(Aws::String&& value) { m_mediaInsightsPipelineConfigurationNameHasBeenSet = true; m_mediaInsightsPipelineConfigurationName = std::move(value); }
    inline void SetMediaInsightsPipelineConfigurationName(const char* value) { m_mediaInsightsPipelineConfigurationNameHasBeenSet = true; m_mediaInsightsPipelineConfigurationName.assign(value); }
    inline CreateMediaInsightsPipelineConfigurationRequest& WithMediaInsightsPipelineConfigurationName(const Aws::String& value) { SetMediaInsightsPipelineConfigurationName(value); return *this;}
    inline CreateMediaInsightsPipelineConfigurationRequest& WithMediaInsightsPipelineConfigurationName(Aws::String&& value) { SetMediaInsightsPipelineConfigurationName(std::move(value)); return *this;}
    inline CreateMediaInsightsPipelineConfigurationRequest& WithMediaInsightsPipelineConfigurationName(const char* value) { SetMediaInsightsPipelineConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role used by the service to access Amazon Web Services
     * resources, including <code>Transcribe</code> and <code>Transcribe Call
     * Analytics</code>, on the caller’s behalf.</p>
     */
    inline const Aws::String& GetResourceAccessRoleArn() const{ return m_resourceAccessRoleArn; }
    inline bool ResourceAccessRoleArnHasBeenSet() const { return m_resourceAccessRoleArnHasBeenSet; }
    inline void SetResourceAccessRoleArn(const Aws::String& value) { m_resourceAccessRoleArnHasBeenSet = true; m_resourceAccessRoleArn = value; }
    inline void SetResourceAccessRoleArn(Aws::String&& value) { m_resourceAccessRoleArnHasBeenSet = true; m_resourceAccessRoleArn = std::move(value); }
    inline void SetResourceAccessRoleArn(const char* value) { m_resourceAccessRoleArnHasBeenSet = true; m_resourceAccessRoleArn.assign(value); }
    inline CreateMediaInsightsPipelineConfigurationRequest& WithResourceAccessRoleArn(const Aws::String& value) { SetResourceAccessRoleArn(value); return *this;}
    inline CreateMediaInsightsPipelineConfigurationRequest& WithResourceAccessRoleArn(Aws::String&& value) { SetResourceAccessRoleArn(std::move(value)); return *this;}
    inline CreateMediaInsightsPipelineConfigurationRequest& WithResourceAccessRoleArn(const char* value) { SetResourceAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for the real-time alerts in a media insights
     * pipeline configuration.</p>
     */
    inline const RealTimeAlertConfiguration& GetRealTimeAlertConfiguration() const{ return m_realTimeAlertConfiguration; }
    inline bool RealTimeAlertConfigurationHasBeenSet() const { return m_realTimeAlertConfigurationHasBeenSet; }
    inline void SetRealTimeAlertConfiguration(const RealTimeAlertConfiguration& value) { m_realTimeAlertConfigurationHasBeenSet = true; m_realTimeAlertConfiguration = value; }
    inline void SetRealTimeAlertConfiguration(RealTimeAlertConfiguration&& value) { m_realTimeAlertConfigurationHasBeenSet = true; m_realTimeAlertConfiguration = std::move(value); }
    inline CreateMediaInsightsPipelineConfigurationRequest& WithRealTimeAlertConfiguration(const RealTimeAlertConfiguration& value) { SetRealTimeAlertConfiguration(value); return *this;}
    inline CreateMediaInsightsPipelineConfigurationRequest& WithRealTimeAlertConfiguration(RealTimeAlertConfiguration&& value) { SetRealTimeAlertConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The elements in the request, such as a processor for Amazon Transcribe or a
     * sink for a Kinesis Data Stream.</p>
     */
    inline const Aws::Vector<MediaInsightsPipelineConfigurationElement>& GetElements() const{ return m_elements; }
    inline bool ElementsHasBeenSet() const { return m_elementsHasBeenSet; }
    inline void SetElements(const Aws::Vector<MediaInsightsPipelineConfigurationElement>& value) { m_elementsHasBeenSet = true; m_elements = value; }
    inline void SetElements(Aws::Vector<MediaInsightsPipelineConfigurationElement>&& value) { m_elementsHasBeenSet = true; m_elements = std::move(value); }
    inline CreateMediaInsightsPipelineConfigurationRequest& WithElements(const Aws::Vector<MediaInsightsPipelineConfigurationElement>& value) { SetElements(value); return *this;}
    inline CreateMediaInsightsPipelineConfigurationRequest& WithElements(Aws::Vector<MediaInsightsPipelineConfigurationElement>&& value) { SetElements(std::move(value)); return *this;}
    inline CreateMediaInsightsPipelineConfigurationRequest& AddElements(const MediaInsightsPipelineConfigurationElement& value) { m_elementsHasBeenSet = true; m_elements.push_back(value); return *this; }
    inline CreateMediaInsightsPipelineConfigurationRequest& AddElements(MediaInsightsPipelineConfigurationElement&& value) { m_elementsHasBeenSet = true; m_elements.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the media insights pipeline configuration.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateMediaInsightsPipelineConfigurationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateMediaInsightsPipelineConfigurationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateMediaInsightsPipelineConfigurationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateMediaInsightsPipelineConfigurationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the media insights pipeline configuration
     * request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline CreateMediaInsightsPipelineConfigurationRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateMediaInsightsPipelineConfigurationRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateMediaInsightsPipelineConfigurationRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}
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
