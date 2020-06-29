/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Fleet designated in a game session queue. Requests for new game sessions in
   * the queue are fulfilled by starting a new game session on any destination that
   * is configured for a queue. </p> <ul> <li> <p> <a>CreateGameSessionQueue</a> </p>
   * </li> <li> <p> <a>DescribeGameSessionQueues</a> </p> </li> <li> <p>
   * <a>UpdateGameSessionQueue</a> </p> </li> <li> <p> <a>DeleteGameSessionQueue</a>
   * </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameSessionQueueDestination">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API GameSessionQueueDestination
  {
  public:
    GameSessionQueueDestination();
    GameSessionQueueDestination(Aws::Utils::Json::JsonView jsonValue);
    GameSessionQueueDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to fleet or fleet alias.
     * ARNs, which include a fleet ID or alias ID and a Region name, provide a unique
     * identifier across all Regions. </p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to fleet or fleet alias.
     * ARNs, which include a fleet ID or alias ID and a Region name, provide a unique
     * identifier across all Regions. </p>
     */
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to fleet or fleet alias.
     * ARNs, which include a fleet ID or alias ID and a Region name, provide a unique
     * identifier across all Regions. </p>
     */
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to fleet or fleet alias.
     * ARNs, which include a fleet ID or alias ID and a Region name, provide a unique
     * identifier across all Regions. </p>
     */
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to fleet or fleet alias.
     * ARNs, which include a fleet ID or alias ID and a Region name, provide a unique
     * identifier across all Regions. </p>
     */
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to fleet or fleet alias.
     * ARNs, which include a fleet ID or alias ID and a Region name, provide a unique
     * identifier across all Regions. </p>
     */
    inline GameSessionQueueDestination& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to fleet or fleet alias.
     * ARNs, which include a fleet ID or alias ID and a Region name, provide a unique
     * identifier across all Regions. </p>
     */
    inline GameSessionQueueDestination& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to fleet or fleet alias.
     * ARNs, which include a fleet ID or alias ID and a Region name, provide a unique
     * identifier across all Regions. </p>
     */
    inline GameSessionQueueDestination& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}

  private:

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
