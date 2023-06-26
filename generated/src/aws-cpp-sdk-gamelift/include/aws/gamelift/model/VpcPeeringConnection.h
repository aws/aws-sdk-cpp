/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents a peering connection between a VPC on one of your Amazon Web
   * Services accounts and the VPC for your Amazon GameLift fleets. This record may
   * be for an active peering connection or a pending connection that has not yet
   * been established.</p> <p> <b>Related actions</b> </p> <p> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
   * APIs by task</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/VpcPeeringConnection">AWS
   * API Reference</a></p>
   */
  class VpcPeeringConnection
  {
  public:
    AWS_GAMELIFT_API VpcPeeringConnection();
    AWS_GAMELIFT_API VpcPeeringConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API VpcPeeringConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the fleet. This ID determines the ID of the Amazon
     * GameLift VPC for your fleet.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for the fleet. This ID determines the ID of the Amazon
     * GameLift VPC for your fleet.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the fleet. This ID determines the ID of the Amazon
     * GameLift VPC for your fleet.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for the fleet. This ID determines the ID of the Amazon
     * GameLift VPC for your fleet.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for the fleet. This ID determines the ID of the Amazon
     * GameLift VPC for your fleet.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for the fleet. This ID determines the ID of the Amazon
     * GameLift VPC for your fleet.</p>
     */
    inline VpcPeeringConnection& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the fleet. This ID determines the ID of the Amazon
     * GameLift VPC for your fleet.</p>
     */
    inline VpcPeeringConnection& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the fleet. This ID determines the ID of the Amazon
     * GameLift VPC for your fleet.</p>
     */
    inline VpcPeeringConnection& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift fleet resource for this connection. </p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift fleet resource for this connection. </p>
     */
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift fleet resource for this connection. </p>
     */
    inline void SetFleetArn(const Aws::String& value) { m_fleetArnHasBeenSet = true; m_fleetArn = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift fleet resource for this connection. </p>
     */
    inline void SetFleetArn(Aws::String&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift fleet resource for this connection. </p>
     */
    inline void SetFleetArn(const char* value) { m_fleetArnHasBeenSet = true; m_fleetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift fleet resource for this connection. </p>
     */
    inline VpcPeeringConnection& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift fleet resource for this connection. </p>
     */
    inline VpcPeeringConnection& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift fleet resource for this connection. </p>
     */
    inline VpcPeeringConnection& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}


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
    inline bool IpV4CidrBlockHasBeenSet() const { return m_ipV4CidrBlockHasBeenSet; }

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
     * <p>A unique identifier that is automatically assigned to the connection record.
     * This ID is referenced in VPC peering connection events, and is used when
     * deleting a connection.</p>
     */
    inline const Aws::String& GetVpcPeeringConnectionId() const{ return m_vpcPeeringConnectionId; }

    /**
     * <p>A unique identifier that is automatically assigned to the connection record.
     * This ID is referenced in VPC peering connection events, and is used when
     * deleting a connection.</p>
     */
    inline bool VpcPeeringConnectionIdHasBeenSet() const { return m_vpcPeeringConnectionIdHasBeenSet; }

    /**
     * <p>A unique identifier that is automatically assigned to the connection record.
     * This ID is referenced in VPC peering connection events, and is used when
     * deleting a connection.</p>
     */
    inline void SetVpcPeeringConnectionId(const Aws::String& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = value; }

    /**
     * <p>A unique identifier that is automatically assigned to the connection record.
     * This ID is referenced in VPC peering connection events, and is used when
     * deleting a connection.</p>
     */
    inline void SetVpcPeeringConnectionId(Aws::String&& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = std::move(value); }

    /**
     * <p>A unique identifier that is automatically assigned to the connection record.
     * This ID is referenced in VPC peering connection events, and is used when
     * deleting a connection.</p>
     */
    inline void SetVpcPeeringConnectionId(const char* value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId.assign(value); }

    /**
     * <p>A unique identifier that is automatically assigned to the connection record.
     * This ID is referenced in VPC peering connection events, and is used when
     * deleting a connection.</p>
     */
    inline VpcPeeringConnection& WithVpcPeeringConnectionId(const Aws::String& value) { SetVpcPeeringConnectionId(value); return *this;}

    /**
     * <p>A unique identifier that is automatically assigned to the connection record.
     * This ID is referenced in VPC peering connection events, and is used when
     * deleting a connection.</p>
     */
    inline VpcPeeringConnection& WithVpcPeeringConnectionId(Aws::String&& value) { SetVpcPeeringConnectionId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that is automatically assigned to the connection record.
     * This ID is referenced in VPC peering connection events, and is used when
     * deleting a connection.</p>
     */
    inline VpcPeeringConnection& WithVpcPeeringConnectionId(const char* value) { SetVpcPeeringConnectionId(value); return *this;}


    /**
     * <p>The status information about the connection. Status indicates if a connection
     * is pending, successful, or failed.</p>
     */
    inline const VpcPeeringConnectionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status information about the connection. Status indicates if a connection
     * is pending, successful, or failed.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status information about the connection. Status indicates if a connection
     * is pending, successful, or failed.</p>
     */
    inline void SetStatus(const VpcPeeringConnectionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status information about the connection. Status indicates if a connection
     * is pending, successful, or failed.</p>
     */
    inline void SetStatus(VpcPeeringConnectionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status information about the connection. Status indicates if a connection
     * is pending, successful, or failed.</p>
     */
    inline VpcPeeringConnection& WithStatus(const VpcPeeringConnectionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status information about the connection. Status indicates if a connection
     * is pending, successful, or failed.</p>
     */
    inline VpcPeeringConnection& WithStatus(VpcPeeringConnectionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same Region as your fleet. To look up a
     * VPC ID, use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a>
     * in the Amazon Web Services Management Console. Learn more about VPC peering in
     * <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>.</p>
     */
    inline const Aws::String& GetPeerVpcId() const{ return m_peerVpcId; }

    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same Region as your fleet. To look up a
     * VPC ID, use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a>
     * in the Amazon Web Services Management Console. Learn more about VPC peering in
     * <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>.</p>
     */
    inline bool PeerVpcIdHasBeenSet() const { return m_peerVpcIdHasBeenSet; }

    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same Region as your fleet. To look up a
     * VPC ID, use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a>
     * in the Amazon Web Services Management Console. Learn more about VPC peering in
     * <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>.</p>
     */
    inline void SetPeerVpcId(const Aws::String& value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId = value; }

    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same Region as your fleet. To look up a
     * VPC ID, use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a>
     * in the Amazon Web Services Management Console. Learn more about VPC peering in
     * <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>.</p>
     */
    inline void SetPeerVpcId(Aws::String&& value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId = std::move(value); }

    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same Region as your fleet. To look up a
     * VPC ID, use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a>
     * in the Amazon Web Services Management Console. Learn more about VPC peering in
     * <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>.</p>
     */
    inline void SetPeerVpcId(const char* value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId.assign(value); }

    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same Region as your fleet. To look up a
     * VPC ID, use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a>
     * in the Amazon Web Services Management Console. Learn more about VPC peering in
     * <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>.</p>
     */
    inline VpcPeeringConnection& WithPeerVpcId(const Aws::String& value) { SetPeerVpcId(value); return *this;}

    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same Region as your fleet. To look up a
     * VPC ID, use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a>
     * in the Amazon Web Services Management Console. Learn more about VPC peering in
     * <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>.</p>
     */
    inline VpcPeeringConnection& WithPeerVpcId(Aws::String&& value) { SetPeerVpcId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same Region as your fleet. To look up a
     * VPC ID, use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a>
     * in the Amazon Web Services Management Console. Learn more about VPC peering in
     * <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>.</p>
     */
    inline VpcPeeringConnection& WithPeerVpcId(const char* value) { SetPeerVpcId(value); return *this;}


    /**
     * <p>A unique identifier for the VPC that contains the Amazon GameLift fleet for
     * this connection. This VPC is managed by Amazon GameLift and does not appear in
     * your Amazon Web Services account. </p>
     */
    inline const Aws::String& GetGameLiftVpcId() const{ return m_gameLiftVpcId; }

    /**
     * <p>A unique identifier for the VPC that contains the Amazon GameLift fleet for
     * this connection. This VPC is managed by Amazon GameLift and does not appear in
     * your Amazon Web Services account. </p>
     */
    inline bool GameLiftVpcIdHasBeenSet() const { return m_gameLiftVpcIdHasBeenSet; }

    /**
     * <p>A unique identifier for the VPC that contains the Amazon GameLift fleet for
     * this connection. This VPC is managed by Amazon GameLift and does not appear in
     * your Amazon Web Services account. </p>
     */
    inline void SetGameLiftVpcId(const Aws::String& value) { m_gameLiftVpcIdHasBeenSet = true; m_gameLiftVpcId = value; }

    /**
     * <p>A unique identifier for the VPC that contains the Amazon GameLift fleet for
     * this connection. This VPC is managed by Amazon GameLift and does not appear in
     * your Amazon Web Services account. </p>
     */
    inline void SetGameLiftVpcId(Aws::String&& value) { m_gameLiftVpcIdHasBeenSet = true; m_gameLiftVpcId = std::move(value); }

    /**
     * <p>A unique identifier for the VPC that contains the Amazon GameLift fleet for
     * this connection. This VPC is managed by Amazon GameLift and does not appear in
     * your Amazon Web Services account. </p>
     */
    inline void SetGameLiftVpcId(const char* value) { m_gameLiftVpcIdHasBeenSet = true; m_gameLiftVpcId.assign(value); }

    /**
     * <p>A unique identifier for the VPC that contains the Amazon GameLift fleet for
     * this connection. This VPC is managed by Amazon GameLift and does not appear in
     * your Amazon Web Services account. </p>
     */
    inline VpcPeeringConnection& WithGameLiftVpcId(const Aws::String& value) { SetGameLiftVpcId(value); return *this;}

    /**
     * <p>A unique identifier for the VPC that contains the Amazon GameLift fleet for
     * this connection. This VPC is managed by Amazon GameLift and does not appear in
     * your Amazon Web Services account. </p>
     */
    inline VpcPeeringConnection& WithGameLiftVpcId(Aws::String&& value) { SetGameLiftVpcId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the VPC that contains the Amazon GameLift fleet for
     * this connection. This VPC is managed by Amazon GameLift and does not appear in
     * your Amazon Web Services account. </p>
     */
    inline VpcPeeringConnection& WithGameLiftVpcId(const char* value) { SetGameLiftVpcId(value); return *this;}

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet = false;

    Aws::String m_ipV4CidrBlock;
    bool m_ipV4CidrBlockHasBeenSet = false;

    Aws::String m_vpcPeeringConnectionId;
    bool m_vpcPeeringConnectionIdHasBeenSet = false;

    VpcPeeringConnectionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_peerVpcId;
    bool m_peerVpcIdHasBeenSet = false;

    Aws::String m_gameLiftVpcId;
    bool m_gameLiftVpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
