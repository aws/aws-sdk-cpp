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
    AWS_EC2_API FleetData() = default;
    AWS_EC2_API FleetData(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FleetData& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The progress of the EC2 Fleet.</p> <p>For fleets of type
     * <code>instant</code>, the status is <code>fulfilled</code> after all requests
     * are placed, regardless of whether target capacity is met (this is the only
     * possible status for <code>instant</code> fleets).</p> <p>For fleets of type
     * <code>request</code> or <code>maintain</code>, the status is
     * <code>pending_fulfillment</code> after all requests are placed,
     * <code>fulfilled</code> when the fleet size meets or exceeds target capacity,
     * <code>pending_termination</code> while instances are terminating when fleet size
     * is decreased, and <code>error</code> if there's an error.</p>
     */
    inline FleetActivityStatus GetActivityStatus() const { return m_activityStatus; }
    inline bool ActivityStatusHasBeenSet() const { return m_activityStatusHasBeenSet; }
    inline void SetActivityStatus(FleetActivityStatus value) { m_activityStatusHasBeenSet = true; m_activityStatus = value; }
    inline FleetData& WithActivityStatus(FleetActivityStatus value) { SetActivityStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date and time of the EC2 Fleet.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    FleetData& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
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
    FleetData& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the EC2 Fleet.</p>
     */
    inline FleetStateCode GetFleetState() const { return m_fleetState; }
    inline bool FleetStateHasBeenSet() const { return m_fleetStateHasBeenSet; }
    inline void SetFleetState(FleetStateCode value) { m_fleetStateHasBeenSet = true; m_fleetState = value; }
    inline FleetData& WithFleetState(FleetStateCode value) { SetFleetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraints: Maximum 64 ASCII characters</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    FleetData& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether running instances should be terminated if the target
     * capacity of the EC2 Fleet is decreased below the current size of the EC2
     * Fleet.</p> <p>Supported only for fleets of type <code>maintain</code>.</p>
     */
    inline FleetExcessCapacityTerminationPolicy GetExcessCapacityTerminationPolicy() const { return m_excessCapacityTerminationPolicy; }
    inline bool ExcessCapacityTerminationPolicyHasBeenSet() const { return m_excessCapacityTerminationPolicyHasBeenSet; }
    inline void SetExcessCapacityTerminationPolicy(FleetExcessCapacityTerminationPolicy value) { m_excessCapacityTerminationPolicyHasBeenSet = true; m_excessCapacityTerminationPolicy = value; }
    inline FleetData& WithExcessCapacityTerminationPolicy(FleetExcessCapacityTerminationPolicy value) { SetExcessCapacityTerminationPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of units fulfilled by this request compared to the set target
     * capacity.</p>
     */
    inline double GetFulfilledCapacity() const { return m_fulfilledCapacity; }
    inline bool FulfilledCapacityHasBeenSet() const { return m_fulfilledCapacityHasBeenSet; }
    inline void SetFulfilledCapacity(double value) { m_fulfilledCapacityHasBeenSet = true; m_fulfilledCapacity = value; }
    inline FleetData& WithFulfilledCapacity(double value) { SetFulfilledCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of units fulfilled by this request compared to the set target
     * On-Demand capacity.</p>
     */
    inline double GetFulfilledOnDemandCapacity() const { return m_fulfilledOnDemandCapacity; }
    inline bool FulfilledOnDemandCapacityHasBeenSet() const { return m_fulfilledOnDemandCapacityHasBeenSet; }
    inline void SetFulfilledOnDemandCapacity(double value) { m_fulfilledOnDemandCapacityHasBeenSet = true; m_fulfilledOnDemandCapacity = value; }
    inline FleetData& WithFulfilledOnDemandCapacity(double value) { SetFulfilledOnDemandCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch template and overrides.</p>
     */
    inline const Aws::Vector<FleetLaunchTemplateConfig>& GetLaunchTemplateConfigs() const { return m_launchTemplateConfigs; }
    inline bool LaunchTemplateConfigsHasBeenSet() const { return m_launchTemplateConfigsHasBeenSet; }
    template<typename LaunchTemplateConfigsT = Aws::Vector<FleetLaunchTemplateConfig>>
    void SetLaunchTemplateConfigs(LaunchTemplateConfigsT&& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs = std::forward<LaunchTemplateConfigsT>(value); }
    template<typename LaunchTemplateConfigsT = Aws::Vector<FleetLaunchTemplateConfig>>
    FleetData& WithLaunchTemplateConfigs(LaunchTemplateConfigsT&& value) { SetLaunchTemplateConfigs(std::forward<LaunchTemplateConfigsT>(value)); return *this;}
    template<typename LaunchTemplateConfigsT = FleetLaunchTemplateConfig>
    FleetData& AddLaunchTemplateConfigs(LaunchTemplateConfigsT&& value) { m_launchTemplateConfigsHasBeenSet = true; m_launchTemplateConfigs.emplace_back(std::forward<LaunchTemplateConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of units to request. You can choose to set the target capacity in
     * terms of instances or a performance characteristic that is important to your
     * application workload, such as vCPUs, memory, or I/O. If the request type is
     * <code>maintain</code>, you can specify a target capacity of 0 and add capacity
     * later.</p>
     */
    inline const TargetCapacitySpecification& GetTargetCapacitySpecification() const { return m_targetCapacitySpecification; }
    inline bool TargetCapacitySpecificationHasBeenSet() const { return m_targetCapacitySpecificationHasBeenSet; }
    template<typename TargetCapacitySpecificationT = TargetCapacitySpecification>
    void SetTargetCapacitySpecification(TargetCapacitySpecificationT&& value) { m_targetCapacitySpecificationHasBeenSet = true; m_targetCapacitySpecification = std::forward<TargetCapacitySpecificationT>(value); }
    template<typename TargetCapacitySpecificationT = TargetCapacitySpecification>
    FleetData& WithTargetCapacitySpecification(TargetCapacitySpecificationT&& value) { SetTargetCapacitySpecification(std::forward<TargetCapacitySpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether running instances should be terminated when the EC2 Fleet
     * expires. </p>
     */
    inline bool GetTerminateInstancesWithExpiration() const { return m_terminateInstancesWithExpiration; }
    inline bool TerminateInstancesWithExpirationHasBeenSet() const { return m_terminateInstancesWithExpirationHasBeenSet; }
    inline void SetTerminateInstancesWithExpiration(bool value) { m_terminateInstancesWithExpirationHasBeenSet = true; m_terminateInstancesWithExpiration = value; }
    inline FleetData& WithTerminateInstancesWithExpiration(bool value) { SetTerminateInstancesWithExpiration(value); return *this;}
    ///@}

    ///@{
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
    inline FleetType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(FleetType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FleetData& WithType(FleetType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The default is
     * to start fulfilling the request immediately. </p>
     */
    inline const Aws::Utils::DateTime& GetValidFrom() const { return m_validFrom; }
    inline bool ValidFromHasBeenSet() const { return m_validFromHasBeenSet; }
    template<typename ValidFromT = Aws::Utils::DateTime>
    void SetValidFrom(ValidFromT&& value) { m_validFromHasBeenSet = true; m_validFrom = std::forward<ValidFromT>(value); }
    template<typename ValidFromT = Aws::Utils::DateTime>
    FleetData& WithValidFrom(ValidFromT&& value) { SetValidFrom(std::forward<ValidFromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). At this point,
     * no new instance requests are placed or able to fulfill the request. The default
     * end date is 7 days from the current date. </p>
     */
    inline const Aws::Utils::DateTime& GetValidUntil() const { return m_validUntil; }
    inline bool ValidUntilHasBeenSet() const { return m_validUntilHasBeenSet; }
    template<typename ValidUntilT = Aws::Utils::DateTime>
    void SetValidUntil(ValidUntilT&& value) { m_validUntilHasBeenSet = true; m_validUntil = std::forward<ValidUntilT>(value); }
    template<typename ValidUntilT = Aws::Utils::DateTime>
    FleetData& WithValidUntil(ValidUntilT&& value) { SetValidUntil(std::forward<ValidUntilT>(value)); return *this;}
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
    inline FleetData& WithReplaceUnhealthyInstances(bool value) { SetReplaceUnhealthyInstances(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of Spot Instances in an EC2 Fleet.</p>
     */
    inline const SpotOptions& GetSpotOptions() const { return m_spotOptions; }
    inline bool SpotOptionsHasBeenSet() const { return m_spotOptionsHasBeenSet; }
    template<typename SpotOptionsT = SpotOptions>
    void SetSpotOptions(SpotOptionsT&& value) { m_spotOptionsHasBeenSet = true; m_spotOptions = std::forward<SpotOptionsT>(value); }
    template<typename SpotOptionsT = SpotOptions>
    FleetData& WithSpotOptions(SpotOptionsT&& value) { SetSpotOptions(std::forward<SpotOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allocation strategy of On-Demand Instances in an EC2 Fleet.</p>
     */
    inline const OnDemandOptions& GetOnDemandOptions() const { return m_onDemandOptions; }
    inline bool OnDemandOptionsHasBeenSet() const { return m_onDemandOptionsHasBeenSet; }
    template<typename OnDemandOptionsT = OnDemandOptions>
    void SetOnDemandOptions(OnDemandOptionsT&& value) { m_onDemandOptionsHasBeenSet = true; m_onDemandOptions = std::forward<OnDemandOptionsT>(value); }
    template<typename OnDemandOptionsT = OnDemandOptions>
    FleetData& WithOnDemandOptions(OnDemandOptionsT&& value) { SetOnDemandOptions(std::forward<OnDemandOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for an EC2 Fleet resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    FleetData& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    FleetData& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the instances that could not be launched by the fleet.
     * Valid only when <b>Type</b> is set to <code>instant</code>.</p>
     */
    inline const Aws::Vector<DescribeFleetError>& GetErrors() const { return m_errors; }
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }
    template<typename ErrorsT = Aws::Vector<DescribeFleetError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<DescribeFleetError>>
    FleetData& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = DescribeFleetError>
    FleetData& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the instances that were launched by the fleet. Valid only
     * when <b>Type</b> is set to <code>instant</code>.</p>
     */
    inline const Aws::Vector<DescribeFleetsInstances>& GetInstances() const { return m_instances; }
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }
    template<typename InstancesT = Aws::Vector<DescribeFleetsInstances>>
    void SetInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances = std::forward<InstancesT>(value); }
    template<typename InstancesT = Aws::Vector<DescribeFleetsInstances>>
    FleetData& WithInstances(InstancesT&& value) { SetInstances(std::forward<InstancesT>(value)); return *this;}
    template<typename InstancesT = DescribeFleetsInstances>
    FleetData& AddInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances.emplace_back(std::forward<InstancesT>(value)); return *this; }
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
    FleetData& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    ///@}
  private:

    FleetActivityStatus m_activityStatus{FleetActivityStatus::NOT_SET};
    bool m_activityStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    FleetStateCode m_fleetState{FleetStateCode::NOT_SET};
    bool m_fleetStateHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    FleetExcessCapacityTerminationPolicy m_excessCapacityTerminationPolicy{FleetExcessCapacityTerminationPolicy::NOT_SET};
    bool m_excessCapacityTerminationPolicyHasBeenSet = false;

    double m_fulfilledCapacity{0.0};
    bool m_fulfilledCapacityHasBeenSet = false;

    double m_fulfilledOnDemandCapacity{0.0};
    bool m_fulfilledOnDemandCapacityHasBeenSet = false;

    Aws::Vector<FleetLaunchTemplateConfig> m_launchTemplateConfigs;
    bool m_launchTemplateConfigsHasBeenSet = false;

    TargetCapacitySpecification m_targetCapacitySpecification;
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
