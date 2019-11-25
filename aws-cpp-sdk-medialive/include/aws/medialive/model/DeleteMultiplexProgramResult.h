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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for DeleteMultiplexProgramResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteMultiplexProgramResponse">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API DeleteMultiplexProgramResult
  {
  public:
    DeleteMultiplexProgramResult();
    DeleteMultiplexProgramResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteMultiplexProgramResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The MediaLive channel associated with the program.
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }

    /**
     * The MediaLive channel associated with the program.
     */
    inline void SetChannelId(const Aws::String& value) { m_channelId = value; }

    /**
     * The MediaLive channel associated with the program.
     */
    inline void SetChannelId(Aws::String&& value) { m_channelId = std::move(value); }

    /**
     * The MediaLive channel associated with the program.
     */
    inline void SetChannelId(const char* value) { m_channelId.assign(value); }

    /**
     * The MediaLive channel associated with the program.
     */
    inline DeleteMultiplexProgramResult& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}

    /**
     * The MediaLive channel associated with the program.
     */
    inline DeleteMultiplexProgramResult& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}

    /**
     * The MediaLive channel associated with the program.
     */
    inline DeleteMultiplexProgramResult& WithChannelId(const char* value) { SetChannelId(value); return *this;}


    /**
     * The settings for this multiplex program.
     */
    inline const MultiplexProgramSettings& GetMultiplexProgramSettings() const{ return m_multiplexProgramSettings; }

    /**
     * The settings for this multiplex program.
     */
    inline void SetMultiplexProgramSettings(const MultiplexProgramSettings& value) { m_multiplexProgramSettings = value; }

    /**
     * The settings for this multiplex program.
     */
    inline void SetMultiplexProgramSettings(MultiplexProgramSettings&& value) { m_multiplexProgramSettings = std::move(value); }

    /**
     * The settings for this multiplex program.
     */
    inline DeleteMultiplexProgramResult& WithMultiplexProgramSettings(const MultiplexProgramSettings& value) { SetMultiplexProgramSettings(value); return *this;}

    /**
     * The settings for this multiplex program.
     */
    inline DeleteMultiplexProgramResult& WithMultiplexProgramSettings(MultiplexProgramSettings&& value) { SetMultiplexProgramSettings(std::move(value)); return *this;}


    /**
     * The packet identifier map for this multiplex program.
     */
    inline const MultiplexProgramPacketIdentifiersMap& GetPacketIdentifiersMap() const{ return m_packetIdentifiersMap; }

    /**
     * The packet identifier map for this multiplex program.
     */
    inline void SetPacketIdentifiersMap(const MultiplexProgramPacketIdentifiersMap& value) { m_packetIdentifiersMap = value; }

    /**
     * The packet identifier map for this multiplex program.
     */
    inline void SetPacketIdentifiersMap(MultiplexProgramPacketIdentifiersMap&& value) { m_packetIdentifiersMap = std::move(value); }

    /**
     * The packet identifier map for this multiplex program.
     */
    inline DeleteMultiplexProgramResult& WithPacketIdentifiersMap(const MultiplexProgramPacketIdentifiersMap& value) { SetPacketIdentifiersMap(value); return *this;}

    /**
     * The packet identifier map for this multiplex program.
     */
    inline DeleteMultiplexProgramResult& WithPacketIdentifiersMap(MultiplexProgramPacketIdentifiersMap&& value) { SetPacketIdentifiersMap(std::move(value)); return *this;}


    /**
     * The name of the multiplex program.
     */
    inline const Aws::String& GetProgramName() const{ return m_programName; }

    /**
     * The name of the multiplex program.
     */
    inline void SetProgramName(const Aws::String& value) { m_programName = value; }

    /**
     * The name of the multiplex program.
     */
    inline void SetProgramName(Aws::String&& value) { m_programName = std::move(value); }

    /**
     * The name of the multiplex program.
     */
    inline void SetProgramName(const char* value) { m_programName.assign(value); }

    /**
     * The name of the multiplex program.
     */
    inline DeleteMultiplexProgramResult& WithProgramName(const Aws::String& value) { SetProgramName(value); return *this;}

    /**
     * The name of the multiplex program.
     */
    inline DeleteMultiplexProgramResult& WithProgramName(Aws::String&& value) { SetProgramName(std::move(value)); return *this;}

    /**
     * The name of the multiplex program.
     */
    inline DeleteMultiplexProgramResult& WithProgramName(const char* value) { SetProgramName(value); return *this;}

  private:

    Aws::String m_channelId;

    MultiplexProgramSettings m_multiplexProgramSettings;

    MultiplexProgramPacketIdentifiersMap m_packetIdentifiersMap;

    Aws::String m_programName;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
