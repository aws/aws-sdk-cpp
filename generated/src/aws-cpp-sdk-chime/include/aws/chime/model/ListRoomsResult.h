/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/Room.h>
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
  class ListRoomsResult
  {
  public:
    AWS_CHIME_API ListRoomsResult();
    AWS_CHIME_API ListRoomsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API ListRoomsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The room details.</p>
     */
    inline const Aws::Vector<Room>& GetRooms() const{ return m_rooms; }

    /**
     * <p>The room details.</p>
     */
    inline void SetRooms(const Aws::Vector<Room>& value) { m_rooms = value; }

    /**
     * <p>The room details.</p>
     */
    inline void SetRooms(Aws::Vector<Room>&& value) { m_rooms = std::move(value); }

    /**
     * <p>The room details.</p>
     */
    inline ListRoomsResult& WithRooms(const Aws::Vector<Room>& value) { SetRooms(value); return *this;}

    /**
     * <p>The room details.</p>
     */
    inline ListRoomsResult& WithRooms(Aws::Vector<Room>&& value) { SetRooms(std::move(value)); return *this;}

    /**
     * <p>The room details.</p>
     */
    inline ListRoomsResult& AddRooms(const Room& value) { m_rooms.push_back(value); return *this; }

    /**
     * <p>The room details.</p>
     */
    inline ListRoomsResult& AddRooms(Room&& value) { m_rooms.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListRoomsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListRoomsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListRoomsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Room> m_rooms;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
