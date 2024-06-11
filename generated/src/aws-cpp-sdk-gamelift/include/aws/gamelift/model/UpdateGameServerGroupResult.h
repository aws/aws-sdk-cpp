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
    AWS_GAMELIFT_API UpdateGameServerGroupResult();
    AWS_GAMELIFT_API UpdateGameServerGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API UpdateGameServerGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that describes the game server group resource with updated
     * properties. </p>
     */
    inline const GameServerGroup& GetGameServerGroup() const{ return m_gameServerGroup; }
    inline void SetGameServerGroup(const GameServerGroup& value) { m_gameServerGroup = value; }
    inline void SetGameServerGroup(GameServerGroup&& value) { m_gameServerGroup = std::move(value); }
    inline UpdateGameServerGroupResult& WithGameServerGroup(const GameServerGroup& value) { SetGameServerGroup(value); return *this;}
    inline UpdateGameServerGroupResult& WithGameServerGroup(GameServerGroup&& value) { SetGameServerGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateGameServerGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateGameServerGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateGameServerGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    GameServerGroup m_gameServerGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
