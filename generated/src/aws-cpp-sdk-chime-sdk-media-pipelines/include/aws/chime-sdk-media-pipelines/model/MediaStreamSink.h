/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/MediaStreamPipelineSinkType.h>
#include <aws/chime-sdk-media-pipelines/model/MediaStreamType.h>
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
   * <p>Structure that contains the settings for a media stream sink.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/MediaStreamSink">AWS
   * API Reference</a></p>
   */
  class MediaStreamSink
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API MediaStreamSink() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API MediaStreamSink(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API MediaStreamSink& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Kinesis Video Stream pool returned by the
     * <a>CreateMediaPipelineKinesisVideoStreamPool</a> API.</p>
     */
    inline const Aws::String& GetSinkArn() const { return m_sinkArn; }
    inline bool SinkArnHasBeenSet() const { return m_sinkArnHasBeenSet; }
    template<typename SinkArnT = Aws::String>
    void SetSinkArn(SinkArnT&& value) { m_sinkArnHasBeenSet = true; m_sinkArn = std::forward<SinkArnT>(value); }
    template<typename SinkArnT = Aws::String>
    MediaStreamSink& WithSinkArn(SinkArnT&& value) { SetSinkArn(std::forward<SinkArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The media stream sink's type.</p>
     */
    inline MediaStreamPipelineSinkType GetSinkType() const { return m_sinkType; }
    inline bool SinkTypeHasBeenSet() const { return m_sinkTypeHasBeenSet; }
    inline void SetSinkType(MediaStreamPipelineSinkType value) { m_sinkTypeHasBeenSet = true; m_sinkType = value; }
    inline MediaStreamSink& WithSinkType(MediaStreamPipelineSinkType value) { SetSinkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the number of streams that the sink can accept.</p>
     */
    inline int GetReservedStreamCapacity() const { return m_reservedStreamCapacity; }
    inline bool ReservedStreamCapacityHasBeenSet() const { return m_reservedStreamCapacityHasBeenSet; }
    inline void SetReservedStreamCapacity(int value) { m_reservedStreamCapacityHasBeenSet = true; m_reservedStreamCapacity = value; }
    inline MediaStreamSink& WithReservedStreamCapacity(int value) { SetReservedStreamCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The media stream sink's media stream type.</p>
     */
    inline MediaStreamType GetMediaStreamType() const { return m_mediaStreamType; }
    inline bool MediaStreamTypeHasBeenSet() const { return m_mediaStreamTypeHasBeenSet; }
    inline void SetMediaStreamType(MediaStreamType value) { m_mediaStreamTypeHasBeenSet = true; m_mediaStreamType = value; }
    inline MediaStreamSink& WithMediaStreamType(MediaStreamType value) { SetMediaStreamType(value); return *this;}
    ///@}
  private:

    Aws::String m_sinkArn;
    bool m_sinkArnHasBeenSet = false;

    MediaStreamPipelineSinkType m_sinkType{MediaStreamPipelineSinkType::NOT_SET};
    bool m_sinkTypeHasBeenSet = false;

    int m_reservedStreamCapacity{0};
    bool m_reservedStreamCapacityHasBeenSet = false;

    MediaStreamType m_mediaStreamType{MediaStreamType::NOT_SET};
    bool m_mediaStreamTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
