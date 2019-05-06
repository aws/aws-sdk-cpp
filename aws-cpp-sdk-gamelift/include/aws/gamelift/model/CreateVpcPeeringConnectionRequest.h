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
   * <p>Represents the input for a request action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateVpcPeeringConnectionInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API CreateVpcPeeringConnectionRequest : public GameLiftRequest
  {
  public:
    CreateVpcPeeringConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVpcPeeringConnection"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Unique identifier for a fleet. This tells Amazon GameLift which GameLift VPC
     * to peer with. </p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for a fleet. This tells Amazon GameLift which GameLift VPC
     * to peer with. </p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>Unique identifier for a fleet. This tells Amazon GameLift which GameLift VPC
     * to peer with. </p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet. This tells Amazon GameLift which GameLift VPC
     * to peer with. </p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>Unique identifier for a fleet. This tells Amazon GameLift which GameLift VPC
     * to peer with. </p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identifier for a fleet. This tells Amazon GameLift which GameLift VPC
     * to peer with. </p>
     */
    inline CreateVpcPeeringConnectionRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet. This tells Amazon GameLift which GameLift VPC
     * to peer with. </p>
     */
    inline CreateVpcPeeringConnectionRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a fleet. This tells Amazon GameLift which GameLift VPC
     * to peer with. </p>
     */
    inline CreateVpcPeeringConnectionRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>Unique identifier for the AWS account with the VPC that you want to peer your
     * Amazon GameLift fleet with. You can find your Account ID in the AWS Management
     * Console under account settings.</p>
     */
    inline const Aws::String& GetPeerVpcAwsAccountId() const{ return m_peerVpcAwsAccountId; }

    /**
     * <p>Unique identifier for the AWS account with the VPC that you want to peer your
     * Amazon GameLift fleet with. You can find your Account ID in the AWS Management
     * Console under account settings.</p>
     */
    inline bool PeerVpcAwsAccountIdHasBeenSet() const { return m_peerVpcAwsAccountIdHasBeenSet; }

    /**
     * <p>Unique identifier for the AWS account with the VPC that you want to peer your
     * Amazon GameLift fleet with. You can find your Account ID in the AWS Management
     * Console under account settings.</p>
     */
    inline void SetPeerVpcAwsAccountId(const Aws::String& value) { m_peerVpcAwsAccountIdHasBeenSet = true; m_peerVpcAwsAccountId = value; }

    /**
     * <p>Unique identifier for the AWS account with the VPC that you want to peer your
     * Amazon GameLift fleet with. You can find your Account ID in the AWS Management
     * Console under account settings.</p>
     */
    inline void SetPeerVpcAwsAccountId(Aws::String&& value) { m_peerVpcAwsAccountIdHasBeenSet = true; m_peerVpcAwsAccountId = std::move(value); }

    /**
     * <p>Unique identifier for the AWS account with the VPC that you want to peer your
     * Amazon GameLift fleet with. You can find your Account ID in the AWS Management
     * Console under account settings.</p>
     */
    inline void SetPeerVpcAwsAccountId(const char* value) { m_peerVpcAwsAccountIdHasBeenSet = true; m_peerVpcAwsAccountId.assign(value); }

    /**
     * <p>Unique identifier for the AWS account with the VPC that you want to peer your
     * Amazon GameLift fleet with. You can find your Account ID in the AWS Management
     * Console under account settings.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithPeerVpcAwsAccountId(const Aws::String& value) { SetPeerVpcAwsAccountId(value); return *this;}

    /**
     * <p>Unique identifier for the AWS account with the VPC that you want to peer your
     * Amazon GameLift fleet with. You can find your Account ID in the AWS Management
     * Console under account settings.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithPeerVpcAwsAccountId(Aws::String&& value) { SetPeerVpcAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the AWS account with the VPC that you want to peer your
     * Amazon GameLift fleet with. You can find your Account ID in the AWS Management
     * Console under account settings.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithPeerVpcAwsAccountId(const char* value) { SetPeerVpcAwsAccountId(value); return *this;}


    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * Look up a VPC ID using the <a href="https://console.aws.amazon.com/vpc/">VPC
     * Dashboard</a> in the AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>.</p>
     */
    inline const Aws::String& GetPeerVpcId() const{ return m_peerVpcId; }

    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * Look up a VPC ID using the <a href="https://console.aws.amazon.com/vpc/">VPC
     * Dashboard</a> in the AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>.</p>
     */
    inline bool PeerVpcIdHasBeenSet() const { return m_peerVpcIdHasBeenSet; }

    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * Look up a VPC ID using the <a href="https://console.aws.amazon.com/vpc/">VPC
     * Dashboard</a> in the AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>.</p>
     */
    inline void SetPeerVpcId(const Aws::String& value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId = value; }

    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * Look up a VPC ID using the <a href="https://console.aws.amazon.com/vpc/">VPC
     * Dashboard</a> in the AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>.</p>
     */
    inline void SetPeerVpcId(Aws::String&& value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId = std::move(value); }

    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * Look up a VPC ID using the <a href="https://console.aws.amazon.com/vpc/">VPC
     * Dashboard</a> in the AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>.</p>
     */
    inline void SetPeerVpcId(const char* value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId.assign(value); }

    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * Look up a VPC ID using the <a href="https://console.aws.amazon.com/vpc/">VPC
     * Dashboard</a> in the AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithPeerVpcId(const Aws::String& value) { SetPeerVpcId(value); return *this;}

    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * Look up a VPC ID using the <a href="https://console.aws.amazon.com/vpc/">VPC
     * Dashboard</a> in the AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithPeerVpcId(Aws::String&& value) { SetPeerVpcId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * Look up a VPC ID using the <a href="https://console.aws.amazon.com/vpc/">VPC
     * Dashboard</a> in the AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>.</p>
     */
    inline CreateVpcPeeringConnectionRequest& WithPeerVpcId(const char* value) { SetPeerVpcId(value); return *this;}

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;

    Aws::String m_peerVpcAwsAccountId;
    bool m_peerVpcAwsAccountIdHasBeenSet;

    Aws::String m_peerVpcId;
    bool m_peerVpcIdHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
