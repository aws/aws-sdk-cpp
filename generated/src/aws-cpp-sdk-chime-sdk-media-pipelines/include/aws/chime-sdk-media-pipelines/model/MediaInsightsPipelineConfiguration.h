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
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipelineConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipelineConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipelineConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the configuration.</p>
     */
    inline const Aws::String& GetMediaInsightsPipelineConfigurationName() const{ return m_mediaInsightsPipelineConfigurationName; }
    inline bool MediaInsightsPipelineConfigurationNameHasBeenSet() const { return m_mediaInsightsPipelineConfigurationNameHasBeenSet; }
    inline void SetMediaInsightsPipelineConfigurationName(const Aws::String& value) { m_mediaInsightsPipelineConfigurationNameHasBeenSet = true; m_mediaInsightsPipelineConfigurationName = value; }
    inline void SetMediaInsightsPipelineConfigurationName(Aws::String&& value) { m_mediaInsightsPipelineConfigurationNameHasBeenSet = true; m_mediaInsightsPipelineConfigurationName = std::move(value); }
    inline void SetMediaInsightsPipelineConfigurationName(const char* value) { m_mediaInsightsPipelineConfigurationNameHasBeenSet = true; m_mediaInsightsPipelineConfigurationName.assign(value); }
    inline MediaInsightsPipelineConfiguration& WithMediaInsightsPipelineConfigurationName(const Aws::String& value) { SetMediaInsightsPipelineConfigurationName(value); return *this;}
    inline MediaInsightsPipelineConfiguration& WithMediaInsightsPipelineConfigurationName(Aws::String&& value) { SetMediaInsightsPipelineConfigurationName(std::move(value)); return *this;}
    inline MediaInsightsPipelineConfiguration& WithMediaInsightsPipelineConfigurationName(const char* value) { SetMediaInsightsPipelineConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the configuration.</p>
     */
    inline const Aws::String& GetMediaInsightsPipelineConfigurationArn() const{ return m_mediaInsightsPipelineConfigurationArn; }
    inline bool MediaInsightsPipelineConfigurationArnHasBeenSet() const { return m_mediaInsightsPipelineConfigurationArnHasBeenSet; }
    inline void SetMediaInsightsPipelineConfigurationArn(const Aws::String& value) { m_mediaInsightsPipelineConfigurationArnHasBeenSet = true; m_mediaInsightsPipelineConfigurationArn = value; }
    inline void SetMediaInsightsPipelineConfigurationArn(Aws::String&& value) { m_mediaInsightsPipelineConfigurationArnHasBeenSet = true; m_mediaInsightsPipelineConfigurationArn = std::move(value); }
    inline void SetMediaInsightsPipelineConfigurationArn(const char* value) { m_mediaInsightsPipelineConfigurationArnHasBeenSet = true; m_mediaInsightsPipelineConfigurationArn.assign(value); }
    inline MediaInsightsPipelineConfiguration& WithMediaInsightsPipelineConfigurationArn(const Aws::String& value) { SetMediaInsightsPipelineConfigurationArn(value); return *this;}
    inline MediaInsightsPipelineConfiguration& WithMediaInsightsPipelineConfigurationArn(Aws::String&& value) { SetMediaInsightsPipelineConfigurationArn(std::move(value)); return *this;}
    inline MediaInsightsPipelineConfiguration& WithMediaInsightsPipelineConfigurationArn(const char* value) { SetMediaInsightsPipelineConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role used by the service to access Amazon Web Services
     * resources.</p>
     */
    inline const Aws::String& GetResourceAccessRoleArn() const{ return m_resourceAccessRoleArn; }
    inline bool ResourceAccessRoleArnHasBeenSet() const { return m_resourceAccessRoleArnHasBeenSet; }
    inline void SetResourceAccessRoleArn(const Aws::String& value) { m_resourceAccessRoleArnHasBeenSet = true; m_resourceAccessRoleArn = value; }
    inline void SetResourceAccessRoleArn(Aws::String&& value) { m_resourceAccessRoleArnHasBeenSet = true; m_resourceAccessRoleArn = std::move(value); }
    inline void SetResourceAccessRoleArn(const char* value) { m_resourceAccessRoleArnHasBeenSet = true; m_resourceAccessRoleArn.assign(value); }
    inline MediaInsightsPipelineConfiguration& WithResourceAccessRoleArn(const Aws::String& value) { SetResourceAccessRoleArn(value); return *this;}
    inline MediaInsightsPipelineConfiguration& WithResourceAccessRoleArn(Aws::String&& value) { SetResourceAccessRoleArn(std::move(value)); return *this;}
    inline MediaInsightsPipelineConfiguration& WithResourceAccessRoleArn(const char* value) { SetResourceAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the rules that trigger a real-time alert.</p>
     */
    inline const RealTimeAlertConfiguration& GetRealTimeAlertConfiguration() const{ return m_realTimeAlertConfiguration; }
    inline bool RealTimeAlertConfigurationHasBeenSet() const { return m_realTimeAlertConfigurationHasBeenSet; }
    inline void SetRealTimeAlertConfiguration(const RealTimeAlertConfiguration& value) { m_realTimeAlertConfigurationHasBeenSet = true; m_realTimeAlertConfiguration = value; }
    inline void SetRealTimeAlertConfiguration(RealTimeAlertConfiguration&& value) { m_realTimeAlertConfigurationHasBeenSet = true; m_realTimeAlertConfiguration = std::move(value); }
    inline MediaInsightsPipelineConfiguration& WithRealTimeAlertConfiguration(const RealTimeAlertConfiguration& value) { SetRealTimeAlertConfiguration(value); return *this;}
    inline MediaInsightsPipelineConfiguration& WithRealTimeAlertConfiguration(RealTimeAlertConfiguration&& value) { SetRealTimeAlertConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The elements in the configuration.</p>
     */
    inline const Aws::Vector<MediaInsightsPipelineConfigurationElement>& GetElements() const{ return m_elements; }
    inline bool ElementsHasBeenSet() const { return m_elementsHasBeenSet; }
    inline void SetElements(const Aws::Vector<MediaInsightsPipelineConfigurationElement>& value) { m_elementsHasBeenSet = true; m_elements = value; }
    inline void SetElements(Aws::Vector<MediaInsightsPipelineConfigurationElement>&& value) { m_elementsHasBeenSet = true; m_elements = std::move(value); }
    inline MediaInsightsPipelineConfiguration& WithElements(const Aws::Vector<MediaInsightsPipelineConfigurationElement>& value) { SetElements(value); return *this;}
    inline MediaInsightsPipelineConfiguration& WithElements(Aws::Vector<MediaInsightsPipelineConfigurationElement>&& value) { SetElements(std::move(value)); return *this;}
    inline MediaInsightsPipelineConfiguration& AddElements(const MediaInsightsPipelineConfigurationElement& value) { m_elementsHasBeenSet = true; m_elements.push_back(value); return *this; }
    inline MediaInsightsPipelineConfiguration& AddElements(MediaInsightsPipelineConfigurationElement&& value) { m_elementsHasBeenSet = true; m_elements.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the configuration.</p>
     */
    inline const Aws::String& GetMediaInsightsPipelineConfigurationId() const{ return m_mediaInsightsPipelineConfigurationId; }
    inline bool MediaInsightsPipelineConfigurationIdHasBeenSet() const { return m_mediaInsightsPipelineConfigurationIdHasBeenSet; }
    inline void SetMediaInsightsPipelineConfigurationId(const Aws::String& value) { m_mediaInsightsPipelineConfigurationIdHasBeenSet = true; m_mediaInsightsPipelineConfigurationId = value; }
    inline void SetMediaInsightsPipelineConfigurationId(Aws::String&& value) { m_mediaInsightsPipelineConfigurationIdHasBeenSet = true; m_mediaInsightsPipelineConfigurationId = std::move(value); }
    inline void SetMediaInsightsPipelineConfigurationId(const char* value) { m_mediaInsightsPipelineConfigurationIdHasBeenSet = true; m_mediaInsightsPipelineConfigurationId.assign(value); }
    inline MediaInsightsPipelineConfiguration& WithMediaInsightsPipelineConfigurationId(const Aws::String& value) { SetMediaInsightsPipelineConfigurationId(value); return *this;}
    inline MediaInsightsPipelineConfiguration& WithMediaInsightsPipelineConfigurationId(Aws::String&& value) { SetMediaInsightsPipelineConfigurationId(std::move(value)); return *this;}
    inline MediaInsightsPipelineConfiguration& WithMediaInsightsPipelineConfigurationId(const char* value) { SetMediaInsightsPipelineConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline MediaInsightsPipelineConfiguration& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline MediaInsightsPipelineConfiguration& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the configuration was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }
    inline MediaInsightsPipelineConfiguration& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}
    inline MediaInsightsPipelineConfiguration& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp;
    bool m_updatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
