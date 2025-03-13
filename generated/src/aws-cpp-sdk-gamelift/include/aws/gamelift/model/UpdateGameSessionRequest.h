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
    AWS_GAMELIFT_API UpdateGameSessionRequest() = default;

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
    inline const Aws::String& GetGameSessionId() const { return m_gameSessionId; }
    inline bool GameSessionIdHasBeenSet() const { return m_gameSessionIdHasBeenSet; }
    template<typename GameSessionIdT = Aws::String>
    void SetGameSessionId(GameSessionIdT&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = std::forward<GameSessionIdT>(value); }
    template<typename GameSessionIdT = Aws::String>
    UpdateGameSessionRequest& WithGameSessionId(GameSessionIdT&& value) { SetGameSessionId(std::forward<GameSessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of players that can be connected simultaneously to the
     * game session.</p>
     */
    inline int GetMaximumPlayerSessionCount() const { return m_maximumPlayerSessionCount; }
    inline bool MaximumPlayerSessionCountHasBeenSet() const { return m_maximumPlayerSessionCountHasBeenSet; }
    inline void SetMaximumPlayerSessionCount(int value) { m_maximumPlayerSessionCountHasBeenSet = true; m_maximumPlayerSessionCount = value; }
    inline UpdateGameSessionRequest& WithMaximumPlayerSessionCount(int value) { SetMaximumPlayerSessionCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label that is associated with a game session. Session names do
     * not need to be unique.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateGameSessionRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A policy that determines whether the game session is accepting new
     * players.</p>
     */
    inline PlayerSessionCreationPolicy GetPlayerSessionCreationPolicy() const { return m_playerSessionCreationPolicy; }
    inline bool PlayerSessionCreationPolicyHasBeenSet() const { return m_playerSessionCreationPolicyHasBeenSet; }
    inline void SetPlayerSessionCreationPolicy(PlayerSessionCreationPolicy value) { m_playerSessionCreationPolicyHasBeenSet = true; m_playerSessionCreationPolicy = value; }
    inline UpdateGameSessionRequest& WithPlayerSessionCreationPolicy(PlayerSessionCreationPolicy value) { SetPlayerSessionCreationPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Game session protection policy to apply to this game session only.</p> <ul>
     * <li> <p> <code>NoProtection</code> -- The game session can be terminated during
     * a scale-down event.</p> </li> <li> <p> <code>FullProtection</code> -- If the
     * game session is in an <code>ACTIVE</code> status, it cannot be terminated during
     * a scale-down event.</p> </li> </ul>
     */
    inline ProtectionPolicy GetProtectionPolicy() const { return m_protectionPolicy; }
    inline bool ProtectionPolicyHasBeenSet() const { return m_protectionPolicyHasBeenSet; }
    inline void SetProtectionPolicy(ProtectionPolicy value) { m_protectionPolicyHasBeenSet = true; m_protectionPolicy = value; }
    inline UpdateGameSessionRequest& WithProtectionPolicy(ProtectionPolicy value) { SetProtectionPolicy(value); return *this;}
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
    inline const Aws::Vector<GameProperty>& GetGameProperties() const { return m_gameProperties; }
    inline bool GamePropertiesHasBeenSet() const { return m_gamePropertiesHasBeenSet; }
    template<typename GamePropertiesT = Aws::Vector<GameProperty>>
    void SetGameProperties(GamePropertiesT&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties = std::forward<GamePropertiesT>(value); }
    template<typename GamePropertiesT = Aws::Vector<GameProperty>>
    UpdateGameSessionRequest& WithGameProperties(GamePropertiesT&& value) { SetGameProperties(std::forward<GamePropertiesT>(value)); return *this;}
    template<typename GamePropertiesT = GameProperty>
    UpdateGameSessionRequest& AddGameProperties(GamePropertiesT&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.emplace_back(std::forward<GamePropertiesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_gameSessionId;
    bool m_gameSessionIdHasBeenSet = false;

    int m_maximumPlayerSessionCount{0};
    bool m_maximumPlayerSessionCountHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PlayerSessionCreationPolicy m_playerSessionCreationPolicy{PlayerSessionCreationPolicy::NOT_SET};
    bool m_playerSessionCreationPolicyHasBeenSet = false;

    ProtectionPolicy m_protectionPolicy{ProtectionPolicy::NOT_SET};
    bool m_protectionPolicyHasBeenSet = false;

    Aws::Vector<GameProperty> m_gameProperties;
    bool m_gamePropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
