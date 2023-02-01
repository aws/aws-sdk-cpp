/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/SelectedVideoStreams.h>
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
   * <p>Source configuration for a specified media pipeline.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/SourceConfiguration">AWS
   * API Reference</a></p>
   */
  class SourceConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API SourceConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API SourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API SourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The selected video streams for a specified media pipeline. The number of
     * video streams can't exceed 25.</p>
     */
    inline const SelectedVideoStreams& GetSelectedVideoStreams() const{ return m_selectedVideoStreams; }

    /**
     * <p>The selected video streams for a specified media pipeline. The number of
     * video streams can't exceed 25.</p>
     */
    inline bool SelectedVideoStreamsHasBeenSet() const { return m_selectedVideoStreamsHasBeenSet; }

    /**
     * <p>The selected video streams for a specified media pipeline. The number of
     * video streams can't exceed 25.</p>
     */
    inline void SetSelectedVideoStreams(const SelectedVideoStreams& value) { m_selectedVideoStreamsHasBeenSet = true; m_selectedVideoStreams = value; }

    /**
     * <p>The selected video streams for a specified media pipeline. The number of
     * video streams can't exceed 25.</p>
     */
    inline void SetSelectedVideoStreams(SelectedVideoStreams&& value) { m_selectedVideoStreamsHasBeenSet = true; m_selectedVideoStreams = std::move(value); }

    /**
     * <p>The selected video streams for a specified media pipeline. The number of
     * video streams can't exceed 25.</p>
     */
    inline SourceConfiguration& WithSelectedVideoStreams(const SelectedVideoStreams& value) { SetSelectedVideoStreams(value); return *this;}

    /**
     * <p>The selected video streams for a specified media pipeline. The number of
     * video streams can't exceed 25.</p>
     */
    inline SourceConfiguration& WithSelectedVideoStreams(SelectedVideoStreams&& value) { SetSelectedVideoStreams(std::move(value)); return *this;}

  private:

    SelectedVideoStreams m_selectedVideoStreams;
    bool m_selectedVideoStreamsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
