/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/FleetExcessCapacityTerminationPolicy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TargetCapacitySpecificationRequest.h>
#include <aws/ec2/model/FleetLaunchTemplateConfigRequest.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyFleetRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyFleetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyFleet"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyFleetRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether running instances should be terminated if the total target
     * capacity of the EC2 Fleet is decreased below the current size of the EC2
     * Fleet.</p> <p>Supported only for fleets of type <code>maintain</code>.</p>
     */
    inline FleetExcessCapacityTerminationPolicy GetExcessCapacityTerminationPolicy() const { return m_excessCapacityTerminationPolicy; }
    inline bool ExcessCapacityTerminationPolicyHasBeenSet() const { return m_excessCapacityTerminationPolicyHasBeenSet; }
    inline void SetExcessCapacityTerminationPolicy(FleetExcessCapacityTerminationPolicy value) { m_excessCapacityTerminationPolicyHasBeenSet = true; m_excessCapacityTerminationPolicy = value; }
    inline ModifyFleetRequest& WithExcessCapacityTerminationPolicy(FleetExcessCapacityTerminationPolicy value) { SetExcessCapacityTerminationPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch template and overrides.</p>
     */
    inline const Aws::Vector<FleetLaunchTemplateConfigRequest>& GetLaunchTemplateConfigs() const { return m_launchTemplateConfigs; }
    inline bool LaunchTemplateConfigsHasBeenSet() const { return m_launchTemplateConfigsHasBeenSet; }
    template<typename LaunchTemplateConfigsT = Aws::Vector<FleetLaunchTemplateConfigRequest>>
    void SetLaunchTemplateConfigs(LaunchTemplateConfigsT&& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs = std::forward<LaunchTemplateConfigsT>(value); }
    template<typename LaunchTemplateConfigsT = Aws::Vector<FleetLaunchTemplateConfigRequest>>
    ModifyFleetRequest& WithLaunchTemplateConfigs(LaunchTemplateConfigsT&& value) { SetLaunchTemplateConfigs(std::forward<LaunchTemplateConfigsT>(value)); return *this;}
    template<typename LaunchTemplateConfigsT = FleetLaunchTemplateConfigRequest>
    ModifyFleetRequest& AddLaunchTemplateConfigs(LaunchTemplateConfigsT&& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs.emplace_back(std::forward<LaunchTemplateConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    ModifyFleetRequest& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the EC2 Fleet.</p>
     */
    inline const TargetCapacitySpecificationRequest& GetTargetCapacitySpecification() const { return m_targetCapacitySpecification; }
    inline bool TargetCapacitySpecificationHasBeenSet() const { return m_targetCapacitySpecificationHasBeenSet; }
    template<typename TargetCapacitySpecificationT = TargetCapacitySpecificationRequest>
    void SetTargetCapacitySpecification(TargetCapacitySpecificationT&& value) { m_targetCapacitySpecificationHasBeenSet = true; m_targetCapacitySpecification = std::forward<TargetCapacitySpecificationT>(value); }
    template<typename TargetCapacitySpecificationT = TargetCapacitySpecificationRequest>
    ModifyFleetRequest& WithTargetCapacitySpecification(TargetCapacitySpecificationT&& value) { SetTargetCapacitySpecification(std::forward<TargetCapacitySpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetContext() const { return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    template<typename ContextT = Aws::String>
    void SetContext(ContextT&& value) { m_contextHasBeenSet = true; m_context = std::forward<ContextT>(value); }
    template<typename ContextT = Aws::String>
    ModifyFleetRequest& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    FleetExcessCapacityTerminationPolicy m_excessCapacityTerminationPolicy{FleetExcessCapacityTerminationPolicy::NOT_SET};
    bool m_excessCapacityTerminationPolicyHasBeenSet = false;

    Aws::Vector<FleetLaunchTemplateConfigRequest> m_launchTemplateConfigs;
    bool m_launchTemplateConfigsHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    TargetCapacitySpecificationRequest m_targetCapacitySpecification;
    bool m_targetCapacitySpecificationHasBeenSet = false;

    Aws::String m_context;
    bool m_contextHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
