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
#include <aws/core/utils/DateTime.h>
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
   * <p>Represents an authorization for a VPC peering connection between the VPC for
   * an Amazon GameLift fleet and another VPC on an account you have access to. This
   * authorization must exist and be valid for the peering connection to be
   * established. Authorizations are valid for 24 hours after they are issued.</p>
   * <p>VPC peering connection operations include:</p> <ul> <li> <p>
   * <a>CreateVpcPeeringAuthorization</a> </p> </li> <li> <p>
   * <a>DescribeVpcPeeringAuthorizations</a> </p> </li> <li> <p>
   * <a>DeleteVpcPeeringAuthorization</a> </p> </li> <li> <p>
   * <a>CreateVpcPeeringConnection</a> </p> </li> <li> <p>
   * <a>DescribeVpcPeeringConnections</a> </p> </li> <li> <p>
   * <a>DeleteVpcPeeringConnection</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/VpcPeeringAuthorization">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API VpcPeeringAuthorization
  {
  public:
    VpcPeeringAuthorization();
    VpcPeeringAuthorization(const Aws::Utils::Json::JsonValue& jsonValue);
    VpcPeeringAuthorization& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline VpcPeeringAuthorization& WithGameLiftAwsAccountId(const Aws::String& value) { SetGameLiftAwsAccountId(value); return *this;}

    /**
     * <p>Unique identifier for the AWS account that you use to manage your Amazon
     * GameLift fleet. You can find your Account ID in the AWS Management Console under
     * account settings.</p>
     */
    inline VpcPeeringAuthorization& WithGameLiftAwsAccountId(Aws::String&& value) { SetGameLiftAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the AWS account that you use to manage your Amazon
     * GameLift fleet. You can find your Account ID in the AWS Management Console under
     * account settings.</p>
     */
    inline VpcPeeringAuthorization& WithGameLiftAwsAccountId(const char* value) { SetGameLiftAwsAccountId(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetPeerVpcAwsAccountId() const{ return m_peerVpcAwsAccountId; }

    /**
     * <p/>
     */
    inline void SetPeerVpcAwsAccountId(const Aws::String& value) { m_peerVpcAwsAccountIdHasBeenSet = true; m_peerVpcAwsAccountId = value; }

    /**
     * <p/>
     */
    inline void SetPeerVpcAwsAccountId(Aws::String&& value) { m_peerVpcAwsAccountIdHasBeenSet = true; m_peerVpcAwsAccountId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetPeerVpcAwsAccountId(const char* value) { m_peerVpcAwsAccountIdHasBeenSet = true; m_peerVpcAwsAccountId.assign(value); }

    /**
     * <p/>
     */
    inline VpcPeeringAuthorization& WithPeerVpcAwsAccountId(const Aws::String& value) { SetPeerVpcAwsAccountId(value); return *this;}

    /**
     * <p/>
     */
    inline VpcPeeringAuthorization& WithPeerVpcAwsAccountId(Aws::String&& value) { SetPeerVpcAwsAccountId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline VpcPeeringAuthorization& WithPeerVpcAwsAccountId(const char* value) { SetPeerVpcAwsAccountId(value); return *this;}


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
    inline VpcPeeringAuthorization& WithPeerVpcId(const Aws::String& value) { SetPeerVpcId(value); return *this;}

    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * To get VPC information, including IDs, use the Virtual Private Cloud service
     * tools, including the VPC Dashboard in the AWS Management Console.</p>
     */
    inline VpcPeeringAuthorization& WithPeerVpcId(Aws::String&& value) { SetPeerVpcId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a VPC with resources to be accessed by your Amazon
     * GameLift fleet. The VPC must be in the same region where your fleet is deployed.
     * To get VPC information, including IDs, use the Virtual Private Cloud service
     * tools, including the VPC Dashboard in the AWS Management Console.</p>
     */
    inline VpcPeeringAuthorization& WithPeerVpcId(const char* value) { SetPeerVpcId(value); return *this;}


    /**
     * <p>Time stamp indicating when this authorization was issued. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>Time stamp indicating when this authorization was issued. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>Time stamp indicating when this authorization was issued. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>Time stamp indicating when this authorization was issued. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline VpcPeeringAuthorization& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this authorization was issued. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline VpcPeeringAuthorization& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Time stamp indicating when this authorization expires (24 hours after
     * issuance). Format is a number expressed in Unix time as milliseconds (for
     * example "1469498468.057").</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTime() const{ return m_expirationTime; }

    /**
     * <p>Time stamp indicating when this authorization expires (24 hours after
     * issuance). Format is a number expressed in Unix time as milliseconds (for
     * example "1469498468.057").</p>
     */
    inline void SetExpirationTime(const Aws::Utils::DateTime& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = value; }

    /**
     * <p>Time stamp indicating when this authorization expires (24 hours after
     * issuance). Format is a number expressed in Unix time as milliseconds (for
     * example "1469498468.057").</p>
     */
    inline void SetExpirationTime(Aws::Utils::DateTime&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::move(value); }

    /**
     * <p>Time stamp indicating when this authorization expires (24 hours after
     * issuance). Format is a number expressed in Unix time as milliseconds (for
     * example "1469498468.057").</p>
     */
    inline VpcPeeringAuthorization& WithExpirationTime(const Aws::Utils::DateTime& value) { SetExpirationTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this authorization expires (24 hours after
     * issuance). Format is a number expressed in Unix time as milliseconds (for
     * example "1469498468.057").</p>
     */
    inline VpcPeeringAuthorization& WithExpirationTime(Aws::Utils::DateTime&& value) { SetExpirationTime(std::move(value)); return *this;}

  private:

    Aws::String m_gameLiftAwsAccountId;
    bool m_gameLiftAwsAccountIdHasBeenSet;

    Aws::String m_peerVpcAwsAccountId;
    bool m_peerVpcAwsAccountIdHasBeenSet;

    Aws::String m_peerVpcId;
    bool m_peerVpcIdHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_expirationTime;
    bool m_expirationTimeHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
