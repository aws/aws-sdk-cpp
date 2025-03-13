/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannels_EXPORTS.h>
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KinesisVideoSignalingChannels
{
namespace Model
{

  /**
   */
  class SendAlexaOfferToMasterRequest : public KinesisVideoSignalingChannelsRequest
  {
  public:
    AWS_KINESISVIDEOSIGNALINGCHANNELS_API SendAlexaOfferToMasterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendAlexaOfferToMaster"; }

    AWS_KINESISVIDEOSIGNALINGCHANNELS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the signaling channel by which Alexa and the master peer
     * communicate.</p>
     */
    inline const Aws::String& GetChannelARN() const { return m_channelARN; }
    inline bool ChannelARNHasBeenSet() const { return m_channelARNHasBeenSet; }
    template<typename ChannelARNT = Aws::String>
    void SetChannelARN(ChannelARNT&& value) { m_channelARNHasBeenSet = true; m_channelARN = std::forward<ChannelARNT>(value); }
    template<typename ChannelARNT = Aws::String>
    SendAlexaOfferToMasterRequest& WithChannelARN(ChannelARNT&& value) { SetChannelARN(std::forward<ChannelARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the sender client.</p>
     */
    inline const Aws::String& GetSenderClientId() const { return m_senderClientId; }
    inline bool SenderClientIdHasBeenSet() const { return m_senderClientIdHasBeenSet; }
    template<typename SenderClientIdT = Aws::String>
    void SetSenderClientId(SenderClientIdT&& value) { m_senderClientIdHasBeenSet = true; m_senderClientId = std::forward<SenderClientIdT>(value); }
    template<typename SenderClientIdT = Aws::String>
    SendAlexaOfferToMasterRequest& WithSenderClientId(SenderClientIdT&& value) { SetSenderClientId(std::forward<SenderClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base64-encoded SDP offer content.</p>
     */
    inline const Aws::String& GetMessagePayload() const { return m_messagePayload; }
    inline bool MessagePayloadHasBeenSet() const { return m_messagePayloadHasBeenSet; }
    template<typename MessagePayloadT = Aws::String>
    void SetMessagePayload(MessagePayloadT&& value) { m_messagePayloadHasBeenSet = true; m_messagePayload = std::forward<MessagePayloadT>(value); }
    template<typename MessagePayloadT = Aws::String>
    SendAlexaOfferToMasterRequest& WithMessagePayload(MessagePayloadT&& value) { SetMessagePayload(std::forward<MessagePayloadT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelARN;
    bool m_channelARNHasBeenSet = false;

    Aws::String m_senderClientId;
    bool m_senderClientIdHasBeenSet = false;

    Aws::String m_messagePayload;
    bool m_messagePayloadHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoSignalingChannels
} // namespace Aws
