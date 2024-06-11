﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>The virtual private cloud (VPC) endpoint settings that are configured for
   * your file transfer protocol-enabled server. With a VPC endpoint, you can
   * restrict access to your server and resources only within your VPC. To control
   * incoming internet traffic, invoke the <code>UpdateServer</code> API and attach
   * an Elastic IP address to your server's endpoint.</p>  <p> After May 19,
   * 2021, you won't be able to create a server using
   * <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web Servicesaccount if
   * your account hasn't already done so before May 19, 2021. If you have already
   * created servers with <code>EndpointType=VPC_ENDPOINT</code> in your Amazon Web
   * Servicesaccount on or before May 19, 2021, you will not be affected. After this
   * date, use <code>EndpointType</code>=<code>VPC</code>.</p> <p>For more
   * information, see
   * https://docs.aws.amazon.com/transfer/latest/userguide/create-server-in-vpc.html#deprecate-vpc-endpoint.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/EndpointDetails">AWS
   * API Reference</a></p>
   */
  class EndpointDetails
  {
  public:
    AWS_TRANSFER_API EndpointDetails();
    AWS_TRANSFER_API EndpointDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API EndpointDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of address allocation IDs that are required to attach an Elastic IP
     * address to your server's endpoint.</p> <p>An address allocation ID corresponds
     * to the allocation ID of an Elastic IP address. This value can be retrieved from
     * the <code>allocationId</code> field from the Amazon EC2 <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Address.html">Address</a>
     * data type. One way to retrieve this value is by calling the EC2 <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeAddresses.html">DescribeAddresses</a>
     * API.</p> <p>This parameter is optional. Set this parameter if you want to make
     * your VPC endpoint public-facing. For details, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/create-server-in-vpc.html#create-internet-facing-endpoint">Create
     * an internet-facing endpoint for your server</a>.</p>  <p>This property can
     * only be set as follows:</p> <ul> <li> <p> <code>EndpointType</code> must be set
     * to <code>VPC</code> </p> </li> <li> <p>The Transfer Family server must be
     * offline.</p> </li> <li> <p>You cannot set this parameter for Transfer Family
     * servers that use the FTP protocol.</p> </li> <li> <p>The server must already
     * have <code>SubnetIds</code> populated (<code>SubnetIds</code> and
     * <code>AddressAllocationIds</code> cannot be updated simultaneously).</p> </li>
     * <li> <p> <code>AddressAllocationIds</code> can't contain duplicates, and must be
     * equal in length to <code>SubnetIds</code>. For example, if you have three subnet
     * IDs, you must also specify three address allocation IDs.</p> </li> <li> <p>Call
     * the <code>UpdateServer</code> API to set or change this parameter.</p> </li>
     * </ul> 
     */
    inline const Aws::Vector<Aws::String>& GetAddressAllocationIds() const{ return m_addressAllocationIds; }
    inline bool AddressAllocationIdsHasBeenSet() const { return m_addressAllocationIdsHasBeenSet; }
    inline void SetAddressAllocationIds(const Aws::Vector<Aws::String>& value) { m_addressAllocationIdsHasBeenSet = true; m_addressAllocationIds = value; }
    inline void SetAddressAllocationIds(Aws::Vector<Aws::String>&& value) { m_addressAllocationIdsHasBeenSet = true; m_addressAllocationIds = std::move(value); }
    inline EndpointDetails& WithAddressAllocationIds(const Aws::Vector<Aws::String>& value) { SetAddressAllocationIds(value); return *this;}
    inline EndpointDetails& WithAddressAllocationIds(Aws::Vector<Aws::String>&& value) { SetAddressAllocationIds(std::move(value)); return *this;}
    inline EndpointDetails& AddAddressAllocationIds(const Aws::String& value) { m_addressAllocationIdsHasBeenSet = true; m_addressAllocationIds.push_back(value); return *this; }
    inline EndpointDetails& AddAddressAllocationIds(Aws::String&& value) { m_addressAllocationIdsHasBeenSet = true; m_addressAllocationIds.push_back(std::move(value)); return *this; }
    inline EndpointDetails& AddAddressAllocationIds(const char* value) { m_addressAllocationIdsHasBeenSet = true; m_addressAllocationIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of subnet IDs that are required to host your server endpoint in your
     * VPC.</p>  <p>This property can only be set when <code>EndpointType</code>
     * is set to <code>VPC</code>.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline EndpointDetails& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline EndpointDetails& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline EndpointDetails& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline EndpointDetails& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline EndpointDetails& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the VPC endpoint.</p>  <p>This property can only be
     * set when <code>EndpointType</code> is set to <code>VPC_ENDPOINT</code>.</p>
     * <p>For more information, see
     * https://docs.aws.amazon.com/transfer/latest/userguide/create-server-in-vpc.html#deprecate-vpc-endpoint.</p>
     * 
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }
    inline EndpointDetails& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}
    inline EndpointDetails& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}
    inline EndpointDetails& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC identifier of the VPC in which a server's endpoint will be
     * hosted.</p>  <p>This property can only be set when
     * <code>EndpointType</code> is set to <code>VPC</code>.</p> 
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline EndpointDetails& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline EndpointDetails& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline EndpointDetails& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of security groups IDs that are available to attach to your server's
     * endpoint.</p>  <p>This property can only be set when
     * <code>EndpointType</code> is set to <code>VPC</code>.</p> <p>You can edit the
     * <code>SecurityGroupIds</code> property in the <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/API_UpdateServer.html">UpdateServer</a>
     * API only if you are changing the <code>EndpointType</code> from
     * <code>PUBLIC</code> or <code>VPC_ENDPOINT</code> to <code>VPC</code>. To change
     * security groups associated with your server's VPC endpoint after creation, use
     * the Amazon EC2 <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ModifyVpcEndpoint.html">ModifyVpcEndpoint</a>
     * API.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline EndpointDetails& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline EndpointDetails& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline EndpointDetails& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline EndpointDetails& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline EndpointDetails& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_addressAllocationIds;
    bool m_addressAllocationIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
