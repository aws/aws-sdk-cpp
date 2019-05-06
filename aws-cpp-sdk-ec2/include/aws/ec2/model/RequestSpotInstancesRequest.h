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
#include <aws/ec2/model/RequestSpotLaunchSpecification.h>
#include <aws/ec2/model/SpotInstanceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/InstanceInterruptionBehavior.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for RequestSpotInstances.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RequestSpotInstancesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API RequestSpotInstancesRequest : public EC2Request
  {
  public:
    RequestSpotInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RequestSpotInstances"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The user-specified name for a logical grouping of requests.</p> <p>When you
     * specify an Availability Zone group in a Spot Instance request, all Spot
     * Instances in the request are launched in the same Availability Zone. Instance
     * proximity is maintained with this parameter, but the choice of Availability Zone
     * is not. The group applies only to requests for Spot Instances of the same
     * instance type. Any additional Spot Instance requests that are specified with the
     * same Availability Zone group name are launched in that same Availability Zone,
     * as long as at least one instance from the group is still active.</p> <p>If there
     * is no active instance running in the Availability Zone group that you specify
     * for a new Spot Instance request (all instances are terminated, the request is
     * expired, or the maximum price you specified falls below current Spot price),
     * then Amazon EC2 launches the instance in any Availability Zone where the
     * constraint can be met. Consequently, the subsequent set of Spot Instances could
     * be placed in a different zone from the original request, even if you specified
     * the same Availability Zone group.</p> <p>Default: Instances are launched in any
     * available Availability Zone.</p>
     */
    inline const Aws::String& GetAvailabilityZoneGroup() const{ return m_availabilityZoneGroup; }

    /**
     * <p>The user-specified name for a logical grouping of requests.</p> <p>When you
     * specify an Availability Zone group in a Spot Instance request, all Spot
     * Instances in the request are launched in the same Availability Zone. Instance
     * proximity is maintained with this parameter, but the choice of Availability Zone
     * is not. The group applies only to requests for Spot Instances of the same
     * instance type. Any additional Spot Instance requests that are specified with the
     * same Availability Zone group name are launched in that same Availability Zone,
     * as long as at least one instance from the group is still active.</p> <p>If there
     * is no active instance running in the Availability Zone group that you specify
     * for a new Spot Instance request (all instances are terminated, the request is
     * expired, or the maximum price you specified falls below current Spot price),
     * then Amazon EC2 launches the instance in any Availability Zone where the
     * constraint can be met. Consequently, the subsequent set of Spot Instances could
     * be placed in a different zone from the original request, even if you specified
     * the same Availability Zone group.</p> <p>Default: Instances are launched in any
     * available Availability Zone.</p>
     */
    inline bool AvailabilityZoneGroupHasBeenSet() const { return m_availabilityZoneGroupHasBeenSet; }

    /**
     * <p>The user-specified name for a logical grouping of requests.</p> <p>When you
     * specify an Availability Zone group in a Spot Instance request, all Spot
     * Instances in the request are launched in the same Availability Zone. Instance
     * proximity is maintained with this parameter, but the choice of Availability Zone
     * is not. The group applies only to requests for Spot Instances of the same
     * instance type. Any additional Spot Instance requests that are specified with the
     * same Availability Zone group name are launched in that same Availability Zone,
     * as long as at least one instance from the group is still active.</p> <p>If there
     * is no active instance running in the Availability Zone group that you specify
     * for a new Spot Instance request (all instances are terminated, the request is
     * expired, or the maximum price you specified falls below current Spot price),
     * then Amazon EC2 launches the instance in any Availability Zone where the
     * constraint can be met. Consequently, the subsequent set of Spot Instances could
     * be placed in a different zone from the original request, even if you specified
     * the same Availability Zone group.</p> <p>Default: Instances are launched in any
     * available Availability Zone.</p>
     */
    inline void SetAvailabilityZoneGroup(const Aws::String& value) { m_availabilityZoneGroupHasBeenSet = true; m_availabilityZoneGroup = value; }

    /**
     * <p>The user-specified name for a logical grouping of requests.</p> <p>When you
     * specify an Availability Zone group in a Spot Instance request, all Spot
     * Instances in the request are launched in the same Availability Zone. Instance
     * proximity is maintained with this parameter, but the choice of Availability Zone
     * is not. The group applies only to requests for Spot Instances of the same
     * instance type. Any additional Spot Instance requests that are specified with the
     * same Availability Zone group name are launched in that same Availability Zone,
     * as long as at least one instance from the group is still active.</p> <p>If there
     * is no active instance running in the Availability Zone group that you specify
     * for a new Spot Instance request (all instances are terminated, the request is
     * expired, or the maximum price you specified falls below current Spot price),
     * then Amazon EC2 launches the instance in any Availability Zone where the
     * constraint can be met. Consequently, the subsequent set of Spot Instances could
     * be placed in a different zone from the original request, even if you specified
     * the same Availability Zone group.</p> <p>Default: Instances are launched in any
     * available Availability Zone.</p>
     */
    inline void SetAvailabilityZoneGroup(Aws::String&& value) { m_availabilityZoneGroupHasBeenSet = true; m_availabilityZoneGroup = std::move(value); }

    /**
     * <p>The user-specified name for a logical grouping of requests.</p> <p>When you
     * specify an Availability Zone group in a Spot Instance request, all Spot
     * Instances in the request are launched in the same Availability Zone. Instance
     * proximity is maintained with this parameter, but the choice of Availability Zone
     * is not. The group applies only to requests for Spot Instances of the same
     * instance type. Any additional Spot Instance requests that are specified with the
     * same Availability Zone group name are launched in that same Availability Zone,
     * as long as at least one instance from the group is still active.</p> <p>If there
     * is no active instance running in the Availability Zone group that you specify
     * for a new Spot Instance request (all instances are terminated, the request is
     * expired, or the maximum price you specified falls below current Spot price),
     * then Amazon EC2 launches the instance in any Availability Zone where the
     * constraint can be met. Consequently, the subsequent set of Spot Instances could
     * be placed in a different zone from the original request, even if you specified
     * the same Availability Zone group.</p> <p>Default: Instances are launched in any
     * available Availability Zone.</p>
     */
    inline void SetAvailabilityZoneGroup(const char* value) { m_availabilityZoneGroupHasBeenSet = true; m_availabilityZoneGroup.assign(value); }

    /**
     * <p>The user-specified name for a logical grouping of requests.</p> <p>When you
     * specify an Availability Zone group in a Spot Instance request, all Spot
     * Instances in the request are launched in the same Availability Zone. Instance
     * proximity is maintained with this parameter, but the choice of Availability Zone
     * is not. The group applies only to requests for Spot Instances of the same
     * instance type. Any additional Spot Instance requests that are specified with the
     * same Availability Zone group name are launched in that same Availability Zone,
     * as long as at least one instance from the group is still active.</p> <p>If there
     * is no active instance running in the Availability Zone group that you specify
     * for a new Spot Instance request (all instances are terminated, the request is
     * expired, or the maximum price you specified falls below current Spot price),
     * then Amazon EC2 launches the instance in any Availability Zone where the
     * constraint can be met. Consequently, the subsequent set of Spot Instances could
     * be placed in a different zone from the original request, even if you specified
     * the same Availability Zone group.</p> <p>Default: Instances are launched in any
     * available Availability Zone.</p>
     */
    inline RequestSpotInstancesRequest& WithAvailabilityZoneGroup(const Aws::String& value) { SetAvailabilityZoneGroup(value); return *this;}

    /**
     * <p>The user-specified name for a logical grouping of requests.</p> <p>When you
     * specify an Availability Zone group in a Spot Instance request, all Spot
     * Instances in the request are launched in the same Availability Zone. Instance
     * proximity is maintained with this parameter, but the choice of Availability Zone
     * is not. The group applies only to requests for Spot Instances of the same
     * instance type. Any additional Spot Instance requests that are specified with the
     * same Availability Zone group name are launched in that same Availability Zone,
     * as long as at least one instance from the group is still active.</p> <p>If there
     * is no active instance running in the Availability Zone group that you specify
     * for a new Spot Instance request (all instances are terminated, the request is
     * expired, or the maximum price you specified falls below current Spot price),
     * then Amazon EC2 launches the instance in any Availability Zone where the
     * constraint can be met. Consequently, the subsequent set of Spot Instances could
     * be placed in a different zone from the original request, even if you specified
     * the same Availability Zone group.</p> <p>Default: Instances are launched in any
     * available Availability Zone.</p>
     */
    inline RequestSpotInstancesRequest& WithAvailabilityZoneGroup(Aws::String&& value) { SetAvailabilityZoneGroup(std::move(value)); return *this;}

    /**
     * <p>The user-specified name for a logical grouping of requests.</p> <p>When you
     * specify an Availability Zone group in a Spot Instance request, all Spot
     * Instances in the request are launched in the same Availability Zone. Instance
     * proximity is maintained with this parameter, but the choice of Availability Zone
     * is not. The group applies only to requests for Spot Instances of the same
     * instance type. Any additional Spot Instance requests that are specified with the
     * same Availability Zone group name are launched in that same Availability Zone,
     * as long as at least one instance from the group is still active.</p> <p>If there
     * is no active instance running in the Availability Zone group that you specify
     * for a new Spot Instance request (all instances are terminated, the request is
     * expired, or the maximum price you specified falls below current Spot price),
     * then Amazon EC2 launches the instance in any Availability Zone where the
     * constraint can be met. Consequently, the subsequent set of Spot Instances could
     * be placed in a different zone from the original request, even if you specified
     * the same Availability Zone group.</p> <p>Default: Instances are launched in any
     * available Availability Zone.</p>
     */
    inline RequestSpotInstancesRequest& WithAvailabilityZoneGroup(const char* value) { SetAvailabilityZoneGroup(value); return *this;}


    /**
     * <p>The required duration for the Spot Instances (also known as Spot blocks), in
     * minutes. This value must be a multiple of 60 (60, 120, 180, 240, 300, or
     * 360).</p> <p>The duration period starts as soon as your Spot Instance receives
     * its instance ID. At the end of the duration period, Amazon EC2 marks the Spot
     * Instance for termination and provides a Spot Instance termination notice, which
     * gives the instance a two-minute warning before it terminates.</p> <p>You can't
     * specify an Availability Zone group or a launch group if you specify a
     * duration.</p>
     */
    inline int GetBlockDurationMinutes() const{ return m_blockDurationMinutes; }

    /**
     * <p>The required duration for the Spot Instances (also known as Spot blocks), in
     * minutes. This value must be a multiple of 60 (60, 120, 180, 240, 300, or
     * 360).</p> <p>The duration period starts as soon as your Spot Instance receives
     * its instance ID. At the end of the duration period, Amazon EC2 marks the Spot
     * Instance for termination and provides a Spot Instance termination notice, which
     * gives the instance a two-minute warning before it terminates.</p> <p>You can't
     * specify an Availability Zone group or a launch group if you specify a
     * duration.</p>
     */
    inline bool BlockDurationMinutesHasBeenSet() const { return m_blockDurationMinutesHasBeenSet; }

    /**
     * <p>The required duration for the Spot Instances (also known as Spot blocks), in
     * minutes. This value must be a multiple of 60 (60, 120, 180, 240, 300, or
     * 360).</p> <p>The duration period starts as soon as your Spot Instance receives
     * its instance ID. At the end of the duration period, Amazon EC2 marks the Spot
     * Instance for termination and provides a Spot Instance termination notice, which
     * gives the instance a two-minute warning before it terminates.</p> <p>You can't
     * specify an Availability Zone group or a launch group if you specify a
     * duration.</p>
     */
    inline void SetBlockDurationMinutes(int value) { m_blockDurationMinutesHasBeenSet = true; m_blockDurationMinutes = value; }

    /**
     * <p>The required duration for the Spot Instances (also known as Spot blocks), in
     * minutes. This value must be a multiple of 60 (60, 120, 180, 240, 300, or
     * 360).</p> <p>The duration period starts as soon as your Spot Instance receives
     * its instance ID. At the end of the duration period, Amazon EC2 marks the Spot
     * Instance for termination and provides a Spot Instance termination notice, which
     * gives the instance a two-minute warning before it terminates.</p> <p>You can't
     * specify an Availability Zone group or a launch group if you specify a
     * duration.</p>
     */
    inline RequestSpotInstancesRequest& WithBlockDurationMinutes(int value) { SetBlockDurationMinutes(value); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline RequestSpotInstancesRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline RequestSpotInstancesRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a> in the <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline RequestSpotInstancesRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


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
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

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
    inline RequestSpotInstancesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The maximum number of Spot Instances to launch.</p> <p>Default: 1</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The maximum number of Spot Instances to launch.</p> <p>Default: 1</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>The maximum number of Spot Instances to launch.</p> <p>Default: 1</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The maximum number of Spot Instances to launch.</p> <p>Default: 1</p>
     */
    inline RequestSpotInstancesRequest& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p>The instance launch group. Launch groups are Spot Instances that launch
     * together and terminate together.</p> <p>Default: Instances are launched and
     * terminated individually</p>
     */
    inline const Aws::String& GetLaunchGroup() const{ return m_launchGroup; }

    /**
     * <p>The instance launch group. Launch groups are Spot Instances that launch
     * together and terminate together.</p> <p>Default: Instances are launched and
     * terminated individually</p>
     */
    inline bool LaunchGroupHasBeenSet() const { return m_launchGroupHasBeenSet; }

    /**
     * <p>The instance launch group. Launch groups are Spot Instances that launch
     * together and terminate together.</p> <p>Default: Instances are launched and
     * terminated individually</p>
     */
    inline void SetLaunchGroup(const Aws::String& value) { m_launchGroupHasBeenSet = true; m_launchGroup = value; }

    /**
     * <p>The instance launch group. Launch groups are Spot Instances that launch
     * together and terminate together.</p> <p>Default: Instances are launched and
     * terminated individually</p>
     */
    inline void SetLaunchGroup(Aws::String&& value) { m_launchGroupHasBeenSet = true; m_launchGroup = std::move(value); }

    /**
     * <p>The instance launch group. Launch groups are Spot Instances that launch
     * together and terminate together.</p> <p>Default: Instances are launched and
     * terminated individually</p>
     */
    inline void SetLaunchGroup(const char* value) { m_launchGroupHasBeenSet = true; m_launchGroup.assign(value); }

    /**
     * <p>The instance launch group. Launch groups are Spot Instances that launch
     * together and terminate together.</p> <p>Default: Instances are launched and
     * terminated individually</p>
     */
    inline RequestSpotInstancesRequest& WithLaunchGroup(const Aws::String& value) { SetLaunchGroup(value); return *this;}

    /**
     * <p>The instance launch group. Launch groups are Spot Instances that launch
     * together and terminate together.</p> <p>Default: Instances are launched and
     * terminated individually</p>
     */
    inline RequestSpotInstancesRequest& WithLaunchGroup(Aws::String&& value) { SetLaunchGroup(std::move(value)); return *this;}

    /**
     * <p>The instance launch group. Launch groups are Spot Instances that launch
     * together and terminate together.</p> <p>Default: Instances are launched and
     * terminated individually</p>
     */
    inline RequestSpotInstancesRequest& WithLaunchGroup(const char* value) { SetLaunchGroup(value); return *this;}


    /**
     * <p>The launch specification.</p>
     */
    inline const RequestSpotLaunchSpecification& GetLaunchSpecification() const{ return m_launchSpecification; }

    /**
     * <p>The launch specification.</p>
     */
    inline bool LaunchSpecificationHasBeenSet() const { return m_launchSpecificationHasBeenSet; }

    /**
     * <p>The launch specification.</p>
     */
    inline void SetLaunchSpecification(const RequestSpotLaunchSpecification& value) { m_launchSpecificationHasBeenSet = true; m_launchSpecification = value; }

    /**
     * <p>The launch specification.</p>
     */
    inline void SetLaunchSpecification(RequestSpotLaunchSpecification&& value) { m_launchSpecificationHasBeenSet = true; m_launchSpecification = std::move(value); }

    /**
     * <p>The launch specification.</p>
     */
    inline RequestSpotInstancesRequest& WithLaunchSpecification(const RequestSpotLaunchSpecification& value) { SetLaunchSpecification(value); return *this;}

    /**
     * <p>The launch specification.</p>
     */
    inline RequestSpotInstancesRequest& WithLaunchSpecification(RequestSpotLaunchSpecification&& value) { SetLaunchSpecification(std::move(value)); return *this;}


    /**
     * <p>The maximum price per hour that you are willing to pay for a Spot Instance.
     * The default is the On-Demand price.</p>
     */
    inline const Aws::String& GetSpotPrice() const{ return m_spotPrice; }

    /**
     * <p>The maximum price per hour that you are willing to pay for a Spot Instance.
     * The default is the On-Demand price.</p>
     */
    inline bool SpotPriceHasBeenSet() const { return m_spotPriceHasBeenSet; }

    /**
     * <p>The maximum price per hour that you are willing to pay for a Spot Instance.
     * The default is the On-Demand price.</p>
     */
    inline void SetSpotPrice(const Aws::String& value) { m_spotPriceHasBeenSet = true; m_spotPrice = value; }

    /**
     * <p>The maximum price per hour that you are willing to pay for a Spot Instance.
     * The default is the On-Demand price.</p>
     */
    inline void SetSpotPrice(Aws::String&& value) { m_spotPriceHasBeenSet = true; m_spotPrice = std::move(value); }

    /**
     * <p>The maximum price per hour that you are willing to pay for a Spot Instance.
     * The default is the On-Demand price.</p>
     */
    inline void SetSpotPrice(const char* value) { m_spotPriceHasBeenSet = true; m_spotPrice.assign(value); }

    /**
     * <p>The maximum price per hour that you are willing to pay for a Spot Instance.
     * The default is the On-Demand price.</p>
     */
    inline RequestSpotInstancesRequest& WithSpotPrice(const Aws::String& value) { SetSpotPrice(value); return *this;}

    /**
     * <p>The maximum price per hour that you are willing to pay for a Spot Instance.
     * The default is the On-Demand price.</p>
     */
    inline RequestSpotInstancesRequest& WithSpotPrice(Aws::String&& value) { SetSpotPrice(std::move(value)); return *this;}

    /**
     * <p>The maximum price per hour that you are willing to pay for a Spot Instance.
     * The default is the On-Demand price.</p>
     */
    inline RequestSpotInstancesRequest& WithSpotPrice(const char* value) { SetSpotPrice(value); return *this;}


    /**
     * <p>The Spot Instance request type.</p> <p>Default: <code>one-time</code> </p>
     */
    inline const SpotInstanceType& GetType() const{ return m_type; }

    /**
     * <p>The Spot Instance request type.</p> <p>Default: <code>one-time</code> </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The Spot Instance request type.</p> <p>Default: <code>one-time</code> </p>
     */
    inline void SetType(const SpotInstanceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The Spot Instance request type.</p> <p>Default: <code>one-time</code> </p>
     */
    inline void SetType(SpotInstanceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The Spot Instance request type.</p> <p>Default: <code>one-time</code> </p>
     */
    inline RequestSpotInstancesRequest& WithType(const SpotInstanceType& value) { SetType(value); return *this;}

    /**
     * <p>The Spot Instance request type.</p> <p>Default: <code>one-time</code> </p>
     */
    inline RequestSpotInstancesRequest& WithType(SpotInstanceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The start date of the request. If this is a one-time request, the request
     * becomes active at this date and time and remains active until all instances
     * launch, the request expires, or the request is canceled. If the request is
     * persistent, the request becomes active at this date and time and remains active
     * until it expires or is canceled.</p>
     */
    inline const Aws::Utils::DateTime& GetValidFrom() const{ return m_validFrom; }

    /**
     * <p>The start date of the request. If this is a one-time request, the request
     * becomes active at this date and time and remains active until all instances
     * launch, the request expires, or the request is canceled. If the request is
     * persistent, the request becomes active at this date and time and remains active
     * until it expires or is canceled.</p>
     */
    inline bool ValidFromHasBeenSet() const { return m_validFromHasBeenSet; }

    /**
     * <p>The start date of the request. If this is a one-time request, the request
     * becomes active at this date and time and remains active until all instances
     * launch, the request expires, or the request is canceled. If the request is
     * persistent, the request becomes active at this date and time and remains active
     * until it expires or is canceled.</p>
     */
    inline void SetValidFrom(const Aws::Utils::DateTime& value) { m_validFromHasBeenSet = true; m_validFrom = value; }

    /**
     * <p>The start date of the request. If this is a one-time request, the request
     * becomes active at this date and time and remains active until all instances
     * launch, the request expires, or the request is canceled. If the request is
     * persistent, the request becomes active at this date and time and remains active
     * until it expires or is canceled.</p>
     */
    inline void SetValidFrom(Aws::Utils::DateTime&& value) { m_validFromHasBeenSet = true; m_validFrom = std::move(value); }

    /**
     * <p>The start date of the request. If this is a one-time request, the request
     * becomes active at this date and time and remains active until all instances
     * launch, the request expires, or the request is canceled. If the request is
     * persistent, the request becomes active at this date and time and remains active
     * until it expires or is canceled.</p>
     */
    inline RequestSpotInstancesRequest& WithValidFrom(const Aws::Utils::DateTime& value) { SetValidFrom(value); return *this;}

    /**
     * <p>The start date of the request. If this is a one-time request, the request
     * becomes active at this date and time and remains active until all instances
     * launch, the request expires, or the request is canceled. If the request is
     * persistent, the request becomes active at this date and time and remains active
     * until it expires or is canceled.</p>
     */
    inline RequestSpotInstancesRequest& WithValidFrom(Aws::Utils::DateTime&& value) { SetValidFrom(std::move(value)); return *this;}


    /**
     * <p>The end date of the request. If this is a one-time request, the request
     * remains active until all instances launch, the request is canceled, or this date
     * is reached. If the request is persistent, it remains active until it is canceled
     * or this date is reached. The default end date is 7 days from the current
     * date.</p>
     */
    inline const Aws::Utils::DateTime& GetValidUntil() const{ return m_validUntil; }

    /**
     * <p>The end date of the request. If this is a one-time request, the request
     * remains active until all instances launch, the request is canceled, or this date
     * is reached. If the request is persistent, it remains active until it is canceled
     * or this date is reached. The default end date is 7 days from the current
     * date.</p>
     */
    inline bool ValidUntilHasBeenSet() const { return m_validUntilHasBeenSet; }

    /**
     * <p>The end date of the request. If this is a one-time request, the request
     * remains active until all instances launch, the request is canceled, or this date
     * is reached. If the request is persistent, it remains active until it is canceled
     * or this date is reached. The default end date is 7 days from the current
     * date.</p>
     */
    inline void SetValidUntil(const Aws::Utils::DateTime& value) { m_validUntilHasBeenSet = true; m_validUntil = value; }

    /**
     * <p>The end date of the request. If this is a one-time request, the request
     * remains active until all instances launch, the request is canceled, or this date
     * is reached. If the request is persistent, it remains active until it is canceled
     * or this date is reached. The default end date is 7 days from the current
     * date.</p>
     */
    inline void SetValidUntil(Aws::Utils::DateTime&& value) { m_validUntilHasBeenSet = true; m_validUntil = std::move(value); }

    /**
     * <p>The end date of the request. If this is a one-time request, the request
     * remains active until all instances launch, the request is canceled, or this date
     * is reached. If the request is persistent, it remains active until it is canceled
     * or this date is reached. The default end date is 7 days from the current
     * date.</p>
     */
    inline RequestSpotInstancesRequest& WithValidUntil(const Aws::Utils::DateTime& value) { SetValidUntil(value); return *this;}

    /**
     * <p>The end date of the request. If this is a one-time request, the request
     * remains active until all instances launch, the request is canceled, or this date
     * is reached. If the request is persistent, it remains active until it is canceled
     * or this date is reached. The default end date is 7 days from the current
     * date.</p>
     */
    inline RequestSpotInstancesRequest& WithValidUntil(Aws::Utils::DateTime&& value) { SetValidUntil(std::move(value)); return *this;}


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
    inline RequestSpotInstancesRequest& WithInstanceInterruptionBehavior(const InstanceInterruptionBehavior& value) { SetInstanceInterruptionBehavior(value); return *this;}

    /**
     * <p>The behavior when a Spot Instance is interrupted. The default is
     * <code>terminate</code>.</p>
     */
    inline RequestSpotInstancesRequest& WithInstanceInterruptionBehavior(InstanceInterruptionBehavior&& value) { SetInstanceInterruptionBehavior(std::move(value)); return *this;}

  private:

    Aws::String m_availabilityZoneGroup;
    bool m_availabilityZoneGroupHasBeenSet;

    int m_blockDurationMinutes;
    bool m_blockDurationMinutesHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet;

    Aws::String m_launchGroup;
    bool m_launchGroupHasBeenSet;

    RequestSpotLaunchSpecification m_launchSpecification;
    bool m_launchSpecificationHasBeenSet;

    Aws::String m_spotPrice;
    bool m_spotPriceHasBeenSet;

    SpotInstanceType m_type;
    bool m_typeHasBeenSet;

    Aws::Utils::DateTime m_validFrom;
    bool m_validFromHasBeenSet;

    Aws::Utils::DateTime m_validUntil;
    bool m_validUntilHasBeenSet;

    InstanceInterruptionBehavior m_instanceInterruptionBehavior;
    bool m_instanceInterruptionBehaviorHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
