/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ExcessCapacityTerminationPolicy.h>
#include <aws/ec2/model/LaunchTemplateConfig.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for ModifySpotFleetRequest.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifySpotFleetRequestRequest">AWS
   * API Reference</a></p>
   */
  class ModifySpotFleetRequestRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifySpotFleetRequestRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifySpotFleetRequest"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The launch template and overrides. You can only use this parameter if you
     * specified a launch template (<code>LaunchTemplateConfigs</code>) in your Spot
     * Fleet request. If you specified <code>LaunchSpecifications</code> in your Spot
     * Fleet request, then omit this parameter.</p>
     */
    inline const Aws::Vector<LaunchTemplateConfig>& GetLaunchTemplateConfigs() const { return m_launchTemplateConfigs; }
    inline bool LaunchTemplateConfigsHasBeenSet() const { return m_launchTemplateConfigsHasBeenSet; }
    template<typename LaunchTemplateConfigsT = Aws::Vector<LaunchTemplateConfig>>
    void SetLaunchTemplateConfigs(LaunchTemplateConfigsT&& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs = std::forward<LaunchTemplateConfigsT>(value); }
    template<typename LaunchTemplateConfigsT = Aws::Vector<LaunchTemplateConfig>>
    ModifySpotFleetRequestRequest& WithLaunchTemplateConfigs(LaunchTemplateConfigsT&& value) { SetLaunchTemplateConfigs(std::forward<LaunchTemplateConfigsT>(value)); return *this;}
    template<typename LaunchTemplateConfigsT = LaunchTemplateConfig>
    ModifySpotFleetRequestRequest& AddLaunchTemplateConfigs(LaunchTemplateConfigsT&& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs.emplace_back(std::forward<LaunchTemplateConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of On-Demand Instances in the fleet.</p>
     */
    inline int GetOnDemandTargetCapacity() const { return m_onDemandTargetCapacity; }
    inline bool OnDemandTargetCapacityHasBeenSet() const { return m_onDemandTargetCapacityHasBeenSet; }
    inline void SetOnDemandTargetCapacity(int value) { m_onDemandTargetCapacityHasBeenSet = true; m_onDemandTargetCapacity = value; }
    inline ModifySpotFleetRequestRequest& WithOnDemandTargetCapacity(int value) { SetOnDemandTargetCapacity(value); return *this;}
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
    ModifySpotFleetRequestRequest& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline const Aws::String& GetSpotFleetRequestId() const { return m_spotFleetRequestId; }
    inline bool SpotFleetRequestIdHasBeenSet() const { return m_spotFleetRequestIdHasBeenSet; }
    template<typename SpotFleetRequestIdT = Aws::String>
    void SetSpotFleetRequestId(SpotFleetRequestIdT&& value) { m_spotFleetRequestIdHasBeenSet = true; m_spotFleetRequestId = std::forward<SpotFleetRequestIdT>(value); }
    template<typename SpotFleetRequestIdT = Aws::String>
    ModifySpotFleetRequestRequest& WithSpotFleetRequestId(SpotFleetRequestIdT&& value) { SetSpotFleetRequestId(std::forward<SpotFleetRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the fleet.</p>
     */
    inline int GetTargetCapacity() const { return m_targetCapacity; }
    inline bool TargetCapacityHasBeenSet() const { return m_targetCapacityHasBeenSet; }
    inline void SetTargetCapacity(int value) { m_targetCapacityHasBeenSet = true; m_targetCapacity = value; }
    inline ModifySpotFleetRequestRequest& WithTargetCapacity(int value) { SetTargetCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether running instances should be terminated if the target
     * capacity of the Spot Fleet request is decreased below the current size of the
     * Spot Fleet.</p> <p>Supported only for fleets of type <code>maintain</code>.</p>
     */
    inline ExcessCapacityTerminationPolicy GetExcessCapacityTerminationPolicy() const { return m_excessCapacityTerminationPolicy; }
    inline bool ExcessCapacityTerminationPolicyHasBeenSet() const { return m_excessCapacityTerminationPolicyHasBeenSet; }
    inline void SetExcessCapacityTerminationPolicy(ExcessCapacityTerminationPolicy value) { m_excessCapacityTerminationPolicyHasBeenSet = true; m_excessCapacityTerminationPolicy = value; }
    inline ModifySpotFleetRequestRequest& WithExcessCapacityTerminationPolicy(ExcessCapacityTerminationPolicy value) { SetExcessCapacityTerminationPolicy(value); return *this;}
    ///@}
  private:

    Aws::Vector<LaunchTemplateConfig> m_launchTemplateConfigs;
    bool m_launchTemplateConfigsHasBeenSet = false;

    int m_onDemandTargetCapacity{0};
    bool m_onDemandTargetCapacityHasBeenSet = false;

    Aws::String m_context;
    bool m_contextHasBeenSet = false;

    Aws::String m_spotFleetRequestId;
    bool m_spotFleetRequestIdHasBeenSet = false;

    int m_targetCapacity{0};
    bool m_targetCapacityHasBeenSet = false;

    ExcessCapacityTerminationPolicy m_excessCapacityTerminationPolicy{ExcessCapacityTerminationPolicy::NOT_SET};
    bool m_excessCapacityTerminationPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
