/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/ConcatenationSourceType.h>
#include <aws/chime-sdk-media-pipelines/model/MediaCapturePipelineSourceConfiguration.h>
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
   * <p>The source type and media pipeline configuration settings in a configuration
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/ConcatenationSource">AWS
   * API Reference</a></p>
   */
  class ConcatenationSource
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API ConcatenationSource();
    AWS_CHIMESDKMEDIAPIPELINES_API ConcatenationSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API ConcatenationSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of concatenation source in a configuration object.</p>
     */
    inline const ConcatenationSourceType& GetType() const{ return m_type; }

    /**
     * <p>The type of concatenation source in a configuration object.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of concatenation source in a configuration object.</p>
     */
    inline void SetType(const ConcatenationSourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of concatenation source in a configuration object.</p>
     */
    inline void SetType(ConcatenationSourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of concatenation source in a configuration object.</p>
     */
    inline ConcatenationSource& WithType(const ConcatenationSourceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of concatenation source in a configuration object.</p>
     */
    inline ConcatenationSource& WithType(ConcatenationSourceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The concatenation settings for the media pipeline in a configuration
     * object.</p>
     */
    inline const MediaCapturePipelineSourceConfiguration& GetMediaCapturePipelineSourceConfiguration() const{ return m_mediaCapturePipelineSourceConfiguration; }

    /**
     * <p>The concatenation settings for the media pipeline in a configuration
     * object.</p>
     */
    inline bool MediaCapturePipelineSourceConfigurationHasBeenSet() const { return m_mediaCapturePipelineSourceConfigurationHasBeenSet; }

    /**
     * <p>The concatenation settings for the media pipeline in a configuration
     * object.</p>
     */
    inline void SetMediaCapturePipelineSourceConfiguration(const MediaCapturePipelineSourceConfiguration& value) { m_mediaCapturePipelineSourceConfigurationHasBeenSet = true; m_mediaCapturePipelineSourceConfiguration = value; }

    /**
     * <p>The concatenation settings for the media pipeline in a configuration
     * object.</p>
     */
    inline void SetMediaCapturePipelineSourceConfiguration(MediaCapturePipelineSourceConfiguration&& value) { m_mediaCapturePipelineSourceConfigurationHasBeenSet = true; m_mediaCapturePipelineSourceConfiguration = std::move(value); }

    /**
     * <p>The concatenation settings for the media pipeline in a configuration
     * object.</p>
     */
    inline ConcatenationSource& WithMediaCapturePipelineSourceConfiguration(const MediaCapturePipelineSourceConfiguration& value) { SetMediaCapturePipelineSourceConfiguration(value); return *this;}

    /**
     * <p>The concatenation settings for the media pipeline in a configuration
     * object.</p>
     */
    inline ConcatenationSource& WithMediaCapturePipelineSourceConfiguration(MediaCapturePipelineSourceConfiguration&& value) { SetMediaCapturePipelineSourceConfiguration(std::move(value)); return *this;}

  private:

    ConcatenationSourceType m_type;
    bool m_typeHasBeenSet = false;

    MediaCapturePipelineSourceConfiguration m_mediaCapturePipelineSourceConfiguration;
    bool m_mediaCapturePipelineSourceConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
