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
   * an Amazon GameLift Servers fleet and another VPC on an account you have access
   * to. This authorization must exist and be valid for the peering connection to be
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
    AWS_GAMELIFT_API VpcPeeringAuthorization() = default;
    AWS_GAMELIFT_API VpcPeeringAuthorization(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API VpcPeeringAuthorization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the Amazon Web Services account that you use to
     * manage your Amazon GameLift Servers fleet. You can find your Account ID in the
     * Amazon Web Services Management Console under account settings.</p>
     */
    inline const Aws::String& GetGameLiftAwsAccountId() const { return m_gameLiftAwsAccountId; }
    inline bool GameLiftAwsAccountIdHasBeenSet() const { return m_gameLiftAwsAccountIdHasBeenSet; }
    template<typename GameLiftAwsAccountIdT = Aws::String>
    void SetGameLiftAwsAccountId(GameLiftAwsAccountIdT&& value) { m_gameLiftAwsAccountIdHasBeenSet = true; m_gameLiftAwsAccountId = std::forward<GameLiftAwsAccountIdT>(value); }
    template<typename GameLiftAwsAccountIdT = Aws::String>
    VpcPeeringAuthorization& WithGameLiftAwsAccountId(GameLiftAwsAccountIdT&& value) { SetGameLiftAwsAccountId(std::forward<GameLiftAwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization's peer VPC Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetPeerVpcAwsAccountId() const { return m_peerVpcAwsAccountId; }
    inline bool PeerVpcAwsAccountIdHasBeenSet() const { return m_peerVpcAwsAccountIdHasBeenSet; }
    template<typename PeerVpcAwsAccountIdT = Aws::String>
    void SetPeerVpcAwsAccountId(PeerVpcAwsAccountIdT&& value) { m_peerVpcAwsAccountIdHasBeenSet = true; m_peerVpcAwsAccountId = std::forward<PeerVpcAwsAccountIdT>(value); }
    template<typename PeerVpcAwsAccountIdT = Aws::String>
    VpcPeeringAuthorization& WithPeerVpcAwsAccountId(PeerVpcAwsAccountIdT&& value) { SetPeerVpcAwsAccountId(std::forward<PeerVpcAwsAccountIdT>(value)); return *this;}
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
    VpcPeeringAuthorization& WithPeerVpcId(PeerVpcIdT&& value) { SetPeerVpcId(std::forward<PeerVpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time stamp indicating when this authorization was issued. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    VpcPeeringAuthorization& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time stamp indicating when this authorization expires (24 hours after
     * issuance). Format is a number expressed in Unix time as milliseconds (for
     * example <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTime() const { return m_expirationTime; }
    inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }
    template<typename ExpirationTimeT = Aws::Utils::DateTime>
    void SetExpirationTime(ExpirationTimeT&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::forward<ExpirationTimeT>(value); }
    template<typename ExpirationTimeT = Aws::Utils::DateTime>
    VpcPeeringAuthorization& WithExpirationTime(ExpirationTimeT&& value) { SetExpirationTime(std::forward<ExpirationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gameLiftAwsAccountId;
    bool m_gameLiftAwsAccountIdHasBeenSet = false;

    Aws::String m_peerVpcAwsAccountId;
    bool m_peerVpcAwsAccountIdHasBeenSet = false;

    Aws::String m_peerVpcId;
    bool m_peerVpcIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_expirationTime{};
    bool m_expirationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
