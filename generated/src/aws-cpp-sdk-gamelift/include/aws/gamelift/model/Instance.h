﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/OperatingSystem.h>
#include <aws/gamelift/model/EC2InstanceType.h>
#include <aws/gamelift/model/InstanceStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Represents an EC2 instance of virtual computing resources that hosts one or
   * more game servers. In GameLift, a fleet can contain zero or more instances.</p>
   * <p> <b>Related actions</b> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/Instance">AWS
   * API Reference</a></p>
   */
  class Instance
  {
  public:
    AWS_GAMELIFT_API Instance();
    AWS_GAMELIFT_API Instance(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Instance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the fleet that the instance is in.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for the fleet that the instance is in.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the fleet that the instance is in.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for the fleet that the instance is in.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for the fleet that the instance is in.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for the fleet that the instance is in.</p>
     */
    inline Instance& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the fleet that the instance is in.</p>
     */
    inline Instance& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the fleet that the instance is in.</p>
     */
    inline Instance& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift fleet resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift fleet resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift fleet resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline void SetFleetArn(const Aws::String& value) { m_fleetArnHasBeenSet = true; m_fleetArn = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift fleet resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline void SetFleetArn(Aws::String&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift fleet resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline void SetFleetArn(const char* value) { m_fleetArnHasBeenSet = true; m_fleetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift fleet resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline Instance& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift fleet resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline Instance& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a GameLift fleet resource and uniquely identifies it. ARNs
     * are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline Instance& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}


    /**
     * <p>A unique identifier for the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>A unique identifier for the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>A unique identifier for the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>A unique identifier for the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>A unique identifier for the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>A unique identifier for the instance.</p>
     */
    inline Instance& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>A unique identifier for the instance.</p>
     */
    inline Instance& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the instance.</p>
     */
    inline Instance& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>IP address that is assigned to the instance.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>IP address that is assigned to the instance.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>IP address that is assigned to the instance.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>IP address that is assigned to the instance.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>IP address that is assigned to the instance.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>IP address that is assigned to the instance.</p>
     */
    inline Instance& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>IP address that is assigned to the instance.</p>
     */
    inline Instance& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>IP address that is assigned to the instance.</p>
     */
    inline Instance& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}


    /**
     * <p>The DNS identifier assigned to the instance that is running the game session.
     * Values have the following format:</p> <ul> <li> <p>TLS-enabled fleets:
     * <code>&lt;unique identifier&gt;.&lt;region
     * identifier&gt;.amazongamelift.com</code>.</p> </li> <li> <p>Non-TLS-enabled
     * fleets: <code>ec2-&lt;unique identifier&gt;.compute.amazonaws.com</code>. (See
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-instance-addressing.html#concepts-public-addresses">Amazon
     * EC2 Instance IP Addressing</a>.)</p> </li> </ul> <p>When connecting to a game
     * session that is running on a TLS-enabled fleet, you must use the DNS name, not
     * the IP address.</p>
     */
    inline const Aws::String& GetDnsName() const{ return m_dnsName; }

    /**
     * <p>The DNS identifier assigned to the instance that is running the game session.
     * Values have the following format:</p> <ul> <li> <p>TLS-enabled fleets:
     * <code>&lt;unique identifier&gt;.&lt;region
     * identifier&gt;.amazongamelift.com</code>.</p> </li> <li> <p>Non-TLS-enabled
     * fleets: <code>ec2-&lt;unique identifier&gt;.compute.amazonaws.com</code>. (See
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-instance-addressing.html#concepts-public-addresses">Amazon
     * EC2 Instance IP Addressing</a>.)</p> </li> </ul> <p>When connecting to a game
     * session that is running on a TLS-enabled fleet, you must use the DNS name, not
     * the IP address.</p>
     */
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }

    /**
     * <p>The DNS identifier assigned to the instance that is running the game session.
     * Values have the following format:</p> <ul> <li> <p>TLS-enabled fleets:
     * <code>&lt;unique identifier&gt;.&lt;region
     * identifier&gt;.amazongamelift.com</code>.</p> </li> <li> <p>Non-TLS-enabled
     * fleets: <code>ec2-&lt;unique identifier&gt;.compute.amazonaws.com</code>. (See
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-instance-addressing.html#concepts-public-addresses">Amazon
     * EC2 Instance IP Addressing</a>.)</p> </li> </ul> <p>When connecting to a game
     * session that is running on a TLS-enabled fleet, you must use the DNS name, not
     * the IP address.</p>
     */
    inline void SetDnsName(const Aws::String& value) { m_dnsNameHasBeenSet = true; m_dnsName = value; }

    /**
     * <p>The DNS identifier assigned to the instance that is running the game session.
     * Values have the following format:</p> <ul> <li> <p>TLS-enabled fleets:
     * <code>&lt;unique identifier&gt;.&lt;region
     * identifier&gt;.amazongamelift.com</code>.</p> </li> <li> <p>Non-TLS-enabled
     * fleets: <code>ec2-&lt;unique identifier&gt;.compute.amazonaws.com</code>. (See
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-instance-addressing.html#concepts-public-addresses">Amazon
     * EC2 Instance IP Addressing</a>.)</p> </li> </ul> <p>When connecting to a game
     * session that is running on a TLS-enabled fleet, you must use the DNS name, not
     * the IP address.</p>
     */
    inline void SetDnsName(Aws::String&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::move(value); }

    /**
     * <p>The DNS identifier assigned to the instance that is running the game session.
     * Values have the following format:</p> <ul> <li> <p>TLS-enabled fleets:
     * <code>&lt;unique identifier&gt;.&lt;region
     * identifier&gt;.amazongamelift.com</code>.</p> </li> <li> <p>Non-TLS-enabled
     * fleets: <code>ec2-&lt;unique identifier&gt;.compute.amazonaws.com</code>. (See
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-instance-addressing.html#concepts-public-addresses">Amazon
     * EC2 Instance IP Addressing</a>.)</p> </li> </ul> <p>When connecting to a game
     * session that is running on a TLS-enabled fleet, you must use the DNS name, not
     * the IP address.</p>
     */
    inline void SetDnsName(const char* value) { m_dnsNameHasBeenSet = true; m_dnsName.assign(value); }

    /**
     * <p>The DNS identifier assigned to the instance that is running the game session.
     * Values have the following format:</p> <ul> <li> <p>TLS-enabled fleets:
     * <code>&lt;unique identifier&gt;.&lt;region
     * identifier&gt;.amazongamelift.com</code>.</p> </li> <li> <p>Non-TLS-enabled
     * fleets: <code>ec2-&lt;unique identifier&gt;.compute.amazonaws.com</code>. (See
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-instance-addressing.html#concepts-public-addresses">Amazon
     * EC2 Instance IP Addressing</a>.)</p> </li> </ul> <p>When connecting to a game
     * session that is running on a TLS-enabled fleet, you must use the DNS name, not
     * the IP address.</p>
     */
    inline Instance& WithDnsName(const Aws::String& value) { SetDnsName(value); return *this;}

    /**
     * <p>The DNS identifier assigned to the instance that is running the game session.
     * Values have the following format:</p> <ul> <li> <p>TLS-enabled fleets:
     * <code>&lt;unique identifier&gt;.&lt;region
     * identifier&gt;.amazongamelift.com</code>.</p> </li> <li> <p>Non-TLS-enabled
     * fleets: <code>ec2-&lt;unique identifier&gt;.compute.amazonaws.com</code>. (See
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-instance-addressing.html#concepts-public-addresses">Amazon
     * EC2 Instance IP Addressing</a>.)</p> </li> </ul> <p>When connecting to a game
     * session that is running on a TLS-enabled fleet, you must use the DNS name, not
     * the IP address.</p>
     */
    inline Instance& WithDnsName(Aws::String&& value) { SetDnsName(std::move(value)); return *this;}

    /**
     * <p>The DNS identifier assigned to the instance that is running the game session.
     * Values have the following format:</p> <ul> <li> <p>TLS-enabled fleets:
     * <code>&lt;unique identifier&gt;.&lt;region
     * identifier&gt;.amazongamelift.com</code>.</p> </li> <li> <p>Non-TLS-enabled
     * fleets: <code>ec2-&lt;unique identifier&gt;.compute.amazonaws.com</code>. (See
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-instance-addressing.html#concepts-public-addresses">Amazon
     * EC2 Instance IP Addressing</a>.)</p> </li> </ul> <p>When connecting to a game
     * session that is running on a TLS-enabled fleet, you must use the DNS name, not
     * the IP address.</p>
     */
    inline Instance& WithDnsName(const char* value) { SetDnsName(value); return *this;}


    /**
     * <p>Operating system that is running on this instance. </p>
     */
    inline const OperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }

    /**
     * <p>Operating system that is running on this instance. </p>
     */
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }

    /**
     * <p>Operating system that is running on this instance. </p>
     */
    inline void SetOperatingSystem(const OperatingSystem& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }

    /**
     * <p>Operating system that is running on this instance. </p>
     */
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }

    /**
     * <p>Operating system that is running on this instance. </p>
     */
    inline Instance& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}

    /**
     * <p>Operating system that is running on this instance. </p>
     */
    inline Instance& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}


    /**
     * <p>Amazon EC2 instance type that defines the computing resources of this
     * instance. </p>
     */
    inline const EC2InstanceType& GetType() const{ return m_type; }

    /**
     * <p>Amazon EC2 instance type that defines the computing resources of this
     * instance. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Amazon EC2 instance type that defines the computing resources of this
     * instance. </p>
     */
    inline void SetType(const EC2InstanceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Amazon EC2 instance type that defines the computing resources of this
     * instance. </p>
     */
    inline void SetType(EC2InstanceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Amazon EC2 instance type that defines the computing resources of this
     * instance. </p>
     */
    inline Instance& WithType(const EC2InstanceType& value) { SetType(value); return *this;}

    /**
     * <p>Amazon EC2 instance type that defines the computing resources of this
     * instance. </p>
     */
    inline Instance& WithType(EC2InstanceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Current status of the instance. Possible statuses include the following:</p>
     * <ul> <li> <p> <b>PENDING</b> -- The instance is in the process of being created
     * and launching server processes as defined in the fleet's run-time configuration.
     * </p> </li> <li> <p> <b>ACTIVE</b> -- The instance has been successfully created
     * and at least one server process has successfully launched and reported back to
     * GameLift that it is ready to host a game session. The instance is now considered
     * ready to host game sessions. </p> </li> <li> <p> <b>TERMINATING</b> -- The
     * instance is in the process of shutting down. This may happen to reduce capacity
     * during a scaling down event or to recycle resources in the event of a
     * problem.</p> </li> </ul>
     */
    inline const InstanceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Current status of the instance. Possible statuses include the following:</p>
     * <ul> <li> <p> <b>PENDING</b> -- The instance is in the process of being created
     * and launching server processes as defined in the fleet's run-time configuration.
     * </p> </li> <li> <p> <b>ACTIVE</b> -- The instance has been successfully created
     * and at least one server process has successfully launched and reported back to
     * GameLift that it is ready to host a game session. The instance is now considered
     * ready to host game sessions. </p> </li> <li> <p> <b>TERMINATING</b> -- The
     * instance is in the process of shutting down. This may happen to reduce capacity
     * during a scaling down event or to recycle resources in the event of a
     * problem.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Current status of the instance. Possible statuses include the following:</p>
     * <ul> <li> <p> <b>PENDING</b> -- The instance is in the process of being created
     * and launching server processes as defined in the fleet's run-time configuration.
     * </p> </li> <li> <p> <b>ACTIVE</b> -- The instance has been successfully created
     * and at least one server process has successfully launched and reported back to
     * GameLift that it is ready to host a game session. The instance is now considered
     * ready to host game sessions. </p> </li> <li> <p> <b>TERMINATING</b> -- The
     * instance is in the process of shutting down. This may happen to reduce capacity
     * during a scaling down event or to recycle resources in the event of a
     * problem.</p> </li> </ul>
     */
    inline void SetStatus(const InstanceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Current status of the instance. Possible statuses include the following:</p>
     * <ul> <li> <p> <b>PENDING</b> -- The instance is in the process of being created
     * and launching server processes as defined in the fleet's run-time configuration.
     * </p> </li> <li> <p> <b>ACTIVE</b> -- The instance has been successfully created
     * and at least one server process has successfully launched and reported back to
     * GameLift that it is ready to host a game session. The instance is now considered
     * ready to host game sessions. </p> </li> <li> <p> <b>TERMINATING</b> -- The
     * instance is in the process of shutting down. This may happen to reduce capacity
     * during a scaling down event or to recycle resources in the event of a
     * problem.</p> </li> </ul>
     */
    inline void SetStatus(InstanceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Current status of the instance. Possible statuses include the following:</p>
     * <ul> <li> <p> <b>PENDING</b> -- The instance is in the process of being created
     * and launching server processes as defined in the fleet's run-time configuration.
     * </p> </li> <li> <p> <b>ACTIVE</b> -- The instance has been successfully created
     * and at least one server process has successfully launched and reported back to
     * GameLift that it is ready to host a game session. The instance is now considered
     * ready to host game sessions. </p> </li> <li> <p> <b>TERMINATING</b> -- The
     * instance is in the process of shutting down. This may happen to reduce capacity
     * during a scaling down event or to recycle resources in the event of a
     * problem.</p> </li> </ul>
     */
    inline Instance& WithStatus(const InstanceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Current status of the instance. Possible statuses include the following:</p>
     * <ul> <li> <p> <b>PENDING</b> -- The instance is in the process of being created
     * and launching server processes as defined in the fleet's run-time configuration.
     * </p> </li> <li> <p> <b>ACTIVE</b> -- The instance has been successfully created
     * and at least one server process has successfully launched and reported back to
     * GameLift that it is ready to host a game session. The instance is now considered
     * ready to host game sessions. </p> </li> <li> <p> <b>TERMINATING</b> -- The
     * instance is in the process of shutting down. This may happen to reduce capacity
     * during a scaling down event or to recycle resources in the event of a
     * problem.</p> </li> </ul>
     */
    inline Instance& WithStatus(InstanceStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline Instance& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline Instance& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The fleet location of the instance, expressed as an Amazon Web Services
     * Region code, such as <code>us-west-2</code>. </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The fleet location of the instance, expressed as an Amazon Web Services
     * Region code, such as <code>us-west-2</code>. </p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The fleet location of the instance, expressed as an Amazon Web Services
     * Region code, such as <code>us-west-2</code>. </p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The fleet location of the instance, expressed as an Amazon Web Services
     * Region code, such as <code>us-west-2</code>. </p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The fleet location of the instance, expressed as an Amazon Web Services
     * Region code, such as <code>us-west-2</code>. </p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>The fleet location of the instance, expressed as an Amazon Web Services
     * Region code, such as <code>us-west-2</code>. </p>
     */
    inline Instance& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The fleet location of the instance, expressed as an Amazon Web Services
     * Region code, such as <code>us-west-2</code>. </p>
     */
    inline Instance& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The fleet location of the instance, expressed as an Amazon Web Services
     * Region code, such as <code>us-west-2</code>. </p>
     */
    inline Instance& WithLocation(const char* value) { SetLocation(value); return *this;}

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_dnsName;
    bool m_dnsNameHasBeenSet = false;

    OperatingSystem m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;

    EC2InstanceType m_type;
    bool m_typeHasBeenSet = false;

    InstanceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
