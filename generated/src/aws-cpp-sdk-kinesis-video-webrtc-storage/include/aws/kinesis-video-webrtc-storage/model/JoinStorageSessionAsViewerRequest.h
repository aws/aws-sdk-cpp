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
  class JoinStorageSessionAsViewerRequest : public KinesisVideoWebRTCStorageRequest
  {
  public:
    AWS_KINESISVIDEOWEBRTCSTORAGE_API JoinStorageSessionAsViewerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "JoinStorageSessionAsViewer"; }

    AWS_KINESISVIDEOWEBRTCSTORAGE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the signaling channel. </p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }
    inline JoinStorageSessionAsViewerRequest& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}
    inline JoinStorageSessionAsViewerRequest& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}
    inline JoinStorageSessionAsViewerRequest& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier for the sender client. </p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline JoinStorageSessionAsViewerRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline JoinStorageSessionAsViewerRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline JoinStorageSessionAsViewerRequest& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}
  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoWebRTCStorage
} // namespace Aws
