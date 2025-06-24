/**
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
   * <p>Represents a virtual computing instance that runs game server processes and
   * hosts game sessions. In Amazon GameLift Servers, one or more instances make up a
   * managed EC2 fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/Instance">AWS
   * API Reference</a></p>
   */
  class Instance
  {
  public:
    AWS_GAMELIFT_API Instance() = default;
    AWS_GAMELIFT_API Instance(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Instance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the fleet that the instance belongs to.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    Instance& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift Servers fleet resource and uniquely
     * identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline const Aws::String& GetFleetArn() const { return m_fleetArn; }
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }
    template<typename FleetArnT = Aws::String>
    void SetFleetArn(FleetArnT&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::forward<FleetArnT>(value); }
    template<typename FleetArnT = Aws::String>
    Instance& WithFleetArn(FleetArnT&& value) { SetFleetArn(std::forward<FleetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    Instance& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>IP address that is assigned to the instance.</p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    Instance& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetDnsName() const { return m_dnsName; }
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
    template<typename DnsNameT = Aws::String>
    void SetDnsName(DnsNameT&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::forward<DnsNameT>(value); }
    template<typename DnsNameT = Aws::String>
    Instance& WithDnsName(DnsNameT&& value) { SetDnsName(std::forward<DnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Operating system that is running on this EC2 instance. </p>  <p>Amazon
     * Linux 2 (AL2) will reach end of support on 6/30/2025. See more details in the <a
     * href="http://aws.amazon.com/aws.amazon.com/amazon-linux-2/faqs/">Amazon Linux 2
     * FAQs</a>. For game servers that are hosted on AL2 and use server SDK version 4.x
     * for Amazon GameLift Servers, first update the game server build to server SDK
     * 5.x, and then deploy to AL2023 instances. See <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-serversdk5-migration.html">
     * Migrate to server SDK version 5.</a> </p> 
     */
    inline OperatingSystem GetOperatingSystem() const { return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    inline void SetOperatingSystem(OperatingSystem value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }
    inline Instance& WithOperatingSystem(OperatingSystem value) { SetOperatingSystem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>EC2 instance type that defines the computing resources of this instance. </p>
     */
    inline EC2InstanceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(EC2InstanceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Instance& WithType(EC2InstanceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the instance. Possible statuses include the following:</p>
     * <ul> <li> <p> <b>PENDING</b> -- The instance is in the process of being created
     * and launching server processes as defined in the fleet's run-time configuration.
     * </p> </li> <li> <p> <b>ACTIVE</b> -- The instance has been successfully created
     * and at least one server process has successfully launched and reported back to
     * Amazon GameLift Servers that it is ready to host a game session. The instance is
     * now considered ready to host game sessions. </p> </li> <li> <p>
     * <b>TERMINATING</b> -- The instance is in the process of shutting down. This may
     * happen to reduce capacity during a scaling down event or to recycle resources in
     * the event of a problem.</p> </li> </ul>
     */
    inline InstanceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(InstanceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Instance& WithStatus(InstanceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Instance& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet location of the instance, expressed as an Amazon Web Services
     * Region code, such as <code>us-west-2</code>. </p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    Instance& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}
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

    OperatingSystem m_operatingSystem{OperatingSystem::NOT_SET};
    bool m_operatingSystemHasBeenSet = false;

    EC2InstanceType m_type{EC2InstanceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    InstanceStatus m_status{InstanceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
