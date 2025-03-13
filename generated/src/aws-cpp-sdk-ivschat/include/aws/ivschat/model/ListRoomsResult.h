/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivschat/model/RoomSummary.h>
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
namespace ivschat
{
namespace Model
{
  class ListRoomsResult
  {
  public:
    AWS_IVSCHAT_API ListRoomsResult() = default;
    AWS_IVSCHAT_API ListRoomsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSCHAT_API ListRoomsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of the matching rooms (summary information only).</p>
     */
    inline const Aws::Vector<RoomSummary>& GetRooms() const { return m_rooms; }
    template<typename RoomsT = Aws::Vector<RoomSummary>>
    void SetRooms(RoomsT&& value) { m_roomsHasBeenSet = true; m_rooms = std::forward<RoomsT>(value); }
    template<typename RoomsT = Aws::Vector<RoomSummary>>
    ListRoomsResult& WithRooms(RoomsT&& value) { SetRooms(std::forward<RoomsT>(value)); return *this;}
    template<typename RoomsT = RoomSummary>
    ListRoomsResult& AddRooms(RoomsT&& value) { m_roomsHasBeenSet = true; m_rooms.emplace_back(std::forward<RoomsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more rooms than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRoomsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRoomsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RoomSummary> m_rooms;
    bool m_roomsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
