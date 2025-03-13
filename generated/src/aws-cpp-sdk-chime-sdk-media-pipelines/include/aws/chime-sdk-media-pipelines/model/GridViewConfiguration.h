/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/ContentShareLayoutOption.h>
#include <aws/chime-sdk-media-pipelines/model/PresenterOnlyConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/ActiveSpeakerOnlyConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/HorizontalLayoutConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/VerticalLayoutConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/VideoAttribute.h>
#include <aws/chime-sdk-media-pipelines/model/CanvasOrientation.h>
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
   * <p>Specifies the type of grid layout.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/GridViewConfiguration">AWS
   * API Reference</a></p>
   */
  class GridViewConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API GridViewConfiguration() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API GridViewConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API GridViewConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the layout of the video tiles when content sharing is enabled.</p>
     */
    inline ContentShareLayoutOption GetContentShareLayout() const { return m_contentShareLayout; }
    inline bool ContentShareLayoutHasBeenSet() const { return m_contentShareLayoutHasBeenSet; }
    inline void SetContentShareLayout(ContentShareLayoutOption value) { m_contentShareLayoutHasBeenSet = true; m_contentShareLayout = value; }
    inline GridViewConfiguration& WithContentShareLayout(ContentShareLayoutOption value) { SetContentShareLayout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the configuration options for a presenter only video tile.</p>
     */
    inline const PresenterOnlyConfiguration& GetPresenterOnlyConfiguration() const { return m_presenterOnlyConfiguration; }
    inline bool PresenterOnlyConfigurationHasBeenSet() const { return m_presenterOnlyConfigurationHasBeenSet; }
    template<typename PresenterOnlyConfigurationT = PresenterOnlyConfiguration>
    void SetPresenterOnlyConfiguration(PresenterOnlyConfigurationT&& value) { m_presenterOnlyConfigurationHasBeenSet = true; m_presenterOnlyConfiguration = std::forward<PresenterOnlyConfigurationT>(value); }
    template<typename PresenterOnlyConfigurationT = PresenterOnlyConfiguration>
    GridViewConfiguration& WithPresenterOnlyConfiguration(PresenterOnlyConfigurationT&& value) { SetPresenterOnlyConfiguration(std::forward<PresenterOnlyConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for an <code>ActiveSpeakerOnly</code> video
     * tile.</p>
     */
    inline const ActiveSpeakerOnlyConfiguration& GetActiveSpeakerOnlyConfiguration() const { return m_activeSpeakerOnlyConfiguration; }
    inline bool ActiveSpeakerOnlyConfigurationHasBeenSet() const { return m_activeSpeakerOnlyConfigurationHasBeenSet; }
    template<typename ActiveSpeakerOnlyConfigurationT = ActiveSpeakerOnlyConfiguration>
    void SetActiveSpeakerOnlyConfiguration(ActiveSpeakerOnlyConfigurationT&& value) { m_activeSpeakerOnlyConfigurationHasBeenSet = true; m_activeSpeakerOnlyConfiguration = std::forward<ActiveSpeakerOnlyConfigurationT>(value); }
    template<typename ActiveSpeakerOnlyConfigurationT = ActiveSpeakerOnlyConfiguration>
    GridViewConfiguration& WithActiveSpeakerOnlyConfiguration(ActiveSpeakerOnlyConfigurationT&& value) { SetActiveSpeakerOnlyConfiguration(std::forward<ActiveSpeakerOnlyConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for a horizontal layout.</p>
     */
    inline const HorizontalLayoutConfiguration& GetHorizontalLayoutConfiguration() const { return m_horizontalLayoutConfiguration; }
    inline bool HorizontalLayoutConfigurationHasBeenSet() const { return m_horizontalLayoutConfigurationHasBeenSet; }
    template<typename HorizontalLayoutConfigurationT = HorizontalLayoutConfiguration>
    void SetHorizontalLayoutConfiguration(HorizontalLayoutConfigurationT&& value) { m_horizontalLayoutConfigurationHasBeenSet = true; m_horizontalLayoutConfiguration = std::forward<HorizontalLayoutConfigurationT>(value); }
    template<typename HorizontalLayoutConfigurationT = HorizontalLayoutConfiguration>
    GridViewConfiguration& WithHorizontalLayoutConfiguration(HorizontalLayoutConfigurationT&& value) { SetHorizontalLayoutConfiguration(std::forward<HorizontalLayoutConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for a vertical layout.</p>
     */
    inline const VerticalLayoutConfiguration& GetVerticalLayoutConfiguration() const { return m_verticalLayoutConfiguration; }
    inline bool VerticalLayoutConfigurationHasBeenSet() const { return m_verticalLayoutConfigurationHasBeenSet; }
    template<typename VerticalLayoutConfigurationT = VerticalLayoutConfiguration>
    void SetVerticalLayoutConfiguration(VerticalLayoutConfigurationT&& value) { m_verticalLayoutConfigurationHasBeenSet = true; m_verticalLayoutConfiguration = std::forward<VerticalLayoutConfigurationT>(value); }
    template<typename VerticalLayoutConfigurationT = VerticalLayoutConfiguration>
    GridViewConfiguration& WithVerticalLayoutConfiguration(VerticalLayoutConfigurationT&& value) { SetVerticalLayoutConfiguration(std::forward<VerticalLayoutConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute settings for the video tiles.</p>
     */
    inline const VideoAttribute& GetVideoAttribute() const { return m_videoAttribute; }
    inline bool VideoAttributeHasBeenSet() const { return m_videoAttributeHasBeenSet; }
    template<typename VideoAttributeT = VideoAttribute>
    void SetVideoAttribute(VideoAttributeT&& value) { m_videoAttributeHasBeenSet = true; m_videoAttribute = std::forward<VideoAttributeT>(value); }
    template<typename VideoAttributeT = VideoAttribute>
    GridViewConfiguration& WithVideoAttribute(VideoAttributeT&& value) { SetVideoAttribute(std::forward<VideoAttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The orientation setting, horizontal or vertical.</p>
     */
    inline CanvasOrientation GetCanvasOrientation() const { return m_canvasOrientation; }
    inline bool CanvasOrientationHasBeenSet() const { return m_canvasOrientationHasBeenSet; }
    inline void SetCanvasOrientation(CanvasOrientation value) { m_canvasOrientationHasBeenSet = true; m_canvasOrientation = value; }
    inline GridViewConfiguration& WithCanvasOrientation(CanvasOrientation value) { SetCanvasOrientation(value); return *this;}
    ///@}
  private:

    ContentShareLayoutOption m_contentShareLayout{ContentShareLayoutOption::NOT_SET};
    bool m_contentShareLayoutHasBeenSet = false;

    PresenterOnlyConfiguration m_presenterOnlyConfiguration;
    bool m_presenterOnlyConfigurationHasBeenSet = false;

    ActiveSpeakerOnlyConfiguration m_activeSpeakerOnlyConfiguration;
    bool m_activeSpeakerOnlyConfigurationHasBeenSet = false;

    HorizontalLayoutConfiguration m_horizontalLayoutConfiguration;
    bool m_horizontalLayoutConfigurationHasBeenSet = false;

    VerticalLayoutConfiguration m_verticalLayoutConfiguration;
    bool m_verticalLayoutConfigurationHasBeenSet = false;

    VideoAttribute m_videoAttribute;
    bool m_videoAttributeHasBeenSet = false;

    CanvasOrientation m_canvasOrientation{CanvasOrientation::NOT_SET};
    bool m_canvasOrientationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
