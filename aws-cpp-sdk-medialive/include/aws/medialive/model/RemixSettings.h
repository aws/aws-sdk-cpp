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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/AudioChannelMapping.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Remix Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/RemixSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API RemixSettings
  {
  public:
    RemixSettings();
    RemixSettings(Aws::Utils::Json::JsonView jsonValue);
    RemixSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Mapping of input channels to output channels, with appropriate gain adjustments.
     */
    inline const Aws::Vector<AudioChannelMapping>& GetChannelMappings() const{ return m_channelMappings; }

    /**
     * Mapping of input channels to output channels, with appropriate gain adjustments.
     */
    inline bool ChannelMappingsHasBeenSet() const { return m_channelMappingsHasBeenSet; }

    /**
     * Mapping of input channels to output channels, with appropriate gain adjustments.
     */
    inline void SetChannelMappings(const Aws::Vector<AudioChannelMapping>& value) { m_channelMappingsHasBeenSet = true; m_channelMappings = value; }

    /**
     * Mapping of input channels to output channels, with appropriate gain adjustments.
     */
    inline void SetChannelMappings(Aws::Vector<AudioChannelMapping>&& value) { m_channelMappingsHasBeenSet = true; m_channelMappings = std::move(value); }

    /**
     * Mapping of input channels to output channels, with appropriate gain adjustments.
     */
    inline RemixSettings& WithChannelMappings(const Aws::Vector<AudioChannelMapping>& value) { SetChannelMappings(value); return *this;}

    /**
     * Mapping of input channels to output channels, with appropriate gain adjustments.
     */
    inline RemixSettings& WithChannelMappings(Aws::Vector<AudioChannelMapping>&& value) { SetChannelMappings(std::move(value)); return *this;}

    /**
     * Mapping of input channels to output channels, with appropriate gain adjustments.
     */
    inline RemixSettings& AddChannelMappings(const AudioChannelMapping& value) { m_channelMappingsHasBeenSet = true; m_channelMappings.push_back(value); return *this; }

    /**
     * Mapping of input channels to output channels, with appropriate gain adjustments.
     */
    inline RemixSettings& AddChannelMappings(AudioChannelMapping&& value) { m_channelMappingsHasBeenSet = true; m_channelMappings.push_back(std::move(value)); return *this; }


    /**
     * Number of input channels to be used.
     */
    inline int GetChannelsIn() const{ return m_channelsIn; }

    /**
     * Number of input channels to be used.
     */
    inline bool ChannelsInHasBeenSet() const { return m_channelsInHasBeenSet; }

    /**
     * Number of input channels to be used.
     */
    inline void SetChannelsIn(int value) { m_channelsInHasBeenSet = true; m_channelsIn = value; }

    /**
     * Number of input channels to be used.
     */
    inline RemixSettings& WithChannelsIn(int value) { SetChannelsIn(value); return *this;}


    /**
     * Number of output channels to be produced.
Valid values: 1, 2, 4, 6, 8
     */
    inline int GetChannelsOut() const{ return m_channelsOut; }

    /**
     * Number of output channels to be produced.
Valid values: 1, 2, 4, 6, 8
     */
    inline bool ChannelsOutHasBeenSet() const { return m_channelsOutHasBeenSet; }

    /**
     * Number of output channels to be produced.
Valid values: 1, 2, 4, 6, 8
     */
    inline void SetChannelsOut(int value) { m_channelsOutHasBeenSet = true; m_channelsOut = value; }

    /**
     * Number of output channels to be produced.
Valid values: 1, 2, 4, 6, 8
     */
    inline RemixSettings& WithChannelsOut(int value) { SetChannelsOut(value); return *this;}

  private:

    Aws::Vector<AudioChannelMapping> m_channelMappings;
    bool m_channelMappingsHasBeenSet;

    int m_channelsIn;
    bool m_channelsInHasBeenSet;

    int m_channelsOut;
    bool m_channelsOutHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
