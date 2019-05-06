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
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteVpcPeeringAuthorizationInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API DeleteVpcPeeringAuthorizationRequest : public GameLiftRequest
  {
  public:
    DeleteVpcPeeringAuthorizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVpcPeeringAuthorization"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Unique identifier for the AWS account that you use to manage your Amazon
     * GameLift fleet. You can find your Account ID in the AWS Management Console under
     * account settings.</p>
     */
    inline const Aws::String& GetGameLiftAwsAccountId() const{ return m_gameLiftAwsAccountId; }

    /**
     * <p>Unique identifier for the AWS account that you use to manage your Amazon
     * GameLift fleet. You can find your Account ID in the AWS Management Console under
     * account settings.</p>
     */
    inline bool GameLiftAwsAccountIdHasBeenSet() const { return m_gameLiftAwsAccountIdHasBeenSet; }

    /**
     * <p>Unique identifier for the AWS account that you use to manage your Amazon
     * GameLift fleet. You can find your Account ID in the AWS Management Console under
     * account settings.</p>
     */
    inline void SetGameLiftAwsAccountId(const Aws::String& value) { m_gameLiftAwsAccountIdHasBeenSet = true; m_gameLiftAwsAccountId = value; }

    /**
     * <p>Unique identifier for the AWS account that you use to manage your Amazon
     * GameLift fleet. You can find your Account ID in the AWS Management Console under
     * account settings.</p>
     */
    inline void SetGameLiftAwsAccountId(Aws::String&& value) { m_gameLiftAwsAccountIdHasBeenSet = true; m_gameLiftAwsAccountId = std::move(value); }

    /**
     * <p>Unique identifier for the AWS account that you use to manage your Amazon
     * GameLift fleet. You can find your Account ID in the AWS Management Console under
     * account settings.</p>
     */
    inline void SetGameLiftAwsAccountId(const char* value) { m_gameLiftAwsAccountIdHasBeenSet = true; m_gameLiftAwsAccountId.assign(value); }

    /**
     * <p>Unique identifier for the AWS account that you use to manage your Amazon
     * GameLift fleet. You can find your Account ID in the AWS Management Console under
     * account settings.</p>
     */
    inline DeleteVpcPeeringAuthorizationRequest& WithGameLiftAwsAccountId(const Aws::String& value) { SetGameLiftAwsAccountId(value); return *this;}

    /**
     * <p>Unique identifier for the AWS account that you use to manage your Amazon
     * GameLift fleet. You can find your Account ID in the AWS Management Console under
     * account settings.</p>
     */
    inline DeleteVpcPeeringAuthorizationRequest& WithGameLiftAwsAccountId(Aws::String&& value) { SetGameLiftAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the AWS account that you use to manage your Amazon
     * GameLift fleet. You can find your Account ID in the AWS Management Console under
     * account settings.</p>
     */
    inline DeleteVpcPeeringAuthorizationRequest& WithGameLiftAwsAccountId(const char* value) { SetGameLiftAwsAccountId(value); return *this;}


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
    inline DeleteVpcPeeringAuthorizationRequest& WithPeerVpcId(const Aws::String& value) { SetPeerVpcId(value); return *this;}

    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * Look up a VPC ID using the <a href="https://console.aws.amazon.com/vpc/">VPC
     * Dashboard</a> in the AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>.</p>
     */
    inline DeleteVpcPeeringAuthorizationRequest& WithPeerVpcId(Aws::String&& value) { SetPeerVpcId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * Look up a VPC ID using the <a href="https://console.aws.amazon.com/vpc/">VPC
     * Dashboard</a> in the AWS Management Console. Learn more about VPC peering in <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>.</p>
     */
    inline DeleteVpcPeeringAuthorizationRequest& WithPeerVpcId(const char* value) { SetPeerVpcId(value); return *this;}

  private:

    Aws::String m_gameLiftAwsAccountId;
    bool m_gameLiftAwsAccountIdHasBeenSet;

    Aws::String m_peerVpcId;
    bool m_peerVpcIdHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
