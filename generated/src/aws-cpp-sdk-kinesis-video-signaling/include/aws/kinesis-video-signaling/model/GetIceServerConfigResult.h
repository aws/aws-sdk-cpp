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
    AWS_KINESISVIDEOSIGNALINGCHANNELS_API GetIceServerConfigResult() = default;
    AWS_KINESISVIDEOSIGNALINGCHANNELS_API GetIceServerConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEOSIGNALINGCHANNELS_API GetIceServerConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of ICE server information objects.</p>
     */
    inline const Aws::Vector<IceServer>& GetIceServerList() const { return m_iceServerList; }
    template<typename IceServerListT = Aws::Vector<IceServer>>
    void SetIceServerList(IceServerListT&& value) { m_iceServerListHasBeenSet = true; m_iceServerList = std::forward<IceServerListT>(value); }
    template<typename IceServerListT = Aws::Vector<IceServer>>
    GetIceServerConfigResult& WithIceServerList(IceServerListT&& value) { SetIceServerList(std::forward<IceServerListT>(value)); return *this;}
    template<typename IceServerListT = IceServer>
    GetIceServerConfigResult& AddIceServerList(IceServerListT&& value) { m_iceServerListHasBeenSet = true; m_iceServerList.emplace_back(std::forward<IceServerListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetIceServerConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IceServer> m_iceServerList;
    bool m_iceServerListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoSignalingChannels
} // namespace Aws
