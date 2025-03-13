/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-media-pipelines/model/FragmentSelector.h>
#include <aws/chime-sdk-media-pipelines/model/RecordingStreamConfiguration.h>
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
   * <p>A structure that contains the runtime settings for recording a Kinesis video
   * stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/KinesisVideoStreamRecordingSourceRuntimeConfiguration">AWS
   * API Reference</a></p>
   */
  class KinesisVideoStreamRecordingSourceRuntimeConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamRecordingSourceRuntimeConfiguration() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamRecordingSourceRuntimeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamRecordingSourceRuntimeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The stream or streams to be recorded.</p>
     */
    inline const Aws::Vector<RecordingStreamConfiguration>& GetStreams() const { return m_streams; }
    inline bool StreamsHasBeenSet() const { return m_streamsHasBeenSet; }
    template<typename StreamsT = Aws::Vector<RecordingStreamConfiguration>>
    void SetStreams(StreamsT&& value) { m_streamsHasBeenSet = true; m_streams = std::forward<StreamsT>(value); }
    template<typename StreamsT = Aws::Vector<RecordingStreamConfiguration>>
    KinesisVideoStreamRecordingSourceRuntimeConfiguration& WithStreams(StreamsT&& value) { SetStreams(std::forward<StreamsT>(value)); return *this;}
    template<typename StreamsT = RecordingStreamConfiguration>
    KinesisVideoStreamRecordingSourceRuntimeConfiguration& AddStreams(StreamsT&& value) { m_streamsHasBeenSet = true; m_streams.emplace_back(std::forward<StreamsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the timestamp range and timestamp origin of a range of fragments in
     * the Kinesis video stream.</p>
     */
    inline const FragmentSelector& GetFragmentSelector() const { return m_fragmentSelector; }
    inline bool FragmentSelectorHasBeenSet() const { return m_fragmentSelectorHasBeenSet; }
    template<typename FragmentSelectorT = FragmentSelector>
    void SetFragmentSelector(FragmentSelectorT&& value) { m_fragmentSelectorHasBeenSet = true; m_fragmentSelector = std::forward<FragmentSelectorT>(value); }
    template<typename FragmentSelectorT = FragmentSelector>
    KinesisVideoStreamRecordingSourceRuntimeConfiguration& WithFragmentSelector(FragmentSelectorT&& value) { SetFragmentSelector(std::forward<FragmentSelectorT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RecordingStreamConfiguration> m_streams;
    bool m_streamsHasBeenSet = false;

    FragmentSelector m_fragmentSelector;
    bool m_fragmentSelectorHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
