/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_GAMELIFT_API CreateGameServerGroupResult
  {
  public:
    CreateGameServerGroupResult();
    CreateGameServerGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateGameServerGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The newly created game server group object, including the new ARN value for
     * the GameLift FleetIQ game server group and the object's status. The EC2 Auto
     * Scaling group ARN is initially null, since the group has not yet been created.
     * This value is added once the game server group status reaches ACTIVE. </p>
     */
    inline const GameServerGroup& GetGameServerGroup() const{ return m_gameServerGroup; }

    /**
     * <p>The newly created game server group object, including the new ARN value for
     * the GameLift FleetIQ game server group and the object's status. The EC2 Auto
     * Scaling group ARN is initially null, since the group has not yet been created.
     * This value is added once the game server group status reaches ACTIVE. </p>
     */
    inline void SetGameServerGroup(const GameServerGroup& value) { m_gameServerGroup = value; }

    /**
     * <p>The newly created game server group object, including the new ARN value for
     * the GameLift FleetIQ game server group and the object's status. The EC2 Auto
     * Scaling group ARN is initially null, since the group has not yet been created.
     * This value is added once the game server group status reaches ACTIVE. </p>
     */
    inline void SetGameServerGroup(GameServerGroup&& value) { m_gameServerGroup = std::move(value); }

    /**
     * <p>The newly created game server group object, including the new ARN value for
     * the GameLift FleetIQ game server group and the object's status. The EC2 Auto
     * Scaling group ARN is initially null, since the group has not yet been created.
     * This value is added once the game server group status reaches ACTIVE. </p>
     */
    inline CreateGameServerGroupResult& WithGameServerGroup(const GameServerGroup& value) { SetGameServerGroup(value); return *this;}

    /**
     * <p>The newly created game server group object, including the new ARN value for
     * the GameLift FleetIQ game server group and the object's status. The EC2 Auto
     * Scaling group ARN is initially null, since the group has not yet been created.
     * This value is added once the game server group status reaches ACTIVE. </p>
     */
    inline CreateGameServerGroupResult& WithGameServerGroup(GameServerGroup&& value) { SetGameServerGroup(std::move(value)); return *this;}

  private:

    GameServerGroup m_gameServerGroup;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
