/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/SpotInstanceType.h>
#include <aws/ec2/model/RequestSpotLaunchSpecification.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /*
    <p>Contains the parameters for RequestSpotInstances.</p>
  */
  class AWS_EC2_API RequestSpotInstancesRequest : public EC2Request
  {
  public:
    RequestSpotInstancesRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
    */
    inline bool GetDryRun() const{ return m_dryRun; }

    /*
     <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
    */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /*
     <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
    */
    inline RequestSpotInstancesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /*
     <p>The maximum hourly price (bid) for any Spot Instance launched to fulfill the request.</p>
    */
    inline const Aws::String& GetSpotPrice() const{ return m_spotPrice; }

    /*
     <p>The maximum hourly price (bid) for any Spot Instance launched to fulfill the request.</p>
    */
    inline void SetSpotPrice(const Aws::String& value) { m_spotPriceHasBeenSet = true; m_spotPrice = value; }

    /*
     <p>The maximum hourly price (bid) for any Spot Instance launched to fulfill the request.</p>
    */
    inline void SetSpotPrice(Aws::String&& value) { m_spotPriceHasBeenSet = true; m_spotPrice = value; }

    /*
     <p>The maximum hourly price (bid) for any Spot Instance launched to fulfill the request.</p>
    */
    inline void SetSpotPrice(const char* value) { m_spotPriceHasBeenSet = true; m_spotPrice.assign(value); }

    /*
     <p>The maximum hourly price (bid) for any Spot Instance launched to fulfill the request.</p>
    */
    inline RequestSpotInstancesRequest& WithSpotPrice(const Aws::String& value) { SetSpotPrice(value); return *this;}

    /*
     <p>The maximum hourly price (bid) for any Spot Instance launched to fulfill the request.</p>
    */
    inline RequestSpotInstancesRequest& WithSpotPrice(Aws::String&& value) { SetSpotPrice(value); return *this;}

    /*
     <p>The maximum hourly price (bid) for any Spot Instance launched to fulfill the request.</p>
    */
    inline RequestSpotInstancesRequest& WithSpotPrice(const char* value) { SetSpotPrice(value); return *this;}

    /*
     <p>Unique, case-sensitive identifier that you provide to ensure the idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
    */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /*
     <p>Unique, case-sensitive identifier that you provide to ensure the idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
    */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /*
     <p>Unique, case-sensitive identifier that you provide to ensure the idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
    */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /*
     <p>Unique, case-sensitive identifier that you provide to ensure the idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
    */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /*
     <p>Unique, case-sensitive identifier that you provide to ensure the idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
    */
    inline RequestSpotInstancesRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /*
     <p>Unique, case-sensitive identifier that you provide to ensure the idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
    */
    inline RequestSpotInstancesRequest& WithClientToken(Aws::String&& value) { SetClientToken(value); return *this;}

    /*
     <p>Unique, case-sensitive identifier that you provide to ensure the idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
    */
    inline RequestSpotInstancesRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

    /*
     <p>The maximum number of Spot Instances to launch.</p> <p>Default: 1</p>
    */
    inline long GetInstanceCount() const{ return m_instanceCount; }

    /*
     <p>The maximum number of Spot Instances to launch.</p> <p>Default: 1</p>
    */
    inline void SetInstanceCount(long value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /*
     <p>The maximum number of Spot Instances to launch.</p> <p>Default: 1</p>
    */
    inline RequestSpotInstancesRequest& WithInstanceCount(long value) { SetInstanceCount(value); return *this;}

    /*
     <p>The Spot Instance request type.</p> <p>Default: <code>one-time</code></p>
    */
    inline const SpotInstanceType& GetType() const{ return m_type; }

    /*
     <p>The Spot Instance request type.</p> <p>Default: <code>one-time</code></p>
    */
    inline void SetType(const SpotInstanceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /*
     <p>The Spot Instance request type.</p> <p>Default: <code>one-time</code></p>
    */
    inline void SetType(SpotInstanceType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /*
     <p>The Spot Instance request type.</p> <p>Default: <code>one-time</code></p>
    */
    inline RequestSpotInstancesRequest& WithType(const SpotInstanceType& value) { SetType(value); return *this;}

    /*
     <p>The Spot Instance request type.</p> <p>Default: <code>one-time</code></p>
    */
    inline RequestSpotInstancesRequest& WithType(SpotInstanceType&& value) { SetType(value); return *this;}

    /*
     <p>The start date of the request. If this is a one-time request, the request becomes active at this date and time and remains active until all instances launch, the request expires, or the request is canceled. If the request is persistent, the request becomes active at this date and time and remains active until it expires or is canceled.</p> <p>Default: The request is effective indefinitely.</p>
    */
    inline double GetValidFrom() const{ return m_validFrom; }

    /*
     <p>The start date of the request. If this is a one-time request, the request becomes active at this date and time and remains active until all instances launch, the request expires, or the request is canceled. If the request is persistent, the request becomes active at this date and time and remains active until it expires or is canceled.</p> <p>Default: The request is effective indefinitely.</p>
    */
    inline void SetValidFrom(double value) { m_validFromHasBeenSet = true; m_validFrom = value; }

    /*
     <p>The start date of the request. If this is a one-time request, the request becomes active at this date and time and remains active until all instances launch, the request expires, or the request is canceled. If the request is persistent, the request becomes active at this date and time and remains active until it expires or is canceled.</p> <p>Default: The request is effective indefinitely.</p>
    */
    inline RequestSpotInstancesRequest& WithValidFrom(double value) { SetValidFrom(value); return *this;}

    /*
     <p>The end date of the request. If this is a one-time request, the request remains active until all instances launch, the request is canceled, or this date is reached. If the request is persistent, it remains active until it is canceled or this date and time is reached.</p> <p>Default: The request is effective indefinitely.</p>
    */
    inline double GetValidUntil() const{ return m_validUntil; }

    /*
     <p>The end date of the request. If this is a one-time request, the request remains active until all instances launch, the request is canceled, or this date is reached. If the request is persistent, it remains active until it is canceled or this date and time is reached.</p> <p>Default: The request is effective indefinitely.</p>
    */
    inline void SetValidUntil(double value) { m_validUntilHasBeenSet = true; m_validUntil = value; }

    /*
     <p>The end date of the request. If this is a one-time request, the request remains active until all instances launch, the request is canceled, or this date is reached. If the request is persistent, it remains active until it is canceled or this date and time is reached.</p> <p>Default: The request is effective indefinitely.</p>
    */
    inline RequestSpotInstancesRequest& WithValidUntil(double value) { SetValidUntil(value); return *this;}

    /*
     <p>The instance launch group. Launch groups are Spot Instances that launch together and terminate together.</p> <p>Default: Instances are launched and terminated individually</p>
    */
    inline const Aws::String& GetLaunchGroup() const{ return m_launchGroup; }

    /*
     <p>The instance launch group. Launch groups are Spot Instances that launch together and terminate together.</p> <p>Default: Instances are launched and terminated individually</p>
    */
    inline void SetLaunchGroup(const Aws::String& value) { m_launchGroupHasBeenSet = true; m_launchGroup = value; }

    /*
     <p>The instance launch group. Launch groups are Spot Instances that launch together and terminate together.</p> <p>Default: Instances are launched and terminated individually</p>
    */
    inline void SetLaunchGroup(Aws::String&& value) { m_launchGroupHasBeenSet = true; m_launchGroup = value; }

    /*
     <p>The instance launch group. Launch groups are Spot Instances that launch together and terminate together.</p> <p>Default: Instances are launched and terminated individually</p>
    */
    inline void SetLaunchGroup(const char* value) { m_launchGroupHasBeenSet = true; m_launchGroup.assign(value); }

    /*
     <p>The instance launch group. Launch groups are Spot Instances that launch together and terminate together.</p> <p>Default: Instances are launched and terminated individually</p>
    */
    inline RequestSpotInstancesRequest& WithLaunchGroup(const Aws::String& value) { SetLaunchGroup(value); return *this;}

    /*
     <p>The instance launch group. Launch groups are Spot Instances that launch together and terminate together.</p> <p>Default: Instances are launched and terminated individually</p>
    */
    inline RequestSpotInstancesRequest& WithLaunchGroup(Aws::String&& value) { SetLaunchGroup(value); return *this;}

    /*
     <p>The instance launch group. Launch groups are Spot Instances that launch together and terminate together.</p> <p>Default: Instances are launched and terminated individually</p>
    */
    inline RequestSpotInstancesRequest& WithLaunchGroup(const char* value) { SetLaunchGroup(value); return *this;}

    /*
     <p>The user-specified name for a logical grouping of bids.</p> <p>When you specify an Availability Zone group in a Spot Instance request, all Spot Instances in the request are launched in the same Availability Zone. Instance proximity is maintained with this parameter, but the choice of Availability Zone is not. The group applies only to bids for Spot Instances of the same instance type. Any additional Spot Instance requests that are specified with the same Availability Zone group name are launched in that same Availability Zone, as long as at least one instance from the group is still active.</p> <p>If there is no active instance running in the Availability Zone group that you specify for a new Spot Instance request (all instances are terminated, the bid is expired, or the bid falls below current market), then Amazon EC2 launches the instance in any Availability Zone where the constraint can be met. Consequently, the subsequent set of Spot Instances could be placed in a different zone from the original request, even if you specified the same Availability Zone group.</p> <p>Default: Instances are launched in any available Availability Zone.</p>
    */
    inline const Aws::String& GetAvailabilityZoneGroup() const{ return m_availabilityZoneGroup; }

    /*
     <p>The user-specified name for a logical grouping of bids.</p> <p>When you specify an Availability Zone group in a Spot Instance request, all Spot Instances in the request are launched in the same Availability Zone. Instance proximity is maintained with this parameter, but the choice of Availability Zone is not. The group applies only to bids for Spot Instances of the same instance type. Any additional Spot Instance requests that are specified with the same Availability Zone group name are launched in that same Availability Zone, as long as at least one instance from the group is still active.</p> <p>If there is no active instance running in the Availability Zone group that you specify for a new Spot Instance request (all instances are terminated, the bid is expired, or the bid falls below current market), then Amazon EC2 launches the instance in any Availability Zone where the constraint can be met. Consequently, the subsequent set of Spot Instances could be placed in a different zone from the original request, even if you specified the same Availability Zone group.</p> <p>Default: Instances are launched in any available Availability Zone.</p>
    */
    inline void SetAvailabilityZoneGroup(const Aws::String& value) { m_availabilityZoneGroupHasBeenSet = true; m_availabilityZoneGroup = value; }

    /*
     <p>The user-specified name for a logical grouping of bids.</p> <p>When you specify an Availability Zone group in a Spot Instance request, all Spot Instances in the request are launched in the same Availability Zone. Instance proximity is maintained with this parameter, but the choice of Availability Zone is not. The group applies only to bids for Spot Instances of the same instance type. Any additional Spot Instance requests that are specified with the same Availability Zone group name are launched in that same Availability Zone, as long as at least one instance from the group is still active.</p> <p>If there is no active instance running in the Availability Zone group that you specify for a new Spot Instance request (all instances are terminated, the bid is expired, or the bid falls below current market), then Amazon EC2 launches the instance in any Availability Zone where the constraint can be met. Consequently, the subsequent set of Spot Instances could be placed in a different zone from the original request, even if you specified the same Availability Zone group.</p> <p>Default: Instances are launched in any available Availability Zone.</p>
    */
    inline void SetAvailabilityZoneGroup(Aws::String&& value) { m_availabilityZoneGroupHasBeenSet = true; m_availabilityZoneGroup = value; }

    /*
     <p>The user-specified name for a logical grouping of bids.</p> <p>When you specify an Availability Zone group in a Spot Instance request, all Spot Instances in the request are launched in the same Availability Zone. Instance proximity is maintained with this parameter, but the choice of Availability Zone is not. The group applies only to bids for Spot Instances of the same instance type. Any additional Spot Instance requests that are specified with the same Availability Zone group name are launched in that same Availability Zone, as long as at least one instance from the group is still active.</p> <p>If there is no active instance running in the Availability Zone group that you specify for a new Spot Instance request (all instances are terminated, the bid is expired, or the bid falls below current market), then Amazon EC2 launches the instance in any Availability Zone where the constraint can be met. Consequently, the subsequent set of Spot Instances could be placed in a different zone from the original request, even if you specified the same Availability Zone group.</p> <p>Default: Instances are launched in any available Availability Zone.</p>
    */
    inline void SetAvailabilityZoneGroup(const char* value) { m_availabilityZoneGroupHasBeenSet = true; m_availabilityZoneGroup.assign(value); }

    /*
     <p>The user-specified name for a logical grouping of bids.</p> <p>When you specify an Availability Zone group in a Spot Instance request, all Spot Instances in the request are launched in the same Availability Zone. Instance proximity is maintained with this parameter, but the choice of Availability Zone is not. The group applies only to bids for Spot Instances of the same instance type. Any additional Spot Instance requests that are specified with the same Availability Zone group name are launched in that same Availability Zone, as long as at least one instance from the group is still active.</p> <p>If there is no active instance running in the Availability Zone group that you specify for a new Spot Instance request (all instances are terminated, the bid is expired, or the bid falls below current market), then Amazon EC2 launches the instance in any Availability Zone where the constraint can be met. Consequently, the subsequent set of Spot Instances could be placed in a different zone from the original request, even if you specified the same Availability Zone group.</p> <p>Default: Instances are launched in any available Availability Zone.</p>
    */
    inline RequestSpotInstancesRequest& WithAvailabilityZoneGroup(const Aws::String& value) { SetAvailabilityZoneGroup(value); return *this;}

    /*
     <p>The user-specified name for a logical grouping of bids.</p> <p>When you specify an Availability Zone group in a Spot Instance request, all Spot Instances in the request are launched in the same Availability Zone. Instance proximity is maintained with this parameter, but the choice of Availability Zone is not. The group applies only to bids for Spot Instances of the same instance type. Any additional Spot Instance requests that are specified with the same Availability Zone group name are launched in that same Availability Zone, as long as at least one instance from the group is still active.</p> <p>If there is no active instance running in the Availability Zone group that you specify for a new Spot Instance request (all instances are terminated, the bid is expired, or the bid falls below current market), then Amazon EC2 launches the instance in any Availability Zone where the constraint can be met. Consequently, the subsequent set of Spot Instances could be placed in a different zone from the original request, even if you specified the same Availability Zone group.</p> <p>Default: Instances are launched in any available Availability Zone.</p>
    */
    inline RequestSpotInstancesRequest& WithAvailabilityZoneGroup(Aws::String&& value) { SetAvailabilityZoneGroup(value); return *this;}

    /*
     <p>The user-specified name for a logical grouping of bids.</p> <p>When you specify an Availability Zone group in a Spot Instance request, all Spot Instances in the request are launched in the same Availability Zone. Instance proximity is maintained with this parameter, but the choice of Availability Zone is not. The group applies only to bids for Spot Instances of the same instance type. Any additional Spot Instance requests that are specified with the same Availability Zone group name are launched in that same Availability Zone, as long as at least one instance from the group is still active.</p> <p>If there is no active instance running in the Availability Zone group that you specify for a new Spot Instance request (all instances are terminated, the bid is expired, or the bid falls below current market), then Amazon EC2 launches the instance in any Availability Zone where the constraint can be met. Consequently, the subsequent set of Spot Instances could be placed in a different zone from the original request, even if you specified the same Availability Zone group.</p> <p>Default: Instances are launched in any available Availability Zone.</p>
    */
    inline RequestSpotInstancesRequest& WithAvailabilityZoneGroup(const char* value) { SetAvailabilityZoneGroup(value); return *this;}

    
    inline const RequestSpotLaunchSpecification& GetLaunchSpecification() const{ return m_launchSpecification; }

    
    inline void SetLaunchSpecification(const RequestSpotLaunchSpecification& value) { m_launchSpecificationHasBeenSet = true; m_launchSpecification = value; }

    
    inline void SetLaunchSpecification(RequestSpotLaunchSpecification&& value) { m_launchSpecificationHasBeenSet = true; m_launchSpecification = value; }

    
    inline RequestSpotInstancesRequest& WithLaunchSpecification(const RequestSpotLaunchSpecification& value) { SetLaunchSpecification(value); return *this;}

    
    inline RequestSpotInstancesRequest& WithLaunchSpecification(RequestSpotLaunchSpecification&& value) { SetLaunchSpecification(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_spotPrice;
    bool m_spotPriceHasBeenSet;
    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
    long m_instanceCount;
    bool m_instanceCountHasBeenSet;
    SpotInstanceType m_type;
    bool m_typeHasBeenSet;
    double m_validFrom;
    bool m_validFromHasBeenSet;
    double m_validUntil;
    bool m_validUntilHasBeenSet;
    Aws::String m_launchGroup;
    bool m_launchGroupHasBeenSet;
    Aws::String m_availabilityZoneGroup;
    bool m_availabilityZoneGroupHasBeenSet;
    RequestSpotLaunchSpecification m_launchSpecification;
    bool m_launchSpecificationHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
