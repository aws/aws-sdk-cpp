﻿/**
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
    AWS_CHIME_API ListRoomMembershipsResult();
    AWS_CHIME_API ListRoomMembershipsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API ListRoomMembershipsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The room membership details.</p>
     */
    inline const Aws::Vector<RoomMembership>& GetRoomMemberships() const{ return m_roomMemberships; }
    inline void SetRoomMemberships(const Aws::Vector<RoomMembership>& value) { m_roomMemberships = value; }
    inline void SetRoomMemberships(Aws::Vector<RoomMembership>&& value) { m_roomMemberships = std::move(value); }
    inline ListRoomMembershipsResult& WithRoomMemberships(const Aws::Vector<RoomMembership>& value) { SetRoomMemberships(value); return *this;}
    inline ListRoomMembershipsResult& WithRoomMemberships(Aws::Vector<RoomMembership>&& value) { SetRoomMemberships(std::move(value)); return *this;}
    inline ListRoomMembershipsResult& AddRoomMemberships(const RoomMembership& value) { m_roomMemberships.push_back(value); return *this; }
    inline ListRoomMembershipsResult& AddRoomMemberships(RoomMembership&& value) { m_roomMemberships.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRoomMembershipsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRoomMembershipsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRoomMembershipsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRoomMembershipsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRoomMembershipsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRoomMembershipsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RoomMembership> m_roomMemberships;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
