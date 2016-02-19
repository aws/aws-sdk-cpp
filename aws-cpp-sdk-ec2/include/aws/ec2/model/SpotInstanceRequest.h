/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/SpotInstanceType.h>
#include <aws/ec2/model/SpotInstanceState.h>
#include <aws/ec2/model/SpotInstanceStateFault.h>
#include <aws/ec2/model/SpotInstanceStatus.h>
#include <aws/ec2/model/LaunchSpecification.h>
#include <aws/ec2/model/RIProductDescription.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>

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
   * <p>Describe a Spot Instance request.</p>
   */
  class AWS_EC2_API SpotInstanceRequest
  {
  public:
    SpotInstanceRequest();
    SpotInstanceRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    SpotInstanceRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline const Aws::String& GetSpotInstanceRequestId() const{ return m_spotInstanceRequestId; }

    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline void SetSpotInstanceRequestId(const Aws::String& value) { m_spotInstanceRequestIdHasBeenSet = true; m_spotInstanceRequestId = value; }

    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline void SetSpotInstanceRequestId(Aws::String&& value) { m_spotInstanceRequestIdHasBeenSet = true; m_spotInstanceRequestId = value; }

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
    inline SpotInstanceRequest& WithSpotInstanceRequestId(Aws::String&& value) { SetSpotInstanceRequestId(value); return *this;}

    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline SpotInstanceRequest& WithSpotInstanceRequestId(const char* value) { SetSpotInstanceRequestId(value); return *this;}

    /**
     * <p>The maximum hourly price (bid) for any Spot Instance launched to fulfill the
     * request.</p>
     */
    inline const Aws::String& GetSpotPrice() const{ return m_spotPrice; }

    /**
     * <p>The maximum hourly price (bid) for any Spot Instance launched to fulfill the
     * request.</p>
     */
    inline void SetSpotPrice(const Aws::String& value) { m_spotPriceHasBeenSet = true; m_spotPrice = value; }

    /**
     * <p>The maximum hourly price (bid) for any Spot Instance launched to fulfill the
     * request.</p>
     */
    inline void SetSpotPrice(Aws::String&& value) { m_spotPriceHasBeenSet = true; m_spotPrice = value; }

    /**
     * <p>The maximum hourly price (bid) for any Spot Instance launched to fulfill the
     * request.</p>
     */
    inline void SetSpotPrice(const char* value) { m_spotPriceHasBeenSet = true; m_spotPrice.assign(value); }

    /**
     * <p>The maximum hourly price (bid) for any Spot Instance launched to fulfill the
     * request.</p>
     */
    inline SpotInstanceRequest& WithSpotPrice(const Aws::String& value) { SetSpotPrice(value); return *this;}

    /**
     * <p>The maximum hourly price (bid) for any Spot Instance launched to fulfill the
     * request.</p>
     */
    inline SpotInstanceRequest& WithSpotPrice(Aws::String&& value) { SetSpotPrice(value); return *this;}

    /**
     * <p>The maximum hourly price (bid) for any Spot Instance launched to fulfill the
     * request.</p>
     */
    inline SpotInstanceRequest& WithSpotPrice(const char* value) { SetSpotPrice(value); return *this;}

    /**
     * <p>The Spot Instance request type.</p>
     */
    inline const SpotInstanceType& GetType() const{ return m_type; }

    /**
     * <p>The Spot Instance request type.</p>
     */
    inline void SetType(const SpotInstanceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The Spot Instance request type.</p>
     */
    inline void SetType(SpotInstanceType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The Spot Instance request type.</p>
     */
    inline SpotInstanceRequest& WithType(const SpotInstanceType& value) { SetType(value); return *this;}

    /**
     * <p>The Spot Instance request type.</p>
     */
    inline SpotInstanceRequest& WithType(SpotInstanceType&& value) { SetType(value); return *this;}

    /**
     * <p>The state of the Spot Instance request. Spot bid status information can help
     * you track your Spot Instance requests. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-bid-status.html">Spot
     * Bid Status</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline const SpotInstanceState& GetState() const{ return m_state; }

    /**
     * <p>The state of the Spot Instance request. Spot bid status information can help
     * you track your Spot Instance requests. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-bid-status.html">Spot
     * Bid Status</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetState(const SpotInstanceState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the Spot Instance request. Spot bid status information can help
     * you track your Spot Instance requests. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-bid-status.html">Spot
     * Bid Status</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetState(SpotInstanceState&& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the Spot Instance request. Spot bid status information can help
     * you track your Spot Instance requests. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-bid-status.html">Spot
     * Bid Status</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline SpotInstanceRequest& WithState(const SpotInstanceState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the Spot Instance request. Spot bid status information can help
     * you track your Spot Instance requests. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-bid-status.html">Spot
     * Bid Status</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline SpotInstanceRequest& WithState(SpotInstanceState&& value) { SetState(value); return *this;}

    /**
     * <p>The fault codes for the Spot Instance request, if any.</p>
     */
    inline const SpotInstanceStateFault& GetFault() const{ return m_fault; }

    /**
     * <p>The fault codes for the Spot Instance request, if any.</p>
     */
    inline void SetFault(const SpotInstanceStateFault& value) { m_faultHasBeenSet = true; m_fault = value; }

    /**
     * <p>The fault codes for the Spot Instance request, if any.</p>
     */
    inline void SetFault(SpotInstanceStateFault&& value) { m_faultHasBeenSet = true; m_fault = value; }

    /**
     * <p>The fault codes for the Spot Instance request, if any.</p>
     */
    inline SpotInstanceRequest& WithFault(const SpotInstanceStateFault& value) { SetFault(value); return *this;}

    /**
     * <p>The fault codes for the Spot Instance request, if any.</p>
     */
    inline SpotInstanceRequest& WithFault(SpotInstanceStateFault&& value) { SetFault(value); return *this;}

    /**
     * <p>The status code and status message describing the Spot Instance request.</p>
     */
    inline const SpotInstanceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status code and status message describing the Spot Instance request.</p>
     */
    inline void SetStatus(const SpotInstanceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status code and status message describing the Spot Instance request.</p>
     */
    inline void SetStatus(SpotInstanceStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status code and status message describing the Spot Instance request.</p>
     */
    inline SpotInstanceRequest& WithStatus(const SpotInstanceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status code and status message describing the Spot Instance request.</p>
     */
    inline SpotInstanceRequest& WithStatus(SpotInstanceStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>The start date of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). If this is a
     * one-time request, the request becomes active at this date and time and remains
     * active until all instances launch, the request expires, or the request is
     * canceled. If the request is persistent, the request becomes active at this date
     * and time and remains active until it expires or is canceled.</p>
     */
    inline double GetValidFrom() const{ return m_validFrom; }

    /**
     * <p>The start date of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). If this is a
     * one-time request, the request becomes active at this date and time and remains
     * active until all instances launch, the request expires, or the request is
     * canceled. If the request is persistent, the request becomes active at this date
     * and time and remains active until it expires or is canceled.</p>
     */
    inline void SetValidFrom(double value) { m_validFromHasBeenSet = true; m_validFrom = value; }

    /**
     * <p>The start date of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). If this is a
     * one-time request, the request becomes active at this date and time and remains
     * active until all instances launch, the request expires, or the request is
     * canceled. If the request is persistent, the request becomes active at this date
     * and time and remains active until it expires or is canceled.</p>
     */
    inline SpotInstanceRequest& WithValidFrom(double value) { SetValidFrom(value); return *this;}

    /**
     * <p>The end date of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). If this is a
     * one-time request, the request remains active until all instances launch, the
     * request is canceled, or this date is reached. If the request is persistent, it
     * remains active until it is canceled or this date is reached.</p>
     */
    inline double GetValidUntil() const{ return m_validUntil; }

    /**
     * <p>The end date of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). If this is a
     * one-time request, the request remains active until all instances launch, the
     * request is canceled, or this date is reached. If the request is persistent, it
     * remains active until it is canceled or this date is reached.</p>
     */
    inline void SetValidUntil(double value) { m_validUntilHasBeenSet = true; m_validUntil = value; }

    /**
     * <p>The end date of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). If this is a
     * one-time request, the request remains active until all instances launch, the
     * request is canceled, or this date is reached. If the request is persistent, it
     * remains active until it is canceled or this date is reached.</p>
     */
    inline SpotInstanceRequest& WithValidUntil(double value) { SetValidUntil(value); return *this;}

    /**
     * <p>The instance launch group. Launch groups are Spot Instances that launch
     * together and terminate together.</p>
     */
    inline const Aws::String& GetLaunchGroup() const{ return m_launchGroup; }

    /**
     * <p>The instance launch group. Launch groups are Spot Instances that launch
     * together and terminate together.</p>
     */
    inline void SetLaunchGroup(const Aws::String& value) { m_launchGroupHasBeenSet = true; m_launchGroup = value; }

    /**
     * <p>The instance launch group. Launch groups are Spot Instances that launch
     * together and terminate together.</p>
     */
    inline void SetLaunchGroup(Aws::String&& value) { m_launchGroupHasBeenSet = true; m_launchGroup = value; }

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
    inline SpotInstanceRequest& WithLaunchGroup(Aws::String&& value) { SetLaunchGroup(value); return *this;}

    /**
     * <p>The instance launch group. Launch groups are Spot Instances that launch
     * together and terminate together.</p>
     */
    inline SpotInstanceRequest& WithLaunchGroup(const char* value) { SetLaunchGroup(value); return *this;}

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
    inline void SetAvailabilityZoneGroup(const Aws::String& value) { m_availabilityZoneGroupHasBeenSet = true; m_availabilityZoneGroup = value; }

    /**
     * <p>The Availability Zone group. If you specify the same Availability Zone group
     * for all Spot Instance requests, all Spot Instances are launched in the same
     * Availability Zone.</p>
     */
    inline void SetAvailabilityZoneGroup(Aws::String&& value) { m_availabilityZoneGroupHasBeenSet = true; m_availabilityZoneGroup = value; }

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
    inline SpotInstanceRequest& WithAvailabilityZoneGroup(Aws::String&& value) { SetAvailabilityZoneGroup(value); return *this;}

    /**
     * <p>The Availability Zone group. If you specify the same Availability Zone group
     * for all Spot Instance requests, all Spot Instances are launched in the same
     * Availability Zone.</p>
     */
    inline SpotInstanceRequest& WithAvailabilityZoneGroup(const char* value) { SetAvailabilityZoneGroup(value); return *this;}

    /**
     * <p>Additional information for launching instances.</p>
     */
    inline const LaunchSpecification& GetLaunchSpecification() const{ return m_launchSpecification; }

    /**
     * <p>Additional information for launching instances.</p>
     */
    inline void SetLaunchSpecification(const LaunchSpecification& value) { m_launchSpecificationHasBeenSet = true; m_launchSpecification = value; }

    /**
     * <p>Additional information for launching instances.</p>
     */
    inline void SetLaunchSpecification(LaunchSpecification&& value) { m_launchSpecificationHasBeenSet = true; m_launchSpecification = value; }

    /**
     * <p>Additional information for launching instances.</p>
     */
    inline SpotInstanceRequest& WithLaunchSpecification(const LaunchSpecification& value) { SetLaunchSpecification(value); return *this;}

    /**
     * <p>Additional information for launching instances.</p>
     */
    inline SpotInstanceRequest& WithLaunchSpecification(LaunchSpecification&& value) { SetLaunchSpecification(value); return *this;}

    /**
     * <p>The instance ID, if an instance has been launched to fulfill the Spot
     * Instance request.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance ID, if an instance has been launched to fulfill the Spot
     * Instance request.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID, if an instance has been launched to fulfill the Spot
     * Instance request.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

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
    inline SpotInstanceRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID, if an instance has been launched to fulfill the Spot
     * Instance request.</p>
     */
    inline SpotInstanceRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>The date and time when the Spot Instance request was created, in UTC format
     * (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline double GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The date and time when the Spot Instance request was created, in UTC format
     * (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline void SetCreateTime(double value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The date and time when the Spot Instance request was created, in UTC format
     * (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline SpotInstanceRequest& WithCreateTime(double value) { SetCreateTime(value); return *this;}

    /**
     * <p>The product description associated with the Spot Instance.</p>
     */
    inline const RIProductDescription& GetProductDescription() const{ return m_productDescription; }

    /**
     * <p>The product description associated with the Spot Instance.</p>
     */
    inline void SetProductDescription(const RIProductDescription& value) { m_productDescriptionHasBeenSet = true; m_productDescription = value; }

    /**
     * <p>The product description associated with the Spot Instance.</p>
     */
    inline void SetProductDescription(RIProductDescription&& value) { m_productDescriptionHasBeenSet = true; m_productDescription = value; }

    /**
     * <p>The product description associated with the Spot Instance.</p>
     */
    inline SpotInstanceRequest& WithProductDescription(const RIProductDescription& value) { SetProductDescription(value); return *this;}

    /**
     * <p>The product description associated with the Spot Instance.</p>
     */
    inline SpotInstanceRequest& WithProductDescription(RIProductDescription&& value) { SetProductDescription(value); return *this;}

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline SpotInstanceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline SpotInstanceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline SpotInstanceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline SpotInstanceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The Availability Zone in which the bid is launched.</p>
     */
    inline const Aws::String& GetLaunchedAvailabilityZone() const{ return m_launchedAvailabilityZone; }

    /**
     * <p>The Availability Zone in which the bid is launched.</p>
     */
    inline void SetLaunchedAvailabilityZone(const Aws::String& value) { m_launchedAvailabilityZoneHasBeenSet = true; m_launchedAvailabilityZone = value; }

    /**
     * <p>The Availability Zone in which the bid is launched.</p>
     */
    inline void SetLaunchedAvailabilityZone(Aws::String&& value) { m_launchedAvailabilityZoneHasBeenSet = true; m_launchedAvailabilityZone = value; }

    /**
     * <p>The Availability Zone in which the bid is launched.</p>
     */
    inline void SetLaunchedAvailabilityZone(const char* value) { m_launchedAvailabilityZoneHasBeenSet = true; m_launchedAvailabilityZone.assign(value); }

    /**
     * <p>The Availability Zone in which the bid is launched.</p>
     */
    inline SpotInstanceRequest& WithLaunchedAvailabilityZone(const Aws::String& value) { SetLaunchedAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which the bid is launched.</p>
     */
    inline SpotInstanceRequest& WithLaunchedAvailabilityZone(Aws::String&& value) { SetLaunchedAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which the bid is launched.</p>
     */
    inline SpotInstanceRequest& WithLaunchedAvailabilityZone(const char* value) { SetLaunchedAvailabilityZone(value); return *this;}

  private:
    Aws::String m_spotInstanceRequestId;
    bool m_spotInstanceRequestIdHasBeenSet;
    Aws::String m_spotPrice;
    bool m_spotPriceHasBeenSet;
    SpotInstanceType m_type;
    bool m_typeHasBeenSet;
    SpotInstanceState m_state;
    bool m_stateHasBeenSet;
    SpotInstanceStateFault m_fault;
    bool m_faultHasBeenSet;
    SpotInstanceStatus m_status;
    bool m_statusHasBeenSet;
    double m_validFrom;
    bool m_validFromHasBeenSet;
    double m_validUntil;
    bool m_validUntilHasBeenSet;
    Aws::String m_launchGroup;
    bool m_launchGroupHasBeenSet;
    Aws::String m_availabilityZoneGroup;
    bool m_availabilityZoneGroupHasBeenSet;
    LaunchSpecification m_launchSpecification;
    bool m_launchSpecificationHasBeenSet;
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    double m_createTime;
    bool m_createTimeHasBeenSet;
    RIProductDescription m_productDescription;
    bool m_productDescriptionHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
    Aws::String m_launchedAvailabilityZone;
    bool m_launchedAvailabilityZoneHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
