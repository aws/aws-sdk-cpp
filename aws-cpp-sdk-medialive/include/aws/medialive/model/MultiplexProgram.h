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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/MultiplexProgramSettings.h>
#include <aws/medialive/model/MultiplexProgramPacketIdentifiersMap.h>
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
   * The multiplex program object.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MultiplexProgram">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API MultiplexProgram
  {
  public:
    MultiplexProgram();
    MultiplexProgram(Aws::Utils::Json::JsonView jsonValue);
    MultiplexProgram& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The MediaLive channel associated with the program.
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }

    /**
     * The MediaLive channel associated with the program.
     */
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }

    /**
     * The MediaLive channel associated with the program.
     */
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }

    /**
     * The MediaLive channel associated with the program.
     */
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }

    /**
     * The MediaLive channel associated with the program.
     */
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }

    /**
     * The MediaLive channel associated with the program.
     */
    inline MultiplexProgram& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}

    /**
     * The MediaLive channel associated with the program.
     */
    inline MultiplexProgram& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}

    /**
     * The MediaLive channel associated with the program.
     */
    inline MultiplexProgram& WithChannelId(const char* value) { SetChannelId(value); return *this;}


    /**
     * The settings for this multiplex program.
     */
    inline const MultiplexProgramSettings& GetMultiplexProgramSettings() const{ return m_multiplexProgramSettings; }

    /**
     * The settings for this multiplex program.
     */
    inline bool MultiplexProgramSettingsHasBeenSet() const { return m_multiplexProgramSettingsHasBeenSet; }

    /**
     * The settings for this multiplex program.
     */
    inline void SetMultiplexProgramSettings(const MultiplexProgramSettings& value) { m_multiplexProgramSettingsHasBeenSet = true; m_multiplexProgramSettings = value; }

    /**
     * The settings for this multiplex program.
     */
    inline void SetMultiplexProgramSettings(MultiplexProgramSettings&& value) { m_multiplexProgramSettingsHasBeenSet = true; m_multiplexProgramSettings = std::move(value); }

    /**
     * The settings for this multiplex program.
     */
    inline MultiplexProgram& WithMultiplexProgramSettings(const MultiplexProgramSettings& value) { SetMultiplexProgramSettings(value); return *this;}

    /**
     * The settings for this multiplex program.
     */
    inline MultiplexProgram& WithMultiplexProgramSettings(MultiplexProgramSettings&& value) { SetMultiplexProgramSettings(std::move(value)); return *this;}


    /**
     * The packet identifier map for this multiplex program.
     */
    inline const MultiplexProgramPacketIdentifiersMap& GetPacketIdentifiersMap() const{ return m_packetIdentifiersMap; }

    /**
     * The packet identifier map for this multiplex program.
     */
    inline bool PacketIdentifiersMapHasBeenSet() const { return m_packetIdentifiersMapHasBeenSet; }

    /**
     * The packet identifier map for this multiplex program.
     */
    inline void SetPacketIdentifiersMap(const MultiplexProgramPacketIdentifiersMap& value) { m_packetIdentifiersMapHasBeenSet = true; m_packetIdentifiersMap = value; }

    /**
     * The packet identifier map for this multiplex program.
     */
    inline void SetPacketIdentifiersMap(MultiplexProgramPacketIdentifiersMap&& value) { m_packetIdentifiersMapHasBeenSet = true; m_packetIdentifiersMap = std::move(value); }

    /**
     * The packet identifier map for this multiplex program.
     */
    inline MultiplexProgram& WithPacketIdentifiersMap(const MultiplexProgramPacketIdentifiersMap& value) { SetPacketIdentifiersMap(value); return *this;}

    /**
     * The packet identifier map for this multiplex program.
     */
    inline MultiplexProgram& WithPacketIdentifiersMap(MultiplexProgramPacketIdentifiersMap&& value) { SetPacketIdentifiersMap(std::move(value)); return *this;}


    /**
     * The name of the multiplex program.
     */
    inline const Aws::String& GetProgramName() const{ return m_programName; }

    /**
     * The name of the multiplex program.
     */
    inline bool ProgramNameHasBeenSet() const { return m_programNameHasBeenSet; }

    /**
     * The name of the multiplex program.
     */
    inline void SetProgramName(const Aws::String& value) { m_programNameHasBeenSet = true; m_programName = value; }

    /**
     * The name of the multiplex program.
     */
    inline void SetProgramName(Aws::String&& value) { m_programNameHasBeenSet = true; m_programName = std::move(value); }

    /**
     * The name of the multiplex program.
     */
    inline void SetProgramName(const char* value) { m_programNameHasBeenSet = true; m_programName.assign(value); }

    /**
     * The name of the multiplex program.
     */
    inline MultiplexProgram& WithProgramName(const Aws::String& value) { SetProgramName(value); return *this;}

    /**
     * The name of the multiplex program.
     */
    inline MultiplexProgram& WithProgramName(Aws::String&& value) { SetProgramName(std::move(value)); return *this;}

    /**
     * The name of the multiplex program.
     */
    inline MultiplexProgram& WithProgramName(const char* value) { SetProgramName(value); return *this;}

  private:

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet;

    MultiplexProgramSettings m_multiplexProgramSettings;
    bool m_multiplexProgramSettingsHasBeenSet;

    MultiplexProgramPacketIdentifiersMap m_packetIdentifiersMap;
    bool m_packetIdentifiersMapHasBeenSet;

    Aws::String m_programName;
    bool m_programNameHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
