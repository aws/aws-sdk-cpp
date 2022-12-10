/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3outposts/S3Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3outposts/model/EndpointStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3outposts/model/EndpointAccessType.h>
#include <aws/s3outposts/model/NetworkInterface.h>
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
namespace S3Outposts
{
namespace Model
{

  /**
   * <p>Amazon S3 on Outposts Access Points simplify managing data access at scale
   * for shared datasets in S3 on Outposts. S3 on Outposts uses endpoints to connect
   * to Outposts buckets so that you can perform actions within your virtual private
   * cloud (VPC). For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/WorkingWithS3Outposts.html">
   * Accessing S3 on Outposts using VPC-only access points</a> in the <i>Amazon
   * Simple Storage Service User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3outposts-2017-07-25/Endpoint">AWS
   * API Reference</a></p>
   */
  class Endpoint
  {
  public:
    AWS_S3OUTPOSTS_API Endpoint();
    AWS_S3OUTPOSTS_API Endpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3OUTPOSTS_API Endpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArnHasBeenSet = true; m_endpointArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline void SetEndpointArn(const char* value) { m_endpointArnHasBeenSet = true; m_endpointArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline Endpoint& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline Endpoint& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline Endpoint& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}


    /**
     * <p>The ID of the Outposts.</p>
     */
    inline const Aws::String& GetOutpostsId() const{ return m_outpostsId; }

    /**
     * <p>The ID of the Outposts.</p>
     */
    inline bool OutpostsIdHasBeenSet() const { return m_outpostsIdHasBeenSet; }

    /**
     * <p>The ID of the Outposts.</p>
     */
    inline void SetOutpostsId(const Aws::String& value) { m_outpostsIdHasBeenSet = true; m_outpostsId = value; }

    /**
     * <p>The ID of the Outposts.</p>
     */
    inline void SetOutpostsId(Aws::String&& value) { m_outpostsIdHasBeenSet = true; m_outpostsId = std::move(value); }

    /**
     * <p>The ID of the Outposts.</p>
     */
    inline void SetOutpostsId(const char* value) { m_outpostsIdHasBeenSet = true; m_outpostsId.assign(value); }

    /**
     * <p>The ID of the Outposts.</p>
     */
    inline Endpoint& WithOutpostsId(const Aws::String& value) { SetOutpostsId(value); return *this;}

    /**
     * <p>The ID of the Outposts.</p>
     */
    inline Endpoint& WithOutpostsId(Aws::String&& value) { SetOutpostsId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Outposts.</p>
     */
    inline Endpoint& WithOutpostsId(const char* value) { SetOutpostsId(value); return *this;}


    /**
     * <p>The VPC CIDR committed by this endpoint.</p>
     */
    inline const Aws::String& GetCidrBlock() const{ return m_cidrBlock; }

    /**
     * <p>The VPC CIDR committed by this endpoint.</p>
     */
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }

    /**
     * <p>The VPC CIDR committed by this endpoint.</p>
     */
    inline void SetCidrBlock(const Aws::String& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }

    /**
     * <p>The VPC CIDR committed by this endpoint.</p>
     */
    inline void SetCidrBlock(Aws::String&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::move(value); }

    /**
     * <p>The VPC CIDR committed by this endpoint.</p>
     */
    inline void SetCidrBlock(const char* value) { m_cidrBlockHasBeenSet = true; m_cidrBlock.assign(value); }

    /**
     * <p>The VPC CIDR committed by this endpoint.</p>
     */
    inline Endpoint& WithCidrBlock(const Aws::String& value) { SetCidrBlock(value); return *this;}

    /**
     * <p>The VPC CIDR committed by this endpoint.</p>
     */
    inline Endpoint& WithCidrBlock(Aws::String&& value) { SetCidrBlock(std::move(value)); return *this;}

    /**
     * <p>The VPC CIDR committed by this endpoint.</p>
     */
    inline Endpoint& WithCidrBlock(const char* value) { SetCidrBlock(value); return *this;}


    /**
     * <p>The status of the endpoint.</p>
     */
    inline const EndpointStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the endpoint.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the endpoint.</p>
     */
    inline void SetStatus(const EndpointStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the endpoint.</p>
     */
    inline void SetStatus(EndpointStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the endpoint.</p>
     */
    inline Endpoint& WithStatus(const EndpointStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the endpoint.</p>
     */
    inline Endpoint& WithStatus(EndpointStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time the endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the endpoint was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time the endpoint was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time the endpoint was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time the endpoint was created.</p>
     */
    inline Endpoint& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the endpoint was created.</p>
     */
    inline Endpoint& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The network interface of the endpoint.</p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfaces() const{ return m_networkInterfaces; }

    /**
     * <p>The network interface of the endpoint.</p>
     */
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }

    /**
     * <p>The network interface of the endpoint.</p>
     */
    inline void SetNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }

    /**
     * <p>The network interface of the endpoint.</p>
     */
    inline void SetNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }

    /**
     * <p>The network interface of the endpoint.</p>
     */
    inline Endpoint& WithNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { SetNetworkInterfaces(value); return *this;}

    /**
     * <p>The network interface of the endpoint.</p>
     */
    inline Endpoint& WithNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}

    /**
     * <p>The network interface of the endpoint.</p>
     */
    inline Endpoint& AddNetworkInterfaces(const NetworkInterface& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }

