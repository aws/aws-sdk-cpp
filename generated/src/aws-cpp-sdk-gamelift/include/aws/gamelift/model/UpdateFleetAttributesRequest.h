/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/ProtectionPolicy.h>
#include <aws/gamelift/model/ResourceCreationLimitPolicy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/AnywhereConfiguration.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class UpdateFleetAttributesRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API UpdateFleetAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFleetAttributes"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the fleet to update attribute metadata for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for the fleet to update attribute metadata for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the fleet to update attribute metadata for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for the fleet to update attribute metadata for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for the fleet to update attribute metadata for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for the fleet to update attribute metadata for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline UpdateFleetAttributesRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the fleet to update attribute metadata for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline UpdateFleetAttributesRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the fleet to update attribute metadata for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline UpdateFleetAttributesRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline UpdateFleetAttributesRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline UpdateFleetAttributesRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline UpdateFleetAttributesRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A human-readable description of a fleet.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A human-readable description of a fleet.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A human-readable description of a fleet.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A human-readable description of a fleet.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A human-readable description of a fleet.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A human-readable description of a fleet.</p>
     */
    inline UpdateFleetAttributesRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A human-readable description of a fleet.</p>
     */
    inline UpdateFleetAttributesRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A human-readable description of a fleet.</p>
     */
    inline UpdateFleetAttributesRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The game session protection policy to apply to all new game sessions created
     * in this fleet. Game sessions that already exist are not affected. You can set
     * protection for individual game sessions using <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_UpdateGameSession.html">UpdateGameSession</a>
     * .</p> <ul> <li> <p> <b>NoProtection</b> -- The game session can be terminated
     * during a scale-down event.</p> </li> <li> <p> <b>FullProtection</b> -- If the
     * game session is in an <code>ACTIVE</code> status, it cannot be terminated during
     * a scale-down event.</p> </li> </ul>
     */
    inline const ProtectionPolicy& GetNewGameSessionProtectionPolicy() const{ return m_newGameSessionProtectionPolicy; }

    /**
     * <p>The game session protection policy to apply to all new game sessions created
     * in this fleet. Game sessions that already exist are not affected. You can set
     * protection for individual game sessions using <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_UpdateGameSession.html">UpdateGameSession</a>
     * .</p> <ul> <li> <p> <b>NoProtection</b> -- The game session can be terminated
     * during a scale-down event.</p> </li> <li> <p> <b>FullProtection</b> -- If the
     * game session is in an <code>ACTIVE</code> status, it cannot be terminated during
     * a scale-down event.</p> </li> </ul>
     */
    inline bool NewGameSessionProtectionPolicyHasBeenSet() const { return m_newGameSessionProtectionPolicyHasBeenSet; }

    /**
     * <p>The game session protection policy to apply to all new game sessions created
     * in this fleet. Game sessions that already exist are not affected. You can set
     * protection for individual game sessions using <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_UpdateGameSession.html">UpdateGameSession</a>
     * .</p> <ul> <li> <p> <b>NoProtection</b> -- The game session can be terminated
     * during a scale-down event.</p> </li> <li> <p> <b>FullProtection</b> -- If the
     * game session is in an <code>ACTIVE</code> status, it cannot be terminated during
     * a scale-down event.</p> </li> </ul>
     */
    inline void SetNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = value; }

    /**
     * <p>The game session protection policy to apply to all new game sessions created
     * in this fleet. Game sessions that already exist are not affected. You can set
     * protection for individual game sessions using <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_UpdateGameSession.html">UpdateGameSession</a>
     * .</p> <ul> <li> <p> <b>NoProtection</b> -- The game session can be terminated
     * during a scale-down event.</p> </li> <li> <p> <b>FullProtection</b> -- If the
     * game session is in an <code>ACTIVE</code> status, it cannot be terminated during
     * a scale-down event.</p> </li> </ul>
     */
    inline void SetNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = std::move(value); }

    /**
     * <p>The game session protection policy to apply to all new game sessions created
     * in this fleet. Game sessions that already exist are not affected. You can set
     * protection for individual game sessions using <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_UpdateGameSession.html">UpdateGameSession</a>
     * .</p> <ul> <li> <p> <b>NoProtection</b> -- The game session can be terminated
     * during a scale-down event.</p> </li> <li> <p> <b>FullProtection</b> -- If the
     * game session is in an <code>ACTIVE</code> status, it cannot be terminated during
     * a scale-down event.</p> </li> </ul>
     */
    inline UpdateFleetAttributesRequest& WithNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { SetNewGameSessionProtectionPolicy(value); return *this;}

    /**
     * <p>The game session protection policy to apply to all new game sessions created
     * in this fleet. Game sessions that already exist are not affected. You can set
     * protection for individual game sessions using <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_UpdateGameSession.html">UpdateGameSession</a>
     * .</p> <ul> <li> <p> <b>NoProtection</b> -- The game session can be terminated
     * during a scale-down event.</p> </li> <li> <p> <b>FullProtection</b> -- If the
     * game session is in an <code>ACTIVE</code> status, it cannot be terminated during
     * a scale-down event.</p> </li> </ul>
     */
    inline UpdateFleetAttributesRequest& WithNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { SetNewGameSessionProtectionPolicy(std::move(value)); return *this;}


    /**
     * <p>Policy settings that limit the number of game sessions an individual player
     * can create over a span of time. </p>
     */
    inline const ResourceCreationLimitPolicy& GetResourceCreationLimitPolicy() const{ return m_resourceCreationLimitPolicy; }

    /**
     * <p>Policy settings that limit the number of game sessions an individual player
     * can create over a span of time. </p>
     */
    inline bool ResourceCreationLimitPolicyHasBeenSet() const { return m_resourceCreationLimitPolicyHasBeenSet; }

    /**
     * <p>Policy settings that limit the number of game sessions an individual player
     * can create over a span of time. </p>
     */
    inline void SetResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& value) { m_resourceCreationLimitPolicyHasBeenSet = true; m_resourceCreationLimitPolicy = value; }

    /**
     * <p>Policy settings that limit the number of game sessions an individual player
     * can create over a span of time. </p>
     */
    inline void SetResourceCreationLimitPolicy(ResourceCreationLimitPolicy&& value) { m_resourceCreationLimitPolicyHasBeenSet = true; m_resourceCreationLimitPolicy = std::move(value); }

    /**
     * <p>Policy settings that limit the number of game sessions an individual player
     * can create over a span of time. </p>
     */
    inline UpdateFleetAttributesRequest& WithResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& value) { SetResourceCreationLimitPolicy(value); return *this;}

    /**
     * <p>Policy settings that limit the number of game sessions an individual player
     * can create over a span of time. </p>
     */
    inline UpdateFleetAttributesRequest& WithResourceCreationLimitPolicy(ResourceCreationLimitPolicy&& value) { SetResourceCreationLimitPolicy(std::move(value)); return *this;}


    /**
     * <p>The name of a metric group to add this fleet to. Use a metric group in Amazon
     * CloudWatch to aggregate the metrics from multiple fleets. Provide an existing
     * metric group name, or create a new metric group by providing a new name. A fleet
     * can only be in one metric group at a time.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricGroups() const{ return m_metricGroups; }

    /**
     * <p>The name of a metric group to add this fleet to. Use a metric group in Amazon
     * CloudWatch to aggregate the metrics from multiple fleets. Provide an existing
     * metric group name, or create a new metric group by providing a new name. A fleet
     * can only be in one metric group at a time.</p>
     */
    inline bool MetricGroupsHasBeenSet() const { return m_metricGroupsHasBeenSet; }

    /**
     * <p>The name of a metric group to add this fleet to. Use a metric group in Amazon
     * CloudWatch to aggregate the metrics from multiple fleets. Provide an existing
     * metric group name, or create a new metric group by providing a new name. A fleet
     * can only be in one metric group at a time.</p>
     */
    inline void SetMetricGroups(const Aws::Vector<Aws::String>& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = value; }

    /**
     * <p>The name of a metric group to add this fleet to. Use a metric group in Amazon
     * CloudWatch to aggregate the metrics from multiple fleets. Provide an existing
     * metric group name, or create a new metric group by providing a new name. A fleet
     * can only be in one metric group at a time.</p>
     */
    inline void SetMetricGroups(Aws::Vector<Aws::String>&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = std::move(value); }

    /**
     * <p>The name of a metric group to add this fleet to. Use a metric group in Amazon
     * CloudWatch to aggregate the metrics from multiple fleets. Provide an existing
     * metric group name, or create a new metric group by providing a new name. A fleet
     * can only be in one metric group at a time.</p>
     */
    inline UpdateFleetAttributesRequest& WithMetricGroups(const Aws::Vector<Aws::String>& value) { SetMetricGroups(value); return *this;}

    /**
     * <p>The name of a metric group to add this fleet to. Use a metric group in Amazon
     * CloudWatch to aggregate the metrics from multiple fleets. Provide an existing
     * metric group name, or create a new metric group by providing a new name. A fleet
     * can only be in one metric group at a time.</p>
     */
    inline UpdateFleetAttributesRequest& WithMetricGroups(Aws::Vector<Aws::String>&& value) { SetMetricGroups(std::move(value)); return *this;}

    /**
     * <p>The name of a metric group to add this fleet to. Use a metric group in Amazon
     * CloudWatch to aggregate the metrics from multiple fleets. Provide an existing
     * metric group name, or create a new metric group by providing a new name. A fleet
     * can only be in one metric group at a time.</p>
     */
    inline UpdateFleetAttributesRequest& AddMetricGroups(const Aws::String& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(value); return *this; }

    /**
     * <p>The name of a metric group to add this fleet to. Use a metric group in Amazon
     * CloudWatch to aggregate the metrics from multiple fleets. Provide an existing
     * metric group name, or create a new metric group by providing a new name. A fleet
     * can only be in one metric group at a time.</p>
     */
    inline UpdateFleetAttributesRequest& AddMetricGroups(Aws::String&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The name of a metric group to add this fleet to. Use a metric group in Amazon
     * CloudWatch to aggregate the metrics from multiple fleets. Provide an existing
     * metric group name, or create a new metric group by providing a new name. A fleet
     * can only be in one metric group at a time.</p>
     */
    inline UpdateFleetAttributesRequest& AddMetricGroups(const char* value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(value); return *this; }


    /**
     * <p>Amazon GameLift Anywhere configuration options.</p>
     */
    inline const AnywhereConfiguration& GetAnywhereConfiguration() const{ return m_anywhereConfiguration; }

    /**
     * <p>Amazon GameLift Anywhere configuration options.</p>
     */
    inline bool AnywhereConfigurationHasBeenSet() const { return m_anywhereConfigurationHasBeenSet; }

    /**
     * <p>Amazon GameLift Anywhere configuration options.</p>
     */
    inline void SetAnywhereConfiguration(const AnywhereConfiguration& value) { m_anywhereConfigurationHasBeenSet = true; m_anywhereConfiguration = value; }

    /**
     * <p>Amazon GameLift Anywhere configuration options.</p>
     */
    inline void SetAnywhereConfiguration(AnywhereConfiguration&& value) { m_anywhereConfigurationHasBeenSet = true; m_anywhereConfiguration = std::move(value); }

    /**
     * <p>Amazon GameLift Anywhere configuration options.</p>
     */
    inline UpdateFleetAttributesRequest& WithAnywhereConfiguration(const AnywhereConfiguration& value) { SetAnywhereConfiguration(value); return *this;}

    /**
     * <p>Amazon GameLift Anywhere configuration options.</p>
     */
    inline UpdateFleetAttributesRequest& WithAnywhereConfiguration(AnywhereConfiguration&& value) { SetAnywhereConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ProtectionPolicy m_newGameSessionProtectionPolicy;
    bool m_newGameSessionProtectionPolicyHasBeenSet = false;

    ResourceCreationLimitPolicy m_resourceCreationLimitPolicy;
    bool m_resourceCreationLimitPolicyHasBeenSet = false;

    Aws::Vector<Aws::String> m_metricGroups;
    bool m_metricGroupsHasBeenSet = false;

    AnywhereConfiguration m_anywhereConfiguration;
    bool m_anywhereConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
