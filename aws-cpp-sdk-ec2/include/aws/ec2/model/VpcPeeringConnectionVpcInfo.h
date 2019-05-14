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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/VpcPeeringConnectionOptionsDescription.h>
#include <aws/ec2/model/Ipv6CidrBlock.h>
#include <aws/ec2/model/CidrBlock.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a VPC in a VPC peering connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpcPeeringConnectionVpcInfo">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API VpcPeeringConnectionVpcInfo
  {
  public:
    VpcPeeringConnectionVpcInfo();
    VpcPeeringConnectionVpcInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    VpcPeeringConnectionVpcInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The IPv4 CIDR block for the VPC.</p>
     */
    inline const Aws::String& GetCidrBlock() const{ return m_cidrBlock; }

    /**
     * <p>The IPv4 CIDR block for the VPC.</p>
     */
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }

    /**
     * <p>The IPv4 CIDR block for the VPC.</p>
     */
    inline void SetCidrBlock(const Aws::String& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }

    /**
     * <p>The IPv4 CIDR block for the VPC.</p>
     */
    inline void SetCidrBlock(Aws::String&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::move(value); }

    /**
     * <p>The IPv4 CIDR block for the VPC.</p>
     */
    inline void SetCidrBlock(const char* value) { m_cidrBlockHasBeenSet = true; m_cidrBlock.assign(value); }

    /**
     * <p>The IPv4 CIDR block for the VPC.</p>
     */
    inline VpcPeeringConnectionVpcInfo& WithCidrBlock(const Aws::String& value) { SetCidrBlock(value); return *this;}

    /**
     * <p>The IPv4 CIDR block for the VPC.</p>
     */
    inline VpcPeeringConnectionVpcInfo& WithCidrBlock(Aws::String&& value) { SetCidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPv4 CIDR block for the VPC.</p>
     */
    inline VpcPeeringConnectionVpcInfo& WithCidrBlock(const char* value) { SetCidrBlock(value); return *this;}


    /**
     * <p>The IPv6 CIDR block for the VPC.</p>
     */
    inline const Aws::Vector<Ipv6CidrBlock>& GetIpv6CidrBlockSet() const{ return m_ipv6CidrBlockSet; }

    /**
     * <p>The IPv6 CIDR block for the VPC.</p>
     */
    inline bool Ipv6CidrBlockSetHasBeenSet() const { return m_ipv6CidrBlockSetHasBeenSet; }

    /**
     * <p>The IPv6 CIDR block for the VPC.</p>
     */
    inline void SetIpv6CidrBlockSet(const Aws::Vector<Ipv6CidrBlock>& value) { m_ipv6CidrBlockSetHasBeenSet = true; m_ipv6CidrBlockSet = value; }

    /**
     * <p>The IPv6 CIDR block for the VPC.</p>
     */
    inline void SetIpv6CidrBlockSet(Aws::Vector<Ipv6CidrBlock>&& value) { m_ipv6CidrBlockSetHasBeenSet = true; m_ipv6CidrBlockSet = std::move(value); }

    /**
     * <p>The IPv6 CIDR block for the VPC.</p>
     */
    inline VpcPeeringConnectionVpcInfo& WithIpv6CidrBlockSet(const Aws::Vector<Ipv6CidrBlock>& value) { SetIpv6CidrBlockSet(value); return *this;}

    /**
     * <p>The IPv6 CIDR block for the VPC.</p>
     */
    inline VpcPeeringConnectionVpcInfo& WithIpv6CidrBlockSet(Aws::Vector<Ipv6CidrBlock>&& value) { SetIpv6CidrBlockSet(std::move(value)); return *this;}

    /**
     * <p>The IPv6 CIDR block for the VPC.</p>
     */
    inline VpcPeeringConnectionVpcInfo& AddIpv6CidrBlockSet(const Ipv6CidrBlock& value) { m_ipv6CidrBlockSetHasBeenSet = true; m_ipv6CidrBlockSet.push_back(value); return *this; }

    /**
     * <p>The IPv6 CIDR block for the VPC.</p>
     */
    inline VpcPeeringConnectionVpcInfo& AddIpv6CidrBlockSet(Ipv6CidrBlock&& value) { m_ipv6CidrBlockSetHasBeenSet = true; m_ipv6CidrBlockSet.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the IPv4 CIDR blocks for the VPC.</p>
     */
    inline const Aws::Vector<CidrBlock>& GetCidrBlockSet() const{ return m_cidrBlockSet; }

    /**
     * <p>Information about the IPv4 CIDR blocks for the VPC.</p>
     */
    inline bool CidrBlockSetHasBeenSet() const { return m_cidrBlockSetHasBeenSet; }

    /**
     * <p>Information about the IPv4 CIDR blocks for the VPC.</p>
     */
    inline void SetCidrBlockSet(const Aws::Vector<CidrBlock>& value) { m_cidrBlockSetHasBeenSet = true; m_cidrBlockSet = value; }

    /**
     * <p>Information about the IPv4 CIDR blocks for the VPC.</p>
     */
    inline void SetCidrBlockSet(Aws::Vector<CidrBlock>&& value) { m_cidrBlockSetHasBeenSet = true; m_cidrBlockSet = std::move(value); }

    /**
     * <p>Information about the IPv4 CIDR blocks for the VPC.</p>
     */
    inline VpcPeeringConnectionVpcInfo& WithCidrBlockSet(const Aws::Vector<CidrBlock>& value) { SetCidrBlockSet(value); return *this;}

    /**
     * <p>Information about the IPv4 CIDR blocks for the VPC.</p>
     */
    inline VpcPeeringConnectionVpcInfo& WithCidrBlockSet(Aws::Vector<CidrBlock>&& value) { SetCidrBlockSet(std::move(value)); return *this;}

    /**
     * <p>Information about the IPv4 CIDR blocks for the VPC.</p>
     */
    inline VpcPeeringConnectionVpcInfo& AddCidrBlockSet(const CidrBlock& value) { m_cidrBlockSetHasBeenSet = true; m_cidrBlockSet.push_back(value); return *this; }

    /**
     * <p>Information about the IPv4 CIDR blocks for the VPC.</p>
     */
    inline VpcPeeringConnectionVpcInfo& AddCidrBlockSet(CidrBlock&& value) { m_cidrBlockSetHasBeenSet = true; m_cidrBlockSet.push_back(std::move(value)); return *this; }


    /**
     * <p>The AWS account ID of the VPC owner.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The AWS account ID of the VPC owner.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The AWS account ID of the VPC owner.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The AWS account ID of the VPC owner.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The AWS account ID of the VPC owner.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The AWS account ID of the VPC owner.</p>
     */
    inline VpcPeeringConnectionVpcInfo& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The AWS account ID of the VPC owner.</p>
     */
    inline VpcPeeringConnectionVpcInfo& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID of the VPC owner.</p>
     */
    inline VpcPeeringConnectionVpcInfo& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>Information about the VPC peering connection options for the accepter or
     * requester VPC.</p>
     */
    inline const VpcPeeringConnectionOptionsDescription& GetPeeringOptions() const{ return m_peeringOptions; }

    /**
     * <p>Information about the VPC peering connection options for the accepter or
     * requester VPC.</p>
     */
    inline bool PeeringOptionsHasBeenSet() const { return m_peeringOptionsHasBeenSet; }

    /**
     * <p>Information about the VPC peering connection options for the accepter or
     * requester VPC.</p>
     */
    inline void SetPeeringOptions(const VpcPeeringConnectionOptionsDescription& value) { m_peeringOptionsHasBeenSet = true; m_peeringOptions = value; }

    /**
     * <p>Information about the VPC peering connection options for the accepter or
     * requester VPC.</p>
     */
    inline void SetPeeringOptions(VpcPeeringConnectionOptionsDescription&& value) { m_peeringOptionsHasBeenSet = true; m_peeringOptions = std::move(value); }

    /**
     * <p>Information about the VPC peering connection options for the accepter or
     * requester VPC.</p>
     */
    inline VpcPeeringConnectionVpcInfo& WithPeeringOptions(const VpcPeeringConnectionOptionsDescription& value) { SetPeeringOptions(value); return *this;}

    /**
     * <p>Information about the VPC peering connection options for the accepter or
     * requester VPC.</p>
     */
    inline VpcPeeringConnectionVpcInfo& WithPeeringOptions(VpcPeeringConnectionOptionsDescription&& value) { SetPeeringOptions(std::move(value)); return *this;}


    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline VpcPeeringConnectionVpcInfo& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline VpcPeeringConnectionVpcInfo& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline VpcPeeringConnectionVpcInfo& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The Region in which the VPC is located.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Region in which the VPC is located.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Region in which the VPC is located.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Region in which the VPC is located.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Region in which the VPC is located.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Region in which the VPC is located.</p>
     */
    inline VpcPeeringConnectionVpcInfo& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Region in which the VPC is located.</p>
     */
    inline VpcPeeringConnectionVpcInfo& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Region in which the VPC is located.</p>
     */
    inline VpcPeeringConnectionVpcInfo& WithRegion(const char* value) { SetRegion(value); return *this;}

  private:

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet;

    Aws::Vector<Ipv6CidrBlock> m_ipv6CidrBlockSet;
    bool m_ipv6CidrBlockSetHasBeenSet;

    Aws::Vector<CidrBlock> m_cidrBlockSet;
    bool m_cidrBlockSetHasBeenSet;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet;

    VpcPeeringConnectionOptionsDescription m_peeringOptions;
    bool m_peeringOptionsHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
