/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/SpotOptionsRequest.h>
#include <aws/ec2/model/OnDemandOptionsRequest.h>
#include <aws/ec2/model/FleetExcessCapacityTerminationPolicy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TargetCapacitySpecificationRequest.h>
#include <aws/ec2/model/FleetType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/FleetLaunchTemplateConfigRequest.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateFleetRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateFleetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFleet"; }

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
    inline CreateFleetRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you do not specify a client token, a randomly generated token
     * is used for the request to ensure idempotency.</p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateFleetRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the configuration of Spot Instances in an EC2 Fleet.</p>
     */
    inline const SpotOptionsRequest& GetSpotOptions() const { return m_spotOptions; }
    inline bool SpotOptionsHasBeenSet() const { return m_spotOptionsHasBeenSet; }
    template<typename SpotOptionsT = SpotOptionsRequest>
    void SetSpotOptions(SpotOptionsT&& value) { m_spotOptionsHasBeenSet = true; m_spotOptions = std::forward<SpotOptionsT>(value); }
    template<typename SpotOptionsT = SpotOptionsRequest>
    CreateFleetRequest& WithSpotOptions(SpotOptionsT&& value) { SetSpotOptions(std::forward<SpotOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the configuration of On-Demand Instances in an EC2 Fleet.</p>
     */
    inline const OnDemandOptionsRequest& GetOnDemandOptions() const { return m_onDemandOptions; }
    inline bool OnDemandOptionsHasBeenSet() const { return m_onDemandOptionsHasBeenSet; }
    template<typename OnDemandOptionsT = OnDemandOptionsRequest>
    void SetOnDemandOptions(OnDemandOptionsT&& value) { m_onDemandOptionsHasBeenSet = true; m_onDemandOptions = std::forward<OnDemandOptionsT>(value); }
    template<typename OnDemandOptionsT = OnDemandOptionsRequest>
    CreateFleetRequest& WithOnDemandOptions(OnDemandOptionsT&& value) { SetOnDemandOptions(std::forward<OnDemandOptionsT>(value)); return *this;}
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
    inline CreateFleetRequest& WithExcessCapacityTerminationPolicy(FleetExcessCapacityTerminationPolicy value) { SetExcessCapacityTerminationPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the EC2 Fleet.</p>
     */
    inline const Aws::Vector<FleetLaunchTemplateConfigRequest>& GetLaunchTemplateConfigs() const { return m_launchTemplateConfigs; }
    inline bool LaunchTemplateConfigsHasBeenSet() const { return m_launchTemplateConfigsHasBeenSet; }
    template<typename LaunchTemplateConfigsT = Aws::Vector<FleetLaunchTemplateConfigRequest>>
    void SetLaunchTemplateConfigs(LaunchTemplateConfigsT&& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs = std::forward<LaunchTemplateConfigsT>(value); }
    template<typename LaunchTemplateConfigsT = Aws::Vector<FleetLaunchTemplateConfigRequest>>
    CreateFleetRequest& WithLaunchTemplateConfigs(LaunchTemplateConfigsT&& value) { SetLaunchTemplateConfigs(std::forward<LaunchTemplateConfigsT>(value)); return *this;}
    template<typename LaunchTemplateConfigsT = FleetLaunchTemplateConfigRequest>
    CreateFleetRequest& AddLaunchTemplateConfigs(LaunchTemplateConfigsT&& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs.emplace_back(std::forward<LaunchTemplateConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of units to request.</p>
     */
    inline const TargetCapacitySpecificationRequest& GetTargetCapacitySpecification() const { return m_targetCapacitySpecification; }
    inline bool TargetCapacitySpecificationHasBeenSet() const { return m_targetCapacitySpecificationHasBeenSet; }
    template<typename TargetCapacitySpecificationT = TargetCapacitySpecificationRequest>
    void SetTargetCapacitySpecification(TargetCapacitySpecificationT&& value) { m_targetCapacitySpecificationHasBeenSet = true; m_targetCapacitySpecification = std::forward<TargetCapacitySpecificationT>(value); }
    template<typename TargetCapacitySpecificationT = TargetCapacitySpecificationRequest>
    CreateFleetRequest& WithTargetCapacitySpecification(TargetCapacitySpecificationT&& value) { SetTargetCapacitySpecification(std::forward<TargetCapacitySpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether running instances should be terminated when the EC2 Fleet
     * expires.</p>
     */
    inline bool GetTerminateInstancesWithExpiration() const { return m_terminateInstancesWithExpiration; }
    inline bool TerminateInstancesWithExpirationHasBeenSet() const { return m_terminateInstancesWithExpirationHasBeenSet; }
    inline void SetTerminateInstancesWithExpiration(bool value) { m_terminateInstancesWithExpirationHasBeenSet = true; m_terminateInstancesWithExpiration = value; }
    inline CreateFleetRequest& WithTerminateInstancesWithExpiration(bool value) { SetTerminateInstancesWithExpiration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet type. The default value is <code>maintain</code>.</p> <ul> <li> <p>
     * <code>maintain</code> - The EC2 Fleet places an asynchronous request for your
     * desired capacity, and continues to maintain your desired Spot capacity by
     * replenishing interrupted Spot Instances.</p> </li> <li> <p> <code>request</code>
     * - The EC2 Fleet places an asynchronous one-time request for your desired
     * capacity, but does submit Spot requests in alternative capacity pools if Spot
     * capacity is unavailable, and does not maintain Spot capacity if Spot Instances
     * are interrupted.</p> </li> <li> <p> <code>instant</code> - The EC2 Fleet places
     * a synchronous one-time request for your desired capacity, and returns errors for
     * any instances that could not be launched.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-fleet-request-type.html">EC2
     * Fleet request types</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline FleetType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(FleetType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateFleetRequest& WithType(FleetType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The default is
     * to start fulfilling the request immediately.</p>
     */
    inline const Aws::Utils::DateTime& GetValidFrom() const { return m_validFrom; }
    inline bool ValidFromHasBeenSet() const { return m_validFromHasBeenSet; }
    template<typename ValidFromT = Aws::Utils::DateTime>
    void SetValidFrom(ValidFromT&& value) { m_validFromHasBeenSet = true; m_validFrom = std::forward<ValidFromT>(value); }
    template<typename ValidFromT = Aws::Utils::DateTime>
    CreateFleetRequest& WithValidFrom(ValidFromT&& value) { SetValidFrom(std::forward<ValidFromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). At this point,
     * no new EC2 Fleet requests are placed or able to fulfill the request. If no value
     * is specified, the request remains until you cancel it.</p>
     */
    inline const Aws::Utils::DateTime& GetValidUntil() const { return m_validUntil; }
    inline bool ValidUntilHasBeenSet() const { return m_validUntilHasBeenSet; }
    template<typename ValidUntilT = Aws::Utils::DateTime>
    void SetValidUntil(ValidUntilT&& value) { m_validUntilHasBeenSet = true; m_validUntil = std::forward<ValidUntilT>(value); }
    template<typename ValidUntilT = Aws::Utils::DateTime>
    CreateFleetRequest& WithValidUntil(ValidUntilT&& value) { SetValidUntil(std::forward<ValidUntilT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether EC2 Fleet should replace unhealthy Spot Instances.
     * Supported only for fleets of type <code>maintain</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/manage-ec2-fleet.html#ec2-fleet-health-checks">EC2
     * Fleet health checks</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline bool GetReplaceUnhealthyInstances() const { return m_replaceUnhealthyInstances; }
    inline bool ReplaceUnhealthyInstancesHasBeenSet() const { return m_replaceUnhealthyInstancesHasBeenSet; }
    inline void SetReplaceUnhealthyInstances(bool value) { m_replaceUnhealthyInstancesHasBeenSet = true; m_replaceUnhealthyInstances = value; }
    inline CreateFleetRequest& WithReplaceUnhealthyInstances(bool value) { SetReplaceUnhealthyInstances(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value pair for tagging the EC2 Fleet request on creation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#tag-resources">Tag
     * your resources</a>.</p> <p>If the fleet type is <code>instant</code>, specify a
     * resource type of <code>fleet</code> to tag the fleet or <code>instance</code> to
     * tag the instances at launch.</p> <p>If the fleet type is <code>maintain</code>
     * or <code>request</code>, specify a resource type of <code>fleet</code> to tag
     * the fleet. You cannot specify a resource type of <code>instance</code>. To tag
     * instances at launch, specify the tags in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html#create-launch-template">launch
     * template</a>.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateFleetRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateFleetRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
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
    CreateFleetRequest& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    SpotOptionsRequest m_spotOptions;
    bool m_spotOptionsHasBeenSet = false;

    OnDemandOptionsRequest m_onDemandOptions;
    bool m_onDemandOptionsHasBeenSet = false;

    FleetExcessCapacityTerminationPolicy m_excessCapacityTerminationPolicy{FleetExcessCapacityTerminationPolicy::NOT_SET};
    bool m_excessCapacityTerminationPolicyHasBeenSet = false;

    Aws::Vector<FleetLaunchTemplateConfigRequest> m_launchTemplateConfigs;
    bool m_launchTemplateConfigsHasBeenSet = false;

    TargetCapacitySpecificationRequest m_targetCapacitySpecification;
    bool m_targetCapacitySpecificationHasBeenSet = false;

    bool m_terminateInstancesWithExpiration{false};
    bool m_terminateInstancesWithExpirationHasBeenSet = false;

    FleetType m_type{FleetType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_validFrom{};
    bool m_validFromHasBeenSet = false;

    Aws::Utils::DateTime m_validUntil{};
    bool m_validUntilHasBeenSet = false;

    bool m_replaceUnhealthyInstances{false};
    bool m_replaceUnhealthyInstancesHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_context;
    bool m_contextHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
