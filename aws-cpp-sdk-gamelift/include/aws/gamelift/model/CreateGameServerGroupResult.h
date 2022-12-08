/**
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
  class CreateGameServerGroupResult
  {
  public:
    AWS_GAMELIFT_API CreateGameServerGroupResult();
    AWS_GAMELIFT_API CreateGameServerGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API CreateGameServerGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The newly created game server group object, including the new ARN value for
     * the GameLift FleetIQ game server group and the object's status. The Amazon EC2
     * Auto Scaling group ARN is initially null, since the group has not yet been
     * created. This value is added once the game server group status reaches
     * <code>ACTIVE</code>. </p>
     */
    inline const GameServerGroup& GetGameServerGroup() const{ return m_gameServerGroup; }

    /**
     * <p>The newly created game server group object, including the new ARN value for
     * the GameLift FleetIQ game server group and the object's status. The Amazon EC2
     * Auto Scaling group ARN is initially null, since the group has not yet been
     * created. This value is added once the game server group status reaches
     * <code>ACTIVE</code>. </p>
     */
    inline void SetGameServerGroup(const GameServerGroup& value) { m_gameServerGroup = value; }

    /**
     * <p>The newly created game server group object, including the new ARN value for
     * the GameLift FleetIQ game server group and the object's status. The Amazon EC2
     * Auto Scaling group ARN is initially null, since the group has not yet been
     * created. This value is added once the game server group status reaches
     * <code>ACTIVE</code>. </p>
     */
    inline void SetGameServerGroup(GameServerGroup&& value) { m_gameServerGroup = std::move(value); }

    /**
     * <p>The newly created game server group object, including the new ARN value for
     * the GameLift FleetIQ game server group and the object's status. The Amazon EC2
     * Auto Scaling group ARN is initially null, since the group has not yet been
     * created. This value is added once the game server group status reaches
     * <code>ACTIVE</code>. </p>
     */
    inline CreateGameServerGroupResult& WithGameServerGroup(const GameServerGroup& value) { SetGameServerGroup(value); return *this;}

    /**
     * <p>The newly created game server group object, including the new ARN value for
     * the GameLift FleetIQ game server group and the object's status. The Amazon EC2
     * Auto Scaling group ARN is initially null, since the group has not yet been
     * created. This value is added once the game server group status reaches
     * <code>ACTIVE</code>. </p>
     */
    inline CreateGameServerGroupResult& WithGameServerGroup(GameServerGroup&& value) { SetGameServerGroup(std::move(value)); return *this;}

  private:

    GameServerGroup m_gameServerGroup;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
