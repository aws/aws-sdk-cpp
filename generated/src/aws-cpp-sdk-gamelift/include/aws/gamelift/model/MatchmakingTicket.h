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
    AWS_GAMELIFT_API MatchmakingTicket();
    AWS_GAMELIFT_API MatchmakingTicket(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API MatchmakingTicket& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for a matchmaking ticket.</p>
     */
    inline const Aws::String& GetTicketId() const{ return m_ticketId; }

    /**
     * <p>A unique identifier for a matchmaking ticket.</p>
     */
    inline bool TicketIdHasBeenSet() const { return m_ticketIdHasBeenSet; }

    /**
     * <p>A unique identifier for a matchmaking ticket.</p>
     */
    inline void SetTicketId(const Aws::String& value) { m_ticketIdHasBeenSet = true; m_ticketId = value; }

    /**
     * <p>A unique identifier for a matchmaking ticket.</p>
     */
    inline void SetTicketId(Aws::String&& value) { m_ticketIdHasBeenSet = true; m_ticketId = std::move(value); }

    /**
     * <p>A unique identifier for a matchmaking ticket.</p>
     */
    inline void SetTicketId(const char* value) { m_ticketIdHasBeenSet = true; m_ticketId.assign(value); }

    /**
     * <p>A unique identifier for a matchmaking ticket.</p>
     */
    inline MatchmakingTicket& WithTicketId(const Aws::String& value) { SetTicketId(value); return *this;}

    /**
     * <p>A unique identifier for a matchmaking ticket.</p>
     */
    inline MatchmakingTicket& WithTicketId(Aws::String&& value) { SetTicketId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a matchmaking ticket.</p>
     */
    inline MatchmakingTicket& WithTicketId(const char* value) { SetTicketId(value); return *this;}


    /**
     * <p>Name of the matchmaking configuration that is used with this ticket.
     * Matchmaking configurations determine how players are grouped into a match and
     * how a new game session is created for the match.</p>
     */
    inline const Aws::String& GetConfigurationName() const{ return m_configurationName; }

    /**
     * <p>Name of the matchmaking configuration that is used with this ticket.
     * Matchmaking configurations determine how players are grouped into a match and
     * how a new game session is created for the match.</p>
     */
    inline bool ConfigurationNameHasBeenSet() const { return m_configurationNameHasBeenSet; }

    /**
     * <p>Name of the matchmaking configuration that is used with this ticket.
     * Matchmaking configurations determine how players are grouped into a match and
     * how a new game session is created for the match.</p>
     */
    inline void SetConfigurationName(const Aws::String& value) { m_configurationNameHasBeenSet = true; m_configurationName = value; }

    /**
     * <p>Name of the matchmaking configuration that is used with this ticket.
     * Matchmaking configurations determine how players are grouped into a match and
     * how a new game session is created for the match.</p>
     */
    inline void SetConfigurationName(Aws::String&& value) { m_configurationNameHasBeenSet = true; m_configurationName = std::move(value); }

    /**
     * <p>Name of the matchmaking configuration that is used with this ticket.
     * Matchmaking configurations determine how players are grouped into a match and
     * how a new game session is created for the match.</p>
     */
    inline void SetConfigurationName(const char* value) { m_configurationNameHasBeenSet = true; m_configurationName.assign(value); }

    /**
     * <p>Name of the matchmaking configuration that is used with this ticket.
     * Matchmaking configurations determine how players are grouped into a match and
     * how a new game session is created for the match.</p>
     */
    inline MatchmakingTicket& WithConfigurationName(const Aws::String& value) { SetConfigurationName(value); return *this;}

    /**
     * <p>Name of the matchmaking configuration that is used with this ticket.
     * Matchmaking configurations determine how players are grouped into a match and
     * how a new game session is created for the match.</p>
     */
    inline MatchmakingTicket& WithConfigurationName(Aws::String&& value) { SetConfigurationName(std::move(value)); return *this;}

    /**
     * <p>Name of the matchmaking configuration that is used with this ticket.
     * Matchmaking configurations determine how players are grouped into a match and
     * how a new game session is created for the match.</p>
     */
    inline MatchmakingTicket& WithConfigurationName(const char* value) { SetConfigurationName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift matchmaking configuration resource that is used
     * with this ticket.</p>
     */
    inline const Aws::String& GetConfigurationArn() const{ return m_configurationArn; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift matchmaking configuration resource that is used
     * with this ticket.</p>
     */
    inline bool ConfigurationArnHasBeenSet() const { return m_configurationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift matchmaking configuration resource that is used
     * with this ticket.</p>
     */
    inline void SetConfigurationArn(const Aws::String& value) { m_configurationArnHasBeenSet = true; m_configurationArn = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift matchmaking configuration resource that is used
     * with this ticket.</p>
     */
    inline void SetConfigurationArn(Aws::String&& value) { m_configurationArnHasBeenSet = true; m_configurationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift matchmaking configuration resource that is used
     * with this ticket.</p>
     */
    inline void SetConfigurationArn(const char* value) { m_configurationArnHasBeenSet = true; m_configurationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift matchmaking configuration resource that is used
     * with this ticket.</p>
     */
    inline MatchmakingTicket& WithConfigurationArn(const Aws::String& value) { SetConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift matchmaking configuration resource that is used
     * with this ticket.</p>
     */
    inline MatchmakingTicket& WithConfigurationArn(Aws::String&& value) { SetConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift matchmaking configuration resource that is used
     * with this ticket.</p>
     */
    inline MatchmakingTicket& WithConfigurationArn(const char* value) { SetConfigurationArn(value); return *this;}


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
    inline const MatchmakingConfigurationStatus& GetStatus() const{ return m_status; }

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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

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
    inline void SetStatus(const MatchmakingConfigurationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

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
    inline void SetStatus(MatchmakingConfigurationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

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
    inline MatchmakingTicket& WithStatus(const MatchmakingConfigurationStatus& value) { SetStatus(value); return *this;}

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
    inline MatchmakingTicket& WithStatus(MatchmakingConfigurationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Code to explain the current status. For example, a status reason may indicate
     * when a ticket has returned to <code>SEARCHING</code> status after a proposed
     * match fails to receive player acceptances.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>Code to explain the current status. For example, a status reason may indicate
     * when a ticket has returned to <code>SEARCHING</code> status after a proposed
     * match fails to receive player acceptances.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>Code to explain the current status. For example, a status reason may indicate
     * when a ticket has returned to <code>SEARCHING</code> status after a proposed
     * match fails to receive player acceptances.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>Code to explain the current status. For example, a status reason may indicate
     * when a ticket has returned to <code>SEARCHING</code> status after a proposed
     * match fails to receive player acceptances.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>Code to explain the current status. For example, a status reason may indicate
     * when a ticket has returned to <code>SEARCHING</code> status after a proposed
     * match fails to receive player acceptances.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>Code to explain the current status. For example, a status reason may indicate
     * when a ticket has returned to <code>SEARCHING</code> status after a proposed
     * match fails to receive player acceptances.</p>
     */
    inline MatchmakingTicket& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>Code to explain the current status. For example, a status reason may indicate
     * when a ticket has returned to <code>SEARCHING</code> status after a proposed
     * match fails to receive player acceptances.</p>
     */
    inline MatchmakingTicket& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>Code to explain the current status. For example, a status reason may indicate
     * when a ticket has returned to <code>SEARCHING</code> status after a proposed
     * match fails to receive player acceptances.</p>
     */
    inline MatchmakingTicket& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>Additional information about the current status.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>Additional information about the current status.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>Additional information about the current status.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>Additional information about the current status.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>Additional information about the current status.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>Additional information about the current status.</p>
     */
    inline MatchmakingTicket& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>Additional information about the current status.</p>
     */
    inline MatchmakingTicket& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>Additional information about the current status.</p>
     */
    inline MatchmakingTicket& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>Time stamp indicating when this matchmaking request was received. Format is a
     * number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>Time stamp indicating when this matchmaking request was received. Format is a
     * number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>Time stamp indicating when this matchmaking request was received. Format is a
     * number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>Time stamp indicating when this matchmaking request was received. Format is a
     * number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>Time stamp indicating when this matchmaking request was received. Format is a
     * number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline MatchmakingTicket& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this matchmaking request was received. Format is a
     * number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline MatchmakingTicket& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>Time stamp indicating when the matchmaking request stopped being processed
     * due to successful completion, timeout, or cancellation. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>Time stamp indicating when the matchmaking request stopped being processed
     * due to successful completion, timeout, or cancellation. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>Time stamp indicating when the matchmaking request stopped being processed
     * due to successful completion, timeout, or cancellation. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>Time stamp indicating when the matchmaking request stopped being processed
     * due to successful completion, timeout, or cancellation. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>Time stamp indicating when the matchmaking request stopped being processed
     * due to successful completion, timeout, or cancellation. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline MatchmakingTicket& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>Time stamp indicating when the matchmaking request stopped being processed
     * due to successful completion, timeout, or cancellation. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline MatchmakingTicket& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>A set of <code>Player</code> objects, each representing a player to find
     * matches for. Players are identified by a unique player ID and may include
     * latency data for use during matchmaking. If the ticket is in status
     * <code>COMPLETED</code>, the <code>Player</code> objects include the team the
     * players were assigned to in the resulting match.</p>
     */
    inline const Aws::Vector<Player>& GetPlayers() const{ return m_players; }

    /**
     * <p>A set of <code>Player</code> objects, each representing a player to find
     * matches for. Players are identified by a unique player ID and may include
     * latency data for use during matchmaking. If the ticket is in status
     * <code>COMPLETED</code>, the <code>Player</code> objects include the team the
     * players were assigned to in the resulting match.</p>
     */
    inline bool PlayersHasBeenSet() const { return m_playersHasBeenSet; }

    /**
     * <p>A set of <code>Player</code> objects, each representing a player to find
     * matches for. Players are identified by a unique player ID and may include
     * latency data for use during matchmaking. If the ticket is in status
     * <code>COMPLETED</code>, the <code>Player</code> objects include the team the
     * players were assigned to in the resulting match.</p>
     */
    inline void SetPlayers(const Aws::Vector<Player>& value) { m_playersHasBeenSet = true; m_players = value; }

    /**
     * <p>A set of <code>Player</code> objects, each representing a player to find
     * matches for. Players are identified by a unique player ID and may include
     * latency data for use during matchmaking. If the ticket is in status
     * <code>COMPLETED</code>, the <code>Player</code> objects include the team the
     * players were assigned to in the resulting match.</p>
     */
    inline void SetPlayers(Aws::Vector<Player>&& value) { m_playersHasBeenSet = true; m_players = std::move(value); }

    /**
     * <p>A set of <code>Player</code> objects, each representing a player to find
     * matches for. Players are identified by a unique player ID and may include
     * latency data for use during matchmaking. If the ticket is in status
     * <code>COMPLETED</code>, the <code>Player</code> objects include the team the
     * players were assigned to in the resulting match.</p>
     */
    inline MatchmakingTicket& WithPlayers(const Aws::Vector<Player>& value) { SetPlayers(value); return *this;}

    /**
     * <p>A set of <code>Player</code> objects, each representing a player to find
     * matches for. Players are identified by a unique player ID and may include
     * latency data for use during matchmaking. If the ticket is in status
     * <code>COMPLETED</code>, the <code>Player</code> objects include the team the
     * players were assigned to in the resulting match.</p>
     */
    inline MatchmakingTicket& WithPlayers(Aws::Vector<Player>&& value) { SetPlayers(std::move(value)); return *this;}

    /**
     * <p>A set of <code>Player</code> objects, each representing a player to find
     * matches for. Players are identified by a unique player ID and may include
     * latency data for use during matchmaking. If the ticket is in status
     * <code>COMPLETED</code>, the <code>Player</code> objects include the team the
     * players were assigned to in the resulting match.</p>
     */
    inline MatchmakingTicket& AddPlayers(const Player& value) { m_playersHasBeenSet = true; m_players.push_back(value); return *this; }

    /**
     * <p>A set of <code>Player</code> objects, each representing a player to find
     * matches for. Players are identified by a unique player ID and may include
     * latency data for use during matchmaking. If the ticket is in status
     * <code>COMPLETED</code>, the <code>Player</code> objects include the team the
     * players were assigned to in the resulting match.</p>
     */
    inline MatchmakingTicket& AddPlayers(Player&& value) { m_playersHasBeenSet = true; m_players.push_back(std::move(value)); return *this; }


    /**
     * <p>Connection information for a new game session. Once a match is made, the
     * FlexMatch engine creates a new game session for it. This information is added to
     * the matchmaking ticket, which you can be retrieve by calling <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeMatchmaking.html">DescribeMatchmaking</a>
     * .</p>
     */
    inline const GameSessionConnectionInfo& GetGameSessionConnectionInfo() const{ return m_gameSessionConnectionInfo; }

    /**
     * <p>Connection information for a new game session. Once a match is made, the
     * FlexMatch engine creates a new game session for it. This information is added to
     * the matchmaking ticket, which you can be retrieve by calling <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeMatchmaking.html">DescribeMatchmaking</a>
     * .</p>
     */
    inline bool GameSessionConnectionInfoHasBeenSet() const { return m_gameSessionConnectionInfoHasBeenSet; }

    /**
     * <p>Connection information for a new game session. Once a match is made, the
     * FlexMatch engine creates a new game session for it. This information is added to
     * the matchmaking ticket, which you can be retrieve by calling <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeMatchmaking.html">DescribeMatchmaking</a>
     * .</p>
     */
    inline void SetGameSessionConnectionInfo(const GameSessionConnectionInfo& value) { m_gameSessionConnectionInfoHasBeenSet = true; m_gameSessionConnectionInfo = value; }

    /**
     * <p>Connection information for a new game session. Once a match is made, the
     * FlexMatch engine creates a new game session for it. This information is added to
     * the matchmaking ticket, which you can be retrieve by calling <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeMatchmaking.html">DescribeMatchmaking</a>
     * .</p>
     */
    inline void SetGameSessionConnectionInfo(GameSessionConnectionInfo&& value) { m_gameSessionConnectionInfoHasBeenSet = true; m_gameSessionConnectionInfo = std::move(value); }

    /**
     * <p>Connection information for a new game session. Once a match is made, the
     * FlexMatch engine creates a new game session for it. This information is added to
     * the matchmaking ticket, which you can be retrieve by calling <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeMatchmaking.html">DescribeMatchmaking</a>
     * .</p>
     */
    inline MatchmakingTicket& WithGameSessionConnectionInfo(const GameSessionConnectionInfo& value) { SetGameSessionConnectionInfo(value); return *this;}

    /**
     * <p>Connection information for a new game session. Once a match is made, the
     * FlexMatch engine creates a new game session for it. This information is added to
     * the matchmaking ticket, which you can be retrieve by calling <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeMatchmaking.html">DescribeMatchmaking</a>
     * .</p>
     */
    inline MatchmakingTicket& WithGameSessionConnectionInfo(GameSessionConnectionInfo&& value) { SetGameSessionConnectionInfo(std::move(value)); return *this;}


    /**
     * <p>Average amount of time (in seconds) that players are currently waiting for a
     * match. If there is not enough recent data, this property may be empty.</p>
     */
    inline int GetEstimatedWaitTime() const{ return m_estimatedWaitTime; }

    /**
     * <p>Average amount of time (in seconds) that players are currently waiting for a
     * match. If there is not enough recent data, this property may be empty.</p>
     */
    inline bool EstimatedWaitTimeHasBeenSet() const { return m_estimatedWaitTimeHasBeenSet; }

    /**
     * <p>Average amount of time (in seconds) that players are currently waiting for a
     * match. If there is not enough recent data, this property may be empty.</p>
     */
    inline void SetEstimatedWaitTime(int value) { m_estimatedWaitTimeHasBeenSet = true; m_estimatedWaitTime = value; }

    /**
     * <p>Average amount of time (in seconds) that players are currently waiting for a
     * match. If there is not enough recent data, this property may be empty.</p>
     */
    inline MatchmakingTicket& WithEstimatedWaitTime(int value) { SetEstimatedWaitTime(value); return *this;}

  private:

    Aws::String m_ticketId;
    bool m_ticketIdHasBeenSet = false;

    Aws::String m_configurationName;
    bool m_configurationNameHasBeenSet = false;

    Aws::String m_configurationArn;
    bool m_configurationArnHasBeenSet = false;

    MatchmakingConfigurationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::Vector<Player> m_players;
    bool m_playersHasBeenSet = false;

    GameSessionConnectionInfo m_gameSessionConnectionInfo;
    bool m_gameSessionConnectionInfoHasBeenSet = false;

    int m_estimatedWaitTime;
    bool m_estimatedWaitTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
