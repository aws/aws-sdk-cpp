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
   * <p>Current status of fleet utilization, including the number of game and player
   * sessions being hosted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/FleetUtilization">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API FleetUtilization
  {
  public:
    FleetUtilization();
    FleetUtilization(const Aws::Utils::Json::JsonValue& jsonValue);
    FleetUtilization& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline FleetUtilization& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline FleetUtilization& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline FleetUtilization& WithFleetId(const char* value) { SetFleetId(value); return *this;}

    /**
     * <p>Number of server processes in an <code>ACTIVE</code> status currently running
     * across all instances in the fleet</p>
     */
    inline int GetActiveServerProcessCount() const{ return m_activeServerProcessCount; }

    /**
     * <p>Number of server processes in an <code>ACTIVE</code> status currently running
     * across all instances in the fleet</p>
     */
    inline void SetActiveServerProcessCount(int value) { m_activeServerProcessCountHasBeenSet = true; m_activeServerProcessCount = value; }

    /**
     * <p>Number of server processes in an <code>ACTIVE</code> status currently running
     * across all instances in the fleet</p>
     */
    inline FleetUtilization& WithActiveServerProcessCount(int value) { SetActiveServerProcessCount(value); return *this;}

    /**
     * <p>Number of active game sessions currently being hosted on all instances in the
     * fleet.</p>
     */
    inline int GetActiveGameSessionCount() const{ return m_activeGameSessionCount; }

    /**
     * <p>Number of active game sessions currently being hosted on all instances in the
     * fleet.</p>
     */
    inline void SetActiveGameSessionCount(int value) { m_activeGameSessionCountHasBeenSet = true; m_activeGameSessionCount = value; }

    /**
     * <p>Number of active game sessions currently being hosted on all instances in the
     * fleet.</p>
     */
    inline FleetUtilization& WithActiveGameSessionCount(int value) { SetActiveGameSessionCount(value); return *this;}

    /**
     * <p>Number of active player sessions currently being hosted on all instances in
     * the fleet.</p>
     */
    inline int GetCurrentPlayerSessionCount() const{ return m_currentPlayerSessionCount; }

    /**
     * <p>Number of active player sessions currently being hosted on all instances in
     * the fleet.</p>
     */
    inline void SetCurrentPlayerSessionCount(int value) { m_currentPlayerSessionCountHasBeenSet = true; m_currentPlayerSessionCount = value; }

    /**
     * <p>Number of active player sessions currently being hosted on all instances in
     * the fleet.</p>
     */
    inline FleetUtilization& WithCurrentPlayerSessionCount(int value) { SetCurrentPlayerSessionCount(value); return *this;}

    /**
     * <p>Maximum players allowed across all game sessions currently being hosted on
     * all instances in the fleet.</p>
     */
    inline int GetMaximumPlayerSessionCount() const{ return m_maximumPlayerSessionCount; }

    /**
     * <p>Maximum players allowed across all game sessions currently being hosted on
     * all instances in the fleet.</p>
     */
    inline void SetMaximumPlayerSessionCount(int value) { m_maximumPlayerSessionCountHasBeenSet = true; m_maximumPlayerSessionCount = value; }

    /**
     * <p>Maximum players allowed across all game sessions currently being hosted on
     * all instances in the fleet.</p>
     */
    inline FleetUtilization& WithMaximumPlayerSessionCount(int value) { SetMaximumPlayerSessionCount(value); return *this;}

  private:
    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;
    int m_activeServerProcessCount;
    bool m_activeServerProcessCountHasBeenSet;
    int m_activeGameSessionCount;
    bool m_activeGameSessionCountHasBeenSet;
    int m_currentPlayerSessionCount;
    bool m_currentPlayerSessionCountHasBeenSet;
    int m_maximumPlayerSessionCount;
    bool m_maximumPlayerSessionCountHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
