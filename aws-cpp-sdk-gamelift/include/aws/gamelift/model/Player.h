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
  class AWS_GAMELIFT_API Player
  {
  public:
    Player();
    Player(const Aws::Utils::Json::JsonValue& jsonValue);
    Player& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Unique identifier for a player</p>
     */
    inline const Aws::String& GetPlayerId() const{ return m_playerId; }

    /**
     * <p>Unique identifier for a player</p>
     */
    inline void SetPlayerId(const Aws::String& value) { m_playerIdHasBeenSet = true; m_playerId = value; }

    /**
     * <p>Unique identifier for a player</p>
     */
    inline void SetPlayerId(Aws::String&& value) { m_playerIdHasBeenSet = true; m_playerId = std::move(value); }

    /**
     * <p>Unique identifier for a player</p>
     */
    inline void SetPlayerId(const char* value) { m_playerIdHasBeenSet = true; m_playerId.assign(value); }

    /**
     * <p>Unique identifier for a player</p>
     */
    inline Player& WithPlayerId(const Aws::String& value) { SetPlayerId(value); return *this;}

    /**
     * <p>Unique identifier for a player</p>
     */
    inline Player& WithPlayerId(Aws::String&& value) { SetPlayerId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a player</p>
     */
    inline Player& WithPlayerId(const char* value) { SetPlayerId(value); return *this;}


    /**
     * <p>Collection of name:value pairs containing player information for use in
     * matchmaking. Player attribute names need to match <i>playerAttributes</i> names
     * in the rule set being used. Example: <code>"PlayerAttributes": {"skill": {"N":
     * "23"}, "gameMode": {"S": "deathmatch"}}</code>.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetPlayerAttributes() const{ return m_playerAttributes; }

    /**
     * <p>Collection of name:value pairs containing player information for use in
     * matchmaking. Player attribute names need to match <i>playerAttributes</i> names
     * in the rule set being used. Example: <code>"PlayerAttributes": {"skill": {"N":
     * "23"}, "gameMode": {"S": "deathmatch"}}</code>.</p>
     */
    inline void SetPlayerAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { m_playerAttributesHasBeenSet = true; m_playerAttributes = value; }

    /**
     * <p>Collection of name:value pairs containing player information for use in
     * matchmaking. Player attribute names need to match <i>playerAttributes</i> names
     * in the rule set being used. Example: <code>"PlayerAttributes": {"skill": {"N":
     * "23"}, "gameMode": {"S": "deathmatch"}}</code>.</p>
     */
    inline void SetPlayerAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { m_playerAttributesHasBeenSet = true; m_playerAttributes = std::move(value); }

    /**
     * <p>Collection of name:value pairs containing player information for use in
     * matchmaking. Player attribute names need to match <i>playerAttributes</i> names
     * in the rule set being used. Example: <code>"PlayerAttributes": {"skill": {"N":
     * "23"}, "gameMode": {"S": "deathmatch"}}</code>.</p>
     */
    inline Player& WithPlayerAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { SetPlayerAttributes(value); return *this;}

    /**
     * <p>Collection of name:value pairs containing player information for use in
     * matchmaking. Player attribute names need to match <i>playerAttributes</i> names
     * in the rule set being used. Example: <code>"PlayerAttributes": {"skill": {"N":
     * "23"}, "gameMode": {"S": "deathmatch"}}</code>.</p>
     */
    inline Player& WithPlayerAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { SetPlayerAttributes(std::move(value)); return *this;}

    /**
     * <p>Collection of name:value pairs containing player information for use in
     * matchmaking. Player attribute names need to match <i>playerAttributes</i> names
     * in the rule set being used. Example: <code>"PlayerAttributes": {"skill": {"N":
     * "23"}, "gameMode": {"S": "deathmatch"}}</code>.</p>
     */
    inline Player& AddPlayerAttributes(const Aws::String& key, const AttributeValue& value) { m_playerAttributesHasBeenSet = true; m_playerAttributes.emplace(key, value); return *this; }

    /**
     * <p>Collection of name:value pairs containing player information for use in
     * matchmaking. Player attribute names need to match <i>playerAttributes</i> names
     * in the rule set being used. Example: <code>"PlayerAttributes": {"skill": {"N":
     * "23"}, "gameMode": {"S": "deathmatch"}}</code>.</p>
     */
    inline Player& AddPlayerAttributes(Aws::String&& key, const AttributeValue& value) { m_playerAttributesHasBeenSet = true; m_playerAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Collection of name:value pairs containing player information for use in
     * matchmaking. Player attribute names need to match <i>playerAttributes</i> names
     * in the rule set being used. Example: <code>"PlayerAttributes": {"skill": {"N":
     * "23"}, "gameMode": {"S": "deathmatch"}}</code>.</p>
     */
    inline Player& AddPlayerAttributes(const Aws::String& key, AttributeValue&& value) { m_playerAttributesHasBeenSet = true; m_playerAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Collection of name:value pairs containing player information for use in
     * matchmaking. Player attribute names need to match <i>playerAttributes</i> names
     * in the rule set being used. Example: <code>"PlayerAttributes": {"skill": {"N":
     * "23"}, "gameMode": {"S": "deathmatch"}}</code>.</p>
     */
    inline Player& AddPlayerAttributes(Aws::String&& key, AttributeValue&& value) { m_playerAttributesHasBeenSet = true; m_playerAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Collection of name:value pairs containing player information for use in
     * matchmaking. Player attribute names need to match <i>playerAttributes</i> names
     * in the rule set being used. Example: <code>"PlayerAttributes": {"skill": {"N":
     * "23"}, "gameMode": {"S": "deathmatch"}}</code>.</p>
     */
    inline Player& AddPlayerAttributes(const char* key, AttributeValue&& value) { m_playerAttributesHasBeenSet = true; m_playerAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Collection of name:value pairs containing player information for use in
     * matchmaking. Player attribute names need to match <i>playerAttributes</i> names
     * in the rule set being used. Example: <code>"PlayerAttributes": {"skill": {"N":
     * "23"}, "gameMode": {"S": "deathmatch"}}</code>.</p>
     */
    inline Player& AddPlayerAttributes(const char* key, const AttributeValue& value) { m_playerAttributesHasBeenSet = true; m_playerAttributes.emplace(key, value); return *this; }


    /**
     * <p>Name of the team that the player is assigned to in a match. Team names are
     * defined in a matchmaking rule set.</p>
     */
    inline const Aws::String& GetTeam() const{ return m_team; }

    /**
     * <p>Name of the team that the player is assigned to in a match. Team names are
     * defined in a matchmaking rule set.</p>
     */
    inline void SetTeam(const Aws::String& value) { m_teamHasBeenSet = true; m_team = value; }

    /**
     * <p>Name of the team that the player is assigned to in a match. Team names are
     * defined in a matchmaking rule set.</p>
     */
    inline void SetTeam(Aws::String&& value) { m_teamHasBeenSet = true; m_team = std::move(value); }

    /**
     * <p>Name of the team that the player is assigned to in a match. Team names are
     * defined in a matchmaking rule set.</p>
     */
    inline void SetTeam(const char* value) { m_teamHasBeenSet = true; m_team.assign(value); }

    /**
     * <p>Name of the team that the player is assigned to in a match. Team names are
     * defined in a matchmaking rule set.</p>
     */
    inline Player& WithTeam(const Aws::String& value) { SetTeam(value); return *this;}

    /**
     * <p>Name of the team that the player is assigned to in a match. Team names are
     * defined in a matchmaking rule set.</p>
     */
    inline Player& WithTeam(Aws::String&& value) { SetTeam(std::move(value)); return *this;}

    /**
     * <p>Name of the team that the player is assigned to in a match. Team names are
     * defined in a matchmaking rule set.</p>
     */
    inline Player& WithTeam(const char* value) { SetTeam(value); return *this;}


    /**
     * <p>Set of values, expressed in milliseconds, indicating the amount of latency
     * that a player experiences when connected to AWS regions. If this property is
     * present, FlexMatch considers placing the match only in regions for which latency
     * is reported. </p> <p>If a matchmaker has a rule that evaluates player latency,
     * players must report latency in order to be matched. If no latency is reported in
     * this scenario, FlexMatch assumes that no regions are available to the player and
     * the ticket is not matchable. </p>
     */
    inline const Aws::Map<Aws::String, int>& GetLatencyInMs() const{ return m_latencyInMs; }

    /**
     * <p>Set of values, expressed in milliseconds, indicating the amount of latency
     * that a player experiences when connected to AWS regions. If this property is
     * present, FlexMatch considers placing the match only in regions for which latency
     * is reported. </p> <p>If a matchmaker has a rule that evaluates player latency,
     * players must report latency in order to be matched. If no latency is reported in
     * this scenario, FlexMatch assumes that no regions are available to the player and
     * the ticket is not matchable. </p>
     */
    inline void SetLatencyInMs(const Aws::Map<Aws::String, int>& value) { m_latencyInMsHasBeenSet = true; m_latencyInMs = value; }

    /**
     * <p>Set of values, expressed in milliseconds, indicating the amount of latency
     * that a player experiences when connected to AWS regions. If this property is
     * present, FlexMatch considers placing the match only in regions for which latency
     * is reported. </p> <p>If a matchmaker has a rule that evaluates player latency,
     * players must report latency in order to be matched. If no latency is reported in
     * this scenario, FlexMatch assumes that no regions are available to the player and
     * the ticket is not matchable. </p>
     */
    inline void SetLatencyInMs(Aws::Map<Aws::String, int>&& value) { m_latencyInMsHasBeenSet = true; m_latencyInMs = std::move(value); }

    /**
     * <p>Set of values, expressed in milliseconds, indicating the amount of latency
     * that a player experiences when connected to AWS regions. If this property is
     * present, FlexMatch considers placing the match only in regions for which latency
     * is reported. </p> <p>If a matchmaker has a rule that evaluates player latency,
     * players must report latency in order to be matched. If no latency is reported in
     * this scenario, FlexMatch assumes that no regions are available to the player and
     * the ticket is not matchable. </p>
     */
    inline Player& WithLatencyInMs(const Aws::Map<Aws::String, int>& value) { SetLatencyInMs(value); return *this;}

    /**
     * <p>Set of values, expressed in milliseconds, indicating the amount of latency
     * that a player experiences when connected to AWS regions. If this property is
     * present, FlexMatch considers placing the match only in regions for which latency
     * is reported. </p> <p>If a matchmaker has a rule that evaluates player latency,
     * players must report latency in order to be matched. If no latency is reported in
     * this scenario, FlexMatch assumes that no regions are available to the player and
     * the ticket is not matchable. </p>
     */
    inline Player& WithLatencyInMs(Aws::Map<Aws::String, int>&& value) { SetLatencyInMs(std::move(value)); return *this;}

    /**
     * <p>Set of values, expressed in milliseconds, indicating the amount of latency
     * that a player experiences when connected to AWS regions. If this property is
     * present, FlexMatch considers placing the match only in regions for which latency
     * is reported. </p> <p>If a matchmaker has a rule that evaluates player latency,
     * players must report latency in order to be matched. If no latency is reported in
     * this scenario, FlexMatch assumes that no regions are available to the player and
     * the ticket is not matchable. </p>
     */
    inline Player& AddLatencyInMs(const Aws::String& key, int value) { m_latencyInMsHasBeenSet = true; m_latencyInMs.emplace(key, value); return *this; }

    /**
     * <p>Set of values, expressed in milliseconds, indicating the amount of latency
     * that a player experiences when connected to AWS regions. If this property is
     * present, FlexMatch considers placing the match only in regions for which latency
     * is reported. </p> <p>If a matchmaker has a rule that evaluates player latency,
     * players must report latency in order to be matched. If no latency is reported in
     * this scenario, FlexMatch assumes that no regions are available to the player and
     * the ticket is not matchable. </p>
     */
    inline Player& AddLatencyInMs(Aws::String&& key, int value) { m_latencyInMsHasBeenSet = true; m_latencyInMs.emplace(std::move(key), value); return *this; }

    /**
     * <p>Set of values, expressed in milliseconds, indicating the amount of latency
     * that a player experiences when connected to AWS regions. If this property is
     * present, FlexMatch considers placing the match only in regions for which latency
     * is reported. </p> <p>If a matchmaker has a rule that evaluates player latency,
     * players must report latency in order to be matched. If no latency is reported in
     * this scenario, FlexMatch assumes that no regions are available to the player and
     * the ticket is not matchable. </p>
     */
    inline Player& AddLatencyInMs(const char* key, int value) { m_latencyInMsHasBeenSet = true; m_latencyInMs.emplace(key, value); return *this; }

  private:

    Aws::String m_playerId;
    bool m_playerIdHasBeenSet;

    Aws::Map<Aws::String, AttributeValue> m_playerAttributes;
    bool m_playerAttributesHasBeenSet;

    Aws::String m_team;
    bool m_teamHasBeenSet;

    Aws::Map<Aws::String, int> m_latencyInMs;
    bool m_latencyInMsHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
