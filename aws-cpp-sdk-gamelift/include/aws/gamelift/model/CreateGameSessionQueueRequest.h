/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/PlayerLatencyPolicy.h>
#include <aws/gamelift/model/GameSessionQueueDestination.h>
#include <aws/gamelift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateGameSessionQueueInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API CreateGameSessionQueueRequest : public GameLiftRequest
  {
  public:
    CreateGameSessionQueueRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGameSessionQueue"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline CreateGameSessionQueueRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A descriptive label that is associated with game session queue. Queue names
     * must be unique within each Region.</p>
     */
    inline CreateGameSessionQueueRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A descriptive label that is associated with game session queue. Queue names
     * must be unique within each Region.</p>
     */
    inline CreateGameSessionQueueRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The maximum time, in seconds, that a new game session placement request
     * remains in the queue. When a request exceeds this time, the game session
     * placement changes to a <code>TIMED_OUT</code> status.</p>
     */
    inline int GetTimeoutInSeconds() const{ return m_timeoutInSeconds; }

    /**
     * <p>The maximum time, in seconds, that a new game session placement request
     * remains in the queue. When a request exceeds this time, the game session
     * placement changes to a <code>TIMED_OUT</code> status.</p>
     */
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }

    /**
     * <p>The maximum time, in seconds, that a new game session placement request
     * remains in the queue. When a request exceeds this time, the game session
     * placement changes to a <code>TIMED_OUT</code> status.</p>
     */
    inline void SetTimeoutInSeconds(int value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }

    /**
     * <p>The maximum time, in seconds, that a new game session placement request
     * remains in the queue. When a request exceeds this time, the game session
     * placement changes to a <code>TIMED_OUT</code> status.</p>
     */
    inline CreateGameSessionQueueRequest& WithTimeoutInSeconds(int value) { SetTimeoutInSeconds(value); return *this;}


    /**
     * <p>A collection of latency policies to apply when processing game sessions
     * placement requests with player latency information. Multiple policies are
     * evaluated in order of the maximum latency value, starting with the lowest
     * latency values. With just one policy, the policy is enforced at the start of the
     * game session placement for the duration period. With multiple policies, each
     * policy is enforced consecutively for its duration period. For example, a queue
     * might enforce a 60-second policy followed by a 120-second policy, and then no
     * policy for the remainder of the placement. A player latency policy must set a
     * value for <code>MaximumIndividualPlayerLatencyMilliseconds</code>. If none is
     * set, this API request fails.</p>
     */
    inline const Aws::Vector<PlayerLatencyPolicy>& GetPlayerLatencyPolicies() const{ return m_playerLatencyPolicies; }

    /**
     * <p>A collection of latency policies to apply when processing game sessions
     * placement requests with player latency information. Multiple policies are
     * evaluated in order of the maximum latency value, starting with the lowest
     * latency values. With just one policy, the policy is enforced at the start of the
     * game session placement for the duration period. With multiple policies, each
     * policy is enforced consecutively for its duration period. For example, a queue
     * might enforce a 60-second policy followed by a 120-second policy, and then no
     * policy for the remainder of the placement. A player latency policy must set a
     * value for <code>MaximumIndividualPlayerLatencyMilliseconds</code>. If none is
     * set, this API request fails.</p>
     */
    inline bool PlayerLatencyPoliciesHasBeenSet() const { return m_playerLatencyPoliciesHasBeenSet; }

    /**
     * <p>A collection of latency policies to apply when processing game sessions
     * placement requests with player latency information. Multiple policies are
     * evaluated in order of the maximum latency value, starting with the lowest
     * latency values. With just one policy, the policy is enforced at the start of the
     * game session placement for the duration period. With multiple policies, each
     * policy is enforced consecutively for its duration period. For example, a queue
     * might enforce a 60-second policy followed by a 120-second policy, and then no
     * policy for the remainder of the placement. A player latency policy must set a
     * value for <code>MaximumIndividualPlayerLatencyMilliseconds</code>. If none is
     * set, this API request fails.</p>
     */
    inline void SetPlayerLatencyPolicies(const Aws::Vector<PlayerLatencyPolicy>& value) { m_playerLatencyPoliciesHasBeenSet = true; m_playerLatencyPolicies = value; }

    /**
     * <p>A collection of latency policies to apply when processing game sessions
     * placement requests with player latency information. Multiple policies are
     * evaluated in order of the maximum latency value, starting with the lowest
     * latency values. With just one policy, the policy is enforced at the start of the
     * game session placement for the duration period. With multiple policies, each
     * policy is enforced consecutively for its duration period. For example, a queue
     * might enforce a 60-second policy followed by a 120-second policy, and then no
     * policy for the remainder of the placement. A player latency policy must set a
     * value for <code>MaximumIndividualPlayerLatencyMilliseconds</code>. If none is
     * set, this API request fails.</p>
     */
    inline void SetPlayerLatencyPolicies(Aws::Vector<PlayerLatencyPolicy>&& value) { m_playerLatencyPoliciesHasBeenSet = true; m_playerLatencyPolicies = std::move(value); }

    /**
     * <p>A collection of latency policies to apply when processing game sessions
     * placement requests with player latency information. Multiple policies are
     * evaluated in order of the maximum latency value, starting with the lowest
     * latency values. With just one policy, the policy is enforced at the start of the
     * game session placement for the duration period. With multiple policies, each
     * policy is enforced consecutively for its duration period. For example, a queue
     * might enforce a 60-second policy followed by a 120-second policy, and then no
     * policy for the remainder of the placement. A player latency policy must set a
     * value for <code>MaximumIndividualPlayerLatencyMilliseconds</code>. If none is
     * set, this API request fails.</p>
     */
    inline CreateGameSessionQueueRequest& WithPlayerLatencyPolicies(const Aws::Vector<PlayerLatencyPolicy>& value) { SetPlayerLatencyPolicies(value); return *this;}

    /**
     * <p>A collection of latency policies to apply when processing game sessions
     * placement requests with player latency information. Multiple policies are
     * evaluated in order of the maximum latency value, starting with the lowest
     * latency values. With just one policy, the policy is enforced at the start of the
     * game session placement for the duration period. With multiple policies, each
     * policy is enforced consecutively for its duration period. For example, a queue
     * might enforce a 60-second policy followed by a 120-second policy, and then no
     * policy for the remainder of the placement. A player latency policy must set a
     * value for <code>MaximumIndividualPlayerLatencyMilliseconds</code>. If none is
     * set, this API request fails.</p>
     */
    inline CreateGameSessionQueueRequest& WithPlayerLatencyPolicies(Aws::Vector<PlayerLatencyPolicy>&& value) { SetPlayerLatencyPolicies(std::move(value)); return *this;}

    /**
     * <p>A collection of latency policies to apply when processing game sessions
     * placement requests with player latency information. Multiple policies are
     * evaluated in order of the maximum latency value, starting with the lowest
     * latency values. With just one policy, the policy is enforced at the start of the
     * game session placement for the duration period. With multiple policies, each
     * policy is enforced consecutively for its duration period. For example, a queue
     * might enforce a 60-second policy followed by a 120-second policy, and then no
     * policy for the remainder of the placement. A player latency policy must set a
     * value for <code>MaximumIndividualPlayerLatencyMilliseconds</code>. If none is
     * set, this API request fails.</p>
     */
    inline CreateGameSessionQueueRequest& AddPlayerLatencyPolicies(const PlayerLatencyPolicy& value) { m_playerLatencyPoliciesHasBeenSet = true; m_playerLatencyPolicies.push_back(value); return *this; }

    /**
     * <p>A collection of latency policies to apply when processing game sessions
     * placement requests with player latency information. Multiple policies are
     * evaluated in order of the maximum latency value, starting with the lowest
     * latency values. With just one policy, the policy is enforced at the start of the
     * game session placement for the duration period. With multiple policies, each
     * policy is enforced consecutively for its duration period. For example, a queue
     * might enforce a 60-second policy followed by a 120-second policy, and then no
     * policy for the remainder of the placement. A player latency policy must set a
     * value for <code>MaximumIndividualPlayerLatencyMilliseconds</code>. If none is
     * set, this API request fails.</p>
     */
    inline CreateGameSessionQueueRequest& AddPlayerLatencyPolicies(PlayerLatencyPolicy&& value) { m_playerLatencyPoliciesHasBeenSet = true; m_playerLatencyPolicies.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of fleets that can be used to fulfill game session placement requests
     * in the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order.</p>
     */
    inline const Aws::Vector<GameSessionQueueDestination>& GetDestinations() const{ return m_destinations; }

    /**
     * <p>A list of fleets that can be used to fulfill game session placement requests
     * in the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order.</p>
     */
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }

    /**
     * <p>A list of fleets that can be used to fulfill game session placement requests
     * in the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order.</p>
     */
    inline void SetDestinations(const Aws::Vector<GameSessionQueueDestination>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * <p>A list of fleets that can be used to fulfill game session placement requests
     * in the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order.</p>
     */
    inline void SetDestinations(Aws::Vector<GameSessionQueueDestination>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    /**
     * <p>A list of fleets that can be used to fulfill game session placement requests
     * in the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order.</p>
     */
    inline CreateGameSessionQueueRequest& WithDestinations(const Aws::Vector<GameSessionQueueDestination>& value) { SetDestinations(value); return *this;}

    /**
     * <p>A list of fleets that can be used to fulfill game session placement requests
     * in the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order.</p>
     */
    inline CreateGameSessionQueueRequest& WithDestinations(Aws::Vector<GameSessionQueueDestination>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p>A list of fleets that can be used to fulfill game session placement requests
     * in the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order.</p>
     */
    inline CreateGameSessionQueueRequest& AddDestinations(const GameSessionQueueDestination& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * <p>A list of fleets that can be used to fulfill game session placement requests
     * in the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order.</p>
     */
    inline CreateGameSessionQueueRequest& AddDestinations(GameSessionQueueDestination&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of labels to assign to the new game session queue resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of labels to assign to the new game session queue resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of labels to assign to the new game session queue resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of labels to assign to the new game session queue resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of labels to assign to the new game session queue resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline CreateGameSessionQueueRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of labels to assign to the new game session queue resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline CreateGameSessionQueueRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of labels to assign to the new game session queue resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline CreateGameSessionQueueRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of labels to assign to the new game session queue resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline CreateGameSessionQueueRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    int m_timeoutInSeconds;
    bool m_timeoutInSecondsHasBeenSet;

    Aws::Vector<PlayerLatencyPolicy> m_playerLatencyPolicies;
    bool m_playerLatencyPoliciesHasBeenSet;

    Aws::Vector<GameSessionQueueDestination> m_destinations;
    bool m_destinationsHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
