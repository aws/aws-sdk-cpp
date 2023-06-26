/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/FilterConfiguration.h>
#include <aws/gamelift/model/PriorityConfiguration.h>
#include <aws/gamelift/model/PlayerLatencyPolicy.h>
#include <aws/gamelift/model/GameSessionQueueDestination.h>
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
   * <p>Configuration for a game session placement mechanism that processes requests
   * for new game sessions. A queue can be used on its own or as part of a
   * matchmaking solution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameSessionQueue">AWS
   * API Reference</a></p>
   */
  class GameSessionQueue
  {
  public:
    AWS_GAMELIFT_API GameSessionQueue();
    AWS_GAMELIFT_API GameSessionQueue(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API GameSessionQueue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A descriptive label that is associated with game session queue. Queue names
     * must be unique within each Region.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A descriptive label that is associated with game session queue. Queue names
     * must be unique within each Region.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A descriptive label that is associated with game session queue. Queue names
     * must be unique within each Region.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A descriptive label that is associated with game session queue. Queue names
     * must be unique within each Region.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A descriptive label that is associated with game session queue. Queue names
     * must be unique within each Region.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A descriptive label that is associated with game session queue. Queue names
     * must be unique within each Region.</p>
     */
    inline GameSessionQueue& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A descriptive label that is associated with game session queue. Queue names
     * must be unique within each Region.</p>
     */
    inline GameSessionQueue& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A descriptive label that is associated with game session queue. Queue names
     * must be unique within each Region.</p>
     */
    inline GameSessionQueue& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift game session queue resource and uniquely
     * identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesessionqueue/&lt;queue
     * name&gt;</code>. In a Amazon GameLift game session queue ARN, the resource ID
     * matches the <i>Name</i> value.</p>
     */
    inline const Aws::String& GetGameSessionQueueArn() const{ return m_gameSessionQueueArn; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift game session queue resource and uniquely
     * identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesessionqueue/&lt;queue
     * name&gt;</code>. In a Amazon GameLift game session queue ARN, the resource ID
     * matches the <i>Name</i> value.</p>
     */
    inline bool GameSessionQueueArnHasBeenSet() const { return m_gameSessionQueueArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift game session queue resource and uniquely
     * identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesessionqueue/&lt;queue
     * name&gt;</code>. In a Amazon GameLift game session queue ARN, the resource ID
     * matches the <i>Name</i> value.</p>
     */
    inline void SetGameSessionQueueArn(const Aws::String& value) { m_gameSessionQueueArnHasBeenSet = true; m_gameSessionQueueArn = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift game session queue resource and uniquely
     * identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesessionqueue/&lt;queue
     * name&gt;</code>. In a Amazon GameLift game session queue ARN, the resource ID
     * matches the <i>Name</i> value.</p>
     */
    inline void SetGameSessionQueueArn(Aws::String&& value) { m_gameSessionQueueArnHasBeenSet = true; m_gameSessionQueueArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift game session queue resource and uniquely
     * identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesessionqueue/&lt;queue
     * name&gt;</code>. In a Amazon GameLift game session queue ARN, the resource ID
     * matches the <i>Name</i> value.</p>
     */
    inline void SetGameSessionQueueArn(const char* value) { m_gameSessionQueueArnHasBeenSet = true; m_gameSessionQueueArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift game session queue resource and uniquely
     * identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesessionqueue/&lt;queue
     * name&gt;</code>. In a Amazon GameLift game session queue ARN, the resource ID
     * matches the <i>Name</i> value.</p>
     */
    inline GameSessionQueue& WithGameSessionQueueArn(const Aws::String& value) { SetGameSessionQueueArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift game session queue resource and uniquely
     * identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesessionqueue/&lt;queue
     * name&gt;</code>. In a Amazon GameLift game session queue ARN, the resource ID
     * matches the <i>Name</i> value.</p>
     */
    inline GameSessionQueue& WithGameSessionQueueArn(Aws::String&& value) { SetGameSessionQueueArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift game session queue resource and uniquely
     * identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesessionqueue/&lt;queue
     * name&gt;</code>. In a Amazon GameLift game session queue ARN, the resource ID
     * matches the <i>Name</i> value.</p>
     */
    inline GameSessionQueue& WithGameSessionQueueArn(const char* value) { SetGameSessionQueueArn(value); return *this;}


    /**
     * <p>The maximum time, in seconds, that a new game session placement request
     * remains in the queue. When a request exceeds this time, the game session
     * placement changes to a <code>TIMED_OUT</code> status. By default, this property
     * is set to <code>600</code>.</p>
     */
    inline int GetTimeoutInSeconds() const{ return m_timeoutInSeconds; }

    /**
     * <p>The maximum time, in seconds, that a new game session placement request
     * remains in the queue. When a request exceeds this time, the game session
     * placement changes to a <code>TIMED_OUT</code> status. By default, this property
     * is set to <code>600</code>.</p>
     */
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }

    /**
     * <p>The maximum time, in seconds, that a new game session placement request
     * remains in the queue. When a request exceeds this time, the game session
     * placement changes to a <code>TIMED_OUT</code> status. By default, this property
     * is set to <code>600</code>.</p>
     */
    inline void SetTimeoutInSeconds(int value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }

    /**
     * <p>The maximum time, in seconds, that a new game session placement request
     * remains in the queue. When a request exceeds this time, the game session
     * placement changes to a <code>TIMED_OUT</code> status. By default, this property
     * is set to <code>600</code>.</p>
     */
    inline GameSessionQueue& WithTimeoutInSeconds(int value) { SetTimeoutInSeconds(value); return *this;}


    /**
     * <p>A set of policies that act as a sliding cap on player latency. FleetIQ works
     * to deliver low latency for most players in a game session. These policies ensure
     * that no individual player can be placed into a game with unreasonably high
     * latency. Use multiple policies to gradually relax latency requirements a step at
     * a time. Multiple policies are applied based on their maximum allowed latency,
     * starting with the lowest value. </p>
     */
    inline const Aws::Vector<PlayerLatencyPolicy>& GetPlayerLatencyPolicies() const{ return m_playerLatencyPolicies; }

    /**
     * <p>A set of policies that act as a sliding cap on player latency. FleetIQ works
     * to deliver low latency for most players in a game session. These policies ensure
     * that no individual player can be placed into a game with unreasonably high
     * latency. Use multiple policies to gradually relax latency requirements a step at
     * a time. Multiple policies are applied based on their maximum allowed latency,
     * starting with the lowest value. </p>
     */
    inline bool PlayerLatencyPoliciesHasBeenSet() const { return m_playerLatencyPoliciesHasBeenSet; }

    /**
     * <p>A set of policies that act as a sliding cap on player latency. FleetIQ works
     * to deliver low latency for most players in a game session. These policies ensure
     * that no individual player can be placed into a game with unreasonably high
     * latency. Use multiple policies to gradually relax latency requirements a step at
     * a time. Multiple policies are applied based on their maximum allowed latency,
     * starting with the lowest value. </p>
     */
    inline void SetPlayerLatencyPolicies(const Aws::Vector<PlayerLatencyPolicy>& value) { m_playerLatencyPoliciesHasBeenSet = true; m_playerLatencyPolicies = value; }

    /**
     * <p>A set of policies that act as a sliding cap on player latency. FleetIQ works
     * to deliver low latency for most players in a game session. These policies ensure
     * that no individual player can be placed into a game with unreasonably high
     * latency. Use multiple policies to gradually relax latency requirements a step at
     * a time. Multiple policies are applied based on their maximum allowed latency,
     * starting with the lowest value. </p>
     */
    inline void SetPlayerLatencyPolicies(Aws::Vector<PlayerLatencyPolicy>&& value) { m_playerLatencyPoliciesHasBeenSet = true; m_playerLatencyPolicies = std::move(value); }

    /**
     * <p>A set of policies that act as a sliding cap on player latency. FleetIQ works
     * to deliver low latency for most players in a game session. These policies ensure
     * that no individual player can be placed into a game with unreasonably high
     * latency. Use multiple policies to gradually relax latency requirements a step at
     * a time. Multiple policies are applied based on their maximum allowed latency,
     * starting with the lowest value. </p>
     */
    inline GameSessionQueue& WithPlayerLatencyPolicies(const Aws::Vector<PlayerLatencyPolicy>& value) { SetPlayerLatencyPolicies(value); return *this;}

    /**
     * <p>A set of policies that act as a sliding cap on player latency. FleetIQ works
     * to deliver low latency for most players in a game session. These policies ensure
     * that no individual player can be placed into a game with unreasonably high
     * latency. Use multiple policies to gradually relax latency requirements a step at
     * a time. Multiple policies are applied based on their maximum allowed latency,
     * starting with the lowest value. </p>
     */
    inline GameSessionQueue& WithPlayerLatencyPolicies(Aws::Vector<PlayerLatencyPolicy>&& value) { SetPlayerLatencyPolicies(std::move(value)); return *this;}

    /**
     * <p>A set of policies that act as a sliding cap on player latency. FleetIQ works
     * to deliver low latency for most players in a game session. These policies ensure
     * that no individual player can be placed into a game with unreasonably high
     * latency. Use multiple policies to gradually relax latency requirements a step at
     * a time. Multiple policies are applied based on their maximum allowed latency,
     * starting with the lowest value. </p>
     */
    inline GameSessionQueue& AddPlayerLatencyPolicies(const PlayerLatencyPolicy& value) { m_playerLatencyPoliciesHasBeenSet = true; m_playerLatencyPolicies.push_back(value); return *this; }

    /**
     * <p>A set of policies that act as a sliding cap on player latency. FleetIQ works
     * to deliver low latency for most players in a game session. These policies ensure
     * that no individual player can be placed into a game with unreasonably high
     * latency. Use multiple policies to gradually relax latency requirements a step at
     * a time. Multiple policies are applied based on their maximum allowed latency,
     * starting with the lowest value. </p>
     */
    inline GameSessionQueue& AddPlayerLatencyPolicies(PlayerLatencyPolicy&& value) { m_playerLatencyPoliciesHasBeenSet = true; m_playerLatencyPolicies.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of fleets and/or fleet aliases that can be used to fulfill game
     * session placement requests in the queue. Destinations are identified by either a
     * fleet ARN or a fleet alias ARN, and are listed in order of placement
     * preference.</p>
     */
    inline const Aws::Vector<GameSessionQueueDestination>& GetDestinations() const{ return m_destinations; }

    /**
     * <p>A list of fleets and/or fleet aliases that can be used to fulfill game
     * session placement requests in the queue. Destinations are identified by either a
     * fleet ARN or a fleet alias ARN, and are listed in order of placement
     * preference.</p>
     */
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }

    /**
     * <p>A list of fleets and/or fleet aliases that can be used to fulfill game
     * session placement requests in the queue. Destinations are identified by either a
     * fleet ARN or a fleet alias ARN, and are listed in order of placement
     * preference.</p>
     */
    inline void SetDestinations(const Aws::Vector<GameSessionQueueDestination>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * <p>A list of fleets and/or fleet aliases that can be used to fulfill game
     * session placement requests in the queue. Destinations are identified by either a
     * fleet ARN or a fleet alias ARN, and are listed in order of placement
     * preference.</p>
     */
    inline void SetDestinations(Aws::Vector<GameSessionQueueDestination>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    /**
     * <p>A list of fleets and/or fleet aliases that can be used to fulfill game
     * session placement requests in the queue. Destinations are identified by either a
     * fleet ARN or a fleet alias ARN, and are listed in order of placement
     * preference.</p>
     */
    inline GameSessionQueue& WithDestinations(const Aws::Vector<GameSessionQueueDestination>& value) { SetDestinations(value); return *this;}

    /**
     * <p>A list of fleets and/or fleet aliases that can be used to fulfill game
     * session placement requests in the queue. Destinations are identified by either a
     * fleet ARN or a fleet alias ARN, and are listed in order of placement
     * preference.</p>
     */
    inline GameSessionQueue& WithDestinations(Aws::Vector<GameSessionQueueDestination>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p>A list of fleets and/or fleet aliases that can be used to fulfill game
     * session placement requests in the queue. Destinations are identified by either a
     * fleet ARN or a fleet alias ARN, and are listed in order of placement
     * preference.</p>
     */
    inline GameSessionQueue& AddDestinations(const GameSessionQueueDestination& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * <p>A list of fleets and/or fleet aliases that can be used to fulfill game
     * session placement requests in the queue. Destinations are identified by either a
     * fleet ARN or a fleet alias ARN, and are listed in order of placement
     * preference.</p>
     */
    inline GameSessionQueue& AddDestinations(GameSessionQueueDestination&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of locations where a queue is allowed to place new game sessions.
     * Locations are specified in the form of Amazon Web Services Region codes, such as
     * <code>us-west-2</code>. If this parameter is not set, game sessions can be
     * placed in any queue location. </p>
     */
    inline const FilterConfiguration& GetFilterConfiguration() const{ return m_filterConfiguration; }

    /**
     * <p>A list of locations where a queue is allowed to place new game sessions.
     * Locations are specified in the form of Amazon Web Services Region codes, such as
     * <code>us-west-2</code>. If this parameter is not set, game sessions can be
     * placed in any queue location. </p>
     */
    inline bool FilterConfigurationHasBeenSet() const { return m_filterConfigurationHasBeenSet; }

    /**
     * <p>A list of locations where a queue is allowed to place new game sessions.
     * Locations are specified in the form of Amazon Web Services Region codes, such as
     * <code>us-west-2</code>. If this parameter is not set, game sessions can be
     * placed in any queue location. </p>
     */
    inline void SetFilterConfiguration(const FilterConfiguration& value) { m_filterConfigurationHasBeenSet = true; m_filterConfiguration = value; }

    /**
     * <p>A list of locations where a queue is allowed to place new game sessions.
     * Locations are specified in the form of Amazon Web Services Region codes, such as
     * <code>us-west-2</code>. If this parameter is not set, game sessions can be
     * placed in any queue location. </p>
     */
    inline void SetFilterConfiguration(FilterConfiguration&& value) { m_filterConfigurationHasBeenSet = true; m_filterConfiguration = std::move(value); }

    /**
     * <p>A list of locations where a queue is allowed to place new game sessions.
     * Locations are specified in the form of Amazon Web Services Region codes, such as
     * <code>us-west-2</code>. If this parameter is not set, game sessions can be
     * placed in any queue location. </p>
     */
    inline GameSessionQueue& WithFilterConfiguration(const FilterConfiguration& value) { SetFilterConfiguration(value); return *this;}

    /**
     * <p>A list of locations where a queue is allowed to place new game sessions.
     * Locations are specified in the form of Amazon Web Services Region codes, such as
     * <code>us-west-2</code>. If this parameter is not set, game sessions can be
     * placed in any queue location. </p>
     */
    inline GameSessionQueue& WithFilterConfiguration(FilterConfiguration&& value) { SetFilterConfiguration(std::move(value)); return *this;}


    /**
     * <p>Custom settings to use when prioritizing destinations and locations for game
     * session placements. This configuration replaces the FleetIQ default
     * prioritization process. Priority types that are not explicitly named will be
     * automatically applied at the end of the prioritization process. </p>
     */
    inline const PriorityConfiguration& GetPriorityConfiguration() const{ return m_priorityConfiguration; }

    /**
     * <p>Custom settings to use when prioritizing destinations and locations for game
     * session placements. This configuration replaces the FleetIQ default
     * prioritization process. Priority types that are not explicitly named will be
     * automatically applied at the end of the prioritization process. </p>
     */
    inline bool PriorityConfigurationHasBeenSet() const { return m_priorityConfigurationHasBeenSet; }

    /**
     * <p>Custom settings to use when prioritizing destinations and locations for game
     * session placements. This configuration replaces the FleetIQ default
     * prioritization process. Priority types that are not explicitly named will be
     * automatically applied at the end of the prioritization process. </p>
     */
    inline void SetPriorityConfiguration(const PriorityConfiguration& value) { m_priorityConfigurationHasBeenSet = true; m_priorityConfiguration = value; }

    /**
     * <p>Custom settings to use when prioritizing destinations and locations for game
     * session placements. This configuration replaces the FleetIQ default
     * prioritization process. Priority types that are not explicitly named will be
     * automatically applied at the end of the prioritization process. </p>
     */
    inline void SetPriorityConfiguration(PriorityConfiguration&& value) { m_priorityConfigurationHasBeenSet = true; m_priorityConfiguration = std::move(value); }

    /**
     * <p>Custom settings to use when prioritizing destinations and locations for game
     * session placements. This configuration replaces the FleetIQ default
     * prioritization process. Priority types that are not explicitly named will be
     * automatically applied at the end of the prioritization process. </p>
     */
    inline GameSessionQueue& WithPriorityConfiguration(const PriorityConfiguration& value) { SetPriorityConfiguration(value); return *this;}

    /**
     * <p>Custom settings to use when prioritizing destinations and locations for game
     * session placements. This configuration replaces the FleetIQ default
     * prioritization process. Priority types that are not explicitly named will be
     * automatically applied at the end of the prioritization process. </p>
     */
    inline GameSessionQueue& WithPriorityConfiguration(PriorityConfiguration&& value) { SetPriorityConfiguration(std::move(value)); return *this;}


    /**
     * <p> Information that is added to all events that are related to this game
     * session queue.</p>
     */
    inline const Aws::String& GetCustomEventData() const{ return m_customEventData; }

    /**
     * <p> Information that is added to all events that are related to this game
     * session queue.</p>
     */
    inline bool CustomEventDataHasBeenSet() const { return m_customEventDataHasBeenSet; }

    /**
     * <p> Information that is added to all events that are related to this game
     * session queue.</p>
     */
    inline void SetCustomEventData(const Aws::String& value) { m_customEventDataHasBeenSet = true; m_customEventData = value; }

    /**
     * <p> Information that is added to all events that are related to this game
     * session queue.</p>
     */
    inline void SetCustomEventData(Aws::String&& value) { m_customEventDataHasBeenSet = true; m_customEventData = std::move(value); }

    /**
     * <p> Information that is added to all events that are related to this game
     * session queue.</p>
     */
    inline void SetCustomEventData(const char* value) { m_customEventDataHasBeenSet = true; m_customEventData.assign(value); }

    /**
     * <p> Information that is added to all events that are related to this game
     * session queue.</p>
     */
    inline GameSessionQueue& WithCustomEventData(const Aws::String& value) { SetCustomEventData(value); return *this;}

    /**
     * <p> Information that is added to all events that are related to this game
     * session queue.</p>
     */
    inline GameSessionQueue& WithCustomEventData(Aws::String&& value) { SetCustomEventData(std::move(value)); return *this;}

    /**
     * <p> Information that is added to all events that are related to this game
     * session queue.</p>
     */
    inline GameSessionQueue& WithCustomEventData(const char* value) { SetCustomEventData(value); return *this;}


    /**
     * <p>An SNS topic ARN that is set up to receive game session placement
     * notifications. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queue-notification.html">
     * Setting up notifications for game session placement</a>.</p>
     */
    inline const Aws::String& GetNotificationTarget() const{ return m_notificationTarget; }

    /**
     * <p>An SNS topic ARN that is set up to receive game session placement
     * notifications. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queue-notification.html">
     * Setting up notifications for game session placement</a>.</p>
     */
    inline bool NotificationTargetHasBeenSet() const { return m_notificationTargetHasBeenSet; }

    /**
     * <p>An SNS topic ARN that is set up to receive game session placement
     * notifications. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queue-notification.html">
     * Setting up notifications for game session placement</a>.</p>
     */
    inline void SetNotificationTarget(const Aws::String& value) { m_notificationTargetHasBeenSet = true; m_notificationTarget = value; }

    /**
     * <p>An SNS topic ARN that is set up to receive game session placement
     * notifications. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queue-notification.html">
     * Setting up notifications for game session placement</a>.</p>
     */
    inline void SetNotificationTarget(Aws::String&& value) { m_notificationTargetHasBeenSet = true; m_notificationTarget = std::move(value); }

    /**
     * <p>An SNS topic ARN that is set up to receive game session placement
     * notifications. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queue-notification.html">
     * Setting up notifications for game session placement</a>.</p>
     */
    inline void SetNotificationTarget(const char* value) { m_notificationTargetHasBeenSet = true; m_notificationTarget.assign(value); }

    /**
     * <p>An SNS topic ARN that is set up to receive game session placement
     * notifications. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queue-notification.html">
     * Setting up notifications for game session placement</a>.</p>
     */
    inline GameSessionQueue& WithNotificationTarget(const Aws::String& value) { SetNotificationTarget(value); return *this;}

    /**
     * <p>An SNS topic ARN that is set up to receive game session placement
     * notifications. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queue-notification.html">
     * Setting up notifications for game session placement</a>.</p>
     */
    inline GameSessionQueue& WithNotificationTarget(Aws::String&& value) { SetNotificationTarget(std::move(value)); return *this;}

    /**
     * <p>An SNS topic ARN that is set up to receive game session placement
     * notifications. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queue-notification.html">
     * Setting up notifications for game session placement</a>.</p>
     */
    inline GameSessionQueue& WithNotificationTarget(const char* value) { SetNotificationTarget(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_gameSessionQueueArn;
    bool m_gameSessionQueueArnHasBeenSet = false;

    int m_timeoutInSeconds;
    bool m_timeoutInSecondsHasBeenSet = false;

    Aws::Vector<PlayerLatencyPolicy> m_playerLatencyPolicies;
    bool m_playerLatencyPoliciesHasBeenSet = false;

    Aws::Vector<GameSessionQueueDestination> m_destinations;
    bool m_destinationsHasBeenSet = false;

    FilterConfiguration m_filterConfiguration;
    bool m_filterConfigurationHasBeenSet = false;

    PriorityConfiguration m_priorityConfiguration;
    bool m_priorityConfigurationHasBeenSet = false;

    Aws::String m_customEventData;
    bool m_customEventDataHasBeenSet = false;

    Aws::String m_notificationTarget;
    bool m_notificationTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
