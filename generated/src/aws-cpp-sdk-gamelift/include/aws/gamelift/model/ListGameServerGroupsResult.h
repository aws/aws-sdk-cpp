/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/GameServerGroup.h>
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
  class ListGameServerGroupsResult
  {
  public:
    AWS_GAMELIFT_API ListGameServerGroupsResult();
    AWS_GAMELIFT_API ListGameServerGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API ListGameServerGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The game server groups' game server groups.</p>
     */
    inline const Aws::Vector<GameServerGroup>& GetGameServerGroups() const{ return m_gameServerGroups; }

    /**
     * <p>The game server groups' game server groups.</p>
     */
    inline void SetGameServerGroups(const Aws::Vector<GameServerGroup>& value) { m_gameServerGroups = value; }

    /**
     * <p>The game server groups' game server groups.</p>
     */
    inline void SetGameServerGroups(Aws::Vector<GameServerGroup>&& value) { m_gameServerGroups = std::move(value); }

    /**
     * <p>The game server groups' game server groups.</p>
     */
    inline ListGameServerGroupsResult& WithGameServerGroups(const Aws::Vector<GameServerGroup>& value) { SetGameServerGroups(value); return *this;}

    /**
     * <p>The game server groups' game server groups.</p>
     */
    inline ListGameServerGroupsResult& WithGameServerGroups(Aws::Vector<GameServerGroup>&& value) { SetGameServerGroups(std::move(value)); return *this;}

    /**
     * <p>The game server groups' game server groups.</p>
     */
    inline ListGameServerGroupsResult& AddGameServerGroups(const GameServerGroup& value) { m_gameServerGroups.push_back(value); return *this; }

    /**
     * <p>The game server groups' game server groups.</p>
     */
    inline ListGameServerGroupsResult& AddGameServerGroups(GameServerGroup&& value) { m_gameServerGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline ListGameServerGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline ListGameServerGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline ListGameServerGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListGameServerGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListGameServerGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListGameServerGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<GameServerGroup> m_gameServerGroups;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
