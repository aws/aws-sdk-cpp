/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

  /**
   */
  class AWS_MEDIATAILOR_API DescribeChannelRequest : public MediaTailorRequest
  {
  public:
    DescribeChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeChannel"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline DescribeChannelRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline DescribeChannelRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The identifier for the channel you are working on.</p>
     */
    inline DescribeChannelRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}

  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
