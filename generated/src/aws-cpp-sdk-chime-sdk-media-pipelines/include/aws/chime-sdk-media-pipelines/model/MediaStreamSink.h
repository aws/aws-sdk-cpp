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
    AWS_CHIMESDKMEDIAPIPELINES_API MediaStreamSink();
    AWS_CHIMESDKMEDIAPIPELINES_API MediaStreamSink(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API MediaStreamSink& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the media stream sink.</p>
     */
    inline const Aws::String& GetSinkArn() const{ return m_sinkArn; }

    /**
     * <p>The ARN of the media stream sink.</p>
     */
    inline bool SinkArnHasBeenSet() const { return m_sinkArnHasBeenSet; }

    /**
     * <p>The ARN of the media stream sink.</p>
     */
    inline void SetSinkArn(const Aws::String& value) { m_sinkArnHasBeenSet = true; m_sinkArn = value; }

    /**
     * <p>The ARN of the media stream sink.</p>
     */
    inline void SetSinkArn(Aws::String&& value) { m_sinkArnHasBeenSet = true; m_sinkArn = std::move(value); }

    /**
     * <p>The ARN of the media stream sink.</p>
     */
    inline void SetSinkArn(const char* value) { m_sinkArnHasBeenSet = true; m_sinkArn.assign(value); }

    /**
     * <p>The ARN of the media stream sink.</p>
     */
    inline MediaStreamSink& WithSinkArn(const Aws::String& value) { SetSinkArn(value); return *this;}

    /**
     * <p>The ARN of the media stream sink.</p>
     */
    inline MediaStreamSink& WithSinkArn(Aws::String&& value) { SetSinkArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the media stream sink.</p>
     */
    inline MediaStreamSink& WithSinkArn(const char* value) { SetSinkArn(value); return *this;}


    /**
     * <p>The media stream sink's type.</p>
     */
    inline const MediaStreamPipelineSinkType& GetSinkType() const{ return m_sinkType; }

    /**
     * <p>The media stream sink's type.</p>
     */
    inline bool SinkTypeHasBeenSet() const { return m_sinkTypeHasBeenSet; }

    /**
     * <p>The media stream sink's type.</p>
     */
    inline void SetSinkType(const MediaStreamPipelineSinkType& value) { m_sinkTypeHasBeenSet = true; m_sinkType = value; }

    /**
     * <p>The media stream sink's type.</p>
     */
    inline void SetSinkType(MediaStreamPipelineSinkType&& value) { m_sinkTypeHasBeenSet = true; m_sinkType = std::move(value); }

    /**
     * <p>The media stream sink's type.</p>
     */
    inline MediaStreamSink& WithSinkType(const MediaStreamPipelineSinkType& value) { SetSinkType(value); return *this;}

    /**
     * <p>The media stream sink's type.</p>
     */
    inline MediaStreamSink& WithSinkType(MediaStreamPipelineSinkType&& value) { SetSinkType(std::move(value)); return *this;}


    /**
     * <p>Specifies the number of streams that the sink can accept.</p>
     */
    inline int GetReservedStreamCapacity() const{ return m_reservedStreamCapacity; }

    /**
     * <p>Specifies the number of streams that the sink can accept.</p>
     */
    inline bool ReservedStreamCapacityHasBeenSet() const { return m_reservedStreamCapacityHasBeenSet; }

    /**
     * <p>Specifies the number of streams that the sink can accept.</p>
     */
    inline void SetReservedStreamCapacity(int value) { m_reservedStreamCapacityHasBeenSet = true; m_reservedStreamCapacity = value; }

    /**
     * <p>Specifies the number of streams that the sink can accept.</p>
     */
    inline MediaStreamSink& WithReservedStreamCapacity(int value) { SetReservedStreamCapacity(value); return *this;}


    /**
     * <p>The media stream sink's media stream type.</p>
     */
    inline const MediaStreamType& GetMediaStreamType() const{ return m_mediaStreamType; }

    /**
     * <p>The media stream sink's media stream type.</p>
     */
    inline bool MediaStreamTypeHasBeenSet() const { return m_mediaStreamTypeHasBeenSet; }

    /**
     * <p>The media stream sink's media stream type.</p>
     */
    inline void SetMediaStreamType(const MediaStreamType& value) { m_mediaStreamTypeHasBeenSet = true; m_mediaStreamType = value; }

    /**
     * <p>The media stream sink's media stream type.</p>
     */
    inline void SetMediaStreamType(MediaStreamType&& value) { m_mediaStreamTypeHasBeenSet = true; m_mediaStreamType = std::move(value); }

    /**
     * <p>The media stream sink's media stream type.</p>
     */
    inline MediaStreamSink& WithMediaStreamType(const MediaStreamType& value) { SetMediaStreamType(value); return *this;}

    /**
     * <p>The media stream sink's media stream type.</p>
     */
    inline MediaStreamSink& WithMediaStreamType(MediaStreamType&& value) { SetMediaStreamType(std::move(value)); return *this;}

  private:

    Aws::String m_sinkArn;
    bool m_sinkArnHasBeenSet = false;

    MediaStreamPipelineSinkType m_sinkType;
    bool m_sinkTypeHasBeenSet = false;

    int m_reservedStreamCapacity;
    bool m_reservedStreamCapacityHasBeenSet = false;

    MediaStreamType m_mediaStreamType;
    bool m_mediaStreamTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
