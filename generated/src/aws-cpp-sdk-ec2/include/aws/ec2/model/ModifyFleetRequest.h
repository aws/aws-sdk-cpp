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
    AWS_EC2_API ModifyFleetRequest();

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
    inline bool GetDryRun() const{ return m_dryRun; }
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
    inline const FleetExcessCapacityTerminationPolicy& GetExcessCapacityTerminationPolicy() const{ return m_excessCapacityTerminationPolicy; }
    inline bool ExcessCapacityTerminationPolicyHasBeenSet() const { return m_excessCapacityTerminationPolicyHasBeenSet; }
    inline void SetExcessCapacityTerminationPolicy(const FleetExcessCapacityTerminationPolicy& value) { m_excessCapacityTerminationPolicyHasBeenSet = true; m_excessCapacityTerminationPolicy = value; }
    inline void SetExcessCapacityTerminationPolicy(FleetExcessCapacityTerminationPolicy&& value) { m_excessCapacityTerminationPolicyHasBeenSet = true; m_excessCapacityTerminationPolicy = std::move(value); }
    inline ModifyFleetRequest& WithExcessCapacityTerminationPolicy(const FleetExcessCapacityTerminationPolicy& value) { SetExcessCapacityTerminationPolicy(value); return *this;}
    inline ModifyFleetRequest& WithExcessCapacityTerminationPolicy(FleetExcessCapacityTerminationPolicy&& value) { SetExcessCapacityTerminationPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch template and overrides.</p>
     */
    inline const Aws::Vector<FleetLaunchTemplateConfigRequest>& GetLaunchTemplateConfigs() const{ return m_launchTemplateConfigs; }
    inline bool LaunchTemplateConfigsHasBeenSet() const { return m_launchTemplateConfigsHasBeenSet; }
    inline void SetLaunchTemplateConfigs(const Aws::Vector<FleetLaunchTemplateConfigRequest>& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs = value; }
    inline void SetLaunchTemplateConfigs(Aws::Vector<FleetLaunchTemplateConfigRequest>&& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs = std::move(value); }
    inline ModifyFleetRequest& WithLaunchTemplateConfigs(const Aws::Vector<FleetLaunchTemplateConfigRequest>& value) { SetLaunchTemplateConfigs(value); return *this;}
    inline ModifyFleetRequest& WithLaunchTemplateConfigs(Aws::Vector<FleetLaunchTemplateConfigRequest>&& value) { SetLaunchTemplateConfigs(std::move(value)); return *this;}
    inline ModifyFleetRequest& AddLaunchTemplateConfigs(const FleetLaunchTemplateConfigRequest& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs.push_back(value); return *this; }
    inline ModifyFleetRequest& AddLaunchTemplateConfigs(FleetLaunchTemplateConfigRequest&& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }
    inline ModifyFleetRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline ModifyFleetRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline ModifyFleetRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the EC2 Fleet.</p>
     */
    inline const TargetCapacitySpecificationRequest& GetTargetCapacitySpecification() const{ return m_targetCapacitySpecification; }
    inline bool TargetCapacitySpecificationHasBeenSet() const { return m_targetCapacitySpecificationHasBeenSet; }
    inline void SetTargetCapacitySpecification(const TargetCapacitySpecificationRequest& value) { m_targetCapacitySpecificationHasBeenSet = true; m_targetCapacitySpecification = value; }
    inline void SetTargetCapacitySpecification(TargetCapacitySpecificationRequest&& value) { m_targetCapacitySpecificationHasBeenSet = true; m_targetCapacitySpecification = std::move(value); }
    inline ModifyFleetRequest& WithTargetCapacitySpecification(const TargetCapacitySpecificationRequest& value) { SetTargetCapacitySpecification(value); return *this;}
    inline ModifyFleetRequest& WithTargetCapacitySpecification(TargetCapacitySpecificationRequest&& value) { SetTargetCapacitySpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetContext() const{ return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    inline void SetContext(const Aws::String& value) { m_contextHasBeenSet = true; m_context = value; }
    inline void SetContext(Aws::String&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }
    inline void SetContext(const char* value) { m_contextHasBeenSet = true; m_context.assign(value); }
    inline ModifyFleetRequest& WithContext(const Aws::String& value) { SetContext(value); return *this;}
    inline ModifyFleetRequest& WithContext(Aws::String&& value) { SetContext(std::move(value)); return *this;}
    inline ModifyFleetRequest& WithContext(const char* value) { SetContext(value); return *this;}
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    FleetExcessCapacityTerminationPolicy m_excessCapacityTerminationPolicy;
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
