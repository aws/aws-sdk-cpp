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
    AWS_GAMELIFT_API UpdateGameSessionQueueRequest() = default;

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
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateGameSessionQueueRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum time, in seconds, that a new game session placement request
     * remains in the queue. When a request exceeds this time, the game session
     * placement changes to a <code>TIMED_OUT</code> status.</p>
     */
    inline int GetTimeoutInSeconds() const { return m_timeoutInSeconds; }
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }
    inline void SetTimeoutInSeconds(int value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }
    inline UpdateGameSessionQueueRequest& WithTimeoutInSeconds(int value) { SetTimeoutInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of policies that enforce a sliding cap on player latency when
     * processing game sessions placement requests. Use multiple policies to gradually
     * relax the cap over time if Amazon GameLift Servers can't make a placement.
     * Policies are evaluated in order starting with the lowest maximum latency value.
     * When updating policies, provide a complete collection of policies.</p>
     */
    inline const Aws::Vector<PlayerLatencyPolicy>& GetPlayerLatencyPolicies() const { return m_playerLatencyPolicies; }
    inline bool PlayerLatencyPoliciesHasBeenSet() const { return m_playerLatencyPoliciesHasBeenSet; }
    template<typename PlayerLatencyPoliciesT = Aws::Vector<PlayerLatencyPolicy>>
    void SetPlayerLatencyPolicies(PlayerLatencyPoliciesT&& value) { m_playerLatencyPoliciesHasBeenSet = true; m_playerLatencyPolicies = std::forward<PlayerLatencyPoliciesT>(value); }
    template<typename PlayerLatencyPoliciesT = Aws::Vector<PlayerLatencyPolicy>>
    UpdateGameSessionQueueRequest& WithPlayerLatencyPolicies(PlayerLatencyPoliciesT&& value) { SetPlayerLatencyPolicies(std::forward<PlayerLatencyPoliciesT>(value)); return *this;}
    template<typename PlayerLatencyPoliciesT = PlayerLatencyPolicy>
    UpdateGameSessionQueueRequest& AddPlayerLatencyPolicies(PlayerLatencyPoliciesT&& value) { m_playerLatencyPoliciesHasBeenSet = true; m_playerLatencyPolicies.emplace_back(std::forward<PlayerLatencyPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of fleets and/or fleet aliases that can be used to fulfill game
     * session placement requests in the queue. Destinations are identified by either a
     * fleet ARN or a fleet alias ARN, and are listed in order of placement preference.
     * When updating this list, provide a complete list of destinations.</p>
     */
    inline const Aws::Vector<GameSessionQueueDestination>& GetDestinations() const { return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    template<typename DestinationsT = Aws::Vector<GameSessionQueueDestination>>
    void SetDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations = std::forward<DestinationsT>(value); }
    template<typename DestinationsT = Aws::Vector<GameSessionQueueDestination>>
    UpdateGameSessionQueueRequest& WithDestinations(DestinationsT&& value) { SetDestinations(std::forward<DestinationsT>(value)); return *this;}
    template<typename DestinationsT = GameSessionQueueDestination>
    UpdateGameSessionQueueRequest& AddDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations.emplace_back(std::forward<DestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of locations where a queue is allowed to place new game sessions.
     * Locations are specified in the form of Amazon Web Services Region codes, such as
     * <code>us-west-2</code>. If this parameter is not set, game sessions can be
     * placed in any queue location. To remove an existing filter configuration, pass
     * in an empty set.</p>
     */
    inline const FilterConfiguration& GetFilterConfiguration() const { return m_filterConfiguration; }
    inline bool FilterConfigurationHasBeenSet() const { return m_filterConfigurationHasBeenSet; }
    template<typename FilterConfigurationT = FilterConfiguration>
    void SetFilterConfiguration(FilterConfigurationT&& value) { m_filterConfigurationHasBeenSet = true; m_filterConfiguration = std::forward<FilterConfigurationT>(value); }
    template<typename FilterConfigurationT = FilterConfiguration>
    UpdateGameSessionQueueRequest& WithFilterConfiguration(FilterConfigurationT&& value) { SetFilterConfiguration(std::forward<FilterConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom settings to use when prioritizing destinations and locations for game
     * session placements. This configuration replaces the FleetIQ default
     * prioritization process. Priority types that are not explicitly named will be
     * automatically applied at the end of the prioritization process. To remove an
     * existing priority configuration, pass in an empty set.</p>
     */
    inline const PriorityConfiguration& GetPriorityConfiguration() const { return m_priorityConfiguration; }
    inline bool PriorityConfigurationHasBeenSet() const { return m_priorityConfigurationHasBeenSet; }
    template<typename PriorityConfigurationT = PriorityConfiguration>
    void SetPriorityConfiguration(PriorityConfigurationT&& value) { m_priorityConfigurationHasBeenSet = true; m_priorityConfiguration = std::forward<PriorityConfigurationT>(value); }
    template<typename PriorityConfigurationT = PriorityConfiguration>
    UpdateGameSessionQueueRequest& WithPriorityConfiguration(PriorityConfigurationT&& value) { SetPriorityConfiguration(std::forward<PriorityConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information to be added to all events that are related to this game session
     * queue.</p>
     */
    inline const Aws::String& GetCustomEventData() const { return m_customEventData; }
    inline bool CustomEventDataHasBeenSet() const { return m_customEventDataHasBeenSet; }
    template<typename CustomEventDataT = Aws::String>
    void SetCustomEventData(CustomEventDataT&& value) { m_customEventDataHasBeenSet = true; m_customEventData = std::forward<CustomEventDataT>(value); }
    template<typename CustomEventDataT = Aws::String>
    UpdateGameSessionQueueRequest& WithCustomEventData(CustomEventDataT&& value) { SetCustomEventData(std::forward<CustomEventDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An SNS topic ARN that is set up to receive game session placement
     * notifications. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queue-notification.html">
     * Setting up notifications for game session placement</a>.</p>
     */
    inline const Aws::String& GetNotificationTarget() const { return m_notificationTarget; }
    inline bool NotificationTargetHasBeenSet() const { return m_notificationTargetHasBeenSet; }
    template<typename NotificationTargetT = Aws::String>
    void SetNotificationTarget(NotificationTargetT&& value) { m_notificationTargetHasBeenSet = true; m_notificationTarget = std::forward<NotificationTargetT>(value); }
    template<typename NotificationTargetT = Aws::String>
    UpdateGameSessionQueueRequest& WithNotificationTarget(NotificationTargetT&& value) { SetNotificationTarget(std::forward<NotificationTargetT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_timeoutInSeconds{0};
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
