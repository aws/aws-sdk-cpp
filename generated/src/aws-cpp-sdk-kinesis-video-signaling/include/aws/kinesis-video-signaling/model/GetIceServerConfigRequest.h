/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannels_EXPORTS.h>
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis-video-signaling/model/Service.h>
#include <utility>

namespace Aws
{
namespace KinesisVideoSignalingChannels
{
namespace Model
{

  /**
   */
  class GetIceServerConfigRequest : public KinesisVideoSignalingChannelsRequest
  {
  public:
    AWS_KINESISVIDEOSIGNALINGCHANNELS_API GetIceServerConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIceServerConfig"; }

    AWS_KINESISVIDEOSIGNALINGCHANNELS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the signaling channel to be used for the peer-to-peer connection
     * between configured peers. </p>
     */
    inline const Aws::String& GetChannelARN() const{ return m_channelARN; }

    /**
     * <p>The ARN of the signaling channel to be used for the peer-to-peer connection
     * between configured peers. </p>
     */
    inline bool ChannelARNHasBeenSet() const { return m_channelARNHasBeenSet; }

    /**
     * <p>The ARN of the signaling channel to be used for the peer-to-peer connection
     * between configured peers. </p>
     */
    inline void SetChannelARN(const Aws::String& value) { m_channelARNHasBeenSet = true; m_channelARN = value; }

    /**
     * <p>The ARN of the signaling channel to be used for the peer-to-peer connection
     * between configured peers. </p>
     */
    inline void SetChannelARN(Aws::String&& value) { m_channelARNHasBeenSet = true; m_channelARN = std::move(value); }

    /**
     * <p>The ARN of the signaling channel to be used for the peer-to-peer connection
     * between configured peers. </p>
     */
    inline void SetChannelARN(const char* value) { m_channelARNHasBeenSet = true; m_channelARN.assign(value); }

    /**
     * <p>The ARN of the signaling channel to be used for the peer-to-peer connection
     * between configured peers. </p>
     */
    inline GetIceServerConfigRequest& WithChannelARN(const Aws::String& value) { SetChannelARN(value); return *this;}

    /**
     * <p>The ARN of the signaling channel to be used for the peer-to-peer connection
     * between configured peers. </p>
     */
    inline GetIceServerConfigRequest& WithChannelARN(Aws::String&& value) { SetChannelARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the signaling channel to be used for the peer-to-peer connection
     * between configured peers. </p>
     */
    inline GetIceServerConfigRequest& WithChannelARN(const char* value) { SetChannelARN(value); return *this;}


    /**
     * <p>Unique identifier for the viewer. Must be unique within the signaling
     * channel.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>Unique identifier for the viewer. Must be unique within the signaling
     * channel.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>Unique identifier for the viewer. Must be unique within the signaling
     * channel.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>Unique identifier for the viewer. Must be unique within the signaling
     * channel.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>Unique identifier for the viewer. Must be unique within the signaling
     * channel.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>Unique identifier for the viewer. Must be unique within the signaling
     * channel.</p>
     */
    inline GetIceServerConfigRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>Unique identifier for the viewer. Must be unique within the signaling
     * channel.</p>
     */
    inline GetIceServerConfigRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the viewer. Must be unique within the signaling
     * channel.</p>
     */
    inline GetIceServerConfigRequest& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>Specifies the desired service. Currently, <code>TURN</code> is the only valid
     * value.</p>
     */
    inline const Service& GetService() const{ return m_service; }

    /**
     * <p>Specifies the desired service. Currently, <code>TURN</code> is the only valid
     * value.</p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p>Specifies the desired service. Currently, <code>TURN</code> is the only valid
     * value.</p>
     */
    inline void SetService(const Service& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>Specifies the desired service. Currently, <code>TURN</code> is the only valid
     * value.</p>
     */
    inline void SetService(Service&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p>Specifies the desired service. Currently, <code>TURN</code> is the only valid
     * value.</p>
     */
    inline GetIceServerConfigRequest& WithService(const Service& value) { SetService(value); return *this;}

    /**
     * <p>Specifies the desired service. Currently, <code>TURN</code> is the only valid
     * value.</p>
     */
    inline GetIceServerConfigRequest& WithService(Service&& value) { SetService(std::move(value)); return *this;}


    /**
     * <p>An optional user ID to be associated with the credentials.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>An optional user ID to be associated with the credentials.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>An optional user ID to be associated with the credentials.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>An optional user ID to be associated with the credentials.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>An optional user ID to be associated with the credentials.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>An optional user ID to be associated with the credentials.</p>
     */
    inline GetIceServerConfigRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>An optional user ID to be associated with the credentials.</p>
     */
    inline GetIceServerConfigRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>An optional user ID to be associated with the credentials.</p>
     */
    inline GetIceServerConfigRequest& WithUsername(const char* value) { SetUsername(value); return *this;}

  private:

    Aws::String m_channelARN;
    bool m_channelARNHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Service m_service;
    bool m_serviceHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoSignalingChannels
} // namespace Aws
