/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/MultiplexProgramSettings.h>
#include <aws/medialive/model/MultiplexProgramPacketIdentifiersMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/MultiplexProgramPipelineDetail.h>
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
  class DeleteMultiplexProgramResult
  {
  public:
    AWS_MEDIALIVE_API DeleteMultiplexProgramResult();
    AWS_MEDIALIVE_API DeleteMultiplexProgramResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API DeleteMultiplexProgramResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
     * Contains information about the current sources for the specified program in the
     * specified multiplex. Keep in mind that each multiplex pipeline connects to both
     * pipelines in a given source channel (the channel identified by the program). But
     * only one of those channel pipelines is ever active at one time.
     */
    inline const Aws::Vector<MultiplexProgramPipelineDetail>& GetPipelineDetails() const{ return m_pipelineDetails; }

    /**
     * Contains information about the current sources for the specified program in the
     * specified multiplex. Keep in mind that each multiplex pipeline connects to both
     * pipelines in a given source channel (the channel identified by the program). But
     * only one of those channel pipelines is ever active at one time.
     */
    inline void SetPipelineDetails(const Aws::Vector<MultiplexProgramPipelineDetail>& value) { m_pipelineDetails = value; }

    /**
     * Contains information about the current sources for the specified program in the
     * specified multiplex. Keep in mind that each multiplex pipeline connects to both
     * pipelines in a given source channel (the channel identified by the program). But
     * only one of those channel pipelines is ever active at one time.
     */
    inline void SetPipelineDetails(Aws::Vector<MultiplexProgramPipelineDetail>&& value) { m_pipelineDetails = std::move(value); }

    /**
     * Contains information about the current sources for the specified program in the
     * specified multiplex. Keep in mind that each multiplex pipeline connects to both
     * pipelines in a given source channel (the channel identified by the program). But
     * only one of those channel pipelines is ever active at one time.
     */
    inline DeleteMultiplexProgramResult& WithPipelineDetails(const Aws::Vector<MultiplexProgramPipelineDetail>& value) { SetPipelineDetails(value); return *this;}

    /**
     * Contains information about the current sources for the specified program in the
     * specified multiplex. Keep in mind that each multiplex pipeline connects to both
     * pipelines in a given source channel (the channel identified by the program). But
     * only one of those channel pipelines is ever active at one time.
     */
    inline DeleteMultiplexProgramResult& WithPipelineDetails(Aws::Vector<MultiplexProgramPipelineDetail>&& value) { SetPipelineDetails(std::move(value)); return *this;}

    /**
     * Contains information about the current sources for the specified program in the
     * specified multiplex. Keep in mind that each multiplex pipeline connects to both
     * pipelines in a given source channel (the channel identified by the program). But
     * only one of those channel pipelines is ever active at one time.
     */
    inline DeleteMultiplexProgramResult& AddPipelineDetails(const MultiplexProgramPipelineDetail& value) { m_pipelineDetails.push_back(value); return *this; }

    /**
     * Contains information about the current sources for the specified program in the
     * specified multiplex. Keep in mind that each multiplex pipeline connects to both
     * pipelines in a given source channel (the channel identified by the program). But
     * only one of those channel pipelines is ever active at one time.
     */
    inline DeleteMultiplexProgramResult& AddPipelineDetails(MultiplexProgramPipelineDetail&& value) { m_pipelineDetails.push_back(std::move(value)); return *this; }


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

    Aws::Vector<MultiplexProgramPipelineDetail> m_pipelineDetails;

    Aws::String m_programName;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
