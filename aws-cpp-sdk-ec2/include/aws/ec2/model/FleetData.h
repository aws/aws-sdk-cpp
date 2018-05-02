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
#include <aws/ec2/model/FleetLaunchTemplateConfig.h>
#include <aws/ec2/model/Tag.h>
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
  class AWS_EC2_API FleetData
  {
  public:
    FleetData();
    FleetData(const Aws::Utils::Xml::XmlNode& xmlNode);
    FleetData& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline FleetData& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline FleetData& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
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
     * capacity is diminished, and does not submit requests in alternative capacity
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
     * capacity is diminished, and does not submit requests in alternative capacity
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
     * capacity is diminished, and does not submit requests in alternative capacity
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
     * capacity is diminished, and does not submit requests in alternative capacity
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
     * capacity is diminished, and does not submit requests in alternative capacity
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
     * <p>Indicates whether EC2 Fleet should replace unhealthy instances.</p>
     */
    inline bool GetReplaceUnhealthyInstances() const{ return m_replaceUnhealthyInstances; }

    /**
     * <p>Indicates whether EC2 Fleet should replace unhealthy instances.</p>
     */
    inline void SetReplaceUnhealthyInstances(bool value) { m_replaceUnhealthyInstancesHasBeenSet = true; m_replaceUnhealthyInstances = value; }

    /**
     * <p>Indicates whether EC2 Fleet should replace unhealthy instances.</p>
     */
    inline FleetData& WithReplaceUnhealthyInstances(bool value) { SetReplaceUnhealthyInstances(value); return *this;}


    /**
     * <p>The configuration of Spot Instances in an EC2 Fleet.</p>
     */
    inline const SpotOptions& GetSpotOptions() const{ return m_spotOptions; }

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
     * <p>The tags for an EC2 Fleet resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

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

  private:

    FleetActivityStatus m_activityStatus;
    bool m_activityStatusHasBeenSet;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;

    FleetStateCode m_fleetState;
    bool m_fleetStateHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    FleetExcessCapacityTerminationPolicy m_excessCapacityTerminationPolicy;
    bool m_excessCapacityTerminationPolicyHasBeenSet;

    double m_fulfilledCapacity;
    bool m_fulfilledCapacityHasBeenSet;

    double m_fulfilledOnDemandCapacity;
    bool m_fulfilledOnDemandCapacityHasBeenSet;

    Aws::Vector<FleetLaunchTemplateConfig> m_launchTemplateConfigs;
    bool m_launchTemplateConfigsHasBeenSet;

    TargetCapacitySpecification m_targetCapacitySpecification;
    bool m_targetCapacitySpecificationHasBeenSet;

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

    SpotOptions m_spotOptions;
    bool m_spotOptionsHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
