/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class CreateVpcPeeringConnectionRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API CreateVpcPeeringConnectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVpcPeeringConnection"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for the fleet. You can use either the fleet ID or ARN
     * value. This tells Amazon GameLift Servers which GameLift VPC to peer with. </p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    CreateVpcPeeringConnectionRequest& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the Amazon Web Services account with the VPC that you
     * want to peer your Amazon GameLift Servers fleet with. You can find your Account
     * ID in the Amazon Web Services Management Console under account settings.</p>
     */
    inline const Aws::String& GetPeerVpcAwsAccountId() const { return m_peerVpcAwsAccountId; }
    inline bool PeerVpcAwsAccountIdHasBeenSet() const { return m_peerVpcAwsAccountIdHasBeenSet; }
    template<typename PeerVpcAwsAccountIdT = Aws::String>
    void SetPeerVpcAwsAccountId(PeerVpcAwsAccountIdT&& value) { m_peerVpcAwsAccountIdHasBeenSet = true; m_peerVpcAwsAccountId = std::forward<PeerVpcAwsAccountIdT>(value); }
    template<typename PeerVpcAwsAccountIdT = Aws::String>
    CreateVpcPeeringConnectionRequest& WithPeerVpcAwsAccountId(PeerVpcAwsAccountIdT&& value) { SetPeerVpcAwsAccountId(std::forward<PeerVpcAwsAccountIdT>(value)); return *this;}
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
    CreateVpcPeeringConnectionRequest& WithPeerVpcId(PeerVpcIdT&& value) { SetPeerVpcId(std::forward<PeerVpcIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_peerVpcAwsAccountId;
    bool m_peerVpcAwsAccountIdHasBeenSet = false;

    Aws::String m_peerVpcId;
    bool m_peerVpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
