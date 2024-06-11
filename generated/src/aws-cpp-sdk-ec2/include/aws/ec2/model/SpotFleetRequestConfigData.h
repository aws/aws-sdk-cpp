﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/AllocationStrategy.h>
#include <aws/ec2/model/OnDemandAllocationStrategy.h>
#include <aws/ec2/model/SpotMaintenanceStrategies.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ExcessCapacityTerminationPolicy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/FleetType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/InstanceInterruptionBehavior.h>
#include <aws/ec2/model/LoadBalancersConfig.h>
#include <aws/ec2/model/TargetCapacityUnitType.h>
#include <aws/ec2/model/SpotFleetLaunchSpecification.h>
#include <aws/ec2/model/LaunchTemplateConfig.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the configuration of a Spot Fleet request.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SpotFleetRequestConfigData">AWS
   * API Reference</a></p>
   */
  class SpotFleetRequestConfigData
  {
  public:
    AWS_EC2_API SpotFleetRequestConfigData();
    AWS_EC2_API SpotFleetRequestConfigData(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SpotFleetRequestConfigData& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The strategy that determines how to allocate the target Spot Instance
     * capacity across the Spot Instance pools specified by the Spot Fleet launch
     * configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-fleet-allocation-strategy.html">Allocation
     * strategies for Spot Instances</a> in the <i>Amazon EC2 User Guide</i>.</p> <dl>
     * <dt>priceCapacityOptimized (recommended)</dt> <dd> <p>Spot Fleet identifies the
     * pools with the highest capacity availability for the number of instances that
     * are launching. This means that we will request Spot Instances from the pools
     * that we believe have the lowest chance of interruption in the near term. Spot
     * Fleet then requests Spot Instances from the lowest priced of these pools.</p>
     * </dd> <dt>capacityOptimized</dt> <dd> <p>Spot Fleet identifies the pools with
     * the highest capacity availability for the number of instances that are
     * launching. This means that we will request Spot Instances from the pools that we
     * believe have the lowest chance of interruption in the near term. To give certain
     * instance types a higher chance of launching first, use
     * <code>capacityOptimizedPrioritized</code>. Set a priority for each instance type
     * by using the <code>Priority</code> parameter for
     * <code>LaunchTemplateOverrides</code>. You can assign the same priority to
     * different <code>LaunchTemplateOverrides</code>. EC2 implements the priorities on
     * a best-effort basis, but optimizes for capacity first.
     * <code>capacityOptimizedPrioritized</code> is supported only if your Spot Fleet
     * uses a launch template. Note that if the <code>OnDemandAllocationStrategy</code>
     * is set to <code>prioritized</code>, the same priority is applied when fulfilling
     * On-Demand capacity.</p> </dd> <dt>diversified</dt> <dd> <p>Spot Fleet requests
     * instances from all of the Spot Instance pools that you specify.</p> </dd>
     * <dt>lowestPrice</dt> <dd> <p>Spot Fleet requests instances from the lowest
     * priced Spot Instance pool that has available capacity. If the lowest priced pool
     * doesn't have available capacity, the Spot Instances come from the next lowest
     * priced pool that has available capacity. If a pool runs out of capacity before
     * fulfilling your desired capacity, Spot Fleet will continue to fulfill your
     * request by drawing from the next lowest priced pool. To ensure that your desired
     * capacity is met, you might receive Spot Instances from several pools. Because
     * this strategy only considers instance price and not capacity availability, it
     * might lead to high interruption rates.</p> </dd> </dl> <p>Default:
     * <code>lowestPrice</code> </p>
     */
    inline const AllocationStrategy& GetAllocationStrategy() const{ return m_allocationStrategy; }
    inline bool AllocationStrategyHasBeenSet() const { return m_allocationStrategyHasBeenSet; }
    inline void SetAllocationStrategy(const AllocationStrategy& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = value; }
    inline void SetAllocationStrategy(AllocationStrategy&& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = std::move(value); }
    inline SpotFleetRequestConfigData& WithAllocationStrategy(const AllocationStrategy& value) { SetAllocationStrategy(value); return *this;}
    inline SpotFleetRequestConfigData& WithAllocationStrategy(AllocationStrategy&& value) { SetAllocationStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order of the launch template overrides to use in fulfilling On-Demand
     * capacity. If you specify <code>lowestPrice</code>, Spot Fleet uses price to
     * determine the order, launching the lowest price first. If you specify
     * <code>prioritized</code>, Spot Fleet uses the priority that you assign to each
     * Spot Fleet launch template override, launching the highest priority first. If
     * you do not specify a value, Spot Fleet defaults to <code>lowestPrice</code>.</p>
     */
    inline const OnDemandAllocationStrategy& GetOnDemandAllocationStrategy() const{ return m_onDemandAllocationStrategy; }
    inline bool OnDemandAllocationStrategyHasBeenSet() const { return m_onDemandAllocationStrategyHasBeenSet; }
    inline void SetOnDemandAllocationStrategy(const OnDemandAllocationStrategy& value) { m_onDemandAllocationStrategyHasBeenSet = true; m_onDemandAllocationStrategy = value; }
    inline void SetOnDemandAllocationStrategy(OnDemandAllocationStrategy&& value) { m_onDemandAllocationStrategyHasBeenSet = true; m_onDemandAllocationStrategy = std::move(value); }
    inline SpotFleetRequestConfigData& WithOnDemandAllocationStrategy(const OnDemandAllocationStrategy& value) { SetOnDemandAllocationStrategy(value); return *this;}
    inline SpotFleetRequestConfigData& WithOnDemandAllocationStrategy(OnDemandAllocationStrategy&& value) { SetOnDemandAllocationStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The strategies for managing your Spot Instances that are at an elevated risk
     * of being interrupted.</p>
     */
    inline const SpotMaintenanceStrategies& GetSpotMaintenanceStrategies() const{ return m_spotMaintenanceStrategies; }
    inline bool SpotMaintenanceStrategiesHasBeenSet() const { return m_spotMaintenanceStrategiesHasBeenSet; }
    inline void SetSpotMaintenanceStrategies(const SpotMaintenanceStrategies& value) { m_spotMaintenanceStrategiesHasBeenSet = true; m_spotMaintenanceStrategies = value; }
    inline void SetSpotMaintenanceStrategies(SpotMaintenanceStrategies&& value) { m_spotMaintenanceStrategiesHasBeenSet = true; m_spotMaintenanceStrategies = std::move(value); }
    inline SpotFleetRequestConfigData& WithSpotMaintenanceStrategies(const SpotMaintenanceStrategies& value) { SetSpotMaintenanceStrategies(value); return *this;}
    inline SpotFleetRequestConfigData& WithSpotMaintenanceStrategies(SpotMaintenanceStrategies&& value) { SetSpotMaintenanceStrategies(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of your listings. This helps to avoid duplicate listings. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline SpotFleetRequestConfigData& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline SpotFleetRequestConfigData& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline SpotFleetRequestConfigData& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether running instances should be terminated if you decrease the
     * target capacity of the Spot Fleet request below the current size of the Spot
     * Fleet.</p> <p>Supported only for fleets of type <code>maintain</code>.</p>
     */
    inline const ExcessCapacityTerminationPolicy& GetExcessCapacityTerminationPolicy() const{ return m_excessCapacityTerminationPolicy; }
    inline bool ExcessCapacityTerminationPolicyHasBeenSet() const { return m_excessCapacityTerminationPolicyHasBeenSet; }
    inline void SetExcessCapacityTerminationPolicy(const ExcessCapacityTerminationPolicy& value) { m_excessCapacityTerminationPolicyHasBeenSet = true; m_excessCapacityTerminationPolicy = value; }
    inline void SetExcessCapacityTerminationPolicy(ExcessCapacityTerminationPolicy&& value) { m_excessCapacityTerminationPolicyHasBeenSet = true; m_excessCapacityTerminationPolicy = std::move(value); }
    inline SpotFleetRequestConfigData& WithExcessCapacityTerminationPolicy(const ExcessCapacityTerminationPolicy& value) { SetExcessCapacityTerminationPolicy(value); return *this;}
    inline SpotFleetRequestConfigData& WithExcessCapacityTerminationPolicy(ExcessCapacityTerminationPolicy&& value) { SetExcessCapacityTerminationPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of units fulfilled by this request compared to the set target
     * capacity. You cannot set this value.</p>
     */
    inline double GetFulfilledCapacity() const{ return m_fulfilledCapacity; }
    inline bool FulfilledCapacityHasBeenSet() const { return m_fulfilledCapacityHasBeenSet; }
    inline void SetFulfilledCapacity(double value) { m_fulfilledCapacityHasBeenSet = true; m_fulfilledCapacity = value; }
    inline SpotFleetRequestConfigData& WithFulfilledCapacity(double value) { SetFulfilledCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of On-Demand units fulfilled by this request compared to the set
     * target On-Demand capacity.</p>
     */
    inline double GetOnDemandFulfilledCapacity() const{ return m_onDemandFulfilledCapacity; }
    inline bool OnDemandFulfilledCapacityHasBeenSet() const { return m_onDemandFulfilledCapacityHasBeenSet; }
    inline void SetOnDemandFulfilledCapacity(double value) { m_onDemandFulfilledCapacityHasBeenSet = true; m_onDemandFulfilledCapacity = value; }
    inline SpotFleetRequestConfigData& WithOnDemandFulfilledCapacity(double value) { SetOnDemandFulfilledCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management (IAM)
     * role that grants the Spot Fleet the permission to request, launch, terminate,
     * and tag instances on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-fleet-requests.html#spot-fleet-prerequisites">Spot
     * Fleet prerequisites</a> in the <i>Amazon EC2 User Guide</i>. Spot Fleet can
     * terminate Spot Instances on your behalf when you cancel its Spot Fleet request
     * using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CancelSpotFleetRequests">CancelSpotFleetRequests</a>
     * or when the Spot Fleet request expires, if you set
     * <code>TerminateInstancesWithExpiration</code>.</p>
     */
    inline const Aws::String& GetIamFleetRole() const{ return m_iamFleetRole; }
    inline bool IamFleetRoleHasBeenSet() const { return m_iamFleetRoleHasBeenSet; }
    inline void SetIamFleetRole(const Aws::String& value) { m_iamFleetRoleHasBeenSet = true; m_iamFleetRole = value; }
    inline void SetIamFleetRole(Aws::String&& value) { m_iamFleetRoleHasBeenSet = true; m_iamFleetRole = std::move(value); }
    inline void SetIamFleetRole(const char* value) { m_iamFleetRoleHasBeenSet = true; m_iamFleetRole.assign(value); }
    inline SpotFleetRequestConfigData& WithIamFleetRole(const Aws::String& value) { SetIamFleetRole(value); return *this;}
    inline SpotFleetRequestConfigData& WithIamFleetRole(Aws::String&& value) { SetIamFleetRole(std::move(value)); return *this;}
    inline SpotFleetRequestConfigData& WithIamFleetRole(const char* value) { SetIamFleetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch specifications for the Spot Fleet request. If you specify
     * <code>LaunchSpecifications</code>, you can't specify
     * <code>LaunchTemplateConfigs</code>. If you include On-Demand capacity in your
     * request, you must use <code>LaunchTemplateConfigs</code>.</p>  <p>If an
     * AMI specified in a launch specification is deregistered or disabled, no new
     * instances can be launched from the AMI. For fleets of type
     * <code>maintain</code>, the target capacity will not be maintained.</p> 
     */
    inline const Aws::Vector<SpotFleetLaunchSpecification>& GetLaunchSpecifications() const{ return m_launchSpecifications; }
    inline bool LaunchSpecificationsHasBeenSet() const { return m_launchSpecificationsHasBeenSet; }
    inline void SetLaunchSpecifications(const Aws::Vector<SpotFleetLaunchSpecification>& value) { m_launchSpecificationsHasBeenSet = true; m_launchSpecifications = value; }
    inline void SetLaunchSpecifications(Aws::Vector<SpotFleetLaunchSpecification>&& value) { m_launchSpecificationsHasBeenSet = true; m_launchSpecifications = std::move(value); }
    inline SpotFleetRequestConfigData& WithLaunchSpecifications(const Aws::Vector<SpotFleetLaunchSpecification>& value) { SetLaunchSpecifications(value); return *this;}
    inline SpotFleetRequestConfigData& WithLaunchSpecifications(Aws::Vector<SpotFleetLaunchSpecification>&& value) { SetLaunchSpecifications(std::move(value)); return *this;}
    inline SpotFleetRequestConfigData& AddLaunchSpecifications(const SpotFleetLaunchSpecification& value) { m_launchSpecificationsHasBeenSet = true; m_launchSpecifications.push_back(value); return *this; }
    inline SpotFleetRequestConfigData& AddLaunchSpecifications(SpotFleetLaunchSpecification&& value) { m_launchSpecificationsHasBeenSet = true; m_launchSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The launch template and overrides. If you specify
     * <code>LaunchTemplateConfigs</code>, you can't specify
     * <code>LaunchSpecifications</code>. If you include On-Demand capacity in your
     * request, you must use <code>LaunchTemplateConfigs</code>.</p>
     */
    inline const Aws::Vector<LaunchTemplateConfig>& GetLaunchTemplateConfigs() const{ return m_launchTemplateConfigs; }
    inline bool LaunchTemplateConfigsHasBeenSet() const { return m_launchTemplateConfigsHasBeenSet; }
    inline void SetLaunchTemplateConfigs(const Aws::Vector<LaunchTemplateConfig>& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs = value; }
    inline void SetLaunchTemplateConfigs(Aws::Vector<LaunchTemplateConfig>&& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs = std::move(value); }
    inline SpotFleetRequestConfigData& WithLaunchTemplateConfigs(const Aws::Vector<LaunchTemplateConfig>& value) { SetLaunchTemplateConfigs(value); return *this;}
    inline SpotFleetRequestConfigData& WithLaunchTemplateConfigs(Aws::Vector<LaunchTemplateConfig>&& value) { SetLaunchTemplateConfigs(std::move(value)); return *this;}
    inline SpotFleetRequestConfigData& AddLaunchTemplateConfigs(const LaunchTemplateConfig& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs.push_back(value); return *this; }
    inline SpotFleetRequestConfigData& AddLaunchTemplateConfigs(LaunchTemplateConfig&& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. We do not recommend using this parameter because it can lead to
     * increased interruptions. If you do not specify this parameter, you will pay the
     * current Spot price.</p>  <p>If you specify a maximum price, your
     * instances will be interrupted more frequently than if you do not specify this
     * parameter.</p> 
     */
    inline const Aws::String& GetSpotPrice() const{ return m_spotPrice; }
    inline bool SpotPriceHasBeenSet() const { return m_spotPriceHasBeenSet; }
    inline void SetSpotPrice(const Aws::String& value) { m_spotPriceHasBeenSet = true; m_spotPrice = value; }
    inline void SetSpotPrice(Aws::String&& value) { m_spotPriceHasBeenSet = true; m_spotPrice = std::move(value); }
    inline void SetSpotPrice(const char* value) { m_spotPriceHasBeenSet = true; m_spotPrice.assign(value); }
    inline SpotFleetRequestConfigData& WithSpotPrice(const Aws::String& value) { SetSpotPrice(value); return *this;}
    inline SpotFleetRequestConfigData& WithSpotPrice(Aws::String&& value) { SetSpotPrice(std::move(value)); return *this;}
    inline SpotFleetRequestConfigData& WithSpotPrice(const char* value) { SetSpotPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of units to request for the Spot Fleet. You can choose to set the
     * target capacity in terms of instances or a performance characteristic that is
     * important to your application workload, such as vCPUs, memory, or I/O. If the
     * request type is <code>maintain</code>, you can specify a target capacity of 0
     * and add capacity later.</p>
     */
    inline int GetTargetCapacity() const{ return m_targetCapacity; }
    inline bool TargetCapacityHasBeenSet() const { return m_targetCapacityHasBeenSet; }
    inline void SetTargetCapacity(int value) { m_targetCapacityHasBeenSet = true; m_targetCapacity = value; }
    inline SpotFleetRequestConfigData& WithTargetCapacity(int value) { SetTargetCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of On-Demand units to request. You can choose to set the target
     * capacity in terms of instances or a performance characteristic that is important
     * to your application workload, such as vCPUs, memory, or I/O. If the request type
     * is <code>maintain</code>, you can specify a target capacity of 0 and add
     * capacity later.</p>
     */
    inline int GetOnDemandTargetCapacity() const{ return m_onDemandTargetCapacity; }
    inline bool OnDemandTargetCapacityHasBeenSet() const { return m_onDemandTargetCapacityHasBeenSet; }
    inline void SetOnDemandTargetCapacity(int value) { m_onDemandTargetCapacityHasBeenSet = true; m_onDemandTargetCapacity = value; }
    inline SpotFleetRequestConfigData& WithOnDemandTargetCapacity(int value) { SetOnDemandTargetCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount per hour for On-Demand Instances that you're willing to
     * pay. You can use the <code>onDemandMaxTotalPrice</code> parameter, the
     * <code>spotMaxTotalPrice</code> parameter, or both parameters to ensure that your
     * fleet cost does not exceed your budget. If you set a maximum price per hour for
     * the On-Demand Instances and Spot Instances in your request, Spot Fleet will
     * launch instances until it reaches the maximum amount you're willing to pay. When
     * the maximum amount you're willing to pay is reached, the fleet stops launching
     * instances even if it hasn’t met the target capacity.</p>  <p>If your fleet
     * includes T instances that are configured as <code>unlimited</code>, and if their
     * average CPU usage exceeds the baseline utilization, you will incur a charge for
     * surplus credits. The <code>onDemandMaxTotalPrice</code> does not account for
     * surplus credits, and, if you use surplus credits, your final cost might be
     * higher than what you specified for <code>onDemandMaxTotalPrice</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances-unlimited-mode-concepts.html#unlimited-mode-surplus-credits">Surplus
     * credits can incur charges</a> in the <i>EC2 User Guide</i>.</p> 
     */
    inline const Aws::String& GetOnDemandMaxTotalPrice() const{ return m_onDemandMaxTotalPrice; }
    inline bool OnDemandMaxTotalPriceHasBeenSet() const { return m_onDemandMaxTotalPriceHasBeenSet; }
    inline void SetOnDemandMaxTotalPrice(const Aws::String& value) { m_onDemandMaxTotalPriceHasBeenSet = true; m_onDemandMaxTotalPrice = value; }
    inline void SetOnDemandMaxTotalPrice(Aws::String&& value) { m_onDemandMaxTotalPriceHasBeenSet = true; m_onDemandMaxTotalPrice = std::move(value); }
    inline void SetOnDemandMaxTotalPrice(const char* value) { m_onDemandMaxTotalPriceHasBeenSet = true; m_onDemandMaxTotalPrice.assign(value); }
    inline SpotFleetRequestConfigData& WithOnDemandMaxTotalPrice(const Aws::String& value) { SetOnDemandMaxTotalPrice(value); return *this;}
    inline SpotFleetRequestConfigData& WithOnDemandMaxTotalPrice(Aws::String&& value) { SetOnDemandMaxTotalPrice(std::move(value)); return *this;}
    inline SpotFleetRequestConfigData& WithOnDemandMaxTotalPrice(const char* value) { SetOnDemandMaxTotalPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount per hour for Spot Instances that you're willing to pay.
     * You can use the <code>spotMaxTotalPrice</code> parameter, the
     * <code>onDemandMaxTotalPrice</code> parameter, or both parameters to ensure that
     * your fleet cost does not exceed your budget. If you set a maximum price per hour
     * for the On-Demand Instances and Spot Instances in your request, Spot Fleet will
     * launch instances until it reaches the maximum amount you're willing to pay. When
     * the maximum amount you're willing to pay is reached, the fleet stops launching
     * instances even if it hasn’t met the target capacity.</p>  <p>If your fleet
     * includes T instances that are configured as <code>unlimited</code>, and if their
     * average CPU usage exceeds the baseline utilization, you will incur a charge for
     * surplus credits. The <code>spotMaxTotalPrice</code> does not account for surplus
     * credits, and, if you use surplus credits, your final cost might be higher than
     * what you specified for <code>spotMaxTotalPrice</code>. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances-unlimited-mode-concepts.html#unlimited-mode-surplus-credits">Surplus
     * credits can incur charges</a> in the <i>EC2 User Guide</i>.</p> 
     */
    inline const Aws::String& GetSpotMaxTotalPrice() const{ return m_spotMaxTotalPrice; }
    inline bool SpotMaxTotalPriceHasBeenSet() const { return m_spotMaxTotalPriceHasBeenSet; }
    inline void SetSpotMaxTotalPrice(const Aws::String& value) { m_spotMaxTotalPriceHasBeenSet = true; m_spotMaxTotalPrice = value; }
    inline void SetSpotMaxTotalPrice(Aws::String&& value) { m_spotMaxTotalPriceHasBeenSet = true; m_spotMaxTotalPrice = std::move(value); }
    inline void SetSpotMaxTotalPrice(const char* value) { m_spotMaxTotalPriceHasBeenSet = true; m_spotMaxTotalPrice.assign(value); }
    inline SpotFleetRequestConfigData& WithSpotMaxTotalPrice(const Aws::String& value) { SetSpotMaxTotalPrice(value); return *this;}
    inline SpotFleetRequestConfigData& WithSpotMaxTotalPrice(Aws::String&& value) { SetSpotMaxTotalPrice(std::move(value)); return *this;}
    inline SpotFleetRequestConfigData& WithSpotMaxTotalPrice(const char* value) { SetSpotMaxTotalPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether running Spot Instances are terminated when the Spot Fleet
     * request expires.</p>
     */
    inline bool GetTerminateInstancesWithExpiration() const{ return m_terminateInstancesWithExpiration; }
    inline bool TerminateInstancesWithExpirationHasBeenSet() const { return m_terminateInstancesWithExpirationHasBeenSet; }
    inline void SetTerminateInstancesWithExpiration(bool value) { m_terminateInstancesWithExpirationHasBeenSet = true; m_terminateInstancesWithExpiration = value; }
    inline SpotFleetRequestConfigData& WithTerminateInstancesWithExpiration(bool value) { SetTerminateInstancesWithExpiration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of request. Indicates whether the Spot Fleet only requests the
     * target capacity or also attempts to maintain it. When this value is
     * <code>request</code>, the Spot Fleet only places the required requests. It does
     * not attempt to replenish Spot Instances if capacity is diminished, nor does it
     * submit requests in alternative Spot pools if capacity is not available. When
     * this value is <code>maintain</code>, the Spot Fleet maintains the target
     * capacity. The Spot Fleet places the required requests to meet capacity and
     * automatically replenishes any interrupted instances. Default:
     * <code>maintain</code>. <code>instant</code> is listed but is not used by Spot
     * Fleet.</p>
     */
    inline const FleetType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const FleetType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(FleetType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline SpotFleetRequestConfigData& WithType(const FleetType& value) { SetType(value); return *this;}
    inline SpotFleetRequestConfigData& WithType(FleetType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date and time of the request, in UTC format
     * (<i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). By default,
     * Amazon EC2 starts fulfilling the request immediately.</p>
     */
    inline const Aws::Utils::DateTime& GetValidFrom() const{ return m_validFrom; }
    inline bool ValidFromHasBeenSet() const { return m_validFromHasBeenSet; }
    inline void SetValidFrom(const Aws::Utils::DateTime& value) { m_validFromHasBeenSet = true; m_validFrom = value; }
    inline void SetValidFrom(Aws::Utils::DateTime&& value) { m_validFromHasBeenSet = true; m_validFrom = std::move(value); }
    inline SpotFleetRequestConfigData& WithValidFrom(const Aws::Utils::DateTime& value) { SetValidFrom(value); return *this;}
    inline SpotFleetRequestConfigData& WithValidFrom(Aws::Utils::DateTime&& value) { SetValidFrom(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date and time of the request, in UTC format
     * (<i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). After the end
     * date and time, no new Spot Instance requests are placed or able to fulfill the
     * request. If no value is specified, the Spot Fleet request remains until you
     * cancel it.</p>
     */
    inline const Aws::Utils::DateTime& GetValidUntil() const{ return m_validUntil; }
    inline bool ValidUntilHasBeenSet() const { return m_validUntilHasBeenSet; }
    inline void SetValidUntil(const Aws::Utils::DateTime& value) { m_validUntilHasBeenSet = true; m_validUntil = value; }
    inline void SetValidUntil(Aws::Utils::DateTime&& value) { m_validUntilHasBeenSet = true; m_validUntil = std::move(value); }
    inline SpotFleetRequestConfigData& WithValidUntil(const Aws::Utils::DateTime& value) { SetValidUntil(value); return *this;}
    inline SpotFleetRequestConfigData& WithValidUntil(Aws::Utils::DateTime&& value) { SetValidUntil(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Spot Fleet should replace unhealthy instances.</p>
     */
    inline bool GetReplaceUnhealthyInstances() const{ return m_replaceUnhealthyInstances; }
    inline bool ReplaceUnhealthyInstancesHasBeenSet() const { return m_replaceUnhealthyInstancesHasBeenSet; }
    inline void SetReplaceUnhealthyInstances(bool value) { m_replaceUnhealthyInstancesHasBeenSet = true; m_replaceUnhealthyInstances = value; }
    inline SpotFleetRequestConfigData& WithReplaceUnhealthyInstances(bool value) { SetReplaceUnhealthyInstances(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The behavior when a Spot Instance is interrupted. The default is
     * <code>terminate</code>.</p>
     */
    inline const InstanceInterruptionBehavior& GetInstanceInterruptionBehavior() const{ return m_instanceInterruptionBehavior; }
    inline bool InstanceInterruptionBehaviorHasBeenSet() const { return m_instanceInterruptionBehaviorHasBeenSet; }
    inline void SetInstanceInterruptionBehavior(const InstanceInterruptionBehavior& value) { m_instanceInterruptionBehaviorHasBeenSet = true; m_instanceInterruptionBehavior = value; }
    inline void SetInstanceInterruptionBehavior(InstanceInterruptionBehavior&& value) { m_instanceInterruptionBehaviorHasBeenSet = true; m_instanceInterruptionBehavior = std::move(value); }
    inline SpotFleetRequestConfigData& WithInstanceInterruptionBehavior(const InstanceInterruptionBehavior& value) { SetInstanceInterruptionBehavior(value); return *this;}
    inline SpotFleetRequestConfigData& WithInstanceInterruptionBehavior(InstanceInterruptionBehavior&& value) { SetInstanceInterruptionBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more Classic Load Balancers and target groups to attach to the Spot
     * Fleet request. Spot Fleet registers the running Spot Instances with the
     * specified Classic Load Balancers and target groups.</p> <p>With Network Load
     * Balancers, Spot Fleet cannot register instances that have the following instance
     * types: C1, CC1, CC2, CG1, CG2, CR1, CS1, G1, G2, HI1, HS1, M1, M2, M3, and
     * T1.</p>
     */
    inline const LoadBalancersConfig& GetLoadBalancersConfig() const{ return m_loadBalancersConfig; }
    inline bool LoadBalancersConfigHasBeenSet() const { return m_loadBalancersConfigHasBeenSet; }
    inline void SetLoadBalancersConfig(const LoadBalancersConfig& value) { m_loadBalancersConfigHasBeenSet = true; m_loadBalancersConfig = value; }
    inline void SetLoadBalancersConfig(LoadBalancersConfig&& value) { m_loadBalancersConfigHasBeenSet = true; m_loadBalancersConfig = std::move(value); }
    inline SpotFleetRequestConfigData& WithLoadBalancersConfig(const LoadBalancersConfig& value) { SetLoadBalancersConfig(value); return *this;}
    inline SpotFleetRequestConfigData& WithLoadBalancersConfig(LoadBalancersConfig&& value) { SetLoadBalancersConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Spot pools across which to allocate your target Spot capacity.
     * Valid only when Spot <b>AllocationStrategy</b> is set to
     * <code>lowest-price</code>. Spot Fleet selects the cheapest Spot pools and evenly
     * allocates your target Spot capacity across the number of Spot pools that you
     * specify.</p> <p>Note that Spot Fleet attempts to draw Spot Instances from the
     * number of pools that you specify on a best effort basis. If a pool runs out of
     * Spot capacity before fulfilling your target capacity, Spot Fleet will continue
     * to fulfill your request by drawing from the next cheapest pool. To ensure that
     * your target capacity is met, you might receive Spot Instances from more than the
     * number of pools that you specified. Similarly, if most of the pools have no Spot
     * capacity, you might receive your full target capacity from fewer than the number
     * of pools that you specified.</p>
     */
    inline int GetInstancePoolsToUseCount() const{ return m_instancePoolsToUseCount; }
    inline bool InstancePoolsToUseCountHasBeenSet() const { return m_instancePoolsToUseCountHasBeenSet; }
    inline void SetInstancePoolsToUseCount(int value) { m_instancePoolsToUseCountHasBeenSet = true; m_instancePoolsToUseCount = value; }
    inline SpotFleetRequestConfigData& WithInstancePoolsToUseCount(int value) { SetInstancePoolsToUseCount(value); return *this;}
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
    inline SpotFleetRequestConfigData& WithContext(const Aws::String& value) { SetContext(value); return *this;}
    inline SpotFleetRequestConfigData& WithContext(Aws::String&& value) { SetContext(std::move(value)); return *this;}
    inline SpotFleetRequestConfigData& WithContext(const char* value) { SetContext(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit for the target capacity. You can specify this parameter only when
     * using attribute-based instance type selection.</p> <p>Default:
     * <code>units</code> (the number of instances)</p>
     */
    inline const TargetCapacityUnitType& GetTargetCapacityUnitType() const{ return m_targetCapacityUnitType; }
    inline bool TargetCapacityUnitTypeHasBeenSet() const { return m_targetCapacityUnitTypeHasBeenSet; }
    inline void SetTargetCapacityUnitType(const TargetCapacityUnitType& value) { m_targetCapacityUnitTypeHasBeenSet = true; m_targetCapacityUnitType = value; }
    inline void SetTargetCapacityUnitType(TargetCapacityUnitType&& value) { m_targetCapacityUnitTypeHasBeenSet = true; m_targetCapacityUnitType = std::move(value); }
    inline SpotFleetRequestConfigData& WithTargetCapacityUnitType(const TargetCapacityUnitType& value) { SetTargetCapacityUnitType(value); return *this;}
    inline SpotFleetRequestConfigData& WithTargetCapacityUnitType(TargetCapacityUnitType&& value) { SetTargetCapacityUnitType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value pair for tagging the Spot Fleet request on creation. The value
     * for <code>ResourceType</code> must be <code>spot-fleet-request</code>, otherwise
     * the Spot Fleet request fails. To tag instances at launch, specify the tags in
     * the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html#create-launch-template">launch
     * template</a> (valid only if you use <code>LaunchTemplateConfigs</code>) or in
     * the <code> <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SpotFleetTagSpecification.html">SpotFleetTagSpecification</a>
     * </code> (valid only if you use <code>LaunchSpecifications</code>). For
     * information about tagging after launch, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#tag-resources">Tag
     * your resources</a>.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline SpotFleetRequestConfigData& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline SpotFleetRequestConfigData& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline SpotFleetRequestConfigData& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline SpotFleetRequestConfigData& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}
  private:

    AllocationStrategy m_allocationStrategy;
    bool m_allocationStrategyHasBeenSet = false;

    OnDemandAllocationStrategy m_onDemandAllocationStrategy;
    bool m_onDemandAllocationStrategyHasBeenSet = false;

    SpotMaintenanceStrategies m_spotMaintenanceStrategies;
    bool m_spotMaintenanceStrategiesHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    ExcessCapacityTerminationPolicy m_excessCapacityTerminationPolicy;
    bool m_excessCapacityTerminationPolicyHasBeenSet = false;

    double m_fulfilledCapacity;
    bool m_fulfilledCapacityHasBeenSet = false;

    double m_onDemandFulfilledCapacity;
    bool m_onDemandFulfilledCapacityHasBeenSet = false;

    Aws::String m_iamFleetRole;
    bool m_iamFleetRoleHasBeenSet = false;

    Aws::Vector<SpotFleetLaunchSpecification> m_launchSpecifications;
    bool m_launchSpecificationsHasBeenSet = false;

    Aws::Vector<LaunchTemplateConfig> m_launchTemplateConfigs;
    bool m_launchTemplateConfigsHasBeenSet = false;

    Aws::String m_spotPrice;
    bool m_spotPriceHasBeenSet = false;

    int m_targetCapacity;
    bool m_targetCapacityHasBeenSet = false;

    int m_onDemandTargetCapacity;
    bool m_onDemandTargetCapacityHasBeenSet = false;

    Aws::String m_onDemandMaxTotalPrice;
    bool m_onDemandMaxTotalPriceHasBeenSet = false;

    Aws::String m_spotMaxTotalPrice;
    bool m_spotMaxTotalPriceHasBeenSet = false;

    bool m_terminateInstancesWithExpiration;
    bool m_terminateInstancesWithExpirationHasBeenSet = false;

    FleetType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_validFrom;
    bool m_validFromHasBeenSet = false;

    Aws::Utils::DateTime m_validUntil;
    bool m_validUntilHasBeenSet = false;

    bool m_replaceUnhealthyInstances;
    bool m_replaceUnhealthyInstancesHasBeenSet = false;

    InstanceInterruptionBehavior m_instanceInterruptionBehavior;
    bool m_instanceInterruptionBehaviorHasBeenSet = false;

    LoadBalancersConfig m_loadBalancersConfig;
    bool m_loadBalancersConfigHasBeenSet = false;

    int m_instancePoolsToUseCount;
    bool m_instancePoolsToUseCountHasBeenSet = false;

    Aws::String m_context;
    bool m_contextHasBeenSet = false;

    TargetCapacityUnitType m_targetCapacityUnitType;
    bool m_targetCapacityUnitTypeHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
