/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request action.</p>
   */
  class AWS_GAMELIFT_API CreatePlayerSessionsRequest : public GameLiftRequest
  {
  public:
    CreatePlayerSessionsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Unique identifier for the game session to add players to. Game session ID
     * format is as follows:
     * "arn:aws:gamelift:&lt;region&gt;::gamesession/fleet-&lt;fleet ID&gt;/&lt;ID
     * string&gt;". The value of &lt;ID string&gt; is either a custom ID string (if one
     * was specified when the game session was created) an auto-generated string. </p>
     */
    inline const Aws::String& GetGameSessionId() const{ return m_gameSessionId; }

    /**
     * <p>Unique identifier for the game session to add players to. Game session ID
     * format is as follows:
     * "arn:aws:gamelift:&lt;region&gt;::gamesession/fleet-&lt;fleet ID&gt;/&lt;ID
     * string&gt;". The value of &lt;ID string&gt; is either a custom ID string (if one
     * was specified when the game session was created) an auto-generated string. </p>
     */
    inline void SetGameSessionId(const Aws::String& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = value; }

    /**
     * <p>Unique identifier for the game session to add players to. Game session ID
     * format is as follows:
     * "arn:aws:gamelift:&lt;region&gt;::gamesession/fleet-&lt;fleet ID&gt;/&lt;ID
     * string&gt;". The value of &lt;ID string&gt; is either a custom ID string (if one
     * was specified when the game session was created) an auto-generated string. </p>
     */
    inline void SetGameSessionId(Aws::String&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = value; }

    /**
     * <p>Unique identifier for the game session to add players to. Game session ID
     * format is as follows:
     * "arn:aws:gamelift:&lt;region&gt;::gamesession/fleet-&lt;fleet ID&gt;/&lt;ID
     * string&gt;". The value of &lt;ID string&gt; is either a custom ID string (if one
     * was specified when the game session was created) an auto-generated string. </p>
     */
    inline void SetGameSessionId(const char* value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId.assign(value); }

    /**
     * <p>Unique identifier for the game session to add players to. Game session ID
     * format is as follows:
     * "arn:aws:gamelift:&lt;region&gt;::gamesession/fleet-&lt;fleet ID&gt;/&lt;ID
     * string&gt;". The value of &lt;ID string&gt; is either a custom ID string (if one
     * was specified when the game session was created) an auto-generated string. </p>
     */
    inline CreatePlayerSessionsRequest& WithGameSessionId(const Aws::String& value) { SetGameSessionId(value); return *this;}

    /**
     * <p>Unique identifier for the game session to add players to. Game session ID
     * format is as follows:
     * "arn:aws:gamelift:&lt;region&gt;::gamesession/fleet-&lt;fleet ID&gt;/&lt;ID
     * string&gt;". The value of &lt;ID string&gt; is either a custom ID string (if one
     * was specified when the game session was created) an auto-generated string. </p>
     */
    inline CreatePlayerSessionsRequest& WithGameSessionId(Aws::String&& value) { SetGameSessionId(value); return *this;}

    /**
     * <p>Unique identifier for the game session to add players to. Game session ID
     * format is as follows:
     * "arn:aws:gamelift:&lt;region&gt;::gamesession/fleet-&lt;fleet ID&gt;/&lt;ID
     * string&gt;". The value of &lt;ID string&gt; is either a custom ID string (if one
     * was specified when the game session was created) an auto-generated string. </p>
     */
    inline CreatePlayerSessionsRequest& WithGameSessionId(const char* value) { SetGameSessionId(value); return *this;}

    /**
     * <p>List of unique identifiers for the players to be added.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPlayerIds() const{ return m_playerIds; }

    /**
     * <p>List of unique identifiers for the players to be added.</p>
     */
    inline void SetPlayerIds(const Aws::Vector<Aws::String>& value) { m_playerIdsHasBeenSet = true; m_playerIds = value; }

    /**
     * <p>List of unique identifiers for the players to be added.</p>
     */
    inline void SetPlayerIds(Aws::Vector<Aws::String>&& value) { m_playerIdsHasBeenSet = true; m_playerIds = value; }

    /**
     * <p>List of unique identifiers for the players to be added.</p>
     */
    inline CreatePlayerSessionsRequest& WithPlayerIds(const Aws::Vector<Aws::String>& value) { SetPlayerIds(value); return *this;}

    /**
     * <p>List of unique identifiers for the players to be added.</p>
     */
    inline CreatePlayerSessionsRequest& WithPlayerIds(Aws::Vector<Aws::String>&& value) { SetPlayerIds(value); return *this;}

    /**
     * <p>List of unique identifiers for the players to be added.</p>
     */
    inline CreatePlayerSessionsRequest& AddPlayerIds(const Aws::String& value) { m_playerIdsHasBeenSet = true; m_playerIds.push_back(value); return *this; }

    /**
     * <p>List of unique identifiers for the players to be added.</p>
     */
    inline CreatePlayerSessionsRequest& AddPlayerIds(Aws::String&& value) { m_playerIdsHasBeenSet = true; m_playerIds.push_back(value); return *this; }

    /**
     * <p>List of unique identifiers for the players to be added.</p>
     */
    inline CreatePlayerSessionsRequest& AddPlayerIds(const char* value) { m_playerIdsHasBeenSet = true; m_playerIds.push_back(value); return *this; }

  private:
    Aws::String m_gameSessionId;
    bool m_gameSessionIdHasBeenSet;
    Aws::Vector<Aws::String> m_playerIds;
    bool m_playerIdsHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
