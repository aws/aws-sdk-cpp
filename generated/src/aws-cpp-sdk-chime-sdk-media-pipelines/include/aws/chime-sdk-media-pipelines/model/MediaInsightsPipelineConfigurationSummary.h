/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A summary of the media insights pipeline configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/MediaInsightsPipelineConfigurationSummary">AWS
   * API Reference</a></p>
   */
  class MediaInsightsPipelineConfigurationSummary
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipelineConfigurationSummary() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipelineConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API MediaInsightsPipelineConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the media insights pipeline configuration.</p>
     */
    inline const Aws::String& GetMediaInsightsPipelineConfigurationName() const { return m_mediaInsightsPipelineConfigurationName; }
    inline bool MediaInsightsPipelineConfigurationNameHasBeenSet() const { return m_mediaInsightsPipelineConfigurationNameHasBeenSet; }
    template<typename MediaInsightsPipelineConfigurationNameT = Aws::String>
    void SetMediaInsightsPipelineConfigurationName(MediaInsightsPipelineConfigurationNameT&& value) { m_mediaInsightsPipelineConfigurationNameHasBeenSet = true; m_mediaInsightsPipelineConfigurationName = std::forward<MediaInsightsPipelineConfigurationNameT>(value); }
    template<typename MediaInsightsPipelineConfigurationNameT = Aws::String>
    MediaInsightsPipelineConfigurationSummary& WithMediaInsightsPipelineConfigurationName(MediaInsightsPipelineConfigurationNameT&& value) { SetMediaInsightsPipelineConfigurationName(std::forward<MediaInsightsPipelineConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the media insights pipeline configuration.</p>
     */
    inline const Aws::String& GetMediaInsightsPipelineConfigurationId() const { return m_mediaInsightsPipelineConfigurationId; }
    inline bool MediaInsightsPipelineConfigurationIdHasBeenSet() const { return m_mediaInsightsPipelineConfigurationIdHasBeenSet; }
    template<typename MediaInsightsPipelineConfigurationIdT = Aws::String>
    void SetMediaInsightsPipelineConfigurationId(MediaInsightsPipelineConfigurationIdT&& value) { m_mediaInsightsPipelineConfigurationIdHasBeenSet = true; m_mediaInsightsPipelineConfigurationId = std::forward<MediaInsightsPipelineConfigurationIdT>(value); }
    template<typename MediaInsightsPipelineConfigurationIdT = Aws::String>
    MediaInsightsPipelineConfigurationSummary& WithMediaInsightsPipelineConfigurationId(MediaInsightsPipelineConfigurationIdT&& value) { SetMediaInsightsPipelineConfigurationId(std::forward<MediaInsightsPipelineConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the media insights pipeline configuration.</p>
     */
    inline const Aws::String& GetMediaInsightsPipelineConfigurationArn() const { return m_mediaInsightsPipelineConfigurationArn; }
    inline bool MediaInsightsPipelineConfigurationArnHasBeenSet() const { return m_mediaInsightsPipelineConfigurationArnHasBeenSet; }
    template<typename MediaInsightsPipelineConfigurationArnT = Aws::String>
    void SetMediaInsightsPipelineConfigurationArn(MediaInsightsPipelineConfigurationArnT&& value) { m_mediaInsightsPipelineConfigurationArnHasBeenSet = true; m_mediaInsightsPipelineConfigurationArn = std::forward<MediaInsightsPipelineConfigurationArnT>(value); }
    template<typename MediaInsightsPipelineConfigurationArnT = Aws::String>
    MediaInsightsPipelineConfigurationSummary& WithMediaInsightsPipelineConfigurationArn(MediaInsightsPipelineConfigurationArnT&& value) { SetMediaInsightsPipelineConfigurationArn(std::forward<MediaInsightsPipelineConfigurationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mediaInsightsPipelineConfigurationName;
    bool m_mediaInsightsPipelineConfigurationNameHasBeenSet = false;

    Aws::String m_mediaInsightsPipelineConfigurationId;
    bool m_mediaInsightsPipelineConfigurationIdHasBeenSet = false;

    Aws::String m_mediaInsightsPipelineConfigurationArn;
    bool m_mediaInsightsPipelineConfigurationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
