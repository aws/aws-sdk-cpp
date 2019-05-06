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
  class AWS_GAMELIFT_API StartFleetActionsRequest : public GameLiftRequest
  {
  public:
    StartFleetActionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartFleetActions"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Unique identifier for a fleet</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for a fleet</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>Unique identifier for a fleet</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>Unique identifier for a fleet</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identifier for a fleet</p>
     */
    inline StartFleetActionsRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet</p>
     */
    inline StartFleetActionsRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a fleet</p>
     */
    inline StartFleetActionsRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>List of actions to restart on the fleet.</p>
     */
    inline const Aws::Vector<FleetAction>& GetActions() const{ return m_actions; }

    /**
     * <p>List of actions to restart on the fleet.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>List of actions to restart on the fleet.</p>
     */
    inline void SetActions(const Aws::Vector<FleetAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>List of actions to restart on the fleet.</p>
     */
    inline void SetActions(Aws::Vector<FleetAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>List of actions to restart on the fleet.</p>
     */
    inline StartFleetActionsRequest& WithActions(const Aws::Vector<FleetAction>& value) { SetActions(value); return *this;}

    /**
     * <p>List of actions to restart on the fleet.</p>
     */
    inline StartFleetActionsRequest& WithActions(Aws::Vector<FleetAction>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>List of actions to restart on the fleet.</p>
     */
    inline StartFleetActionsRequest& AddActions(const FleetAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>List of actions to restart on the fleet.</p>
     */
    inline StartFleetActionsRequest& AddActions(FleetAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;

    Aws::Vector<FleetAction> m_actions;
    bool m_actionsHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
