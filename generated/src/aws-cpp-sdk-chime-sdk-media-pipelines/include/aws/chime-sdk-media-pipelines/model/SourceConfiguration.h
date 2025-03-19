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
    AWS_CHIMESDKMEDIAPIPELINES_API SourceConfiguration() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API SourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API SourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The selected video streams for a specified media pipeline. The number of
     * video streams can't exceed 25.</p>
     */
    inline const SelectedVideoStreams& GetSelectedVideoStreams() const { return m_selectedVideoStreams; }
    inline bool SelectedVideoStreamsHasBeenSet() const { return m_selectedVideoStreamsHasBeenSet; }
    template<typename SelectedVideoStreamsT = SelectedVideoStreams>
    void SetSelectedVideoStreams(SelectedVideoStreamsT&& value) { m_selectedVideoStreamsHasBeenSet = true; m_selectedVideoStreams = std::forward<SelectedVideoStreamsT>(value); }
    template<typename SelectedVideoStreamsT = SelectedVideoStreams>
    SourceConfiguration& WithSelectedVideoStreams(SelectedVideoStreamsT&& value) { SetSelectedVideoStreams(std::forward<SelectedVideoStreamsT>(value)); return *this;}
    ///@}
  private:

    SelectedVideoStreams m_selectedVideoStreams;
    bool m_selectedVideoStreamsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
