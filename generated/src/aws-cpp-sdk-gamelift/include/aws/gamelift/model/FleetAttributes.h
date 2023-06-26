/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/FleetType.h>
#include <aws/gamelift/model/EC2InstanceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/gamelift/model/FleetStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/ProtectionPolicy.h>
#include <aws/gamelift/model/OperatingSystem.h>
#include <aws/gamelift/model/ResourceCreationLimitPolicy.h>
#include <aws/gamelift/model/CertificateConfiguration.h>
#include <aws/gamelift/model/ComputeType.h>
#include <aws/gamelift/model/AnywhereConfiguration.h>
#include <aws/gamelift/model/FleetAction.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Describes a Amazon GameLift fleet of game hosting resources.</p> <p>
   * <b>Related actions</b> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/FleetAttributes">AWS
   * API Reference</a></p>
   */
  class FleetAttributes
  {
  public:
    AWS_GAMELIFT_API FleetAttributes();
    AWS_GAMELIFT_API FleetAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API FleetAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the fleet.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for the fleet.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the fleet.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for the fleet.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for the fleet.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for the fleet.</p>
     */
    inline FleetAttributes& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the fleet.</p>
     */
    inline FleetAttributes& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the fleet.</p>
     */
    inline FleetAttributes& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift fleet ARN, the resource ID matches the <code>FleetId</code>
     * value.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift fleet ARN, the resource ID matches the <code>FleetId</code>
     * value.</p>
     */
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift fleet ARN, the resource ID matches the <code>FleetId</code>
     * value.</p>
     */
    inline void SetFleetArn(const Aws::String& value) { m_fleetArnHasBeenSet = true; m_fleetArn = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift fleet ARN, the resource ID matches the <code>FleetId</code>
     * value.</p>
     */
    inline void SetFleetArn(Aws::String&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift fleet ARN, the resource ID matches the <code>FleetId</code>
     * value.</p>
     */
    inline void SetFleetArn(const char* value) { m_fleetArnHasBeenSet = true; m_fleetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift fleet ARN, the resource ID matches the <code>FleetId</code>
     * value.</p>
     */
    inline FleetAttributes& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift fleet ARN, the resource ID matches the <code>FleetId</code>
     * value.</p>
     */
    inline FleetAttributes& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.
     * In a GameLift fleet ARN, the resource ID matches the <code>FleetId</code>
     * value.</p>
     */
    inline FleetAttributes& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}


    /**
     * <p>Indicates whether to use On-Demand or Spot instances for this fleet. By
     * default, this property is set to <code>ON_DEMAND</code>. Learn more about when
     * to use <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. This property cannot be changed after the
     * fleet is created.</p>
     */
    inline const FleetType& GetFleetType() const{ return m_fleetType; }

    /**
     * <p>Indicates whether to use On-Demand or Spot instances for this fleet. By
     * default, this property is set to <code>ON_DEMAND</code>. Learn more about when
     * to use <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. This property cannot be changed after the
     * fleet is created.</p>
     */
    inline bool FleetTypeHasBeenSet() const { return m_fleetTypeHasBeenSet; }

    /**
     * <p>Indicates whether to use On-Demand or Spot instances for this fleet. By
     * default, this property is set to <code>ON_DEMAND</code>. Learn more about when
     * to use <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. This property cannot be changed after the
     * fleet is created.</p>
     */
    inline void SetFleetType(const FleetType& value) { m_fleetTypeHasBeenSet = true; m_fleetType = value; }

    /**
     * <p>Indicates whether to use On-Demand or Spot instances for this fleet. By
     * default, this property is set to <code>ON_DEMAND</code>. Learn more about when
     * to use <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. This property cannot be changed after the
     * fleet is created.</p>
     */
    inline void SetFleetType(FleetType&& value) { m_fleetTypeHasBeenSet = true; m_fleetType = std::move(value); }

    /**
     * <p>Indicates whether to use On-Demand or Spot instances for this fleet. By
     * default, this property is set to <code>ON_DEMAND</code>. Learn more about when
     * to use <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. This property cannot be changed after the
     * fleet is created.</p>
     */
    inline FleetAttributes& WithFleetType(const FleetType& value) { SetFleetType(value); return *this;}

    /**
     * <p>Indicates whether to use On-Demand or Spot instances for this fleet. By
     * default, this property is set to <code>ON_DEMAND</code>. Learn more about when
     * to use <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-ec2-instances.html#gamelift-ec2-instances-spot">
     * On-Demand versus Spot Instances</a>. This property cannot be changed after the
     * fleet is created.</p>
     */
    inline FleetAttributes& WithFleetType(FleetType&& value) { SetFleetType(std::move(value)); return *this;}


    /**
     * <p>The Amazon EC2 instance type that determines the computing resources of each
     * instance in the fleet. Instance type defines the CPU, memory, storage, and
     * networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon Elastic Compute Cloud
     * Instance Types</a> for detailed descriptions.</p>
     */
    inline const EC2InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The Amazon EC2 instance type that determines the computing resources of each
     * instance in the fleet. Instance type defines the CPU, memory, storage, and
     * networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon Elastic Compute Cloud
     * Instance Types</a> for detailed descriptions.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The Amazon EC2 instance type that determines the computing resources of each
     * instance in the fleet. Instance type defines the CPU, memory, storage, and
     * networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon Elastic Compute Cloud
     * Instance Types</a> for detailed descriptions.</p>
     */
    inline void SetInstanceType(const EC2InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The Amazon EC2 instance type that determines the computing resources of each
     * instance in the fleet. Instance type defines the CPU, memory, storage, and
     * networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon Elastic Compute Cloud
     * Instance Types</a> for detailed descriptions.</p>
     */
    inline void SetInstanceType(EC2InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The Amazon EC2 instance type that determines the computing resources of each
     * instance in the fleet. Instance type defines the CPU, memory, storage, and
     * networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon Elastic Compute Cloud
     * Instance Types</a> for detailed descriptions.</p>
     */
    inline FleetAttributes& WithInstanceType(const EC2InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The Amazon EC2 instance type that determines the computing resources of each
     * instance in the fleet. Instance type defines the CPU, memory, storage, and
     * networking capacity. See <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon Elastic Compute Cloud
     * Instance Types</a> for detailed descriptions.</p>
     */
    inline FleetAttributes& WithInstanceType(EC2InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>A human-readable description of the fleet.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A human-readable description of the fleet.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A human-readable description of the fleet.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A human-readable description of the fleet.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A human-readable description of the fleet.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A human-readable description of the fleet.</p>
     */
    inline FleetAttributes& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A human-readable description of the fleet.</p>
     */
    inline FleetAttributes& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A human-readable description of the fleet.</p>
     */
    inline FleetAttributes& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline FleetAttributes& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline FleetAttributes& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A descriptive label that is associated with a fleet. Fleet names do not need
     * to be unique.</p>
     */
    inline FleetAttributes& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline FleetAttributes& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline FleetAttributes& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A time stamp indicating when this data object was terminated. Format is a
     * number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetTerminationTime() const{ return m_terminationTime; }

    /**
     * <p>A time stamp indicating when this data object was terminated. Format is a
     * number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline bool TerminationTimeHasBeenSet() const { return m_terminationTimeHasBeenSet; }

    /**
     * <p>A time stamp indicating when this data object was terminated. Format is a
     * number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline void SetTerminationTime(const Aws::Utils::DateTime& value) { m_terminationTimeHasBeenSet = true; m_terminationTime = value; }

    /**
     * <p>A time stamp indicating when this data object was terminated. Format is a
     * number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline void SetTerminationTime(Aws::Utils::DateTime&& value) { m_terminationTimeHasBeenSet = true; m_terminationTime = std::move(value); }

    /**
     * <p>A time stamp indicating when this data object was terminated. Format is a
     * number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline FleetAttributes& WithTerminationTime(const Aws::Utils::DateTime& value) { SetTerminationTime(value); return *this;}

    /**
     * <p>A time stamp indicating when this data object was terminated. Format is a
     * number expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline FleetAttributes& WithTerminationTime(Aws::Utils::DateTime&& value) { SetTerminationTime(std::move(value)); return *this;}


    /**
     * <p>Current status of the fleet. Possible fleet statuses include the
     * following:</p> <ul> <li> <p> <b>NEW</b> -- A new fleet has been defined and
     * desired instances is set to 1. </p> </li> <li> <p>
     * <b>DOWNLOADING/VALIDATING/BUILDING/ACTIVATING</b> -- Amazon GameLift is setting
     * up the new fleet, creating new instances with the game build or Realtime script
     * and starting server processes.</p> </li> <li> <p> <b>ACTIVE</b> -- Hosts can now
     * accept game sessions.</p> </li> <li> <p> <b>ERROR</b> -- An error occurred when
     * downloading, validating, building, or activating the fleet.</p> </li> <li> <p>
     * <b>DELETING</b> -- Hosts are responding to a delete fleet request.</p> </li>
     * <li> <p> <b>TERMINATED</b> -- The fleet no longer exists.</p> </li> </ul>
     */
    inline const FleetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Current status of the fleet. Possible fleet statuses include the
     * following:</p> <ul> <li> <p> <b>NEW</b> -- A new fleet has been defined and
     * desired instances is set to 1. </p> </li> <li> <p>
     * <b>DOWNLOADING/VALIDATING/BUILDING/ACTIVATING</b> -- Amazon GameLift is setting
     * up the new fleet, creating new instances with the game build or Realtime script
     * and starting server processes.</p> </li> <li> <p> <b>ACTIVE</b> -- Hosts can now
     * accept game sessions.</p> </li> <li> <p> <b>ERROR</b> -- An error occurred when
     * downloading, validating, building, or activating the fleet.</p> </li> <li> <p>
     * <b>DELETING</b> -- Hosts are responding to a delete fleet request.</p> </li>
     * <li> <p> <b>TERMINATED</b> -- The fleet no longer exists.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Current status of the fleet. Possible fleet statuses include the
     * following:</p> <ul> <li> <p> <b>NEW</b> -- A new fleet has been defined and
     * desired instances is set to 1. </p> </li> <li> <p>
     * <b>DOWNLOADING/VALIDATING/BUILDING/ACTIVATING</b> -- Amazon GameLift is setting
     * up the new fleet, creating new instances with the game build or Realtime script
     * and starting server processes.</p> </li> <li> <p> <b>ACTIVE</b> -- Hosts can now
     * accept game sessions.</p> </li> <li> <p> <b>ERROR</b> -- An error occurred when
     * downloading, validating, building, or activating the fleet.</p> </li> <li> <p>
     * <b>DELETING</b> -- Hosts are responding to a delete fleet request.</p> </li>
     * <li> <p> <b>TERMINATED</b> -- The fleet no longer exists.</p> </li> </ul>
     */
    inline void SetStatus(const FleetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Current status of the fleet. Possible fleet statuses include the
     * following:</p> <ul> <li> <p> <b>NEW</b> -- A new fleet has been defined and
     * desired instances is set to 1. </p> </li> <li> <p>
     * <b>DOWNLOADING/VALIDATING/BUILDING/ACTIVATING</b> -- Amazon GameLift is setting
     * up the new fleet, creating new instances with the game build or Realtime script
     * and starting server processes.</p> </li> <li> <p> <b>ACTIVE</b> -- Hosts can now
     * accept game sessions.</p> </li> <li> <p> <b>ERROR</b> -- An error occurred when
     * downloading, validating, building, or activating the fleet.</p> </li> <li> <p>
     * <b>DELETING</b> -- Hosts are responding to a delete fleet request.</p> </li>
     * <li> <p> <b>TERMINATED</b> -- The fleet no longer exists.</p> </li> </ul>
     */
    inline void SetStatus(FleetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Current status of the fleet. Possible fleet statuses include the
     * following:</p> <ul> <li> <p> <b>NEW</b> -- A new fleet has been defined and
     * desired instances is set to 1. </p> </li> <li> <p>
     * <b>DOWNLOADING/VALIDATING/BUILDING/ACTIVATING</b> -- Amazon GameLift is setting
     * up the new fleet, creating new instances with the game build or Realtime script
     * and starting server processes.</p> </li> <li> <p> <b>ACTIVE</b> -- Hosts can now
     * accept game sessions.</p> </li> <li> <p> <b>ERROR</b> -- An error occurred when
     * downloading, validating, building, or activating the fleet.</p> </li> <li> <p>
     * <b>DELETING</b> -- Hosts are responding to a delete fleet request.</p> </li>
     * <li> <p> <b>TERMINATED</b> -- The fleet no longer exists.</p> </li> </ul>
     */
    inline FleetAttributes& WithStatus(const FleetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Current status of the fleet. Possible fleet statuses include the
     * following:</p> <ul> <li> <p> <b>NEW</b> -- A new fleet has been defined and
     * desired instances is set to 1. </p> </li> <li> <p>
     * <b>DOWNLOADING/VALIDATING/BUILDING/ACTIVATING</b> -- Amazon GameLift is setting
     * up the new fleet, creating new instances with the game build or Realtime script
     * and starting server processes.</p> </li> <li> <p> <b>ACTIVE</b> -- Hosts can now
     * accept game sessions.</p> </li> <li> <p> <b>ERROR</b> -- An error occurred when
     * downloading, validating, building, or activating the fleet.</p> </li> <li> <p>
     * <b>DELETING</b> -- Hosts are responding to a delete fleet request.</p> </li>
     * <li> <p> <b>TERMINATED</b> -- The fleet no longer exists.</p> </li> </ul>
     */
    inline FleetAttributes& WithStatus(FleetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A unique identifier for the build resource that is deployed on instances in
     * this fleet.</p>
     */
    inline const Aws::String& GetBuildId() const{ return m_buildId; }

    /**
     * <p>A unique identifier for the build resource that is deployed on instances in
     * this fleet.</p>
     */
    inline bool BuildIdHasBeenSet() const { return m_buildIdHasBeenSet; }

    /**
     * <p>A unique identifier for the build resource that is deployed on instances in
     * this fleet.</p>
     */
    inline void SetBuildId(const Aws::String& value) { m_buildIdHasBeenSet = true; m_buildId = value; }

    /**
     * <p>A unique identifier for the build resource that is deployed on instances in
     * this fleet.</p>
     */
    inline void SetBuildId(Aws::String&& value) { m_buildIdHasBeenSet = true; m_buildId = std::move(value); }

    /**
     * <p>A unique identifier for the build resource that is deployed on instances in
     * this fleet.</p>
     */
    inline void SetBuildId(const char* value) { m_buildIdHasBeenSet = true; m_buildId.assign(value); }

    /**
     * <p>A unique identifier for the build resource that is deployed on instances in
     * this fleet.</p>
     */
    inline FleetAttributes& WithBuildId(const Aws::String& value) { SetBuildId(value); return *this;}

    /**
     * <p>A unique identifier for the build resource that is deployed on instances in
     * this fleet.</p>
     */
    inline FleetAttributes& WithBuildId(Aws::String&& value) { SetBuildId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the build resource that is deployed on instances in
     * this fleet.</p>
     */
    inline FleetAttributes& WithBuildId(const char* value) { SetBuildId(value); return *this;}


    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the Amazon GameLift build resource that is deployed on instances
     * in this fleet. In a GameLift build ARN, the resource ID matches the
     * <code>BuildId</code> value.</p>
     */
    inline const Aws::String& GetBuildArn() const{ return m_buildArn; }

    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the Amazon GameLift build resource that is deployed on instances
     * in this fleet. In a GameLift build ARN, the resource ID matches the
     * <code>BuildId</code> value.</p>
     */
    inline bool BuildArnHasBeenSet() const { return m_buildArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the Amazon GameLift build resource that is deployed on instances
     * in this fleet. In a GameLift build ARN, the resource ID matches the
     * <code>BuildId</code> value.</p>
     */
    inline void SetBuildArn(const Aws::String& value) { m_buildArnHasBeenSet = true; m_buildArn = value; }

    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the Amazon GameLift build resource that is deployed on instances
     * in this fleet. In a GameLift build ARN, the resource ID matches the
     * <code>BuildId</code> value.</p>
     */
    inline void SetBuildArn(Aws::String&& value) { m_buildArnHasBeenSet = true; m_buildArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the Amazon GameLift build resource that is deployed on instances
     * in this fleet. In a GameLift build ARN, the resource ID matches the
     * <code>BuildId</code> value.</p>
     */
    inline void SetBuildArn(const char* value) { m_buildArnHasBeenSet = true; m_buildArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the Amazon GameLift build resource that is deployed on instances
     * in this fleet. In a GameLift build ARN, the resource ID matches the
     * <code>BuildId</code> value.</p>
     */
    inline FleetAttributes& WithBuildArn(const Aws::String& value) { SetBuildArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the Amazon GameLift build resource that is deployed on instances
     * in this fleet. In a GameLift build ARN, the resource ID matches the
     * <code>BuildId</code> value.</p>
     */
    inline FleetAttributes& WithBuildArn(Aws::String&& value) { SetBuildArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the Amazon GameLift build resource that is deployed on instances
     * in this fleet. In a GameLift build ARN, the resource ID matches the
     * <code>BuildId</code> value.</p>
     */
    inline FleetAttributes& WithBuildArn(const char* value) { SetBuildArn(value); return *this;}


    /**
     * <p>A unique identifier for the Realtime script resource that is deployed on
     * instances in this fleet.</p>
     */
    inline const Aws::String& GetScriptId() const{ return m_scriptId; }

    /**
     * <p>A unique identifier for the Realtime script resource that is deployed on
     * instances in this fleet.</p>
     */
    inline bool ScriptIdHasBeenSet() const { return m_scriptIdHasBeenSet; }

    /**
     * <p>A unique identifier for the Realtime script resource that is deployed on
     * instances in this fleet.</p>
     */
    inline void SetScriptId(const Aws::String& value) { m_scriptIdHasBeenSet = true; m_scriptId = value; }

    /**
     * <p>A unique identifier for the Realtime script resource that is deployed on
     * instances in this fleet.</p>
     */
    inline void SetScriptId(Aws::String&& value) { m_scriptIdHasBeenSet = true; m_scriptId = std::move(value); }

    /**
     * <p>A unique identifier for the Realtime script resource that is deployed on
     * instances in this fleet.</p>
     */
    inline void SetScriptId(const char* value) { m_scriptIdHasBeenSet = true; m_scriptId.assign(value); }

    /**
     * <p>A unique identifier for the Realtime script resource that is deployed on
     * instances in this fleet.</p>
     */
    inline FleetAttributes& WithScriptId(const Aws::String& value) { SetScriptId(value); return *this;}

    /**
     * <p>A unique identifier for the Realtime script resource that is deployed on
     * instances in this fleet.</p>
     */
    inline FleetAttributes& WithScriptId(Aws::String&& value) { SetScriptId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the Realtime script resource that is deployed on
     * instances in this fleet.</p>
     */
    inline FleetAttributes& WithScriptId(const char* value) { SetScriptId(value); return *this;}


    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift script resource that is deployed on instances in
     * this fleet. In a GameLift script ARN, the resource ID matches the
     * <code>ScriptId</code> value.</p>
     */
    inline const Aws::String& GetScriptArn() const{ return m_scriptArn; }

    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift script resource that is deployed on instances in
     * this fleet. In a GameLift script ARN, the resource ID matches the
     * <code>ScriptId</code> value.</p>
     */
    inline bool ScriptArnHasBeenSet() const { return m_scriptArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift script resource that is deployed on instances in
     * this fleet. In a GameLift script ARN, the resource ID matches the
     * <code>ScriptId</code> value.</p>
     */
    inline void SetScriptArn(const Aws::String& value) { m_scriptArnHasBeenSet = true; m_scriptArn = value; }

    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift script resource that is deployed on instances in
     * this fleet. In a GameLift script ARN, the resource ID matches the
     * <code>ScriptId</code> value.</p>
     */
    inline void SetScriptArn(Aws::String&& value) { m_scriptArnHasBeenSet = true; m_scriptArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift script resource that is deployed on instances in
     * this fleet. In a GameLift script ARN, the resource ID matches the
     * <code>ScriptId</code> value.</p>
     */
    inline void SetScriptArn(const char* value) { m_scriptArnHasBeenSet = true; m_scriptArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift script resource that is deployed on instances in
     * this fleet. In a GameLift script ARN, the resource ID matches the
     * <code>ScriptId</code> value.</p>
     */
    inline FleetAttributes& WithScriptArn(const Aws::String& value) { SetScriptArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift script resource that is deployed on instances in
     * this fleet. In a GameLift script ARN, the resource ID matches the
     * <code>ScriptId</code> value.</p>
     */
    inline FleetAttributes& WithScriptArn(Aws::String&& value) { SetScriptArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift script resource that is deployed on instances in
     * this fleet. In a GameLift script ARN, the resource ID matches the
     * <code>ScriptId</code> value.</p>
     */
    inline FleetAttributes& WithScriptArn(const char* value) { SetScriptArn(value); return *this;}


    /**
     * <p> <b>This parameter is no longer used.</b> Server launch paths are now defined
     * using the fleet's <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/RuntimeConfiguration.html">RuntimeConfiguration</a>
     * . Requests that use this parameter instead continue to be valid.</p>
     */
    inline const Aws::String& GetServerLaunchPath() const{ return m_serverLaunchPath; }

    /**
     * <p> <b>This parameter is no longer used.</b> Server launch paths are now defined
     * using the fleet's <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/RuntimeConfiguration.html">RuntimeConfiguration</a>
     * . Requests that use this parameter instead continue to be valid.</p>
     */
    inline bool ServerLaunchPathHasBeenSet() const { return m_serverLaunchPathHasBeenSet; }

    /**
     * <p> <b>This parameter is no longer used.</b> Server launch paths are now defined
     * using the fleet's <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/RuntimeConfiguration.html">RuntimeConfiguration</a>
     * . Requests that use this parameter instead continue to be valid.</p>
     */
    inline void SetServerLaunchPath(const Aws::String& value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath = value; }

    /**
     * <p> <b>This parameter is no longer used.</b> Server launch paths are now defined
     * using the fleet's <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/RuntimeConfiguration.html">RuntimeConfiguration</a>
     * . Requests that use this parameter instead continue to be valid.</p>
     */
    inline void SetServerLaunchPath(Aws::String&& value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath = std::move(value); }

    /**
     * <p> <b>This parameter is no longer used.</b> Server launch paths are now defined
     * using the fleet's <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/RuntimeConfiguration.html">RuntimeConfiguration</a>
     * . Requests that use this parameter instead continue to be valid.</p>
     */
    inline void SetServerLaunchPath(const char* value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath.assign(value); }

    /**
     * <p> <b>This parameter is no longer used.</b> Server launch paths are now defined
     * using the fleet's <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/RuntimeConfiguration.html">RuntimeConfiguration</a>
     * . Requests that use this parameter instead continue to be valid.</p>
     */
    inline FleetAttributes& WithServerLaunchPath(const Aws::String& value) { SetServerLaunchPath(value); return *this;}

    /**
     * <p> <b>This parameter is no longer used.</b> Server launch paths are now defined
     * using the fleet's <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/RuntimeConfiguration.html">RuntimeConfiguration</a>
     * . Requests that use this parameter instead continue to be valid.</p>
     */
    inline FleetAttributes& WithServerLaunchPath(Aws::String&& value) { SetServerLaunchPath(std::move(value)); return *this;}

    /**
     * <p> <b>This parameter is no longer used.</b> Server launch paths are now defined
     * using the fleet's <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/RuntimeConfiguration.html">RuntimeConfiguration</a>
     * . Requests that use this parameter instead continue to be valid.</p>
     */
    inline FleetAttributes& WithServerLaunchPath(const char* value) { SetServerLaunchPath(value); return *this;}


    /**
     * <p> <b>This parameter is no longer used.</b> Server launch parameters are now
     * defined using the fleet's runtime configuration . Requests that use this
     * parameter instead continue to be valid.</p>
     */
    inline const Aws::String& GetServerLaunchParameters() const{ return m_serverLaunchParameters; }

    /**
     * <p> <b>This parameter is no longer used.</b> Server launch parameters are now
     * defined using the fleet's runtime configuration . Requests that use this
     * parameter instead continue to be valid.</p>
     */
    inline bool ServerLaunchParametersHasBeenSet() const { return m_serverLaunchParametersHasBeenSet; }

    /**
     * <p> <b>This parameter is no longer used.</b> Server launch parameters are now
     * defined using the fleet's runtime configuration . Requests that use this
     * parameter instead continue to be valid.</p>
     */
    inline void SetServerLaunchParameters(const Aws::String& value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters = value; }

    /**
     * <p> <b>This parameter is no longer used.</b> Server launch parameters are now
     * defined using the fleet's runtime configuration . Requests that use this
     * parameter instead continue to be valid.</p>
     */
    inline void SetServerLaunchParameters(Aws::String&& value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters = std::move(value); }

    /**
     * <p> <b>This parameter is no longer used.</b> Server launch parameters are now
     * defined using the fleet's runtime configuration . Requests that use this
     * parameter instead continue to be valid.</p>
     */
    inline void SetServerLaunchParameters(const char* value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters.assign(value); }

    /**
     * <p> <b>This parameter is no longer used.</b> Server launch parameters are now
     * defined using the fleet's runtime configuration . Requests that use this
     * parameter instead continue to be valid.</p>
     */
    inline FleetAttributes& WithServerLaunchParameters(const Aws::String& value) { SetServerLaunchParameters(value); return *this;}

    /**
     * <p> <b>This parameter is no longer used.</b> Server launch parameters are now
     * defined using the fleet's runtime configuration . Requests that use this
     * parameter instead continue to be valid.</p>
     */
    inline FleetAttributes& WithServerLaunchParameters(Aws::String&& value) { SetServerLaunchParameters(std::move(value)); return *this;}

    /**
     * <p> <b>This parameter is no longer used.</b> Server launch parameters are now
     * defined using the fleet's runtime configuration . Requests that use this
     * parameter instead continue to be valid.</p>
     */
    inline FleetAttributes& WithServerLaunchParameters(const char* value) { SetServerLaunchParameters(value); return *this;}


    /**
     * <p> <b>This parameter is no longer used.</b> Game session log paths are now
     * defined using the Amazon GameLift server API <code>ProcessReady()</code>
     * <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetLogPaths() const{ return m_logPaths; }

    /**
     * <p> <b>This parameter is no longer used.</b> Game session log paths are now
     * defined using the Amazon GameLift server API <code>ProcessReady()</code>
     * <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline bool LogPathsHasBeenSet() const { return m_logPathsHasBeenSet; }

    /**
     * <p> <b>This parameter is no longer used.</b> Game session log paths are now
     * defined using the Amazon GameLift server API <code>ProcessReady()</code>
     * <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline void SetLogPaths(const Aws::Vector<Aws::String>& value) { m_logPathsHasBeenSet = true; m_logPaths = value; }

    /**
     * <p> <b>This parameter is no longer used.</b> Game session log paths are now
     * defined using the Amazon GameLift server API <code>ProcessReady()</code>
     * <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline void SetLogPaths(Aws::Vector<Aws::String>&& value) { m_logPathsHasBeenSet = true; m_logPaths = std::move(value); }

    /**
     * <p> <b>This parameter is no longer used.</b> Game session log paths are now
     * defined using the Amazon GameLift server API <code>ProcessReady()</code>
     * <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline FleetAttributes& WithLogPaths(const Aws::Vector<Aws::String>& value) { SetLogPaths(value); return *this;}

    /**
     * <p> <b>This parameter is no longer used.</b> Game session log paths are now
     * defined using the Amazon GameLift server API <code>ProcessReady()</code>
     * <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline FleetAttributes& WithLogPaths(Aws::Vector<Aws::String>&& value) { SetLogPaths(std::move(value)); return *this;}

    /**
     * <p> <b>This parameter is no longer used.</b> Game session log paths are now
     * defined using the Amazon GameLift server API <code>ProcessReady()</code>
     * <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline FleetAttributes& AddLogPaths(const Aws::String& value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(value); return *this; }

    /**
     * <p> <b>This parameter is no longer used.</b> Game session log paths are now
     * defined using the Amazon GameLift server API <code>ProcessReady()</code>
     * <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline FleetAttributes& AddLogPaths(Aws::String&& value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(std::move(value)); return *this; }

    /**
     * <p> <b>This parameter is no longer used.</b> Game session log paths are now
     * defined using the Amazon GameLift server API <code>ProcessReady()</code>
     * <code>logParameters</code>. See more information in the <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api-ref.html#gamelift-sdk-server-api-ref-dataypes-process">Server
     * API Reference</a>. </p>
     */
    inline FleetAttributes& AddLogPaths(const char* value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(value); return *this; }


    /**
     * <p>The type of game session protection to set on all new instances that are
     * started in the fleet.</p> <ul> <li> <p> <b>NoProtection</b> -- The game session
     * can be terminated during a scale-down event.</p> </li> <li> <p>
     * <b>FullProtection</b> -- If the game session is in an <code>ACTIVE</code>
     * status, it cannot be terminated during a scale-down event.</p> </li> </ul>
     */
    inline const ProtectionPolicy& GetNewGameSessionProtectionPolicy() const{ return m_newGameSessionProtectionPolicy; }

    /**
     * <p>The type of game session protection to set on all new instances that are
     * started in the fleet.</p> <ul> <li> <p> <b>NoProtection</b> -- The game session
     * can be terminated during a scale-down event.</p> </li> <li> <p>
     * <b>FullProtection</b> -- If the game session is in an <code>ACTIVE</code>
     * status, it cannot be terminated during a scale-down event.</p> </li> </ul>
     */
    inline bool NewGameSessionProtectionPolicyHasBeenSet() const { return m_newGameSessionProtectionPolicyHasBeenSet; }

    /**
     * <p>The type of game session protection to set on all new instances that are
     * started in the fleet.</p> <ul> <li> <p> <b>NoProtection</b> -- The game session
     * can be terminated during a scale-down event.</p> </li> <li> <p>
     * <b>FullProtection</b> -- If the game session is in an <code>ACTIVE</code>
     * status, it cannot be terminated during a scale-down event.</p> </li> </ul>
     */
    inline void SetNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = value; }

    /**
     * <p>The type of game session protection to set on all new instances that are
     * started in the fleet.</p> <ul> <li> <p> <b>NoProtection</b> -- The game session
     * can be terminated during a scale-down event.</p> </li> <li> <p>
     * <b>FullProtection</b> -- If the game session is in an <code>ACTIVE</code>
     * status, it cannot be terminated during a scale-down event.</p> </li> </ul>
     */
    inline void SetNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = std::move(value); }

    /**
     * <p>The type of game session protection to set on all new instances that are
     * started in the fleet.</p> <ul> <li> <p> <b>NoProtection</b> -- The game session
     * can be terminated during a scale-down event.</p> </li> <li> <p>
     * <b>FullProtection</b> -- If the game session is in an <code>ACTIVE</code>
     * status, it cannot be terminated during a scale-down event.</p> </li> </ul>
     */
    inline FleetAttributes& WithNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { SetNewGameSessionProtectionPolicy(value); return *this;}

    /**
     * <p>The type of game session protection to set on all new instances that are
     * started in the fleet.</p> <ul> <li> <p> <b>NoProtection</b> -- The game session
     * can be terminated during a scale-down event.</p> </li> <li> <p>
     * <b>FullProtection</b> -- If the game session is in an <code>ACTIVE</code>
     * status, it cannot be terminated during a scale-down event.</p> </li> </ul>
     */
    inline FleetAttributes& WithNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { SetNewGameSessionProtectionPolicy(std::move(value)); return *this;}


    /**
     * <p>The operating system of the fleet's computing resources. A fleet's operating
     * system is determined by the OS of the build or script that is deployed on this
     * fleet.</p>
     */
    inline const OperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }

    /**
     * <p>The operating system of the fleet's computing resources. A fleet's operating
     * system is determined by the OS of the build or script that is deployed on this
     * fleet.</p>
     */
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }

    /**
     * <p>The operating system of the fleet's computing resources. A fleet's operating
     * system is determined by the OS of the build or script that is deployed on this
     * fleet.</p>
     */
    inline void SetOperatingSystem(const OperatingSystem& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }

    /**
     * <p>The operating system of the fleet's computing resources. A fleet's operating
     * system is determined by the OS of the build or script that is deployed on this
     * fleet.</p>
     */
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }

    /**
     * <p>The operating system of the fleet's computing resources. A fleet's operating
     * system is determined by the OS of the build or script that is deployed on this
     * fleet.</p>
     */
    inline FleetAttributes& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}

    /**
     * <p>The operating system of the fleet's computing resources. A fleet's operating
     * system is determined by the OS of the build or script that is deployed on this
     * fleet.</p>
     */
    inline FleetAttributes& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}


    
    inline const ResourceCreationLimitPolicy& GetResourceCreationLimitPolicy() const{ return m_resourceCreationLimitPolicy; }

    
    inline bool ResourceCreationLimitPolicyHasBeenSet() const { return m_resourceCreationLimitPolicyHasBeenSet; }

    
    inline void SetResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& value) { m_resourceCreationLimitPolicyHasBeenSet = true; m_resourceCreationLimitPolicy = value; }

    
    inline void SetResourceCreationLimitPolicy(ResourceCreationLimitPolicy&& value) { m_resourceCreationLimitPolicyHasBeenSet = true; m_resourceCreationLimitPolicy = std::move(value); }

    
    inline FleetAttributes& WithResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& value) { SetResourceCreationLimitPolicy(value); return *this;}

    
    inline FleetAttributes& WithResourceCreationLimitPolicy(ResourceCreationLimitPolicy&& value) { SetResourceCreationLimitPolicy(std::move(value)); return *this;}


    /**
     * <p>Name of a metric group that metrics for this fleet are added to. In Amazon
     * CloudWatch, you can view aggregated metrics for fleets that are in a metric
     * group. A fleet can be included in only one metric group at a time.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricGroups() const{ return m_metricGroups; }

    /**
     * <p>Name of a metric group that metrics for this fleet are added to. In Amazon
     * CloudWatch, you can view aggregated metrics for fleets that are in a metric
     * group. A fleet can be included in only one metric group at a time.</p>
     */
    inline bool MetricGroupsHasBeenSet() const { return m_metricGroupsHasBeenSet; }

    /**
     * <p>Name of a metric group that metrics for this fleet are added to. In Amazon
     * CloudWatch, you can view aggregated metrics for fleets that are in a metric
     * group. A fleet can be included in only one metric group at a time.</p>
     */
    inline void SetMetricGroups(const Aws::Vector<Aws::String>& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = value; }

    /**
     * <p>Name of a metric group that metrics for this fleet are added to. In Amazon
     * CloudWatch, you can view aggregated metrics for fleets that are in a metric
     * group. A fleet can be included in only one metric group at a time.</p>
     */
    inline void SetMetricGroups(Aws::Vector<Aws::String>&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups = std::move(value); }

    /**
     * <p>Name of a metric group that metrics for this fleet are added to. In Amazon
     * CloudWatch, you can view aggregated metrics for fleets that are in a metric
     * group. A fleet can be included in only one metric group at a time.</p>
     */
    inline FleetAttributes& WithMetricGroups(const Aws::Vector<Aws::String>& value) { SetMetricGroups(value); return *this;}

    /**
     * <p>Name of a metric group that metrics for this fleet are added to. In Amazon
     * CloudWatch, you can view aggregated metrics for fleets that are in a metric
     * group. A fleet can be included in only one metric group at a time.</p>
     */
    inline FleetAttributes& WithMetricGroups(Aws::Vector<Aws::String>&& value) { SetMetricGroups(std::move(value)); return *this;}

    /**
     * <p>Name of a metric group that metrics for this fleet are added to. In Amazon
     * CloudWatch, you can view aggregated metrics for fleets that are in a metric
     * group. A fleet can be included in only one metric group at a time.</p>
     */
    inline FleetAttributes& AddMetricGroups(const Aws::String& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(value); return *this; }

    /**
     * <p>Name of a metric group that metrics for this fleet are added to. In Amazon
     * CloudWatch, you can view aggregated metrics for fleets that are in a metric
     * group. A fleet can be included in only one metric group at a time.</p>
     */
    inline FleetAttributes& AddMetricGroups(Aws::String&& value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>Name of a metric group that metrics for this fleet are added to. In Amazon
     * CloudWatch, you can view aggregated metrics for fleets that are in a metric
     * group. A fleet can be included in only one metric group at a time.</p>
     */
    inline FleetAttributes& AddMetricGroups(const char* value) { m_metricGroupsHasBeenSet = true; m_metricGroups.push_back(value); return *this; }


    /**
     * <p>A list of fleet activity that has been suspended using <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_StopFleetActions.html">StopFleetActions</a>
     * . This includes fleet auto-scaling.</p>
     */
    inline const Aws::Vector<FleetAction>& GetStoppedActions() const{ return m_stoppedActions; }

    /**
     * <p>A list of fleet activity that has been suspended using <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_StopFleetActions.html">StopFleetActions</a>
     * . This includes fleet auto-scaling.</p>
     */
    inline bool StoppedActionsHasBeenSet() const { return m_stoppedActionsHasBeenSet; }

    /**
     * <p>A list of fleet activity that has been suspended using <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_StopFleetActions.html">StopFleetActions</a>
     * . This includes fleet auto-scaling.</p>
     */
    inline void SetStoppedActions(const Aws::Vector<FleetAction>& value) { m_stoppedActionsHasBeenSet = true; m_stoppedActions = value; }

    /**
     * <p>A list of fleet activity that has been suspended using <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_StopFleetActions.html">StopFleetActions</a>
     * . This includes fleet auto-scaling.</p>
     */
    inline void SetStoppedActions(Aws::Vector<FleetAction>&& value) { m_stoppedActionsHasBeenSet = true; m_stoppedActions = std::move(value); }

    /**
     * <p>A list of fleet activity that has been suspended using <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_StopFleetActions.html">StopFleetActions</a>
     * . This includes fleet auto-scaling.</p>
     */
    inline FleetAttributes& WithStoppedActions(const Aws::Vector<FleetAction>& value) { SetStoppedActions(value); return *this;}

    /**
     * <p>A list of fleet activity that has been suspended using <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_StopFleetActions.html">StopFleetActions</a>
     * . This includes fleet auto-scaling.</p>
     */
    inline FleetAttributes& WithStoppedActions(Aws::Vector<FleetAction>&& value) { SetStoppedActions(std::move(value)); return *this;}

    /**
     * <p>A list of fleet activity that has been suspended using <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_StopFleetActions.html">StopFleetActions</a>
     * . This includes fleet auto-scaling.</p>
     */
    inline FleetAttributes& AddStoppedActions(const FleetAction& value) { m_stoppedActionsHasBeenSet = true; m_stoppedActions.push_back(value); return *this; }

    /**
     * <p>A list of fleet activity that has been suspended using <a
     * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_StopFleetActions.html">StopFleetActions</a>
     * . This includes fleet auto-scaling.</p>
     */
    inline FleetAttributes& AddStoppedActions(FleetAction&& value) { m_stoppedActionsHasBeenSet = true; m_stoppedActions.push_back(std::move(value)); return *this; }


    /**
     * <p>A unique identifier for an IAM role that manages access to your Amazon Web
     * Services services. With an instance role ARN set, any application that runs on
     * an instance in this fleet can assume the role, including install scripts, server
     * processes, and daemons (background processes). Create a role or look up a role's
     * ARN by using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a>
     * in the Amazon Web Services Management Console. Learn more about using on-box
     * credentials for your game servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>.</p>
     */
    inline const Aws::String& GetInstanceRoleArn() const{ return m_instanceRoleArn; }

    /**
     * <p>A unique identifier for an IAM role that manages access to your Amazon Web
     * Services services. With an instance role ARN set, any application that runs on
     * an instance in this fleet can assume the role, including install scripts, server
     * processes, and daemons (background processes). Create a role or look up a role's
     * ARN by using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a>
     * in the Amazon Web Services Management Console. Learn more about using on-box
     * credentials for your game servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>.</p>
     */
    inline bool InstanceRoleArnHasBeenSet() const { return m_instanceRoleArnHasBeenSet; }

    /**
     * <p>A unique identifier for an IAM role that manages access to your Amazon Web
     * Services services. With an instance role ARN set, any application that runs on
     * an instance in this fleet can assume the role, including install scripts, server
     * processes, and daemons (background processes). Create a role or look up a role's
     * ARN by using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a>
     * in the Amazon Web Services Management Console. Learn more about using on-box
     * credentials for your game servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>.</p>
     */
    inline void SetInstanceRoleArn(const Aws::String& value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn = value; }

    /**
     * <p>A unique identifier for an IAM role that manages access to your Amazon Web
     * Services services. With an instance role ARN set, any application that runs on
     * an instance in this fleet can assume the role, including install scripts, server
     * processes, and daemons (background processes). Create a role or look up a role's
     * ARN by using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a>
     * in the Amazon Web Services Management Console. Learn more about using on-box
     * credentials for your game servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>.</p>
     */
    inline void SetInstanceRoleArn(Aws::String&& value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn = std::move(value); }

    /**
     * <p>A unique identifier for an IAM role that manages access to your Amazon Web
     * Services services. With an instance role ARN set, any application that runs on
     * an instance in this fleet can assume the role, including install scripts, server
     * processes, and daemons (background processes). Create a role or look up a role's
     * ARN by using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a>
     * in the Amazon Web Services Management Console. Learn more about using on-box
     * credentials for your game servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>.</p>
     */
    inline void SetInstanceRoleArn(const char* value) { m_instanceRoleArnHasBeenSet = true; m_instanceRoleArn.assign(value); }

    /**
     * <p>A unique identifier for an IAM role that manages access to your Amazon Web
     * Services services. With an instance role ARN set, any application that runs on
     * an instance in this fleet can assume the role, including install scripts, server
     * processes, and daemons (background processes). Create a role or look up a role's
     * ARN by using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a>
     * in the Amazon Web Services Management Console. Learn more about using on-box
     * credentials for your game servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>.</p>
     */
    inline FleetAttributes& WithInstanceRoleArn(const Aws::String& value) { SetInstanceRoleArn(value); return *this;}

    /**
     * <p>A unique identifier for an IAM role that manages access to your Amazon Web
     * Services services. With an instance role ARN set, any application that runs on
     * an instance in this fleet can assume the role, including install scripts, server
     * processes, and daemons (background processes). Create a role or look up a role's
     * ARN by using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a>
     * in the Amazon Web Services Management Console. Learn more about using on-box
     * credentials for your game servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>.</p>
     */
    inline FleetAttributes& WithInstanceRoleArn(Aws::String&& value) { SetInstanceRoleArn(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for an IAM role that manages access to your Amazon Web
     * Services services. With an instance role ARN set, any application that runs on
     * an instance in this fleet can assume the role, including install scripts, server
     * processes, and daemons (background processes). Create a role or look up a role's
     * ARN by using the <a href="https://console.aws.amazon.com/iam/">IAM dashboard</a>
     * in the Amazon Web Services Management Console. Learn more about using on-box
     * credentials for your game servers at <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-resources.html">
     * Access external resources from a game server</a>.</p>
     */
    inline FleetAttributes& WithInstanceRoleArn(const char* value) { SetInstanceRoleArn(value); return *this;}


    
    inline const CertificateConfiguration& GetCertificateConfiguration() const{ return m_certificateConfiguration; }

    
    inline bool CertificateConfigurationHasBeenSet() const { return m_certificateConfigurationHasBeenSet; }

    
    inline void SetCertificateConfiguration(const CertificateConfiguration& value) { m_certificateConfigurationHasBeenSet = true; m_certificateConfiguration = value; }

    
    inline void SetCertificateConfiguration(CertificateConfiguration&& value) { m_certificateConfigurationHasBeenSet = true; m_certificateConfiguration = std::move(value); }

    
    inline FleetAttributes& WithCertificateConfiguration(const CertificateConfiguration& value) { SetCertificateConfiguration(value); return *this;}

    
    inline FleetAttributes& WithCertificateConfiguration(CertificateConfiguration&& value) { SetCertificateConfiguration(std::move(value)); return *this;}


    /**
     * <p>The type of compute resource used to host your game servers. You can use your
     * own compute resources with Amazon GameLift Anywhere or use Amazon EC2 instances
     * with managed Amazon GameLift.</p>
     */
    inline const ComputeType& GetComputeType() const{ return m_computeType; }

    /**
     * <p>The type of compute resource used to host your game servers. You can use your
     * own compute resources with Amazon GameLift Anywhere or use Amazon EC2 instances
     * with managed Amazon GameLift.</p>
     */
    inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }

    /**
     * <p>The type of compute resource used to host your game servers. You can use your
     * own compute resources with Amazon GameLift Anywhere or use Amazon EC2 instances
     * with managed Amazon GameLift.</p>
     */
    inline void SetComputeType(const ComputeType& value) { m_computeTypeHasBeenSet = true; m_computeType = value; }

    /**
     * <p>The type of compute resource used to host your game servers. You can use your
     * own compute resources with Amazon GameLift Anywhere or use Amazon EC2 instances
     * with managed Amazon GameLift.</p>
     */
    inline void SetComputeType(ComputeType&& value) { m_computeTypeHasBeenSet = true; m_computeType = std::move(value); }

    /**
     * <p>The type of compute resource used to host your game servers. You can use your
     * own compute resources with Amazon GameLift Anywhere or use Amazon EC2 instances
     * with managed Amazon GameLift.</p>
     */
    inline FleetAttributes& WithComputeType(const ComputeType& value) { SetComputeType(value); return *this;}

    /**
     * <p>The type of compute resource used to host your game servers. You can use your
     * own compute resources with Amazon GameLift Anywhere or use Amazon EC2 instances
     * with managed Amazon GameLift.</p>
     */
    inline FleetAttributes& WithComputeType(ComputeType&& value) { SetComputeType(std::move(value)); return *this;}


    
    inline const AnywhereConfiguration& GetAnywhereConfiguration() const{ return m_anywhereConfiguration; }

    
    inline bool AnywhereConfigurationHasBeenSet() const { return m_anywhereConfigurationHasBeenSet; }

    
    inline void SetAnywhereConfiguration(const AnywhereConfiguration& value) { m_anywhereConfigurationHasBeenSet = true; m_anywhereConfiguration = value; }

    
    inline void SetAnywhereConfiguration(AnywhereConfiguration&& value) { m_anywhereConfigurationHasBeenSet = true; m_anywhereConfiguration = std::move(value); }

    
    inline FleetAttributes& WithAnywhereConfiguration(const AnywhereConfiguration& value) { SetAnywhereConfiguration(value); return *this;}

    
    inline FleetAttributes& WithAnywhereConfiguration(AnywhereConfiguration&& value) { SetAnywhereConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet = false;

    FleetType m_fleetType;
    bool m_fleetTypeHasBeenSet = false;

    EC2InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_terminationTime;
    bool m_terminationTimeHasBeenSet = false;

    FleetStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_buildId;
    bool m_buildIdHasBeenSet = false;

    Aws::String m_buildArn;
    bool m_buildArnHasBeenSet = false;

    Aws::String m_scriptId;
    bool m_scriptIdHasBeenSet = false;

    Aws::String m_scriptArn;
    bool m_scriptArnHasBeenSet = false;

    Aws::String m_serverLaunchPath;
    bool m_serverLaunchPathHasBeenSet = false;

    Aws::String m_serverLaunchParameters;
    bool m_serverLaunchParametersHasBeenSet = false;

    Aws::Vector<Aws::String> m_logPaths;
    bool m_logPathsHasBeenSet = false;

    ProtectionPolicy m_newGameSessionProtectionPolicy;
    bool m_newGameSessionProtectionPolicyHasBeenSet = false;

    OperatingSystem m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;

    ResourceCreationLimitPolicy m_resourceCreationLimitPolicy;
    bool m_resourceCreationLimitPolicyHasBeenSet = false;

    Aws::Vector<Aws::String> m_metricGroups;
    bool m_metricGroupsHasBeenSet = false;

    Aws::Vector<FleetAction> m_stoppedActions;
    bool m_stoppedActionsHasBeenSet = false;

    Aws::String m_instanceRoleArn;
    bool m_instanceRoleArnHasBeenSet = false;

    CertificateConfiguration m_certificateConfiguration;
    bool m_certificateConfigurationHasBeenSet = false;

    ComputeType m_computeType;
    bool m_computeTypeHasBeenSet = false;

    AnywhereConfiguration m_anywhereConfiguration;
    bool m_anywhereConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
