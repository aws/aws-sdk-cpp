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
   * <p>The summary data of a media capture pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/MediaCapturePipelineSummary">AWS
   * API Reference</a></p>
   */
  class MediaCapturePipelineSummary
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API MediaCapturePipelineSummary() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API MediaCapturePipelineSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API MediaCapturePipelineSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the media pipeline in the summary.</p>
     */
    inline const Aws::String& GetMediaPipelineId() const { return m_mediaPipelineId; }
    inline bool MediaPipelineIdHasBeenSet() const { return m_mediaPipelineIdHasBeenSet; }
    template<typename MediaPipelineIdT = Aws::String>
    void SetMediaPipelineId(MediaPipelineIdT&& value) { m_mediaPipelineIdHasBeenSet = true; m_mediaPipelineId = std::forward<MediaPipelineIdT>(value); }
    template<typename MediaPipelineIdT = Aws::String>
    MediaCapturePipelineSummary& WithMediaPipelineId(MediaPipelineIdT&& value) { SetMediaPipelineId(std::forward<MediaPipelineIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the media pipeline in the summary.</p>
     */
    inline const Aws::String& GetMediaPipelineArn() const { return m_mediaPipelineArn; }
    inline bool MediaPipelineArnHasBeenSet() const { return m_mediaPipelineArnHasBeenSet; }
    template<typename MediaPipelineArnT = Aws::String>
    void SetMediaPipelineArn(MediaPipelineArnT&& value) { m_mediaPipelineArnHasBeenSet = true; m_mediaPipelineArn = std::forward<MediaPipelineArnT>(value); }
    template<typename MediaPipelineArnT = Aws::String>
    MediaCapturePipelineSummary& WithMediaPipelineArn(MediaPipelineArnT&& value) { SetMediaPipelineArn(std::forward<MediaPipelineArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mediaPipelineId;
    bool m_mediaPipelineIdHasBeenSet = false;

    Aws::String m_mediaPipelineArn;
    bool m_mediaPipelineArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
