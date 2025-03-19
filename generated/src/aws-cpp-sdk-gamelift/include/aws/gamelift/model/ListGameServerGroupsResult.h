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
    AWS_GAMELIFT_API ListGameServerGroupsResult() = default;
    AWS_GAMELIFT_API ListGameServerGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API ListGameServerGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The game server groups' game server groups.</p>
     */
    inline const Aws::Vector<GameServerGroup>& GetGameServerGroups() const { return m_gameServerGroups; }
    template<typename GameServerGroupsT = Aws::Vector<GameServerGroup>>
    void SetGameServerGroups(GameServerGroupsT&& value) { m_gameServerGroupsHasBeenSet = true; m_gameServerGroups = std::forward<GameServerGroupsT>(value); }
    template<typename GameServerGroupsT = Aws::Vector<GameServerGroup>>
    ListGameServerGroupsResult& WithGameServerGroups(GameServerGroupsT&& value) { SetGameServerGroups(std::forward<GameServerGroupsT>(value)); return *this;}
    template<typename GameServerGroupsT = GameServerGroup>
    ListGameServerGroupsResult& AddGameServerGroups(GameServerGroupsT&& value) { m_gameServerGroupsHasBeenSet = true; m_gameServerGroups.emplace_back(std::forward<GameServerGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListGameServerGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListGameServerGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GameServerGroup> m_gameServerGroups;
    bool m_gameServerGroupsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
