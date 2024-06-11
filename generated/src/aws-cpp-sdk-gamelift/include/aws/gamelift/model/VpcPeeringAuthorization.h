/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Represents an authorization for a VPC peering connection between the VPC for
   * an Amazon GameLift fleet and another VPC on an account you have access to. This
   * authorization must exist and be valid for the peering connection to be
   * established. Authorizations are valid for 24 hours after they are issued.</p>
   * <p> <b>Related actions</b> </p> <p> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
   * APIs by task</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/VpcPeeringAuthorization">AWS
   * API Reference</a></p>
   */
  class VpcPeeringAuthorization
  {
  public:
    AWS_GAMELIFT_API VpcPeeringAuthorization();
    AWS_GAMELIFT_API VpcPeeringAuthorization(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API VpcPeeringAuthorization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the Amazon Web Services account that you use to
     * manage your Amazon GameLift fleet. You can find your Account ID in the Amazon
     * Web Services Management Console under account settings.</p>
     */
    inline const Aws::String& GetGameLiftAwsAccountId() const{ return m_gameLiftAwsAccountId; }
    inline bool GameLiftAwsAccountIdHasBeenSet() const { return m_gameLiftAwsAccountIdHasBeenSet; }
    inline void SetGameLiftAwsAccountId(const Aws::String& value) { m_gameLiftAwsAccountIdHasBeenSet = true; m_gameLiftAwsAccountId = value; }
    inline void SetGameLiftAwsAccountId(Aws::String&& value) { m_gameLiftAwsAccountIdHasBeenSet = true; m_gameLiftAwsAccountId = std::move(value); }
    inline void SetGameLiftAwsAccountId(const char* value) { m_gameLiftAwsAccountIdHasBeenSet = true; m_gameLiftAwsAccountId.assign(value); }
    inline VpcPeeringAuthorization& WithGameLiftAwsAccountId(const Aws::String& value) { SetGameLiftAwsAccountId(value); return *this;}
    inline VpcPeeringAuthorization& WithGameLiftAwsAccountId(Aws::String&& value) { SetGameLiftAwsAccountId(std::move(value)); return *this;}
    inline VpcPeeringAuthorization& WithGameLiftAwsAccountId(const char* value) { SetGameLiftAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization's peer VPC Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetPeerVpcAwsAccountId() const{ return m_peerVpcAwsAccountId; }
    inline bool PeerVpcAwsAccountIdHasBeenSet() const { return m_peerVpcAwsAccountIdHasBeenSet; }
    inline void SetPeerVpcAwsAccountId(const Aws::String& value) { m_peerVpcAwsAccountIdHasBeenSet = true; m_peerVpcAwsAccountId = value; }
    inline void SetPeerVpcAwsAccountId(Aws::String&& value) { m_peerVpcAwsAccountIdHasBeenSet = true; m_peerVpcAwsAccountId = std::move(value); }
    inline void SetPeerVpcAwsAccountId(const char* value) { m_peerVpcAwsAccountIdHasBeenSet = true; m_peerVpcAwsAccountId.assign(value); }
    inline VpcPeeringAuthorization& WithPeerVpcAwsAccountId(const Aws::String& value) { SetPeerVpcAwsAccountId(value); return *this;}
    inline VpcPeeringAuthorization& WithPeerVpcAwsAccountId(Aws::String&& value) { SetPeerVpcAwsAccountId(std::move(value)); return *this;}
    inline VpcPeeringAuthorization& WithPeerVpcAwsAccountId(const char* value) { SetPeerVpcAwsAccountId(value); return *this;}
    ///@}

    ///@{
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
    inline bool PeerVpcIdHasBeenSet() const { return m_peerVpcIdHasBeenSet; }
    inline void SetPeerVpcId(const Aws::String& value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId = value; }
    inline void SetPeerVpcId(Aws::String&& value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId = std::move(value); }
    inline void SetPeerVpcId(const char* value) { m_peerVpcIdHasBeenSet = true; m_peerVpcId.assign(value); }
    inline VpcPeeringAuthorization& WithPeerVpcId(const Aws::String& value) { SetPeerVpcId(value); return *this;}
    inline VpcPeeringAuthorization& WithPeerVpcId(Aws::String&& value) { SetPeerVpcId(std::move(value)); return *this;}
    inline VpcPeeringAuthorization& WithPeerVpcId(const char* value) { SetPeerVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time stamp indicating when this authorization was issued. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline VpcPeeringAuthorization& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline VpcPeeringAuthorization& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time stamp indicating when this authorization expires (24 hours after
     * issuance). Format is a number expressed in Unix time as milliseconds (for
     * example <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTime() const{ return m_expirationTime; }
    inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }
    inline void SetExpirationTime(const Aws::Utils::DateTime& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = value; }
    inline void SetExpirationTime(Aws::Utils::DateTime&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::move(value); }
    inline VpcPeeringAuthorization& WithExpirationTime(const Aws::Utils::DateTime& value) { SetExpirationTime(value); return *this;}
    inline VpcPeeringAuthorization& WithExpirationTime(Aws::Utils::DateTime&& value) { SetExpirationTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_gameLiftAwsAccountId;
    bool m_gameLiftAwsAccountIdHasBeenSet = false;

    Aws::String m_peerVpcAwsAccountId;
    bool m_peerVpcAwsAccountIdHasBeenSet = false;

    Aws::String m_peerVpcId;
    bool m_peerVpcIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_expirationTime;
    bool m_expirationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
