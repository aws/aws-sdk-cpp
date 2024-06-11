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
   * <p>The task configuration settings for the Kinesis video stream
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/KinesisVideoStreamSourceTaskConfiguration">AWS
   * API Reference</a></p>
   */
  class KinesisVideoStreamSourceTaskConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamSourceTaskConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamSourceTaskConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamSourceTaskConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the stream.</p>
     */
    inline const Aws::String& GetStreamArn() const{ return m_streamArn; }
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }
    inline void SetStreamArn(const Aws::String& value) { m_streamArnHasBeenSet = true; m_streamArn = value; }
    inline void SetStreamArn(Aws::String&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::move(value); }
    inline void SetStreamArn(const char* value) { m_streamArnHasBeenSet = true; m_streamArn.assign(value); }
    inline KinesisVideoStreamSourceTaskConfiguration& WithStreamArn(const Aws::String& value) { SetStreamArn(value); return *this;}
    inline KinesisVideoStreamSourceTaskConfiguration& WithStreamArn(Aws::String&& value) { SetStreamArn(std::move(value)); return *this;}
    inline KinesisVideoStreamSourceTaskConfiguration& WithStreamArn(const char* value) { SetStreamArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel ID.</p>
     */
    inline int GetChannelId() const{ return m_channelId; }
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
    inline void SetChannelId(int value) { m_channelIdHasBeenSet = true; m_channelId = value; }
    inline KinesisVideoStreamSourceTaskConfiguration& WithChannelId(int value) { SetChannelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the fragment to begin processing.</p>
     */
    inline const Aws::String& GetFragmentNumber() const{ return m_fragmentNumber; }
    inline bool FragmentNumberHasBeenSet() const { return m_fragmentNumberHasBeenSet; }
    inline void SetFragmentNumber(const Aws::String& value) { m_fragmentNumberHasBeenSet = true; m_fragmentNumber = value; }
    inline void SetFragmentNumber(Aws::String&& value) { m_fragmentNumberHasBeenSet = true; m_fragmentNumber = std::move(value); }
    inline void SetFragmentNumber(const char* value) { m_fragmentNumberHasBeenSet = true; m_fragmentNumber.assign(value); }
    inline KinesisVideoStreamSourceTaskConfiguration& WithFragmentNumber(const Aws::String& value) { SetFragmentNumber(value); return *this;}
    inline KinesisVideoStreamSourceTaskConfiguration& WithFragmentNumber(Aws::String&& value) { SetFragmentNumber(std::move(value)); return *this;}
    inline KinesisVideoStreamSourceTaskConfiguration& WithFragmentNumber(const char* value) { SetFragmentNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet = false;

    int m_channelId;
    bool m_channelIdHasBeenSet = false;

    Aws::String m_fragmentNumber;
    bool m_fragmentNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
