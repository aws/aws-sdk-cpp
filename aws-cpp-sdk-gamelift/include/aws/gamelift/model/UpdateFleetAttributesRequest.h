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
#include <aws/gamelift/model/ProtectionPolicy.h>
#include <aws/gamelift/model/ResourceCreationLimitPolicy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateFleetAttributesInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API UpdateFleetAttributesRequest : public GameLiftRequest
  {
  public:
    UpdateFleetAttributesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Unique identifier for a fleet to update attribute metadata for.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for a fleet to update attribute metadata for.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet to update attribute metadata for.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>Unique identifier for a fleet to update attribute metadata for.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identifier for a fleet to update attribute metadata for.</p>
     */
    inline UpdateFleetAttributesRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet to update attribute metadata for.</p>
     */
    inline UpdateFleetAttributesRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a fleet to update attribute metadata for.</p>
     */
    inline UpdateFleetAttributesRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}

    /**
     * <p>Descriptive label that is associated with a fleet. Fleet names do not need to
     * be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Descriptive label that is associated with a fleet. Fleet names do not need to
     * be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label that is associated with a fleet. Fleet names do not need to
     * be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Descriptive label that is associated with a fleet. Fleet names do not need to
     * be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Descriptive label that is associated with a fleet. Fleet names do not need to
     * be unique.</p>
     */
    inline UpdateFleetAttributesRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label that is associated with a fleet. Fleet names do not need to
     * be unique.</p>
     */
    inline UpdateFleetAttributesRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Descriptive label that is associated with a fleet. Fleet names do not need to
     * be unique.</p>
     */
    inline UpdateFleetAttributesRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Human-readable description of a fleet.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Human-readable description of a fleet.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Human-readable description of a fleet.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Human-readable description of a fleet.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Human-readable description of a fleet.</p>
     */
    inline UpdateFleetAttributesRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Human-readable description of a fleet.</p>
     */
    inline UpdateFleetAttributesRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Human-readable description of a fleet.</p>
     */
    inline UpdateFleetAttributesRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>Game session protection policy to apply to all new instances created in this
     * fleet. Instances that already exist are not affected. You can set protection for
     * individual instances using <a>UpdateGameSession</a>.</p> <ul> <li> <p>
     * <b>NoProtection</b> – The game session can be terminated during a scale-down
     * event.</p> </li> <li> <p> <b>FullProtection</b> – If the game session is in an
     * <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline const ProtectionPolicy& GetNewGameSessionProtectionPolicy() const{ return m_newGameSessionProtectionPolicy; }

    /**
     * <p>Game session protection policy to apply to all new instances created in this
     * fleet. Instances that already exist are not affected. You can set protection for
     * individual instances using <a>UpdateGameSession</a>.</p> <ul> <li> <p>
     * <b>NoProtection</b> – The game session can be terminated during a scale-down
     * event.</p> </li> <li> <p> <b>FullProtection</b> – If the game session is in an
     * <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline void SetNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = value; }

    /**
     * <p>Game session protection policy to apply to all new instances created in this
     * fleet. Instances that already exist are not affected. You can set protection for
     * individual instances using <a>UpdateGameSession</a>.</p> <ul> <li> <p>
     * <b>NoProtection</b> – The game session can be terminated during a scale-down
     * event.</p> </li> <li> <p> <b>FullProtection</b> – If the game session is in an
     * <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline void SetNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = std::move(value); }

    /**
     * <p>Game session protection policy to apply to all new instances created in this
     * fleet. Instances that already exist are not affected. You can set protection for
     * individual instances using <a>UpdateGameSession</a>.</p> <ul> <li> <p>
     * <b>NoProtection</b> – The game session can be terminated during a scale-down
     * event.</p> </li> <li> <p> <b>FullProtection</b> – If the game session is in an
     * <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline UpdateFleetAttributesRequest& WithNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { SetNewGameSessionProtectionPolicy(value); return *this;}

    /**
     * <p>Game session protection policy to apply to all new instances created in this
     * fleet. Instances that already exist are not affected. You can set protection for
     * individual instances using <a>UpdateGameSession</a>.</p> <ul> <li> <p>
     * <b>NoProtection</b> – The game session can be terminated during a scale-down
     * event.</p> </li> <li> <p> <b>FullProtection</b> – If the game session is in an
     * <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline UpdateFleetAttributesRequest& WithNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { SetNewGameSessionProtectionPolicy(std::move(value)); return *this;}

    /**
     * <p>Policy that limits the number of game sessions an individual player can
     * create over a span of time. </p>
     */
    inline const ResourceCreationLimitPolicy& GetResourceCreationLimitPolicy() const{ return m_resourceCreationLimitPolicy; }

    /**
     * <p>Policy that limits the number of game sessions an individual player can
     * create over a span of time. </p>
     */
    inline void SetResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& value) { m_resourceCreationLimitPolicyHasBeenSet = true; m_resourceCreationLimitPolicy = value; }

    /**
     * <p>Policy that limits the number of game sessions an individual player can
     * create over a span of time. </p>
     */
    inline void SetResourceCreationLimitPolicy(ResourceCreationLimitPolicy&& value) { m_resourceCreationLimitPolicyHasBeenSet = true; m_resourceCreationLimitPolicy = std::move(value); }

    /**
     * <p>Policy that limits the number of game sessions an individual player can
     * create over a span of time. </p>
     */
    inline UpdateFleetAttributesRequest& WithResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& value) { SetResourceCreationLimitPolicy(value); return *this;}

    /**
     * <p>Policy that limits the number of game sessions an individual player can
     * create over a span of time. </p>
     */
    inline UpdateFleetAttributesRequest& WithResourceCreationLimitPolicy(ResourceCreationLimitPolicy&& value) { SetResourceCreationLimitPolicy(std::move(value)); return *this;}

    /**
     * <p>Names of metric groups to include this fleet with. A fleet metric group is
     * used in Amazon CloudWatch to aggregate metrics from multiple fleets. Use an
     * existing metric group name to add this fleet to the group, or use a new name to
     * create a new metric group. Currently, a fleet can only be included in one metric
     * group at a time.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricGroups() const{ return m_metricGroups; }

    /**
     * <p>Names of metric groups to include this fleet with. A fleet metric group is
     * used in Amazon CloudWatch to aggregate metrics from multiple fleets. Use an
     * existing metric group name to add this fleet to the group, or use a new name to
     * create a new metric group. Currently, a fleet can only be included in one metric
     * group at a time.</p>
     */
    inline void SetMetricGroups(const Aws::Vector<Aws::String>& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = value; }

    /**
     * <p>Names of metric groups to include this fleet with. A fleet metric group is
     * used in Amazon CloudWatch to aggregate metrics from multiple fleets. Use an
     * existing metric group name to add this fleet to the group, or use a new name to
     * create a new metric group. Currently, a fleet can only be included in one metric
     * group at a time.</p>
     */
    inline void SetMetricGroups(Aws::Vector<Aws::String>&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = std::move(value); }

    /**
     * <p>Names of metric groups to include this fleet with. A fleet metric group is
     * used in Amazon CloudWatch to aggregate metrics from multiple fleets. Use an
     * existing metric group name to add this fleet to the group, or use a new name to
     * create a new metric group. Currently, a fleet can only be included in one metric
     * group at a time.</p>
     */
    inline UpdateFleetAttributesRequest& WithMetricGroups(const Aws::Vector<Aws::String>& value) { SetMetricGroups(value); return *this;}

    /**
     * <p>Names of metric groups to include this fleet with. A fleet metric group is
     * used in Amazon CloudWatch to aggregate metrics from multiple fleets. Use an
     * existing metric group name to add this fleet to the group, or use a new name to
     * create a new metric group. Currently, a fleet can only be included in one metric
     * group at a time.</p>
     */
    inline UpdateFleetAttributesRequest& WithMetricGroups(Aws::Vector<Aws::String>&& value) { SetMetricGroups(std::move(value)); return *this;}

    /**
     * <p>Names of metric groups to include this fleet with. A fleet metric group is
     * used in Amazon CloudWatch to aggregate metrics from multiple fleets. Use an
     * existing metric group name to add this fleet to the group, or use a new name to
     * create a new metric group. Currently, a fleet can only be included in one metric
     * group at a time.</p>
     */
    inline UpdateFleetAttributesRequest& AddMetricGroups(const Aws::String& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(value); return *this; }

    /**
     * <p>Names of metric groups to include this fleet with. A fleet metric group is
     * used in Amazon CloudWatch to aggregate metrics from multiple fleets. Use an
     * existing metric group name to add this fleet to the group, or use a new name to
     * create a new metric group. Currently, a fleet can only be included in one metric
     * group at a time.</p>
     */
    inline UpdateFleetAttributesRequest& AddMetricGroups(Aws::String&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>Names of metric groups to include this fleet with. A fleet metric group is
     * used in Amazon CloudWatch to aggregate metrics from multiple fleets. Use an
     * existing metric group name to add this fleet to the group, or use a new name to
     * create a new metric group. Currently, a fleet can only be included in one metric
     * group at a time.</p>
     */
    inline UpdateFleetAttributesRequest& AddMetricGroups(const char* value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(value); return *this; }

  private:
    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    ProtectionPolicy m_newGameSessionProtectionPolicy;
    bool m_newGameSessionProtectionPolicyHasBeenSet;
    ResourceCreationLimitPolicy m_resourceCreationLimitPolicy;
    bool m_resourceCreationLimitPolicyHasBeenSet;
    Aws::Vector<Aws::String> m_metricGroups;
    bool m_metricGroupsHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
