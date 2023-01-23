/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/ExcessCapacityTerminationPolicy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_EC2_API ModifySpotFleetRequestRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifySpotFleetRequest"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Indicates whether running Spot Instances should be terminated if the target
     * capacity of the Spot Fleet request is decreased below the current size of the
     * Spot Fleet.</p>
     */
    inline const ExcessCapacityTerminationPolicy& GetExcessCapacityTerminationPolicy() const{ return m_excessCapacityTerminationPolicy; }

    /**
     * <p>Indicates whether running Spot Instances should be terminated if the target
     * capacity of the Spot Fleet request is decreased below the current size of the
     * Spot Fleet.</p>
     */
    inline bool ExcessCapacityTerminationPolicyHasBeenSet() const { return m_excessCapacityTerminationPolicyHasBeenSet; }

    /**
     * <p>Indicates whether running Spot Instances should be terminated if the target
     * capacity of the Spot Fleet request is decreased below the current size of the
     * Spot Fleet.</p>
     */
    inline void SetExcessCapacityTerminationPolicy(const ExcessCapacityTerminationPolicy& value) { m_excessCapacityTerminationPolicyHasBeenSet = true; m_excessCapacityTerminationPolicy = value; }

    /**
     * <p>Indicates whether running Spot Instances should be terminated if the target
     * capacity of the Spot Fleet request is decreased below the current size of the
     * Spot Fleet.</p>
     */
    inline void SetExcessCapacityTerminationPolicy(ExcessCapacityTerminationPolicy&& value) { m_excessCapacityTerminationPolicyHasBeenSet = true; m_excessCapacityTerminationPolicy = std::move(value); }

    /**
     * <p>Indicates whether running Spot Instances should be terminated if the target
     * capacity of the Spot Fleet request is decreased below the current size of the
     * Spot Fleet.</p>
     */
    inline ModifySpotFleetRequestRequest& WithExcessCapacityTerminationPolicy(const ExcessCapacityTerminationPolicy& value) { SetExcessCapacityTerminationPolicy(value); return *this;}

    /**
     * <p>Indicates whether running Spot Instances should be terminated if the target
     * capacity of the Spot Fleet request is decreased below the current size of the
     * Spot Fleet.</p>
     */
    inline ModifySpotFleetRequestRequest& WithExcessCapacityTerminationPolicy(ExcessCapacityTerminationPolicy&& value) { SetExcessCapacityTerminationPolicy(std::move(value)); return *this;}


    /**
     * <p>The launch template and overrides. You can only use this parameter if you
     * specified a launch template (<code>LaunchTemplateConfigs</code>) in your Spot
     * Fleet request. If you specified <code>LaunchSpecifications</code> in your Spot
     * Fleet request, then omit this parameter.</p>
     */
    inline const Aws::Vector<LaunchTemplateConfig>& GetLaunchTemplateConfigs() const{ return m_launchTemplateConfigs; }

    /**
     * <p>The launch template and overrides. You can only use this parameter if you
     * specified a launch template (<code>LaunchTemplateConfigs</code>) in your Spot
     * Fleet request. If you specified <code>LaunchSpecifications</code> in your Spot
     * Fleet request, then omit this parameter.</p>
     */
    inline bool LaunchTemplateConfigsHasBeenSet() const { return m_launchTemplateConfigsHasBeenSet; }

    /**
     * <p>The launch template and overrides. You can only use this parameter if you
     * specified a launch template (<code>LaunchTemplateConfigs</code>) in your Spot
     * Fleet request. If you specified <code>LaunchSpecifications</code> in your Spot
     * Fleet request, then omit this parameter.</p>
     */
    inline void SetLaunchTemplateConfigs(const Aws::Vector<LaunchTemplateConfig>& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs = value; }

    /**
     * <p>The launch template and overrides. You can only use this parameter if you
     * specified a launch template (<code>LaunchTemplateConfigs</code>) in your Spot
     * Fleet request. If you specified <code>LaunchSpecifications</code> in your Spot
     * Fleet request, then omit this parameter.</p>
     */
    inline void SetLaunchTemplateConfigs(Aws::Vector<LaunchTemplateConfig>&& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs = std::move(value); }

    /**
     * <p>The launch template and overrides. You can only use this parameter if you
     * specified a launch template (<code>LaunchTemplateConfigs</code>) in your Spot
     * Fleet request. If you specified <code>LaunchSpecifications</code> in your Spot
     * Fleet request, then omit this parameter.</p>
     */
    inline ModifySpotFleetRequestRequest& WithLaunchTemplateConfigs(const Aws::Vector<LaunchTemplateConfig>& value) { SetLaunchTemplateConfigs(value); return *this;}

    /**
     * <p>The launch template and overrides. You can only use this parameter if you
     * specified a launch template (<code>LaunchTemplateConfigs</code>) in your Spot
     * Fleet request. If you specified <code>LaunchSpecifications</code> in your Spot
     * Fleet request, then omit this parameter.</p>
     */
    inline ModifySpotFleetRequestRequest& WithLaunchTemplateConfigs(Aws::Vector<LaunchTemplateConfig>&& value) { SetLaunchTemplateConfigs(std::move(value)); return *this;}

    /**
     * <p>The launch template and overrides. You can only use this parameter if you
     * specified a launch template (<code>LaunchTemplateConfigs</code>) in your Spot
     * Fleet request. If you specified <code>LaunchSpecifications</code> in your Spot
     * Fleet request, then omit this parameter.</p>
     */
    inline ModifySpotFleetRequestRequest& AddLaunchTemplateConfigs(const LaunchTemplateConfig& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs.push_back(value); return *this; }

    /**
     * <p>The launch template and overrides. You can only use this parameter if you
     * specified a launch template (<code>LaunchTemplateConfigs</code>) in your Spot
     * Fleet request. If you specified <code>LaunchSpecifications</code> in your Spot
     * Fleet request, then omit this parameter.</p>
     */
    inline ModifySpotFleetRequestRequest& AddLaunchTemplateConfigs(LaunchTemplateConfig&& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline const Aws::String& GetSpotFleetRequestId() const{ return m_spotFleetRequestId; }

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline bool SpotFleetRequestIdHasBeenSet() const { return m_spotFleetRequestIdHasBeenSet; }

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline void SetSpotFleetRequestId(const Aws::String& value) { m_spotFleetRequestIdHasBeenSet = true; m_spotFleetRequestId = value; }

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline void SetSpotFleetRequestId(Aws::String&& value) { m_spotFleetRequestIdHasBeenSet = true; m_spotFleetRequestId = std::move(value); }

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline void SetSpotFleetRequestId(const char* value) { m_spotFleetRequestIdHasBeenSet = true; m_spotFleetRequestId.assign(value); }

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline ModifySpotFleetRequestRequest& WithSpotFleetRequestId(const Aws::String& value) { SetSpotFleetRequestId(value); return *this;}

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline ModifySpotFleetRequestRequest& WithSpotFleetRequestId(Aws::String&& value) { SetSpotFleetRequestId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Spot Fleet request.</p>
     */
    inline ModifySpotFleetRequestRequest& WithSpotFleetRequestId(const char* value) { SetSpotFleetRequestId(value); return *this;}


    /**
     * <p>The size of the fleet.</p>
     */
    inline int GetTargetCapacity() const{ return m_targetCapacity; }

    /**
     * <p>The size of the fleet.</p>
     */
    inline bool TargetCapacityHasBeenSet() const { return m_targetCapacityHasBeenSet; }

    /**
     * <p>The size of the fleet.</p>
     */
    inline void SetTargetCapacity(int value) { m_targetCapacityHasBeenSet = true; m_targetCapacity = value; }

    /**
     * <p>The size of the fleet.</p>
     */
    inline ModifySpotFleetRequestRequest& WithTargetCapacity(int value) { SetTargetCapacity(value); return *this;}


    /**
     * <p>The number of On-Demand Instances in the fleet.</p>
     */
    inline int GetOnDemandTargetCapacity() const{ return m_onDemandTargetCapacity; }

    /**
     * <p>The number of On-Demand Instances in the fleet.</p>
     */
    inline bool OnDemandTargetCapacityHasBeenSet() const { return m_onDemandTargetCapacityHasBeenSet; }

    /**
     * <p>The number of On-Demand Instances in the fleet.</p>
     */
    inline void SetOnDemandTargetCapacity(int value) { m_onDemandTargetCapacityHasBeenSet = true; m_onDemandTargetCapacity = value; }

    /**
     * <p>The number of On-Demand Instances in the fleet.</p>
     */
    inline ModifySpotFleetRequestRequest& WithOnDemandTargetCapacity(int value) { SetOnDemandTargetCapacity(value); return *this;}


    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetContext() const{ return m_context; }

    /**
     * <p>Reserved.</p>
     */
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetContext(const Aws::String& value) { m_contextHasBeenSet = true; m_context = value; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetContext(Aws::String&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }

    /**
     * <p>Reserved.</p>
     */
    inline void SetContext(const char* value) { m_contextHasBeenSet = true; m_context.assign(value); }

    /**
     * <p>Reserved.</p>
     */
    inline ModifySpotFleetRequestRequest& WithContext(const Aws::String& value) { SetContext(value); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline ModifySpotFleetRequestRequest& WithContext(Aws::String&& value) { SetContext(std::move(value)); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline ModifySpotFleetRequestRequest& WithContext(const char* value) { SetContext(value); return *this;}

  private:

    ExcessCapacityTerminationPolicy m_excessCapacityTerminationPolicy;
    bool m_excessCapacityTerminationPolicyHasBeenSet = false;

    Aws::Vector<LaunchTemplateConfig> m_launchTemplateConfigs;
    bool m_launchTemplateConfigsHasBeenSet = false;

    Aws::String m_spotFleetRequestId;
    bool m_spotFleetRequestIdHasBeenSet = false;

    int m_targetCapacity;
    bool m_targetCapacityHasBeenSet = false;

    int m_onDemandTargetCapacity;
    bool m_onDemandTargetCapacityHasBeenSet = false;

    Aws::String m_context;
    bool m_contextHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
