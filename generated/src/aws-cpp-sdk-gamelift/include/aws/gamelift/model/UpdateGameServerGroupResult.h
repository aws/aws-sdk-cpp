/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/GameServerGroup.h>
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
namespace GameLift
{
namespace Model
{
  class UpdateGameServerGroupResult
  {
  public:
    AWS_GAMELIFT_API UpdateGameServerGroupResult() = default;
    AWS_GAMELIFT_API UpdateGameServerGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API UpdateGameServerGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that describes the game server group resource with updated
     * properties. </p>
     */
    inline const GameServerGroup& GetGameServerGroup() const { return m_gameServerGroup; }
    template<typename GameServerGroupT = GameServerGroup>
    void SetGameServerGroup(GameServerGroupT&& value) { m_gameServerGroupHasBeenSet = true; m_gameServerGroup = std::forward<GameServerGroupT>(value); }
    template<typename GameServerGroupT = GameServerGroup>
    UpdateGameServerGroupResult& WithGameServerGroup(GameServerGroupT&& value) { SetGameServerGroup(std::forward<GameServerGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateGameServerGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    GameServerGroup m_gameServerGroup;
    bool m_gameServerGroupHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
