/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class DescribeGameServerRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API DescribeGameServerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeGameServer"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the game server group where the game server is
     * running.</p>
     */
    inline const Aws::String& GetGameServerGroupName() const{ return m_gameServerGroupName; }

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running.</p>
     */
    inline bool GameServerGroupNameHasBeenSet() const { return m_gameServerGroupNameHasBeenSet; }

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running.</p>
     */
    inline void SetGameServerGroupName(const Aws::String& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = value; }

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running.</p>
     */
    inline void SetGameServerGroupName(Aws::String&& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = std::move(value); }

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running.</p>
     */
    inline void SetGameServerGroupName(const char* value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName.assign(value); }

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running.</p>
     */
    inline DescribeGameServerRequest& WithGameServerGroupName(const Aws::String& value) { SetGameServerGroupName(value); return *this;}

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running.</p>
     */
    inline DescribeGameServerRequest& WithGameServerGroupName(Aws::String&& value) { SetGameServerGroupName(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the game server group where the game server is
     * running.</p>
     */
    inline DescribeGameServerRequest& WithGameServerGroupName(const char* value) { SetGameServerGroupName(value); return *this;}


    /**
     * <p>A custom string that uniquely identifies the game server information to be
     * retrieved.</p>
     */
    inline const Aws::String& GetGameServerId() const{ return m_gameServerId; }

    /**
     * <p>A custom string that uniquely identifies the game server information to be
     * retrieved.</p>
     */
    inline bool GameServerIdHasBeenSet() const { return m_gameServerIdHasBeenSet; }

    /**
     * <p>A custom string that uniquely identifies the game server information to be
     * retrieved.</p>
     */
    inline void SetGameServerId(const Aws::String& value) { m_gameServerIdHasBeenSet = true; m_gameServerId = value; }

    /**
     * <p>A custom string that uniquely identifies the game server information to be
     * retrieved.</p>
     */
    inline void SetGameServerId(Aws::String&& value) { m_gameServerIdHasBeenSet = true; m_gameServerId = std::move(value); }

    /**
     * <p>A custom string that uniquely identifies the game server information to be
     * retrieved.</p>
     */
    inline void SetGameServerId(const char* value) { m_gameServerIdHasBeenSet = true; m_gameServerId.assign(value); }

    /**
     * <p>A custom string that uniquely identifies the game server information to be
     * retrieved.</p>
     */
    inline DescribeGameServerRequest& WithGameServerId(const Aws::String& value) { SetGameServerId(value); return *this;}

    /**
     * <p>A custom string that uniquely identifies the game server information to be
     * retrieved.</p>
     */
    inline DescribeGameServerRequest& WithGameServerId(Aws::String&& value) { SetGameServerId(std::move(value)); return *this;}

    /**
     * <p>A custom string that uniquely identifies the game server information to be
     * retrieved.</p>
     */
    inline DescribeGameServerRequest& WithGameServerId(const char* value) { SetGameServerId(value); return *this;}

  private:

    Aws::String m_gameServerGroupName;
    bool m_gameServerGroupNameHasBeenSet = false;

    Aws::String m_gameServerId;
    bool m_gameServerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
