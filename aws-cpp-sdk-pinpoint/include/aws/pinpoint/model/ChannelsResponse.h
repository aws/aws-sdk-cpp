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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/ChannelResponse.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * Get channels definition<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ChannelsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API ChannelsResponse
  {
  public:
    ChannelsResponse();
    ChannelsResponse(Aws::Utils::Json::JsonView jsonValue);
    ChannelsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A map of channels, with the ChannelType as the key and the Channel as the value.
     */
    inline const Aws::Map<Aws::String, ChannelResponse>& GetChannels() const{ return m_channels; }

    /**
     * A map of channels, with the ChannelType as the key and the Channel as the value.
     */
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }

    /**
     * A map of channels, with the ChannelType as the key and the Channel as the value.
     */
    inline void SetChannels(const Aws::Map<Aws::String, ChannelResponse>& value) { m_channelsHasBeenSet = true; m_channels = value; }

    /**
     * A map of channels, with the ChannelType as the key and the Channel as the value.
     */
    inline void SetChannels(Aws::Map<Aws::String, ChannelResponse>&& value) { m_channelsHasBeenSet = true; m_channels = std::move(value); }

    /**
     * A map of channels, with the ChannelType as the key and the Channel as the value.
     */
    inline ChannelsResponse& WithChannels(const Aws::Map<Aws::String, ChannelResponse>& value) { SetChannels(value); return *this;}

    /**
     * A map of channels, with the ChannelType as the key and the Channel as the value.
     */
    inline ChannelsResponse& WithChannels(Aws::Map<Aws::String, ChannelResponse>&& value) { SetChannels(std::move(value)); return *this;}

    /**
     * A map of channels, with the ChannelType as the key and the Channel as the value.
     */
    inline ChannelsResponse& AddChannels(const Aws::String& key, const ChannelResponse& value) { m_channelsHasBeenSet = true; m_channels.emplace(key, value); return *this; }

    /**
     * A map of channels, with the ChannelType as the key and the Channel as the value.
     */
    inline ChannelsResponse& AddChannels(Aws::String&& key, const ChannelResponse& value) { m_channelsHasBeenSet = true; m_channels.emplace(std::move(key), value); return *this; }

    /**
     * A map of channels, with the ChannelType as the key and the Channel as the value.
     */
    inline ChannelsResponse& AddChannels(const Aws::String& key, ChannelResponse&& value) { m_channelsHasBeenSet = true; m_channels.emplace(key, std::move(value)); return *this; }

    /**
     * A map of channels, with the ChannelType as the key and the Channel as the value.
     */
    inline ChannelsResponse& AddChannels(Aws::String&& key, ChannelResponse&& value) { m_channelsHasBeenSet = true; m_channels.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * A map of channels, with the ChannelType as the key and the Channel as the value.
     */
    inline ChannelsResponse& AddChannels(const char* key, ChannelResponse&& value) { m_channelsHasBeenSet = true; m_channels.emplace(key, std::move(value)); return *this; }

    /**
     * A map of channels, with the ChannelType as the key and the Channel as the value.
     */
    inline ChannelsResponse& AddChannels(const char* key, const ChannelResponse& value) { m_channelsHasBeenSet = true; m_channels.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, ChannelResponse> m_channels;
    bool m_channelsHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
