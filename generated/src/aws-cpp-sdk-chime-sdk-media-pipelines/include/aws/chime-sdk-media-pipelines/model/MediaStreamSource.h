/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/MediaPipelineSourceType.h>
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
   * <p>Structure that contains the settings for media stream sources.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/MediaStreamSource">AWS
   * API Reference</a></p>
   */
  class MediaStreamSource
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API MediaStreamSource();
    AWS_CHIMESDKMEDIAPIPELINES_API MediaStreamSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API MediaStreamSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of media stream source.</p>
     */
    inline const MediaPipelineSourceType& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The type of media stream source.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The type of media stream source.</p>
     */
    inline void SetSourceType(const MediaPipelineSourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The type of media stream source.</p>
     */
    inline void SetSourceType(MediaPipelineSourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The type of media stream source.</p>
     */
    inline MediaStreamSource& WithSourceType(const MediaPipelineSourceType& value) { SetSourceType(value); return *this;}

    /**
     * <p>The type of media stream source.</p>
     */
    inline MediaStreamSource& WithSourceType(MediaPipelineSourceType&& value) { SetSourceType(std::move(value)); return *this;}


    /**
     * <p>The ARN of the media stream source. </p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>The ARN of the media stream source. </p>
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * <p>The ARN of the media stream source. </p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>The ARN of the media stream source. </p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * <p>The ARN of the media stream source. </p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>The ARN of the media stream source. </p>
     */
    inline MediaStreamSource& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The ARN of the media stream source. </p>
     */
    inline MediaStreamSource& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the media stream source. </p>
     */
    inline MediaStreamSource& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}

  private:

    MediaPipelineSourceType m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
