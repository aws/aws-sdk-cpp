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
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/SpotOptionsRequest.h>
#include <aws/ec2/model/FleetExcessCapacityTerminationPolicy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TargetCapacitySpecificationRequest.h>
#include <aws/ec2/model/FleetType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/FleetLaunchTemplateConfigRequest.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API CreateFleetRequest : public EC2Request
  {
  public:
    CreateFleetRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFleet"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateFleetRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline CreateFleetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline CreateFleetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline CreateFleetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Includes <code>SpotAllocationStrategy</code> and
     * <code>SpotInstanceInterruptionBehavior</code> inside this structure.</p>
     */
    inline const SpotOptionsRequest& GetSpotOptions() const{ return m_spotOptions; }

    /**
     * <p>Includes <code>SpotAllocationStrategy</code> and
     * <code>SpotInstanceInterruptionBehavior</code> inside this structure.</p>
     */
    inline void SetSpotOptions(const SpotOptionsRequest& value) { m_spotOptionsHasBeenSet = true; m_spotOptions = value; }

    /**
     * <p>Includes <code>SpotAllocationStrategy</code> and
     * <code>SpotInstanceInterruptionBehavior</code> inside this structure.</p>
     */
    inline void SetSpotOptions(SpotOptionsRequest&& value) { m_spotOptionsHasBeenSet = true; m_spotOptions = std::move(value); }

    /**
     * <p>Includes <code>SpotAllocationStrategy</code> and
     * <code>SpotInstanceInterruptionBehavior</code> inside this structure.</p>
     */
    inline CreateFleetRequest& WithSpotOptions(const SpotOptionsRequest& value) { SetSpotOptions(value); return *this;}

    /**
     * <p>Includes <code>SpotAllocationStrategy</code> and
     * <code>SpotInstanceInterruptionBehavior</code> inside this structure.</p>
     */
    inline CreateFleetRequest& WithSpotOptions(SpotOptionsRequest&& value) { SetSpotOptions(std::move(value)); return *this;}


    /**
     * <p>Indicates whether running instances should be terminated if the total target
     * capacity of the EC2 Fleet is decreased below the current size of the EC2
     * Fleet.</p>
     */
    inline const FleetExcessCapacityTerminationPolicy& GetExcessCapacityTerminationPolicy() const{ return m_excessCapacityTerminationPolicy; }

    /**
     * <p>Indicates whether running instances should be terminated if the total target
     * capacity of the EC2 Fleet is decreased below the current size of the EC2
     * Fleet.</p>
     */
    inline void SetExcessCapacityTerminationPolicy(const FleetExcessCapacityTerminationPolicy& value) { m_excessCapacityTerminationPolicyHasBeenSet = true; m_excessCapacityTerminationPolicy = value; }

    /**
     * <p>Indicates whether running instances should be terminated if the total target
     * capacity of the EC2 Fleet is decreased below the current size of the EC2
     * Fleet.</p>
     */
    inline void SetExcessCapacityTerminationPolicy(FleetExcessCapacityTerminationPolicy&& value) { m_excessCapacityTerminationPolicyHasBeenSet = true; m_excessCapacityTerminationPolicy = std::move(value); }

    /**
     * <p>Indicates whether running instances should be terminated if the total target
     * capacity of the EC2 Fleet is decreased below the current size of the EC2
     * Fleet.</p>
     */
    inline CreateFleetRequest& WithExcessCapacityTerminationPolicy(const FleetExcessCapacityTerminationPolicy& value) { SetExcessCapacityTerminationPolicy(value); return *this;}

    /**
     * <p>Indicates whether running instances should be terminated if the total target
     * capacity of the EC2 Fleet is decreased below the current size of the EC2
     * Fleet.</p>
     */
    inline CreateFleetRequest& WithExcessCapacityTerminationPolicy(FleetExcessCapacityTerminationPolicy&& value) { SetExcessCapacityTerminationPolicy(std::move(value)); return *this;}


    /**
     * <p>The configuration for the EC2 Fleet.</p>
     */
    inline const Aws::Vector<FleetLaunchTemplateConfigRequest>& GetLaunchTemplateConfigs() const{ return m_launchTemplateConfigs; }

    /**
     * <p>The configuration for the EC2 Fleet.</p>
     */
    inline void SetLaunchTemplateConfigs(const Aws::Vector<FleetLaunchTemplateConfigRequest>& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs = value; }

    /**
     * <p>The configuration for the EC2 Fleet.</p>
     */
    inline void SetLaunchTemplateConfigs(Aws::Vector<FleetLaunchTemplateConfigRequest>&& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs = std::move(value); }

    /**
     * <p>The configuration for the EC2 Fleet.</p>
     */
    inline CreateFleetRequest& WithLaunchTemplateConfigs(const Aws::Vector<FleetLaunchTemplateConfigRequest>& value) { SetLaunchTemplateConfigs(value); return *this;}

    /**
     * <p>The configuration for the EC2 Fleet.</p>
     */
    inline CreateFleetRequest& WithLaunchTemplateConfigs(Aws::Vector<FleetLaunchTemplateConfigRequest>&& value) { SetLaunchTemplateConfigs(std::move(value)); return *this;}

    /**
     * <p>The configuration for the EC2 Fleet.</p>
     */
    inline CreateFleetRequest& AddLaunchTemplateConfigs(const FleetLaunchTemplateConfigRequest& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs.push_back(value); return *this; }

    /**
     * <p>The configuration for the EC2 Fleet.</p>
     */
    inline CreateFleetRequest& AddLaunchTemplateConfigs(FleetLaunchTemplateConfigRequest&& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>TotalTargetCapacity</code>, <code>OnDemandTargetCapacity</code>,
     * <code>SpotTargetCapacity</code>, and <code>DefaultCapacityType</code>
     * structure.</p>
     */
    inline const TargetCapacitySpecificationRequest& GetTargetCapacitySpecification() const{ return m_targetCapacitySpecification; }

    /**
     * <p>The <code>TotalTargetCapacity</code>, <code>OnDemandTargetCapacity</code>,
     * <code>SpotTargetCapacity</code>, and <code>DefaultCapacityType</code>
     * structure.</p>
     */
    inline void SetTargetCapacitySpecification(const TargetCapacitySpecificationRequest& value) { m_targetCapacitySpecificationHasBeenSet = true; m_targetCapacitySpecification = value; }

    /**
     * <p>The <code>TotalTargetCapacity</code>, <code>OnDemandTargetCapacity</code>,
     * <code>SpotTargetCapacity</code>, and <code>DefaultCapacityType</code>
     * structure.</p>
     */
    inline void SetTargetCapacitySpecification(TargetCapacitySpecificationRequest&& value) { m_targetCapacitySpecificationHasBeenSet = true; m_targetCapacitySpecification = std::move(value); }

    /**
     * <p>The <code>TotalTargetCapacity</code>, <code>OnDemandTargetCapacity</code>,
     * <code>SpotTargetCapacity</code>, and <code>DefaultCapacityType</code>
     * structure.</p>
     */
    inline CreateFleetRequest& WithTargetCapacitySpecification(const TargetCapacitySpecificationRequest& value) { SetTargetCapacitySpecification(value); return *this;}

    /**
     * <p>The <code>TotalTargetCapacity</code>, <code>OnDemandTargetCapacity</code>,
     * <code>SpotTargetCapacity</code>, and <code>DefaultCapacityType</code>
     * structure.</p>
     */
    inline CreateFleetRequest& WithTargetCapacitySpecification(TargetCapacitySpecificationRequest&& value) { SetTargetCapacitySpecification(std::move(value)); return *this;}


    /**
     * <p>Indicates whether running instances should be terminated when the EC2 Fleet
     * expires.</p>
     */
    inline bool GetTerminateInstancesWithExpiration() const{ return m_terminateInstancesWithExpiration; }

    /**
     * <p>Indicates whether running instances should be terminated when the EC2 Fleet
     * expires.</p>
     */
    inline void SetTerminateInstancesWithExpiration(bool value) { m_terminateInstancesWithExpirationHasBeenSet = true; m_terminateInstancesWithExpiration = value; }

    /**
     * <p>Indicates whether running instances should be terminated when the EC2 Fleet
     * expires.</p>
     */
    inline CreateFleetRequest& WithTerminateInstancesWithExpiration(bool value) { SetTerminateInstancesWithExpiration(value); return *this;}


    /**
     * <p>The type of request. Indicates whether the EC2 Fleet only
     * <code>requests</code> the target capacity, or also attempts to
     * <code>maintain</code> it. If you request a certain target capacity, EC2 Fleet
     * only places the required requests. It does not attempt to replenish instances if
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
     * only places the required requests. It does not attempt to replenish instances if
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
     * only places the required requests. It does not attempt to replenish instances if
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
     * only places the required requests. It does not attempt to replenish instances if
     * capacity is diminished, and does not submit requests in alternative capacity
     * pools if capacity is unavailable. To maintain a certain target capacity, EC2
     * Fleet places the required requests to meet this target capacity. It also
     * automatically replenishes any interrupted Spot Instances. Default:
     * <code>maintain</code>.</p>
     */
    inline CreateFleetRequest& WithType(const FleetType& value) { SetType(value); return *this;}

    /**
     * <p>The type of request. Indicates whether the EC2 Fleet only
     * <code>requests</code> the target capacity, or also attempts to
     * <code>maintain</code> it. If you request a certain target capacity, EC2 Fleet
     * only places the required requests. It does not attempt to replenish instances if
     * capacity is diminished, and does not submit requests in alternative capacity
     * pools if capacity is unavailable. To maintain a certain target capacity, EC2
     * Fleet places the required requests to meet this target capacity. It also
     * automatically replenishes any interrupted Spot Instances. Default:
     * <code>maintain</code>.</p>
     */
    inline CreateFleetRequest& WithType(FleetType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The start date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The default is
     * to start fulfilling the request immediately.</p>
     */
    inline const Aws::Utils::DateTime& GetValidFrom() const{ return m_validFrom; }

    /**
     * <p>The start date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The default is
     * to start fulfilling the request immediately.</p>
     */
    inline void SetValidFrom(const Aws::Utils::DateTime& value) { m_validFromHasBeenSet = true; m_validFrom = value; }

    /**
     * <p>The start date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The default is
     * to start fulfilling the request immediately.</p>
     */
    inline void SetValidFrom(Aws::Utils::DateTime&& value) { m_validFromHasBeenSet = true; m_validFrom = std::move(value); }

    /**
     * <p>The start date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The default is
     * to start fulfilling the request immediately.</p>
     */
    inline CreateFleetRequest& WithValidFrom(const Aws::Utils::DateTime& value) { SetValidFrom(value); return *this;}

    /**
     * <p>The start date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The default is
     * to start fulfilling the request immediately.</p>
     */
    inline CreateFleetRequest& WithValidFrom(Aws::Utils::DateTime&& value) { SetValidFrom(std::move(value)); return *this;}


    /**
     * <p>The end date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). At this point,
     * no new EC2 Fleet requests are placed or able to fulfill the request. The default
     * end date is 7 days from the current date.</p>
     */
    inline const Aws::Utils::DateTime& GetValidUntil() const{ return m_validUntil; }

    /**
     * <p>The end date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). At this point,
     * no new EC2 Fleet requests are placed or able to fulfill the request. The default
     * end date is 7 days from the current date.</p>
     */
    inline void SetValidUntil(const Aws::Utils::DateTime& value) { m_validUntilHasBeenSet = true; m_validUntil = value; }

    /**
     * <p>The end date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). At this point,
     * no new EC2 Fleet requests are placed or able to fulfill the request. The default
     * end date is 7 days from the current date.</p>
     */
    inline void SetValidUntil(Aws::Utils::DateTime&& value) { m_validUntilHasBeenSet = true; m_validUntil = std::move(value); }

    /**
     * <p>The end date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). At this point,
     * no new EC2 Fleet requests are placed or able to fulfill the request. The default
     * end date is 7 days from the current date.</p>
     */
    inline CreateFleetRequest& WithValidUntil(const Aws::Utils::DateTime& value) { SetValidUntil(value); return *this;}

    /**
     * <p>The end date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). At this point,
     * no new EC2 Fleet requests are placed or able to fulfill the request. The default
     * end date is 7 days from the current date.</p>
     */
    inline CreateFleetRequest& WithValidUntil(Aws::Utils::DateTime&& value) { SetValidUntil(std::move(value)); return *this;}


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
    inline CreateFleetRequest& WithReplaceUnhealthyInstances(bool value) { SetReplaceUnhealthyInstances(value); return *this;}


    /**
     * <p>The tags for an EC2 Fleet resource.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags for an EC2 Fleet resource.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags for an EC2 Fleet resource.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags for an EC2 Fleet resource.</p>
     */
    inline CreateFleetRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags for an EC2 Fleet resource.</p>
     */
    inline CreateFleetRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags for an EC2 Fleet resource.</p>
     */
    inline CreateFleetRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags for an EC2 Fleet resource.</p>
     */
    inline CreateFleetRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    SpotOptionsRequest m_spotOptions;
    bool m_spotOptionsHasBeenSet;

    FleetExcessCapacityTerminationPolicy m_excessCapacityTerminationPolicy;
    bool m_excessCapacityTerminationPolicyHasBeenSet;

    Aws::Vector<FleetLaunchTemplateConfigRequest> m_launchTemplateConfigs;
    bool m_launchTemplateConfigsHasBeenSet;

    TargetCapacitySpecificationRequest m_targetCapacitySpecification;
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

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
