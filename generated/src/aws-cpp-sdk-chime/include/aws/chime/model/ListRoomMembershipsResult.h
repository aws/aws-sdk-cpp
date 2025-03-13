/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/RoomMembership.h>
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
namespace Chime
{
namespace Model
{
  class ListRoomMembershipsResult
  {
  public:
    AWS_CHIME_API ListRoomMembershipsResult() = default;
    AWS_CHIME_API ListRoomMembershipsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API ListRoomMembershipsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The room membership details.</p>
     */
    inline const Aws::Vector<RoomMembership>& GetRoomMemberships() const { return m_roomMemberships; }
    template<typename RoomMembershipsT = Aws::Vector<RoomMembership>>
    void SetRoomMemberships(RoomMembershipsT&& value) { m_roomMembershipsHasBeenSet = true; m_roomMemberships = std::forward<RoomMembershipsT>(value); }
    template<typename RoomMembershipsT = Aws::Vector<RoomMembership>>
    ListRoomMembershipsResult& WithRoomMemberships(RoomMembershipsT&& value) { SetRoomMemberships(std::forward<RoomMembershipsT>(value)); return *this;}
    template<typename RoomMembershipsT = RoomMembership>
    ListRoomMembershipsResult& AddRoomMemberships(RoomMembershipsT&& value) { m_roomMembershipsHasBeenSet = true; m_roomMemberships.emplace_back(std::forward<RoomMembershipsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRoomMembershipsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRoomMembershipsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RoomMembership> m_roomMemberships;
    bool m_roomMembershipsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
