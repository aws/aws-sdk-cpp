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
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/BackfillMode.h>
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
   * <p>Represents the input for a request action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateMatchmakingConfigurationInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API CreateMatchmakingConfigurationRequest : public GameLiftRequest
  {
  public:
    CreateMatchmakingConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMatchmakingConfiguration"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for a matchmaking configuration. This name is used to
     * identify the configuration associated with a matchmaking request or ticket.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A unique identifier for a matchmaking configuration. This name is used to
     * identify the configuration associated with a matchmaking request or ticket.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A unique identifier for a matchmaking configuration. This name is used to
     * identify the configuration associated with a matchmaking request or ticket.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A unique identifier for a matchmaking configuration. This name is used to
     * identify the configuration associated with a matchmaking request or ticket.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A unique identifier for a matchmaking configuration. This name is used to
     * identify the configuration associated with a matchmaking request or ticket.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A unique identifier for a matchmaking configuration. This name is used to
     * identify the configuration associated with a matchmaking request or ticket.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A unique identifier for a matchmaking configuration. This name is used to
     * identify the configuration associated with a matchmaking request or ticket.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a matchmaking configuration. This name is used to
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
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>)
     * that is assigned to a GameLift game session queue resource and uniquely
     * identifies it. ARNs are unique across all Regions. These queues are used when
     * placing game sessions for matches that are created with this matchmaking
     * configuration. Queues can be located in any Region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGameSessionQueueArns() const{ return m_gameSessionQueueArns; }

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>)
     * that is assigned to a GameLift game session queue resource and uniquely
     * identifies it. ARNs are unique across all Regions. These queues are used when
     * placing game sessions for matches that are created with this matchmaking
     * configuration. Queues can be located in any Region.</p>
     */
    inline bool GameSessionQueueArnsHasBeenSet() const { return m_gameSessionQueueArnsHasBeenSet; }

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>)
     * that is assigned to a GameLift game session queue resource and uniquely
     * identifies it. ARNs are unique across all Regions. These queues are used when
     * placing game sessions for matches that are created with this matchmaking
     * configuration. Queues can be located in any Region.</p>
     */
    inline void SetGameSessionQueueArns(const Aws::Vector<Aws::String>& value) { m_gameSessionQueueArnsHasBeenSet = true; m_gameSessionQueueArns = value; }

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>)
     * that is assigned to a GameLift game session queue resource and uniquely
     * identifies it. ARNs are unique across all Regions. These queues are used when
     * placing game sessions for matches that are created with this matchmaking
     * configuration. Queues can be located in any Region.</p>
     */
    inline void SetGameSessionQueueArns(Aws::Vector<Aws::String>&& value) { m_gameSessionQueueArnsHasBeenSet = true; m_gameSessionQueueArns = std::move(value); }

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>)
     * that is assigned to a GameLift game session queue resource and uniquely
     * identifies it. ARNs are unique across all Regions. These queues are used when
     * placing game sessions for matches that are created with this matchmaking
     * configuration. Queues can be located in any Region.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithGameSessionQueueArns(const Aws::Vector<Aws::String>& value) { SetGameSessionQueueArns(value); return *this;}

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>)
     * that is assigned to a GameLift game session queue resource and uniquely
     * identifies it. ARNs are unique across all Regions. These queues are used when
     * placing game sessions for matches that are created with this matchmaking
     * configuration. Queues can be located in any Region.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithGameSessionQueueArns(Aws::Vector<Aws::String>&& value) { SetGameSessionQueueArns(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>)
     * that is assigned to a GameLift game session queue resource and uniquely
     * identifies it. ARNs are unique across all Regions. These queues are used when
     * placing game sessions for matches that are created with this matchmaking
     * configuration. Queues can be located in any Region.</p>
     */
    inline CreateMatchmakingConfigurationRequest& AddGameSessionQueueArns(const Aws::String& value) { m_gameSessionQueueArnsHasBeenSet = true; m_gameSessionQueueArns.push_back(value); return *this; }

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>)
     * that is assigned to a GameLift game session queue resource and uniquely
     * identifies it. ARNs are unique across all Regions. These queues are used when
     * placing game sessions for matches that are created with this matchmaking
     * configuration. Queues can be located in any Region.</p>
     */
    inline CreateMatchmakingConfigurationRequest& AddGameSessionQueueArns(Aws::String&& value) { m_gameSessionQueueArnsHasBeenSet = true; m_gameSessionQueueArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>)
     * that is assigned to a GameLift game session queue resource and uniquely
     * identifies it. ARNs are unique across all Regions. These queues are used when
     * placing game sessions for matches that are created with this matchmaking
     * configuration. Queues can be located in any Region.</p>
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
     * match. If any player rejects the match or fails to accept before the timeout,
     * the ticket continues to look for an acceptable match.</p>
     */
    inline int GetAcceptanceTimeoutSeconds() const{ return m_acceptanceTimeoutSeconds; }

    /**
     * <p>The length of time (in seconds) to wait for players to accept a proposed
     * match. If any player rejects the match or fails to accept before the timeout,
     * the ticket continues to look for an acceptable match.</p>
     */
    inline bool AcceptanceTimeoutSecondsHasBeenSet() const { return m_acceptanceTimeoutSecondsHasBeenSet; }

    /**
     * <p>The length of time (in seconds) to wait for players to accept a proposed
     * match. If any player rejects the match or fails to accept before the timeout,
     * the ticket continues to look for an acceptable match.</p>
     */
    inline void SetAcceptanceTimeoutSeconds(int value) { m_acceptanceTimeoutSecondsHasBeenSet = true; m_acceptanceTimeoutSeconds = value; }

    /**
     * <p>The length of time (in seconds) to wait for players to accept a proposed
     * match. If any player rejects the match or fails to accept before the timeout,
     * the ticket continues to look for an acceptable match.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithAcceptanceTimeoutSeconds(int value) { SetAcceptanceTimeoutSeconds(value); return *this;}


    /**
     * <p>A flag that determines whether a match that was created with this
     * configuration must be accepted by the matched players. To require acceptance,
     * set to <code>TRUE</code>.</p>
     */
    inline bool GetAcceptanceRequired() const{ return m_acceptanceRequired; }

    /**
     * <p>A flag that determines whether a match that was created with this
     * configuration must be accepted by the matched players. To require acceptance,
     * set to <code>TRUE</code>.</p>
     */
    inline bool AcceptanceRequiredHasBeenSet() const { return m_acceptanceRequiredHasBeenSet; }

    /**
     * <p>A flag that determines whether a match that was created with this
     * configuration must be accepted by the matched players. To require acceptance,
     * set to <code>TRUE</code>.</p>
     */
    inline void SetAcceptanceRequired(bool value) { m_acceptanceRequiredHasBeenSet = true; m_acceptanceRequired = value; }

    /**
     * <p>A flag that determines whether a match that was created with this
     * configuration must be accepted by the matched players. To require acceptance,
     * set to <code>TRUE</code>.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithAcceptanceRequired(bool value) { SetAcceptanceRequired(value); return *this;}


    /**
     * <p>A unique identifier for a matchmaking rule set to use with this
     * configuration. You can use either the rule set name or ARN value. A matchmaking
     * configuration can only use rule sets that are defined in the same Region.</p>
     */
    inline const Aws::String& GetRuleSetName() const{ return m_ruleSetName; }

    /**
     * <p>A unique identifier for a matchmaking rule set to use with this
     * configuration. You can use either the rule set name or ARN value. A matchmaking
     * configuration can only use rule sets that are defined in the same Region.</p>
     */
    inline bool RuleSetNameHasBeenSet() const { return m_ruleSetNameHasBeenSet; }

    /**
     * <p>A unique identifier for a matchmaking rule set to use with this
     * configuration. You can use either the rule set name or ARN value. A matchmaking
     * configuration can only use rule sets that are defined in the same Region.</p>
     */
    inline void SetRuleSetName(const Aws::String& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = value; }

    /**
     * <p>A unique identifier for a matchmaking rule set to use with this
     * configuration. You can use either the rule set name or ARN value. A matchmaking
     * configuration can only use rule sets that are defined in the same Region.</p>
     */
    inline void SetRuleSetName(Aws::String&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = std::move(value); }

    /**
     * <p>A unique identifier for a matchmaking rule set to use with this
     * configuration. You can use either the rule set name or ARN value. A matchmaking
     * configuration can only use rule sets that are defined in the same Region.</p>
     */
    inline void SetRuleSetName(const char* value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName.assign(value); }

    /**
     * <p>A unique identifier for a matchmaking rule set to use with this
     * configuration. You can use either the rule set name or ARN value. A matchmaking
     * configuration can only use rule sets that are defined in the same Region.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithRuleSetName(const Aws::String& value) { SetRuleSetName(value); return *this;}

    /**
     * <p>A unique identifier for a matchmaking rule set to use with this
     * configuration. You can use either the rule set name or ARN value. A matchmaking
     * configuration can only use rule sets that are defined in the same Region.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithRuleSetName(Aws::String&& value) { SetRuleSetName(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a matchmaking rule set to use with this
     * configuration. You can use either the rule set name or ARN value. A matchmaking
     * configuration can only use rule sets that are defined in the same Region.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithRuleSetName(const char* value) { SetRuleSetName(value); return *this;}


    /**
     * <p>An SNS topic ARN that is set up to receive matchmaking notifications.</p>
     */
    inline const Aws::String& GetNotificationTarget() const{ return m_notificationTarget; }

    /**
     * <p>An SNS topic ARN that is set up to receive matchmaking notifications.</p>
     */
    inline bool NotificationTargetHasBeenSet() const { return m_notificationTargetHasBeenSet; }

    /**
     * <p>An SNS topic ARN that is set up to receive matchmaking notifications.</p>
     */
    inline void SetNotificationTarget(const Aws::String& value) { m_notificationTargetHasBeenSet = true; m_notificationTarget = value; }

    /**
     * <p>An SNS topic ARN that is set up to receive matchmaking notifications.</p>
     */
    inline void SetNotificationTarget(Aws::String&& value) { m_notificationTargetHasBeenSet = true; m_notificationTarget = std::move(value); }

    /**
     * <p>An SNS topic ARN that is set up to receive matchmaking notifications.</p>
     */
    inline void SetNotificationTarget(const char* value) { m_notificationTargetHasBeenSet = true; m_notificationTarget.assign(value); }

    /**
     * <p>An SNS topic ARN that is set up to receive matchmaking notifications.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithNotificationTarget(const Aws::String& value) { SetNotificationTarget(value); return *this;}

    /**
     * <p>An SNS topic ARN that is set up to receive matchmaking notifications.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithNotificationTarget(Aws::String&& value) { SetNotificationTarget(std::move(value)); return *this;}

    /**
     * <p>An SNS topic ARN that is set up to receive matchmaking notifications.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithNotificationTarget(const char* value) { SetNotificationTarget(value); return *this;}


    /**
     * <p>The number of player slots in a match to keep open for future players. For
     * example, assume that the configuration's rule set specifies a match for a single
     * 12-person team. If the additional player count is set to 2, only 10 players are
     * initially selected for the match.</p>
     */
    inline int GetAdditionalPlayerCount() const{ return m_additionalPlayerCount; }

    /**
     * <p>The number of player slots in a match to keep open for future players. For
     * example, assume that the configuration's rule set specifies a match for a single
     * 12-person team. If the additional player count is set to 2, only 10 players are
     * initially selected for the match.</p>
     */
    inline bool AdditionalPlayerCountHasBeenSet() const { return m_additionalPlayerCountHasBeenSet; }

    /**
     * <p>The number of player slots in a match to keep open for future players. For
     * example, assume that the configuration's rule set specifies a match for a single
     * 12-person team. If the additional player count is set to 2, only 10 players are
     * initially selected for the match.</p>
     */
    inline void SetAdditionalPlayerCount(int value) { m_additionalPlayerCountHasBeenSet = true; m_additionalPlayerCount = value; }

    /**
     * <p>The number of player slots in a match to keep open for future players. For
     * example, assume that the configuration's rule set specifies a match for a single
     * 12-person team. If the additional player count is set to 2, only 10 players are
     * initially selected for the match.</p>
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
     * <p>A set of custom properties for a game session, formatted as key-value pairs.
     * These properties are passed to a game server process in the <a>GameSession</a>
     * object with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new <a>GameSession</a>
     * object that is created for a successful match. </p>
     */
    inline const Aws::Vector<GameProperty>& GetGameProperties() const{ return m_gameProperties; }

    /**
     * <p>A set of custom properties for a game session, formatted as key-value pairs.
     * These properties are passed to a game server process in the <a>GameSession</a>
     * object with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new <a>GameSession</a>
     * object that is created for a successful match. </p>
     */
    inline bool GamePropertiesHasBeenSet() const { return m_gamePropertiesHasBeenSet; }

    /**
     * <p>A set of custom properties for a game session, formatted as key-value pairs.
     * These properties are passed to a game server process in the <a>GameSession</a>
     * object with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new <a>GameSession</a>
     * object that is created for a successful match. </p>
     */
    inline void SetGameProperties(const Aws::Vector<GameProperty>& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties = value; }

    /**
     * <p>A set of custom properties for a game session, formatted as key-value pairs.
     * These properties are passed to a game server process in the <a>GameSession</a>
     * object with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new <a>GameSession</a>
     * object that is created for a successful match. </p>
     */
    inline void SetGameProperties(Aws::Vector<GameProperty>&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties = std::move(value); }

    /**
     * <p>A set of custom properties for a game session, formatted as key-value pairs.
     * These properties are passed to a game server process in the <a>GameSession</a>
     * object with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new <a>GameSession</a>
     * object that is created for a successful match. </p>
     */
    inline CreateMatchmakingConfigurationRequest& WithGameProperties(const Aws::Vector<GameProperty>& value) { SetGameProperties(value); return *this;}

    /**
     * <p>A set of custom properties for a game session, formatted as key-value pairs.
     * These properties are passed to a game server process in the <a>GameSession</a>
     * object with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new <a>GameSession</a>
     * object that is created for a successful match. </p>
     */
    inline CreateMatchmakingConfigurationRequest& WithGameProperties(Aws::Vector<GameProperty>&& value) { SetGameProperties(std::move(value)); return *this;}

    /**
     * <p>A set of custom properties for a game session, formatted as key-value pairs.
     * These properties are passed to a game server process in the <a>GameSession</a>
     * object with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new <a>GameSession</a>
     * object that is created for a successful match. </p>
     */
    inline CreateMatchmakingConfigurationRequest& AddGameProperties(const GameProperty& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(value); return *this; }

    /**
     * <p>A set of custom properties for a game session, formatted as key-value pairs.
     * These properties are passed to a game server process in the <a>GameSession</a>
     * object with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new <a>GameSession</a>
     * object that is created for a successful match. </p>
     */
    inline CreateMatchmakingConfigurationRequest& AddGameProperties(GameProperty&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.push_back(std::move(value)); return *this; }


    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process in the <a>GameSession</a> object
     * with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new <a>GameSession</a>
     * object that is created for a successful match.</p>
     */
    inline const Aws::String& GetGameSessionData() const{ return m_gameSessionData; }

    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process in the <a>GameSession</a> object
     * with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new <a>GameSession</a>
     * object that is created for a successful match.</p>
     */
    inline bool GameSessionDataHasBeenSet() const { return m_gameSessionDataHasBeenSet; }

    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process in the <a>GameSession</a> object
     * with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new <a>GameSession</a>
     * object that is created for a successful match.</p>
     */
    inline void SetGameSessionData(const Aws::String& value) { m_gameSessionDataHasBeenSet = true; m_gameSessionData = value; }

    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process in the <a>GameSession</a> object
     * with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new <a>GameSession</a>
     * object that is created for a successful match.</p>
     */
    inline void SetGameSessionData(Aws::String&& value) { m_gameSessionDataHasBeenSet = true; m_gameSessionData = std::move(value); }

    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process in the <a>GameSession</a> object
     * with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new <a>GameSession</a>
     * object that is created for a successful match.</p>
     */
    inline void SetGameSessionData(const char* value) { m_gameSessionDataHasBeenSet = true; m_gameSessionData.assign(value); }

    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process in the <a>GameSession</a> object
     * with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new <a>GameSession</a>
     * object that is created for a successful match.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithGameSessionData(const Aws::String& value) { SetGameSessionData(value); return *this;}

    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process in the <a>GameSession</a> object
     * with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new <a>GameSession</a>
     * object that is created for a successful match.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithGameSessionData(Aws::String&& value) { SetGameSessionData(std::move(value)); return *this;}

    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process in the <a>GameSession</a> object
     * with a request to start a new game session (see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a Game Session</a>). This information is added to the new <a>GameSession</a>
     * object that is created for a successful match.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithGameSessionData(const char* value) { SetGameSessionData(value); return *this;}


    /**
     * <p>The method used to backfill game sessions that are created with this
     * matchmaking configuration. Specify <code>MANUAL</code> when your game manages
     * backfill requests manually or does not use the match backfill feature. Specify
     * <code>AUTOMATIC</code> to have GameLift create a <a>StartMatchBackfill</a>
     * request whenever a game session has one or more open slots. Learn more about
     * manual and automatic backfill in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/match-backfill.html">
     * Backfill Existing Games with FlexMatch</a>. </p>
     */
    inline const BackfillMode& GetBackfillMode() const{ return m_backfillMode; }

    /**
     * <p>The method used to backfill game sessions that are created with this
     * matchmaking configuration. Specify <code>MANUAL</code> when your game manages
     * backfill requests manually or does not use the match backfill feature. Specify
     * <code>AUTOMATIC</code> to have GameLift create a <a>StartMatchBackfill</a>
     * request whenever a game session has one or more open slots. Learn more about
     * manual and automatic backfill in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/match-backfill.html">
     * Backfill Existing Games with FlexMatch</a>. </p>
     */
    inline bool BackfillModeHasBeenSet() const { return m_backfillModeHasBeenSet; }

    /**
     * <p>The method used to backfill game sessions that are created with this
     * matchmaking configuration. Specify <code>MANUAL</code> when your game manages
     * backfill requests manually or does not use the match backfill feature. Specify
     * <code>AUTOMATIC</code> to have GameLift create a <a>StartMatchBackfill</a>
     * request whenever a game session has one or more open slots. Learn more about
     * manual and automatic backfill in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/match-backfill.html">
     * Backfill Existing Games with FlexMatch</a>. </p>
     */
    inline void SetBackfillMode(const BackfillMode& value) { m_backfillModeHasBeenSet = true; m_backfillMode = value; }

    /**
     * <p>The method used to backfill game sessions that are created with this
     * matchmaking configuration. Specify <code>MANUAL</code> when your game manages
     * backfill requests manually or does not use the match backfill feature. Specify
     * <code>AUTOMATIC</code> to have GameLift create a <a>StartMatchBackfill</a>
     * request whenever a game session has one or more open slots. Learn more about
     * manual and automatic backfill in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/match-backfill.html">
     * Backfill Existing Games with FlexMatch</a>. </p>
     */
    inline void SetBackfillMode(BackfillMode&& value) { m_backfillModeHasBeenSet = true; m_backfillMode = std::move(value); }

    /**
     * <p>The method used to backfill game sessions that are created with this
     * matchmaking configuration. Specify <code>MANUAL</code> when your game manages
     * backfill requests manually or does not use the match backfill feature. Specify
     * <code>AUTOMATIC</code> to have GameLift create a <a>StartMatchBackfill</a>
     * request whenever a game session has one or more open slots. Learn more about
     * manual and automatic backfill in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/match-backfill.html">
     * Backfill Existing Games with FlexMatch</a>. </p>
     */
    inline CreateMatchmakingConfigurationRequest& WithBackfillMode(const BackfillMode& value) { SetBackfillMode(value); return *this;}

    /**
     * <p>The method used to backfill game sessions that are created with this
     * matchmaking configuration. Specify <code>MANUAL</code> when your game manages
     * backfill requests manually or does not use the match backfill feature. Specify
     * <code>AUTOMATIC</code> to have GameLift create a <a>StartMatchBackfill</a>
     * request whenever a game session has one or more open slots. Learn more about
     * manual and automatic backfill in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/match-backfill.html">
     * Backfill Existing Games with FlexMatch</a>. </p>
     */
    inline CreateMatchmakingConfigurationRequest& WithBackfillMode(BackfillMode&& value) { SetBackfillMode(std::move(value)); return *this;}


    /**
     * <p>A list of labels to assign to the new matchmaking configuration resource.
     * Tags are developer-defined key-value pairs. Tagging AWS resources are useful for
     * resource management, access management and cost allocation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of labels to assign to the new matchmaking configuration resource.
     * Tags are developer-defined key-value pairs. Tagging AWS resources are useful for
     * resource management, access management and cost allocation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of labels to assign to the new matchmaking configuration resource.
     * Tags are developer-defined key-value pairs. Tagging AWS resources are useful for
     * resource management, access management and cost allocation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of labels to assign to the new matchmaking configuration resource.
     * Tags are developer-defined key-value pairs. Tagging AWS resources are useful for
     * resource management, access management and cost allocation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of labels to assign to the new matchmaking configuration resource.
     * Tags are developer-defined key-value pairs. Tagging AWS resources are useful for
     * resource management, access management and cost allocation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of labels to assign to the new matchmaking configuration resource.
     * Tags are developer-defined key-value pairs. Tagging AWS resources are useful for
     * resource management, access management and cost allocation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline CreateMatchmakingConfigurationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of labels to assign to the new matchmaking configuration resource.
     * Tags are developer-defined key-value pairs. Tagging AWS resources are useful for
     * resource management, access management and cost allocation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline CreateMatchmakingConfigurationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of labels to assign to the new matchmaking configuration resource.
     * Tags are developer-defined key-value pairs. Tagging AWS resources are useful for
     * resource management, access management and cost allocation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline CreateMatchmakingConfigurationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Aws::String> m_gameSessionQueueArns;
    bool m_gameSessionQueueArnsHasBeenSet;

    int m_requestTimeoutSeconds;
    bool m_requestTimeoutSecondsHasBeenSet;

    int m_acceptanceTimeoutSeconds;
    bool m_acceptanceTimeoutSecondsHasBeenSet;

    bool m_acceptanceRequired;
    bool m_acceptanceRequiredHasBeenSet;

    Aws::String m_ruleSetName;
    bool m_ruleSetNameHasBeenSet;

    Aws::String m_notificationTarget;
    bool m_notificationTargetHasBeenSet;

    int m_additionalPlayerCount;
    bool m_additionalPlayerCountHasBeenSet;

    Aws::String m_customEventData;
    bool m_customEventDataHasBeenSet;

    Aws::Vector<GameProperty> m_gameProperties;
    bool m_gamePropertiesHasBeenSet;

    Aws::String m_gameSessionData;
    bool m_gameSessionDataHasBeenSet;

    BackfillMode m_backfillMode;
    bool m_backfillModeHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
