/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>Represents the input for a request action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateGameSessionQueueInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API UpdateGameSessionQueueRequest : public GameLiftRequest
  {
  public:
    UpdateGameSessionQueueRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Descriptive label that is associated with queue. Queue names must be unique
     * within each region.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Descriptive label that is associated with queue. Queue names must be unique
     * within each region.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label that is associated with queue. Queue names must be unique
     * within each region.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Descriptive label that is associated with queue. Queue names must be unique
     * within each region.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Descriptive label that is associated with queue. Queue names must be unique
     * within each region.</p>
     */
    inline UpdateGameSessionQueueRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label that is associated with queue. Queue names must be unique
     * within each region.</p>
     */
    inline UpdateGameSessionQueueRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Descriptive label that is associated with queue. Queue names must be unique
     * within each region.</p>
     */
    inline UpdateGameSessionQueueRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Maximum time, in seconds, that a new game session placement request remains
     * in the queue. When a request exceeds this time, the game session placement
     * changes to a TIMED_OUT status.</p>
     */
    inline int GetTimeoutInSeconds() const{ return m_timeoutInSeconds; }

    /**
     * <p>Maximum time, in seconds, that a new game session placement request remains
     * in the queue. When a request exceeds this time, the game session placement
     * changes to a TIMED_OUT status.</p>
     */
    inline void SetTimeoutInSeconds(int value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }

    /**
     * <p>Maximum time, in seconds, that a new game session placement request remains
     * in the queue. When a request exceeds this time, the game session placement
     * changes to a TIMED_OUT status.</p>
     */
    inline UpdateGameSessionQueueRequest& WithTimeoutInSeconds(int value) { SetTimeoutInSeconds(value); return *this;}

    /**
     * <p>Collection of latency policies to apply when processing game sessions
     * placement requests with player latency information. Multiple policies are
     * evaluated in order of the maximum latency value, starting with the lowest
     * latency values. With just one policy, it is enforced at the start of the game
     * session placement for the duration period. With multiple policies, each policy
     * is enforced consecutively for its duration period. For example, a queue might
     * enforce a 60-second policy followed by a 120-second policy, and then no policy
     * for the remainder of the placement. When updating policies, provide a complete
     * collection of policies.</p>
     */
    inline const Aws::Vector<PlayerLatencyPolicy>& GetPlayerLatencyPolicies() const{ return m_playerLatencyPolicies; }

    /**
     * <p>Collection of latency policies to apply when processing game sessions
     * placement requests with player latency information. Multiple policies are
     * evaluated in order of the maximum latency value, starting with the lowest
     * latency values. With just one policy, it is enforced at the start of the game
     * session placement for the duration period. With multiple policies, each policy
     * is enforced consecutively for its duration period. For example, a queue might
     * enforce a 60-second policy followed by a 120-second policy, and then no policy
     * for the remainder of the placement. When updating policies, provide a complete
     * collection of policies.</p>
     */
    inline void SetPlayerLatencyPolicies(const Aws::Vector<PlayerLatencyPolicy>& value) { m_playerLatencyPoliciesHasBeenSet = true; m_playerLatencyPolicies = value; }

    /**
     * <p>Collection of latency policies to apply when processing game sessions
     * placement requests with player latency information. Multiple policies are
     * evaluated in order of the maximum latency value, starting with the lowest
     * latency values. With just one policy, it is enforced at the start of the game
     * session placement for the duration period. With multiple policies, each policy
     * is enforced consecutively for its duration period. For example, a queue might
     * enforce a 60-second policy followed by a 120-second policy, and then no policy
     * for the remainder of the placement. When updating policies, provide a complete
     * collection of policies.</p>
     */
    inline void SetPlayerLatencyPolicies(Aws::Vector<PlayerLatencyPolicy>&& value) { m_playerLatencyPoliciesHasBeenSet = true; m_playerLatencyPolicies = std::move(value); }

    /**
     * <p>Collection of latency policies to apply when processing game sessions
     * placement requests with player latency information. Multiple policies are
     * evaluated in order of the maximum latency value, starting with the lowest
     * latency values. With just one policy, it is enforced at the start of the game
     * session placement for the duration period. With multiple policies, each policy
     * is enforced consecutively for its duration period. For example, a queue might
     * enforce a 60-second policy followed by a 120-second policy, and then no policy
     * for the remainder of the placement. When updating policies, provide a complete
     * collection of policies.</p>
     */
    inline UpdateGameSessionQueueRequest& WithPlayerLatencyPolicies(const Aws::Vector<PlayerLatencyPolicy>& value) { SetPlayerLatencyPolicies(value); return *this;}

    /**
     * <p>Collection of latency policies to apply when processing game sessions
     * placement requests with player latency information. Multiple policies are
     * evaluated in order of the maximum latency value, starting with the lowest
     * latency values. With just one policy, it is enforced at the start of the game
     * session placement for the duration period. With multiple policies, each policy
     * is enforced consecutively for its duration period. For example, a queue might
     * enforce a 60-second policy followed by a 120-second policy, and then no policy
     * for the remainder of the placement. When updating policies, provide a complete
     * collection of policies.</p>
     */
    inline UpdateGameSessionQueueRequest& WithPlayerLatencyPolicies(Aws::Vector<PlayerLatencyPolicy>&& value) { SetPlayerLatencyPolicies(std::move(value)); return *this;}

    /**
     * <p>Collection of latency policies to apply when processing game sessions
     * placement requests with player latency information. Multiple policies are
     * evaluated in order of the maximum latency value, starting with the lowest
     * latency values. With just one policy, it is enforced at the start of the game
     * session placement for the duration period. With multiple policies, each policy
     * is enforced consecutively for its duration period. For example, a queue might
     * enforce a 60-second policy followed by a 120-second policy, and then no policy
     * for the remainder of the placement. When updating policies, provide a complete
     * collection of policies.</p>
     */
    inline UpdateGameSessionQueueRequest& AddPlayerLatencyPolicies(const PlayerLatencyPolicy& value) { m_playerLatencyPoliciesHasBeenSet = true; m_playerLatencyPolicies.push_back(value); return *this; }

    /**
     * <p>Collection of latency policies to apply when processing game sessions
     * placement requests with player latency information. Multiple policies are
     * evaluated in order of the maximum latency value, starting with the lowest
     * latency values. With just one policy, it is enforced at the start of the game
     * session placement for the duration period. With multiple policies, each policy
     * is enforced consecutively for its duration period. For example, a queue might
     * enforce a 60-second policy followed by a 120-second policy, and then no policy
     * for the remainder of the placement. When updating policies, provide a complete
     * collection of policies.</p>
     */
    inline UpdateGameSessionQueueRequest& AddPlayerLatencyPolicies(PlayerLatencyPolicy&& value) { m_playerLatencyPoliciesHasBeenSet = true; m_playerLatencyPolicies.push_back(std::move(value)); return *this; }

    /**
     * <p>List of fleets that can be used to fulfill game session placement requests in
     * the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order. When updating this list,
     * provide a complete list of destinations.</p>
     */
    inline const Aws::Vector<GameSessionQueueDestination>& GetDestinations() const{ return m_destinations; }

    /**
     * <p>List of fleets that can be used to fulfill game session placement requests in
     * the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order. When updating this list,
     * provide a complete list of destinations.</p>
     */
    inline void SetDestinations(const Aws::Vector<GameSessionQueueDestination>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * <p>List of fleets that can be used to fulfill game session placement requests in
     * the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order. When updating this list,
     * provide a complete list of destinations.</p>
     */
    inline void SetDestinations(Aws::Vector<GameSessionQueueDestination>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    /**
     * <p>List of fleets that can be used to fulfill game session placement requests in
     * the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order. When updating this list,
     * provide a complete list of destinations.</p>
     */
    inline UpdateGameSessionQueueRequest& WithDestinations(const Aws::Vector<GameSessionQueueDestination>& value) { SetDestinations(value); return *this;}

    /**
     * <p>List of fleets that can be used to fulfill game session placement requests in
     * the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order. When updating this list,
     * provide a complete list of destinations.</p>
     */
    inline UpdateGameSessionQueueRequest& WithDestinations(Aws::Vector<GameSessionQueueDestination>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p>List of fleets that can be used to fulfill game session placement requests in
     * the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order. When updating this list,
     * provide a complete list of destinations.</p>
     */
    inline UpdateGameSessionQueueRequest& AddDestinations(const GameSessionQueueDestination& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * <p>List of fleets that can be used to fulfill game session placement requests in
     * the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order. When updating this list,
     * provide a complete list of destinations.</p>
     */
    inline UpdateGameSessionQueueRequest& AddDestinations(GameSessionQueueDestination&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    int m_timeoutInSeconds;
    bool m_timeoutInSecondsHasBeenSet;
    Aws::Vector<PlayerLatencyPolicy> m_playerLatencyPolicies;
    bool m_playerLatencyPoliciesHasBeenSet;
    Aws::Vector<GameSessionQueueDestination> m_destinations;
    bool m_destinationsHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
