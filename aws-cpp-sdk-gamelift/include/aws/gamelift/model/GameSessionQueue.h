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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Configuration of a queue that is used to process game session placement
   * requests. The queue configuration identifies several game features:</p> <ul>
   * <li> <p>The destinations where a new game session can potentially be hosted.
   * Amazon GameLift tries these destinations in an order based on either the queue's
   * default order or player latency information, if provided in a placement request.
   * With latency information, Amazon GameLift can place game sessions where the
   * majority of players are reporting the lowest possible latency. </p> </li> <li>
   * <p>The length of time that placement requests can wait in the queue before
   * timing out. </p> </li> <li> <p>A set of optional latency policies that protect
   * individual players from high latencies, preventing game sessions from being
   * placed where any individual player is reporting latency higher than a policy's
   * maximum.</p> </li> </ul> <ul> <li> <p> <a>CreateGameSessionQueue</a> </p> </li>
   * <li> <p> <a>DescribeGameSessionQueues</a> </p> </li> <li> <p>
   * <a>UpdateGameSessionQueue</a> </p> </li> <li> <p> <a>DeleteGameSessionQueue</a>
   * </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameSessionQueue">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API GameSessionQueue
  {
  public:
    GameSessionQueue();
    GameSessionQueue(Aws::Utils::Json::JsonView jsonValue);
    GameSessionQueue& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Descriptive label that is associated with game session queue. Queue names
     * must be unique within each region.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Descriptive label that is associated with game session queue. Queue names
     * must be unique within each region.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Descriptive label that is associated with game session queue. Queue names
     * must be unique within each region.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label that is associated with game session queue. Queue names
     * must be unique within each region.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Descriptive label that is associated with game session queue. Queue names
     * must be unique within each region.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Descriptive label that is associated with game session queue. Queue names
     * must be unique within each region.</p>
     */
    inline GameSessionQueue& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label that is associated with game session queue. Queue names
     * must be unique within each region.</p>
     */
    inline GameSessionQueue& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Descriptive label that is associated with game session queue. Queue names
     * must be unique within each region.</p>
     */
    inline GameSessionQueue& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a game session queue and uniquely identifies it. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;:&lt;aws
     * account&gt;:gamesessionqueue/&lt;queue name&gt;</code>.</p>
     */
    inline const Aws::String& GetGameSessionQueueArn() const{ return m_gameSessionQueueArn; }

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a game session queue and uniquely identifies it. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;:&lt;aws
     * account&gt;:gamesessionqueue/&lt;queue name&gt;</code>.</p>
     */
    inline bool GameSessionQueueArnHasBeenSet() const { return m_gameSessionQueueArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a game session queue and uniquely identifies it. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;:&lt;aws
     * account&gt;:gamesessionqueue/&lt;queue name&gt;</code>.</p>
     */
    inline void SetGameSessionQueueArn(const Aws::String& value) { m_gameSessionQueueArnHasBeenSet = true; m_gameSessionQueueArn = value; }

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a game session queue and uniquely identifies it. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;:&lt;aws
     * account&gt;:gamesessionqueue/&lt;queue name&gt;</code>.</p>
     */
    inline void SetGameSessionQueueArn(Aws::String&& value) { m_gameSessionQueueArnHasBeenSet = true; m_gameSessionQueueArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a game session queue and uniquely identifies it. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;:&lt;aws
     * account&gt;:gamesessionqueue/&lt;queue name&gt;</code>.</p>
     */
    inline void SetGameSessionQueueArn(const char* value) { m_gameSessionQueueArnHasBeenSet = true; m_gameSessionQueueArn.assign(value); }

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a game session queue and uniquely identifies it. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;:&lt;aws
     * account&gt;:gamesessionqueue/&lt;queue name&gt;</code>.</p>
     */
    inline GameSessionQueue& WithGameSessionQueueArn(const Aws::String& value) { SetGameSessionQueueArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a game session queue and uniquely identifies it. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;:&lt;aws
     * account&gt;:gamesessionqueue/&lt;queue name&gt;</code>.</p>
     */
    inline GameSessionQueue& WithGameSessionQueueArn(Aws::String&& value) { SetGameSessionQueueArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a game session queue and uniquely identifies it. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;:&lt;aws
     * account&gt;:gamesessionqueue/&lt;queue name&gt;</code>.</p>
     */
    inline GameSessionQueue& WithGameSessionQueueArn(const char* value) { SetGameSessionQueueArn(value); return *this;}


    /**
     * <p>Maximum time, in seconds, that a new game session placement request remains
     * in the queue. When a request exceeds this time, the game session placement
     * changes to a <code>TIMED_OUT</code> status.</p>
     */
    inline int GetTimeoutInSeconds() const{ return m_timeoutInSeconds; }

    /**
     * <p>Maximum time, in seconds, that a new game session placement request remains
     * in the queue. When a request exceeds this time, the game session placement
     * changes to a <code>TIMED_OUT</code> status.</p>
     */
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }

    /**
     * <p>Maximum time, in seconds, that a new game session placement request remains
     * in the queue. When a request exceeds this time, the game session placement
     * changes to a <code>TIMED_OUT</code> status.</p>
     */
    inline void SetTimeoutInSeconds(int value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }

    /**
     * <p>Maximum time, in seconds, that a new game session placement request remains
     * in the queue. When a request exceeds this time, the game session placement
     * changes to a <code>TIMED_OUT</code> status.</p>
     */
    inline GameSessionQueue& WithTimeoutInSeconds(int value) { SetTimeoutInSeconds(value); return *this;}


    /**
     * <p>Collection of latency policies to apply when processing game sessions
     * placement requests with player latency information. Multiple policies are
     * evaluated in order of the maximum latency value, starting with the lowest
     * latency values. With just one policy, it is enforced at the start of the game
     * session placement for the duration period. With multiple policies, each policy
     * is enforced consecutively for its duration period. For example, a queue might
     * enforce a 60-second policy followed by a 120-second policy, and then no policy
     * for the remainder of the placement. </p>
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
     * for the remainder of the placement. </p>
     */
    inline bool PlayerLatencyPoliciesHasBeenSet() const { return m_playerLatencyPoliciesHasBeenSet; }

    /**
     * <p>Collection of latency policies to apply when processing game sessions
     * placement requests with player latency information. Multiple policies are
     * evaluated in order of the maximum latency value, starting with the lowest
     * latency values. With just one policy, it is enforced at the start of the game
     * session placement for the duration period. With multiple policies, each policy
     * is enforced consecutively for its duration period. For example, a queue might
     * enforce a 60-second policy followed by a 120-second policy, and then no policy
     * for the remainder of the placement. </p>
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
     * for the remainder of the placement. </p>
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
     * for the remainder of the placement. </p>
     */
    inline GameSessionQueue& WithPlayerLatencyPolicies(const Aws::Vector<PlayerLatencyPolicy>& value) { SetPlayerLatencyPolicies(value); return *this;}

    /**
     * <p>Collection of latency policies to apply when processing game sessions
     * placement requests with player latency information. Multiple policies are
     * evaluated in order of the maximum latency value, starting with the lowest
     * latency values. With just one policy, it is enforced at the start of the game
     * session placement for the duration period. With multiple policies, each policy
     * is enforced consecutively for its duration period. For example, a queue might
     * enforce a 60-second policy followed by a 120-second policy, and then no policy
     * for the remainder of the placement. </p>
     */
    inline GameSessionQueue& WithPlayerLatencyPolicies(Aws::Vector<PlayerLatencyPolicy>&& value) { SetPlayerLatencyPolicies(std::move(value)); return *this;}

    /**
     * <p>Collection of latency policies to apply when processing game sessions
     * placement requests with player latency information. Multiple policies are
     * evaluated in order of the maximum latency value, starting with the lowest
     * latency values. With just one policy, it is enforced at the start of the game
     * session placement for the duration period. With multiple policies, each policy
     * is enforced consecutively for its duration period. For example, a queue might
     * enforce a 60-second policy followed by a 120-second policy, and then no policy
     * for the remainder of the placement. </p>
     */
    inline GameSessionQueue& AddPlayerLatencyPolicies(const PlayerLatencyPolicy& value) { m_playerLatencyPoliciesHasBeenSet = true; m_playerLatencyPolicies.push_back(value); return *this; }

    /**
     * <p>Collection of latency policies to apply when processing game sessions
     * placement requests with player latency information. Multiple policies are
     * evaluated in order of the maximum latency value, starting with the lowest
     * latency values. With just one policy, it is enforced at the start of the game
     * session placement for the duration period. With multiple policies, each policy
     * is enforced consecutively for its duration period. For example, a queue might
     * enforce a 60-second policy followed by a 120-second policy, and then no policy
     * for the remainder of the placement. </p>
     */
    inline GameSessionQueue& AddPlayerLatencyPolicies(PlayerLatencyPolicy&& value) { m_playerLatencyPoliciesHasBeenSet = true; m_playerLatencyPolicies.push_back(std::move(value)); return *this; }


    /**
     * <p>List of fleets that can be used to fulfill game session placement requests in
     * the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order.</p>
     */
    inline const Aws::Vector<GameSessionQueueDestination>& GetDestinations() const{ return m_destinations; }

    /**
     * <p>List of fleets that can be used to fulfill game session placement requests in
     * the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order.</p>
     */
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }

    /**
     * <p>List of fleets that can be used to fulfill game session placement requests in
     * the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order.</p>
     */
    inline void SetDestinations(const Aws::Vector<GameSessionQueueDestination>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * <p>List of fleets that can be used to fulfill game session placement requests in
     * the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order.</p>
     */
    inline void SetDestinations(Aws::Vector<GameSessionQueueDestination>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    /**
     * <p>List of fleets that can be used to fulfill game session placement requests in
     * the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order.</p>
     */
    inline GameSessionQueue& WithDestinations(const Aws::Vector<GameSessionQueueDestination>& value) { SetDestinations(value); return *this;}

    /**
     * <p>List of fleets that can be used to fulfill game session placement requests in
     * the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order.</p>
     */
    inline GameSessionQueue& WithDestinations(Aws::Vector<GameSessionQueueDestination>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p>List of fleets that can be used to fulfill game session placement requests in
     * the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order.</p>
     */
    inline GameSessionQueue& AddDestinations(const GameSessionQueueDestination& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * <p>List of fleets that can be used to fulfill game session placement requests in
     * the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order.</p>
     */
    inline GameSessionQueue& AddDestinations(GameSessionQueueDestination&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_gameSessionQueueArn;
    bool m_gameSessionQueueArnHasBeenSet;

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
