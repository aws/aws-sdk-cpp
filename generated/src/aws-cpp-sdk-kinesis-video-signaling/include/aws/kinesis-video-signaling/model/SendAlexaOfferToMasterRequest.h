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
    AWS_KINESISVIDEOSIGNALINGCHANNELS_API SendAlexaOfferToMasterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendAlexaOfferToMaster"; }

    AWS_KINESISVIDEOSIGNALINGCHANNELS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the signaling channel by which Alexa and the master peer
     * communicate.</p>
     */
    inline const Aws::String& GetChannelARN() const{ return m_channelARN; }

    /**
     * <p>The ARN of the signaling channel by which Alexa and the master peer
     * communicate.</p>
     */
    inline bool ChannelARNHasBeenSet() const { return m_channelARNHasBeenSet; }

    /**
     * <p>The ARN of the signaling channel by which Alexa and the master peer
     * communicate.</p>
     */
    inline void SetChannelARN(const Aws::String& value) { m_channelARNHasBeenSet = true; m_channelARN = value; }

    /**
     * <p>The ARN of the signaling channel by which Alexa and the master peer
     * communicate.</p>
     */
    inline void SetChannelARN(Aws::String&& value) { m_channelARNHasBeenSet = true; m_channelARN = std::move(value); }

    /**
     * <p>The ARN of the signaling channel by which Alexa and the master peer
     * communicate.</p>
     */
    inline void SetChannelARN(const char* value) { m_channelARNHasBeenSet = true; m_channelARN.assign(value); }

    /**
     * <p>The ARN of the signaling channel by which Alexa and the master peer
     * communicate.</p>
     */
    inline SendAlexaOfferToMasterRequest& WithChannelARN(const Aws::String& value) { SetChannelARN(value); return *this;}

    /**
     * <p>The ARN of the signaling channel by which Alexa and the master peer
     * communicate.</p>
     */
    inline SendAlexaOfferToMasterRequest& WithChannelARN(Aws::String&& value) { SetChannelARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the signaling channel by which Alexa and the master peer
     * communicate.</p>
     */
    inline SendAlexaOfferToMasterRequest& WithChannelARN(const char* value) { SetChannelARN(value); return *this;}


    /**
     * <p>The unique identifier for the sender client.</p>
     */
    inline const Aws::String& GetSenderClientId() const{ return m_senderClientId; }

    /**
     * <p>The unique identifier for the sender client.</p>
     */
    inline bool SenderClientIdHasBeenSet() const { return m_senderClientIdHasBeenSet; }

    /**
     * <p>The unique identifier for the sender client.</p>
     */
    inline void SetSenderClientId(const Aws::String& value) { m_senderClientIdHasBeenSet = true; m_senderClientId = value; }

    /**
     * <p>The unique identifier for the sender client.</p>
     */
    inline void SetSenderClientId(Aws::String&& value) { m_senderClientIdHasBeenSet = true; m_senderClientId = std::move(value); }

    /**
     * <p>The unique identifier for the sender client.</p>
     */
    inline void SetSenderClientId(const char* value) { m_senderClientIdHasBeenSet = true; m_senderClientId.assign(value); }

    /**
     * <p>The unique identifier for the sender client.</p>
     */
    inline SendAlexaOfferToMasterRequest& WithSenderClientId(const Aws::String& value) { SetSenderClientId(value); return *this;}

    /**
     * <p>The unique identifier for the sender client.</p>
     */
    inline SendAlexaOfferToMasterRequest& WithSenderClientId(Aws::String&& value) { SetSenderClientId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the sender client.</p>
     */
    inline SendAlexaOfferToMasterRequest& WithSenderClientId(const char* value) { SetSenderClientId(value); return *this;}


    /**
     * <p>The base64-encoded SDP offer content.</p>
     */
    inline const Aws::String& GetMessagePayload() const{ return m_messagePayload; }

    /**
     * <p>The base64-encoded SDP offer content.</p>
     */
    inline bool MessagePayloadHasBeenSet() const { return m_messagePayloadHasBeenSet; }

    /**
     * <p>The base64-encoded SDP offer content.</p>
     */
    inline void SetMessagePayload(const Aws::String& value) { m_messagePayloadHasBeenSet = true; m_messagePayload = value; }

    /**
     * <p>The base64-encoded SDP offer content.</p>
     */
    inline void SetMessagePayload(Aws::String&& value) { m_messagePayloadHasBeenSet = true; m_messagePayload = std::move(value); }

    /**
     * <p>The base64-encoded SDP offer content.</p>
     */
    inline void SetMessagePayload(const char* value) { m_messagePayloadHasBeenSet = true; m_messagePayload.assign(value); }

    /**
     * <p>The base64-encoded SDP offer content.</p>
     */
    inline SendAlexaOfferToMasterRequest& WithMessagePayload(const Aws::String& value) { SetMessagePayload(value); return *this;}

    /**
     * <p>The base64-encoded SDP offer content.</p>
     */
    inline SendAlexaOfferToMasterRequest& WithMessagePayload(Aws::String&& value) { SetMessagePayload(std::move(value)); return *this;}

    /**
     * <p>The base64-encoded SDP offer content.</p>
     */
    inline SendAlexaOfferToMasterRequest& WithMessagePayload(const char* value) { SetMessagePayload(value); return *this;}

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
