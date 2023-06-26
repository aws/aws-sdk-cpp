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
    AWS_GAMELIFT_API CreateVpcPeeringConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVpcPeeringConnection"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the fleet. You can use either the fleet ID or ARN
     * value. This tells Amazon GameLift which GameLift VPC to peer with. </p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for the fleet. You can use either the fleet ID or ARN
     * value. This tells Amazon GameLift which GameLift VPC to peer with. </p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the fleet. You can use either the fleet ID or ARN
     * value. This tells Amazon GameLift which GameLift VPC to peer with. </p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for the fleet. You can use either the fleet ID or ARN
     * value. This tells Amazon GameLift which GameLift VPC to peer with. </p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for the fleet. You can use either the fleet ID or ARN
     * value. This tells Amazon GameLift which GameLift VPC to peer with. </p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for the fleet. You can use either the fleet ID or ARN
     * value. This tells Amazon GameLift which GameLift VPC to peer with. </p>
     */
    inline CreateVpcPeeringConnectionRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the fleet. You can use either the fleet ID or ARN
     * value. This tells Amazon GameLift which GameLift VPC to peer with. </p>
     */
    inline CreateVpcPeeringConnectionRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the fleet. You can use either the fleet ID or ARN
     * value. This tells Amazon GameLift which GameLift VPC to peer with. </p>
     */
    inline CreateVpcPeeringConnectionRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>A unique identifier for the Amazon Web Services account with the VPC that you
     * want to peer your Amazon GameLift fleet with. You can find your Account ID in
     * the Amazon Web Services Management Console under account settings.</p>
     */
    inline const Aws::String& GetPeerVpcAwsAccountId() const{ return m_peerVpcAwsAccountId; }

    /**
     * <p>A unique identifier for the Amazon Web Services account with the VPC that you
     * want to peer your Amazon GameLift fleet with. You can find your Account ID in
     * the Amazon Web Services Management Console under account settings.</p>
     */
    inline bool PeerVpcAwsAccountIdHasBeenSet() const { return m_peerVpcAwsAccountIdHasBeenSet; }

    /**
     * <p>A unique identifier for the Amazon Web Services account with the VPC that you
     * want to peer your Amazon GameLift fleet with. You can find your Account ID in
     * the Amazon Web Services Management Console under account settings.</p>
     */
    inline void SetPeerVpcAwsAccountId(const Aws::String& value) { m_peerVpcAwsAccountIdHasBeenSet = true; m_peerVpcAwsAccountId = value; }

    /**
     * <p>A unique identifier for the Amazon Web Services account with the VPC that you
     * want to peer your Amazon GameLift fleet with. You can find your Account ID in
     * the Amazon Web Services Management Console under account settings.</p>
     */
    inline void SetPeerVpcAwsAccountId(Aws::String&& value) { m_peerVpcAwsAccountIdHasBeenSet = true; m_peerVpcAwsAccountId = std::move(value); }

    /**
     * <p>A unique identifier for the Amazon Web Services account with the VPC that you
     * want to peer your Amazon GameLift fleet with. You can find your Account ID in
     * the Amazon Web Services Management Console under account settings.</p>
     */
    inline void SetPeerVpcAwsAccountId(const char* value) { m_peerVpcAwsAccountIdHasBeenSet = true; m_peerVpcAwsAccountId.assign(value); }

    /**
     * <p>A unique identifier for the Amazon Web Services account with the VPC that you
     * want to peer your Amazon GameLift fleet with. You can find your Account ID in
     * the Amazon Web Services Management Console under account settings.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithPeerVpcAwsAccountId(const Aws::String& value) { SetPeerVpcAwsAccountId(value); return *this;}

    /**
     * <p>A unique identifier for the Amazon Web Services account with the VPC that you
     * want to peer your Amazon GameLift fleet with. You can find your Account ID in
     * the Amazon Web Services Management Console under account settings.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithPeerVpcAwsAccountId(Aws::String&& value) { SetPeerVpcAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the Amazon Web Services account with the VPC that you
     * want to peer your Amazon GameLift fleet with. You can find your Account ID in
     * the Amazon Web Services Management Console under account settings.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithPeerVpcAwsAccountId(const char* value) { SetPeerVpcAwsAccountId(value); return *this;}


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
    inline CreateVpcPeeringConnectionRequest& WithPeerVpcId(const Aws::String& value) { SetPeerVpcId(value); return *this;}

    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same Region as your fleet. To look up a
     * VPC ID, use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a>
     * in the Amazon Web Services Management Console. Learn more about VPC peering in
     * <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithPeerVpcId(Aws::String&& value) { SetPeerVpcId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same Region as your fleet. To look up a
     * VPC ID, use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a>
     * in the Amazon Web Services Management Console. Learn more about VPC peering in
     * <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithPeerVpcId(const char* value) { SetPeerVpcId(value); return *this;}

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
