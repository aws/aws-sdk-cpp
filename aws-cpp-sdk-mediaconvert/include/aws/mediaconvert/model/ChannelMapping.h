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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/OutputChannelMapping.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Channel mapping (ChannelMapping) contains the group of fields that hold the
   * remixing value for each channel. Units are in dB. Acceptable values are within
   * the range from -60 (mute) through 6. A setting of 0 passes the input channel
   * unchanged to the output channel (no attenuation or amplification).<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ChannelMapping">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API ChannelMapping
  {
  public:
    ChannelMapping();
    ChannelMapping(Aws::Utils::Json::JsonView jsonValue);
    ChannelMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * List of output channels
     */
    inline const Aws::Vector<OutputChannelMapping>& GetOutputChannels() const{ return m_outputChannels; }

    /**
     * List of output channels
     */
    inline bool OutputChannelsHasBeenSet() const { return m_outputChannelsHasBeenSet; }

    /**
     * List of output channels
     */
    inline void SetOutputChannels(const Aws::Vector<OutputChannelMapping>& value) { m_outputChannelsHasBeenSet = true; m_outputChannels = value; }

    /**
     * List of output channels
     */
    inline void SetOutputChannels(Aws::Vector<OutputChannelMapping>&& value) { m_outputChannelsHasBeenSet = true; m_outputChannels = std::move(value); }

    /**
     * List of output channels
     */
    inline ChannelMapping& WithOutputChannels(const Aws::Vector<OutputChannelMapping>& value) { SetOutputChannels(value); return *this;}

    /**
     * List of output channels
     */
    inline ChannelMapping& WithOutputChannels(Aws::Vector<OutputChannelMapping>&& value) { SetOutputChannels(std::move(value)); return *this;}

    /**
     * List of output channels
     */
    inline ChannelMapping& AddOutputChannels(const OutputChannelMapping& value) { m_outputChannelsHasBeenSet = true; m_outputChannels.push_back(value); return *this; }

    /**
     * List of output channels
     */
    inline ChannelMapping& AddOutputChannels(OutputChannelMapping&& value) { m_outputChannelsHasBeenSet = true; m_outputChannels.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<OutputChannelMapping> m_outputChannels;
    bool m_outputChannelsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
