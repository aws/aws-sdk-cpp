/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Connection information for a new game session that is created in response to
   * a start matchmaking request. Once a match is made, the FlexMatch engine creates
   * a new game session for it. This information, including the game session endpoint
   * and player sessions for each player in the original matchmaking request, is
   * added to the matchmaking ticket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameSessionConnectionInfo">AWS
   * API Reference</a></p>
   */
  class GameSessionConnectionInfo
  {
  public:
    AWS_GAMELIFT_API GameSessionConnectionInfo();
    AWS_GAMELIFT_API GameSessionConnectionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API GameSessionConnectionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the game session. Use the game session ID.</p>
     */
    inline const Aws::String& GetGameSessionArn() const{ return m_gameSessionArn; }
    inline bool GameSessionArnHasBeenSet() const { return m_gameSessionArnHasBeenSet; }
    inline void SetGameSessionArn(const Aws::String& value) { m_gameSessionArnHasBeenSet = true; m_gameSessionArn = value; }
    inline void SetGameSessionArn(Aws::String&& value) { m_gameSessionArnHasBeenSet = true; m_gameSessionArn = std::move(value); }
    inline void SetGameSessionArn(const char* value) { m_gameSessionArnHasBeenSet = true; m_gameSessionArn.assign(value); }
    inline GameSessionConnectionInfo& WithGameSessionArn(const Aws::String& value) { SetGameSessionArn(value); return *this;}
    inline GameSessionConnectionInfo& WithGameSessionArn(Aws::String&& value) { SetGameSessionArn(std::move(value)); return *this;}
    inline GameSessionConnectionInfo& WithGameSessionArn(const char* value) { SetGameSessionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the game session. To connect to a Amazon GameLift game
     * server, an app needs both the IP address and port number.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }
    inline GameSessionConnectionInfo& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}
    inline GameSessionConnectionInfo& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}
    inline GameSessionConnectionInfo& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS identifier assigned to the instance that is running the game session.
     * Values have the following format:</p> <ul> <li> <p>TLS-enabled fleets:
     * <code>&lt;unique identifier&gt;.&lt;region
     * identifier&gt;.amazongamelift.com</code>.</p> </li> <li> <p>Non-TLS-enabled
     * fleets: <code>ec2-&lt;unique identifier&gt;.compute.amazonaws.com</code>. (See
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-instance-addressing.html#concepts-public-addresses">Amazon
     * EC2 Instance IP Addressing</a>.)</p> </li> </ul> <p>When connecting to a game
     * session that is running on a TLS-enabled fleet, you must use the DNS name, not
     * the IP address.</p>
     */
    inline const Aws::String& GetDnsName() const{ return m_dnsName; }
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
    inline void SetDnsName(const Aws::String& value) { m_dnsNameHasBeenSet = true; m_dnsName = value; }
    inline void SetDnsName(Aws::String&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::move(value); }
    inline void SetDnsName(const char* value) { m_dnsNameHasBeenSet = true; m_dnsName.assign(value); }
    inline GameSessionConnectionInfo& WithDnsName(const Aws::String& value) { SetDnsName(value); return *this;}
    inline GameSessionConnectionInfo& WithDnsName(Aws::String&& value) { SetDnsName(std::move(value)); return *this;}
    inline GameSessionConnectionInfo& WithDnsName(const char* value) { SetDnsName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number for the game session. To connect to a Amazon GameLift game
     * server, an app needs both the IP address and port number.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline GameSessionConnectionInfo& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of player session IDs, one for each player ID that was included
     * in the original matchmaking request. </p>
     */
    inline const Aws::Vector<MatchedPlayerSession>& GetMatchedPlayerSessions() const{ return m_matchedPlayerSessions; }
    inline bool MatchedPlayerSessionsHasBeenSet() const { return m_matchedPlayerSessionsHasBeenSet; }
    inline void SetMatchedPlayerSessions(const Aws::Vector<MatchedPlayerSession>& value) { m_matchedPlayerSessionsHasBeenSet = true; m_matchedPlayerSessions = value; }
    inline void SetMatchedPlayerSessions(Aws::Vector<MatchedPlayerSession>&& value) { m_matchedPlayerSessionsHasBeenSet = true; m_matchedPlayerSessions = std::move(value); }
    inline GameSessionConnectionInfo& WithMatchedPlayerSessions(const Aws::Vector<MatchedPlayerSession>& value) { SetMatchedPlayerSessions(value); return *this;}
    inline GameSessionConnectionInfo& WithMatchedPlayerSessions(Aws::Vector<MatchedPlayerSession>&& value) { SetMatchedPlayerSessions(std::move(value)); return *this;}
    inline GameSessionConnectionInfo& AddMatchedPlayerSessions(const MatchedPlayerSession& value) { m_matchedPlayerSessionsHasBeenSet = true; m_matchedPlayerSessions.push_back(value); return *this; }
    inline GameSessionConnectionInfo& AddMatchedPlayerSessions(MatchedPlayerSession&& value) { m_matchedPlayerSessionsHasBeenSet = true; m_matchedPlayerSessions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_gameSessionArn;
    bool m_gameSessionArnHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_dnsName;
    bool m_dnsNameHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::Vector<MatchedPlayerSession> m_matchedPlayerSessions;
    bool m_matchedPlayerSessionsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
