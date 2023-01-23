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
    AWS_EC2_API SpotInstanceRequest();
    AWS_EC2_API SpotInstanceRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SpotInstanceRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Deprecated.</p>
     */
    inline const Aws::String& GetActualBlockHourlyPrice() const{ return m_actualBlockHourlyPrice; }

    /**
     * <p>Deprecated.</p>
     */
    inline bool ActualBlockHourlyPriceHasBeenSet() const { return m_actualBlockHourlyPriceHasBeenSet; }

    /**
     * <p>Deprecated.</p>
     */
    inline void SetActualBlockHourlyPrice(const Aws::String& value) { m_actualBlockHourlyPriceHasBeenSet = true; m_actualBlockHourlyPrice = value; }

    /**
     * <p>Deprecated.</p>
     */
    inline void SetActualBlockHourlyPrice(Aws::String&& value) { m_actualBlockHourlyPriceHasBeenSet = true; m_actualBlockHourlyPrice = std::move(value); }

    /**
     * <p>Deprecated.</p>
     */
    inline void SetActualBlockHourlyPrice(const char* value) { m_actualBlockHourlyPriceHasBeenSet = true; m_actualBlockHourlyPrice.assign(value); }

    /**
     * <p>Deprecated.</p>
     */
    inline SpotInstanceRequest& WithActualBlockHourlyPrice(const Aws::String& value) { SetActualBlockHourlyPrice(value); return *this;}

    /**
     * <p>Deprecated.</p>
     */
    inline SpotInstanceRequest& WithActualBlockHourlyPrice(Aws::String&& value) { SetActualBlockHourlyPrice(std::move(value)); return *this;}

    /**
     * <p>Deprecated.</p>
     */
    inline SpotInstanceRequest& WithActualBlockHourlyPrice(const char* value) { SetActualBlockHourlyPrice(value); return *this;}


    /**
     * <p>The Availability Zone group. If you specify the same Availability Zone group
     * for all Spot Instance requests, all Spot Instances are launched in the same
     * Availability Zone.</p>
     */
    inline const Aws::String& GetAvailabilityZoneGroup() const{ return m_availabilityZoneGroup; }

    /**
     * <p>The Availability Zone group. If you specify the same Availability Zone group
     * for all Spot Instance requests, all Spot Instances are launched in the same
     * Availability Zone.</p>
     */
    inline bool AvailabilityZoneGroupHasBeenSet() const { return m_availabilityZoneGroupHasBeenSet; }

    /**
     * <p>The Availability Zone group. If you specify the same Availability Zone group
     * for all Spot Instance requests, all Spot Instances are launched in the same
     * Availability Zone.</p>
     */
    inline void SetAvailabilityZoneGroup(const Aws::String& value) { m_availabilityZoneGroupHasBeenSet = true; m_availabilityZoneGroup = value; }

    /**
     * <p>The Availability Zone group. If you specify the same Availability Zone group
     * for all Spot Instance requests, all Spot Instances are launched in the same
     * Availability Zone.</p>
     */
    inline void SetAvailabilityZoneGroup(Aws::String&& value) { m_availabilityZoneGroupHasBeenSet = true; m_availabilityZoneGroup = std::move(value); }

    /**
     * <p>The Availability Zone group. If you specify the same Availability Zone group
     * for all Spot Instance requests, all Spot Instances are launched in the same
     * Availability Zone.</p>
     */
    inline void SetAvailabilityZoneGroup(const char* value) { m_availabilityZoneGroupHasBeenSet = true; m_availabilityZoneGroup.assign(value); }

    /**
     * <p>The Availability Zone group. If you specify the same Availability Zone group
     * for all Spot Instance requests, all Spot Instances are launched in the same
     * Availability Zone.</p>
     */
    inline SpotInstanceRequest& WithAvailabilityZoneGroup(const Aws::String& value) { SetAvailabilityZoneGroup(value); return *this;}

    /**
     * <p>The Availability Zone group. If you specify the same Availability Zone group
     * for all Spot Instance requests, all Spot Instances are launched in the same
     * Availability Zone.</p>
     */
    inline SpotInstanceRequest& WithAvailabilityZoneGroup(Aws::String&& value) { SetAvailabilityZoneGroup(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone group. If you specify the same Availability Zone group
     * for all Spot Instance requests, all Spot Instances are launched in the same
     * Availability Zone.</p>
     */
    inline SpotInstanceRequest& WithAvailabilityZoneGroup(const char* value) { SetAvailabilityZoneGroup(value); return *this;}


    /**
     * <p>Deprecated.</p>
     */
    inline int GetBlockDurationMinutes() const{ return m_blockDurationMinutes; }

    /**
     * <p>Deprecated.</p>
     */
    inline bool BlockDurationMinutesHasBeenSet() const { return m_blockDurationMinutesHasBeenSet; }

    /**
     * <p>Deprecated.</p>
     */
    inline void SetBlockDurationMinutes(int value) { m_blockDurationMinutesHasBeenSet = true; m_blockDurationMinutes = value; }

    /**
     * <p>Deprecated.</p>
     */
    inline SpotInstanceRequest& WithBlockDurationMinutes(int value) { SetBlockDurationMinutes(value); return *this;}


    /**
     * <p>The date and time when the Spot Instance request was created, in UTC format
     * (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The date and time when the Spot Instance request was created, in UTC format
     * (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The date and time when the Spot Instance request was created, in UTC format
     * (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The date and time when the Spot Instance request was created, in UTC format
     * (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The date and time when the Spot Instance request was created, in UTC format
     * (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline SpotInstanceRequest& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The date and time when the Spot Instance request was created, in UTC format
     * (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline SpotInstanceRequest& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The fault codes for the Spot Instance request, if any.</p>
     */
    inline const SpotInstanceStateFault& GetFault() const{ return m_fault; }

    /**
     * <p>The fault codes for the Spot Instance request, if any.</p>
     */
    inline bool FaultHasBeenSet() const { return m_faultHasBeenSet; }

    /**
     * <p>The fault codes for the Spot Instance request, if any.</p>
     */
    inline void SetFault(const SpotInstanceStateFault& value) { m_faultHasBeenSet = true; m_fault = value; }

    /**
     * <p>The fault codes for the Spot Instance request, if any.</p>
     */
    inline void SetFault(SpotInstanceStateFault&& value) { m_faultHasBeenSet = true; m_fault = std::move(value); }

    /**
     * <p>The fault codes for the Spot Instance request, if any.</p>
     */
    inline SpotInstanceRequest& WithFault(const SpotInstanceStateFault& value) { SetFault(value); return *this;}

    /**
     * <p>The fault codes for the Spot Instance request, if any.</p>
     */
    inline SpotInstanceRequest& WithFault(SpotInstanceStateFault&& value) { SetFault(std::move(value)); return *this;}


    /**
     * <p>The instance ID, if an instance has been launched to fulfill the Spot
     * Instance request.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance ID, if an instance has been launched to fulfill the Spot
     * Instance request.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The instance ID, if an instance has been launched to fulfill the Spot
     * Instance request.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID, if an instance has been launched to fulfill the Spot
     * Instance request.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The instance ID, if an instance has been launched to fulfill the Spot
     * Instance request.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance ID, if an instance has been launched to fulfill the Spot
     * Instance request.</p>
     */
    inline SpotInstanceRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID, if an instance has been launched to fulfill the Spot
     * Instance request.</p>
     */
    inline SpotInstanceRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The instance ID, if an instance has been launched to fulfill the Spot
     * Instance request.</p>
     */
    inline SpotInstanceRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The instance launch group. Launch groups are Spot Instances that launch
     * together and terminate together.</p>
     */
    inline const Aws::String& GetLaunchGroup() const{ return m_launchGroup; }

    /**
     * <p>The instance launch group. Launch groups are Spot Instances that launch
     * together and terminate together.</p>
     */
    inline bool LaunchGroupHasBeenSet() const { return m_launchGroupHasBeenSet; }

    /**
     * <p>The instance launch group. Launch groups are Spot Instances that launch
     * together and terminate together.</p>
     */
    inline void SetLaunchGroup(const Aws::String& value) { m_launchGroupHasBeenSet = true; m_launchGroup = value; }

    /**
     * <p>The instance launch group. Launch groups are Spot Instances that launch
     * together and terminate together.</p>
     */
    inline void SetLaunchGroup(Aws::String&& value) { m_launchGroupHasBeenSet = true; m_launchGroup = std::move(value); }

    /**
     * <p>The instance launch group. Launch groups are Spot Instances that launch
     * together and terminate together.</p>
     */
    inline void SetLaunchGroup(const char* value) { m_launchGroupHasBeenSet = true; m_launchGroup.assign(value); }

    /**
     * <p>The instance launch group. Launch groups are Spot Instances that launch
     * together and terminate together.</p>
     */
    inline SpotInstanceRequest& WithLaunchGroup(const Aws::String& value) { SetLaunchGroup(value); return *this;}

    /**
     * <p>The instance launch group. Launch groups are Spot Instances that launch
     * together and terminate together.</p>
     */
    inline SpotInstanceRequest& WithLaunchGroup(Aws::String&& value) { SetLaunchGroup(std::move(value)); return *this;}

    /**
     * <p>The instance launch group. Launch groups are Spot Instances that launch
     * together and terminate together.</p>
     */
    inline SpotInstanceRequest& WithLaunchGroup(const char* value) { SetLaunchGroup(value); return *this;}


    /**
     * <p>Additional information for launching instances.</p>
     */
    inline const LaunchSpecification& GetLaunchSpecification() const{ return m_launchSpecification; }

    /**
     * <p>Additional information for launching instances.</p>
     */
    inline bool LaunchSpecificationHasBeenSet() const { return m_launchSpecificationHasBeenSet; }

    /**
     * <p>Additional information for launching instances.</p>
     */
    inline void SetLaunchSpecification(const LaunchSpecification& value) { m_launchSpecificationHasBeenSet = true; m_launchSpecification = value; }

    /**
     * <p>Additional information for launching instances.</p>
     */
    inline void SetLaunchSpecification(LaunchSpecification&& value) { m_launchSpecificationHasBeenSet = true; m_launchSpecification = std::move(value); }

    /**
     * <p>Additional information for launching instances.</p>
     */
    inline SpotInstanceRequest& WithLaunchSpecification(const LaunchSpecification& value) { SetLaunchSpecification(value); return *this;}

    /**
     * <p>Additional information for launching instances.</p>
     */
    inline SpotInstanceRequest& WithLaunchSpecification(LaunchSpecification&& value) { SetLaunchSpecification(std::move(value)); return *this;}


    /**
     * <p>The Availability Zone in which the request is launched.</p>
     */
    inline const Aws::String& GetLaunchedAvailabilityZone() const{ return m_launchedAvailabilityZone; }

    /**
     * <p>The Availability Zone in which the request is launched.</p>
     */
    inline bool LaunchedAvailabilityZoneHasBeenSet() const { return m_launchedAvailabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone in which the request is launched.</p>
     */
    inline void SetLaunchedAvailabilityZone(const Aws::String& value) { m_launchedAvailabilityZoneHasBeenSet = true; m_launchedAvailabilityZone = value; }

    /**
     * <p>The Availability Zone in which the request is launched.</p>
     */
    inline void SetLaunchedAvailabilityZone(Aws::String&& value) { m_launchedAvailabilityZoneHasBeenSet = true; m_launchedAvailabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone in which the request is launched.</p>
     */
    inline void SetLaunchedAvailabilityZone(const char* value) { m_launchedAvailabilityZoneHasBeenSet = true; m_launchedAvailabilityZone.assign(value); }

    /**
     * <p>The Availability Zone in which the request is launched.</p>
     */
    inline SpotInstanceRequest& WithLaunchedAvailabilityZone(const Aws::String& value) { SetLaunchedAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which the request is launched.</p>
     */
    inline SpotInstanceRequest& WithLaunchedAvailabilityZone(Aws::String&& value) { SetLaunchedAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone in which the request is launched.</p>
     */
    inline SpotInstanceRequest& WithLaunchedAvailabilityZone(const char* value) { SetLaunchedAvailabilityZone(value); return *this;}


    /**
     * <p>The product description associated with the Spot Instance.</p>
     */
    inline const RIProductDescription& GetProductDescription() const{ return m_productDescription; }

    /**
     * <p>The product description associated with the Spot Instance.</p>
     */
    inline bool ProductDescriptionHasBeenSet() const { return m_productDescriptionHasBeenSet; }

    /**
     * <p>The product description associated with the Spot Instance.</p>
     */
    inline void SetProductDescription(const RIProductDescription& value) { m_productDescriptionHasBeenSet = true; m_productDescription = value; }

    /**
     * <p>The product description associated with the Spot Instance.</p>
     */
    inline void SetProductDescription(RIProductDescription&& value) { m_productDescriptionHasBeenSet = true; m_productDescription = std::move(value); }

    /**
     * <p>The product description associated with the Spot Instance.</p>
     */
    inline SpotInstanceRequest& WithProductDescription(const RIProductDescription& value) { SetProductDescription(value); return *this;}

    /**
     * <p>The product description associated with the Spot Instance.</p>
     */
    inline SpotInstanceRequest& WithProductDescription(RIProductDescription&& value) { SetProductDescription(std::move(value)); return *this;}


    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline const Aws::String& GetSpotInstanceRequestId() const{ return m_spotInstanceRequestId; }

    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline bool SpotInstanceRequestIdHasBeenSet() const { return m_spotInstanceRequestIdHasBeenSet; }

    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline void SetSpotInstanceRequestId(const Aws::String& value) { m_spotInstanceRequestIdHasBeenSet = true; m_spotInstanceRequestId = value; }

    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline void SetSpotInstanceRequestId(Aws::String&& value) { m_spotInstanceRequestIdHasBeenSet = true; m_spotInstanceRequestId = std::move(value); }

    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline void SetSpotInstanceRequestId(const char* value) { m_spotInstanceRequestIdHasBeenSet = true; m_spotInstanceRequestId.assign(value); }

    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline SpotInstanceRequest& WithSpotInstanceRequestId(const Aws::String& value) { SetSpotInstanceRequestId(value); return *this;}

    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline SpotInstanceRequest& WithSpotInstanceRequestId(Aws::String&& value) { SetSpotInstanceRequestId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline SpotInstanceRequest& WithSpotInstanceRequestId(const char* value) { SetSpotInstanceRequestId(value); return *this;}


    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. We do not recommend using this parameter because it can lead to
     * increased interruptions. If you do not specify this parameter, you will pay the
     * current Spot price.</p>  <p>If you specify a maximum price, your
     * instances will be interrupted more frequently than if you do not specify this
     * parameter.</p> 
     */
    inline const Aws::String& GetSpotPrice() const{ return m_spotPrice; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. We do not recommend using this parameter because it can lead to
     * increased interruptions. If you do not specify this parameter, you will pay the
     * current Spot price.</p>  <p>If you specify a maximum price, your
     * instances will be interrupted more frequently than if you do not specify this
     * parameter.</p> 
     */
    inline bool SpotPriceHasBeenSet() const { return m_spotPriceHasBeenSet; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. We do not recommend using this parameter because it can lead to
     * increased interruptions. If you do not specify this parameter, you will pay the
     * current Spot price.</p>  <p>If you specify a maximum price, your
     * instances will be interrupted more frequently than if you do not specify this
     * parameter.</p> 
     */
    inline void SetSpotPrice(const Aws::String& value) { m_spotPriceHasBeenSet = true; m_spotPrice = value; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. We do not recommend using this parameter because it can lead to
     * increased interruptions. If you do not specify this parameter, you will pay the
     * current Spot price.</p>  <p>If you specify a maximum price, your
     * instances will be interrupted more frequently than if you do not specify this
     * parameter.</p> 
     */
    inline void SetSpotPrice(Aws::String&& value) { m_spotPriceHasBeenSet = true; m_spotPrice = std::move(value); }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. We do not recommend using this parameter because it can lead to
     * increased interruptions. If you do not specify this parameter, you will pay the
     * current Spot price.</p>  <p>If you specify a maximum price, your
     * instances will be interrupted more frequently than if you do not specify this
     * parameter.</p> 
     */
    inline void SetSpotPrice(const char* value) { m_spotPriceHasBeenSet = true; m_spotPrice.assign(value); }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. We do not recommend using this parameter because it can lead to
     * increased interruptions. If you do not specify this parameter, you will pay the
     * current Spot price.</p>  <p>If you specify a maximum price, your
     * instances will be interrupted more frequently than if you do not specify this
     * parameter.</p> 
     */
    inline SpotInstanceRequest& WithSpotPrice(const Aws::String& value) { SetSpotPrice(value); return *this;}

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. We do not recommend using this parameter because it can lead to
     * increased interruptions. If you do not specify this parameter, you will pay the
     * current Spot price.</p>  <p>If you specify a maximum price, your
     * instances will be interrupted more frequently than if you do not specify this
     * parameter.</p> 
     */
    inline SpotInstanceRequest& WithSpotPrice(Aws::String&& value) { SetSpotPrice(std::move(value)); return *this;}

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. We do not recommend using this parameter because it can lead to
     * increased interruptions. If you do not specify this parameter, you will pay the
     * current Spot price.</p>  <p>If you specify a maximum price, your
     * instances will be interrupted more frequently than if you do not specify this
     * parameter.</p> 
     */
    inline SpotInstanceRequest& WithSpotPrice(const char* value) { SetSpotPrice(value); return *this;}


    /**
     * <p>The state of the Spot Instance request. Spot request status information helps
     * track your Spot Instance requests. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-request-status.html">Spot
     * request status</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline const SpotInstanceState& GetState() const{ return m_state; }

    /**
     * <p>The state of the Spot Instance request. Spot request status information helps
     * track your Spot Instance requests. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-request-status.html">Spot
     * request status</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the Spot Instance request. Spot request status information helps
     * track your Spot Instance requests. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-request-status.html">Spot
     * request status</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline void SetState(const SpotInstanceState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the Spot Instance request. Spot request status information helps
     * track your Spot Instance requests. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-request-status.html">Spot
     * request status</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline void SetState(SpotInstanceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the Spot Instance request. Spot request status information helps
     * track your Spot Instance requests. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-request-status.html">Spot
     * request status</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline SpotInstanceRequest& WithState(const SpotInstanceState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the Spot Instance request. Spot request status information helps
     * track your Spot Instance requests. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-request-status.html">Spot
     * request status</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline SpotInstanceRequest& WithState(SpotInstanceState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The status code and status message describing the Spot Instance request.</p>
     */
    inline const SpotInstanceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status code and status message describing the Spot Instance request.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status code and status message describing the Spot Instance request.</p>
     */
    inline void SetStatus(const SpotInstanceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status code and status message describing the Spot Instance request.</p>
     */
    inline void SetStatus(SpotInstanceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status code and status message describing the Spot Instance request.</p>
     */
    inline SpotInstanceRequest& WithStatus(const SpotInstanceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status code and status message describing the Spot Instance request.</p>
     */
    inline SpotInstanceRequest& WithStatus(SpotInstanceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline SpotInstanceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline SpotInstanceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline SpotInstanceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline SpotInstanceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The Spot Instance request type.</p>
     */
    inline const SpotInstanceType& GetType() const{ return m_type; }

    /**
     * <p>The Spot Instance request type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The Spot Instance request type.</p>
     */
    inline void SetType(const SpotInstanceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The Spot Instance request type.</p>
     */
    inline void SetType(SpotInstanceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The Spot Instance request type.</p>
     */
    inline SpotInstanceRequest& WithType(const SpotInstanceType& value) { SetType(value); return *this;}

    /**
     * <p>The Spot Instance request type.</p>
     */
    inline SpotInstanceRequest& WithType(SpotInstanceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The start date of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The request
     * becomes active at this date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetValidFrom() const{ return m_validFrom; }

    /**
     * <p>The start date of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The request
     * becomes active at this date and time.</p>
     */
    inline bool ValidFromHasBeenSet() const { return m_validFromHasBeenSet; }

    /**
     * <p>The start date of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The request
     * becomes active at this date and time.</p>
     */
    inline void SetValidFrom(const Aws::Utils::DateTime& value) { m_validFromHasBeenSet = true; m_validFrom = value; }

    /**
     * <p>The start date of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The request
     * becomes active at this date and time.</p>
     */
    inline void SetValidFrom(Aws::Utils::DateTime&& value) { m_validFromHasBeenSet = true; m_validFrom = std::move(value); }

    /**
     * <p>The start date of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The request
     * becomes active at this date and time.</p>
     */
    inline SpotInstanceRequest& WithValidFrom(const Aws::Utils::DateTime& value) { SetValidFrom(value); return *this;}

    /**
     * <p>The start date of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The request
     * becomes active at this date and time.</p>
     */
    inline SpotInstanceRequest& WithValidFrom(Aws::Utils::DateTime&& value) { SetValidFrom(std::move(value)); return *this;}


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
    inline const Aws::Utils::DateTime& GetValidUntil() const{ return m_validUntil; }

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
    inline bool ValidUntilHasBeenSet() const { return m_validUntilHasBeenSet; }

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
    inline void SetValidUntil(const Aws::Utils::DateTime& value) { m_validUntilHasBeenSet = true; m_validUntil = value; }

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
    inline void SetValidUntil(Aws::Utils::DateTime&& value) { m_validUntilHasBeenSet = true; m_validUntil = std::move(value); }

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
    inline SpotInstanceRequest& WithValidUntil(const Aws::Utils::DateTime& value) { SetValidUntil(value); return *this;}

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
    inline SpotInstanceRequest& WithValidUntil(Aws::Utils::DateTime&& value) { SetValidUntil(std::move(value)); return *this;}


    /**
     * <p>The behavior when a Spot Instance is interrupted.</p>
     */
    inline const InstanceInterruptionBehavior& GetInstanceInterruptionBehavior() const{ return m_instanceInterruptionBehavior; }

    /**
     * <p>The behavior when a Spot Instance is interrupted.</p>
     */
    inline bool InstanceInterruptionBehaviorHasBeenSet() const { return m_instanceInterruptionBehaviorHasBeenSet; }

    /**
     * <p>The behavior when a Spot Instance is interrupted.</p>
     */
    inline void SetInstanceInterruptionBehavior(const InstanceInterruptionBehavior& value) { m_instanceInterruptionBehaviorHasBeenSet = true; m_instanceInterruptionBehavior = value; }

    /**
     * <p>The behavior when a Spot Instance is interrupted.</p>
     */
    inline void SetInstanceInterruptionBehavior(InstanceInterruptionBehavior&& value) { m_instanceInterruptionBehaviorHasBeenSet = true; m_instanceInterruptionBehavior = std::move(value); }

    /**
     * <p>The behavior when a Spot Instance is interrupted.</p>
     */
    inline SpotInstanceRequest& WithInstanceInterruptionBehavior(const InstanceInterruptionBehavior& value) { SetInstanceInterruptionBehavior(value); return *this;}

    /**
     * <p>The behavior when a Spot Instance is interrupted.</p>
     */
    inline SpotInstanceRequest& WithInstanceInterruptionBehavior(InstanceInterruptionBehavior&& value) { SetInstanceInterruptionBehavior(std::move(value)); return *this;}

  private:

    Aws::String m_actualBlockHourlyPrice;
    bool m_actualBlockHourlyPriceHasBeenSet = false;

    Aws::String m_availabilityZoneGroup;
    bool m_availabilityZoneGroupHasBeenSet = false;

    int m_blockDurationMinutes;
    bool m_blockDurationMinutesHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
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

    RIProductDescription m_productDescription;
    bool m_productDescriptionHasBeenSet = false;

    Aws::String m_spotInstanceRequestId;
    bool m_spotInstanceRequestIdHasBeenSet = false;

    Aws::String m_spotPrice;
    bool m_spotPriceHasBeenSet = false;

    SpotInstanceState m_state;
    bool m_stateHasBeenSet = false;

    SpotInstanceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    SpotInstanceType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_validFrom;
    bool m_validFromHasBeenSet = false;

    Aws::Utils::DateTime m_validUntil;
    bool m_validUntilHasBeenSet = false;

    InstanceInterruptionBehavior m_instanceInterruptionBehavior;
    bool m_instanceInterruptionBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
