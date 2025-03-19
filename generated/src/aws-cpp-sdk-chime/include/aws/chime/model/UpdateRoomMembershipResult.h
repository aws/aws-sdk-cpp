/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/RoomMembership.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateRoomMembershipResult
  {
  public:
    AWS_CHIME_API UpdateRoomMembershipResult() = default;
    AWS_CHIME_API UpdateRoomMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API UpdateRoomMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The room membership details.</p>
     */
    inline const RoomMembership& GetRoomMembership() const { return m_roomMembership; }
    template<typename RoomMembershipT = RoomMembership>
    void SetRoomMembership(RoomMembershipT&& value) { m_roomMembershipHasBeenSet = true; m_roomMembership = std::forward<RoomMembershipT>(value); }
    template<typename RoomMembershipT = RoomMembership>
    UpdateRoomMembershipResult& WithRoomMembership(RoomMembershipT&& value) { SetRoomMembership(std::forward<RoomMembershipT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateRoomMembershipResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RoomMembership m_roomMembership;
    bool m_roomMembershipHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
