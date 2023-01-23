/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/FleetActivityStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/FleetStateCode.h>
#include <aws/ec2/model/FleetExcessCapacityTerminationPolicy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TargetCapacitySpecification.h>
#include <aws/ec2/model/FleetType.h>
#include <aws/ec2/model/SpotOptions.h>
#include <aws/ec2/model/OnDemandOptions.h>
#include <aws/ec2/model/FleetLaunchTemplateConfig.h>
#include <aws/ec2/model/Tag.h>
#include <aws/ec2/model/DescribeFleetError.h>
#include <aws/ec2/model/DescribeFleetsInstances.h>
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
   * <p>Describes an EC2 Fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FleetData">AWS API
   * Reference</a></p>
   */
  class FleetData
  {
  public:
    AWS_EC2_API FleetData();
    AWS_EC2_API FleetData(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FleetData& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The progress of the EC2 Fleet. If there is an error, the status is
     * <code>error</code>. After all requests are placed, the status is
     * <code>pending_fulfillment</code>. If the size of the EC2 Fleet is equal to or
     * greater than its target capacity, the status is <code>fulfilled</code>. If the
     * size of the EC2 Fleet is decreased, the status is
     * <code>pending_termination</code> while instances are terminating.</p>
     */
    inline const FleetActivityStatus& GetActivityStatus() const{ return m_activityStatus; }

    /**
     * <p>The progress of the EC2 Fleet. If there is an error, the status is
     * <code>error</code>. After all requests are placed, the status is
     * <code>pending_fulfillment</code>. If the size of the EC2 Fleet is equal to or
     * greater than its target capacity, the status is <code>fulfilled</code>. If the
     * size of the EC2 Fleet is decreased, the status is
     * <code>pending_termination</code> while instances are terminating.</p>
     */
    inline bool ActivityStatusHasBeenSet() const { return m_activityStatusHasBeenSet; }

    /**
     * <p>The progress of the EC2 Fleet. If there is an error, the status is
     * <code>error</code>. After all requests are placed, the status is
     * <code>pending_fulfillment</code>. If the size of the EC2 Fleet is equal to or
     * greater than its target capacity, the status is <code>fulfilled</code>. If the
     * size of the EC2 Fleet is decreased, the status is
     * <code>pending_termination</code> while instances are terminating.</p>
     */
    inline void SetActivityStatus(const FleetActivityStatus& value) { m_activityStatusHasBeenSet = true; m_activityStatus = value; }

    /**
     * <p>The progress of the EC2 Fleet. If there is an error, the status is
     * <code>error</code>. After all requests are placed, the status is
     * <code>pending_fulfillment</code>. If the size of the EC2 Fleet is equal to or
     * greater than its target capacity, the status is <code>fulfilled</code>. If the
     * size of the EC2 Fleet is decreased, the status is
     * <code>pending_termination</code> while instances are terminating.</p>
     */
    inline void SetActivityStatus(FleetActivityStatus&& value) { m_activityStatusHasBeenSet = true; m_activityStatus = std::move(value); }

    /**
     * <p>The progress of the EC2 Fleet. If there is an error, the status is
     * <code>error</code>. After all requests are placed, the status is
     * <code>pending_fulfillment</code>. If the size of the EC2 Fleet is equal to or
     * greater than its target capacity, the status is <code>fulfilled</code>. If the
     * size of the EC2 Fleet is decreased, the status is
     * <code>pending_termination</code> while instances are terminating.</p>
     */
    inline FleetData& WithActivityStatus(const FleetActivityStatus& value) { SetActivityStatus(value); return *this;}

    /**
     * <p>The progress of the EC2 Fleet. If there is an error, the status is
     * <code>error</code>. After all requests are placed, the status is
     * <code>pending_fulfillment</code>. If the size of the EC2 Fleet is equal to or
     * greater than its target capacity, the status is <code>fulfilled</code>. If the
     * size of the EC2 Fleet is decreased, the status is
     * <code>pending_termination</code> while instances are terminating.</p>
     */
    inline FleetData& WithActivityStatus(FleetActivityStatus&& value) { SetActivityStatus(std::move(value)); return *this;}


    /**
     * <p>The creation date and time of the EC2 Fleet.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The creation date and time of the EC2 Fleet.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The creation date and time of the EC2 Fleet.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The creation date and time of the EC2 Fleet.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The creation date and time of the EC2 Fleet.</p>
     */
    inline FleetData& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The creation date and time of the EC2 Fleet.</p>
     */
    inline FleetData& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline FleetData& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline FleetData& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline FleetData& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>The state of the EC2 Fleet.</p>
     */
    inline const FleetStateCode& GetFleetState() const{ return m_fleetState; }

    /**
     * <p>The state of the EC2 Fleet.</p>
     */
    inline bool FleetStateHasBeenSet() const { return m_fleetStateHasBeenSet; }

    /**
     * <p>The state of the EC2 Fleet.</p>
     */
    inline void SetFleetState(const FleetStateCode& value) { m_fleetStateHasBeenSet = true; m_fleetState = value; }

    /**
     * <p>The state of the EC2 Fleet.</p>
     */
    inline void SetFleetState(FleetStateCode&& value) { m_fleetStateHasBeenSet = true; m_fleetState = std::move(value); }

    /**
     * <p>The state of the EC2 Fleet.</p>
     */
    inline FleetData& WithFleetState(const FleetStateCode& value) { SetFleetState(value); return *this;}

    /**
     * <p>The state of the EC2 Fleet.</p>
     */
    inline FleetData& WithFleetState(FleetStateCode&& value) { SetFleetState(std::move(value)); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline FleetData& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline FleetData& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline FleetData& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Indicates whether running instances should be terminated if the target
     * capacity of the EC2 Fleet is decreased below the current size of the EC2
     * Fleet.</p>
     */
    inline const FleetExcessCapacityTerminationPolicy& GetExcessCapacityTerminationPolicy() const{ return m_excessCapacityTerminationPolicy; }

    /**
     * <p>Indicates whether running instances should be terminated if the target
     * capacity of the EC2 Fleet is decreased below the current size of the EC2
     * Fleet.</p>
     */
    inline bool ExcessCapacityTerminationPolicyHasBeenSet() const { return m_excessCapacityTerminationPolicyHasBeenSet; }

    /**
     * <p>Indicates whether running instances should be terminated if the target
     * capacity of the EC2 Fleet is decreased below the current size of the EC2
     * Fleet.</p>
     */
    inline void SetExcessCapacityTerminationPolicy(const FleetExcessCapacityTerminationPolicy& value) { m_excessCapacityTerminationPolicyHasBeenSet = true; m_excessCapacityTerminationPolicy = value; }

    /**
     * <p>Indicates whether running instances should be terminated if the target
     * capacity of the EC2 Fleet is decreased below the current size of the EC2
     * Fleet.</p>
     */
    inline void SetExcessCapacityTerminationPolicy(FleetExcessCapacityTerminationPolicy&& value) { m_excessCapacityTerminationPolicyHasBeenSet = true; m_excessCapacityTerminationPolicy = std::move(value); }

    /**
     * <p>Indicates whether running instances should be terminated if the target
     * capacity of the EC2 Fleet is decreased below the current size of the EC2
     * Fleet.</p>
     */
    inline FleetData& WithExcessCapacityTerminationPolicy(const FleetExcessCapacityTerminationPolicy& value) { SetExcessCapacityTerminationPolicy(value); return *this;}

    /**
     * <p>Indicates whether running instances should be terminated if the target
     * capacity of the EC2 Fleet is decreased below the current size of the EC2
     * Fleet.</p>
     */
    inline FleetData& WithExcessCapacityTerminationPolicy(FleetExcessCapacityTerminationPolicy&& value) { SetExcessCapacityTerminationPolicy(std::move(value)); return *this;}


    /**
     * <p>The number of units fulfilled by this request compared to the set target
     * capacity.</p>
     */
    inline double GetFulfilledCapacity() const{ return m_fulfilledCapacity; }

    /**
     * <p>The number of units fulfilled by this request compared to the set target
     * capacity.</p>
     */
    inline bool FulfilledCapacityHasBeenSet() const { return m_fulfilledCapacityHasBeenSet; }

    /**
     * <p>The number of units fulfilled by this request compared to the set target
     * capacity.</p>
     */
    inline void SetFulfilledCapacity(double value) { m_fulfilledCapacityHasBeenSet = true; m_fulfilledCapacity = value; }

    /**
     * <p>The number of units fulfilled by this request compared to the set target
     * capacity.</p>
     */
    inline FleetData& WithFulfilledCapacity(double value) { SetFulfilledCapacity(value); return *this;}


    /**
     * <p>The number of units fulfilled by this request compared to the set target
     * On-Demand capacity.</p>
     */
    inline double GetFulfilledOnDemandCapacity() const{ return m_fulfilledOnDemandCapacity; }

    /**
     * <p>The number of units fulfilled by this request compared to the set target
     * On-Demand capacity.</p>
     */
    inline bool FulfilledOnDemandCapacityHasBeenSet() const { return m_fulfilledOnDemandCapacityHasBeenSet; }

    /**
     * <p>The number of units fulfilled by this request compared to the set target
     * On-Demand capacity.</p>
     */
    inline void SetFulfilledOnDemandCapacity(double value) { m_fulfilledOnDemandCapacityHasBeenSet = true; m_fulfilledOnDemandCapacity = value; }

    /**
     * <p>The number of units fulfilled by this request compared to the set target
     * On-Demand capacity.</p>
     */
    inline FleetData& WithFulfilledOnDemandCapacity(double value) { SetFulfilledOnDemandCapacity(value); return *this;}


    /**
     * <p>The launch template and overrides.</p>
     */
    inline const Aws::Vector<FleetLaunchTemplateConfig>& GetLaunchTemplateConfigs() const{ return m_launchTemplateConfigs; }

    /**
     * <p>The launch template and overrides.</p>
     */
    inline bool LaunchTemplateConfigsHasBeenSet() const { return m_launchTemplateConfigsHasBeenSet; }

    /**
     * <p>The launch template and overrides.</p>
     */
    inline void SetLaunchTemplateConfigs(const Aws::Vector<FleetLaunchTemplateConfig>& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs = value; }

    /**
     * <p>The launch template and overrides.</p>
     */
    inline void SetLaunchTemplateConfigs(Aws::Vector<FleetLaunchTemplateConfig>&& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs = std::move(value); }

    /**
     * <p>The launch template and overrides.</p>
     */
    inline FleetData& WithLaunchTemplateConfigs(const Aws::Vector<FleetLaunchTemplateConfig>& value) { SetLaunchTemplateConfigs(value); return *this;}

    /**
     * <p>The launch template and overrides.</p>
     */
    inline FleetData& WithLaunchTemplateConfigs(Aws::Vector<FleetLaunchTemplateConfig>&& value) { SetLaunchTemplateConfigs(std::move(value)); return *this;}

    /**
     * <p>The launch template and overrides.</p>
     */
    inline FleetData& AddLaunchTemplateConfigs(const FleetLaunchTemplateConfig& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs.push_back(value); return *this; }

    /**
     * <p>The launch template and overrides.</p>
     */
    inline FleetData& AddLaunchTemplateConfigs(FleetLaunchTemplateConfig&& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of units to request. You can choose to set the target capacity in
     * terms of instances or a performance characteristic that is important to your
     * application workload, such as vCPUs, memory, or I/O. If the request type is
     * <code>maintain</code>, you can specify a target capacity of 0 and add capacity
     * later.</p>
     */
    inline const TargetCapacitySpecification& GetTargetCapacitySpecification() const{ return m_targetCapacitySpecification; }

    /**
     * <p>The number of units to request. You can choose to set the target capacity in
     * terms of instances or a performance characteristic that is important to your
     * application workload, such as vCPUs, memory, or I/O. If the request type is
     * <code>maintain</code>, you can specify a target capacity of 0 and add capacity
     * later.</p>
     */
    inline bool TargetCapacitySpecificationHasBeenSet() const { return m_targetCapacitySpecificationHasBeenSet; }

    /**
     * <p>The number of units to request. You can choose to set the target capacity in
     * terms of instances or a performance characteristic that is important to your
     * application workload, such as vCPUs, memory, or I/O. If the request type is
     * <code>maintain</code>, you can specify a target capacity of 0 and add capacity
     * later.</p>
     */
    inline void SetTargetCapacitySpecification(const TargetCapacitySpecification& value) { m_targetCapacitySpecificationHasBeenSet = true; m_targetCapacitySpecification = value; }

    /**
     * <p>The number of units to request. You can choose to set the target capacity in
     * terms of instances or a performance characteristic that is important to your
     * application workload, such as vCPUs, memory, or I/O. If the request type is
     * <code>maintain</code>, you can specify a target capacity of 0 and add capacity
     * later.</p>
     */
    inline void SetTargetCapacitySpecification(TargetCapacitySpecification&& value) { m_targetCapacitySpecificationHasBeenSet = true; m_targetCapacitySpecification = std::move(value); }

    /**
     * <p>The number of units to request. You can choose to set the target capacity in
     * terms of instances or a performance characteristic that is important to your
     * application workload, such as vCPUs, memory, or I/O. If the request type is
     * <code>maintain</code>, you can specify a target capacity of 0 and add capacity
     * later.</p>
     */
    inline FleetData& WithTargetCapacitySpecification(const TargetCapacitySpecification& value) { SetTargetCapacitySpecification(value); return *this;}

    /**
     * <p>The number of units to request. You can choose to set the target capacity in
     * terms of instances or a performance characteristic that is important to your
     * application workload, such as vCPUs, memory, or I/O. If the request type is
     * <code>maintain</code>, you can specify a target capacity of 0 and add capacity
     * later.</p>
     */
    inline FleetData& WithTargetCapacitySpecification(TargetCapacitySpecification&& value) { SetTargetCapacitySpecification(std::move(value)); return *this;}


    /**
     * <p>Indicates whether running instances should be terminated when the EC2 Fleet
     * expires. </p>
     */
    inline bool GetTerminateInstancesWithExpiration() const{ return m_terminateInstancesWithExpiration; }

    /**
     * <p>Indicates whether running instances should be terminated when the EC2 Fleet
     * expires. </p>
     */
    inline bool TerminateInstancesWithExpirationHasBeenSet() const { return m_terminateInstancesWithExpirationHasBeenSet; }

    /**
     * <p>Indicates whether running instances should be terminated when the EC2 Fleet
     * expires. </p>
     */
    inline void SetTerminateInstancesWithExpiration(bool value) { m_terminateInstancesWithExpirationHasBeenSet = true; m_terminateInstancesWithExpiration = value; }

    /**
     * <p>Indicates whether running instances should be terminated when the EC2 Fleet
     * expires. </p>
     */
    inline FleetData& WithTerminateInstancesWithExpiration(bool value) { SetTerminateInstancesWithExpiration(value); return *this;}


    /**
     * <p>The type of request. Indicates whether the EC2 Fleet only
     * <code>requests</code> the target capacity, or also attempts to
     * <code>maintain</code> it. If you request a certain target capacity, EC2 Fleet
     * only places the required requests; it does not attempt to replenish instances if
     * capacity is diminished, and it does not submit requests in alternative capacity
     * pools if capacity is unavailable. To maintain a certain target capacity, EC2
     * Fleet places the required requests to meet this target capacity. It also
     * automatically replenishes any interrupted Spot Instances. Default:
     * <code>maintain</code>.</p>
     */
    inline const FleetType& GetType() const{ return m_type; }

    /**
     * <p>The type of request. Indicates whether the EC2 Fleet only
     * <code>requests</code> the target capacity, or also attempts to
     * <code>maintain</code> it. If you request a certain target capacity, EC2 Fleet
     * only places the required requests; it does not attempt to replenish instances if
     * capacity is diminished, and it does not submit requests in alternative capacity
     * pools if capacity is unavailable. To maintain a certain target capacity, EC2
     * Fleet places the required requests to meet this target capacity. It also
     * automatically replenishes any interrupted Spot Instances. Default:
     * <code>maintain</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of request. Indicates whether the EC2 Fleet only
     * <code>requests</code> the target capacity, or also attempts to
     * <code>maintain</code> it. If you request a certain target capacity, EC2 Fleet
     * only places the required requests; it does not attempt to replenish instances if
     * capacity is diminished, and it does not submit requests in alternative capacity
     * pools if capacity is unavailable. To maintain a certain target capacity, EC2
     * Fleet places the required requests to meet this target capacity. It also
     * automatically replenishes any interrupted Spot Instances. Default:
     * <code>maintain</code>.</p>
     */
    inline void SetType(const FleetType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of request. Indicates whether the EC2 Fleet only
     * <code>requests</code> the target capacity, or also attempts to
     * <code>maintain</code> it. If you request a certain target capacity, EC2 Fleet
     * only places the required requests; it does not attempt to replenish instances if
     * capacity is diminished, and it does not submit requests in alternative capacity
     * pools if capacity is unavailable. To maintain a certain target capacity, EC2
     * Fleet places the required requests to meet this target capacity. It also
     * automatically replenishes any interrupted Spot Instances. Default:
     * <code>maintain</code>.</p>
     */
    inline void SetType(FleetType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of request. Indicates whether the EC2 Fleet only
     * <code>requests</code> the target capacity, or also attempts to
     * <code>maintain</code> it. If you request a certain target capacity, EC2 Fleet
     * only places the required requests; it does not attempt to replenish instances if
     * capacity is diminished, and it does not submit requests in alternative capacity
     * pools if capacity is unavailable. To maintain a certain target capacity, EC2
     * Fleet places the required requests to meet this target capacity. It also
     * automatically replenishes any interrupted Spot Instances. Default:
     * <code>maintain</code>.</p>
     */
    inline FleetData& WithType(const FleetType& value) { SetType(value); return *this;}

    /**
     * <p>The type of request. Indicates whether the EC2 Fleet only
     * <code>requests</code> the target capacity, or also attempts to
     * <code>maintain</code> it. If you request a certain target capacity, EC2 Fleet
     * only places the required requests; it does not attempt to replenish instances if
     * capacity is diminished, and it does not submit requests in alternative capacity
     * pools if capacity is unavailable. To maintain a certain target capacity, EC2
     * Fleet places the required requests to meet this target capacity. It also
     * automatically replenishes any interrupted Spot Instances. Default:
     * <code>maintain</code>.</p>
     */
    inline FleetData& WithType(FleetType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The start date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The default is
     * to start fulfilling the request immediately. </p>
     */
    inline const Aws::Utils::DateTime& GetValidFrom() const{ return m_validFrom; }

    /**
     * <p>The start date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The default is
     * to start fulfilling the request immediately. </p>
     */
    inline bool ValidFromHasBeenSet() const { return m_validFromHasBeenSet; }

    /**
     * <p>The start date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The default is
     * to start fulfilling the request immediately. </p>
     */
    inline void SetValidFrom(const Aws::Utils::DateTime& value) { m_validFromHasBeenSet = true; m_validFrom = value; }

    /**
     * <p>The start date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The default is
     * to start fulfilling the request immediately. </p>
     */
    inline void SetValidFrom(Aws::Utils::DateTime&& value) { m_validFromHasBeenSet = true; m_validFrom = std::move(value); }

    /**
     * <p>The start date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The default is
     * to start fulfilling the request immediately. </p>
     */
    inline FleetData& WithValidFrom(const Aws::Utils::DateTime& value) { SetValidFrom(value); return *this;}

    /**
     * <p>The start date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The default is
     * to start fulfilling the request immediately. </p>
     */
    inline FleetData& WithValidFrom(Aws::Utils::DateTime&& value) { SetValidFrom(std::move(value)); return *this;}


    /**
     * <p>The end date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). At this point,
     * no new instance requests are placed or able to fulfill the request. The default
     * end date is 7 days from the current date. </p>
     */
    inline const Aws::Utils::DateTime& GetValidUntil() const{ return m_validUntil; }

    /**
     * <p>The end date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). At this point,
     * no new instance requests are placed or able to fulfill the request. The default
     * end date is 7 days from the current date. </p>
     */
    inline bool ValidUntilHasBeenSet() const { return m_validUntilHasBeenSet; }

    /**
     * <p>The end date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). At this point,
     * no new instance requests are placed or able to fulfill the request. The default
     * end date is 7 days from the current date. </p>
     */
    inline void SetValidUntil(const Aws::Utils::DateTime& value) { m_validUntilHasBeenSet = true; m_validUntil = value; }

    /**
     * <p>The end date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). At this point,
     * no new instance requests are placed or able to fulfill the request. The default
     * end date is 7 days from the current date. </p>
     */
    inline void SetValidUntil(Aws::Utils::DateTime&& value) { m_validUntilHasBeenSet = true; m_validUntil = std::move(value); }

    /**
     * <p>The end date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). At this point,
     * no new instance requests are placed or able to fulfill the request. The default
     * end date is 7 days from the current date. </p>
     */
    inline FleetData& WithValidUntil(const Aws::Utils::DateTime& value) { SetValidUntil(value); return *this;}

    /**
     * <p>The end date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). At this point,
     * no new instance requests are placed or able to fulfill the request. The default
     * end date is 7 days from the current date. </p>
     */
    inline FleetData& WithValidUntil(Aws::Utils::DateTime&& value) { SetValidUntil(std::move(value)); return *this;}


    /**
     * <p>Indicates whether EC2 Fleet should replace unhealthy Spot Instances.
     * Supported only for fleets of type <code>maintain</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/manage-ec2-fleet.html#ec2-fleet-health-checks">EC2
     * Fleet health checks</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline bool GetReplaceUnhealthyInstances() const{ return m_replaceUnhealthyInstances; }

    /**
     * <p>Indicates whether EC2 Fleet should replace unhealthy Spot Instances.
     * Supported only for fleets of type <code>maintain</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/manage-ec2-fleet.html#ec2-fleet-health-checks">EC2
     * Fleet health checks</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline bool ReplaceUnhealthyInstancesHasBeenSet() const { return m_replaceUnhealthyInstancesHasBeenSet; }

    /**
     * <p>Indicates whether EC2 Fleet should replace unhealthy Spot Instances.
     * Supported only for fleets of type <code>maintain</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/manage-ec2-fleet.html#ec2-fleet-health-checks">EC2
     * Fleet health checks</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetReplaceUnhealthyInstances(bool value) { m_replaceUnhealthyInstancesHasBeenSet = true; m_replaceUnhealthyInstances = value; }

    /**
     * <p>Indicates whether EC2 Fleet should replace unhealthy Spot Instances.
     * Supported only for fleets of type <code>maintain</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/manage-ec2-fleet.html#ec2-fleet-health-checks">EC2
     * Fleet health checks</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline FleetData& WithReplaceUnhealthyInstances(bool value) { SetReplaceUnhealthyInstances(value); return *this;}


    /**
     * <p>The configuration of Spot Instances in an EC2 Fleet.</p>
     */
    inline const SpotOptions& GetSpotOptions() const{ return m_spotOptions; }

    /**
     * <p>The configuration of Spot Instances in an EC2 Fleet.</p>
     */
    inline bool SpotOptionsHasBeenSet() const { return m_spotOptionsHasBeenSet; }

    /**
     * <p>The configuration of Spot Instances in an EC2 Fleet.</p>
     */
    inline void SetSpotOptions(const SpotOptions& value) { m_spotOptionsHasBeenSet = true; m_spotOptions = value; }

    /**
     * <p>The configuration of Spot Instances in an EC2 Fleet.</p>
     */
    inline void SetSpotOptions(SpotOptions&& value) { m_spotOptionsHasBeenSet = true; m_spotOptions = std::move(value); }

    /**
     * <p>The configuration of Spot Instances in an EC2 Fleet.</p>
     */
    inline FleetData& WithSpotOptions(const SpotOptions& value) { SetSpotOptions(value); return *this;}

    /**
     * <p>The configuration of Spot Instances in an EC2 Fleet.</p>
     */
    inline FleetData& WithSpotOptions(SpotOptions&& value) { SetSpotOptions(std::move(value)); return *this;}


    /**
     * <p>The allocation strategy of On-Demand Instances in an EC2 Fleet.</p>
     */
    inline const OnDemandOptions& GetOnDemandOptions() const{ return m_onDemandOptions; }

    /**
     * <p>The allocation strategy of On-Demand Instances in an EC2 Fleet.</p>
     */
    inline bool OnDemandOptionsHasBeenSet() const { return m_onDemandOptionsHasBeenSet; }

    /**
     * <p>The allocation strategy of On-Demand Instances in an EC2 Fleet.</p>
     */
    inline void SetOnDemandOptions(const OnDemandOptions& value) { m_onDemandOptionsHasBeenSet = true; m_onDemandOptions = value; }

    /**
     * <p>The allocation strategy of On-Demand Instances in an EC2 Fleet.</p>
     */
    inline void SetOnDemandOptions(OnDemandOptions&& value) { m_onDemandOptionsHasBeenSet = true; m_onDemandOptions = std::move(value); }

    /**
     * <p>The allocation strategy of On-Demand Instances in an EC2 Fleet.</p>
     */
    inline FleetData& WithOnDemandOptions(const OnDemandOptions& value) { SetOnDemandOptions(value); return *this;}

    /**
     * <p>The allocation strategy of On-Demand Instances in an EC2 Fleet.</p>
     */
    inline FleetData& WithOnDemandOptions(OnDemandOptions&& value) { SetOnDemandOptions(std::move(value)); return *this;}


    /**
     * <p>The tags for an EC2 Fleet resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for an EC2 Fleet resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for an EC2 Fleet resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for an EC2 Fleet resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for an EC2 Fleet resource.</p>
     */
    inline FleetData& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for an EC2 Fleet resource.</p>
     */
    inline FleetData& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for an EC2 Fleet resource.</p>
     */
    inline FleetData& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for an EC2 Fleet resource.</p>
     */
    inline FleetData& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the instances that could not be launched by the fleet.
     * Valid only when <b>Type</b> is set to <code>instant</code>.</p>
     */
    inline const Aws::Vector<DescribeFleetError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Information about the instances that could not be launched by the fleet.
     * Valid only when <b>Type</b> is set to <code>instant</code>.</p>
     */
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }

    /**
     * <p>Information about the instances that could not be launched by the fleet.
     * Valid only when <b>Type</b> is set to <code>instant</code>.</p>
     */
    inline void SetErrors(const Aws::Vector<DescribeFleetError>& value) { m_errorsHasBeenSet = true; m_errors = value; }

    /**
     * <p>Information about the instances that could not be launched by the fleet.
     * Valid only when <b>Type</b> is set to <code>instant</code>.</p>
     */
    inline void SetErrors(Aws::Vector<DescribeFleetError>&& value) { m_errorsHasBeenSet = true; m_errors = std::move(value); }

    /**
     * <p>Information about the instances that could not be launched by the fleet.
     * Valid only when <b>Type</b> is set to <code>instant</code>.</p>
     */
    inline FleetData& WithErrors(const Aws::Vector<DescribeFleetError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Information about the instances that could not be launched by the fleet.
     * Valid only when <b>Type</b> is set to <code>instant</code>.</p>
     */
    inline FleetData& WithErrors(Aws::Vector<DescribeFleetError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Information about the instances that could not be launched by the fleet.
     * Valid only when <b>Type</b> is set to <code>instant</code>.</p>
     */
    inline FleetData& AddErrors(const DescribeFleetError& value) { m_errorsHasBeenSet = true; m_errors.push_back(value); return *this; }

    /**
     * <p>Information about the instances that could not be launched by the fleet.
     * Valid only when <b>Type</b> is set to <code>instant</code>.</p>
     */
    inline FleetData& AddErrors(DescribeFleetError&& value) { m_errorsHasBeenSet = true; m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the instances that were launched by the fleet. Valid only
     * when <b>Type</b> is set to <code>instant</code>.</p>
     */
    inline const Aws::Vector<DescribeFleetsInstances>& GetInstances() const{ return m_instances; }

    /**
     * <p>Information about the instances that were launched by the fleet. Valid only
     * when <b>Type</b> is set to <code>instant</code>.</p>
     */
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }

    /**
     * <p>Information about the instances that were launched by the fleet. Valid only
     * when <b>Type</b> is set to <code>instant</code>.</p>
     */
    inline void SetInstances(const Aws::Vector<DescribeFleetsInstances>& value) { m_instancesHasBeenSet = true; m_instances = value; }

    /**
     * <p>Information about the instances that were launched by the fleet. Valid only
     * when <b>Type</b> is set to <code>instant</code>.</p>
     */
    inline void SetInstances(Aws::Vector<DescribeFleetsInstances>&& value) { m_instancesHasBeenSet = true; m_instances = std::move(value); }

    /**
     * <p>Information about the instances that were launched by the fleet. Valid only
     * when <b>Type</b> is set to <code>instant</code>.</p>
     */
    inline FleetData& WithInstances(const Aws::Vector<DescribeFleetsInstances>& value) { SetInstances(value); return *this;}

    /**
     * <p>Information about the instances that were launched by the fleet. Valid only
     * when <b>Type</b> is set to <code>instant</code>.</p>
     */
    inline FleetData& WithInstances(Aws::Vector<DescribeFleetsInstances>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * <p>Information about the instances that were launched by the fleet. Valid only
     * when <b>Type</b> is set to <code>instant</code>.</p>
     */
    inline FleetData& AddInstances(const DescribeFleetsInstances& value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }

    /**
     * <p>Information about the instances that were launched by the fleet. Valid only
     * when <b>Type</b> is set to <code>instant</code>.</p>
     */
    inline FleetData& AddInstances(DescribeFleetsInstances&& value) { m_instancesHasBeenSet = true; m_instances.push_back(std::move(value)); return *this; }


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
    inline FleetData& WithContext(const Aws::String& value) { SetContext(value); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline FleetData& WithContext(Aws::String&& value) { SetContext(std::move(value)); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline FleetData& WithContext(const char* value) { SetContext(value); return *this;}

  private:

    FleetActivityStatus m_activityStatus;
    bool m_activityStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    FleetStateCode m_fleetState;
    bool m_fleetStateHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    FleetExcessCapacityTerminationPolicy m_excessCapacityTerminationPolicy;
    bool m_excessCapacityTerminationPolicyHasBeenSet = false;

    double m_fulfilledCapacity;
    bool m_fulfilledCapacityHasBeenSet = false;

    double m_fulfilledOnDemandCapacity;
    bool m_fulfilledOnDemandCapacityHasBeenSet = false;

    Aws::Vector<FleetLaunchTemplateConfig> m_launchTemplateConfigs;
    bool m_launchTemplateConfigsHasBeenSet = false;

    TargetCapacitySpecification m_targetCapacitySpecification;
    bool m_targetCapacitySpecificationHasBeenSet = false;

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

    SpotOptions m_spotOptions;
    bool m_spotOptionsHasBeenSet = false;

    OnDemandOptions m_onDemandOptions;
    bool m_onDemandOptionsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<DescribeFleetError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::Vector<DescribeFleetsInstances> m_instances;
    bool m_instancesHasBeenSet = false;

    Aws::String m_context;
    bool m_contextHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
