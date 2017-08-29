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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/MatchedPlayerSession.h>
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
   * <p>Connection information for the new game session that is created with
   * matchmaking. (with <a>StartMatchmaking</a>). Once a match is set, the FlexMatch
   * engine places the match and creates a new game session for it. This information,
   * including the game session endpoint and player sessions for each player in the
   * original matchmaking request, is added to the <a>MatchmakingTicket</a>, which
   * can be retrieved by calling <a>DescribeMatchmaking</a>.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameSessionConnectionInfo">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API GameSessionConnectionInfo
  {
  public:
    GameSessionConnectionInfo();
    GameSessionConnectionInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    GameSessionConnectionInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon Resource Name (<a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a game session and uniquely identifies it.</p>
     */
    inline const Aws::String& GetGameSessionArn() const{ return m_gameSessionArn; }

    /**
     * <p>Amazon Resource Name (<a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a game session and uniquely identifies it.</p>
     */
    inline void SetGameSessionArn(const Aws::String& value) { m_gameSessionArnHasBeenSet = true; m_gameSessionArn = value; }

    /**
     * <p>Amazon Resource Name (<a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a game session and uniquely identifies it.</p>
     */
    inline void SetGameSessionArn(Aws::String&& value) { m_gameSessionArnHasBeenSet = true; m_gameSessionArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (<a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a game session and uniquely identifies it.</p>
     */
    inline void SetGameSessionArn(const char* value) { m_gameSessionArnHasBeenSet = true; m_gameSessionArn.assign(value); }

    /**
     * <p>Amazon Resource Name (<a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a game session and uniquely identifies it.</p>
     */
    inline GameSessionConnectionInfo& WithGameSessionArn(const Aws::String& value) { SetGameSessionArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (<a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a game session and uniquely identifies it.</p>
     */
    inline GameSessionConnectionInfo& WithGameSessionArn(Aws::String&& value) { SetGameSessionArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (<a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a game session and uniquely identifies it.</p>
     */
    inline GameSessionConnectionInfo& WithGameSessionArn(const char* value) { SetGameSessionArn(value); return *this;}


    /**
     * <p>IP address of the game session. To connect to a Amazon GameLift game server,
     * an app needs both the IP address and port number.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>IP address of the game session. To connect to a Amazon GameLift game server,
     * an app needs both the IP address and port number.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>IP address of the game session. To connect to a Amazon GameLift game server,
     * an app needs both the IP address and port number.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>IP address of the game session. To connect to a Amazon GameLift game server,
     * an app needs both the IP address and port number.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>IP address of the game session. To connect to a Amazon GameLift game server,
     * an app needs both the IP address and port number.</p>
     */
    inline GameSessionConnectionInfo& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>IP address of the game session. To connect to a Amazon GameLift game server,
     * an app needs both the IP address and port number.</p>
     */
    inline GameSessionConnectionInfo& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>IP address of the game session. To connect to a Amazon GameLift game server,
     * an app needs both the IP address and port number.</p>
     */
    inline GameSessionConnectionInfo& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}


    /**
     * <p>Port number for the game session. To connect to a Amazon GameLift game
     * server, an app needs both the IP address and port number.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>Port number for the game session. To connect to a Amazon GameLift game
     * server, an app needs both the IP address and port number.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>Port number for the game session. To connect to a Amazon GameLift game
     * server, an app needs both the IP address and port number.</p>
     */
    inline GameSessionConnectionInfo& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>Collection of player session IDs, one for each player ID that was included in
     * the original matchmaking request. </p>
     */
    inline const Aws::Vector<MatchedPlayerSession>& GetMatchedPlayerSessions() const{ return m_matchedPlayerSessions; }

    /**
     * <p>Collection of player session IDs, one for each player ID that was included in
     * the original matchmaking request. </p>
     */
    inline void SetMatchedPlayerSessions(const Aws::Vector<MatchedPlayerSession>& value) { m_matchedPlayerSessionsHasBeenSet = true; m_matchedPlayerSessions = value; }

    /**
     * <p>Collection of player session IDs, one for each player ID that was included in
     * the original matchmaking request. </p>
     */
    inline void SetMatchedPlayerSessions(Aws::Vector<MatchedPlayerSession>&& value) { m_matchedPlayerSessionsHasBeenSet = true; m_matchedPlayerSessions = std::move(value); }

    /**
     * <p>Collection of player session IDs, one for each player ID that was included in
     * the original matchmaking request. </p>
     */
    inline GameSessionConnectionInfo& WithMatchedPlayerSessions(const Aws::Vector<MatchedPlayerSession>& value) { SetMatchedPlayerSessions(value); return *this;}

    /**
     * <p>Collection of player session IDs, one for each player ID that was included in
     * the original matchmaking request. </p>
     */
    inline GameSessionConnectionInfo& WithMatchedPlayerSessions(Aws::Vector<MatchedPlayerSession>&& value) { SetMatchedPlayerSessions(std::move(value)); return *this;}

    /**
     * <p>Collection of player session IDs, one for each player ID that was included in
     * the original matchmaking request. </p>
     */
    inline GameSessionConnectionInfo& AddMatchedPlayerSessions(const MatchedPlayerSession& value) { m_matchedPlayerSessionsHasBeenSet = true; m_matchedPlayerSessions.push_back(value); return *this; }

    /**
     * <p>Collection of player session IDs, one for each player ID that was included in
     * the original matchmaking request. </p>
     */
    inline GameSessionConnectionInfo& AddMatchedPlayerSessions(MatchedPlayerSession&& value) { m_matchedPlayerSessionsHasBeenSet = true; m_matchedPlayerSessions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_gameSessionArn;
    bool m_gameSessionArnHasBeenSet;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    Aws::Vector<MatchedPlayerSession> m_matchedPlayerSessions;
    bool m_matchedPlayerSessionsHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
