/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class DeleteChannelRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API DeleteChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteChannel"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN or the <code>UUID</code> value of the channel that you want to
     * delete.</p>
     */
    inline const Aws::String& GetChannel() const{ return m_channel; }

    /**
     * <p>The ARN or the <code>UUID</code> value of the channel that you want to
     * delete.</p>
     */
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }

    /**
     * <p>The ARN or the <code>UUID</code> value of the channel that you want to
     * delete.</p>
     */
    inline void SetChannel(const Aws::String& value) { m_channelHasBeenSet = true; m_channel = value; }

    /**
     * <p>The ARN or the <code>UUID</code> value of the channel that you want to
     * delete.</p>
     */
    inline void SetChannel(Aws::String&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }

    /**
     * <p>The ARN or the <code>UUID</code> value of the channel that you want to
     * delete.</p>
     */
    inline void SetChannel(const char* value) { m_channelHasBeenSet = true; m_channel.assign(value); }

    /**
     * <p>The ARN or the <code>UUID</code> value of the channel that you want to
     * delete.</p>
     */
    inline DeleteChannelRequest& WithChannel(const Aws::String& value) { SetChannel(value); return *this;}

    /**
     * <p>The ARN or the <code>UUID</code> value of the channel that you want to
     * delete.</p>
     */
    inline DeleteChannelRequest& WithChannel(Aws::String&& value) { SetChannel(std::move(value)); return *this;}

    /**
     * <p>The ARN or the <code>UUID</code> value of the channel that you want to
     * delete.</p>
     */
    inline DeleteChannelRequest& WithChannel(const char* value) { SetChannel(value); return *this;}

  private:

    Aws::String m_channel;
    bool m_channelHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
