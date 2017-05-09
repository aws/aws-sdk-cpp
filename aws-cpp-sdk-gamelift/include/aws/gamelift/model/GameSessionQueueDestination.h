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
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Fleet designated in a game session queue. Requests for new game sessions in
   * the queue are fulfilled by starting a new game session on any destination
   * configured for a queue. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameSessionQueueDestination">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API GameSessionQueueDestination
  {
  public:
    GameSessionQueueDestination();
    GameSessionQueueDestination(const Aws::Utils::Json::JsonValue& jsonValue);
    GameSessionQueueDestination& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Amazon Resource Name (ARN) assigned to fleet or fleet alias. ARNs, which
     * include a fleet ID or alias ID and a region name, provide a unique identifier
     * across all regions. </p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }

    /**
     * <p>Amazon Resource Name (ARN) assigned to fleet or fleet alias. ARNs, which
     * include a fleet ID or alias ID and a region name, provide a unique identifier
     * across all regions. </p>
     */
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) assigned to fleet or fleet alias. ARNs, which
     * include a fleet ID or alias ID and a region name, provide a unique identifier
     * across all regions. </p>
     */
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) assigned to fleet or fleet alias. ARNs, which
     * include a fleet ID or alias ID and a region name, provide a unique identifier
     * across all regions. </p>
     */
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) assigned to fleet or fleet alias. ARNs, which
     * include a fleet ID or alias ID and a region name, provide a unique identifier
     * across all regions. </p>
     */
    inline GameSessionQueueDestination& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) assigned to fleet or fleet alias. ARNs, which
     * include a fleet ID or alias ID and a region name, provide a unique identifier
     * across all regions. </p>
     */
    inline GameSessionQueueDestination& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) assigned to fleet or fleet alias. ARNs, which
     * include a fleet ID or alias ID and a region name, provide a unique identifier
     * across all regions. </p>
     */
    inline GameSessionQueueDestination& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}

  private:
    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
