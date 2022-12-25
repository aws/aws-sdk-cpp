﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/BackfillMode.h>
#include <aws/gamelift/model/FlexMatchMode.h>
#include <aws/gamelift/model/GameProperty.h>
#include <aws/gamelift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class CreateMatchmakingConfigurationRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API CreateMatchmakingConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMatchmakingConfiguration"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the matchmaking configuration. This name is used to
     * identify the configuration associated with a matchmaking request or ticket.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A unique identifier for the matchmaking configuration. This name is used to
     * identify the configuration associated with a matchmaking request or ticket.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A unique identifier for the matchmaking configuration. This name is used to
     * identify the configuration associated with a matchmaking request or ticket.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A unique identifier for the matchmaking configuration. This name is used to
     * identify the configuration associated with a matchmaking request or ticket.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A unique identifier for the matchmaking configuration. This name is used to
     * identify the configuration associated with a matchmaking request or ticket.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A unique identifier for the matchmaking configuration. This name is used to
     * identify the configuration associated with a matchmaking request or ticket.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A unique identifier for the matchmaking configuration. This name is used to
     * identify the configuration associated with a matchmaking request or ticket.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the matchmaking configuration. This name is used to
     * identify the configuration associated with a matchmaking request or ticket.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A human-readable description of the matchmaking configuration. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A human-readable description of the matchmaking configuration. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A human-readable description of the matchmaking configuration. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A human-readable description of the matchmaking configuration. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A human-readable description of the matchmaking configuration. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A human-readable description of the matchmaking configuration. </p>
     */
    inline CreateMatchmakingConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A human-readable description of the matchmaking configuration. </p>
     */
    inline CreateMatchmakingConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A human-readable description of the matchmaking configuration. </p>
     */
    inline CreateMatchmakingConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift game session queue resource and uniquely
     * identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesessionqueue/&lt;queue
     * name&gt;</code>. Queues can be located in any Region. Queues are used to start
     * new GameLift-hosted game sessions for matches that are created with this
     * matchmaking configuration. If <code>FlexMatchMode</code> is set to
     * <code>STANDALONE</code>, do not set this parameter. </p>
     */
    inline const Aws::Vector<Aws::String>& GetGameSessionQueueArns() const{ return m_gameSessionQueueArns; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift game session queue resource and uniquely
     * identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesessionqueue/&lt;queue
     * name&gt;</code>. Queues can be located in any Region. Queues are used to start
     * new GameLift-hosted game sessions for matches that are created with this
     * matchmaking configuration. If <code>FlexMatchMode</code> is set to
     * <code>STANDALONE</code>, do not set this parameter. </p>
     */
    inline bool GameSessionQueueArnsHasBeenSet() const { return m_gameSessionQueueArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift game session queue resource and uniquely
     * identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesessionqueue/&lt;queue
     * name&gt;</code>. Queues can be located in any Region. Queues are used to start
     * new GameLift-hosted game sessions for matches that are created with this
     * matchmaking configuration. If <code>FlexMatchMode</code> is set to
     * <code>STANDALONE</code>, do not set this parameter. </p>
     */
    inline void SetGameSessionQueueArns(const Aws::Vector<Aws::String>& value) { m_gameSessionQueueArnsHasBeenSet = true; m_gameSessionQueueArns = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift game session queue resource and uniquely
     * identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesessionqueue/&lt;queue
     * name&gt;</code>. Queues can be located in any Region. Queues are used to start
     * new GameLift-hosted game sessions for matches that are created with this
     * matchmaking configuration. If <code>FlexMatchMode</code> is set to
     * <code>STANDALONE</code>, do not set this parameter. </p>
     */
    inline void SetGameSessionQueueArns(Aws::Vector<Aws::String>&& value) { m_gameSessionQueueArnsHasBeenSet = true; m_gameSessionQueueArns = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift game session queue resource and uniquely
     * identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesessionqueue/&lt;queue
     * name&gt;</code>. Queues can be located in any Region. Queues are used to start
     * new GameLift-hosted game sessions for matches that are created with this
     * matchmaking configuration. If <code>FlexMatchMode</code> is set to
     * <code>STANDALONE</code>, do not set this parameter. </p>
     */
    inline CreateMatchmakingConfigurationRequest& WithGameSessionQueueArns(const Aws::Vector<Aws::String>& value) { SetGameSessionQueueArns(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift game session queue resource and uniquely
     * identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesessionqueue/&lt;queue
     * name&gt;</code>. Queues can be located in any Region. Queues are used to start
     * new GameLift-hosted game sessions for matches that are created with this
     * matchmaking configuration. If <code>FlexMatchMode</code> is set to
     * <code>STANDALONE</code>, do not set this parameter. </p>
     */
    inline CreateMatchmakingConfigurationRequest& WithGameSessionQueueArns(Aws::Vector<Aws::String>&& value) { SetGameSessionQueueArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift game session queue resource and uniquely
     * identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesessionqueue/&lt;queue
     * name&gt;</code>. Queues can be located in any Region. Queues are used to start
     * new GameLift-hosted game sessions for matches that are created with this
     * matchmaking configuration. If <code>FlexMatchMode</code> is set to
     * <code>STANDALONE</code>, do not set this parameter. </p>
     */
    inline CreateMatchmakingConfigurationRequest& AddGameSessionQueueArns(const Aws::String& value) { m_gameSessionQueueArnsHasBeenSet = true; m_gameSessionQueueArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift game session queue resource and uniquely
     * identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesessionqueue/&lt;queue
     * name&gt;</code>. Queues can be located in any Region. Queues are used to start
     * new GameLift-hosted game sessions for matches that are created with this
     * matchmaking configuration. If <code>FlexMatchMode</code> is set to
     * <code>STANDALONE</code>, do not set this parameter. </p>
     */
    inline CreateMatchmakingConfigurationRequest& AddGameSessionQueueArns(Aws::String&& value) { m_gameSessionQueueArnsHasBeenSet = true; m_gameSessionQueueArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift game session queue resource and uniquely
     * identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesessionqueue/&lt;queue
     * name&gt;</code>. Queues can be located in any Region. Queues are used to start
     * new GameLift-hosted game sessions for matches that are created with this
     * matchmaking configuration. If <code>FlexMatchMode</code> is set to
     * <code>STANDALONE</code>, do not set this parameter. </p>
     */
    inline CreateMatchmakingConfigurationRequest& AddGameSessionQueueArns(const char* value) { m_gameSessionQueueArnsHasBeenSet = true; m_gameSessionQueueArns.push_back(value); return *this; }


    /**
     * <p>The maximum duration, in seconds, that a matchmaking ticket can remain in
     * process before timing out. Requests that fail due to timing out can be
     * resubmitted as needed.</p>
     */
    inline int GetRequestTimeoutSeconds() const{ return m_requestTimeoutSeconds; }

    /**
     * <p>The maximum duration, in seconds, that a matchmaking ticket can remain in
     * process before timing out. Requests that fail due to timing out can be
     * resubmitted as needed.</p>
     */
    inline bool RequestTimeoutSecondsHasBeenSet() const { return m_requestTimeoutSecondsHasBeenSet; }

    /**
     * <p>The maximum duration, in seconds, that a matchmaking ticket can remain in
     * process before timing out. Requests that fail due to timing out can be
     * resubmitted as needed.</p>
     */
    inline void SetRequestTimeoutSeconds(int value) { m_requestTimeoutSecondsHasBeenSet = true; m_requestTimeoutSeconds = value; }

    /**
     * <p>The maximum duration, in seconds, that a matchmaking ticket can remain in
     * process before timing out. Requests that fail due to timing out can be
     * resubmitted as needed.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithRequestTimeoutSeconds(int value) { SetRequestTimeoutSeconds(value); return *this;}


    /**
     * <p>The length of time (in seconds) to wait for players to accept a proposed
     * match, if acceptance is required. </p>
     */
    inline int GetAcceptanceTimeoutSeconds() const{ return m_acceptanceTimeoutSeconds; }

    /**
     * <p>The length of time (in seconds) to wait for players to accept a proposed
     * match, if acceptance is required. </p>
     */
    inline bool AcceptanceTimeoutSecondsHasBeenSet() const { return m_acceptanceTimeoutSecondsHasBeenSet; }

    /**
     * <p>The length of time (in seconds) to wait for players to accept a proposed
     * match, if acceptance is required. </p>
     */
    inline void SetAcceptanceTimeoutSeconds(int value) { m_acceptanceTimeoutSecondsHasBeenSet = true; m_acceptanceTimeoutSeconds = value; }

    /**
     * <p>The length of time (in seconds) to wait for players to accept a proposed
     * match, if acceptance is required. </p>
     */
    inline CreateMatchmakingConfigurationRequest& WithAcceptanceTimeoutSeconds(int value) { SetAcceptanceTimeoutSeconds(value); return *this;}


    /**
     * <p>A flag that determines whether a match that was created with this
     * configuration must be accepted by the matched players. To require acceptance,
     * set to <code>TRUE</code>. With this option enabled, matchmaking tickets use the
     * status <code>REQUIRES_ACCEPTANCE</code> to indicate when a completed potential
     * match is waiting for player acceptance. </p>
     */
    inline bool GetAcceptanceRequired() const{ return m_acceptanceRequired; }

    /**
     * <p>A flag that determines whether a match that was created with this
     * configuration must be accepted by the matched players. To require acceptance,
     * set to <code>TRUE</code>. With this option enabled, matchmaking tickets use the
     * status <code>REQUIRES_ACCEPTANCE</code> to indicate when a completed potential
     * match is waiting for player acceptance. </p>
     */
    inline bool AcceptanceRequiredHasBeenSet() const { return m_acceptanceRequiredHasBeenSet; }

    /**
     * <p>A flag that determines whether a match that was created with this
     * configuration must be accepted by the matched players. To require acceptance,
     * set to <code>TRUE</code>. With this option enabled, matchmaking tickets use the
     * status <code>REQUIRES_ACCEPTANCE</code> to indicate when a completed potential
     * match is waiting for player acceptance. </p>
     */
    inline void SetAcceptanceRequired(bool value) { m_acceptanceRequiredHasBeenSet = true; m_acceptanceRequired = value; }

    /**
     * <p>A flag that determines whether a match that was created with this
     * configuration must be accepted by the matched players. To require acceptance,
     * set to <code>TRUE</code>. With this option enabled, matchmaking tickets use the
     * status <code>REQUIRES_ACCEPTANCE</code> to indicate when a completed potential
     * match is waiting for player acceptance. </p>
     */
    inline CreateMatchmakingConfigurationRequest& WithAcceptanceRequired(bool value) { SetAcceptanceRequired(value); return *this;}


    /**
     * <p>A unique identifier for the matchmaking rule set to use with this
     * configuration. You can use either the rule set name or ARN value. A matchmaking
     * configuration can only use rule sets that are defined in the same Region.</p>
     */
    inline const Aws::String& GetRuleSetName() const{ return m_ruleSetName; }

    /**
     * <p>A unique identifier for the matchmaking rule set to use with this
     * configuration. You can use either the rule set name or ARN value. A matchmaking
     * configuration can only use rule sets that are defined in the same Region.</p>
     */
    inline bool RuleSetNameHasBeenSet() const { return m_ruleSetNameHasBeenSet; }

    /**
     * <p>A unique identifier for the matchmaking rule set to use with this
     * configuration. You can use either the rule set name or ARN value. A matchmaking
     * configuration can only use rule sets that are defined in the same Region.</p>
     */
    inline void SetRuleSetName(const Aws::String& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = value; }

    /**
     * <p>A unique identifier for the matchmaking rule set to use with this
     * configuration. You can use either the rule set name or ARN value. A matchmaking
     * configuration can only use rule sets that are defined in the same Region.</p>
     */
    inline void SetRuleSetName(Aws::String&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = std::move(value); }

    /**
     * <p>A unique identifier for the matchmaking rule set to use with this
     * configuration. You can use either the rule set name or ARN value. A matchmaking
     * configuration can only use rule sets that are defined in the same Region.</p>
     */
    inline void SetRuleSetName(const char* value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName.assign(value); }

    /**
     * <p>A unique identifier for the matchmaking rule set to use with this
     * configuration. You can use either the rule set name or ARN value. A matchmaking
     * configuration can only use rule sets that are defined in the same Region.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithRuleSetName(const Aws::String& value) { SetRuleSetName(value); return *this;}

    /**
     * <p>A unique identifier for the matchmaking rule set to use with this
     * configuration. You can use either the rule set name or ARN value. A matchmaking
     * configuration can only use rule sets that are defined in the same Region.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithRuleSetName(Aws::String&& value) { SetRuleSetName(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the matchmaking rule set to use with this
     * configuration. You can use either the rule set name or ARN value. A matchmaking
     * configuration can only use rule sets that are defined in the same Region.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithRuleSetName(const char* value) { SetRuleSetName(value); return *this;}


    /**
     * <p>An SNS topic ARN that is set up to receive matchmaking notifications. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-notification.html">
     * Setting up notifications for matchmaking</a> for more information.</p>
     */
    inline const Aws::String& GetNotificationTarget() const{ return m_notificationTarget; }

    /**
     * <p>An SNS topic ARN that is set up to receive matchmaking notifications. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-notification.html">
     * Setting up notifications for matchmaking</a> for more information.</p>
     */
    inline bool NotificationTargetHasBeenSet() const { return m_notificationTargetHasBeenSet; }

    /**
     * <p>An SNS topic ARN that is set up to receive matchmaking notifications. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-notification.html">
     * Setting up notifications for matchmaking</a> for more information.</p>
     */
    inline void SetNotificationTarget(const Aws::String& value) { m_notificationTargetHasBeenSet = true; m_notificationTarget = value; }

    /**
     * <p>An SNS topic ARN that is set up to receive matchmaking notifications. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-notification.html">
     * Setting up notifications for matchmaking</a> for more information.</p>
     */
    inline void SetNotificationTarget(Aws::String&& value) { m_notificationTargetHasBeenSet = true; m_notificationTarget = std::move(value); }

    /**
     * <p>An SNS topic ARN that is set up to receive matchmaking notifications. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-notification.html">
     * Setting up notifications for matchmaking</a> for more information.</p>
     */
    inline void SetNotificationTarget(const char* value) { m_notificationTargetHasBeenSet = true; m_notificationTarget.assign(value); }

    /**
     * <p>An SNS topic ARN that is set up to receive matchmaking notifications. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-notification.html">
     * Setting up notifications for matchmaking</a> for more information.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithNotificationTarget(const Aws::String& value) { SetNotificationTarget(value); return *this;}

    /**
     * <p>An SNS topic ARN that is set up to receive matchmaking notifications. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-notification.html">
     * Setting up notifications for matchmaking</a> for more information.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithNotificationTarget(Aws::String&& value) { SetNotificationTarget(std::move(value)); return *this;}

    /**
     * <p>An SNS topic ARN that is set up to receive matchmaking notifications. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-notification.html">
     * Setting up notifications for matchmaking</a> for more information.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithNotificationTarget(const char* value) { SetNotificationTarget(value); return *this;}


    /**
     * <p>The number of player slots in a match to keep open for future players. For
     * example, if the configuration's rule set specifies a match for a single
     * 12-person team, and the additional player count is set to 2, only 10 players are
     * selected for the match. This parameter is not used if <code>FlexMatchMode</code>
     * is set to <code>STANDALONE</code>.</p>
     */
    inline int GetAdditionalPlayerCount() const{ return m_additionalPlayerCount; }

    /**
     * <p>The number of player slots in a match to keep open for future players. For
     * example, if the configuration's rule set specifies a match for a single
     * 12-person team, and the additional player count is set to 2, only 10 players are
     * selected for the match. This parameter is not used if <code>FlexMatchMode</code>
     * is set to <code>STANDALONE</code>.</p>
     */
    inline bool AdditionalPlayerCountHasBeenSet() const { return m_additionalPlayerCountHasBeenSet; }

    /**
     * <p>The number of player slots in a match to keep open for future players. For
     * example, if the configuration's rule set specifies a match for a single
     * 12-person team, and the additional player count is set to 2, only 10 players are
     * selected for the match. This parameter is not used if <code>FlexMatchMode</code>
     * is set to <code>STANDALONE</code>.</p>
     */
    inline void SetAdditionalPlayerCount(int value) { m_additionalPlayerCountHasBeenSet = true; m_additionalPlayerCount = value; }

    /**
     * <p>The number of player slots in a match to keep open for future players. For
     * example, if the configuration's rule set specifies a match for a single
     * 12-person team, and the additional player count is set to 2, only 10 players are
     * selected for the match. This parameter is not used if <code>FlexMatchMode</code>
     * is set to <code>STANDALONE</code>.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithAdditionalPlayerCount(int value) { SetAdditionalPlayerCount(value); return *this;}


    /**
     * <p>Information to be added to all events related to this matchmaking
     * configuration. </p>
     */
    inline const Aws::String& GetCustomEventData() const{ return m_customEventData; }

    /**
     * <p>Information to be added to all events related to this matchmaking
     * configuration. </p>
     */
    inline bool CustomEventDataHasBeenSet() const { return m_customEventDataHasBeenSet; }

    /**
     * <p>Information to be added to all events related to this matchmaking
     * configuration. </p>
     */
    inline void SetCustomEventData(const Aws::String& value) { m_customEventDataHasBeenSet = true; m_customEventData = value; }

    /**
     * <p>Information to be added to all events related to this matchmaking
     * configuration. </p>
     */
    inline void SetCustomEventData(Aws::String&& value) { m_customEventDataHasBeenSet = true; m_customEventData = std::move(value); }

    /**
     * <p>Information to be added to all events related to this matchmaking
     * configuration. </p>
     */
    inline void SetCustomEventData(const char* value) { m_customEventDataHasBeenSet = true; m_customEventData.assign(value); }

    /**
     * <p>Information to be added to all events related to this matchmaking
     * configuration. </p>
     */
    inline CreateMatchmakingConfigurationRequest& WithCustomEventData(const Aws::String& value) { SetCustomEventData(value); return *this;}

    /**
     * <p>Information to be added to all events related to this matchmaking
     * configuration. </p>
     */
    inline CreateMatchmakingConfigurationRequest& WithCustomEventData(Aws::String&& value) { SetCustomEventData(std::move(value)); return *this;}

    /**
     * <p>Information to be added to all events related to this matchmaking
     * configuration. </p>
     */
    inline CreateMatchmakingConfigurationRequest& WithCustomEventData(const char* value) { SetCustomEventData(value); return *this;}


    /**
     * <p>A set of custom properties for a game session, formatted as key:value pairs.
     * These properties are passed to a game server process with a request to start a
     * new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new
     * <code>GameSession</code> object that is created for a successful match. This
     * parameter is not used if <code>FlexMatchMode</code> is set to
     * <code>STANDALONE</code>.</p>
     */
    inline const Aws::Vector<GameProperty>& GetGameProperties() const{ return m_gameProperties; }

    /**
     * <p>A set of custom properties for a game session, formatted as key:value pairs.
     * These properties are passed to a game server process with a request to start a
     * new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new
     * <code>GameSession</code> object that is created for a successful match. This
     * parameter is not used if <code>FlexMatchMode</code> is set to
     * <code>STANDALONE</code>.</p>
     */
    inline bool GamePropertiesHasBeenSet() const { return m_gamePropertiesHasBeenSet; }

    /**
     * <p>A set of custom properties for a game session, formatted as key:value pairs.
     * These properties are passed to a game server process with a request to start a
     * new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new
     * <code>GameSession</code> object that is created for a successful match. This
     * parameter is not used if <code>FlexMatchMode</code> is set to
     * <code>STANDALONE</code>.</p>
     */
    inline void SetGameProperties(const Aws::Vector<GameProperty>& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties = value; }

    /**
     * <p>A set of custom properties for a game session, formatted as key:value pairs.
     * These properties are passed to a game server process with a request to start a
     * new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new
     * <code>GameSession</code> object that is created for a successful match. This
     * parameter is not used if <code>FlexMatchMode</code> is set to
     * <code>STANDALONE</code>.</p>
     */
    inline void SetGameProperties(Aws::Vector<GameProperty>&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties = std::move(value); }

    /**
     * <p>A set of custom properties for a game session, formatted as key:value pairs.
     * These properties are passed to a game server process with a request to start a
     * new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new
     * <code>GameSession</code> object that is created for a successful match. This
     * parameter is not used if <code>FlexMatchMode</code> is set to
     * <code>STANDALONE</code>.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithGameProperties(const Aws::Vector<GameProperty>& value) { SetGameProperties(value); return *this;}

    /**
     * <p>A set of custom properties for a game session, formatted as key:value pairs.
     * These properties are passed to a game server process with a request to start a
     * new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new
     * <code>GameSession</code> object that is created for a successful match. This
     * parameter is not used if <code>FlexMatchMode</code> is set to
     * <code>STANDALONE</code>.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithGameProperties(Aws::Vector<GameProperty>&& value) { SetGameProperties(std::move(value)); return *this;}

    /**
     * <p>A set of custom properties for a game session, formatted as key:value pairs.
     * These properties are passed to a game server process with a request to start a
     * new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new
     * <code>GameSession</code> object that is created for a successful match. This
     * parameter is not used if <code>FlexMatchMode</code> is set to
     * <code>STANDALONE</code>.</p>
     */
    inline CreateMatchmakingConfigurationRequest& AddGameProperties(const GameProperty& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(value); return *this; }

    /**
     * <p>A set of custom properties for a game session, formatted as key:value pairs.
     * These properties are passed to a game server process with a request to start a
     * new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new
     * <code>GameSession</code> object that is created for a successful match. This
     * parameter is not used if <code>FlexMatchMode</code> is set to
     * <code>STANDALONE</code>.</p>
     */
    inline CreateMatchmakingConfigurationRequest& AddGameProperties(GameProperty&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(std::move(value)); return *this; }


    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process with a request to start a new game
     * session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new
     * <code>GameSession</code> object that is created for a successful match. This
     * parameter is not used if <code>FlexMatchMode</code> is set to
     * <code>STANDALONE</code>.</p>
     */
    inline const Aws::String& GetGameSessionData() const{ return m_gameSessionData; }

    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process with a request to start a new game
     * session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new
     * <code>GameSession</code> object that is created for a successful match. This
     * parameter is not used if <code>FlexMatchMode</code> is set to
     * <code>STANDALONE</code>.</p>
     */
    inline bool GameSessionDataHasBeenSet() const { return m_gameSessionDataHasBeenSet; }

    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process with a request to start a new game
     * session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new
     * <code>GameSession</code> object that is created for a successful match. This
     * parameter is not used if <code>FlexMatchMode</code> is set to
     * <code>STANDALONE</code>.</p>
     */
    inline void SetGameSessionData(const Aws::String& value) { m_gameSessionDataHasBeenSet = true; m_gameSessionData = value; }

    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process with a request to start a new game
     * session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new
     * <code>GameSession</code> object that is created for a successful match. This
     * parameter is not used if <code>FlexMatchMode</code> is set to
     * <code>STANDALONE</code>.</p>
     */
    inline void SetGameSessionData(Aws::String&& value) { m_gameSessionDataHasBeenSet = true; m_gameSessionData = std::move(value); }

    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process with a request to start a new game
     * session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new
     * <code>GameSession</code> object that is created for a successful match. This
     * parameter is not used if <code>FlexMatchMode</code> is set to
     * <code>STANDALONE</code>.</p>
     */
    inline void SetGameSessionData(const char* value) { m_gameSessionDataHasBeenSet = true; m_gameSessionData.assign(value); }

    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process with a request to start a new game
     * session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new
     * <code>GameSession</code> object that is created for a successful match. This
     * parameter is not used if <code>FlexMatchMode</code> is set to
     * <code>STANDALONE</code>.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithGameSessionData(const Aws::String& value) { SetGameSessionData(value); return *this;}

    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process with a request to start a new game
     * session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new
     * <code>GameSession</code> object that is created for a successful match. This
     * parameter is not used if <code>FlexMatchMode</code> is set to
     * <code>STANDALONE</code>.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithGameSessionData(Aws::String&& value) { SetGameSessionData(std::move(value)); return *this;}

    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process with a request to start a new game
     * session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new
     * <code>GameSession</code> object that is created for a successful match. This
     * parameter is not used if <code>FlexMatchMode</code> is set to
     * <code>STANDALONE</code>.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithGameSessionData(const char* value) { SetGameSessionData(value); return *this;}


    /**
     * <p>The method used to backfill game sessions that are created with this
     * matchmaking configuration. Specify <code>MANUAL</code> when your game manages
     * backfill requests manually or does not use the match backfill feature. Specify
     * <code>AUTOMATIC</code> to have GameLift create a backfill request whenever a
     * game session has one or more open slots. Learn more about manual and automatic
     * backfill in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-backfill.html">
     * Backfill Existing Games with FlexMatch</a>. Automatic backfill is not available
     * when <code>FlexMatchMode</code> is set to <code>STANDALONE</code>.</p>
     */
    inline const BackfillMode& GetBackfillMode() const{ return m_backfillMode; }

    /**
     * <p>The method used to backfill game sessions that are created with this
     * matchmaking configuration. Specify <code>MANUAL</code> when your game manages
     * backfill requests manually or does not use the match backfill feature. Specify
     * <code>AUTOMATIC</code> to have GameLift create a backfill request whenever a
     * game session has one or more open slots. Learn more about manual and automatic
     * backfill in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-backfill.html">
     * Backfill Existing Games with FlexMatch</a>. Automatic backfill is not available
     * when <code>FlexMatchMode</code> is set to <code>STANDALONE</code>.</p>
     */
    inline bool BackfillModeHasBeenSet() const { return m_backfillModeHasBeenSet; }

    /**
     * <p>The method used to backfill game sessions that are created with this
     * matchmaking configuration. Specify <code>MANUAL</code> when your game manages
     * backfill requests manually or does not use the match backfill feature. Specify
     * <code>AUTOMATIC</code> to have GameLift create a backfill request whenever a
     * game session has one or more open slots. Learn more about manual and automatic
     * backfill in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-backfill.html">
     * Backfill Existing Games with FlexMatch</a>. Automatic backfill is not available
     * when <code>FlexMatchMode</code> is set to <code>STANDALONE</code>.</p>
     */
    inline void SetBackfillMode(const BackfillMode& value) { m_backfillModeHasBeenSet = true; m_backfillMode = value; }

    /**
     * <p>The method used to backfill game sessions that are created with this
     * matchmaking configuration. Specify <code>MANUAL</code> when your game manages
     * backfill requests manually or does not use the match backfill feature. Specify
     * <code>AUTOMATIC</code> to have GameLift create a backfill request whenever a
     * game session has one or more open slots. Learn more about manual and automatic
     * backfill in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-backfill.html">
     * Backfill Existing Games with FlexMatch</a>. Automatic backfill is not available
     * when <code>FlexMatchMode</code> is set to <code>STANDALONE</code>.</p>
     */
    inline void SetBackfillMode(BackfillMode&& value) { m_backfillModeHasBeenSet = true; m_backfillMode = std::move(value); }

    /**
     * <p>The method used to backfill game sessions that are created with this
     * matchmaking configuration. Specify <code>MANUAL</code> when your game manages
     * backfill requests manually or does not use the match backfill feature. Specify
     * <code>AUTOMATIC</code> to have GameLift create a backfill request whenever a
     * game session has one or more open slots. Learn more about manual and automatic
     * backfill in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-backfill.html">
     * Backfill Existing Games with FlexMatch</a>. Automatic backfill is not available
     * when <code>FlexMatchMode</code> is set to <code>STANDALONE</code>.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithBackfillMode(const BackfillMode& value) { SetBackfillMode(value); return *this;}

    /**
     * <p>The method used to backfill game sessions that are created with this
     * matchmaking configuration. Specify <code>MANUAL</code> when your game manages
     * backfill requests manually or does not use the match backfill feature. Specify
     * <code>AUTOMATIC</code> to have GameLift create a backfill request whenever a
     * game session has one or more open slots. Learn more about manual and automatic
     * backfill in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-backfill.html">
     * Backfill Existing Games with FlexMatch</a>. Automatic backfill is not available
     * when <code>FlexMatchMode</code> is set to <code>STANDALONE</code>.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithBackfillMode(BackfillMode&& value) { SetBackfillMode(std::move(value)); return *this;}


    /**
     * <p>Indicates whether this matchmaking configuration is being used with GameLift
     * hosting or as a standalone matchmaking solution. </p> <ul> <li> <p>
     * <b>STANDALONE</b> - FlexMatch forms matches and returns match information,
     * including players and team assignments, in a <a
     * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-events.html#match-events-matchmakingsucceeded">
     * MatchmakingSucceeded</a> event.</p> </li> <li> <p> <b>WITH_QUEUE</b> - FlexMatch
     * forms matches and uses the specified GameLift queue to start a game session for
     * the match. </p> </li> </ul>
     */
    inline const FlexMatchMode& GetFlexMatchMode() const{ return m_flexMatchMode; }

    /**
     * <p>Indicates whether this matchmaking configuration is being used with GameLift
     * hosting or as a standalone matchmaking solution. </p> <ul> <li> <p>
     * <b>STANDALONE</b> - FlexMatch forms matches and returns match information,
     * including players and team assignments, in a <a
     * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-events.html#match-events-matchmakingsucceeded">
     * MatchmakingSucceeded</a> event.</p> </li> <li> <p> <b>WITH_QUEUE</b> - FlexMatch
     * forms matches and uses the specified GameLift queue to start a game session for
     * the match. </p> </li> </ul>
     */
    inline bool FlexMatchModeHasBeenSet() const { return m_flexMatchModeHasBeenSet; }

    /**
     * <p>Indicates whether this matchmaking configuration is being used with GameLift
     * hosting or as a standalone matchmaking solution. </p> <ul> <li> <p>
     * <b>STANDALONE</b> - FlexMatch forms matches and returns match information,
     * including players and team assignments, in a <a
     * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-events.html#match-events-matchmakingsucceeded">
     * MatchmakingSucceeded</a> event.</p> </li> <li> <p> <b>WITH_QUEUE</b> - FlexMatch
     * forms matches and uses the specified GameLift queue to start a game session for
     * the match. </p> </li> </ul>
     */
    inline void SetFlexMatchMode(const FlexMatchMode& value) { m_flexMatchModeHasBeenSet = true; m_flexMatchMode = value; }

    /**
     * <p>Indicates whether this matchmaking configuration is being used with GameLift
     * hosting or as a standalone matchmaking solution. </p> <ul> <li> <p>
     * <b>STANDALONE</b> - FlexMatch forms matches and returns match information,
     * including players and team assignments, in a <a
     * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-events.html#match-events-matchmakingsucceeded">
     * MatchmakingSucceeded</a> event.</p> </li> <li> <p> <b>WITH_QUEUE</b> - FlexMatch
     * forms matches and uses the specified GameLift queue to start a game session for
     * the match. </p> </li> </ul>
     */
    inline void SetFlexMatchMode(FlexMatchMode&& value) { m_flexMatchModeHasBeenSet = true; m_flexMatchMode = std::move(value); }

    /**
     * <p>Indicates whether this matchmaking configuration is being used with GameLift
     * hosting or as a standalone matchmaking solution. </p> <ul> <li> <p>
     * <b>STANDALONE</b> - FlexMatch forms matches and returns match information,
     * including players and team assignments, in a <a
     * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-events.html#match-events-matchmakingsucceeded">
     * MatchmakingSucceeded</a> event.</p> </li> <li> <p> <b>WITH_QUEUE</b> - FlexMatch
     * forms matches and uses the specified GameLift queue to start a game session for
     * the match. </p> </li> </ul>
     */
    inline CreateMatchmakingConfigurationRequest& WithFlexMatchMode(const FlexMatchMode& value) { SetFlexMatchMode(value); return *this;}

    /**
     * <p>Indicates whether this matchmaking configuration is being used with GameLift
     * hosting or as a standalone matchmaking solution. </p> <ul> <li> <p>
     * <b>STANDALONE</b> - FlexMatch forms matches and returns match information,
     * including players and team assignments, in a <a
     * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-events.html#match-events-matchmakingsucceeded">
     * MatchmakingSucceeded</a> event.</p> </li> <li> <p> <b>WITH_QUEUE</b> - FlexMatch
     * forms matches and uses the specified GameLift queue to start a game session for
     * the match. </p> </li> </ul>
     */
    inline CreateMatchmakingConfigurationRequest& WithFlexMatchMode(FlexMatchMode&& value) { SetFlexMatchMode(std::move(value)); return *this;}


    /**
     * <p>A list of labels to assign to the new matchmaking configuration resource.
     * Tags are developer-defined key-value pairs. Tagging Amazon Web Services
     * resources are useful for resource management, access management and cost
     * allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of labels to assign to the new matchmaking configuration resource.
     * Tags are developer-defined key-value pairs. Tagging Amazon Web Services
     * resources are useful for resource management, access management and cost
     * allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of labels to assign to the new matchmaking configuration resource.
     * Tags are developer-defined key-value pairs. Tagging Amazon Web Services
     * resources are useful for resource management, access management and cost
     * allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of labels to assign to the new matchmaking configuration resource.
     * Tags are developer-defined key-value pairs. Tagging Amazon Web Services
     * resources are useful for resource management, access management and cost
     * allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of labels to assign to the new matchmaking configuration resource.
     * Tags are developer-defined key-value pairs. Tagging Amazon Web Services
     * resources are useful for resource management, access management and cost
     * allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of labels to assign to the new matchmaking configuration resource.
     * Tags are developer-defined key-value pairs. Tagging Amazon Web Services
     * resources are useful for resource management, access management and cost
     * allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of labels to assign to the new matchmaking configuration resource.
     * Tags are developer-defined key-value pairs. Tagging Amazon Web Services
     * resources are useful for resource management, access management and cost
     * allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline CreateMatchmakingConfigurationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of labels to assign to the new matchmaking configuration resource.
     * Tags are developer-defined key-value pairs. Tagging Amazon Web Services
     * resources are useful for resource management, access management and cost
     * allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline CreateMatchmakingConfigurationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_gameSessionQueueArns;
    bool m_gameSessionQueueArnsHasBeenSet = false;

    int m_requestTimeoutSeconds;
    bool m_requestTimeoutSecondsHasBeenSet = false;

    int m_acceptanceTimeoutSeconds;
    bool m_acceptanceTimeoutSecondsHasBeenSet = false;

    bool m_acceptanceRequired;
    bool m_acceptanceRequiredHasBeenSet = false;

    Aws::String m_ruleSetName;
    bool m_ruleSetNameHasBeenSet = false;

    Aws::String m_notificationTarget;
    bool m_notificationTargetHasBeenSet = false;

    int m_additionalPlayerCount;
    bool m_additionalPlayerCountHasBeenSet = false;

    Aws::String m_customEventData;
    bool m_customEventDataHasBeenSet = false;

    Aws::Vector<GameProperty> m_gameProperties;
    bool m_gamePropertiesHasBeenSet = false;

    Aws::String m_gameSessionData;
    bool m_gameSessionDataHasBeenSet = false;

    BackfillMode m_backfillMode;
    bool m_backfillModeHasBeenSet = false;

    FlexMatchMode m_flexMatchMode;
    bool m_flexMatchModeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
