/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/LayoutOption.h>
#include <aws/chime-sdk-media-pipelines/model/ResolutionOption.h>
#include <aws/chime-sdk-media-pipelines/model/GridViewConfiguration.h>
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
   * <p>Describes the configuration for the composited video artifacts.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/CompositedVideoArtifactsConfiguration">AWS
   * API Reference</a></p>
   */
  class CompositedVideoArtifactsConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API CompositedVideoArtifactsConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API CompositedVideoArtifactsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API CompositedVideoArtifactsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The layout setting, such as <code>GridView</code> in the configuration
     * object.</p>
     */
    inline const LayoutOption& GetLayout() const{ return m_layout; }

    /**
     * <p>The layout setting, such as <code>GridView</code> in the configuration
     * object.</p>
     */
    inline bool LayoutHasBeenSet() const { return m_layoutHasBeenSet; }

    /**
     * <p>The layout setting, such as <code>GridView</code> in the configuration
     * object.</p>
     */
    inline void SetLayout(const LayoutOption& value) { m_layoutHasBeenSet = true; m_layout = value; }

    /**
     * <p>The layout setting, such as <code>GridView</code> in the configuration
     * object.</p>
     */
    inline void SetLayout(LayoutOption&& value) { m_layoutHasBeenSet = true; m_layout = std::move(value); }

    /**
     * <p>The layout setting, such as <code>GridView</code> in the configuration
     * object.</p>
     */
    inline CompositedVideoArtifactsConfiguration& WithLayout(const LayoutOption& value) { SetLayout(value); return *this;}

    /**
     * <p>The layout setting, such as <code>GridView</code> in the configuration
     * object.</p>
     */
    inline CompositedVideoArtifactsConfiguration& WithLayout(LayoutOption&& value) { SetLayout(std::move(value)); return *this;}


    /**
     * <p>The video resolution setting in the configuration object. Default: HD at 1280
     * x 720. FHD resolution: 1920 x 1080.</p>
     */
    inline const ResolutionOption& GetResolution() const{ return m_resolution; }

    /**
     * <p>The video resolution setting in the configuration object. Default: HD at 1280
     * x 720. FHD resolution: 1920 x 1080.</p>
     */
    inline bool ResolutionHasBeenSet() const { return m_resolutionHasBeenSet; }

    /**
     * <p>The video resolution setting in the configuration object. Default: HD at 1280
     * x 720. FHD resolution: 1920 x 1080.</p>
     */
    inline void SetResolution(const ResolutionOption& value) { m_resolutionHasBeenSet = true; m_resolution = value; }

    /**
     * <p>The video resolution setting in the configuration object. Default: HD at 1280
     * x 720. FHD resolution: 1920 x 1080.</p>
     */
    inline void SetResolution(ResolutionOption&& value) { m_resolutionHasBeenSet = true; m_resolution = std::move(value); }

    /**
     * <p>The video resolution setting in the configuration object. Default: HD at 1280
     * x 720. FHD resolution: 1920 x 1080.</p>
     */
    inline CompositedVideoArtifactsConfiguration& WithResolution(const ResolutionOption& value) { SetResolution(value); return *this;}

    /**
     * <p>The video resolution setting in the configuration object. Default: HD at 1280
     * x 720. FHD resolution: 1920 x 1080.</p>
     */
    inline CompositedVideoArtifactsConfiguration& WithResolution(ResolutionOption&& value) { SetResolution(std::move(value)); return *this;}


    /**
     * <p>The <code>GridView</code> configuration setting.</p>
     */
    inline const GridViewConfiguration& GetGridViewConfiguration() const{ return m_gridViewConfiguration; }

    /**
     * <p>The <code>GridView</code> configuration setting.</p>
     */
    inline bool GridViewConfigurationHasBeenSet() const { return m_gridViewConfigurationHasBeenSet; }

    /**
     * <p>The <code>GridView</code> configuration setting.</p>
     */
    inline void SetGridViewConfiguration(const GridViewConfiguration& value) { m_gridViewConfigurationHasBeenSet = true; m_gridViewConfiguration = value; }

    /**
     * <p>The <code>GridView</code> configuration setting.</p>
     */
    inline void SetGridViewConfiguration(GridViewConfiguration&& value) { m_gridViewConfigurationHasBeenSet = true; m_gridViewConfiguration = std::move(value); }

    /**
     * <p>The <code>GridView</code> configuration setting.</p>
     */
    inline CompositedVideoArtifactsConfiguration& WithGridViewConfiguration(const GridViewConfiguration& value) { SetGridViewConfiguration(value); return *this;}

    /**
     * <p>The <code>GridView</code> configuration setting.</p>
     */
    inline CompositedVideoArtifactsConfiguration& WithGridViewConfiguration(GridViewConfiguration&& value) { SetGridViewConfiguration(std::move(value)); return *this;}

  private:

    LayoutOption m_layout;
    bool m_layoutHasBeenSet = false;

    ResolutionOption m_resolution;
    bool m_resolutionHasBeenSet = false;

    GridViewConfiguration m_gridViewConfiguration;
    bool m_gridViewConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
