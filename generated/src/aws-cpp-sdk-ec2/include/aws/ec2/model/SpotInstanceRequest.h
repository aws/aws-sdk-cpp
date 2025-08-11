/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/SpotInstanceStateFault.h>
#include <aws/ec2/model/LaunchSpecification.h>
#include <aws/ec2/model/RIProductDescription.h>
#include <aws/ec2/model/SpotInstanceState.h>
#include <aws/ec2/model/SpotInstanceStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/SpotInstanceType.h>
#include <aws/ec2/model/InstanceInterruptionBehavior.h>
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
   * <p>Describes a Spot Instance request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SpotInstanceRequest">AWS
   * API Reference</a></p>
   */
  class SpotInstanceRequest
  {
  public:
    AWS_EC2_API SpotInstanceRequest() = default;
    AWS_EC2_API SpotInstanceRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SpotInstanceRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Deprecated.</p>
     */
    inline const Aws::String& GetActualBlockHourlyPrice() const { return m_actualBlockHourlyPrice; }
    inline bool ActualBlockHourlyPriceHasBeenSet() const { return m_actualBlockHourlyPriceHasBeenSet; }
    template<typename ActualBlockHourlyPriceT = Aws::String>
    void SetActualBlockHourlyPrice(ActualBlockHourlyPriceT&& value) { m_actualBlockHourlyPriceHasBeenSet = true; m_actualBlockHourlyPrice = std::forward<ActualBlockHourlyPriceT>(value); }
    template<typename ActualBlockHourlyPriceT = Aws::String>
    SpotInstanceRequest& WithActualBlockHourlyPrice(ActualBlockHourlyPriceT&& value) { SetActualBlockHourlyPrice(std::forward<ActualBlockHourlyPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone group. If you specify the same Availability Zone group
     * for all Spot Instance requests, all Spot Instances are launched in the same
     * Availability Zone.</p>
     */
    inline const Aws::String& GetAvailabilityZoneGroup() const { return m_availabilityZoneGroup; }
    inline bool AvailabilityZoneGroupHasBeenSet() const { return m_availabilityZoneGroupHasBeenSet; }
    template<typename AvailabilityZoneGroupT = Aws::String>
    void SetAvailabilityZoneGroup(AvailabilityZoneGroupT&& value) { m_availabilityZoneGroupHasBeenSet = true; m_availabilityZoneGroup = std::forward<AvailabilityZoneGroupT>(value); }
    template<typename AvailabilityZoneGroupT = Aws::String>
    SpotInstanceRequest& WithAvailabilityZoneGroup(AvailabilityZoneGroupT&& value) { SetAvailabilityZoneGroup(std::forward<AvailabilityZoneGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Deprecated.</p>
     */
    inline int GetBlockDurationMinutes() const { return m_blockDurationMinutes; }
    inline bool BlockDurationMinutesHasBeenSet() const { return m_blockDurationMinutesHasBeenSet; }
    inline void SetBlockDurationMinutes(int value) { m_blockDurationMinutesHasBeenSet = true; m_blockDurationMinutes = value; }
    inline SpotInstanceRequest& WithBlockDurationMinutes(int value) { SetBlockDurationMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the Spot Instance request was created, in UTC format
     * (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    SpotInstanceRequest& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fault codes for the Spot Instance request, if any.</p>
     */
    inline const SpotInstanceStateFault& GetFault() const { return m_fault; }
    inline bool FaultHasBeenSet() const { return m_faultHasBeenSet; }
    template<typename FaultT = SpotInstanceStateFault>
    void SetFault(FaultT&& value) { m_faultHasBeenSet = true; m_fault = std::forward<FaultT>(value); }
    template<typename FaultT = SpotInstanceStateFault>
    SpotInstanceRequest& WithFault(FaultT&& value) { SetFault(std::forward<FaultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance ID, if an instance has been launched to fulfill the Spot
     * Instance request.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    SpotInstanceRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance launch group. Launch groups are Spot Instances that launch
     * together and terminate together.</p>
     */
    inline const Aws::String& GetLaunchGroup() const { return m_launchGroup; }
    inline bool LaunchGroupHasBeenSet() const { return m_launchGroupHasBeenSet; }
    template<typename LaunchGroupT = Aws::String>
    void SetLaunchGroup(LaunchGroupT&& value) { m_launchGroupHasBeenSet = true; m_launchGroup = std::forward<LaunchGroupT>(value); }
    template<typename LaunchGroupT = Aws::String>
    SpotInstanceRequest& WithLaunchGroup(LaunchGroupT&& value) { SetLaunchGroup(std::forward<LaunchGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information for launching instances.</p>
     */
    inline const LaunchSpecification& GetLaunchSpecification() const { return m_launchSpecification; }
    inline bool LaunchSpecificationHasBeenSet() const { return m_launchSpecificationHasBeenSet; }
    template<typename LaunchSpecificationT = LaunchSpecification>
    void SetLaunchSpecification(LaunchSpecificationT&& value) { m_launchSpecificationHasBeenSet = true; m_launchSpecification = std::forward<LaunchSpecificationT>(value); }
    template<typename LaunchSpecificationT = LaunchSpecification>
    SpotInstanceRequest& WithLaunchSpecification(LaunchSpecificationT&& value) { SetLaunchSpecification(std::forward<LaunchSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which the request is launched.</p> <p>Either
     * <code>launchedAvailabilityZone</code> or <code>launchedAvailabilityZoneId</code>
     * can be specified, but not both</p>
     */
    inline const Aws::String& GetLaunchedAvailabilityZone() const { return m_launchedAvailabilityZone; }
    inline bool LaunchedAvailabilityZoneHasBeenSet() const { return m_launchedAvailabilityZoneHasBeenSet; }
    template<typename LaunchedAvailabilityZoneT = Aws::String>
    void SetLaunchedAvailabilityZone(LaunchedAvailabilityZoneT&& value) { m_launchedAvailabilityZoneHasBeenSet = true; m_launchedAvailabilityZone = std::forward<LaunchedAvailabilityZoneT>(value); }
    template<typename LaunchedAvailabilityZoneT = Aws::String>
    SpotInstanceRequest& WithLaunchedAvailabilityZone(LaunchedAvailabilityZoneT&& value) { SetLaunchedAvailabilityZone(std::forward<LaunchedAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Availability Zone in which the request is launched.</p>
     * <p>Either <code>launchedAvailabilityZone</code> or
     * <code>launchedAvailabilityZoneId</code> can be specified, but not both</p>
     */
    inline const Aws::String& GetLaunchedAvailabilityZoneId() const { return m_launchedAvailabilityZoneId; }
    inline bool LaunchedAvailabilityZoneIdHasBeenSet() const { return m_launchedAvailabilityZoneIdHasBeenSet; }
    template<typename LaunchedAvailabilityZoneIdT = Aws::String>
    void SetLaunchedAvailabilityZoneId(LaunchedAvailabilityZoneIdT&& value) { m_launchedAvailabilityZoneIdHasBeenSet = true; m_launchedAvailabilityZoneId = std::forward<LaunchedAvailabilityZoneIdT>(value); }
    template<typename LaunchedAvailabilityZoneIdT = Aws::String>
    SpotInstanceRequest& WithLaunchedAvailabilityZoneId(LaunchedAvailabilityZoneIdT&& value) { SetLaunchedAvailabilityZoneId(std::forward<LaunchedAvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product description associated with the Spot Instance.</p>
     */
    inline RIProductDescription GetProductDescription() const { return m_productDescription; }
    inline bool ProductDescriptionHasBeenSet() const { return m_productDescriptionHasBeenSet; }
    inline void SetProductDescription(RIProductDescription value) { m_productDescriptionHasBeenSet = true; m_productDescription = value; }
    inline SpotInstanceRequest& WithProductDescription(RIProductDescription value) { SetProductDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline const Aws::String& GetSpotInstanceRequestId() const { return m_spotInstanceRequestId; }
    inline bool SpotInstanceRequestIdHasBeenSet() const { return m_spotInstanceRequestIdHasBeenSet; }
    template<typename SpotInstanceRequestIdT = Aws::String>
    void SetSpotInstanceRequestId(SpotInstanceRequestIdT&& value) { m_spotInstanceRequestIdHasBeenSet = true; m_spotInstanceRequestId = std::forward<SpotInstanceRequestIdT>(value); }
    template<typename SpotInstanceRequestIdT = Aws::String>
    SpotInstanceRequest& WithSpotInstanceRequestId(SpotInstanceRequestIdT&& value) { SetSpotInstanceRequestId(std::forward<SpotInstanceRequestIdT>(value)); return *this;}
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
    inline const Aws::String& GetSpotPrice() const { return m_spotPrice; }
    inline bool SpotPriceHasBeenSet() const { return m_spotPriceHasBeenSet; }
    template<typename SpotPriceT = Aws::String>
    void SetSpotPrice(SpotPriceT&& value) { m_spotPriceHasBeenSet = true; m_spotPrice = std::forward<SpotPriceT>(value); }
    template<typename SpotPriceT = Aws::String>
    SpotInstanceRequest& WithSpotPrice(SpotPriceT&& value) { SetSpotPrice(std::forward<SpotPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the Spot Instance request. Spot request status information helps
     * track your Spot Instance requests. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-request-status.html">Spot
     * request status</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline SpotInstanceState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(SpotInstanceState value) { m_stateHasBeenSet = true; m_state = value; }
    inline SpotInstanceRequest& WithState(SpotInstanceState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status code and status message describing the Spot Instance request.</p>
     */
    inline const SpotInstanceStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = SpotInstanceStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = SpotInstanceStatus>
    SpotInstanceRequest& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    SpotInstanceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    SpotInstanceRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Spot Instance request type.</p>
     */
    inline SpotInstanceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SpotInstanceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SpotInstanceRequest& WithType(SpotInstanceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The request
     * becomes active at this date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetValidFrom() const { return m_validFrom; }
    inline bool ValidFromHasBeenSet() const { return m_validFromHasBeenSet; }
    template<typename ValidFromT = Aws::Utils::DateTime>
    void SetValidFrom(ValidFromT&& value) { m_validFromHasBeenSet = true; m_validFrom = std::forward<ValidFromT>(value); }
    template<typename ValidFromT = Aws::Utils::DateTime>
    SpotInstanceRequest& WithValidFrom(ValidFromT&& value) { SetValidFrom(std::forward<ValidFromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date of the request, in UTC format
     * (<i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p> <ul> <li>
     * <p>For a persistent request, the request remains active until the
     * <code>validUntil</code> date and time is reached. Otherwise, the request remains
     * active until you cancel it. </p> </li> <li> <p>For a one-time request, the
     * request remains active until all instances launch, the request is canceled, or
     * the <code>validUntil</code> date and time is reached. By default, the request is
     * valid for 7 days from the date the request was created.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetValidUntil() const { return m_validUntil; }
    inline bool ValidUntilHasBeenSet() const { return m_validUntilHasBeenSet; }
    template<typename ValidUntilT = Aws::Utils::DateTime>
    void SetValidUntil(ValidUntilT&& value) { m_validUntilHasBeenSet = true; m_validUntil = std::forward<ValidUntilT>(value); }
    template<typename ValidUntilT = Aws::Utils::DateTime>
    SpotInstanceRequest& WithValidUntil(ValidUntilT&& value) { SetValidUntil(std::forward<ValidUntilT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The behavior when a Spot Instance is interrupted.</p>
     */
    inline InstanceInterruptionBehavior GetInstanceInterruptionBehavior() const { return m_instanceInterruptionBehavior; }
    inline bool InstanceInterruptionBehaviorHasBeenSet() const { return m_instanceInterruptionBehaviorHasBeenSet; }
    inline void SetInstanceInterruptionBehavior(InstanceInterruptionBehavior value) { m_instanceInterruptionBehaviorHasBeenSet = true; m_instanceInterruptionBehavior = value; }
    inline SpotInstanceRequest& WithInstanceInterruptionBehavior(InstanceInterruptionBehavior value) { SetInstanceInterruptionBehavior(value); return *this;}
    ///@}
  private:

    Aws::String m_actualBlockHourlyPrice;
    bool m_actualBlockHourlyPriceHasBeenSet = false;

    Aws::String m_availabilityZoneGroup;
    bool m_availabilityZoneGroupHasBeenSet = false;

    int m_blockDurationMinutes{0};
    bool m_blockDurationMinutesHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    SpotInstanceStateFault m_fault;
    bool m_faultHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_launchGroup;
    bool m_launchGroupHasBeenSet = false;

    LaunchSpecification m_launchSpecification;
    bool m_launchSpecificationHasBeenSet = false;

    Aws::String m_launchedAvailabilityZone;
    bool m_launchedAvailabilityZoneHasBeenSet = false;

    Aws::String m_launchedAvailabilityZoneId;
    bool m_launchedAvailabilityZoneIdHasBeenSet = false;

    RIProductDescription m_productDescription{RIProductDescription::NOT_SET};
    bool m_productDescriptionHasBeenSet = false;

    Aws::String m_spotInstanceRequestId;
    bool m_spotInstanceRequestIdHasBeenSet = false;

    Aws::String m_spotPrice;
    bool m_spotPriceHasBeenSet = false;

    SpotInstanceState m_state{SpotInstanceState::NOT_SET};
    bool m_stateHasBeenSet = false;

    SpotInstanceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    SpotInstanceType m_type{SpotInstanceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_validFrom{};
    bool m_validFromHasBeenSet = false;

    Aws::Utils::DateTime m_validUntil{};
    bool m_validUntilHasBeenSet = false;

    InstanceInterruptionBehavior m_instanceInterruptionBehavior{InstanceInterruptionBehavior::NOT_SET};
    bool m_instanceInterruptionBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
