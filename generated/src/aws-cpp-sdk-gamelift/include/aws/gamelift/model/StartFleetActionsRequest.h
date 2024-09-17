/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/FleetAction.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class StartFleetActionsRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API StartFleetActionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartFleetActions"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for the fleet to restart actions on. You can use either
     * the fleet ID or ARN value.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }
    inline StartFleetActionsRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline StartFleetActionsRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline StartFleetActionsRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of actions to restart on the fleet.</p>
     */
    inline const Aws::Vector<FleetAction>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<FleetAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<FleetAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline StartFleetActionsRequest& WithActions(const Aws::Vector<FleetAction>& value) { SetActions(value); return *this;}
    inline StartFleetActionsRequest& WithActions(Aws::Vector<FleetAction>&& value) { SetActions(std::move(value)); return *this;}
    inline StartFleetActionsRequest& AddActions(const FleetAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline StartFleetActionsRequest& AddActions(FleetAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The fleet location to restart fleet actions for. Specify a location in the
     * form of an Amazon Web Services Region code, such as <code>us-west-2</code>.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline StartFleetActionsRequest& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline StartFleetActionsRequest& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline StartFleetActionsRequest& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}
  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::Vector<FleetAction> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
