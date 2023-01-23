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
    AWS_EC2_API CreateFleetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFleet"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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
    inline CreateFleetRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline CreateFleetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline CreateFleetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline CreateFleetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Describes the configuration of Spot Instances in an EC2 Fleet.</p>
     */
    inline const SpotOptionsRequest& GetSpotOptions() const{ return m_spotOptions; }

    /**
     * <p>Describes the configuration of Spot Instances in an EC2 Fleet.</p>
     */
    inline bool SpotOptionsHasBeenSet() const { return m_spotOptionsHasBeenSet; }

    /**
     * <p>Describes the configuration of Spot Instances in an EC2 Fleet.</p>
     */
    inline void SetSpotOptions(const SpotOptionsRequest& value) { m_spotOptionsHasBeenSet = true; m_spotOptions = value; }

    /**
     * <p>Describes the configuration of Spot Instances in an EC2 Fleet.</p>
     */
    inline void SetSpotOptions(SpotOptionsRequest&& value) { m_spotOptionsHasBeenSet = true; m_spotOptions = std::move(value); }

    /**
     * <p>Describes the configuration of Spot Instances in an EC2 Fleet.</p>
     */
    inline CreateFleetRequest& WithSpotOptions(const SpotOptionsRequest& value) { SetSpotOptions(value); return *this;}

    /**
     * <p>Describes the configuration of Spot Instances in an EC2 Fleet.</p>
     */
    inline CreateFleetRequest& WithSpotOptions(SpotOptionsRequest&& value) { SetSpotOptions(std::move(value)); return *this;}


    /**
     * <p>Describes the configuration of On-Demand Instances in an EC2 Fleet.</p>
     */
    inline const OnDemandOptionsRequest& GetOnDemandOptions() const{ return m_onDemandOptions; }

    /**
     * <p>Describes the configuration of On-Demand Instances in an EC2 Fleet.</p>
     */
    inline bool OnDemandOptionsHasBeenSet() const { return m_onDemandOptionsHasBeenSet; }

    /**
     * <p>Describes the configuration of On-Demand Instances in an EC2 Fleet.</p>
     */
    inline void SetOnDemandOptions(const OnDemandOptionsRequest& value) { m_onDemandOptionsHasBeenSet = true; m_onDemandOptions = value; }

    /**
     * <p>Describes the configuration of On-Demand Instances in an EC2 Fleet.</p>
     */
    inline void SetOnDemandOptions(OnDemandOptionsRequest&& value) { m_onDemandOptionsHasBeenSet = true; m_onDemandOptions = std::move(value); }

    /**
     * <p>Describes the configuration of On-Demand Instances in an EC2 Fleet.</p>
     */
    inline CreateFleetRequest& WithOnDemandOptions(const OnDemandOptionsRequest& value) { SetOnDemandOptions(value); return *this;}

    /**
     * <p>Describes the configuration of On-Demand Instances in an EC2 Fleet.</p>
     */
    inline CreateFleetRequest& WithOnDemandOptions(OnDemandOptionsRequest&& value) { SetOnDemandOptions(std::move(value)); return *this;}


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
    inline bool ExcessCapacityTerminationPolicyHasBeenSet() const { return m_excessCapacityTerminationPolicyHasBeenSet; }

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
    inline bool LaunchTemplateConfigsHasBeenSet() const { return m_launchTemplateConfigsHasBeenSet; }

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
     * <p>The number of units to request.</p>
     */
    inline const TargetCapacitySpecificationRequest& GetTargetCapacitySpecification() const{ return m_targetCapacitySpecification; }

    /**
     * <p>The number of units to request.</p>
     */
    inline bool TargetCapacitySpecificationHasBeenSet() const { return m_targetCapacitySpecificationHasBeenSet; }

    /**
     * <p>The number of units to request.</p>
     */
    inline void SetTargetCapacitySpecification(const TargetCapacitySpecificationRequest& value) { m_targetCapacitySpecificationHasBeenSet = true; m_targetCapacitySpecification = value; }

    /**
     * <p>The number of units to request.</p>
     */
    inline void SetTargetCapacitySpecification(TargetCapacitySpecificationRequest&& value) { m_targetCapacitySpecificationHasBeenSet = true; m_targetCapacitySpecification = std::move(value); }

    /**
     * <p>The number of units to request.</p>
     */
    inline CreateFleetRequest& WithTargetCapacitySpecification(const TargetCapacitySpecificationRequest& value) { SetTargetCapacitySpecification(value); return *this;}

    /**
     * <p>The number of units to request.</p>
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
    inline bool TerminateInstancesWithExpirationHasBeenSet() const { return m_terminateInstancesWithExpirationHasBeenSet; }

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
    inline const FleetType& GetType() const{ return m_type; }

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
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

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
    inline void SetType(const FleetType& value) { m_typeHasBeenSet = true; m_type = value; }

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
    inline void SetType(FleetType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

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
    inline CreateFleetRequest& WithType(const FleetType& value) { SetType(value); return *this;}

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
    inline bool ValidFromHasBeenSet() const { return m_validFromHasBeenSet; }

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
     * no new EC2 Fleet requests are placed or able to fulfill the request. If no value
     * is specified, the request remains until you cancel it.</p>
     */
    inline const Aws::Utils::DateTime& GetValidUntil() const{ return m_validUntil; }

    /**
     * <p>The end date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). At this point,
     * no new EC2 Fleet requests are placed or able to fulfill the request. If no value
     * is specified, the request remains until you cancel it.</p>
     */
    inline bool ValidUntilHasBeenSet() const { return m_validUntilHasBeenSet; }

    /**
     * <p>The end date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). At this point,
     * no new EC2 Fleet requests are placed or able to fulfill the request. If no value
     * is specified, the request remains until you cancel it.</p>
     */
    inline void SetValidUntil(const Aws::Utils::DateTime& value) { m_validUntilHasBeenSet = true; m_validUntil = value; }

    /**
     * <p>The end date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). At this point,
     * no new EC2 Fleet requests are placed or able to fulfill the request. If no value
     * is specified, the request remains until you cancel it.</p>
     */
    inline void SetValidUntil(Aws::Utils::DateTime&& value) { m_validUntilHasBeenSet = true; m_validUntil = std::move(value); }

    /**
     * <p>The end date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). At this point,
     * no new EC2 Fleet requests are placed or able to fulfill the request. If no value
     * is specified, the request remains until you cancel it.</p>
     */
    inline CreateFleetRequest& WithValidUntil(const Aws::Utils::DateTime& value) { SetValidUntil(value); return *this;}

    /**
     * <p>The end date and time of the request, in UTC format (for example,
     * <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). At this point,
     * no new EC2 Fleet requests are placed or able to fulfill the request. If no value
     * is specified, the request remains until you cancel it.</p>
     */
    inline CreateFleetRequest& WithValidUntil(Aws::Utils::DateTime&& value) { SetValidUntil(std::move(value)); return *this;}


    /**
     * <p>Indicates whether EC2 Fleet should replace unhealthy Spot Instances.
     * Supported only for fleets of type <code>maintain</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/manage-ec2-fleet.html#ec2-fleet-health-checks">EC2
     * Fleet health checks</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline bool GetReplaceUnhealthyInstances() const{ return m_replaceUnhealthyInstances; }

    /**
     * <p>Indicates whether EC2 Fleet should replace unhealthy Spot Instances.
     * Supported only for fleets of type <code>maintain</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/manage-ec2-fleet.html#ec2-fleet-health-checks">EC2
     * Fleet health checks</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline bool ReplaceUnhealthyInstancesHasBeenSet() const { return m_replaceUnhealthyInstancesHasBeenSet; }

    /**
     * <p>Indicates whether EC2 Fleet should replace unhealthy Spot Instances.
     * Supported only for fleets of type <code>maintain</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/manage-ec2-fleet.html#ec2-fleet-health-checks">EC2
     * Fleet health checks</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetReplaceUnhealthyInstances(bool value) { m_replaceUnhealthyInstancesHasBeenSet = true; m_replaceUnhealthyInstances = value; }

    /**
     * <p>Indicates whether EC2 Fleet should replace unhealthy Spot Instances.
     * Supported only for fleets of type <code>maintain</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/manage-ec2-fleet.html#ec2-fleet-health-checks">EC2
     * Fleet health checks</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline CreateFleetRequest& WithReplaceUnhealthyInstances(bool value) { SetReplaceUnhealthyInstances(value); return *this;}


    /**
     * <p>The key-value pair for tagging the EC2 Fleet request on creation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#tag-resources">Tagging
     * your resources</a>.</p> <p>If the fleet type is <code>instant</code>, specify a
     * resource type of <code>fleet</code> to tag the fleet or <code>instance</code> to
     * tag the instances at launch.</p> <p>If the fleet type is <code>maintain</code>
     * or <code>request</code>, specify a resource type of <code>fleet</code> to tag
     * the fleet. You cannot specify a resource type of <code>instance</code>. To tag
     * instances at launch, specify the tags in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html#create-launch-template">launch
     * template</a>.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The key-value pair for tagging the EC2 Fleet request on creation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#tag-resources">Tagging
     * your resources</a>.</p> <p>If the fleet type is <code>instant</code>, specify a
     * resource type of <code>fleet</code> to tag the fleet or <code>instance</code> to
     * tag the instances at launch.</p> <p>If the fleet type is <code>maintain</code>
     * or <code>request</code>, specify a resource type of <code>fleet</code> to tag
     * the fleet. You cannot specify a resource type of <code>instance</code>. To tag
     * instances at launch, specify the tags in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html#create-launch-template">launch
     * template</a>.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The key-value pair for tagging the EC2 Fleet request on creation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#tag-resources">Tagging
     * your resources</a>.</p> <p>If the fleet type is <code>instant</code>, specify a
     * resource type of <code>fleet</code> to tag the fleet or <code>instance</code> to
     * tag the instances at launch.</p> <p>If the fleet type is <code>maintain</code>
     * or <code>request</code>, specify a resource type of <code>fleet</code> to tag
     * the fleet. You cannot specify a resource type of <code>instance</code>. To tag
     * instances at launch, specify the tags in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html#create-launch-template">launch
     * template</a>.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The key-value pair for tagging the EC2 Fleet request on creation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#tag-resources">Tagging
     * your resources</a>.</p> <p>If the fleet type is <code>instant</code>, specify a
     * resource type of <code>fleet</code> to tag the fleet or <code>instance</code> to
     * tag the instances at launch.</p> <p>If the fleet type is <code>maintain</code>
     * or <code>request</code>, specify a resource type of <code>fleet</code> to tag
     * the fleet. You cannot specify a resource type of <code>instance</code>. To tag
     * instances at launch, specify the tags in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html#create-launch-template">launch
     * template</a>.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The key-value pair for tagging the EC2 Fleet request on creation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#tag-resources">Tagging
     * your resources</a>.</p> <p>If the fleet type is <code>instant</code>, specify a
     * resource type of <code>fleet</code> to tag the fleet or <code>instance</code> to
     * tag the instances at launch.</p> <p>If the fleet type is <code>maintain</code>
     * or <code>request</code>, specify a resource type of <code>fleet</code> to tag
     * the fleet. You cannot specify a resource type of <code>instance</code>. To tag
     * instances at launch, specify the tags in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html#create-launch-template">launch
     * template</a>.</p>
     */
    inline CreateFleetRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The key-value pair for tagging the EC2 Fleet request on creation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#tag-resources">Tagging
     * your resources</a>.</p> <p>If the fleet type is <code>instant</code>, specify a
     * resource type of <code>fleet</code> to tag the fleet or <code>instance</code> to
     * tag the instances at launch.</p> <p>If the fleet type is <code>maintain</code>
     * or <code>request</code>, specify a resource type of <code>fleet</code> to tag
     * the fleet. You cannot specify a resource type of <code>instance</code>. To tag
     * instances at launch, specify the tags in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html#create-launch-template">launch
     * template</a>.</p>
     */
    inline CreateFleetRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The key-value pair for tagging the EC2 Fleet request on creation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#tag-resources">Tagging
     * your resources</a>.</p> <p>If the fleet type is <code>instant</code>, specify a
     * resource type of <code>fleet</code> to tag the fleet or <code>instance</code> to
     * tag the instances at launch.</p> <p>If the fleet type is <code>maintain</code>
     * or <code>request</code>, specify a resource type of <code>fleet</code> to tag
     * the fleet. You cannot specify a resource type of <code>instance</code>. To tag
     * instances at launch, specify the tags in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html#create-launch-template">launch
     * template</a>.</p>
     */
    inline CreateFleetRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The key-value pair for tagging the EC2 Fleet request on creation. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html#tag-resources">Tagging
     * your resources</a>.</p> <p>If the fleet type is <code>instant</code>, specify a
     * resource type of <code>fleet</code> to tag the fleet or <code>instance</code> to
     * tag the instances at launch.</p> <p>If the fleet type is <code>maintain</code>
     * or <code>request</code>, specify a resource type of <code>fleet</code> to tag
     * the fleet. You cannot specify a resource type of <code>instance</code>. To tag
     * instances at launch, specify the tags in a <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html#create-launch-template">launch
     * template</a>.</p>
     */
    inline CreateFleetRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetContext() const{ return m_context; }

    /**
     * <p>Reserved.</p>
     */
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetContext(const Aws::String& value) { m_contextHasBeenSet = true; m_context = value; }

    /**
     * <p>Reserved.</p>
     */
    inline void SetContext(Aws::String&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }

    /**
     * <p>Reserved.</p>
     */
    inline void SetContext(const char* value) { m_contextHasBeenSet = true; m_context.assign(value); }

    /**
     * <p>Reserved.</p>
     */
    inline CreateFleetRequest& WithContext(const Aws::String& value) { SetContext(value); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline CreateFleetRequest& WithContext(Aws::String&& value) { SetContext(std::move(value)); return *this;}

    /**
     * <p>Reserved.</p>
     */
    inline CreateFleetRequest& WithContext(const char* value) { SetContext(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    SpotOptionsRequest m_spotOptions;
    bool m_spotOptionsHasBeenSet = false;

    OnDemandOptionsRequest m_onDemandOptions;
    bool m_onDemandOptionsHasBeenSet = false;

    FleetExcessCapacityTerminationPolicy m_excessCapacityTerminationPolicy;
    bool m_excessCapacityTerminationPolicyHasBeenSet = false;

    Aws::Vector<FleetLaunchTemplateConfigRequest> m_launchTemplateConfigs;
    bool m_launchTemplateConfigsHasBeenSet = false;

    TargetCapacitySpecificationRequest m_targetCapacitySpecification;
    bool m_targetCapacitySpecificationHasBeenSet = false;

    bool m_terminateInstancesWithExpiration;
    bool m_terminateInstancesWithExpirationHasBeenSet = false;

    FleetType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_validFrom;
    bool m_validFromHasBeenSet = false;

    Aws::Utils::DateTime m_validUntil;
    bool m_validUntilHasBeenSet = false;

    bool m_replaceUnhealthyInstances;
    bool m_replaceUnhealthyInstancesHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_context;
    bool m_contextHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
