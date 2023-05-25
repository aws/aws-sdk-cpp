/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannels_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis-video-signaling/model/IceServer.h>
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
namespace KinesisVideoSignalingChannels
{
namespace Model
{
  class GetIceServerConfigResult
  {
  public:
    AWS_KINESISVIDEOSIGNALINGCHANNELS_API GetIceServerConfigResult();
    AWS_KINESISVIDEOSIGNALINGCHANNELS_API GetIceServerConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEOSIGNALINGCHANNELS_API GetIceServerConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of ICE server information objects.</p>
     */
    inline const Aws::Vector<IceServer>& GetIceServerList() const{ return m_iceServerList; }

    /**
     * <p>The list of ICE server information objects.</p>
     */
    inline void SetIceServerList(const Aws::Vector<IceServer>& value) { m_iceServerList = value; }

    /**
     * <p>The list of ICE server information objects.</p>
     */
    inline void SetIceServerList(Aws::Vector<IceServer>&& value) { m_iceServerList = std::move(value); }

    /**
     * <p>The list of ICE server information objects.</p>
     */
    inline GetIceServerConfigResult& WithIceServerList(const Aws::Vector<IceServer>& value) { SetIceServerList(value); return *this;}

    /**
     * <p>The list of ICE server information objects.</p>
     */
    inline GetIceServerConfigResult& WithIceServerList(Aws::Vector<IceServer>&& value) { SetIceServerList(std::move(value)); return *this;}

    /**
     * <p>The list of ICE server information objects.</p>
     */
    inline GetIceServerConfigResult& AddIceServerList(const IceServer& value) { m_iceServerList.push_back(value); return *this; }

    /**
     * <p>The list of ICE server information objects.</p>
     */
    inline GetIceServerConfigResult& AddIceServerList(IceServer&& value) { m_iceServerList.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetIceServerConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetIceServerConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetIceServerConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<IceServer> m_iceServerList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KinesisVideoSignalingChannels
} // namespace Aws
