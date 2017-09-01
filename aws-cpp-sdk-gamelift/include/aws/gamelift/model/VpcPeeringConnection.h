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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/VpcPeeringConnectionStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents a peering connection between a VPC on one of your AWS accounts and
   * the VPC for your Amazon GameLift fleets. This record may be for an active
   * peering connection or a pending connection that has not yet been
   * established.</p> <p>VPC peering connection operations include:</p> <ul> <li> <p>
   * <a>CreateVpcPeeringAuthorization</a> </p> </li> <li> <p>
   * <a>DescribeVpcPeeringAuthorizations</a> </p> </li> <li> <p>
   * <a>DeleteVpcPeeringAuthorization</a> </p> </li> <li> <p>
   * <a>CreateVpcPeeringConnection</a> </p> </li> <li> <p>
   * <a>DescribeVpcPeeringConnections</a> </p> </li> <li> <p>
   * <a>DeleteVpcPeeringConnection</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/VpcPeeringConnection">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API VpcPeeringConnection
  {
  public:
    VpcPeeringConnection();
    VpcPeeringConnection(const Aws::Utils::Json::JsonValue& jsonValue);
    VpcPeeringConnection& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Unique identifier for a fleet. This ID determines the ID of the Amazon
     * GameLift VPC for your fleet.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for a fleet. This ID determines the ID of the Amazon
     * GameLift VPC for your fleet.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet. This ID determines the ID of the Amazon
     * GameLift VPC for your fleet.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>Unique identifier for a fleet. This ID determines the ID of the Amazon
     * GameLift VPC for your fleet.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identifier for a fleet. This ID determines the ID of the Amazon
     * GameLift VPC for your fleet.</p>
     */
    inline VpcPeeringConnection& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet. This ID determines the ID of the Amazon
     * GameLift VPC for your fleet.</p>
     */
    inline VpcPeeringConnection& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a fleet. This ID determines the ID of the Amazon
     * GameLift VPC for your fleet.</p>
     */
    inline VpcPeeringConnection& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>CIDR block of IPv4 addresses assigned to the VPC peering connection for the
     * GameLift VPC. The peered VPC also has an IPv4 CIDR block associated with it;
     * these blocks cannot overlap or the peering connection cannot be created. </p>
     */
    inline const Aws::String& GetIpV4CidrBlock() const{ return m_ipV4CidrBlock; }

    /**
     * <p>CIDR block of IPv4 addresses assigned to the VPC peering connection for the
     * GameLift VPC. The peered VPC also has an IPv4 CIDR block associated with it;
     * these blocks cannot overlap or the peering connection cannot be created. </p>
     */
    inline void SetIpV4CidrBlock(const Aws::String& value) { m_ipV4CidrBlockHasBeenSet = true; m_ipV4CidrBlock = value; }

    /**
     * <p>CIDR block of IPv4 addresses assigned to the VPC peering connection for the
     * GameLift VPC. The peered VPC also has an IPv4 CIDR block associated with it;
     * these blocks cannot overlap or the peering connection cannot be created. </p>
     */
    inline void SetIpV4CidrBlock(Aws::String&& value) { m_ipV4CidrBlockHasBeenSet = true; m_ipV4CidrBlock = std::move(value); }

    /**
     * <p>CIDR block of IPv4 addresses assigned to the VPC peering connection for the
     * GameLift VPC. The peered VPC also has an IPv4 CIDR block associated with it;
     * these blocks cannot overlap or the peering connection cannot be created. </p>
     */
    inline void SetIpV4CidrBlock(const char* value) { m_ipV4CidrBlockHasBeenSet = true; m_ipV4CidrBlock.assign(value); }

    /**
     * <p>CIDR block of IPv4 addresses assigned to the VPC peering connection for the
     * GameLift VPC. The peered VPC also has an IPv4 CIDR block associated with it;
     * these blocks cannot overlap or the peering connection cannot be created. </p>
     */
    inline VpcPeeringConnection& WithIpV4CidrBlock(const Aws::String& value) { SetIpV4CidrBlock(value); return *this;}

    /**
     * <p>CIDR block of IPv4 addresses assigned to the VPC peering connection for the
     * GameLift VPC. The peered VPC also has an IPv4 CIDR block associated with it;
     * these blocks cannot overlap or the peering connection cannot be created. </p>
     */
    inline VpcPeeringConnection& WithIpV4CidrBlock(Aws::String&& value) { SetIpV4CidrBlock(std::move(value)); return *this;}

    /**
     * <p>CIDR block of IPv4 addresses assigned to the VPC peering connection for the
     * GameLift VPC. The peered VPC also has an IPv4 CIDR block associated with it;
     * these blocks cannot overlap or the peering connection cannot be created. </p>
     */
    inline VpcPeeringConnection& WithIpV4CidrBlock(const char* value) { SetIpV4CidrBlock(value); return *this;}


    /**
     * <p>Unique identifier that is automatically assigned to the connection record.
     * This ID is referenced in VPC peering connection events, and is used when
     * deleting a connection with <a>DeleteVpcPeeringConnection</a>. </p>
     */
    inline const Aws::String& GetVpcPeeringConnectionId() const{ return m_vpcPeeringConnectionId; }

    /**
     * <p>Unique identifier that is automatically assigned to the connection record.
     * This ID is referenced in VPC peering connection events, and is used when
     * deleting a connection with <a>DeleteVpcPeeringConnection</a>. </p>
     */
    inline void SetVpcPeeringConnectionId(const Aws::String& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = value; }

    /**
     * <p>Unique identifier that is automatically assigned to the connection record.
     * This ID is referenced in VPC peering connection events, and is used when
     * deleting a connection with <a>DeleteVpcPeeringConnection</a>. </p>
     */
    inline void SetVpcPeeringConnectionId(Aws::String&& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = std::move(value); }

    /**
     * <p>Unique identifier that is automatically assigned to the connection record.
     * This ID is referenced in VPC peering connection events, and is used when
     * deleting a connection with <a>DeleteVpcPeeringConnection</a>. </p>
     */
    inline void SetVpcPeeringConnectionId(const char* value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId.assign(value); }

    /**
     * <p>Unique identifier that is automatically assigned to the connection record.
     * This ID is referenced in VPC peering connection events, and is used when
     * deleting a connection with <a>DeleteVpcPeeringConnection</a>. </p>
     */
    inline VpcPeeringConnection& WithVpcPeeringConnectionId(const Aws::String& value) { SetVpcPeeringConnectionId(value); return *this;}

    /**
     * <p>Unique identifier that is automatically assigned to the connection record.
     * This ID is referenced in VPC peering connection events, and is used when
     * deleting a connection with <a>DeleteVpcPeeringConnection</a>. </p>
     */
    inline VpcPeeringConnection& WithVpcPeeringConnectionId(Aws::String&& value) { SetVpcPeeringConnectionId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier that is automatically assigned to the connection record.
     * This ID is referenced in VPC peering connection events, and is used when
     * deleting a connection with <a>DeleteVpcPeeringConnection</a>. </p>
     */
    inline VpcPeeringConnection& WithVpcPeeringConnectionId(const char* value) { SetVpcPeeringConnectionId(value); return *this;}


    /**
     * <p>Object that contains status information about the connection. Status
     * indicates if a connection is pending, successful, or failed.</p>
     */
    inline const VpcPeeringConnectionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Object that contains status information about the connection. Status
     * indicates if a connection is pending, successful, or failed.</p>
     */
    inline void SetStatus(const VpcPeeringConnectionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Object that contains status information about the connection. Status
     * indicates if a connection is pending, successful, or failed.</p>
     */
    inline void SetStatus(VpcPeeringConnectionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Object that contains status information about the connection. Status
     * indicates if a connection is pending, successful, or failed.</p>
     */
    inline VpcPeeringConnection& WithStatus(const VpcPeeringConnectionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Object that contains status information about the connection. Status
     * indicates if a connection is pending, successful, or failed.</p>
     */
    inline VpcPeeringConnection& WithStatus(VpcPeeringConnectionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * To get VPC information, including IDs, use the Virtual Private Cloud service
     * tools, including the VPC Dashboard in the AWS Management Console.</p>
     */
    inline const Aws::String& GetPeerVpcId() const{ return m_peerVpcId; }

    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * To get VPC information, including IDs, use the Virtual Private Cloud service
     * tools, including the VPC Dashboard in the AWS Management Console.</p>
     */
    inline void SetPeerVpcId(const Aws::String& value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId = value; }

    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * To get VPC information, including IDs, use the Virtual Private Cloud service
     * tools, including the VPC Dashboard in the AWS Management Console.</p>
     */
    inline void SetPeerVpcId(Aws::String&& value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId = std::move(value); }

    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * To get VPC information, including IDs, use the Virtual Private Cloud service
     * tools, including the VPC Dashboard in the AWS Management Console.</p>
     */
    inline void SetPeerVpcId(const char* value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId.assign(value); }

    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * To get VPC information, including IDs, use the Virtual Private Cloud service
     * tools, including the VPC Dashboard in the AWS Management Console.</p>
     */
    inline VpcPeeringConnection& WithPeerVpcId(const Aws::String& value) { SetPeerVpcId(value); return *this;}

    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * To get VPC information, including IDs, use the Virtual Private Cloud service
     * tools, including the VPC Dashboard in the AWS Management Console.</p>
     */
    inline VpcPeeringConnection& WithPeerVpcId(Aws::String&& value) { SetPeerVpcId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * To get VPC information, including IDs, use the Virtual Private Cloud service
     * tools, including the VPC Dashboard in the AWS Management Console.</p>
     */
    inline VpcPeeringConnection& WithPeerVpcId(const char* value) { SetPeerVpcId(value); return *this;}


    /**
     * <p>Unique identifier for the VPC that contains the Amazon GameLift fleet for
     * this connection. This VPC is managed by Amazon GameLift and does not appear in
     * your AWS account. </p>
     */
    inline const Aws::String& GetGameLiftVpcId() const{ return m_gameLiftVpcId; }

    /**
     * <p>Unique identifier for the VPC that contains the Amazon GameLift fleet for
     * this connection. This VPC is managed by Amazon GameLift and does not appear in
     * your AWS account. </p>
     */
    inline void SetGameLiftVpcId(const Aws::String& value) { m_gameLiftVpcIdHasBeenSet = true; m_gameLiftVpcId = value; }

    /**
     * <p>Unique identifier for the VPC that contains the Amazon GameLift fleet for
     * this connection. This VPC is managed by Amazon GameLift and does not appear in
     * your AWS account. </p>
     */
    inline void SetGameLiftVpcId(Aws::String&& value) { m_gameLiftVpcIdHasBeenSet = true; m_gameLiftVpcId = std::move(value); }

    /**
     * <p>Unique identifier for the VPC that contains the Amazon GameLift fleet for
     * this connection. This VPC is managed by Amazon GameLift and does not appear in
     * your AWS account. </p>
     */
    inline void SetGameLiftVpcId(const char* value) { m_gameLiftVpcIdHasBeenSet = true; m_gameLiftVpcId.assign(value); }

    /**
     * <p>Unique identifier for the VPC that contains the Amazon GameLift fleet for
     * this connection. This VPC is managed by Amazon GameLift and does not appear in
     * your AWS account. </p>
     */
    inline VpcPeeringConnection& WithGameLiftVpcId(const Aws::String& value) { SetGameLiftVpcId(value); return *this;}

    /**
     * <p>Unique identifier for the VPC that contains the Amazon GameLift fleet for
     * this connection. This VPC is managed by Amazon GameLift and does not appear in
     * your AWS account. </p>
     */
    inline VpcPeeringConnection& WithGameLiftVpcId(Aws::String&& value) { SetGameLiftVpcId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the VPC that contains the Amazon GameLift fleet for
     * this connection. This VPC is managed by Amazon GameLift and does not appear in
     * your AWS account. </p>
     */
    inline VpcPeeringConnection& WithGameLiftVpcId(const char* value) { SetGameLiftVpcId(value); return *this;}

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;

    Aws::String m_ipV4CidrBlock;
    bool m_ipV4CidrBlockHasBeenSet;

    Aws::String m_vpcPeeringConnectionId;
    bool m_vpcPeeringConnectionIdHasBeenSet;

    VpcPeeringConnectionStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_peerVpcId;
    bool m_peerVpcIdHasBeenSet;

    Aws::String m_gameLiftVpcId;
    bool m_gameLiftVpcIdHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
