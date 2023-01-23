/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_IVSCHAT_API ListRoomsResult();
    AWS_IVSCHAT_API ListRoomsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSCHAT_API ListRoomsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If there are more rooms than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more rooms than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more rooms than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more rooms than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more rooms than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListRoomsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more rooms than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListRoomsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more rooms than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListRoomsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>List of the matching rooms (summary information only).</p>
     */
    inline const Aws::Vector<RoomSummary>& GetRooms() const{ return m_rooms; }

    /**
     * <p>List of the matching rooms (summary information only).</p>
     */
    inline void SetRooms(const Aws::Vector<RoomSummary>& value) { m_rooms = value; }

    /**
     * <p>List of the matching rooms (summary information only).</p>
     */
    inline void SetRooms(Aws::Vector<RoomSummary>&& value) { m_rooms = std::move(value); }

    /**
     * <p>List of the matching rooms (summary information only).</p>
     */
    inline ListRoomsResult& WithRooms(const Aws::Vector<RoomSummary>& value) { SetRooms(value); return *this;}

    /**
     * <p>List of the matching rooms (summary information only).</p>
     */
    inline ListRoomsResult& WithRooms(Aws::Vector<RoomSummary>&& value) { SetRooms(std::move(value)); return *this;}

    /**
     * <p>List of the matching rooms (summary information only).</p>
     */
    inline ListRoomsResult& AddRooms(const RoomSummary& value) { m_rooms.push_back(value); return *this; }

    /**
     * <p>List of the matching rooms (summary information only).</p>
     */
    inline ListRoomsResult& AddRooms(RoomSummary&& value) { m_rooms.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<RoomSummary> m_rooms;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
