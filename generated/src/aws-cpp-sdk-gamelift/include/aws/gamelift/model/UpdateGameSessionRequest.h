/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/PlayerSessionCreationPolicy.h>
#include <aws/gamelift/model/ProtectionPolicy.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class UpdateGameSessionRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API UpdateGameSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGameSession"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the game session to update. </p>
     */
    inline const Aws::String& GetGameSessionId() const{ return m_gameSessionId; }

    /**
     * <p>A unique identifier for the game session to update. </p>
     */
    inline bool GameSessionIdHasBeenSet() const { return m_gameSessionIdHasBeenSet; }

    /**
     * <p>A unique identifier for the game session to update. </p>
     */
    inline void SetGameSessionId(const Aws::String& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = value; }

    /**
     * <p>A unique identifier for the game session to update. </p>
     */
    inline void SetGameSessionId(Aws::String&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = std::move(value); }

    /**
     * <p>A unique identifier for the game session to update. </p>
     */
    inline void SetGameSessionId(const char* value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId.assign(value); }

    /**
     * <p>A unique identifier for the game session to update. </p>
     */
    inline UpdateGameSessionRequest& WithGameSessionId(const Aws::String& value) { SetGameSessionId(value); return *this;}

    /**
     * <p>A unique identifier for the game session to update. </p>
     */
    inline UpdateGameSessionRequest& WithGameSessionId(Aws::String&& value) { SetGameSessionId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the game session to update. </p>
     */
    inline UpdateGameSessionRequest& WithGameSessionId(const char* value) { SetGameSessionId(value); return *this;}


    /**
     * <p>The maximum number of players that can be connected simultaneously to the
     * game session.</p>
     */
    inline int GetMaximumPlayerSessionCount() const{ return m_maximumPlayerSessionCount; }

    /**
     * <p>The maximum number of players that can be connected simultaneously to the
     * game session.</p>
     */
    inline bool MaximumPlayerSessionCountHasBeenSet() const { return m_maximumPlayerSessionCountHasBeenSet; }

    /**
     * <p>The maximum number of players that can be connected simultaneously to the
     * game session.</p>
     */
    inline void SetMaximumPlayerSessionCount(int value) { m_maximumPlayerSessionCountHasBeenSet = true; m_maximumPlayerSessionCount = value; }

    /**
     * <p>The maximum number of players that can be connected simultaneously to the
     * game session.</p>
     */
    inline UpdateGameSessionRequest& WithMaximumPlayerSessionCount(int value) { SetMaximumPlayerSessionCount(value); return *this;}


    /**
     * <p>A descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline UpdateGameSessionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline UpdateGameSessionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline UpdateGameSessionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A policy that determines whether the game session is accepting new
     * players.</p>
     */
    inline const PlayerSessionCreationPolicy& GetPlayerSessionCreationPolicy() const{ return m_playerSessionCreationPolicy; }

    /**
     * <p>A policy that determines whether the game session is accepting new
     * players.</p>
     */
    inline bool PlayerSessionCreationPolicyHasBeenSet() const { return m_playerSessionCreationPolicyHasBeenSet; }

    /**
     * <p>A policy that determines whether the game session is accepting new
     * players.</p>
     */
    inline void SetPlayerSessionCreationPolicy(const PlayerSessionCreationPolicy& value) { m_playerSessionCreationPolicyHasBeenSet = true; m_playerSessionCreationPolicy = value; }

    /**
     * <p>A policy that determines whether the game session is accepting new
     * players.</p>
     */
    inline void SetPlayerSessionCreationPolicy(PlayerSessionCreationPolicy&& value) { m_playerSessionCreationPolicyHasBeenSet = true; m_playerSessionCreationPolicy = std::move(value); }

    /**
     * <p>A policy that determines whether the game session is accepting new
     * players.</p>
     */
    inline UpdateGameSessionRequest& WithPlayerSessionCreationPolicy(const PlayerSessionCreationPolicy& value) { SetPlayerSessionCreationPolicy(value); return *this;}

    /**
     * <p>A policy that determines whether the game session is accepting new
     * players.</p>
     */
    inline UpdateGameSessionRequest& WithPlayerSessionCreationPolicy(PlayerSessionCreationPolicy&& value) { SetPlayerSessionCreationPolicy(std::move(value)); return *this;}


    /**
     * <p>Game session protection policy to apply to this game session only.</p> <ul>
     * <li> <p> <b>NoProtection</b> -- The game session can be terminated during a
     * scale-down event.</p> </li> <li> <p> <b>FullProtection</b> -- If the game
     * session is in an <code>ACTIVE</code> status, it cannot be terminated during a
     * scale-down event.</p> </li> </ul>
     */
    inline const ProtectionPolicy& GetProtectionPolicy() const{ return m_protectionPolicy; }

    /**
     * <p>Game session protection policy to apply to this game session only.</p> <ul>
     * <li> <p> <b>NoProtection</b> -- The game session can be terminated during a
     * scale-down event.</p> </li> <li> <p> <b>FullProtection</b> -- If the game
     * session is in an <code>ACTIVE</code> status, it cannot be terminated during a
     * scale-down event.</p> </li> </ul>
     */
    inline bool ProtectionPolicyHasBeenSet() const { return m_protectionPolicyHasBeenSet; }

    /**
     * <p>Game session protection policy to apply to this game session only.</p> <ul>
     * <li> <p> <b>NoProtection</b> -- The game session can be terminated during a
     * scale-down event.</p> </li> <li> <p> <b>FullProtection</b> -- If the game
     * session is in an <code>ACTIVE</code> status, it cannot be terminated during a
     * scale-down event.</p> </li> </ul>
     */
    inline void SetProtectionPolicy(const ProtectionPolicy& value) { m_protectionPolicyHasBeenSet = true; m_protectionPolicy = value; }

    /**
     * <p>Game session protection policy to apply to this game session only.</p> <ul>
     * <li> <p> <b>NoProtection</b> -- The game session can be terminated during a
     * scale-down event.</p> </li> <li> <p> <b>FullProtection</b> -- If the game
     * session is in an <code>ACTIVE</code> status, it cannot be terminated during a
     * scale-down event.</p> </li> </ul>
     */
    inline void SetProtectionPolicy(ProtectionPolicy&& value) { m_protectionPolicyHasBeenSet = true; m_protectionPolicy = std::move(value); }

    /**
     * <p>Game session protection policy to apply to this game session only.</p> <ul>
     * <li> <p> <b>NoProtection</b> -- The game session can be terminated during a
     * scale-down event.</p> </li> <li> <p> <b>FullProtection</b> -- If the game
     * session is in an <code>ACTIVE</code> status, it cannot be terminated during a
     * scale-down event.</p> </li> </ul>
     */
    inline UpdateGameSessionRequest& WithProtectionPolicy(const ProtectionPolicy& value) { SetProtectionPolicy(value); return *this;}

    /**
     * <p>Game session protection policy to apply to this game session only.</p> <ul>
     * <li> <p> <b>NoProtection</b> -- The game session can be terminated during a
     * scale-down event.</p> </li> <li> <p> <b>FullProtection</b> -- If the game
     * session is in an <code>ACTIVE</code> status, it cannot be terminated during a
     * scale-down event.</p> </li> </ul>
     */
    inline UpdateGameSessionRequest& WithProtectionPolicy(ProtectionPolicy&& value) { SetProtectionPolicy(std::move(value)); return *this;}

  private:

    Aws::String m_gameSessionId;
    bool m_gameSessionIdHasBeenSet = false;

    int m_maximumPlayerSessionCount;
    bool m_maximumPlayerSessionCountHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PlayerSessionCreationPolicy m_playerSessionCreationPolicy;
    bool m_playerSessionCreationPolicyHasBeenSet = false;

    ProtectionPolicy m_protectionPolicy;
    bool m_protectionPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
