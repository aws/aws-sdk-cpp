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
  class DeleteVpcPeeringAuthorizationRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API DeleteVpcPeeringAuthorizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVpcPeeringAuthorization"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the Amazon Web Services account that you use to
     * manage your Amazon GameLift fleet. You can find your Account ID in the Amazon
     * Web Services Management Console under account settings.</p>
     */
    inline const Aws::String& GetGameLiftAwsAccountId() const{ return m_gameLiftAwsAccountId; }

    /**
     * <p>A unique identifier for the Amazon Web Services account that you use to
     * manage your Amazon GameLift fleet. You can find your Account ID in the Amazon
     * Web Services Management Console under account settings.</p>
     */
    inline bool GameLiftAwsAccountIdHasBeenSet() const { return m_gameLiftAwsAccountIdHasBeenSet; }

    /**
     * <p>A unique identifier for the Amazon Web Services account that you use to
     * manage your Amazon GameLift fleet. You can find your Account ID in the Amazon
     * Web Services Management Console under account settings.</p>
     */
    inline void SetGameLiftAwsAccountId(const Aws::String& value) { m_gameLiftAwsAccountIdHasBeenSet = true; m_gameLiftAwsAccountId = value; }

    /**
     * <p>A unique identifier for the Amazon Web Services account that you use to
     * manage your Amazon GameLift fleet. You can find your Account ID in the Amazon
     * Web Services Management Console under account settings.</p>
     */
    inline void SetGameLiftAwsAccountId(Aws::String&& value) { m_gameLiftAwsAccountIdHasBeenSet = true; m_gameLiftAwsAccountId = std::move(value); }

    /**
     * <p>A unique identifier for the Amazon Web Services account that you use to
     * manage your Amazon GameLift fleet. You can find your Account ID in the Amazon
     * Web Services Management Console under account settings.</p>
     */
    inline void SetGameLiftAwsAccountId(const char* value) { m_gameLiftAwsAccountIdHasBeenSet = true; m_gameLiftAwsAccountId.assign(value); }

    /**
     * <p>A unique identifier for the Amazon Web Services account that you use to
     * manage your Amazon GameLift fleet. You can find your Account ID in the Amazon
     * Web Services Management Console under account settings.</p>
     */
    inline DeleteVpcPeeringAuthorizationRequest& WithGameLiftAwsAccountId(const Aws::String& value) { SetGameLiftAwsAccountId(value); return *this;}

    /**
     * <p>A unique identifier for the Amazon Web Services account that you use to
     * manage your Amazon GameLift fleet. You can find your Account ID in the Amazon
     * Web Services Management Console under account settings.</p>
     */
    inline DeleteVpcPeeringAuthorizationRequest& WithGameLiftAwsAccountId(Aws::String&& value) { SetGameLiftAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the Amazon Web Services account that you use to
     * manage your Amazon GameLift fleet. You can find your Account ID in the Amazon
     * Web Services Management Console under account settings.</p>
     */
    inline DeleteVpcPeeringAuthorizationRequest& WithGameLiftAwsAccountId(const char* value) { SetGameLiftAwsAccountId(value); return *this;}


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
    inline DeleteVpcPeeringAuthorizationRequest& WithPeerVpcId(const Aws::String& value) { SetPeerVpcId(value); return *this;}

    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same Region as your fleet. To look up a
     * VPC ID, use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a>
     * in the Amazon Web Services Management Console. Learn more about VPC peering in
     * <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>.</p>
     */
    inline DeleteVpcPeeringAuthorizationRequest& WithPeerVpcId(Aws::String&& value) { SetPeerVpcId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same Region as your fleet. To look up a
     * VPC ID, use the <a href="https://console.aws.amazon.com/vpc/">VPC Dashboard</a>
     * in the Amazon Web Services Management Console. Learn more about VPC peering in
     * <a
     * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
     * Peering with Amazon GameLift Fleets</a>.</p>
     */
    inline DeleteVpcPeeringAuthorizationRequest& WithPeerVpcId(const char* value) { SetPeerVpcId(value); return *this;}

  private:

    Aws::String m_gameLiftAwsAccountId;
    bool m_gameLiftAwsAccountIdHasBeenSet = false;

    Aws::String m_peerVpcId;
    bool m_peerVpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
