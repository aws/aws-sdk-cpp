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
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamRecordingSourceRuntimeConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamRecordingSourceRuntimeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamRecordingSourceRuntimeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The stream or streams to be recorded.</p>
     */
    inline const Aws::Vector<RecordingStreamConfiguration>& GetStreams() const{ return m_streams; }

    /**
     * <p>The stream or streams to be recorded.</p>
     */
    inline bool StreamsHasBeenSet() const { return m_streamsHasBeenSet; }

    /**
     * <p>The stream or streams to be recorded.</p>
     */
    inline void SetStreams(const Aws::Vector<RecordingStreamConfiguration>& value) { m_streamsHasBeenSet = true; m_streams = value; }

    /**
     * <p>The stream or streams to be recorded.</p>
     */
    inline void SetStreams(Aws::Vector<RecordingStreamConfiguration>&& value) { m_streamsHasBeenSet = true; m_streams = std::move(value); }

    /**
     * <p>The stream or streams to be recorded.</p>
     */
    inline KinesisVideoStreamRecordingSourceRuntimeConfiguration& WithStreams(const Aws::Vector<RecordingStreamConfiguration>& value) { SetStreams(value); return *this;}

    /**
     * <p>The stream or streams to be recorded.</p>
     */
    inline KinesisVideoStreamRecordingSourceRuntimeConfiguration& WithStreams(Aws::Vector<RecordingStreamConfiguration>&& value) { SetStreams(std::move(value)); return *this;}

    /**
     * <p>The stream or streams to be recorded.</p>
     */
    inline KinesisVideoStreamRecordingSourceRuntimeConfiguration& AddStreams(const RecordingStreamConfiguration& value) { m_streamsHasBeenSet = true; m_streams.push_back(value); return *this; }

    /**
     * <p>The stream or streams to be recorded.</p>
     */
    inline KinesisVideoStreamRecordingSourceRuntimeConfiguration& AddStreams(RecordingStreamConfiguration&& value) { m_streamsHasBeenSet = true; m_streams.push_back(std::move(value)); return *this; }


    /**
     * <p>Describes the timestamp range and timestamp origin of a range of fragments in
     * the Kinesis video stream.</p>
     */
    inline const FragmentSelector& GetFragmentSelector() const{ return m_fragmentSelector; }

    /**
     * <p>Describes the timestamp range and timestamp origin of a range of fragments in
     * the Kinesis video stream.</p>
     */
    inline bool FragmentSelectorHasBeenSet() const { return m_fragmentSelectorHasBeenSet; }

    /**
     * <p>Describes the timestamp range and timestamp origin of a range of fragments in
     * the Kinesis video stream.</p>
     */
    inline void SetFragmentSelector(const FragmentSelector& value) { m_fragmentSelectorHasBeenSet = true; m_fragmentSelector = value; }

    /**
     * <p>Describes the timestamp range and timestamp origin of a range of fragments in
     * the Kinesis video stream.</p>
     */
    inline void SetFragmentSelector(FragmentSelector&& value) { m_fragmentSelectorHasBeenSet = true; m_fragmentSelector = std::move(value); }

    /**
     * <p>Describes the timestamp range and timestamp origin of a range of fragments in
     * the Kinesis video stream.</p>
     */
    inline KinesisVideoStreamRecordingSourceRuntimeConfiguration& WithFragmentSelector(const FragmentSelector& value) { SetFragmentSelector(value); return *this;}

    /**
     * <p>Describes the timestamp range and timestamp origin of a range of fragments in
     * the Kinesis video stream.</p>
     */
    inline KinesisVideoStreamRecordingSourceRuntimeConfiguration& WithFragmentSelector(FragmentSelector&& value) { SetFragmentSelector(std::move(value)); return *this;}

  private:

    Aws::Vector<RecordingStreamConfiguration> m_streams;
    bool m_streamsHasBeenSet = false;

    FragmentSelector m_fragmentSelector;
    bool m_fragmentSelectorHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
