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
    AWS_CHIMESDKMEDIAPIPELINES_API CreateMediaInsightsPipelineConfigurationRequest() = default;

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
    inline const Aws::String& GetMediaInsightsPipelineConfigurationName() const { return m_mediaInsightsPipelineConfigurationName; }
    inline bool MediaInsightsPipelineConfigurationNameHasBeenSet() const { return m_mediaInsightsPipelineConfigurationNameHasBeenSet; }
    template<typename MediaInsightsPipelineConfigurationNameT = Aws::String>
    void SetMediaInsightsPipelineConfigurationName(MediaInsightsPipelineConfigurationNameT&& value) { m_mediaInsightsPipelineConfigurationNameHasBeenSet = true; m_mediaInsightsPipelineConfigurationName = std::forward<MediaInsightsPipelineConfigurationNameT>(value); }
    template<typename MediaInsightsPipelineConfigurationNameT = Aws::String>
    CreateMediaInsightsPipelineConfigurationRequest& WithMediaInsightsPipelineConfigurationName(MediaInsightsPipelineConfigurationNameT&& value) { SetMediaInsightsPipelineConfigurationName(std::forward<MediaInsightsPipelineConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role used by the service to access Amazon Web Services
     * resources, including <code>Transcribe</code> and <code>Transcribe Call
     * Analytics</code>, on the caller’s behalf.</p>
     */
    inline const Aws::String& GetResourceAccessRoleArn() const { return m_resourceAccessRoleArn; }
    inline bool ResourceAccessRoleArnHasBeenSet() const { return m_resourceAccessRoleArnHasBeenSet; }
    template<typename ResourceAccessRoleArnT = Aws::String>
    void SetResourceAccessRoleArn(ResourceAccessRoleArnT&& value) { m_resourceAccessRoleArnHasBeenSet = true; m_resourceAccessRoleArn = std::forward<ResourceAccessRoleArnT>(value); }
    template<typename ResourceAccessRoleArnT = Aws::String>
    CreateMediaInsightsPipelineConfigurationRequest& WithResourceAccessRoleArn(ResourceAccessRoleArnT&& value) { SetResourceAccessRoleArn(std::forward<ResourceAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for the real-time alerts in a media insights
     * pipeline configuration.</p>
     */
    inline const RealTimeAlertConfiguration& GetRealTimeAlertConfiguration() const { return m_realTimeAlertConfiguration; }
    inline bool RealTimeAlertConfigurationHasBeenSet() const { return m_realTimeAlertConfigurationHasBeenSet; }
    template<typename RealTimeAlertConfigurationT = RealTimeAlertConfiguration>
    void SetRealTimeAlertConfiguration(RealTimeAlertConfigurationT&& value) { m_realTimeAlertConfigurationHasBeenSet = true; m_realTimeAlertConfiguration = std::forward<RealTimeAlertConfigurationT>(value); }
    template<typename RealTimeAlertConfigurationT = RealTimeAlertConfiguration>
    CreateMediaInsightsPipelineConfigurationRequest& WithRealTimeAlertConfiguration(RealTimeAlertConfigurationT&& value) { SetRealTimeAlertConfiguration(std::forward<RealTimeAlertConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The elements in the request, such as a processor for Amazon Transcribe or a
     * sink for a Kinesis Data Stream.</p>
     */
    inline const Aws::Vector<MediaInsightsPipelineConfigurationElement>& GetElements() const { return m_elements; }
    inline bool ElementsHasBeenSet() const { return m_elementsHasBeenSet; }
    template<typename ElementsT = Aws::Vector<MediaInsightsPipelineConfigurationElement>>
    void SetElements(ElementsT&& value) { m_elementsHasBeenSet = true; m_elements = std::forward<ElementsT>(value); }
    template<typename ElementsT = Aws::Vector<MediaInsightsPipelineConfigurationElement>>
    CreateMediaInsightsPipelineConfigurationRequest& WithElements(ElementsT&& value) { SetElements(std::forward<ElementsT>(value)); return *this;}
    template<typename ElementsT = MediaInsightsPipelineConfigurationElement>
    CreateMediaInsightsPipelineConfigurationRequest& AddElements(ElementsT&& value) { m_elementsHasBeenSet = true; m_elements.emplace_back(std::forward<ElementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the media insights pipeline configuration.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateMediaInsightsPipelineConfigurationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateMediaInsightsPipelineConfigurationRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the media insights pipeline configuration
     * request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateMediaInsightsPipelineConfigurationRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
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

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
