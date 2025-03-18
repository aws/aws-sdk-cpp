/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/MatchmakingConfigurationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/GameSessionConnectionInfo.h>
#include <aws/gamelift/model/Player.h>
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
   * <p>Ticket generated to track the progress of a matchmaking request. Each ticket
   * is uniquely identified by a ticket ID, supplied by the requester, when creating
   * a matchmaking request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/MatchmakingTicket">AWS
   * API Reference</a></p>
   */
  class MatchmakingTicket
  {
  public:
    AWS_GAMELIFT_API MatchmakingTicket() = default;
    AWS_GAMELIFT_API MatchmakingTicket(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API MatchmakingTicket& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for a matchmaking ticket.</p>
     */
    inline const Aws::String& GetTicketId() const { return m_ticketId; }
    inline bool TicketIdHasBeenSet() const { return m_ticketIdHasBeenSet; }
    template<typename TicketIdT = Aws::String>
    void SetTicketId(TicketIdT&& value) { m_ticketIdHasBeenSet = true; m_ticketId = std::forward<TicketIdT>(value); }
    template<typename TicketIdT = Aws::String>
    MatchmakingTicket& WithTicketId(TicketIdT&& value) { SetTicketId(std::forward<TicketIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the matchmaking configuration that is used with this ticket.
     * Matchmaking configurations determine how players are grouped into a match and
     * how a new game session is created for the match.</p>
     */
    inline const Aws::String& GetConfigurationName() const { return m_configurationName; }
    inline bool ConfigurationNameHasBeenSet() const { return m_configurationNameHasBeenSet; }
    template<typename ConfigurationNameT = Aws::String>
    void SetConfigurationName(ConfigurationNameT&& value) { m_configurationNameHasBeenSet = true; m_configurationName = std::forward<ConfigurationNameT>(value); }
    template<typename ConfigurationNameT = Aws::String>
    MatchmakingTicket& WithConfigurationName(ConfigurationNameT&& value) { SetConfigurationName(std::forward<ConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift matchmaking configuration resource that is used
     * with this ticket.</p>
     */
    inline const Aws::String& GetConfigurationArn() const { return m_configurationArn; }
    inline bool ConfigurationArnHasBeenSet() const { return m_configurationArnHasBeenSet; }
    template<typename ConfigurationArnT = Aws::String>
    void SetConfigurationArn(ConfigurationArnT&& value) { m_configurationArnHasBeenSet = true; m_configurationArn = std::forward<ConfigurationArnT>(value); }
    template<typename ConfigurationArnT = Aws::String>
    MatchmakingTicket& WithConfigurationArn(ConfigurationArnT&& value) { SetConfigurationArn(std::forward<ConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the matchmaking request.</p> <ul> <li> <p> <b>QUEUED</b> --
     * The matchmaking request has been received and is currently waiting to be
     * processed.</p> </li> <li> <p> <b>SEARCHING</b> -- The matchmaking request is
     * currently being processed. </p> </li> <li> <p> <b>REQUIRES_ACCEPTANCE</b> -- A
     * match has been proposed and the players must accept the match. This status is
     * used only with requests that use a matchmaking configuration with a player
     * acceptance requirement.</p> </li> <li> <p> <b>PLACING</b> -- The FlexMatch
     * engine has matched players and is in the process of placing a new game session
     * for the match.</p> </li> <li> <p> <b>COMPLETED</b> -- Players have been matched
     * and a game session is ready to host the players. A ticket in this state contains
     * the necessary connection information for players.</p> </li> <li> <p>
     * <b>FAILED</b> -- The matchmaking request was not completed.</p> </li> <li> <p>
     * <b>CANCELLED</b> -- The matchmaking request was canceled. This may be the result
     * of a <code>StopMatchmaking</code> operation or a proposed match that one or more
     * players failed to accept.</p> </li> <li> <p> <b>TIMED_OUT</b> -- The matchmaking
     * request was not successful within the duration specified in the matchmaking
     * configuration. </p> </li> </ul>  <p>Matchmaking requests that fail to
     * successfully complete (statuses FAILED, CANCELLED, TIMED_OUT) can be resubmitted
     * as new requests with new ticket IDs.</p> 
     */
    inline MatchmakingConfigurationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(MatchmakingConfigurationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline MatchmakingTicket& WithStatus(MatchmakingConfigurationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Code to explain the current status. For example, a status reason may indicate
     * when a ticket has returned to <code>SEARCHING</code> status after a proposed
     * match fails to receive player acceptances.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    MatchmakingTicket& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the current status.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    MatchmakingTicket& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time stamp indicating when this matchmaking request was received. Format is a
     * number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    MatchmakingTicket& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time stamp indicating when the matchmaking request stopped being processed
     * due to successful completion, timeout, or cancellation. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    MatchmakingTicket& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of <code>Player</code> objects, each representing a player to find
     * matches for. Players are identified by a unique player ID and may include
     * latency data for use during matchmaking. If the ticket is in status
     * <code>COMPLETED</code>, the <code>Player</code> objects include the team the
     * players were assigned to in the resulting match.</p>
     */
    inline const Aws::Vector<Player>& GetPlayers() const { return m_players; }
    inline bool PlayersHasBeenSet() const { return m_playersHasBeenSet; }
    template<typename PlayersT = Aws::Vector<Player>>
    void SetPlayers(PlayersT&& value) { m_playersHasBeenSet = true; m_players = std::forward<PlayersT>(value); }
    template<typename PlayersT = Aws::Vector<Player>>
    MatchmakingTicket& WithPlayers(PlayersT&& value) { SetPlayers(std::forward<PlayersT>(value)); return *this;}
    template<typename PlayersT = Player>
    MatchmakingTicket& AddPlayers(PlayersT&& value) { m_playersHasBeenSet = true; m_players.emplace_back(std::forward<PlayersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Connection information for a new game session. Once a match is made, the
     * FlexMatch engine creates a new game session for it. This information is added to
     * the matchmaking ticket, which you can be retrieve by calling <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeMatchmaking.html">DescribeMatchmaking</a>
     * .</p>
     */
    inline const GameSessionConnectionInfo& GetGameSessionConnectionInfo() const { return m_gameSessionConnectionInfo; }
    inline bool GameSessionConnectionInfoHasBeenSet() const { return m_gameSessionConnectionInfoHasBeenSet; }
    template<typename GameSessionConnectionInfoT = GameSessionConnectionInfo>
    void SetGameSessionConnectionInfo(GameSessionConnectionInfoT&& value) { m_gameSessionConnectionInfoHasBeenSet = true; m_gameSessionConnectionInfo = std::forward<GameSessionConnectionInfoT>(value); }
    template<typename GameSessionConnectionInfoT = GameSessionConnectionInfo>
    MatchmakingTicket& WithGameSessionConnectionInfo(GameSessionConnectionInfoT&& value) { SetGameSessionConnectionInfo(std::forward<GameSessionConnectionInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Average amount of time (in seconds) that players are currently waiting for a
     * match. If there is not enough recent data, this property may be empty.</p>
     */
    inline int GetEstimatedWaitTime() const { return m_estimatedWaitTime; }
    inline bool EstimatedWaitTimeHasBeenSet() const { return m_estimatedWaitTimeHasBeenSet; }
    inline void SetEstimatedWaitTime(int value) { m_estimatedWaitTimeHasBeenSet = true; m_estimatedWaitTime = value; }
    inline MatchmakingTicket& WithEstimatedWaitTime(int value) { SetEstimatedWaitTime(value); return *this;}
    ///@}
  private:

    Aws::String m_ticketId;
    bool m_ticketIdHasBeenSet = false;

    Aws::String m_configurationName;
    bool m_configurationNameHasBeenSet = false;

    Aws::String m_configurationArn;
    bool m_configurationArnHasBeenSet = false;

    MatchmakingConfigurationStatus m_status{MatchmakingConfigurationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Vector<Player> m_players;
    bool m_playersHasBeenSet = false;

    GameSessionConnectionInfo m_gameSessionConnectionInfo;
    bool m_gameSessionConnectionInfoHasBeenSet = false;

    int m_estimatedWaitTime{0};
    bool m_estimatedWaitTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
