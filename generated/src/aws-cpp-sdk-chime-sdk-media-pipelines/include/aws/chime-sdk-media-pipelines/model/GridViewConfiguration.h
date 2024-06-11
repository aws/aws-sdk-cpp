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
    AWS_CHIMESDKMEDIAPIPELINES_API GridViewConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API GridViewConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API GridViewConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the layout of the video tiles when content sharing is enabled.</p>
     */
    inline const ContentShareLayoutOption& GetContentShareLayout() const{ return m_contentShareLayout; }
    inline bool ContentShareLayoutHasBeenSet() const { return m_contentShareLayoutHasBeenSet; }
    inline void SetContentShareLayout(const ContentShareLayoutOption& value) { m_contentShareLayoutHasBeenSet = true; m_contentShareLayout = value; }
    inline void SetContentShareLayout(ContentShareLayoutOption&& value) { m_contentShareLayoutHasBeenSet = true; m_contentShareLayout = std::move(value); }
    inline GridViewConfiguration& WithContentShareLayout(const ContentShareLayoutOption& value) { SetContentShareLayout(value); return *this;}
    inline GridViewConfiguration& WithContentShareLayout(ContentShareLayoutOption&& value) { SetContentShareLayout(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the configuration options for a presenter only video tile.</p>
     */
    inline const PresenterOnlyConfiguration& GetPresenterOnlyConfiguration() const{ return m_presenterOnlyConfiguration; }
    inline bool PresenterOnlyConfigurationHasBeenSet() const { return m_presenterOnlyConfigurationHasBeenSet; }
    inline void SetPresenterOnlyConfiguration(const PresenterOnlyConfiguration& value) { m_presenterOnlyConfigurationHasBeenSet = true; m_presenterOnlyConfiguration = value; }
    inline void SetPresenterOnlyConfiguration(PresenterOnlyConfiguration&& value) { m_presenterOnlyConfigurationHasBeenSet = true; m_presenterOnlyConfiguration = std::move(value); }
    inline GridViewConfiguration& WithPresenterOnlyConfiguration(const PresenterOnlyConfiguration& value) { SetPresenterOnlyConfiguration(value); return *this;}
    inline GridViewConfiguration& WithPresenterOnlyConfiguration(PresenterOnlyConfiguration&& value) { SetPresenterOnlyConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for an <code>ActiveSpeakerOnly</code> video
     * tile.</p>
     */
    inline const ActiveSpeakerOnlyConfiguration& GetActiveSpeakerOnlyConfiguration() const{ return m_activeSpeakerOnlyConfiguration; }
    inline bool ActiveSpeakerOnlyConfigurationHasBeenSet() const { return m_activeSpeakerOnlyConfigurationHasBeenSet; }
    inline void SetActiveSpeakerOnlyConfiguration(const ActiveSpeakerOnlyConfiguration& value) { m_activeSpeakerOnlyConfigurationHasBeenSet = true; m_activeSpeakerOnlyConfiguration = value; }
    inline void SetActiveSpeakerOnlyConfiguration(ActiveSpeakerOnlyConfiguration&& value) { m_activeSpeakerOnlyConfigurationHasBeenSet = true; m_activeSpeakerOnlyConfiguration = std::move(value); }
    inline GridViewConfiguration& WithActiveSpeakerOnlyConfiguration(const ActiveSpeakerOnlyConfiguration& value) { SetActiveSpeakerOnlyConfiguration(value); return *this;}
    inline GridViewConfiguration& WithActiveSpeakerOnlyConfiguration(ActiveSpeakerOnlyConfiguration&& value) { SetActiveSpeakerOnlyConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for a horizontal layout.</p>
     */
    inline const HorizontalLayoutConfiguration& GetHorizontalLayoutConfiguration() const{ return m_horizontalLayoutConfiguration; }
    inline bool HorizontalLayoutConfigurationHasBeenSet() const { return m_horizontalLayoutConfigurationHasBeenSet; }
    inline void SetHorizontalLayoutConfiguration(const HorizontalLayoutConfiguration& value) { m_horizontalLayoutConfigurationHasBeenSet = true; m_horizontalLayoutConfiguration = value; }
    inline void SetHorizontalLayoutConfiguration(HorizontalLayoutConfiguration&& value) { m_horizontalLayoutConfigurationHasBeenSet = true; m_horizontalLayoutConfiguration = std::move(value); }
    inline GridViewConfiguration& WithHorizontalLayoutConfiguration(const HorizontalLayoutConfiguration& value) { SetHorizontalLayoutConfiguration(value); return *this;}
    inline GridViewConfiguration& WithHorizontalLayoutConfiguration(HorizontalLayoutConfiguration&& value) { SetHorizontalLayoutConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for a vertical layout.</p>
     */
    inline const VerticalLayoutConfiguration& GetVerticalLayoutConfiguration() const{ return m_verticalLayoutConfiguration; }
    inline bool VerticalLayoutConfigurationHasBeenSet() const { return m_verticalLayoutConfigurationHasBeenSet; }
    inline void SetVerticalLayoutConfiguration(const VerticalLayoutConfiguration& value) { m_verticalLayoutConfigurationHasBeenSet = true; m_verticalLayoutConfiguration = value; }
    inline void SetVerticalLayoutConfiguration(VerticalLayoutConfiguration&& value) { m_verticalLayoutConfigurationHasBeenSet = true; m_verticalLayoutConfiguration = std::move(value); }
    inline GridViewConfiguration& WithVerticalLayoutConfiguration(const VerticalLayoutConfiguration& value) { SetVerticalLayoutConfiguration(value); return *this;}
    inline GridViewConfiguration& WithVerticalLayoutConfiguration(VerticalLayoutConfiguration&& value) { SetVerticalLayoutConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute settings for the video tiles.</p>
     */
    inline const VideoAttribute& GetVideoAttribute() const{ return m_videoAttribute; }
    inline bool VideoAttributeHasBeenSet() const { return m_videoAttributeHasBeenSet; }
    inline void SetVideoAttribute(const VideoAttribute& value) { m_videoAttributeHasBeenSet = true; m_videoAttribute = value; }
    inline void SetVideoAttribute(VideoAttribute&& value) { m_videoAttributeHasBeenSet = true; m_videoAttribute = std::move(value); }
    inline GridViewConfiguration& WithVideoAttribute(const VideoAttribute& value) { SetVideoAttribute(value); return *this;}
    inline GridViewConfiguration& WithVideoAttribute(VideoAttribute&& value) { SetVideoAttribute(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The orientation setting, horizontal or vertical.</p>
     */
    inline const CanvasOrientation& GetCanvasOrientation() const{ return m_canvasOrientation; }
    inline bool CanvasOrientationHasBeenSet() const { return m_canvasOrientationHasBeenSet; }
    inline void SetCanvasOrientation(const CanvasOrientation& value) { m_canvasOrientationHasBeenSet = true; m_canvasOrientation = value; }
    inline void SetCanvasOrientation(CanvasOrientation&& value) { m_canvasOrientationHasBeenSet = true; m_canvasOrientation = std::move(value); }
    inline GridViewConfiguration& WithCanvasOrientation(const CanvasOrientation& value) { SetCanvasOrientation(value); return *this;}
    inline GridViewConfiguration& WithCanvasOrientation(CanvasOrientation&& value) { SetCanvasOrientation(std::move(value)); return *this;}
    ///@}
  private:

    ContentShareLayoutOption m_contentShareLayout;
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

    CanvasOrientation m_canvasOrientation;
    bool m_canvasOrientationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
