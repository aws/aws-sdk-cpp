/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/gamelift/model/BackfillMode.h>
#include <aws/gamelift/model/FlexMatchMode.h>
#include <aws/gamelift/model/GameProperty.h>
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
   * <p>Guidelines for use with FlexMatch to match players into games. All
   * matchmaking requests must specify a matchmaking configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/MatchmakingConfiguration">AWS
   * API Reference</a></p>
   */
  class MatchmakingConfiguration
  {
  public:
    AWS_GAMELIFT_API MatchmakingConfiguration() = default;
    AWS_GAMELIFT_API MatchmakingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API MatchmakingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the matchmaking configuration. This name is used to
     * identify the configuration associated with a matchmaking request or ticket.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MatchmakingConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift Servers matchmaking configuration resource
     * and uniquely identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::matchmakingconfiguration/&lt;matchmaking
     * configuration name&gt;</code>. In a Amazon GameLift Servers configuration ARN,
     * the resource ID matches the <i>Name</i> value.</p>
     */
    inline const Aws::String& GetConfigurationArn() const { return m_configurationArn; }
    inline bool ConfigurationArnHasBeenSet() const { return m_configurationArnHasBeenSet; }
    template<typename ConfigurationArnT = Aws::String>
    void SetConfigurationArn(ConfigurationArnT&& value) { m_configurationArnHasBeenSet = true; m_configurationArn = std::forward<ConfigurationArnT>(value); }
    template<typename ConfigurationArnT = Aws::String>
    MatchmakingConfiguration& WithConfigurationArn(ConfigurationArnT&& value) { SetConfigurationArn(std::forward<ConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label that is associated with matchmaking configuration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    MatchmakingConfiguration& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift Servers game session queue resource and
     * uniquely identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesessionqueue/&lt;queue
     * name&gt;</code>. Queues can be located in any Region. Queues are used to start
     * new Amazon GameLift Servers-hosted game sessions for matches that are created
     * with this matchmaking configuration. This property is not set when
     * <code>FlexMatchMode</code> is set to <code>STANDALONE</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGameSessionQueueArns() const { return m_gameSessionQueueArns; }
    inline bool GameSessionQueueArnsHasBeenSet() const { return m_gameSessionQueueArnsHasBeenSet; }
    template<typename GameSessionQueueArnsT = Aws::Vector<Aws::String>>
    void SetGameSessionQueueArns(GameSessionQueueArnsT&& value) { m_gameSessionQueueArnsHasBeenSet = true; m_gameSessionQueueArns = std::forward<GameSessionQueueArnsT>(value); }
    template<typename GameSessionQueueArnsT = Aws::Vector<Aws::String>>
    MatchmakingConfiguration& WithGameSessionQueueArns(GameSessionQueueArnsT&& value) { SetGameSessionQueueArns(std::forward<GameSessionQueueArnsT>(value)); return *this;}
    template<typename GameSessionQueueArnsT = Aws::String>
    MatchmakingConfiguration& AddGameSessionQueueArns(GameSessionQueueArnsT&& value) { m_gameSessionQueueArnsHasBeenSet = true; m_gameSessionQueueArns.emplace_back(std::forward<GameSessionQueueArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum duration, in seconds, that a matchmaking ticket can remain in
     * process before timing out. Requests that fail due to timing out can be
     * resubmitted as needed.</p>
     */
    inline int GetRequestTimeoutSeconds() const { return m_requestTimeoutSeconds; }
    inline bool RequestTimeoutSecondsHasBeenSet() const { return m_requestTimeoutSecondsHasBeenSet; }
    inline void SetRequestTimeoutSeconds(int value) { m_requestTimeoutSecondsHasBeenSet = true; m_requestTimeoutSeconds = value; }
    inline MatchmakingConfiguration& WithRequestTimeoutSeconds(int value) { SetRequestTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of time (in seconds) to wait for players to accept a proposed
     * match, if acceptance is required. If any player rejects the match or fails to
     * accept before the timeout, the ticket continues to look for an acceptable
     * match.</p>
     */
    inline int GetAcceptanceTimeoutSeconds() const { return m_acceptanceTimeoutSeconds; }
    inline bool AcceptanceTimeoutSecondsHasBeenSet() const { return m_acceptanceTimeoutSecondsHasBeenSet; }
    inline void SetAcceptanceTimeoutSeconds(int value) { m_acceptanceTimeoutSecondsHasBeenSet = true; m_acceptanceTimeoutSeconds = value; }
    inline MatchmakingConfiguration& WithAcceptanceTimeoutSeconds(int value) { SetAcceptanceTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether a match that was created with this
     * configuration must be accepted by the matched players. To require acceptance,
     * set to TRUE. When this option is enabled, matchmaking tickets use the status
     * <code>REQUIRES_ACCEPTANCE</code> to indicate when a completed potential match is
     * waiting for player acceptance.</p>
     */
    inline bool GetAcceptanceRequired() const { return m_acceptanceRequired; }
    inline bool AcceptanceRequiredHasBeenSet() const { return m_acceptanceRequiredHasBeenSet; }
    inline void SetAcceptanceRequired(bool value) { m_acceptanceRequiredHasBeenSet = true; m_acceptanceRequired = value; }
    inline MatchmakingConfiguration& WithAcceptanceRequired(bool value) { SetAcceptanceRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the matchmaking rule set to use with this
     * configuration. A matchmaking configuration can only use rule sets that are
     * defined in the same Region.</p>
     */
    inline const Aws::String& GetRuleSetName() const { return m_ruleSetName; }
    inline bool RuleSetNameHasBeenSet() const { return m_ruleSetNameHasBeenSet; }
    template<typename RuleSetNameT = Aws::String>
    void SetRuleSetName(RuleSetNameT&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = std::forward<RuleSetNameT>(value); }
    template<typename RuleSetNameT = Aws::String>
    MatchmakingConfiguration& WithRuleSetName(RuleSetNameT&& value) { SetRuleSetName(std::forward<RuleSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift matchmaking rule set resource that this
     * configuration uses.</p>
     */
    inline const Aws::String& GetRuleSetArn() const { return m_ruleSetArn; }
    inline bool RuleSetArnHasBeenSet() const { return m_ruleSetArnHasBeenSet; }
    template<typename RuleSetArnT = Aws::String>
    void SetRuleSetArn(RuleSetArnT&& value) { m_ruleSetArnHasBeenSet = true; m_ruleSetArn = std::forward<RuleSetArnT>(value); }
    template<typename RuleSetArnT = Aws::String>
    MatchmakingConfiguration& WithRuleSetArn(RuleSetArnT&& value) { SetRuleSetArn(std::forward<RuleSetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An SNS topic ARN that is set up to receive matchmaking notifications.</p>
     */
    inline const Aws::String& GetNotificationTarget() const { return m_notificationTarget; }
    inline bool NotificationTargetHasBeenSet() const { return m_notificationTargetHasBeenSet; }
    template<typename NotificationTargetT = Aws::String>
    void SetNotificationTarget(NotificationTargetT&& value) { m_notificationTargetHasBeenSet = true; m_notificationTarget = std::forward<NotificationTargetT>(value); }
    template<typename NotificationTargetT = Aws::String>
    MatchmakingConfiguration& WithNotificationTarget(NotificationTargetT&& value) { SetNotificationTarget(std::forward<NotificationTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of player slots in a match to keep open for future players. For
     * example, if the configuration's rule set specifies a match for a single
     * 12-person team, and the additional player count is set to 2, only 10 players are
     * selected for the match. This parameter is not used when
     * <code>FlexMatchMode</code> is set to <code>STANDALONE</code>.</p>
     */
    inline int GetAdditionalPlayerCount() const { return m_additionalPlayerCount; }
    inline bool AdditionalPlayerCountHasBeenSet() const { return m_additionalPlayerCountHasBeenSet; }
    inline void SetAdditionalPlayerCount(int value) { m_additionalPlayerCountHasBeenSet = true; m_additionalPlayerCount = value; }
    inline MatchmakingConfiguration& WithAdditionalPlayerCount(int value) { SetAdditionalPlayerCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information to attach to all events related to the matchmaking configuration.
     * </p>
     */
    inline const Aws::String& GetCustomEventData() const { return m_customEventData; }
    inline bool CustomEventDataHasBeenSet() const { return m_customEventDataHasBeenSet; }
    template<typename CustomEventDataT = Aws::String>
    void SetCustomEventData(CustomEventDataT&& value) { m_customEventDataHasBeenSet = true; m_customEventData = std::forward<CustomEventDataT>(value); }
    template<typename CustomEventDataT = Aws::String>
    MatchmakingConfiguration& WithCustomEventData(CustomEventDataT&& value) { SetCustomEventData(std::forward<CustomEventDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    MatchmakingConfiguration& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of key-value pairs that can store custom data in a game session. For
     * example: <code>{"Key": "difficulty", "Value": "novice"}</code>. This information
     * is added to the new <code>GameSession</code> object that is created for a
     * successful match. This parameter is not used when <code>FlexMatchMode</code> is
     * set to <code>STANDALONE</code>.</p>
     */
    inline const Aws::Vector<GameProperty>& GetGameProperties() const { return m_gameProperties; }
    inline bool GamePropertiesHasBeenSet() const { return m_gamePropertiesHasBeenSet; }
    template<typename GamePropertiesT = Aws::Vector<GameProperty>>
    void SetGameProperties(GamePropertiesT&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties = std::forward<GamePropertiesT>(value); }
    template<typename GamePropertiesT = Aws::Vector<GameProperty>>
    MatchmakingConfiguration& WithGameProperties(GamePropertiesT&& value) { SetGameProperties(std::forward<GamePropertiesT>(value)); return *this;}
    template<typename GamePropertiesT = GameProperty>
    MatchmakingConfiguration& AddGameProperties(GamePropertiesT&& value) { m_gamePropertiesHasBeenSet = true; m_gameProperties.emplace_back(std::forward<GamePropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A set of custom game session properties, formatted as a single string value.
     * This data is passed to a game server process with a request to start a new game
     * session. For more information, see <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
     * a game session</a>. This information is added to the new
     * <code>GameSession</code> object that is created for a successful match. This
     * parameter is not used when <code>FlexMatchMode</code> is set to
     * <code>STANDALONE</code>.</p>
     */
    inline const Aws::String& GetGameSessionData() const { return m_gameSessionData; }
    inline bool GameSessionDataHasBeenSet() const { return m_gameSessionDataHasBeenSet; }
    template<typename GameSessionDataT = Aws::String>
    void SetGameSessionData(GameSessionDataT&& value) { m_gameSessionDataHasBeenSet = true; m_gameSessionData = std::forward<GameSessionDataT>(value); }
    template<typename GameSessionDataT = Aws::String>
    MatchmakingConfiguration& WithGameSessionData(GameSessionDataT&& value) { SetGameSessionData(std::forward<GameSessionDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method used to backfill game sessions created with this matchmaking
     * configuration. MANUAL indicates that the game makes backfill requests or does
     * not use the match backfill feature. AUTOMATIC indicates that GameLift creates
     * backfill requests whenever a game session has one or more open slots. Learn more
     * about manual and automatic backfill in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-backfill.html">Backfill
     * existing games with FlexMatch</a>. Automatic backfill is not available when
     * <code>FlexMatchMode</code> is set to <code>STANDALONE</code>.</p>
     */
    inline BackfillMode GetBackfillMode() const { return m_backfillMode; }
    inline bool BackfillModeHasBeenSet() const { return m_backfillModeHasBeenSet; }
    inline void SetBackfillMode(BackfillMode value) { m_backfillModeHasBeenSet = true; m_backfillMode = value; }
    inline MatchmakingConfiguration& WithBackfillMode(BackfillMode value) { SetBackfillMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this matchmaking configuration is being used with Amazon
     * GameLift Servers hosting or as a standalone matchmaking solution. </p> <ul> <li>
     * <p> <b>STANDALONE</b> - FlexMatch forms matches and returns match information,
     * including players and team assignments, in a <a
     * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-events.html#match-events-matchmakingsucceeded">
     * MatchmakingSucceeded</a> event.</p> </li> <li> <p> <b>WITH_QUEUE</b> - FlexMatch
     * forms matches and uses the specified Amazon GameLift Servers queue to start a
     * game session for the match. </p> </li> </ul>
     */
    inline FlexMatchMode GetFlexMatchMode() const { return m_flexMatchMode; }
    inline bool FlexMatchModeHasBeenSet() const { return m_flexMatchModeHasBeenSet; }
    inline void SetFlexMatchMode(FlexMatchMode value) { m_flexMatchModeHasBeenSet = true; m_flexMatchMode = value; }
    inline MatchmakingConfiguration& WithFlexMatchMode(FlexMatchMode value) { SetFlexMatchMode(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_configurationArn;
    bool m_configurationArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_gameSessionQueueArns;
    bool m_gameSessionQueueArnsHasBeenSet = false;

    int m_requestTimeoutSeconds{0};
    bool m_requestTimeoutSecondsHasBeenSet = false;

    int m_acceptanceTimeoutSeconds{0};
    bool m_acceptanceTimeoutSecondsHasBeenSet = false;

    bool m_acceptanceRequired{false};
    bool m_acceptanceRequiredHasBeenSet = false;

    Aws::String m_ruleSetName;
    bool m_ruleSetNameHasBeenSet = false;

    Aws::String m_ruleSetArn;
    bool m_ruleSetArnHasBeenSet = false;

    Aws::String m_notificationTarget;
    bool m_notificationTargetHasBeenSet = false;

    int m_additionalPlayerCount{0};
    bool m_additionalPlayerCountHasBeenSet = false;

    Aws::String m_customEventData;
    bool m_customEventDataHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Vector<GameProperty> m_gameProperties;
    bool m_gamePropertiesHasBeenSet = false;

    Aws::String m_gameSessionData;
    bool m_gameSessionDataHasBeenSet = false;

    BackfillMode m_backfillMode{BackfillMode::NOT_SET};
    bool m_backfillModeHasBeenSet = false;

    FlexMatchMode m_flexMatchMode{FlexMatchMode::NOT_SET};
    bool m_flexMatchModeHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
