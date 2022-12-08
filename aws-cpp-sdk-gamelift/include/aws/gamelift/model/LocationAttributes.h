/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/LocationState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/LocationUpdateStatus.h>
#include <aws/gamelift/model/FleetAction.h>
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
   * <p>Details about a location in a multi-location fleet.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/LocationAttributes">AWS
   * API Reference</a></p>
   */
  class LocationAttributes
  {
  public:
    AWS_GAMELIFT_API LocationAttributes();
    AWS_GAMELIFT_API LocationAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API LocationAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A fleet location and its current life-cycle state.</p>
     */
    inline const LocationState& GetLocationState() const{ return m_locationState; }

    /**
     * <p>A fleet location and its current life-cycle state.</p>
     */
    inline bool LocationStateHasBeenSet() const { return m_locationStateHasBeenSet; }

    /**
     * <p>A fleet location and its current life-cycle state.</p>
     */
    inline void SetLocationState(const LocationState& value) { m_locationStateHasBeenSet = true; m_locationState = value; }

    /**
     * <p>A fleet location and its current life-cycle state.</p>
     */
    inline void SetLocationState(LocationState&& value) { m_locationStateHasBeenSet = true; m_locationState = std::move(value); }

    /**
     * <p>A fleet location and its current life-cycle state.</p>
     */
    inline LocationAttributes& WithLocationState(const LocationState& value) { SetLocationState(value); return *this;}

    /**
     * <p>A fleet location and its current life-cycle state.</p>
     */
    inline LocationAttributes& WithLocationState(LocationState&& value) { SetLocationState(std::move(value)); return *this;}


    /**
     * <p>A list of fleet actions that have been suspended in the fleet location.</p>
     */
    inline const Aws::Vector<FleetAction>& GetStoppedActions() const{ return m_stoppedActions; }

    /**
     * <p>A list of fleet actions that have been suspended in the fleet location.</p>
     */
    inline bool StoppedActionsHasBeenSet() const { return m_stoppedActionsHasBeenSet; }

    /**
     * <p>A list of fleet actions that have been suspended in the fleet location.</p>
     */
    inline void SetStoppedActions(const Aws::Vector<FleetAction>& value) { m_stoppedActionsHasBeenSet = true; m_stoppedActions = value; }

    /**
     * <p>A list of fleet actions that have been suspended in the fleet location.</p>
     */
    inline void SetStoppedActions(Aws::Vector<FleetAction>&& value) { m_stoppedActionsHasBeenSet = true; m_stoppedActions = std::move(value); }

    /**
     * <p>A list of fleet actions that have been suspended in the fleet location.</p>
     */
    inline LocationAttributes& WithStoppedActions(const Aws::Vector<FleetAction>& value) { SetStoppedActions(value); return *this;}

    /**
     * <p>A list of fleet actions that have been suspended in the fleet location.</p>
     */
    inline LocationAttributes& WithStoppedActions(Aws::Vector<FleetAction>&& value) { SetStoppedActions(std::move(value)); return *this;}

    /**
     * <p>A list of fleet actions that have been suspended in the fleet location.</p>
     */
    inline LocationAttributes& AddStoppedActions(const FleetAction& value) { m_stoppedActionsHasBeenSet = true; m_stoppedActions.push_back(value); return *this; }

    /**
     * <p>A list of fleet actions that have been suspended in the fleet location.</p>
     */
    inline LocationAttributes& AddStoppedActions(FleetAction&& value) { m_stoppedActionsHasBeenSet = true; m_stoppedActions.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of fleet activity updates to the location. The status
     * <code>PENDING_UPDATE</code> indicates that <code>StopFleetActions</code> or
     * <code>StartFleetActions</code> has been requested but the update has not yet
     * been completed for the location.</p>
     */
    inline const LocationUpdateStatus& GetUpdateStatus() const{ return m_updateStatus; }

    /**
     * <p>The status of fleet activity updates to the location. The status
     * <code>PENDING_UPDATE</code> indicates that <code>StopFleetActions</code> or
     * <code>StartFleetActions</code> has been requested but the update has not yet
     * been completed for the location.</p>
     */
    inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }

    /**
     * <p>The status of fleet activity updates to the location. The status
     * <code>PENDING_UPDATE</code> indicates that <code>StopFleetActions</code> or
     * <code>StartFleetActions</code> has been requested but the update has not yet
     * been completed for the location.</p>
     */
    inline void SetUpdateStatus(const LocationUpdateStatus& value) { m_updateStatusHasBeenSet = true; m_updateStatus = value; }

    /**
     * <p>The status of fleet activity updates to the location. The status
     * <code>PENDING_UPDATE</code> indicates that <code>StopFleetActions</code> or
     * <code>StartFleetActions</code> has been requested but the update has not yet
     * been completed for the location.</p>
     */
    inline void SetUpdateStatus(LocationUpdateStatus&& value) { m_updateStatusHasBeenSet = true; m_updateStatus = std::move(value); }

    /**
     * <p>The status of fleet activity updates to the location. The status
     * <code>PENDING_UPDATE</code> indicates that <code>StopFleetActions</code> or
     * <code>StartFleetActions</code> has been requested but the update has not yet
     * been completed for the location.</p>
     */
    inline LocationAttributes& WithUpdateStatus(const LocationUpdateStatus& value) { SetUpdateStatus(value); return *this;}

    /**
     * <p>The status of fleet activity updates to the location. The status
     * <code>PENDING_UPDATE</code> indicates that <code>StopFleetActions</code> or
     * <code>StartFleetActions</code> has been requested but the update has not yet
     * been completed for the location.</p>
     */
    inline LocationAttributes& WithUpdateStatus(LocationUpdateStatus&& value) { SetUpdateStatus(std::move(value)); return *this;}

  private:

    LocationState m_locationState;
    bool m_locationStateHasBeenSet = false;

    Aws::Vector<FleetAction> m_stoppedActions;
    bool m_stoppedActionsHasBeenSet = false;

    LocationUpdateStatus m_updateStatus;
    bool m_updateStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
