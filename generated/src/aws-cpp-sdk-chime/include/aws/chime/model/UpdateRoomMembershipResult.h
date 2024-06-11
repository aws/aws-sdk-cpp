﻿/**
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
    AWS_CHIME_API UpdateRoomMembershipResult();
    AWS_CHIME_API UpdateRoomMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API UpdateRoomMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The room membership details.</p>
     */
    inline const RoomMembership& GetRoomMembership() const{ return m_roomMembership; }
    inline void SetRoomMembership(const RoomMembership& value) { m_roomMembership = value; }
    inline void SetRoomMembership(RoomMembership&& value) { m_roomMembership = std::move(value); }
    inline UpdateRoomMembershipResult& WithRoomMembership(const RoomMembership& value) { SetRoomMembership(value); return *this;}
    inline UpdateRoomMembershipResult& WithRoomMembership(RoomMembership&& value) { SetRoomMembership(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateRoomMembershipResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateRoomMembershipResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateRoomMembershipResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    RoomMembership m_roomMembership;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
