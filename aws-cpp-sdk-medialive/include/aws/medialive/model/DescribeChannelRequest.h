/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_MEDIALIVE_API DescribeChannelRequest : public MediaLiveRequest
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
    bool m_channelIdHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
