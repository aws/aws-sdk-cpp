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
    AWS_KINESISVIDEOSIGNALINGCHANNELS_API GetIceServerConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIceServerConfig"; }

    AWS_KINESISVIDEOSIGNALINGCHANNELS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the signaling channel to be used for the peer-to-peer connection
     * between configured peers. </p>
     */
    inline const Aws::String& GetChannelARN() const { return m_channelARN; }
    inline bool ChannelARNHasBeenSet() const { return m_channelARNHasBeenSet; }
    template<typename ChannelARNT = Aws::String>
    void SetChannelARN(ChannelARNT&& value) { m_channelARNHasBeenSet = true; m_channelARN = std::forward<ChannelARNT>(value); }
    template<typename ChannelARNT = Aws::String>
    GetIceServerConfigRequest& WithChannelARN(ChannelARNT&& value) { SetChannelARN(std::forward<ChannelARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for the viewer. Must be unique within the signaling
     * channel.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    GetIceServerConfigRequest& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the desired service. Currently, <code>TURN</code> is the only valid
     * value.</p>
     */
    inline Service GetService() const { return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    inline void SetService(Service value) { m_serviceHasBeenSet = true; m_service = value; }
    inline GetIceServerConfigRequest& WithService(Service value) { SetService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional user ID to be associated with the credentials.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    GetIceServerConfigRequest& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelARN;
    bool m_channelARNHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Service m_service{Service::NOT_SET};
    bool m_serviceHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoSignalingChannels
} // namespace Aws
