/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/RealTimeAlertConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/chime-sdk-media-pipelines/model/MediaInsightsPipelineConfigurationElement.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>A structure that contains the configuration settings for a media insights
   * pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/MediaInsightsPipelineConfiguration">AWS
   * API Reference</a></p>
   */
  class MediaInsightsPipelineConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipelineConfiguration() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipelineConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipelineConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the configuration.</p>
     */
    inline const Aws::String& GetMediaInsightsPipelineConfigurationName() const { return m_mediaInsightsPipelineConfigurationName; }
    inline bool MediaInsightsPipelineConfigurationNameHasBeenSet() const { return m_mediaInsightsPipelineConfigurationNameHasBeenSet; }
    template<typename MediaInsightsPipelineConfigurationNameT = Aws::String>
    void SetMediaInsightsPipelineConfigurationName(MediaInsightsPipelineConfigurationNameT&& value) { m_mediaInsightsPipelineConfigurationNameHasBeenSet = true; m_mediaInsightsPipelineConfigurationName = std::forward<MediaInsightsPipelineConfigurationNameT>(value); }
    template<typename MediaInsightsPipelineConfigurationNameT = Aws::String>
    MediaInsightsPipelineConfiguration& WithMediaInsightsPipelineConfigurationName(MediaInsightsPipelineConfigurationNameT&& value) { SetMediaInsightsPipelineConfigurationName(std::forward<MediaInsightsPipelineConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the configuration.</p>
     */
    inline const Aws::String& GetMediaInsightsPipelineConfigurationArn() const { return m_mediaInsightsPipelineConfigurationArn; }
    inline bool MediaInsightsPipelineConfigurationArnHasBeenSet() const { return m_mediaInsightsPipelineConfigurationArnHasBeenSet; }
    template<typename MediaInsightsPipelineConfigurationArnT = Aws::String>
    void SetMediaInsightsPipelineConfigurationArn(MediaInsightsPipelineConfigurationArnT&& value) { m_mediaInsightsPipelineConfigurationArnHasBeenSet = true; m_mediaInsightsPipelineConfigurationArn = std::forward<MediaInsightsPipelineConfigurationArnT>(value); }
    template<typename MediaInsightsPipelineConfigurationArnT = Aws::String>
    MediaInsightsPipelineConfiguration& WithMediaInsightsPipelineConfigurationArn(MediaInsightsPipelineConfigurationArnT&& value) { SetMediaInsightsPipelineConfigurationArn(std::forward<MediaInsightsPipelineConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role used by the service to access Amazon Web Services
     * resources.</p>
     */
    inline const Aws::String& GetResourceAccessRoleArn() const { return m_resourceAccessRoleArn; }
    inline bool ResourceAccessRoleArnHasBeenSet() const { return m_resourceAccessRoleArnHasBeenSet; }
    template<typename ResourceAccessRoleArnT = Aws::String>
    void SetResourceAccessRoleArn(ResourceAccessRoleArnT&& value) { m_resourceAccessRoleArnHasBeenSet = true; m_resourceAccessRoleArn = std::forward<ResourceAccessRoleArnT>(value); }
    template<typename ResourceAccessRoleArnT = Aws::String>
    MediaInsightsPipelineConfiguration& WithResourceAccessRoleArn(ResourceAccessRoleArnT&& value) { SetResourceAccessRoleArn(std::forward<ResourceAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the rules that trigger a real-time alert.</p>
     */
    inline const RealTimeAlertConfiguration& GetRealTimeAlertConfiguration() const { return m_realTimeAlertConfiguration; }
    inline bool RealTimeAlertConfigurationHasBeenSet() const { return m_realTimeAlertConfigurationHasBeenSet; }
    template<typename RealTimeAlertConfigurationT = RealTimeAlertConfiguration>
    void SetRealTimeAlertConfiguration(RealTimeAlertConfigurationT&& value) { m_realTimeAlertConfigurationHasBeenSet = true; m_realTimeAlertConfiguration = std::forward<RealTimeAlertConfigurationT>(value); }
    template<typename RealTimeAlertConfigurationT = RealTimeAlertConfiguration>
    MediaInsightsPipelineConfiguration& WithRealTimeAlertConfiguration(RealTimeAlertConfigurationT&& value) { SetRealTimeAlertConfiguration(std::forward<RealTimeAlertConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The elements in the configuration.</p>
     */
    inline const Aws::Vector<MediaInsightsPipelineConfigurationElement>& GetElements() const { return m_elements; }
    inline bool ElementsHasBeenSet() const { return m_elementsHasBeenSet; }
    template<typename ElementsT = Aws::Vector<MediaInsightsPipelineConfigurationElement>>
    void SetElements(ElementsT&& value) { m_elementsHasBeenSet = true; m_elements = std::forward<ElementsT>(value); }
    template<typename ElementsT = Aws::Vector<MediaInsightsPipelineConfigurationElement>>
    MediaInsightsPipelineConfiguration& WithElements(ElementsT&& value) { SetElements(std::forward<ElementsT>(value)); return *this;}
    template<typename ElementsT = MediaInsightsPipelineConfigurationElement>
    MediaInsightsPipelineConfiguration& AddElements(ElementsT&& value) { m_elementsHasBeenSet = true; m_elements.emplace_back(std::forward<ElementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the configuration.</p>
     */
    inline const Aws::String& GetMediaInsightsPipelineConfigurationId() const { return m_mediaInsightsPipelineConfigurationId; }
    inline bool MediaInsightsPipelineConfigurationIdHasBeenSet() const { return m_mediaInsightsPipelineConfigurationIdHasBeenSet; }
    template<typename MediaInsightsPipelineConfigurationIdT = Aws::String>
    void SetMediaInsightsPipelineConfigurationId(MediaInsightsPipelineConfigurationIdT&& value) { m_mediaInsightsPipelineConfigurationIdHasBeenSet = true; m_mediaInsightsPipelineConfigurationId = std::forward<MediaInsightsPipelineConfigurationIdT>(value); }
    template<typename MediaInsightsPipelineConfigurationIdT = Aws::String>
    MediaInsightsPipelineConfiguration& WithMediaInsightsPipelineConfigurationId(MediaInsightsPipelineConfigurationIdT&& value) { SetMediaInsightsPipelineConfigurationId(std::forward<MediaInsightsPipelineConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    MediaInsightsPipelineConfiguration& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the configuration was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const { return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    void SetUpdatedTimestamp(UpdatedTimestampT&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::forward<UpdatedTimestampT>(value); }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    MediaInsightsPipelineConfiguration& WithUpdatedTimestamp(UpdatedTimestampT&& value) { SetUpdatedTimestamp(std::forward<UpdatedTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mediaInsightsPipelineConfigurationName;
    bool m_mediaInsightsPipelineConfigurationNameHasBeenSet = false;

    Aws::String m_mediaInsightsPipelineConfigurationArn;
    bool m_mediaInsightsPipelineConfigurationArnHasBeenSet = false;

    Aws::String m_resourceAccessRoleArn;
    bool m_resourceAccessRoleArnHasBeenSet = false;

    RealTimeAlertConfiguration m_realTimeAlertConfiguration;
    bool m_realTimeAlertConfigurationHasBeenSet = false;

    Aws::Vector<MediaInsightsPipelineConfigurationElement> m_elements;
    bool m_elementsHasBeenSet = false;

    Aws::String m_mediaInsightsPipelineConfigurationId;
    bool m_mediaInsightsPipelineConfigurationIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp{};
    bool m_updatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
