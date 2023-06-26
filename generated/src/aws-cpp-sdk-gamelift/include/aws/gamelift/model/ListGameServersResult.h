/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/GameServer.h>
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
namespace GameLift
{
namespace Model
{
  class ListGameServersResult
  {
  public:
    AWS_GAMELIFT_API ListGameServersResult();
    AWS_GAMELIFT_API ListGameServersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API ListGameServersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of game server objects that match the request.</p>
     */
    inline const Aws::Vector<GameServer>& GetGameServers() const{ return m_gameServers; }

    /**
     * <p>A collection of game server objects that match the request.</p>
     */
    inline void SetGameServers(const Aws::Vector<GameServer>& value) { m_gameServers = value; }

    /**
     * <p>A collection of game server objects that match the request.</p>
     */
    inline void SetGameServers(Aws::Vector<GameServer>&& value) { m_gameServers = std::move(value); }

    /**
     * <p>A collection of game server objects that match the request.</p>
     */
    inline ListGameServersResult& WithGameServers(const Aws::Vector<GameServer>& value) { SetGameServers(value); return *this;}

    /**
     * <p>A collection of game server objects that match the request.</p>
     */
    inline ListGameServersResult& WithGameServers(Aws::Vector<GameServer>&& value) { SetGameServers(std::move(value)); return *this;}

    /**
     * <p>A collection of game server objects that match the request.</p>
     */
    inline ListGameServersResult& AddGameServers(const GameServer& value) { m_gameServers.push_back(value); return *this; }

    /**
     * <p>A collection of game server objects that match the request.</p>
     */
    inline ListGameServersResult& AddGameServers(GameServer&& value) { m_gameServers.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline ListGameServersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline ListGameServersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline ListGameServersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListGameServersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListGameServersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListGameServersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<GameServer> m_gameServers;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