    /**
     * <p>The network interface of the endpoint.</p>
     */
    inline Endpoint& AddNetworkInterfaces(NetworkInterface&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the VPC used for the endpoint.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC used for the endpoint.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC used for the endpoint.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC used for the endpoint.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC used for the endpoint.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC used for the endpoint.</p>
     */
    inline Endpoint& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC used for the endpoint.</p>
     */
    inline Endpoint& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC used for the endpoint.</p>
     */
    inline Endpoint& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The ID of the subnet used for the endpoint.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet used for the endpoint.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The ID of the subnet used for the endpoint.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet used for the endpoint.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of the subnet used for the endpoint.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet used for the endpoint.</p>
     */
    inline Endpoint& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet used for the endpoint.</p>
     */
    inline Endpoint& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet used for the endpoint.</p>
     */
    inline Endpoint& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The ID of the security group used for the endpoint.</p>
     */
    inline const Aws::String& GetSecurityGroupId() const{ return m_securityGroupId; }

    /**
     * <p>The ID of the security group used for the endpoint.</p>
     */
    inline bool SecurityGroupIdHasBeenSet() const { return m_securityGroupIdHasBeenSet; }

    /**
     * <p>The ID of the security group used for the endpoint.</p>
     */
    inline void SetSecurityGroupId(const Aws::String& value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId = value; }

    /**
     * <p>The ID of the security group used for the endpoint.</p>
     */
    inline void SetSecurityGroupId(Aws::String&& value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId = std::move(value); }

    /**
     * <p>The ID of the security group used for the endpoint.</p>
     */
    inline void SetSecurityGroupId(const char* value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId.assign(value); }

    /**
     * <p>The ID of the security group used for the endpoint.</p>
     */
    inline Endpoint& WithSecurityGroupId(const Aws::String& value) { SetSecurityGroupId(value); return *this;}

    /**
     * <p>The ID of the security group used for the endpoint.</p>
     */
    inline Endpoint& WithSecurityGroupId(Aws::String&& value) { SetSecurityGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the security group used for the endpoint.</p>
     */
    inline Endpoint& WithSecurityGroupId(const char* value) { SetSecurityGroupId(value); return *this;}


    /**
     * <p>The type of connectivity used to access the Amazon S3 on Outposts
     * endpoint.</p>
     */
    inline const EndpointAccessType& GetAccessType() const{ return m_accessType; }

    /**
     * <p>The type of connectivity used to access the Amazon S3 on Outposts
     * endpoint.</p>
     */
    inline bool AccessTypeHasBeenSet() const { return m_accessTypeHasBeenSet; }

    /**
     * <p>The type of connectivity used to access the Amazon S3 on Outposts
     * endpoint.</p>
     */
    inline void SetAccessType(const EndpointAccessType& value) { m_accessTypeHasBeenSet = true; m_accessType = value; }

    /**
     * <p>The type of connectivity used to access the Amazon S3 on Outposts
     * endpoint.</p>
     */
    inline void SetAccessType(EndpointAccessType&& value) { m_accessTypeHasBeenSet = true; m_accessType = std::move(value); }

    /**
     * <p>The type of connectivity used to access the Amazon S3 on Outposts
     * endpoint.</p>
     */
    inline Endpoint& WithAccessType(const EndpointAccessType& value) { SetAccessType(value); return *this;}

    /**
     * <p>The type of connectivity used to access the Amazon S3 on Outposts
     * endpoint.</p>
     */
    inline Endpoint& WithAccessType(EndpointAccessType&& value) { SetAccessType(std::move(value)); return *this;}


    /**
     * <p>The ID of the customer-owned IPv4 address pool used for the endpoint.</p>
     */
    inline const Aws::String& GetCustomerOwnedIpv4Pool() const{ return m_customerOwnedIpv4Pool; }

    /**
     * <p>The ID of the customer-owned IPv4 address pool used for the endpoint.</p>
     */
    inline bool CustomerOwnedIpv4PoolHasBeenSet() const { return m_customerOwnedIpv4PoolHasBeenSet; }

    /**
     * <p>The ID of the customer-owned IPv4 address pool used for the endpoint.</p>
     */
    inline void SetCustomerOwnedIpv4Pool(const Aws::String& value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool = value; }

    /**
     * <p>The ID of the customer-owned IPv4 address pool used for the endpoint.</p>
     */
    inline void SetCustomerOwnedIpv4Pool(Aws::String&& value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool = std::move(value); }

    /**
     * <p>The ID of the customer-owned IPv4 address pool used for the endpoint.</p>
     */
    inline void SetCustomerOwnedIpv4Pool(const char* value) { m_customerOwnedIpv4PoolHasBeenSet = true; m_customerOwnedIpv4Pool.assign(value); }

    /**
     * <p>The ID of the customer-owned IPv4 address pool used for the endpoint.</p>
     */
    inline Endpoint& WithCustomerOwnedIpv4Pool(const Aws::String& value) { SetCustomerOwnedIpv4Pool(value); return *this;}

    /**
     * <p>The ID of the customer-owned IPv4 address pool used for the endpoint.</p>
     */
    inline Endpoint& WithCustomerOwnedIpv4Pool(Aws::String&& value) { SetCustomerOwnedIpv4Pool(std::move(value)); return *this;}

    /**
     * <p>The ID of the customer-owned IPv4 address pool used for the endpoint.</p>
     */
    inline Endpoint& WithCustomerOwnedIpv4Pool(const char* value) { SetCustomerOwnedIpv4Pool(value); return *this;}

  private:

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    Aws::String m_outpostsId;
    bool m_outpostsIdHasBeenSet = false;

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;

    EndpointStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Vector<NetworkInterface> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_securityGroupId;
    bool m_securityGroupIdHasBeenSet = false;

    EndpointAccessType m_accessType;
    bool m_accessTypeHasBeenSet = false;

    Aws::String m_customerOwnedIpv4Pool;
    bool m_customerOwnedIpv4PoolHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Outposts
} // namespace Aws
