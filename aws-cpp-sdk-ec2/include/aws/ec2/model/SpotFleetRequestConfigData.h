/**
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
  class AWS_EC2_API SpotFleetRequestConfigData
  {
  public:
    SpotFleetRequestConfigData();
    SpotFleetRequestConfigData(const Aws::Utils::Xml::XmlNode& xmlNode);
    SpotFleetRequestConfigData& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates how to allocate the target Spot Instance capacity across the Spot
     * Instance pools specified by the Spot Fleet request.</p> <p>If the allocation
     * strategy is <code>lowestPrice</code>, Spot Fleet launches instances from the
     * Spot Instance pools with the lowest price. This is the default allocation
     * strategy.</p> <p>If the allocation strategy is <code>diversified</code>, Spot
     * Fleet launches instances from all the Spot Instance pools that you specify.</p>
     * <p>If the allocation strategy is <code>capacityOptimized</code> (recommended),
     * Spot Fleet launches instances from Spot Instance pools with optimal capacity for
     * the number of instances that are launching. To give certain instance types a
     * higher chance of launching first, use <code>capacityOptimizedPrioritized</code>.
     * Set a priority for each instance type by using the <code>Priority</code>
     * parameter for <code>LaunchTemplateOverrides</code>. You can assign the same
     * priority to different <code>LaunchTemplateOverrides</code>. EC2 implements the
     * priorities on a best-effort basis, but optimizes for capacity first.
     * <code>capacityOptimizedPrioritized</code> is supported only if your Spot Fleet
     * uses a launch template. Note that if the <code>OnDemandAllocationStrategy</code>
     * is set to <code>prioritized</code>, the same priority is applied when fulfilling
     * On-Demand capacity.</p>
     */
    inline const AllocationStrategy& GetAllocationStrategy() const{ return m_allocationStrategy; }

    /**
     * <p>Indicates how to allocate the target Spot Instance capacity across the Spot
     * Instance pools specified by the Spot Fleet request.</p> <p>If the allocation
     * strategy is <code>lowestPrice</code>, Spot Fleet launches instances from the
     * Spot Instance pools with the lowest price. This is the default allocation
     * strategy.</p> <p>If the allocation strategy is <code>diversified</code>, Spot
     * Fleet launches instances from all the Spot Instance pools that you specify.</p>
     * <p>If the allocation strategy is <code>capacityOptimized</code> (recommended),
     * Spot Fleet launches instances from Spot Instance pools with optimal capacity for
     * the number of instances that are launching. To give certain instance types a
     * higher chance of launching first, use <code>capacityOptimizedPrioritized</code>.
     * Set a priority for each instance type by using the <code>Priority</code>
     * parameter for <code>LaunchTemplateOverrides</code>. You can assign the same
     * priority to different <code>LaunchTemplateOverrides</code>. EC2 implements the
     * priorities on a best-effort basis, but optimizes for capacity first.
     * <code>capacityOptimizedPrioritized</code> is supported only if your Spot Fleet
     * uses a launch template. Note that if the <code>OnDemandAllocationStrategy</code>
     * is set to <code>prioritized</code>, the same priority is applied when fulfilling
     * On-Demand capacity.</p>
     */
    inline bool AllocationStrategyHasBeenSet() const { return m_allocationStrategyHasBeenSet; }

    /**
     * <p>Indicates how to allocate the target Spot Instance capacity across the Spot
     * Instance pools specified by the Spot Fleet request.</p> <p>If the allocation
     * strategy is <code>lowestPrice</code>, Spot Fleet launches instances from the
     * Spot Instance pools with the lowest price. This is the default allocation
     * strategy.</p> <p>If the allocation strategy is <code>diversified</code>, Spot
     * Fleet launches instances from all the Spot Instance pools that you specify.</p>
     * <p>If the allocation strategy is <code>capacityOptimized</code> (recommended),
     * Spot Fleet launches instances from Spot Instance pools with optimal capacity for
     * the number of instances that are launching. To give certain instance types a
     * higher chance of launching first, use <code>capacityOptimizedPrioritized</code>.
     * Set a priority for each instance type by using the <code>Priority</code>
     * parameter for <code>LaunchTemplateOverrides</code>. You can assign the same
     * priority to different <code>LaunchTemplateOverrides</code>. EC2 implements the
     * priorities on a best-effort basis, but optimizes for capacity first.
     * <code>capacityOptimizedPrioritized</code> is supported only if your Spot Fleet
     * uses a launch template. Note that if the <code>OnDemandAllocationStrategy</code>
     * is set to <code>prioritized</code>, the same priority is applied when fulfilling
     * On-Demand capacity.</p>
     */
    inline void SetAllocationStrategy(const AllocationStrategy& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = value; }

    /**
     * <p>Indicates how to allocate the target Spot Instance capacity across the Spot
     * Instance pools specified by the Spot Fleet request.</p> <p>If the allocation
     * strategy is <code>lowestPrice</code>, Spot Fleet launches instances from the
     * Spot Instance pools with the lowest price. This is the default allocation
     * strategy.</p> <p>If the allocation strategy is <code>diversified</code>, Spot
     * Fleet launches instances from all the Spot Instance pools that you specify.</p>
     * <p>If the allocation strategy is <code>capacityOptimized</code> (recommended),
     * Spot Fleet launches instances from Spot Instance pools with optimal capacity for
     * the number of instances that are launching. To give certain instance types a
     * higher chance of launching first, use <code>capacityOptimizedPrioritized</code>.
     * Set a priority for each instance type by using the <code>Priority</code>
     * parameter for <code>LaunchTemplateOverrides</code>. You can assign the same
     * priority to different <code>LaunchTemplateOverrides</code>. EC2 implements the
     * priorities on a best-effort basis, but optimizes for capacity first.
     * <code>capacityOptimizedPrioritized</code> is supported only if your Spot Fleet
     * uses a launch template. Note that if the <code>OnDemandAllocationStrategy</code>
     * is set to <code>prioritized</code>, the same priority is applied when fulfilling
     * On-Demand capacity.</p>
     */
    inline void SetAllocationStrategy(AllocationStrategy&& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = std::move(value); }

    /**
     * <p>Indicates how to allocate the target Spot Instance capacity across the Spot
     * Instance pools specified by the Spot Fleet request.</p> <p>If the allocation
     * strategy is <code>lowestPrice</code>, Spot Fleet launches instances from the
     * Spot Instance pools with the lowest price. This is the default allocation
     * strategy.</p> <p>If the allocation strategy is <code>diversified</code>, Spot
     * Fleet launches instances from all the Spot Instance pools that you specify.</p>
     * <p>If the allocation strategy is <code>capacityOptimized</code> (recommended),
     * Spot Fleet launches instances from Spot Instance pools with optimal capacity for
     * the number of instances that are launching. To give certain instance types a
     * higher chance of launching first, use <code>capacityOptimizedPrioritized</code>.
     * Set a priority for each instance type by using the <code>Priority</code>
     * parameter for <code>LaunchTemplateOverrides</code>. You can assign the same
     * priority to different <code>LaunchTemplateOverrides</code>. EC2 implements the
     * priorities on a best-effort basis, but optimizes for capacity first.
     * <code>capacityOptimizedPrioritized</code> is supported only if your Spot Fleet
     * uses a launch template. Note that if the <code>OnDemandAllocationStrategy</code>
     * is set to <code>prioritized</code>, the same priority is applied when fulfilling
     * On-Demand capacity.</p>
     */
    inline SpotFleetRequestConfigData& WithAllocationStrategy(const AllocationStrategy& value) { SetAllocationStrategy(value); return *this;}

    /**
     * <p>Indicates how to allocate the target Spot Instance capacity across the Spot
     * Instance pools specified by the Spot Fleet request.</p> <p>If the allocation
     * strategy is <code>lowestPrice</code>, Spot Fleet launches instances from the
     * Spot Instance pools with the lowest price. This is the default allocation
     * strategy.</p> <p>If the allocation strategy is <code>diversified</code>, Spot
     * Fleet launches instances from all the Spot Instance pools that you specify.</p>
     * <p>If the allocation strategy is <code>capacityOptimized</code> (recommended),
     * Spot Fleet launches instances from Spot Instance pools with optimal capacity for
     * the number of instances that are launching. To give certain instance types a
     * higher chance of launching first, use <code>capacityOptimizedPrioritized</code>.
     * Set a priority for each instance type by using the <code>Priority</code>
     * parameter for <code>LaunchTemplateOverrides</code>. You can assign the same
     * priority to different <code>LaunchTemplateOverrides</code>. EC2 implements the
     * priorities on a best-effort basis, but optimizes for capacity first.
     * <code>capacityOptimizedPrioritized</code> is supported only if your Spot Fleet
     * uses a launch template. Note that if the <code>OnDemandAllocationStrategy</code>
     * is set to <code>prioritized</code>, the same priority is applied when fulfilling
     * On-Demand capacity.</p>
     */
    inline SpotFleetRequestConfigData& WithAllocationStrategy(AllocationStrategy&& value) { SetAllocationStrategy(std::move(value)); return *this;}


    /**
     * <p>The order of the launch template overrides to use in fulfilling On-Demand
     * capacity. If you specify <code>lowestPrice</code>, Spot Fleet uses price to
     * determine the order, launching the lowest price first. If you specify
     * <code>prioritized</code>, Spot Fleet uses the priority that you assign to each
     * Spot Fleet launch template override, launching the highest priority first. If
     * you do not specify a value, Spot Fleet defaults to <code>lowestPrice</code>.</p>
     */
    inline const OnDemandAllocationStrategy& GetOnDemandAllocationStrategy() const{ return m_onDemandAllocationStrategy; }

    /**
     * <p>The order of the launch template overrides to use in fulfilling On-Demand
     * capacity. If you specify <code>lowestPrice</code>, Spot Fleet uses price to
     * determine the order, launching the lowest price first. If you specify
     * <code>prioritized</code>, Spot Fleet uses the priority that you assign to each
     * Spot Fleet launch template override, launching the highest priority first. If
     * you do not specify a value, Spot Fleet defaults to <code>lowestPrice</code>.</p>
     */
    inline bool OnDemandAllocationStrategyHasBeenSet() const { return m_onDemandAllocationStrategyHasBeenSet; }

    /**
     * <p>The order of the launch template overrides to use in fulfilling On-Demand
     * capacity. If you specify <code>lowestPrice</code>, Spot Fleet uses price to
     * determine the order, launching the lowest price first. If you specify
     * <code>prioritized</code>, Spot Fleet uses the priority that you assign to each
     * Spot Fleet launch template override, launching the highest priority first. If
     * you do not specify a value, Spot Fleet defaults to <code>lowestPrice</code>.</p>
     */
    inline void SetOnDemandAllocationStrategy(const OnDemandAllocationStrategy& value) { m_onDemandAllocationStrategyHasBeenSet = true; m_onDemandAllocationStrategy = value; }

    /**
     * <p>The order of the launch template overrides to use in fulfilling On-Demand
     * capacity. If you specify <code>lowestPrice</code>, Spot Fleet uses price to
     * determine the order, launching the lowest price first. If you specify
     * <code>prioritized</code>, Spot Fleet uses the priority that you assign to each
     * Spot Fleet launch template override, launching the highest priority first. If
     * you do not specify a value, Spot Fleet defaults to <code>lowestPrice</code>.</p>
     */
    inline void SetOnDemandAllocationStrategy(OnDemandAllocationStrategy&& value) { m_onDemandAllocationStrategyHasBeenSet = true; m_onDemandAllocationStrategy = std::move(value); }

    /**
     * <p>The order of the launch template overrides to use in fulfilling On-Demand
     * capacity. If you specify <code>lowestPrice</code>, Spot Fleet uses price to
     * determine the order, launching the lowest price first. If you specify
     * <code>prioritized</code>, Spot Fleet uses the priority that you assign to each
     * Spot Fleet launch template override, launching the highest priority first. If
     * you do not specify a value, Spot Fleet defaults to <code>lowestPrice</code>.</p>
     */
    inline SpotFleetRequestConfigData& WithOnDemandAllocationStrategy(const OnDemandAllocationStrategy& value) { SetOnDemandAllocationStrategy(value); return *this;}

    /**
     * <p>The order of the launch template overrides to use in fulfilling On-Demand
     * capacity. If you specify <code>lowestPrice</code>, Spot Fleet uses price to
     * determine the order, launching the lowest price first. If you specify
     * <code>prioritized</code>, Spot Fleet uses the priority that you assign to each
     * Spot Fleet launch template override, launching the highest priority first. If
     * you do not specify a value, Spot Fleet defaults to <code>lowestPrice</code>.</p>
     */
    inline SpotFleetRequestConfigData& WithOnDemandAllocationStrategy(OnDemandAllocationStrategy&& value) { SetOnDemandAllocationStrategy(std::move(value)); return *this;}


    /**
     * <p>The strategies for managing your Spot Instances that are at an elevated risk
     * of being interrupted.</p>
     */
    inline const SpotMaintenanceStrategies& GetSpotMaintenanceStrategies() const{ return m_spotMaintenanceStrategies; }

    /**
     * <p>The strategies for managing your Spot Instances that are at an elevated risk
     * of being interrupted.</p>
     */
    inline bool SpotMaintenanceStrategiesHasBeenSet() const { return m_spotMaintenanceStrategiesHasBeenSet; }

    /**
     * <p>The strategies for managing your Spot Instances that are at an elevated risk
     * of being interrupted.</p>
     */
    inline void SetSpotMaintenanceStrategies(const SpotMaintenanceStrategies& value) { m_spotMaintenanceStrategiesHasBeenSet = true; m_spotMaintenanceStrategies = value; }

    /**
     * <p>The strategies for managing your Spot Instances that are at an elevated risk
     * of being interrupted.</p>
     */
    inline void SetSpotMaintenanceStrategies(SpotMaintenanceStrategies&& value) { m_spotMaintenanceStrategiesHasBeenSet = true; m_spotMaintenanceStrategies = std::move(value); }

    /**
     * <p>The strategies for managing your Spot Instances that are at an elevated risk
     * of being interrupted.</p>
     */
    inline SpotFleetRequestConfigData& WithSpotMaintenanceStrategies(const SpotMaintenanceStrategies& value) { SetSpotMaintenanceStrategies(value); return *this;}

    /**
     * <p>The strategies for managing your Spot Instances that are at an elevated risk
     * of being interrupted.</p>
     */
    inline SpotFleetRequestConfigData& WithSpotMaintenanceStrategies(SpotMaintenanceStrategies&& value) { SetSpotMaintenanceStrategies(std::move(value)); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of your listings. This helps to avoid duplicate listings. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of your listings. This helps to avoid duplicate listings. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of your listings. This helps to avoid duplicate listings. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of your listings. This helps to avoid duplicate listings. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of your listings. This helps to avoid duplicate listings. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of your listings. This helps to avoid duplicate listings. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline SpotFleetRequestConfigData& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of your listings. This helps to avoid duplicate listings. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline SpotFleetRequestConfigData& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of your listings. This helps to avoid duplicate listings. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline SpotFleetRequestConfigData& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Indicates whether running Spot Instances should be terminated if you decrease
     * the target capacity of the Spot Fleet request below the current size of the Spot
     * Fleet.</p>
     */
    inline const ExcessCapacityTerminationPolicy& GetExcessCapacityTerminationPolicy() const{ return m_excessCapacityTerminationPolicy; }

    /**
     * <p>Indicates whether running Spot Instances should be terminated if you decrease
     * the target capacity of the Spot Fleet request below the current size of the Spot
     * Fleet.</p>
     */
    inline bool ExcessCapacityTerminationPolicyHasBeenSet() const { return m_excessCapacityTerminationPolicyHasBeenSet; }

    /**
     * <p>Indicates whether running Spot Instances should be terminated if you decrease
     * the target capacity of the Spot Fleet request below the current size of the Spot
     * Fleet.</p>
     */
    inline void SetExcessCapacityTerminationPolicy(const ExcessCapacityTerminationPolicy& value) { m_excessCapacityTerminationPolicyHasBeenSet = true; m_excessCapacityTerminationPolicy = value; }

    /**
     * <p>Indicates whether running Spot Instances should be terminated if you decrease
     * the target capacity of the Spot Fleet request below the current size of the Spot
     * Fleet.</p>
     */
    inline void SetExcessCapacityTerminationPolicy(ExcessCapacityTerminationPolicy&& value) { m_excessCapacityTerminationPolicyHasBeenSet = true; m_excessCapacityTerminationPolicy = std::move(value); }

    /**
     * <p>Indicates whether running Spot Instances should be terminated if you decrease
     * the target capacity of the Spot Fleet request below the current size of the Spot
     * Fleet.</p>
     */
    inline SpotFleetRequestConfigData& WithExcessCapacityTerminationPolicy(const ExcessCapacityTerminationPolicy& value) { SetExcessCapacityTerminationPolicy(value); return *this;}

    /**
     * <p>Indicates whether running Spot Instances should be terminated if you decrease
     * the target capacity of the Spot Fleet request below the current size of the Spot
     * Fleet.</p>
     */
    inline SpotFleetRequestConfigData& WithExcessCapacityTerminationPolicy(ExcessCapacityTerminationPolicy&& value) { SetExcessCapacityTerminationPolicy(std::move(value)); return *this;}


    /**
     * <p>The number of units fulfilled by this request compared to the set target
     * capacity. You cannot set this value.</p>
     */
    inline double GetFulfilledCapacity() const{ return m_fulfilledCapacity; }

    /**
     * <p>The number of units fulfilled by this request compared to the set target
     * capacity. You cannot set this value.</p>
     */
    inline bool FulfilledCapacityHasBeenSet() const { return m_fulfilledCapacityHasBeenSet; }

    /**
     * <p>The number of units fulfilled by this request compared to the set target
     * capacity. You cannot set this value.</p>
     */
    inline void SetFulfilledCapacity(double value) { m_fulfilledCapacityHasBeenSet = true; m_fulfilledCapacity = value; }

    /**
     * <p>The number of units fulfilled by this request compared to the set target
     * capacity. You cannot set this value.</p>
     */
    inline SpotFleetRequestConfigData& WithFulfilledCapacity(double value) { SetFulfilledCapacity(value); return *this;}


    /**
     * <p>The number of On-Demand units fulfilled by this request compared to the set
     * target On-Demand capacity.</p>
     */
    inline double GetOnDemandFulfilledCapacity() const{ return m_onDemandFulfilledCapacity; }

    /**
     * <p>The number of On-Demand units fulfilled by this request compared to the set
     * target On-Demand capacity.</p>
     */
    inline bool OnDemandFulfilledCapacityHasBeenSet() const { return m_onDemandFulfilledCapacityHasBeenSet; }

    /**
     * <p>The number of On-Demand units fulfilled by this request compared to the set
     * target On-Demand capacity.</p>
     */
    inline void SetOnDemandFulfilledCapacity(double value) { m_onDemandFulfilledCapacityHasBeenSet = true; m_onDemandFulfilledCapacity = value; }

    /**
     * <p>The number of On-Demand units fulfilled by this request compared to the set
     * target On-Demand capacity.</p>
     */
    inline SpotFleetRequestConfigData& WithOnDemandFulfilledCapacity(double value) { SetOnDemandFulfilledCapacity(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that grants the Spot Fleet the permission to request, launch, terminate,
     * and tag instances on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-fleet-requests.html#spot-fleet-prerequisites">Spot
     * Fleet prerequisites</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.
     * Spot Fleet can terminate Spot Instances on your behalf when you cancel its Spot
     * Fleet request using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CancelSpotFleetRequests">CancelSpotFleetRequests</a>
     * or when the Spot Fleet request expires, if you set
     * <code>TerminateInstancesWithExpiration</code>.</p>
     */
    inline const Aws::String& GetIamFleetRole() const{ return m_iamFleetRole; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that grants the Spot Fleet the permission to request, launch, terminate,
     * and tag instances on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-fleet-requests.html#spot-fleet-prerequisites">Spot
     * Fleet prerequisites</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.
     * Spot Fleet can terminate Spot Instances on your behalf when you cancel its Spot
     * Fleet request using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CancelSpotFleetRequests">CancelSpotFleetRequests</a>
     * or when the Spot Fleet request expires, if you set
     * <code>TerminateInstancesWithExpiration</code>.</p>
     */
    inline bool IamFleetRoleHasBeenSet() const { return m_iamFleetRoleHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that grants the Spot Fleet the permission to request, launch, terminate,
     * and tag instances on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-fleet-requests.html#spot-fleet-prerequisites">Spot
     * Fleet prerequisites</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.
     * Spot Fleet can terminate Spot Instances on your behalf when you cancel its Spot
     * Fleet request using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CancelSpotFleetRequests">CancelSpotFleetRequests</a>
     * or when the Spot Fleet request expires, if you set
     * <code>TerminateInstancesWithExpiration</code>.</p>
     */
    inline void SetIamFleetRole(const Aws::String& value) { m_iamFleetRoleHasBeenSet = true; m_iamFleetRole = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that grants the Spot Fleet the permission to request, launch, terminate,
     * and tag instances on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-fleet-requests.html#spot-fleet-prerequisites">Spot
     * Fleet prerequisites</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.
     * Spot Fleet can terminate Spot Instances on your behalf when you cancel its Spot
     * Fleet request using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CancelSpotFleetRequests">CancelSpotFleetRequests</a>
     * or when the Spot Fleet request expires, if you set
     * <code>TerminateInstancesWithExpiration</code>.</p>
     */
    inline void SetIamFleetRole(Aws::String&& value) { m_iamFleetRoleHasBeenSet = true; m_iamFleetRole = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that grants the Spot Fleet the permission to request, launch, terminate,
     * and tag instances on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-fleet-requests.html#spot-fleet-prerequisites">Spot
     * Fleet prerequisites</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.
     * Spot Fleet can terminate Spot Instances on your behalf when you cancel its Spot
     * Fleet request using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CancelSpotFleetRequests">CancelSpotFleetRequests</a>
     * or when the Spot Fleet request expires, if you set
     * <code>TerminateInstancesWithExpiration</code>.</p>
     */
    inline void SetIamFleetRole(const char* value) { m_iamFleetRoleHasBeenSet = true; m_iamFleetRole.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that grants the Spot Fleet the permission to request, launch, terminate,
     * and tag instances on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-fleet-requests.html#spot-fleet-prerequisites">Spot
     * Fleet prerequisites</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.
     * Spot Fleet can terminate Spot Instances on your behalf when you cancel its Spot
     * Fleet request using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CancelSpotFleetRequests">CancelSpotFleetRequests</a>
     * or when the Spot Fleet request expires, if you set
     * <code>TerminateInstancesWithExpiration</code>.</p>
     */
    inline SpotFleetRequestConfigData& WithIamFleetRole(const Aws::String& value) { SetIamFleetRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that grants the Spot Fleet the permission to request, launch, terminate,
     * and tag instances on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-fleet-requests.html#spot-fleet-prerequisites">Spot
     * Fleet prerequisites</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.
     * Spot Fleet can terminate Spot Instances on your behalf when you cancel its Spot
     * Fleet request using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CancelSpotFleetRequests">CancelSpotFleetRequests</a>
     * or when the Spot Fleet request expires, if you set
     * <code>TerminateInstancesWithExpiration</code>.</p>
     */
    inline SpotFleetRequestConfigData& WithIamFleetRole(Aws::String&& value) { SetIamFleetRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that grants the Spot Fleet the permission to request, launch, terminate,
     * and tag instances on your behalf. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-fleet-requests.html#spot-fleet-prerequisites">Spot
     * Fleet prerequisites</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.
     * Spot Fleet can terminate Spot Instances on your behalf when you cancel its Spot
     * Fleet request using <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CancelSpotFleetRequests">CancelSpotFleetRequests</a>
     * or when the Spot Fleet request expires, if you set
     * <code>TerminateInstancesWithExpiration</code>.</p>
     */
    inline SpotFleetRequestConfigData& WithIamFleetRole(const char* value) { SetIamFleetRole(value); return *this;}


    /**
     * <p>The launch specifications for the Spot Fleet request. If you specify
     * <code>LaunchSpecifications</code>, you can't specify
     * <code>LaunchTemplateConfigs</code>. If you include On-Demand capacity in your
     * request, you must use <code>LaunchTemplateConfigs</code>.</p>
     */
    inline const Aws::Vector<SpotFleetLaunchSpecification>& GetLaunchSpecifications() const{ return m_launchSpecifications; }

    /**
     * <p>The launch specifications for the Spot Fleet request. If you specify
     * <code>LaunchSpecifications</code>, you can't specify
     * <code>LaunchTemplateConfigs</code>. If you include On-Demand capacity in your
     * request, you must use <code>LaunchTemplateConfigs</code>.</p>
     */
    inline bool LaunchSpecificationsHasBeenSet() const { return m_launchSpecificationsHasBeenSet; }

    /**
     * <p>The launch specifications for the Spot Fleet request. If you specify
     * <code>LaunchSpecifications</code>, you can't specify
     * <code>LaunchTemplateConfigs</code>. If you include On-Demand capacity in your
     * request, you must use <code>LaunchTemplateConfigs</code>.</p>
     */
    inline void SetLaunchSpecifications(const Aws::Vector<SpotFleetLaunchSpecification>& value) { m_launchSpecificationsHasBeenSet = true; m_launchSpecifications = value; }

    /**
     * <p>The launch specifications for the Spot Fleet request. If you specify
     * <code>LaunchSpecifications</code>, you can't specify
     * <code>LaunchTemplateConfigs</code>. If you include On-Demand capacity in your
     * request, you must use <code>LaunchTemplateConfigs</code>.</p>
     */
    inline void SetLaunchSpecifications(Aws::Vector<SpotFleetLaunchSpecification>&& value) { m_launchSpecificationsHasBeenSet = true; m_launchSpecifications = std::move(value); }

    /**
     * <p>The launch specifications for the Spot Fleet request. If you specify
     * <code>LaunchSpecifications</code>, you can't specify
     * <code>LaunchTemplateConfigs</code>. If you include On-Demand capacity in your
     * request, you must use <code>LaunchTemplateConfigs</code>.</p>
     */
    inline SpotFleetRequestConfigData& WithLaunchSpecifications(const Aws::Vector<SpotFleetLaunchSpecification>& value) { SetLaunchSpecifications(value); return *this;}

    /**
     * <p>The launch specifications for the Spot Fleet request. If you specify
     * <code>LaunchSpecifications</code>, you can't specify
     * <code>LaunchTemplateConfigs</code>. If you include On-Demand capacity in your
     * request, you must use <code>LaunchTemplateConfigs</code>.</p>
     */
    inline SpotFleetRequestConfigData& WithLaunchSpecifications(Aws::Vector<SpotFleetLaunchSpecification>&& value) { SetLaunchSpecifications(std::move(value)); return *this;}

    /**
     * <p>The launch specifications for the Spot Fleet request. If you specify
     * <code>LaunchSpecifications</code>, you can't specify
     * <code>LaunchTemplateConfigs</code>. If you include On-Demand capacity in your
     * request, you must use <code>LaunchTemplateConfigs</code>.</p>
     */
    inline SpotFleetRequestConfigData& AddLaunchSpecifications(const SpotFleetLaunchSpecification& value) { m_launchSpecificationsHasBeenSet = true; m_launchSpecifications.push_back(value); return *this; }

    /**
     * <p>The launch specifications for the Spot Fleet request. If you specify
     * <code>LaunchSpecifications</code>, you can't specify
     * <code>LaunchTemplateConfigs</code>. If you include On-Demand capacity in your
     * request, you must use <code>LaunchTemplateConfigs</code>.</p>
     */
    inline SpotFleetRequestConfigData& AddLaunchSpecifications(SpotFleetLaunchSpecification&& value) { m_launchSpecificationsHasBeenSet = true; m_launchSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>The launch template and overrides. If you specify
     * <code>LaunchTemplateConfigs</code>, you can't specify
     * <code>LaunchSpecifications</code>. If you include On-Demand capacity in your
     * request, you must use <code>LaunchTemplateConfigs</code>.</p>
     */
    inline const Aws::Vector<LaunchTemplateConfig>& GetLaunchTemplateConfigs() const{ return m_launchTemplateConfigs; }

    /**
     * <p>The launch template and overrides. If you specify
     * <code>LaunchTemplateConfigs</code>, you can't specify
     * <code>LaunchSpecifications</code>. If you include On-Demand capacity in your
     * request, you must use <code>LaunchTemplateConfigs</code>.</p>
     */
    inline bool LaunchTemplateConfigsHasBeenSet() const { return m_launchTemplateConfigsHasBeenSet; }

    /**
     * <p>The launch template and overrides. If you specify
     * <code>LaunchTemplateConfigs</code>, you can't specify
     * <code>LaunchSpecifications</code>. If you include On-Demand capacity in your
     * request, you must use <code>LaunchTemplateConfigs</code>.</p>
     */
    inline void SetLaunchTemplateConfigs(const Aws::Vector<LaunchTemplateConfig>& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs = value; }

    /**
     * <p>The launch template and overrides. If you specify
     * <code>LaunchTemplateConfigs</code>, you can't specify
     * <code>LaunchSpecifications</code>. If you include On-Demand capacity in your
     * request, you must use <code>LaunchTemplateConfigs</code>.</p>
     */
    inline void SetLaunchTemplateConfigs(Aws::Vector<LaunchTemplateConfig>&& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs = std::move(value); }

    /**
     * <p>The launch template and overrides. If you specify
     * <code>LaunchTemplateConfigs</code>, you can't specify
     * <code>LaunchSpecifications</code>. If you include On-Demand capacity in your
     * request, you must use <code>LaunchTemplateConfigs</code>.</p>
     */
    inline SpotFleetRequestConfigData& WithLaunchTemplateConfigs(const Aws::Vector<LaunchTemplateConfig>& value) { SetLaunchTemplateConfigs(value); return *this;}

    /**
     * <p>The launch template and overrides. If you specify
     * <code>LaunchTemplateConfigs</code>, you can't specify
     * <code>LaunchSpecifications</code>. If you include On-Demand capacity in your
     * request, you must use <code>LaunchTemplateConfigs</code>.</p>
     */
    inline SpotFleetRequestConfigData& WithLaunchTemplateConfigs(Aws::Vector<LaunchTemplateConfig>&& value) { SetLaunchTemplateConfigs(std::move(value)); return *this;}

    /**
     * <p>The launch template and overrides. If you specify
     * <code>LaunchTemplateConfigs</code>, you can't specify
     * <code>LaunchSpecifications</code>. If you include On-Demand capacity in your
     * request, you must use <code>LaunchTemplateConfigs</code>.</p>
     */
    inline SpotFleetRequestConfigData& AddLaunchTemplateConfigs(const LaunchTemplateConfig& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs.push_back(value); return *this; }

    /**
     * <p>The launch template and overrides. If you specify
     * <code>LaunchTemplateConfigs</code>, you can't specify
     * <code>LaunchSpecifications</code>. If you include On-Demand capacity in your
     * request, you must use <code>LaunchTemplateConfigs</code>.</p>
     */
    inline SpotFleetRequestConfigData& AddLaunchTemplateConfigs(LaunchTemplateConfig&& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. The default is the On-Demand price.</p>
     */
    inline const Aws::String& GetSpotPrice() const{ return m_spotPrice; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. The default is the On-Demand price.</p>
     */
    inline bool SpotPriceHasBeenSet() const { return m_spotPriceHasBeenSet; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. The default is the On-Demand price.</p>
     */
    inline void SetSpotPrice(const Aws::String& value) { m_spotPriceHasBeenSet = true; m_spotPrice = value; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. The default is the On-Demand price.</p>
     */
    inline void SetSpotPrice(Aws::String&& value) { m_spotPriceHasBeenSet = true; m_spotPrice = std::move(value); }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. The default is the On-Demand price.</p>
     */
    inline void SetSpotPrice(const char* value) { m_spotPriceHasBeenSet = true; m_spotPrice.assign(value); }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. The default is the On-Demand price.</p>
     */
    inline SpotFleetRequestConfigData& WithSpotPrice(const Aws::String& value) { SetSpotPrice(value); return *this;}

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. The default is the On-Demand price.</p>
     */
    inline SpotFleetRequestConfigData& WithSpotPrice(Aws::String&& value) { SetSpotPrice(std::move(value)); return *this;}

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. The default is the On-Demand price.</p>
     */
    inline SpotFleetRequestConfigData& WithSpotPrice(const char* value) { SetSpotPrice(value); return *this;}


    /**
     * <p>The number of units to request for the Spot Fleet. You can choose to set the
     * target capacity in terms of instances or a performance characteristic that is
     * important to your application workload, such as vCPUs, memory, or I/O. If the
     * request type is <code>maintain</code>, you can specify a target capacity of 0
     * and add capacity later.</p>
     */
    inline int GetTargetCapacity() const{ return m_targetCapacity; }

    /**
     * <p>The number of units to request for the Spot Fleet. You can choose to set the
     * target capacity in terms of instances or a performance characteristic that is
     * important to your application workload, such as vCPUs, memory, or I/O. If the
     * request type is <code>maintain</code>, you can specify a target capacity of 0
     * and add capacity later.</p>
     */
    inline bool TargetCapacityHasBeenSet() const { return m_targetCapacityHasBeenSet; }

    /**
     * <p>The number of units to request for the Spot Fleet. You can choose to set the
     * target capacity in terms of instances or a performance characteristic that is
     * important to your application workload, such as vCPUs, memory, or I/O. If the
     * request type is <code>maintain</code>, you can specify a target capacity of 0
     * and add capacity later.</p>
     */
    inline void SetTargetCapacity(int value) { m_targetCapacityHasBeenSet = true; m_targetCapacity = value; }

    /**
     * <p>The number of units to request for the Spot Fleet. You can choose to set the
     * target capacity in terms of instances or a performance characteristic that is
     * important to your application workload, such as vCPUs, memory, or I/O. If the
     * request type is <code>maintain</code>, you can specify a target capacity of 0
     * and add capacity later.</p>
     */
    inline SpotFleetRequestConfigData& WithTargetCapacity(int value) { SetTargetCapacity(value); return *this;}


    /**
     * <p>The number of On-Demand units to request. You can choose to set the target
     * capacity in terms of instances or a performance characteristic that is important
     * to your application workload, such as vCPUs, memory, or I/O. If the request type
     * is <code>maintain</code>, you can specify a target capacity of 0 and add
     * capacity later.</p>
     */
    inline int GetOnDemandTargetCapacity() const{ return m_onDemandTargetCapacity; }

    /**
     * <p>The number of On-Demand units to request. You can choose to set the target
     * capacity in terms of instances or a performance characteristic that is important
     * to your application workload, such as vCPUs, memory, or I/O. If the request type
     * is <code>maintain</code>, you can specify a target capacity of 0 and add
     * capacity later.</p>
     */
    inline bool OnDemandTargetCapacityHasBeenSet() const { return m_onDemandTargetCapacityHasBeenSet; }

    /**
     * <p>The number of On-Demand units to request. You can choose to set the target
     * capacity in terms of instances or a performance characteristic that is important
     * to your application workload, such as vCPUs, memory, or I/O. If the request type
     * is <code>maintain</code>, you can specify a target capacity of 0 and add
     * capacity later.</p>
     */
    inline void SetOnDemandTargetCapacity(int value) { m_onDemandTargetCapacityHasBeenSet = true; m_onDemandTargetCapacity = value; }

    /**
     * <p>The number of On-Demand units to request. You can choose to set the target
     * capacity in terms of instances or a performance characteristic that is important
     * to your application workload, such as vCPUs, memory, or I/O. If the request type
     * is <code>maintain</code>, you can specify a target capacity of 0 and add
     * capacity later.</p>
     */
    inline SpotFleetRequestConfigData& WithOnDemandTargetCapacity(int value) { SetOnDemandTargetCapacity(value); return *this;}


    /**
     * <p>The maximum amount per hour for On-Demand Instances that you're willing to
     * pay. You can use the <code>onDemandMaxTotalPrice</code> parameter, the
     * <code>spotMaxTotalPrice</code> parameter, or both parameters to ensure that your
     * fleet cost does not exceed your budget. If you set a maximum price per hour for
     * the On-Demand Instances and Spot Instances in your request, Spot Fleet will
     * launch instances until it reaches the maximum amount you're willing to pay. When
     * the maximum amount you're willing to pay is reached, the fleet stops launching
     * instances even if it hasn’t met the target capacity.</p>
     */
    inline const Aws::String& GetOnDemandMaxTotalPrice() const{ return m_onDemandMaxTotalPrice; }

    /**
     * <p>The maximum amount per hour for On-Demand Instances that you're willing to
     * pay. You can use the <code>onDemandMaxTotalPrice</code> parameter, the
     * <code>spotMaxTotalPrice</code> parameter, or both parameters to ensure that your
     * fleet cost does not exceed your budget. If you set a maximum price per hour for
     * the On-Demand Instances and Spot Instances in your request, Spot Fleet will
     * launch instances until it reaches the maximum amount you're willing to pay. When
     * the maximum amount you're willing to pay is reached, the fleet stops launching
     * instances even if it hasn’t met the target capacity.</p>
     */
    inline bool OnDemandMaxTotalPriceHasBeenSet() const { return m_onDemandMaxTotalPriceHasBeenSet; }

    /**
     * <p>The maximum amount per hour for On-Demand Instances that you're willing to
     * pay. You can use the <code>onDemandMaxTotalPrice</code> parameter, the
     * <code>spotMaxTotalPrice</code> parameter, or both parameters to ensure that your
     * fleet cost does not exceed your budget. If you set a maximum price per hour for
     * the On-Demand Instances and Spot Instances in your request, Spot Fleet will
     * launch instances until it reaches the maximum amount you're willing to pay. When
     * the maximum amount you're willing to pay is reached, the fleet stops launching
     * instances even if it hasn’t met the target capacity.</p>
     */
    inline void SetOnDemandMaxTotalPrice(const Aws::String& value) { m_onDemandMaxTotalPriceHasBeenSet = true; m_onDemandMaxTotalPrice = value; }

    /**
     * <p>The maximum amount per hour for On-Demand Instances that you're willing to
     * pay. You can use the <code>onDemandMaxTotalPrice</code> parameter, the
     * <code>spotMaxTotalPrice</code> parameter, or both parameters to ensure that your
     * fleet cost does not exceed your budget. If you set a maximum price per hour for
     * the On-Demand Instances and Spot Instances in your request, Spot Fleet will
     * launch instances until it reaches the maximum amount you're willing to pay. When
     * the maximum amount you're willing to pay is reached, the fleet stops launching
     * instances even if it hasn’t met the target capacity.</p>
     */
    inline void SetOnDemandMaxTotalPrice(Aws::String&& value) { m_onDemandMaxTotalPriceHasBeenSet = true; m_onDemandMaxTotalPrice = std::move(value); }

    /**
     * <p>The maximum amount per hour for On-Demand Instances that you're willing to
     * pay. You can use the <code>onDemandMaxTotalPrice</code> parameter, the
     * <code>spotMaxTotalPrice</code> parameter, or both parameters to ensure that your
     * fleet cost does not exceed your budget. If you set a maximum price per hour for
     * the On-Demand Instances and Spot Instances in your request, Spot Fleet will
     * launch instances until it reaches the maximum amount you're willing to pay. When
     * the maximum amount you're willing to pay is reached, the fleet stops launching
     * instances even if it hasn’t met the target capacity.</p>
     */
    inline void SetOnDemandMaxTotalPrice(const char* value) { m_onDemandMaxTotalPriceHasBeenSet = true; m_onDemandMaxTotalPrice.assign(value); }

    /**
     * <p>The maximum amount per hour for On-Demand Instances that you're willing to
     * pay. You can use the <code>onDemandMaxTotalPrice</code> parameter, the
     * <code>spotMaxTotalPrice</code> parameter, or both parameters to ensure that your
     * fleet cost does not exceed your budget. If you set a maximum price per hour for
     * the On-Demand Instances and Spot Instances in your request, Spot Fleet will
     * launch instances until it reaches the maximum amount you're willing to pay. When
     * the maximum amount you're willing to pay is reached, the fleet stops launching
     * instances even if it hasn’t met the target capacity.</p>
     */
    inline SpotFleetRequestConfigData& WithOnDemandMaxTotalPrice(const Aws::String& value) { SetOnDemandMaxTotalPrice(value); return *this;}

    /**
     * <p>The maximum amount per hour for On-Demand Instances that you're willing to
     * pay. You can use the <code>onDemandMaxTotalPrice</code> parameter, the
     * <code>spotMaxTotalPrice</code> parameter, or both parameters to ensure that your
     * fleet cost does not exceed your budget. If you set a maximum price per hour for
     * the On-Demand Instances and Spot Instances in your request, Spot Fleet will
     * launch instances until it reaches the maximum amount you're willing to pay. When
     * the maximum amount you're willing to pay is reached, the fleet stops launching
     * instances even if it hasn’t met the target capacity.</p>
     */
    inline SpotFleetRequestConfigData& WithOnDemandMaxTotalPrice(Aws::String&& value) { SetOnDemandMaxTotalPrice(std::move(value)); return *this;}

    /**
     * <p>The maximum amount per hour for On-Demand Instances that you're willing to
     * pay. You can use the <code>onDemandMaxTotalPrice</code> parameter, the
     * <code>spotMaxTotalPrice</code> parameter, or both parameters to ensure that your
     * fleet cost does not exceed your budget. If you set a maximum price per hour for
     * the On-Demand Instances and Spot Instances in your request, Spot Fleet will
     * launch instances until it reaches the maximum amount you're willing to pay. When
     * the maximum amount you're willing to pay is reached, the fleet stops launching
     * instances even if it hasn’t met the target capacity.</p>
     */
    inline SpotFleetRequestConfigData& WithOnDemandMaxTotalPrice(const char* value) { SetOnDemandMaxTotalPrice(value); return *this;}


    /**
     * <p>The maximum amount per hour for Spot Instances that you're willing to pay.
     * You can use the <code>spotdMaxTotalPrice</code> parameter, the
     * <code>onDemandMaxTotalPrice</code> parameter, or both parameters to ensure that
     * your fleet cost does not exceed your budget. If you set a maximum price per hour
     * for the On-Demand Instances and Spot Instances in your request, Spot Fleet will
     * launch instances until it reaches the maximum amount you're willing to pay. When
     * the maximum amount you're willing to pay is reached, the fleet stops launching
     * instances even if it hasn’t met the target capacity.</p>
     */
    inline const Aws::String& GetSpotMaxTotalPrice() const{ return m_spotMaxTotalPrice; }

    /**
     * <p>The maximum amount per hour for Spot Instances that you're willing to pay.
     * You can use the <code>spotdMaxTotalPrice</code> parameter, the
     * <code>onDemandMaxTotalPrice</code> parameter, or both parameters to ensure that
     * your fleet cost does not exceed your budget. If you set a maximum price per hour
     * for the On-Demand Instances and Spot Instances in your request, Spot Fleet will
     * launch instances until it reaches the maximum amount you're willing to pay. When
     * the maximum amount you're willing to pay is reached, the fleet stops launching
     * instances even if it hasn’t met the target capacity.</p>
     */
    inline bool SpotMaxTotalPriceHasBeenSet() const { return m_spotMaxTotalPriceHasBeenSet; }

    /**
     * <p>The maximum amount per hour for Spot Instances that you're willing to pay.
     * You can use the <code>spotdMaxTotalPrice</code> parameter, the
     * <code>onDemandMaxTotalPrice</code> parameter, or both parameters to ensure that
     * your fleet cost does not exceed your budget. If you set a maximum price per hour
     * for the On-Demand Instances and Spot Instances in your request, Spot Fleet will
     * launch instances until it reaches the maximum amount you're willing to pay. When
     * the maximum amount you're willing to pay is reached, the fleet stops launching
     * instances even if it hasn’t met the target capacity.</p>
     */
    inline void SetSpotMaxTotalPrice(const Aws::String& value) { m_spotMaxTotalPriceHasBeenSet = true; m_spotMaxTotalPrice = value; }

    /**
     * <p>The maximum amount per hour for Spot Instances that you're willing to pay.
     * You can use the <code>spotdMaxTotalPrice</code> parameter, the
     * <code>onDemandMaxTotalPrice</code> parameter, or both parameters to ensure that
     * your fleet cost does not exceed your budget. If you set a maximum price per hour
     * for the On-Demand Instances and Spot Instances in your request, Spot Fleet will
     * launch instances until it reaches the maximum amount you're willing to pay. When
     * the maximum amount you're willing to pay is reached, the fleet stops launching
     * instances even if it hasn’t met the target capacity.</p>
     */
    inline void SetSpotMaxTotalPrice(Aws::String&& value) { m_spotMaxTotalPriceHasBeenSet = true; m_spotMaxTotalPrice = std::move(value); }

    /**
     * <p>The maximum amount per hour for Spot Instances that you're willing to pay.
     * You can use the <code>spotdMaxTotalPrice</code> parameter, the
     * <code>onDemandMaxTotalPrice</code> parameter, or both parameters to ensure that
     * your fleet cost does not exceed your budget. If you set a maximum price per hour
     * for the On-Demand Instances and Spot Instances in your request, Spot Fleet will
     * launch instances until it reaches the maximum amount you're willing to pay. When
     * the maximum amount you're willing to pay is reached, the fleet stops launching
     * instances even if it hasn’t met the target capacity.</p>
     */
    inline void SetSpotMaxTotalPrice(const char* value) { m_spotMaxTotalPriceHasBeenSet = true; m_spotMaxTotalPrice.assign(value); }

    /**
     * <p>The maximum amount per hour for Spot Instances that you're willing to pay.
     * You can use the <code>spotdMaxTotalPrice</code> parameter, the
     * <code>onDemandMaxTotalPrice</code> parameter, or both parameters to ensure that
     * your fleet cost does not exceed your budget. If you set a maximum price per hour
     * for the On-Demand Instances and Spot Instances in your request, Spot Fleet will
     * launch instances until it reaches the maximum amount you're willing to pay. When
     * the maximum amount you're willing to pay is reached, the fleet stops launching
     * instances even if it hasn’t met the target capacity.</p>
     */
    inline SpotFleetRequestConfigData& WithSpotMaxTotalPrice(const Aws::String& value) { SetSpotMaxTotalPrice(value); return *this;}

    /**
     * <p>The maximum amount per hour for Spot Instances that you're willing to pay.
     * You can use the <code>spotdMaxTotalPrice</code> parameter, the
     * <code>onDemandMaxTotalPrice</code> parameter, or both parameters to ensure that
     * your fleet cost does not exceed your budget. If you set a maximum price per hour
     * for the On-Demand Instances and Spot Instances in your request, Spot Fleet will
     * launch instances until it reaches the maximum amount you're willing to pay. When
     * the maximum amount you're willing to pay is reached, the fleet stops launching
     * instances even if it hasn’t met the target capacity.</p>
     */
    inline SpotFleetRequestConfigData& WithSpotMaxTotalPrice(Aws::String&& value) { SetSpotMaxTotalPrice(std::move(value)); return *this;}

    /**
     * <p>The maximum amount per hour for Spot Instances that you're willing to pay.
     * You can use the <code>spotdMaxTotalPrice</code> parameter, the
     * <code>onDemandMaxTotalPrice</code> parameter, or both parameters to ensure that
     * your fleet cost does not exceed your budget. If you set a maximum price per hour
     * for the On-Demand Instances and Spot Instances in your request, Spot Fleet will
     * launch instances until it reaches the maximum amount you're willing to pay. When
     * the maximum amount you're willing to pay is reached, the fleet stops launching
     * instances even if it hasn’t met the target capacity.</p>
     */
    inline SpotFleetRequestConfigData& WithSpotMaxTotalPrice(const char* value) { SetSpotMaxTotalPrice(value); return *this;}


    /**
     * <p>Indicates whether running Spot Instances are terminated when the Spot Fleet
     * request expires.</p>
     */
    inline bool GetTerminateInstancesWithExpiration() const{ return m_terminateInstancesWithExpiration; }

    /**
     * <p>Indicates whether running Spot Instances are terminated when the Spot Fleet
     * request expires.</p>
     */
    inline bool TerminateInstancesWithExpirationHasBeenSet() const { return m_terminateInstancesWithExpirationHasBeenSet; }

    /**
     * <p>Indicates whether running Spot Instances are terminated when the Spot Fleet
     * request expires.</p>
     */
    inline void SetTerminateInstancesWithExpiration(bool value) { m_terminateInstancesWithExpirationHasBeenSet = true; m_terminateInstancesWithExpiration = value; }

    /**
     * <p>Indicates whether running Spot Instances are terminated when the Spot Fleet
     * request expires.</p>
     */
    inline SpotFleetRequestConfigData& WithTerminateInstancesWithExpiration(bool value) { SetTerminateInstancesWithExpiration(value); return *this;}


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
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

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
    inline void SetType(const FleetType& value) { m_typeHasBeenSet = true; m_type = value; }

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
    inline void SetType(FleetType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

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
    inline SpotFleetRequestConfigData& WithType(const FleetType& value) { SetType(value); return *this;}

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
    inline SpotFleetRequestConfigData& WithType(FleetType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The start date and time of the request, in UTC format
     * (<i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). By default,
     * Amazon EC2 starts fulfilling the request immediately.</p>
     */
    inline const Aws::Utils::DateTime& GetValidFrom() const{ return m_validFrom; }

    /**
     * <p>The start date and time of the request, in UTC format
     * (<i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). By default,
     * Amazon EC2 starts fulfilling the request immediately.</p>
     */
    inline bool ValidFromHasBeenSet() const { return m_validFromHasBeenSet; }

    /**
     * <p>The start date and time of the request, in UTC format
     * (<i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). By default,
     * Amazon EC2 starts fulfilling the request immediately.</p>
     */
    inline void SetValidFrom(const Aws::Utils::DateTime& value) { m_validFromHasBeenSet = true; m_validFrom = value; }

    /**
     * <p>The start date and time of the request, in UTC format
     * (<i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). By default,
     * Amazon EC2 starts fulfilling the request immediately.</p>
     */
    inline void SetValidFrom(Aws::Utils::DateTime&& value) { m_validFromHasBeenSet = true; m_validFrom = std::move(value); }

    /**
     * <p>The start date and time of the request, in UTC format
     * (<i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). By default,
     * Amazon EC2 starts fulfilling the request immediately.</p>
     */
    inline SpotFleetRequestConfigData& WithValidFrom(const Aws::Utils::DateTime& value) { SetValidFrom(value); return *this;}

    /**
     * <p>The start date and time of the request, in UTC format
     * (<i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). By default,
     * Amazon EC2 starts fulfilling the request immediately.</p>
     */
    inline SpotFleetRequestConfigData& WithValidFrom(Aws::Utils::DateTime&& value) { SetValidFrom(std::move(value)); return *this;}


    /**
     * <p>The end date and time of the request, in UTC format
     * (<i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). After the end
     * date and time, no new Spot Instance requests are placed or able to fulfill the
     * request. If no value is specified, the Spot Fleet request remains until you
     * cancel it.</p>
     */
    inline const Aws::Utils::DateTime& GetValidUntil() const{ return m_validUntil; }

    /**
     * <p>The end date and time of the request, in UTC format
     * (<i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). After the end
     * date and time, no new Spot Instance requests are placed or able to fulfill the
     * request. If no value is specified, the Spot Fleet request remains until you
     * cancel it.</p>
     */
    inline bool ValidUntilHasBeenSet() const { return m_validUntilHasBeenSet; }

    /**
     * <p>The end date and time of the request, in UTC format
     * (<i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). After the end
     * date and time, no new Spot Instance requests are placed or able to fulfill the
     * request. If no value is specified, the Spot Fleet request remains until you
     * cancel it.</p>
     */
    inline void SetValidUntil(const Aws::Utils::DateTime& value) { m_validUntilHasBeenSet = true; m_validUntil = value; }

    /**
     * <p>The end date and time of the request, in UTC format
     * (<i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). After the end
     * date and time, no new Spot Instance requests are placed or able to fulfill the
     * request. If no value is specified, the Spot Fleet request remains until you
     * cancel it.</p>
     */
    inline void SetValidUntil(Aws::Utils::DateTime&& value) { m_validUntilHasBeenSet = true; m_validUntil = std::move(value); }

    /**
     * <p>The end date and time of the request, in UTC format
     * (<i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). After the end
     * date and time, no new Spot Instance requests are placed or able to fulfill the
     * request. If no value is specified, the Spot Fleet request remains until you
     * cancel it.</p>
     */
    inline SpotFleetRequestConfigData& WithValidUntil(const Aws::Utils::DateTime& value) { SetValidUntil(value); return *this;}

    /**
     * <p>The end date and time of the request, in UTC format
     * (<i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). After the end
     * date and time, no new Spot Instance requests are placed or able to fulfill the
     * request. If no value is specified, the Spot Fleet request remains until you
     * cancel it.</p>
     */
    inline SpotFleetRequestConfigData& WithValidUntil(Aws::Utils::DateTime&& value) { SetValidUntil(std::move(value)); return *this;}


    /**
     * <p>Indicates whether Spot Fleet should replace unhealthy instances.</p>
     */
    inline bool GetReplaceUnhealthyInstances() const{ return m_replaceUnhealthyInstances; }

    /**
     * <p>Indicates whether Spot Fleet should replace unhealthy instances.</p>
     */
    inline bool ReplaceUnhealthyInstancesHasBeenSet() const { return m_replaceUnhealthyInstancesHasBeenSet; }

    /**
     * <p>Indicates whether Spot Fleet should replace unhealthy instances.</p>
     */
    inline void SetReplaceUnhealthyInstances(bool value) { m_replaceUnhealthyInstancesHasBeenSet = true; m_replaceUnhealthyInstances = value; }

    /**
     * <p>Indicates whether Spot Fleet should replace unhealthy instances.</p>
     */
    inline SpotFleetRequestConfigData& WithReplaceUnhealthyInstances(bool value) { SetReplaceUnhealthyInstances(value); return *this;}


    /**
     * <p>The behavior when a Spot Instance is interrupted. The default is
     * <code>terminate</code>.</p>
     */
    inline const InstanceInterruptionBehavior& GetInstanceInterruptionBehavior() const{ return m_instanceInterruptionBehavior; }

    /**
     * <p>The behavior when a Spot Instance is interrupted. The default is
     * <code>terminate</code>.</p>
     */
    inline bool InstanceInterruptionBehaviorHasBeenSet() const { return m_instanceInterruptionBehaviorHasBeenSet; }

    /**
     * <p>The behavior when a Spot Instance is interrupted. The default is
     * <code>terminate</code>.</p>
     */
    inline void SetInstanceInterruptionBehavior(const InstanceInterruptionBehavior& value) { m_instanceInterruptionBehaviorHasBeenSet = true; m_instanceInterruptionBehavior = value; }

    /**
     * <p>The behavior when a Spot Instance is interrupted. The default is
     * <code>terminate</code>.</p>
     */
    inline void SetInstanceInterruptionBehavior(InstanceInterruptionBehavior&& value) { m_instanceInterruptionBehaviorHasBeenSet = true; m_instanceInterruptionBehavior = std::move(value); }

    /**
     * <p>The behavior when a Spot Instance is interrupted. The default is
     * <code>terminate</code>.</p>
     */
    inline SpotFleetRequestConfigData& WithInstanceInterruptionBehavior(const InstanceInterruptionBehavior& value) { SetInstanceInterruptionBehavior(value); return *this;}

    /**
     * <p>The behavior when a Spot Instance is interrupted. The default is
     * <code>terminate</code>.</p>
     */
    inline SpotFleetRequestConfigData& WithInstanceInterruptionBehavior(InstanceInterruptionBehavior&& value) { SetInstanceInterruptionBehavior(std::move(value)); return *this;}


    /**
     * <p>One or more Classic Load Balancers and target groups to attach to the Spot
     * Fleet request. Spot Fleet registers the running Spot Instances with the
     * specified Classic Load Balancers and target groups.</p> <p>With Network Load
     * Balancers, Spot Fleet cannot register instances that have the following instance
     * types: C1, CC1, CC2, CG1, CG2, CR1, CS1, G1, G2, HI1, HS1, M1, M2, M3, and
     * T1.</p>
     */
    inline const LoadBalancersConfig& GetLoadBalancersConfig() const{ return m_loadBalancersConfig; }

    /**
     * <p>One or more Classic Load Balancers and target groups to attach to the Spot
     * Fleet request. Spot Fleet registers the running Spot Instances with the
     * specified Classic Load Balancers and target groups.</p> <p>With Network Load
     * Balancers, Spot Fleet cannot register instances that have the following instance
     * types: C1, CC1, CC2, CG1, CG2, CR1, CS1, G1, G2, HI1, HS1, M1, M2, M3, and
     * T1.</p>
     */
    inline bool LoadBalancersConfigHasBeenSet() const { return m_loadBalancersConfigHasBeenSet; }

    /**
     * <p>One or more Classic Load Balancers and target groups to attach to the Spot
     * Fleet request. Spot Fleet registers the running Spot Instances with the
     * specified Classic Load Balancers and target groups.</p> <p>With Network Load
     * Balancers, Spot Fleet cannot register instances that have the following instance
     * types: C1, CC1, CC2, CG1, CG2, CR1, CS1, G1, G2, HI1, HS1, M1, M2, M3, and
     * T1.</p>
     */
    inline void SetLoadBalancersConfig(const LoadBalancersConfig& value) { m_loadBalancersConfigHasBeenSet = true; m_loadBalancersConfig = value; }

    /**
     * <p>One or more Classic Load Balancers and target groups to attach to the Spot
     * Fleet request. Spot Fleet registers the running Spot Instances with the
     * specified Classic Load Balancers and target groups.</p> <p>With Network Load
     * Balancers, Spot Fleet cannot register instances that have the following instance
     * types: C1, CC1, CC2, CG1, CG2, CR1, CS1, G1, G2, HI1, HS1, M1, M2, M3, and
     * T1.</p>
     */
    inline void SetLoadBalancersConfig(LoadBalancersConfig&& value) { m_loadBalancersConfigHasBeenSet = true; m_loadBalancersConfig = std::move(value); }

    /**
     * <p>One or more Classic Load Balancers and target groups to attach to the Spot
     * Fleet request. Spot Fleet registers the running Spot Instances with the
     * specified Classic Load Balancers and target groups.</p> <p>With Network Load
     * Balancers, Spot Fleet cannot register instances that have the following instance
     * types: C1, CC1, CC2, CG1, CG2, CR1, CS1, G1, G2, HI1, HS1, M1, M2, M3, and
     * T1.</p>
     */
    inline SpotFleetRequestConfigData& WithLoadBalancersConfig(const LoadBalancersConfig& value) { SetLoadBalancersConfig(value); return *this;}

    /**
     * <p>One or more Classic Load Balancers and target groups to attach to the Spot
     * Fleet request. Spot Fleet registers the running Spot Instances with the
     * specified Classic Load Balancers and target groups.</p> <p>With Network Load
     * Balancers, Spot Fleet cannot register instances that have the following instance
     * types: C1, CC1, CC2, CG1, CG2, CR1, CS1, G1, G2, HI1, HS1, M1, M2, M3, and
     * T1.</p>
     */
    inline SpotFleetRequestConfigData& WithLoadBalancersConfig(LoadBalancersConfig&& value) { SetLoadBalancersConfig(std::move(value)); return *this;}


    /**
     * <p>The number of Spot pools across which to allocate your target Spot capacity.
     * Valid only when Spot <b>AllocationStrategy</b> is set to
     * <code>lowest-price</code>. Spot Fleet selects the cheapest Spot pools and evenly
     * allocates your target Spot capacity across the number of Spot pools that you
     * specify.</p>
     */
    inline int GetInstancePoolsToUseCount() const{ return m_instancePoolsToUseCount; }

    /**
     * <p>The number of Spot pools across which to allocate your target Spot capacity.
     * Valid only when Spot <b>AllocationStrategy</b> is set to
     * <code>lowest-price</code>. Spot Fleet selects the cheapest Spot pools and evenly
     * allocates your target Spot capacity across the number of Spot pools that you
     * specify.</p>
     */
    inline bool InstancePoolsToUseCountHasBeenSet() const { return m_instancePoolsToUseCountHasBeenSet; }

    /**
     * <p>The number of Spot pools across which to allocate your target Spot capacity.
     * Valid only when Spot <b>AllocationStrategy</b> is set to
     * <code>lowest-price</code>. Spot Fleet selects the cheapest Spot pools and evenly
     * allocates your target Spot capacity across the number of Spot pools that you
     * specify.</p>
     */
    inline void SetInstancePoolsToUseCount(int value) { m_instancePoolsToUseCountHasBeenSet = true; m_instancePoolsToUseCount = value; }

    /**
     * <p>The number of Spot pools across which to allocate your target Spot capacity.
     * Valid only when Spot <b>AllocationStrategy</b> is set to
     * <code>lowest-price</code>. Spot Fleet selects the cheapest Spot pools and evenly
     * allocates your target Spot capacity across the number of Spot pools that you
     * specify.</p>
     */
    inline SpotFleetRequestConfigData& WithInstancePoolsToUseCount(int value) { SetInstancePoolsToUseCount(value); return *this;}


    /**
     * <p>The key-value pair for tagging the Spot Fleet request on creation. The value
     * for <code>ResourceType</code> must be <code>spot-fleet-request</code>, otherwise
     * the Spot Fleet request fails. To tag instances at launch, specify the tags in
     * the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html#create-launch-template">launch
     * template</a> (valid only if you use <code>LaunchTemplateConfigs</code>) or in
     * the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SpotFleetTagSpecification.html">
     * <code>SpotFleetTagSpecification</code> </a> (valid only if you use
     * <code>LaunchSpecifications</code>). For information about tagging after launch,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#tag-resources">Tagging
     * Your Resources</a>.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The key-value pair for tagging the Spot Fleet request on creation. The value
     * for <code>ResourceType</code> must be <code>spot-fleet-request</code>, otherwise
     * the Spot Fleet request fails. To tag instances at launch, specify the tags in
     * the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html#create-launch-template">launch
     * template</a> (valid only if you use <code>LaunchTemplateConfigs</code>) or in
     * the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SpotFleetTagSpecification.html">
     * <code>SpotFleetTagSpecification</code> </a> (valid only if you use
     * <code>LaunchSpecifications</code>). For information about tagging after launch,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#tag-resources">Tagging
     * Your Resources</a>.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The key-value pair for tagging the Spot Fleet request on creation. The value
     * for <code>ResourceType</code> must be <code>spot-fleet-request</code>, otherwise
     * the Spot Fleet request fails. To tag instances at launch, specify the tags in
     * the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html#create-launch-template">launch
     * template</a> (valid only if you use <code>LaunchTemplateConfigs</code>) or in
     * the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SpotFleetTagSpecification.html">
     * <code>SpotFleetTagSpecification</code> </a> (valid only if you use
     * <code>LaunchSpecifications</code>). For information about tagging after launch,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#tag-resources">Tagging
     * Your Resources</a>.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The key-value pair for tagging the Spot Fleet request on creation. The value
     * for <code>ResourceType</code> must be <code>spot-fleet-request</code>, otherwise
     * the Spot Fleet request fails. To tag instances at launch, specify the tags in
     * the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html#create-launch-template">launch
     * template</a> (valid only if you use <code>LaunchTemplateConfigs</code>) or in
     * the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SpotFleetTagSpecification.html">
     * <code>SpotFleetTagSpecification</code> </a> (valid only if you use
     * <code>LaunchSpecifications</code>). For information about tagging after launch,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#tag-resources">Tagging
     * Your Resources</a>.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The key-value pair for tagging the Spot Fleet request on creation. The value
     * for <code>ResourceType</code> must be <code>spot-fleet-request</code>, otherwise
     * the Spot Fleet request fails. To tag instances at launch, specify the tags in
     * the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html#create-launch-template">launch
     * template</a> (valid only if you use <code>LaunchTemplateConfigs</code>) or in
     * the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SpotFleetTagSpecification.html">
     * <code>SpotFleetTagSpecification</code> </a> (valid only if you use
     * <code>LaunchSpecifications</code>). For information about tagging after launch,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#tag-resources">Tagging
     * Your Resources</a>.</p>
     */
    inline SpotFleetRequestConfigData& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The key-value pair for tagging the Spot Fleet request on creation. The value
     * for <code>ResourceType</code> must be <code>spot-fleet-request</code>, otherwise
     * the Spot Fleet request fails. To tag instances at launch, specify the tags in
     * the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html#create-launch-template">launch
     * template</a> (valid only if you use <code>LaunchTemplateConfigs</code>) or in
     * the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SpotFleetTagSpecification.html">
     * <code>SpotFleetTagSpecification</code> </a> (valid only if you use
     * <code>LaunchSpecifications</code>). For information about tagging after launch,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#tag-resources">Tagging
     * Your Resources</a>.</p>
     */
    inline SpotFleetRequestConfigData& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The key-value pair for tagging the Spot Fleet request on creation. The value
     * for <code>ResourceType</code> must be <code>spot-fleet-request</code>, otherwise
     * the Spot Fleet request fails. To tag instances at launch, specify the tags in
     * the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html#create-launch-template">launch
     * template</a> (valid only if you use <code>LaunchTemplateConfigs</code>) or in
     * the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SpotFleetTagSpecification.html">
     * <code>SpotFleetTagSpecification</code> </a> (valid only if you use
     * <code>LaunchSpecifications</code>). For information about tagging after launch,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#tag-resources">Tagging
     * Your Resources</a>.</p>
     */
    inline SpotFleetRequestConfigData& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The key-value pair for tagging the Spot Fleet request on creation. The value
     * for <code>ResourceType</code> must be <code>spot-fleet-request</code>, otherwise
     * the Spot Fleet request fails. To tag instances at launch, specify the tags in
     * the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html#create-launch-template">launch
     * template</a> (valid only if you use <code>LaunchTemplateConfigs</code>) or in
     * the <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SpotFleetTagSpecification.html">
     * <code>SpotFleetTagSpecification</code> </a> (valid only if you use
     * <code>LaunchSpecifications</code>). For information about tagging after launch,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#tag-resources">Tagging
     * Your Resources</a>.</p>
     */
    inline SpotFleetRequestConfigData& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }

  private:

    AllocationStrategy m_allocationStrategy;
    bool m_allocationStrategyHasBeenSet;

    OnDemandAllocationStrategy m_onDemandAllocationStrategy;
    bool m_onDemandAllocationStrategyHasBeenSet;

    SpotMaintenanceStrategies m_spotMaintenanceStrategies;
    bool m_spotMaintenanceStrategiesHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    ExcessCapacityTerminationPolicy m_excessCapacityTerminationPolicy;
    bool m_excessCapacityTerminationPolicyHasBeenSet;

    double m_fulfilledCapacity;
    bool m_fulfilledCapacityHasBeenSet;

    double m_onDemandFulfilledCapacity;
    bool m_onDemandFulfilledCapacityHasBeenSet;

    Aws::String m_iamFleetRole;
    bool m_iamFleetRoleHasBeenSet;

    Aws::Vector<SpotFleetLaunchSpecification> m_launchSpecifications;
    bool m_launchSpecificationsHasBeenSet;

    Aws::Vector<LaunchTemplateConfig> m_launchTemplateConfigs;
    bool m_launchTemplateConfigsHasBeenSet;

    Aws::String m_spotPrice;
    bool m_spotPriceHasBeenSet;

    int m_targetCapacity;
    bool m_targetCapacityHasBeenSet;

    int m_onDemandTargetCapacity;
    bool m_onDemandTargetCapacityHasBeenSet;

    Aws::String m_onDemandMaxTotalPrice;
    bool m_onDemandMaxTotalPriceHasBeenSet;

    Aws::String m_spotMaxTotalPrice;
    bool m_spotMaxTotalPriceHasBeenSet;

    bool m_terminateInstancesWithExpiration;
    bool m_terminateInstancesWithExpirationHasBeenSet;

    FleetType m_type;
    bool m_typeHasBeenSet;

    Aws::Utils::DateTime m_validFrom;
    bool m_validFromHasBeenSet;

    Aws::Utils::DateTime m_validUntil;
    bool m_validUntilHasBeenSet;

    bool m_replaceUnhealthyInstances;
    bool m_replaceUnhealthyInstancesHasBeenSet;

    InstanceInterruptionBehavior m_instanceInterruptionBehavior;
    bool m_instanceInterruptionBehaviorHasBeenSet;

    LoadBalancersConfig m_loadBalancersConfig;
    bool m_loadBalancersConfigHasBeenSet;

    int m_instancePoolsToUseCount;
    bool m_instancePoolsToUseCountHasBeenSet;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
