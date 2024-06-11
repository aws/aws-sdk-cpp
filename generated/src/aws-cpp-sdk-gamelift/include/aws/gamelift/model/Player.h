/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/gamelift/model/AttributeValue.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents a player in matchmaking. When starting a matchmaking request, a
   * player has a player ID, attributes, and may have latency data. Team information
   * is added after a match has been successfully completed.</p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/Player">AWS
   * API Reference</a></p>
   */
  class Player
  {
  public:
    AWS_GAMELIFT_API Player();
    AWS_GAMELIFT_API Player(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Player& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for a player</p>
     */
    inline const Aws::String& GetPlayerId() const{ return m_playerId; }
    inline bool PlayerIdHasBeenSet() const { return m_playerIdHasBeenSet; }
    inline void SetPlayerId(const Aws::String& value) { m_playerIdHasBeenSet = true; m_playerId = value; }
    inline void SetPlayerId(Aws::String&& value) { m_playerIdHasBeenSet = true; m_playerId = std::move(value); }
    inline void SetPlayerId(const char* value) { m_playerIdHasBeenSet = true; m_playerId.assign(value); }
    inline Player& WithPlayerId(const Aws::String& value) { SetPlayerId(value); return *this;}
    inline Player& WithPlayerId(Aws::String&& value) { SetPlayerId(std::move(value)); return *this;}
    inline Player& WithPlayerId(const char* value) { SetPlayerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of key:value pairs containing player information for use in
     * matchmaking. Player attribute keys must match the <i>playerAttributes</i> used
     * in a matchmaking rule set. Example: <code>"PlayerAttributes": {"skill": {"N":
     * "23"}, "gameMode": {"S": "deathmatch"}}</code>.</p> <p>You can provide up to 10
     * <code>PlayerAttributes</code>.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetPlayerAttributes() const{ return m_playerAttributes; }
    inline bool PlayerAttributesHasBeenSet() const { return m_playerAttributesHasBeenSet; }
    inline void SetPlayerAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { m_playerAttributesHasBeenSet = true; m_playerAttributes = value; }
    inline void SetPlayerAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { m_playerAttributesHasBeenSet = true; m_playerAttributes = std::move(value); }
    inline Player& WithPlayerAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { SetPlayerAttributes(value); return *this;}
    inline Player& WithPlayerAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { SetPlayerAttributes(std::move(value)); return *this;}
    inline Player& AddPlayerAttributes(const Aws::String& key, const AttributeValue& value) { m_playerAttributesHasBeenSet = true; m_playerAttributes.emplace(key, value); return *this; }
    inline Player& AddPlayerAttributes(Aws::String&& key, const AttributeValue& value) { m_playerAttributesHasBeenSet = true; m_playerAttributes.emplace(std::move(key), value); return *this; }
    inline Player& AddPlayerAttributes(const Aws::String& key, AttributeValue&& value) { m_playerAttributesHasBeenSet = true; m_playerAttributes.emplace(key, std::move(value)); return *this; }
    inline Player& AddPlayerAttributes(Aws::String&& key, AttributeValue&& value) { m_playerAttributesHasBeenSet = true; m_playerAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline Player& AddPlayerAttributes(const char* key, AttributeValue&& value) { m_playerAttributesHasBeenSet = true; m_playerAttributes.emplace(key, std::move(value)); return *this; }
    inline Player& AddPlayerAttributes(const char* key, const AttributeValue& value) { m_playerAttributesHasBeenSet = true; m_playerAttributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Name of the team that the player is assigned to in a match. Team names are
     * defined in a matchmaking rule set.</p>
     */
    inline const Aws::String& GetTeam() const{ return m_team; }
    inline bool TeamHasBeenSet() const { return m_teamHasBeenSet; }
    inline void SetTeam(const Aws::String& value) { m_teamHasBeenSet = true; m_team = value; }
    inline void SetTeam(Aws::String&& value) { m_teamHasBeenSet = true; m_team = std::move(value); }
    inline void SetTeam(const char* value) { m_teamHasBeenSet = true; m_team.assign(value); }
    inline Player& WithTeam(const Aws::String& value) { SetTeam(value); return *this;}
    inline Player& WithTeam(Aws::String&& value) { SetTeam(std::move(value)); return *this;}
    inline Player& WithTeam(const char* value) { SetTeam(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of values, expressed in milliseconds, that indicates the amount of
     * latency that a player experiences when connected to @aws; Regions. If this
     * property is present, FlexMatch considers placing the match only in Regions for
     * which latency is reported. </p> <p>If a matchmaker has a rule that evaluates
     * player latency, players must report latency in order to be matched. If no
     * latency is reported in this scenario, FlexMatch assumes that no Regions are
     * available to the player and the ticket is not matchable. </p>
     */
    inline const Aws::Map<Aws::String, int>& GetLatencyInMs() const{ return m_latencyInMs; }
    inline bool LatencyInMsHasBeenSet() const { return m_latencyInMsHasBeenSet; }
    inline void SetLatencyInMs(const Aws::Map<Aws::String, int>& value) { m_latencyInMsHasBeenSet = true; m_latencyInMs = value; }
    inline void SetLatencyInMs(Aws::Map<Aws::String, int>&& value) { m_latencyInMsHasBeenSet = true; m_latencyInMs = std::move(value); }
    inline Player& WithLatencyInMs(const Aws::Map<Aws::String, int>& value) { SetLatencyInMs(value); return *this;}
    inline Player& WithLatencyInMs(Aws::Map<Aws::String, int>&& value) { SetLatencyInMs(std::move(value)); return *this;}
    inline Player& AddLatencyInMs(const Aws::String& key, int value) { m_latencyInMsHasBeenSet = true; m_latencyInMs.emplace(key, value); return *this; }
    inline Player& AddLatencyInMs(Aws::String&& key, int value) { m_latencyInMsHasBeenSet = true; m_latencyInMs.emplace(std::move(key), value); return *this; }
    inline Player& AddLatencyInMs(const char* key, int value) { m_latencyInMsHasBeenSet = true; m_latencyInMs.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_playerId;
    bool m_playerIdHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_playerAttributes;
    bool m_playerAttributesHasBeenSet = false;

    Aws::String m_team;
    bool m_teamHasBeenSet = false;

    Aws::Map<Aws::String, int> m_latencyInMs;
    bool m_latencyInMsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
