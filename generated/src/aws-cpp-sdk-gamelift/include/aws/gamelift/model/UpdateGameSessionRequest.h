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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/GameProperty.h>
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


    ///@{
    /**
     * <p>A unique identifier for the game session to update. </p>
     */
    inline const Aws::String& GetGameSessionId() const{ return m_gameSessionId; }
    inline bool GameSessionIdHasBeenSet() const { return m_gameSessionIdHasBeenSet; }
    inline void SetGameSessionId(const Aws::String& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = value; }
    inline void SetGameSessionId(Aws::String&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = std::move(value); }
    inline void SetGameSessionId(const char* value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId.assign(value); }
    inline UpdateGameSessionRequest& WithGameSessionId(const Aws::String& value) { SetGameSessionId(value); return *this;}
    inline UpdateGameSessionRequest& WithGameSessionId(Aws::String&& value) { SetGameSessionId(std::move(value)); return *this;}
    inline UpdateGameSessionRequest& WithGameSessionId(const char* value) { SetGameSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of players that can be connected simultaneously to the
     * game session.</p>
     */
    inline int GetMaximumPlayerSessionCount() const{ return m_maximumPlayerSessionCount; }
    inline bool MaximumPlayerSessionCountHasBeenSet() const { return m_maximumPlayerSessionCountHasBeenSet; }
    inline void SetMaximumPlayerSessionCount(int value) { m_maximumPlayerSessionCountHasBeenSet = true; m_maximumPlayerSessionCount = value; }
    inline UpdateGameSessionRequest& WithMaximumPlayerSessionCount(int value) { SetMaximumPlayerSessionCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateGameSessionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateGameSessionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateGameSessionRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A policy that determines whether the game session is accepting new
     * players.</p>
     */
    inline const PlayerSessionCreationPolicy& GetPlayerSessionCreationPolicy() const{ return m_playerSessionCreationPolicy; }
    inline bool PlayerSessionCreationPolicyHasBeenSet() const { return m_playerSessionCreationPolicyHasBeenSet; }
    inline void SetPlayerSessionCreationPolicy(const PlayerSessionCreationPolicy& value) { m_playerSessionCreationPolicyHasBeenSet = true; m_playerSessionCreationPolicy = value; }
    inline void SetPlayerSessionCreationPolicy(PlayerSessionCreationPolicy&& value) { m_playerSessionCreationPolicyHasBeenSet = true; m_playerSessionCreationPolicy = std::move(value); }
    inline UpdateGameSessionRequest& WithPlayerSessionCreationPolicy(const PlayerSessionCreationPolicy& value) { SetPlayerSessionCreationPolicy(value); return *this;}
    inline UpdateGameSessionRequest& WithPlayerSessionCreationPolicy(PlayerSessionCreationPolicy&& value) { SetPlayerSessionCreationPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Game session protection policy to apply to this game session only.</p> <ul>
     * <li> <p> <b>NoProtection</b> -- The game session can be terminated during a
     * scale-down event.</p> </li> <li> <p> <b>FullProtection</b> -- If the game
     * session is in an <code>ACTIVE</code> status, it cannot be terminated during a
     * scale-down event.</p> </li> </ul>
     */
    inline const ProtectionPolicy& GetProtectionPolicy() const{ return m_protectionPolicy; }
    inline bool ProtectionPolicyHasBeenSet() const { return m_protectionPolicyHasBeenSet; }
    inline void SetProtectionPolicy(const ProtectionPolicy& value) { m_protectionPolicyHasBeenSet = true; m_protectionPolicy = value; }
    inline void SetProtectionPolicy(ProtectionPolicy&& value) { m_protectionPolicyHasBeenSet = true; m_protectionPolicy = std::move(value); }
    inline UpdateGameSessionRequest& WithProtectionPolicy(const ProtectionPolicy& value) { SetProtectionPolicy(value); return *this;}
    inline UpdateGameSessionRequest& WithProtectionPolicy(ProtectionPolicy&& value) { SetProtectionPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of key-value pairs that can store custom data in a game session. For
     * example: <code>{"Key": "difficulty", "Value": "novice"}</code>. You can use this
     * parameter to modify game properties in an active game session. This action adds
     * new properties and modifies existing properties. There is no way to delete
     * properties. For an example, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-client-api.html#game-properties-update">Update
     * the value of a game property</a>. </p>
     */
    inline const Aws::Vector<GameProperty>& GetGameProperties() const{ return m_gameProperties; }
    inline bool GamePropertiesHasBeenSet() const { return m_gamePropertiesHasBeenSet; }
    inline void SetGameProperties(const Aws::Vector<GameProperty>& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties = value; }
    inline void SetGameProperties(Aws::Vector<GameProperty>&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties = std::move(value); }
    inline UpdateGameSessionRequest& WithGameProperties(const Aws::Vector<GameProperty>& value) { SetGameProperties(value); return *this;}
    inline UpdateGameSessionRequest& WithGameProperties(Aws::Vector<GameProperty>&& value) { SetGameProperties(std::move(value)); return *this;}
    inline UpdateGameSessionRequest& AddGameProperties(const GameProperty& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(value); return *this; }
    inline UpdateGameSessionRequest& AddGameProperties(GameProperty&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(std::move(value)); return *this; }
    ///@}
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

    Aws::Vector<GameProperty> m_gameProperties;
    bool m_gamePropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
