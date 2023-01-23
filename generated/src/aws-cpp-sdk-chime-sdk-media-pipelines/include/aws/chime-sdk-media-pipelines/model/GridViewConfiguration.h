/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/ContentShareLayoutOption.h>
#include <aws/chime-sdk-media-pipelines/model/PresenterOnlyConfiguration.h>
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


    /**
     * <p>Defines the layout of the video tiles when content sharing is enabled.</p>
     */
    inline const ContentShareLayoutOption& GetContentShareLayout() const{ return m_contentShareLayout; }

    /**
     * <p>Defines the layout of the video tiles when content sharing is enabled.</p>
     */
    inline bool ContentShareLayoutHasBeenSet() const { return m_contentShareLayoutHasBeenSet; }

    /**
     * <p>Defines the layout of the video tiles when content sharing is enabled.</p>
     */
    inline void SetContentShareLayout(const ContentShareLayoutOption& value) { m_contentShareLayoutHasBeenSet = true; m_contentShareLayout = value; }

    /**
     * <p>Defines the layout of the video tiles when content sharing is enabled.</p>
     */
    inline void SetContentShareLayout(ContentShareLayoutOption&& value) { m_contentShareLayoutHasBeenSet = true; m_contentShareLayout = std::move(value); }

    /**
     * <p>Defines the layout of the video tiles when content sharing is enabled.</p>
     */
    inline GridViewConfiguration& WithContentShareLayout(const ContentShareLayoutOption& value) { SetContentShareLayout(value); return *this;}

    /**
     * <p>Defines the layout of the video tiles when content sharing is enabled.</p>
     */
    inline GridViewConfiguration& WithContentShareLayout(ContentShareLayoutOption&& value) { SetContentShareLayout(std::move(value)); return *this;}


    /**
     * <p>Defines the configuration options for a presenter only video tile.</p>
     */
    inline const PresenterOnlyConfiguration& GetPresenterOnlyConfiguration() const{ return m_presenterOnlyConfiguration; }

    /**
     * <p>Defines the configuration options for a presenter only video tile.</p>
     */
    inline bool PresenterOnlyConfigurationHasBeenSet() const { return m_presenterOnlyConfigurationHasBeenSet; }

    /**
     * <p>Defines the configuration options for a presenter only video tile.</p>
     */
    inline void SetPresenterOnlyConfiguration(const PresenterOnlyConfiguration& value) { m_presenterOnlyConfigurationHasBeenSet = true; m_presenterOnlyConfiguration = value; }

    /**
     * <p>Defines the configuration options for a presenter only video tile.</p>
     */
    inline void SetPresenterOnlyConfiguration(PresenterOnlyConfiguration&& value) { m_presenterOnlyConfigurationHasBeenSet = true; m_presenterOnlyConfiguration = std::move(value); }

    /**
     * <p>Defines the configuration options for a presenter only video tile.</p>
     */
    inline GridViewConfiguration& WithPresenterOnlyConfiguration(const PresenterOnlyConfiguration& value) { SetPresenterOnlyConfiguration(value); return *this;}

    /**
     * <p>Defines the configuration options for a presenter only video tile.</p>
     */
    inline GridViewConfiguration& WithPresenterOnlyConfiguration(PresenterOnlyConfiguration&& value) { SetPresenterOnlyConfiguration(std::move(value)); return *this;}

  private:

    ContentShareLayoutOption m_contentShareLayout;
    bool m_contentShareLayoutHasBeenSet = false;

    PresenterOnlyConfiguration m_presenterOnlyConfiguration;
    bool m_presenterOnlyConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
