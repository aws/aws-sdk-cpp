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
    AWS_GAMELIFT_API UpdateFleetAttributesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFleetAttributes"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for the fleet to update attribute metadata for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    UpdateFleetAttributesRequest& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateFleetAttributesRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable description of a fleet.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateFleetAttributesRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
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
    inline ProtectionPolicy GetNewGameSessionProtectionPolicy() const { return m_newGameSessionProtectionPolicy; }
    inline bool NewGameSessionProtectionPolicyHasBeenSet() const { return m_newGameSessionProtectionPolicyHasBeenSet; }
    inline void SetNewGameSessionProtectionPolicy(ProtectionPolicy value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = value; }
    inline UpdateFleetAttributesRequest& WithNewGameSessionProtectionPolicy(ProtectionPolicy value) { SetNewGameSessionProtectionPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Policy settings that limit the number of game sessions an individual player
     * can create over a span of time. </p>
     */
    inline const ResourceCreationLimitPolicy& GetResourceCreationLimitPolicy() const { return m_resourceCreationLimitPolicy; }
    inline bool ResourceCreationLimitPolicyHasBeenSet() const { return m_resourceCreationLimitPolicyHasBeenSet; }
    template<typename ResourceCreationLimitPolicyT = ResourceCreationLimitPolicy>
    void SetResourceCreationLimitPolicy(ResourceCreationLimitPolicyT&& value) { m_resourceCreationLimitPolicyHasBeenSet = true; m_resourceCreationLimitPolicy = std::forward<ResourceCreationLimitPolicyT>(value); }
    template<typename ResourceCreationLimitPolicyT = ResourceCreationLimitPolicy>
    UpdateFleetAttributesRequest& WithResourceCreationLimitPolicy(ResourceCreationLimitPolicyT&& value) { SetResourceCreationLimitPolicy(std::forward<ResourceCreationLimitPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a metric group to add this fleet to. Use a metric group in Amazon
     * CloudWatch to aggregate the metrics from multiple fleets. Provide an existing
     * metric group name, or create a new metric group by providing a new name. A fleet
     * can only be in one metric group at a time.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricGroups() const { return m_metricGroups; }
    inline bool MetricGroupsHasBeenSet() const { return m_metricGroupsHasBeenSet; }
    template<typename MetricGroupsT = Aws::Vector<Aws::String>>
    void SetMetricGroups(MetricGroupsT&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = std::forward<MetricGroupsT>(value); }
    template<typename MetricGroupsT = Aws::Vector<Aws::String>>
    UpdateFleetAttributesRequest& WithMetricGroups(MetricGroupsT&& value) { SetMetricGroups(std::forward<MetricGroupsT>(value)); return *this;}
    template<typename MetricGroupsT = Aws::String>
    UpdateFleetAttributesRequest& AddMetricGroups(MetricGroupsT&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.emplace_back(std::forward<MetricGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Amazon GameLift Servers Anywhere configuration options.</p>
     */
    inline const AnywhereConfiguration& GetAnywhereConfiguration() const { return m_anywhereConfiguration; }
    inline bool AnywhereConfigurationHasBeenSet() const { return m_anywhereConfigurationHasBeenSet; }
    template<typename AnywhereConfigurationT = AnywhereConfiguration>
    void SetAnywhereConfiguration(AnywhereConfigurationT&& value) { m_anywhereConfigurationHasBeenSet = true; m_anywhereConfiguration = std::forward<AnywhereConfigurationT>(value); }
    template<typename AnywhereConfigurationT = AnywhereConfiguration>
    UpdateFleetAttributesRequest& WithAnywhereConfiguration(AnywhereConfigurationT&& value) { SetAnywhereConfiguration(std::forward<AnywhereConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ProtectionPolicy m_newGameSessionProtectionPolicy{ProtectionPolicy::NOT_SET};
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
