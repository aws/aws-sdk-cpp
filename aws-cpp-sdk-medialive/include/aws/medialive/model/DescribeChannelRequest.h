/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for DescribeChannelRequest<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeChannelRequest">AWS
   * API Reference</a></p>
   */
  class DescribeChannelRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API DescribeChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeChannel"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    /**
     * channel ID
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }

    /**
     * channel ID
     */
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }

    /**
     * channel ID
     */
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }

    /**
     * channel ID
     */
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }

    /**
     * channel ID
     */
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }

    /**
     * channel ID
     */
    inline DescribeChannelRequest& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}

    /**
     * channel ID
     */
    inline DescribeChannelRequest& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}

    /**
     * channel ID
     */
    inline DescribeChannelRequest& WithChannelId(const char* value) { SetChannelId(value); return *this;}

  private:

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
