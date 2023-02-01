/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorage_EXPORTS.h>
#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorageRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KinesisVideoWebRTCStorage
{
namespace Model
{

  /**
   */
  class JoinStorageSessionRequest : public KinesisVideoWebRTCStorageRequest
  {
  public:
    AWS_KINESISVIDEOWEBRTCSTORAGE_API JoinStorageSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "JoinStorageSession"; }

    AWS_KINESISVIDEOWEBRTCSTORAGE_API Aws::String SerializePayload() const override;


    /**
     * <p> The Amazon Resource Name (ARN) of the signaling channel. </p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the signaling channel. </p>
     */
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the signaling channel. </p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the signaling channel. </p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the signaling channel. </p>
     */
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the signaling channel. </p>
     */
    inline JoinStorageSessionRequest& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the signaling channel. </p>
     */
    inline JoinStorageSessionRequest& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the signaling channel. </p>
     */
    inline JoinStorageSessionRequest& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}

  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoWebRTCStorage
} // namespace Aws
