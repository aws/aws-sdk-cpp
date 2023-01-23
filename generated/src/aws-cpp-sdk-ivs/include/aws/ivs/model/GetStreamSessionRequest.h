/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/IVSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IVS
{
namespace Model
{

  /**
   */
  class GetStreamSessionRequest : public IVSRequest
  {
  public:
    AWS_IVS_API GetStreamSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetStreamSession"; }

    AWS_IVS_API Aws::String SerializePayload() const override;


    /**
     * <p>ARN of the channel resource</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>ARN of the channel resource</p>
     */
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }

    /**
     * <p>ARN of the channel resource</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }

    /**
     * <p>ARN of the channel resource</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }

    /**
     * <p>ARN of the channel resource</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }

    /**
     * <p>ARN of the channel resource</p>
     */
    inline GetStreamSessionRequest& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>ARN of the channel resource</p>
     */
    inline GetStreamSessionRequest& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the channel resource</p>
     */
    inline GetStreamSessionRequest& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel. If no <code>streamId</code> is provided, this returns the most recent
     * stream session for the channel, if it exists.</p>
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }

    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel. If no <code>streamId</code> is provided, this returns the most recent
     * stream session for the channel, if it exists.</p>
     */
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }

    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel. If no <code>streamId</code> is provided, this returns the most recent
     * stream session for the channel, if it exists.</p>
     */
    inline void SetStreamId(const Aws::String& value) { m_streamIdHasBeenSet = true; m_streamId = value; }

    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel. If no <code>streamId</code> is provided, this returns the most recent
     * stream session for the channel, if it exists.</p>
     */
    inline void SetStreamId(Aws::String&& value) { m_streamIdHasBeenSet = true; m_streamId = std::move(value); }

    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel. If no <code>streamId</code> is provided, this returns the most recent
     * stream session for the channel, if it exists.</p>
     */
    inline void SetStreamId(const char* value) { m_streamIdHasBeenSet = true; m_streamId.assign(value); }

    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel. If no <code>streamId</code> is provided, this returns the most recent
     * stream session for the channel, if it exists.</p>
     */
    inline GetStreamSessionRequest& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}

    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel. If no <code>streamId</code> is provided, this returns the most recent
     * stream session for the channel, if it exists.</p>
     */
    inline GetStreamSessionRequest& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a live or previously live stream in the specified
     * channel. If no <code>streamId</code> is provided, this returns the most recent
     * stream session for the channel, if it exists.</p>
     */
    inline GetStreamSessionRequest& WithStreamId(const char* value) { SetStreamId(value); return *this;}

  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
