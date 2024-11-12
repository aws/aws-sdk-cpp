/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/FilterConfiguration.h>
#include <aws/gamelift/model/PriorityConfiguration.h>
#include <aws/gamelift/model/PlayerLatencyPolicy.h>
#include <aws/gamelift/model/GameSessionQueueDestination.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class UpdateGameSessionQueueRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API UpdateGameSessionQueueRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGameSessionQueue"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A descriptive label that is associated with game session queue. Queue names
     * must be unique within each Region. You can use either the queue ID or ARN value.
     * </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateGameSessionQueueRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateGameSessionQueueRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateGameSessionQueueRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum time, in seconds, that a new game session placement request
     * remains in the queue. When a request exceeds this time, the game session
     * placement changes to a <code>TIMED_OUT</code> status.</p>
     */
    inline int GetTimeoutInSeconds() const{ return m_timeoutInSeconds; }
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }
    inline void SetTimeoutInSeconds(int value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }
    inline UpdateGameSessionQueueRequest& WithTimeoutInSeconds(int value) { SetTimeoutInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of policies that enforce a sliding cap on player latency when
     * processing game sessions placement requests. Use multiple policies to gradually
     * relax the cap over time if Amazon GameLift can't make a placement. Policies are
     * evaluated in order starting with the lowest maximum latency value. When updating
     * policies, provide a complete collection of policies.</p>
     */
    inline const Aws::Vector<PlayerLatencyPolicy>& GetPlayerLatencyPolicies() const{ return m_playerLatencyPolicies; }
    inline bool PlayerLatencyPoliciesHasBeenSet() const { return m_playerLatencyPoliciesHasBeenSet; }
    inline void SetPlayerLatencyPolicies(const Aws::Vector<PlayerLatencyPolicy>& value) { m_playerLatencyPoliciesHasBeenSet = true; m_playerLatencyPolicies = value; }
    inline void SetPlayerLatencyPolicies(Aws::Vector<PlayerLatencyPolicy>&& value) { m_playerLatencyPoliciesHasBeenSet = true; m_playerLatencyPolicies = std::move(value); }
    inline UpdateGameSessionQueueRequest& WithPlayerLatencyPolicies(const Aws::Vector<PlayerLatencyPolicy>& value) { SetPlayerLatencyPolicies(value); return *this;}
    inline UpdateGameSessionQueueRequest& WithPlayerLatencyPolicies(Aws::Vector<PlayerLatencyPolicy>&& value) { SetPlayerLatencyPolicies(std::move(value)); return *this;}
    inline UpdateGameSessionQueueRequest& AddPlayerLatencyPolicies(const PlayerLatencyPolicy& value) { m_playerLatencyPoliciesHasBeenSet = true; m_playerLatencyPolicies.push_back(value); return *this; }
    inline UpdateGameSessionQueueRequest& AddPlayerLatencyPolicies(PlayerLatencyPolicy&& value) { m_playerLatencyPoliciesHasBeenSet = true; m_playerLatencyPolicies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of fleets and/or fleet aliases that can be used to fulfill game
     * session placement requests in the queue. Destinations are identified by either a
     * fleet ARN or a fleet alias ARN, and are listed in order of placement preference.
     * When updating this list, provide a complete list of destinations.</p>
     */
    inline const Aws::Vector<GameSessionQueueDestination>& GetDestinations() const{ return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    inline void SetDestinations(const Aws::Vector<GameSessionQueueDestination>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }
    inline void SetDestinations(Aws::Vector<GameSessionQueueDestination>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }
    inline UpdateGameSessionQueueRequest& WithDestinations(const Aws::Vector<GameSessionQueueDestination>& value) { SetDestinations(value); return *this;}
    inline UpdateGameSessionQueueRequest& WithDestinations(Aws::Vector<GameSessionQueueDestination>&& value) { SetDestinations(std::move(value)); return *this;}
    inline UpdateGameSessionQueueRequest& AddDestinations(const GameSessionQueueDestination& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }
    inline UpdateGameSessionQueueRequest& AddDestinations(GameSessionQueueDestination&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of locations where a queue is allowed to place new game sessions.
     * Locations are specified in the form of Amazon Web Services Region codes, such as
     * <code>us-west-2</code>. If this parameter is not set, game sessions can be
     * placed in any queue location. To remove an existing filter configuration, pass
     * in an empty set.</p>
     */
    inline const FilterConfiguration& GetFilterConfiguration() const{ return m_filterConfiguration; }
    inline bool FilterConfigurationHasBeenSet() const { return m_filterConfigurationHasBeenSet; }
    inline void SetFilterConfiguration(const FilterConfiguration& value) { m_filterConfigurationHasBeenSet = true; m_filterConfiguration = value; }
    inline void SetFilterConfiguration(FilterConfiguration&& value) { m_filterConfigurationHasBeenSet = true; m_filterConfiguration = std::move(value); }
    inline UpdateGameSessionQueueRequest& WithFilterConfiguration(const FilterConfiguration& value) { SetFilterConfiguration(value); return *this;}
    inline UpdateGameSessionQueueRequest& WithFilterConfiguration(FilterConfiguration&& value) { SetFilterConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom settings to use when prioritizing destinations and locations for game
     * session placements. This configuration replaces the FleetIQ default
     * prioritization process. Priority types that are not explicitly named will be
     * automatically applied at the end of the prioritization process. To remove an
     * existing priority configuration, pass in an empty set.</p>
     */
    inline const PriorityConfiguration& GetPriorityConfiguration() const{ return m_priorityConfiguration; }
    inline bool PriorityConfigurationHasBeenSet() const { return m_priorityConfigurationHasBeenSet; }
    inline void SetPriorityConfiguration(const PriorityConfiguration& value) { m_priorityConfigurationHasBeenSet = true; m_priorityConfiguration = value; }
    inline void SetPriorityConfiguration(PriorityConfiguration&& value) { m_priorityConfigurationHasBeenSet = true; m_priorityConfiguration = std::move(value); }
    inline UpdateGameSessionQueueRequest& WithPriorityConfiguration(const PriorityConfiguration& value) { SetPriorityConfiguration(value); return *this;}
    inline UpdateGameSessionQueueRequest& WithPriorityConfiguration(PriorityConfiguration&& value) { SetPriorityConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information to be added to all events that are related to this game session
     * queue.</p>
     */
    inline const Aws::String& GetCustomEventData() const{ return m_customEventData; }
    inline bool CustomEventDataHasBeenSet() const { return m_customEventDataHasBeenSet; }
    inline void SetCustomEventData(const Aws::String& value) { m_customEventDataHasBeenSet = true; m_customEventData = value; }
    inline void SetCustomEventData(Aws::String&& value) { m_customEventDataHasBeenSet = true; m_customEventData = std::move(value); }
    inline void SetCustomEventData(const char* value) { m_customEventDataHasBeenSet = true; m_customEventData.assign(value); }
    inline UpdateGameSessionQueueRequest& WithCustomEventData(const Aws::String& value) { SetCustomEventData(value); return *this;}
    inline UpdateGameSessionQueueRequest& WithCustomEventData(Aws::String&& value) { SetCustomEventData(std::move(value)); return *this;}
    inline UpdateGameSessionQueueRequest& WithCustomEventData(const char* value) { SetCustomEventData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An SNS topic ARN that is set up to receive game session placement
     * notifications. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queue-notification.html">
     * Setting up notifications for game session placement</a>.</p>
     */
    inline const Aws::String& GetNotificationTarget() const{ return m_notificationTarget; }
    inline bool NotificationTargetHasBeenSet() const { return m_notificationTargetHasBeenSet; }
    inline void SetNotificationTarget(const Aws::String& value) { m_notificationTargetHasBeenSet = true; m_notificationTarget = value; }
    inline void SetNotificationTarget(Aws::String&& value) { m_notificationTargetHasBeenSet = true; m_notificationTarget = std::move(value); }
    inline void SetNotificationTarget(const char* value) { m_notificationTargetHasBeenSet = true; m_notificationTarget.assign(value); }
    inline UpdateGameSessionQueueRequest& WithNotificationTarget(const Aws::String& value) { SetNotificationTarget(value); return *this;}
    inline UpdateGameSessionQueueRequest& WithNotificationTarget(Aws::String&& value) { SetNotificationTarget(std::move(value)); return *this;}
    inline UpdateGameSessionQueueRequest& WithNotificationTarget(const char* value) { SetNotificationTarget(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

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
