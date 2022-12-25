/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/RequestSpotLaunchSpecification.h>
#include <aws/ec2/model/SpotInstanceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/InstanceInterruptionBehavior.h>
#include <aws/ec2/model/TagSpecification.h>
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
  class RequestSpotInstancesRequest : public EC2Request
  {
  public:
    AWS_EC2_API RequestSpotInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RequestSpotInstances"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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
    inline RequestSpotInstancesRequest& WithSpotPrice(const Aws::String& value) { SetSpotPrice(value); return *this;}

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. We do not recommend using this parameter because it can lead to
     * increased interruptions. If you do not specify this parameter, you will pay the
     * current Spot price.</p>  <p>If you specify a maximum price, your
     * instances will be interrupted more frequently than if you do not specify this
     * parameter.</p> 
     */
    inline RequestSpotInstancesRequest& WithSpotPrice(Aws::String&& value) { SetSpotPrice(std::move(value)); return *this;}

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. We do not recommend using this parameter because it can lead to
     * increased interruptions. If you do not specify this parameter, you will pay the
     * current Spot price.</p>  <p>If you specify a maximum price, your
     * instances will be interrupted more frequently than if you do not specify this
     * parameter.</p> 
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
     * until it expires or is canceled.</p> <p>The specified start date and time cannot
     * be equal to the current date and time. You must specify a start date and time
     * that occurs after the current date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetValidFrom() const{ return m_validFrom; }

    /**
     * <p>The start date of the request. If this is a one-time request, the request
     * becomes active at this date and time and remains active until all instances
     * launch, the request expires, or the request is canceled. If the request is
     * persistent, the request becomes active at this date and time and remains active
     * until it expires or is canceled.</p> <p>The specified start date and time cannot
     * be equal to the current date and time. You must specify a start date and time
     * that occurs after the current date and time.</p>
     */
    inline bool ValidFromHasBeenSet() const { return m_validFromHasBeenSet; }

    /**
     * <p>The start date of the request. If this is a one-time request, the request
     * becomes active at this date and time and remains active until all instances
     * launch, the request expires, or the request is canceled. If the request is
     * persistent, the request becomes active at this date and time and remains active
     * until it expires or is canceled.</p> <p>The specified start date and time cannot
     * be equal to the current date and time. You must specify a start date and time
     * that occurs after the current date and time.</p>
     */
    inline void SetValidFrom(const Aws::Utils::DateTime& value) { m_validFromHasBeenSet = true; m_validFrom = value; }

    /**
     * <p>The start date of the request. If this is a one-time request, the request
     * becomes active at this date and time and remains active until all instances
     * launch, the request expires, or the request is canceled. If the request is
     * persistent, the request becomes active at this date and time and remains active
     * until it expires or is canceled.</p> <p>The specified start date and time cannot
     * be equal to the current date and time. You must specify a start date and time
     * that occurs after the current date and time.</p>
     */
    inline void SetValidFrom(Aws::Utils::DateTime&& value) { m_validFromHasBeenSet = true; m_validFrom = std::move(value); }

    /**
     * <p>The start date of the request. If this is a one-time request, the request
     * becomes active at this date and time and remains active until all instances
     * launch, the request expires, or the request is canceled. If the request is
     * persistent, the request becomes active at this date and time and remains active
     * until it expires or is canceled.</p> <p>The specified start date and time cannot
     * be equal to the current date and time. You must specify a start date and time
     * that occurs after the current date and time.</p>
     */
    inline RequestSpotInstancesRequest& WithValidFrom(const Aws::Utils::DateTime& value) { SetValidFrom(value); return *this;}

    /**
     * <p>The start date of the request. If this is a one-time request, the request
     * becomes active at this date and time and remains active until all instances
     * launch, the request expires, or the request is canceled. If the request is
     * persistent, the request becomes active at this date and time and remains active
     * until it expires or is canceled.</p> <p>The specified start date and time cannot
     * be equal to the current date and time. You must specify a start date and time
     * that occurs after the current date and time.</p>
     */
    inline RequestSpotInstancesRequest& WithValidFrom(Aws::Utils::DateTime&& value) { SetValidFrom(std::move(value)); return *this;}


    /**
     * <p>The end date of the request, in UTC format
     * (<i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p> <ul> <li>
     * <p>For a persistent request, the request remains active until the
     * <code>ValidUntil</code> date and time is reached. Otherwise, the request remains
     * active until you cancel it. </p> </li> <li> <p>For a one-time request, the
     * request remains active until all instances launch, the request is canceled, or
     * the <code>ValidUntil</code> date and time is reached. By default, the request is
     * valid for 7 days from the date the request was created.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetValidUntil() const{ return m_validUntil; }

    /**
     * <p>The end date of the request, in UTC format
     * (<i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p> <ul> <li>
     * <p>For a persistent request, the request remains active until the
     * <code>ValidUntil</code> date and time is reached. Otherwise, the request remains
     * active until you cancel it. </p> </li> <li> <p>For a one-time request, the
     * request remains active until all instances launch, the request is canceled, or
     * the <code>ValidUntil</code> date and time is reached. By default, the request is
     * valid for 7 days from the date the request was created.</p> </li> </ul>
     */
    inline bool ValidUntilHasBeenSet() const { return m_validUntilHasBeenSet; }

    /**
     * <p>The end date of the request, in UTC format
     * (<i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p> <ul> <li>
     * <p>For a persistent request, the request remains active until the
     * <code>ValidUntil</code> date and time is reached. Otherwise, the request remains
     * active until you cancel it. </p> </li> <li> <p>For a one-time request, the
     * request remains active until all instances launch, the request is canceled, or
     * the <code>ValidUntil</code> date and time is reached. By default, the request is
     * valid for 7 days from the date the request was created.</p> </li> </ul>
     */
    inline void SetValidUntil(const Aws::Utils::DateTime& value) { m_validUntilHasBeenSet = true; m_validUntil = value; }

    /**
     * <p>The end date of the request, in UTC format
     * (<i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p> <ul> <li>
     * <p>For a persistent request, the request remains active until the
     * <code>ValidUntil</code> date and time is reached. Otherwise, the request remains
     * active until you cancel it. </p> </li> <li> <p>For a one-time request, the
     * request remains active until all instances launch, the request is canceled, or
     * the <code>ValidUntil</code> date and time is reached. By default, the request is
     * valid for 7 days from the date the request was created.</p> </li> </ul>
     */
    inline void SetValidUntil(Aws::Utils::DateTime&& value) { m_validUntilHasBeenSet = true; m_validUntil = std::move(value); }

    /**
     * <p>The end date of the request, in UTC format
     * (<i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p> <ul> <li>
     * <p>For a persistent request, the request remains active until the
     * <code>ValidUntil</code> date and time is reached. Otherwise, the request remains
     * active until you cancel it. </p> </li> <li> <p>For a one-time request, the
     * request remains active until all instances launch, the request is canceled, or
     * the <code>ValidUntil</code> date and time is reached. By default, the request is
     * valid for 7 days from the date the request was created.</p> </li> </ul>
     */
    inline RequestSpotInstancesRequest& WithValidUntil(const Aws::Utils::DateTime& value) { SetValidUntil(value); return *this;}

    /**
     * <p>The end date of the request, in UTC format
     * (<i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p> <ul> <li>
     * <p>For a persistent request, the request remains active until the
     * <code>ValidUntil</code> date and time is reached. Otherwise, the request remains
     * active until you cancel it. </p> </li> <li> <p>For a one-time request, the
     * request remains active until all instances launch, the request is canceled, or
     * the <code>ValidUntil</code> date and time is reached. By default, the request is
     * valid for 7 days from the date the request was created.</p> </li> </ul>
     */
    inline RequestSpotInstancesRequest& WithValidUntil(Aws::Utils::DateTime&& value) { SetValidUntil(std::move(value)); return *this;}


    /**
     * <p>The key-value pair for tagging the Spot Instance request on creation. The
     * value for <code>ResourceType</code> must be <code>spot-instances-request</code>,
     * otherwise the Spot Instance request fails. To tag the Spot Instance request
     * after it has been created, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.
     * </p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The key-value pair for tagging the Spot Instance request on creation. The
     * value for <code>ResourceType</code> must be <code>spot-instances-request</code>,
     * otherwise the Spot Instance request fails. To tag the Spot Instance request
     * after it has been created, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.
     * </p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The key-value pair for tagging the Spot Instance request on creation. The
     * value for <code>ResourceType</code> must be <code>spot-instances-request</code>,
     * otherwise the Spot Instance request fails. To tag the Spot Instance request
     * after it has been created, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.
     * </p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The key-value pair for tagging the Spot Instance request on creation. The
     * value for <code>ResourceType</code> must be <code>spot-instances-request</code>,
     * otherwise the Spot Instance request fails. To tag the Spot Instance request
     * after it has been created, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.
     * </p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The key-value pair for tagging the Spot Instance request on creation. The
     * value for <code>ResourceType</code> must be <code>spot-instances-request</code>,
     * otherwise the Spot Instance request fails. To tag the Spot Instance request
     * after it has been created, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.
     * </p>
     */
    inline RequestSpotInstancesRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The key-value pair for tagging the Spot Instance request on creation. The
     * value for <code>ResourceType</code> must be <code>spot-instances-request</code>,
     * otherwise the Spot Instance request fails. To tag the Spot Instance request
     * after it has been created, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.
     * </p>
     */
    inline RequestSpotInstancesRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The key-value pair for tagging the Spot Instance request on creation. The
     * value for <code>ResourceType</code> must be <code>spot-instances-request</code>,
     * otherwise the Spot Instance request fails. To tag the Spot Instance request
     * after it has been created, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.
     * </p>
     */
    inline RequestSpotInstancesRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The key-value pair for tagging the Spot Instance request on creation. The
     * value for <code>ResourceType</code> must be <code>spot-instances-request</code>,
     * otherwise the Spot Instance request fails. To tag the Spot Instance request
     * after it has been created, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.
     * </p>
     */
    inline RequestSpotInstancesRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


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
    bool m_availabilityZoneGroupHasBeenSet = false;

    int m_blockDurationMinutes;
    bool m_blockDurationMinutesHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    Aws::String m_launchGroup;
    bool m_launchGroupHasBeenSet = false;

    RequestSpotLaunchSpecification m_launchSpecification;
    bool m_launchSpecificationHasBeenSet = false;

    Aws::String m_spotPrice;
    bool m_spotPriceHasBeenSet = false;

    SpotInstanceType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_validFrom;
    bool m_validFromHasBeenSet = false;

    Aws::Utils::DateTime m_validUntil;
    bool m_validUntilHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    InstanceInterruptionBehavior m_instanceInterruptionBehavior;
    bool m_instanceInterruptionBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
