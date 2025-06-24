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
    AWS_GAMELIFT_API GameSessionConnectionInfo() = default;
    AWS_GAMELIFT_API GameSessionConnectionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API GameSessionConnectionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the game session. Use the game session ID.</p>
     */
    inline const Aws::String& GetGameSessionArn() const { return m_gameSessionArn; }
    inline bool GameSessionArnHasBeenSet() const { return m_gameSessionArnHasBeenSet; }
    template<typename GameSessionArnT = Aws::String>
    void SetGameSessionArn(GameSessionArnT&& value) { m_gameSessionArnHasBeenSet = true; m_gameSessionArn = std::forward<GameSessionArnT>(value); }
    template<typename GameSessionArnT = Aws::String>
    GameSessionConnectionInfo& WithGameSessionArn(GameSessionArnT&& value) { SetGameSessionArn(std::forward<GameSessionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the game session. To connect to a Amazon GameLift Servers
     * game server, an app needs both the IP address and port number.</p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    GameSessionConnectionInfo& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
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
    inline const Aws::String& GetDnsName() const { return m_dnsName; }
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
    template<typename DnsNameT = Aws::String>
    void SetDnsName(DnsNameT&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::forward<DnsNameT>(value); }
    template<typename DnsNameT = Aws::String>
    GameSessionConnectionInfo& WithDnsName(DnsNameT&& value) { SetDnsName(std::forward<DnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number for the game session. To connect to a Amazon GameLift Servers
     * game server, an app needs both the IP address and port number.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline GameSessionConnectionInfo& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of player session IDs, one for each player ID that was included
     * in the original matchmaking request. </p>
     */
    inline const Aws::Vector<MatchedPlayerSession>& GetMatchedPlayerSessions() const { return m_matchedPlayerSessions; }
    inline bool MatchedPlayerSessionsHasBeenSet() const { return m_matchedPlayerSessionsHasBeenSet; }
    template<typename MatchedPlayerSessionsT = Aws::Vector<MatchedPlayerSession>>
    void SetMatchedPlayerSessions(MatchedPlayerSessionsT&& value) { m_matchedPlayerSessionsHasBeenSet = true; m_matchedPlayerSessions = std::forward<MatchedPlayerSessionsT>(value); }
    template<typename MatchedPlayerSessionsT = Aws::Vector<MatchedPlayerSession>>
    GameSessionConnectionInfo& WithMatchedPlayerSessions(MatchedPlayerSessionsT&& value) { SetMatchedPlayerSessions(std::forward<MatchedPlayerSessionsT>(value)); return *this;}
    template<typename MatchedPlayerSessionsT = MatchedPlayerSession>
    GameSessionConnectionInfo& AddMatchedPlayerSessions(MatchedPlayerSessionsT&& value) { m_matchedPlayerSessionsHasBeenSet = true; m_matchedPlayerSessions.emplace_back(std::forward<MatchedPlayerSessionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_gameSessionArn;
    bool m_gameSessionArnHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_dnsName;
    bool m_dnsNameHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::Vector<MatchedPlayerSession> m_matchedPlayerSessions;
    bool m_matchedPlayerSessionsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
