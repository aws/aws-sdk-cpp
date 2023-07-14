﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
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
  class AWS_GAMELIFT_API UpdateGameServerGroupResult
  {
  public:
    UpdateGameServerGroupResult();
    UpdateGameServerGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateGameServerGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that describes the game server group resource with updated
     * properties. </p>
     */
    inline const GameServerGroup& GetGameServerGroup() const{ return m_gameServerGroup; }

    /**
     * <p>An object that describes the game server group resource with updated
     * properties. </p>
     */
    inline void SetGameServerGroup(const GameServerGroup& value) { m_gameServerGroup = value; }

    /**
     * <p>An object that describes the game server group resource with updated
     * properties. </p>
     */
    inline void SetGameServerGroup(GameServerGroup&& value) { m_gameServerGroup = std::move(value); }

    /**
     * <p>An object that describes the game server group resource with updated
     * properties. </p>
     */
    inline UpdateGameServerGroupResult& WithGameServerGroup(const GameServerGroup& value) { SetGameServerGroup(value); return *this;}

    /**
     * <p>An object that describes the game server group resource with updated
     * properties. </p>
     */
    inline UpdateGameServerGroupResult& WithGameServerGroup(GameServerGroup&& value) { SetGameServerGroup(std::move(value)); return *this;}

  private:

    GameServerGroup m_gameServerGroup;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
