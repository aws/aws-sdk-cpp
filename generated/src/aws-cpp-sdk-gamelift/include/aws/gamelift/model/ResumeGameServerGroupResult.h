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
  class ResumeGameServerGroupResult
  {
  public:
    AWS_GAMELIFT_API ResumeGameServerGroupResult() = default;
    AWS_GAMELIFT_API ResumeGameServerGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API ResumeGameServerGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that describes the game server group resource, with the
     * <code>SuspendedActions</code> property updated to reflect the resumed
     * activity.</p>
     */
    inline const GameServerGroup& GetGameServerGroup() const { return m_gameServerGroup; }
    template<typename GameServerGroupT = GameServerGroup>
    void SetGameServerGroup(GameServerGroupT&& value) { m_gameServerGroupHasBeenSet = true; m_gameServerGroup = std::forward<GameServerGroupT>(value); }
    template<typename GameServerGroupT = GameServerGroup>
    ResumeGameServerGroupResult& WithGameServerGroup(GameServerGroupT&& value) { SetGameServerGroup(std::forward<GameServerGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ResumeGameServerGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
