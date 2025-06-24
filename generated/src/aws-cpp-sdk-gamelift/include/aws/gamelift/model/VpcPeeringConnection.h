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
   * Services accounts and the VPC for your Amazon GameLift Servers fleets. This
   * record may be for an active peering connection or a pending connection that has
   * not yet been established.</p> <p> <b>Related actions</b> </p> <p> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
   * APIs by task</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/VpcPeeringConnection">AWS
   * API Reference</a></p>
   */
  class VpcPeeringConnection
  {
  public:
    AWS_GAMELIFT_API VpcPeeringConnection() = default;
    AWS_GAMELIFT_API VpcPeeringConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API VpcPeeringConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the fleet. This ID determines the ID of the Amazon
     * GameLift Servers VPC for your fleet.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    VpcPeeringConnection& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * associated with the GameLift fleet resource for this connection. </p>
     */
    inline const Aws::String& GetFleetArn() const { return m_fleetArn; }
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }
    template<typename FleetArnT = Aws::String>
    void SetFleetArn(FleetArnT&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::forward<FleetArnT>(value); }
    template<typename FleetArnT = Aws::String>
    VpcPeeringConnection& WithFleetArn(FleetArnT&& value) { SetFleetArn(std::forward<FleetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>CIDR block of IPv4 addresses assigned to the VPC peering connection for the
     * GameLift VPC. The peered VPC also has an IPv4 CIDR block associated with it;
     * these blocks cannot overlap or the peering connection cannot be created. </p>
     */
    inline const Aws::String& GetIpV4CidrBlock() const { return m_ipV4CidrBlock; }
    inline bool IpV4CidrBlockHasBeenSet() const { return m_ipV4CidrBlockHasBeenSet; }
    template<typename IpV4CidrBlockT = Aws::String>
    void SetIpV4CidrBlock(IpV4CidrBlockT&& value) { m_ipV4CidrBlockHasBeenSet = true; m_ipV4CidrBlock = std::forward<IpV4CidrBlockT>(value); }
    template<typename IpV4CidrBlockT = Aws::String>
    VpcPeeringConnection& WithIpV4CidrBlock(IpV4CidrBlockT&& value) { SetIpV4CidrBlock(std::forward<IpV4CidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier that is automatically assigned to the connection record.
     * This ID is referenced in VPC peering connection events, and is used when
     * deleting a connection.</p>
     */
    inline const Aws::String& GetVpcPeeringConnectionId() const { return m_vpcPeeringConnectionId; }
    inline bool VpcPeeringConnectionIdHasBeenSet() const { return m_vpcPeeringConnectionIdHasBeenSet; }
    template<typename VpcPeeringConnectionIdT = Aws::String>
    void SetVpcPeeringConnectionId(VpcPeeringConnectionIdT&& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = std::forward<VpcPeeringConnectionIdT>(value); }
    template<typename VpcPeeringConnectionIdT = Aws::String>
    VpcPeeringConnection& WithVpcPeeringConnectionId(VpcPeeringConnectionIdT&& value) { SetVpcPeeringConnectionId(std::forward<VpcPeeringConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status information about the connection. Status indicates if a connection
     * is pending, successful, or failed.</p>
     */
    inline const VpcPeeringConnectionStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = VpcPeeringConnectionStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = VpcPeeringConnectionStatus>
    VpcPeeringConnection& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift Servers fleet. The VPC must be in the same Region as your fleet. To
     * look up a VPC ID, use the <a href="https://console.aws.amazon.com/vpc/">VPC
     * Dashboard</a> in the Amazon Web Services Management Console. Learn more about
     * VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Servers Fleets</a>.</p>
     */
    inline const Aws::String& GetPeerVpcId() const { return m_peerVpcId; }
    inline bool PeerVpcIdHasBeenSet() const { return m_peerVpcIdHasBeenSet; }
    template<typename PeerVpcIdT = Aws::String>
    void SetPeerVpcId(PeerVpcIdT&& value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId = std::forward<PeerVpcIdT>(value); }
    template<typename PeerVpcIdT = Aws::String>
    VpcPeeringConnection& WithPeerVpcId(PeerVpcIdT&& value) { SetPeerVpcId(std::forward<PeerVpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the VPC that contains the Amazon GameLift Servers
     * fleet for this connection. This VPC is managed by Amazon GameLift Servers and
     * does not appear in your Amazon Web Services account. </p>
     */
    inline const Aws::String& GetGameLiftVpcId() const { return m_gameLiftVpcId; }
    inline bool GameLiftVpcIdHasBeenSet() const { return m_gameLiftVpcIdHasBeenSet; }
    template<typename GameLiftVpcIdT = Aws::String>
    void SetGameLiftVpcId(GameLiftVpcIdT&& value) { m_gameLiftVpcIdHasBeenSet = true; m_gameLiftVpcId = std::forward<GameLiftVpcIdT>(value); }
    template<typename GameLiftVpcIdT = Aws::String>
    VpcPeeringConnection& WithGameLiftVpcId(GameLiftVpcIdT&& value) { SetGameLiftVpcId(std::forward<GameLiftVpcIdT>(value)); return *this;}
    ///@}
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
