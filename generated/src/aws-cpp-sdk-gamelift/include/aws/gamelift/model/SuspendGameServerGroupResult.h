﻿/**
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
  class SuspendGameServerGroupResult
  {
  public:
    AWS_GAMELIFT_API SuspendGameServerGroupResult();
    AWS_GAMELIFT_API SuspendGameServerGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API SuspendGameServerGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that describes the game server group resource, with the
     * <code>SuspendedActions</code> property updated to reflect the suspended
     * activity.</p>
     */
    inline const GameServerGroup& GetGameServerGroup() const{ return m_gameServerGroup; }

    /**
     * <p>An object that describes the game server group resource, with the
     * <code>SuspendedActions</code> property updated to reflect the suspended
     * activity.</p>
     */
    inline void SetGameServerGroup(const GameServerGroup& value) { m_gameServerGroup = value; }

    /**
     * <p>An object that describes the game server group resource, with the
     * <code>SuspendedActions</code> property updated to reflect the suspended
     * activity.</p>
     */
    inline void SetGameServerGroup(GameServerGroup&& value) { m_gameServerGroup = std::move(value); }

    /**
     * <p>An object that describes the game server group resource, with the
     * <code>SuspendedActions</code> property updated to reflect the suspended
     * activity.</p>
     */
    inline SuspendGameServerGroupResult& WithGameServerGroup(const GameServerGroup& value) { SetGameServerGroup(value); return *this;}

    /**
     * <p>An object that describes the game server group resource, with the
     * <code>SuspendedActions</code> property updated to reflect the suspended
     * activity.</p>
     */
    inline SuspendGameServerGroupResult& WithGameServerGroup(GameServerGroup&& value) { SetGameServerGroup(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SuspendGameServerGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SuspendGameServerGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SuspendGameServerGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    GameServerGroup m_gameServerGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
