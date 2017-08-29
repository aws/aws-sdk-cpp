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
#include <aws/ec2/model/VpcState.h>
#include <aws/ec2/model/Tenancy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/VpcIpv6CidrBlockAssociation.h>
#include <aws/ec2/model/VpcCidrBlockAssociation.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>Describes a VPC.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Vpc">AWS API
   * Reference</a></p>
   */
  class AWS_EC2_API Vpc
  {
  public:
    Vpc();
    Vpc(const Aws::Utils::Xml::XmlNode& xmlNode);
    Vpc& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The primary IPv4 CIDR block for the VPC.</p>
     */
    inline const Aws::String& GetCidrBlock() const{ return m_cidrBlock; }

    /**
     * <p>The primary IPv4 CIDR block for the VPC.</p>
     */
    inline void SetCidrBlock(const Aws::String& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }

    /**
     * <p>The primary IPv4 CIDR block for the VPC.</p>
     */
    inline void SetCidrBlock(Aws::String&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::move(value); }

    /**
     * <p>The primary IPv4 CIDR block for the VPC.</p>
     */
    inline void SetCidrBlock(const char* value) { m_cidrBlockHasBeenSet = true; m_cidrBlock.assign(value); }

    /**
     * <p>The primary IPv4 CIDR block for the VPC.</p>
     */
    inline Vpc& WithCidrBlock(const Aws::String& value) { SetCidrBlock(value); return *this;}

    /**
     * <p>The primary IPv4 CIDR block for the VPC.</p>
     */
    inline Vpc& WithCidrBlock(Aws::String&& value) { SetCidrBlock(std::move(value)); return *this;}

    /**
     * <p>The primary IPv4 CIDR block for the VPC.</p>
     */
    inline Vpc& WithCidrBlock(const char* value) { SetCidrBlock(value); return *this;}


    /**
     * <p>The ID of the set of DHCP options you've associated with the VPC (or
     * <code>default</code> if the default options are associated with the VPC).</p>
     */
    inline const Aws::String& GetDhcpOptionsId() const{ return m_dhcpOptionsId; }

    /**
     * <p>The ID of the set of DHCP options you've associated with the VPC (or
     * <code>default</code> if the default options are associated with the VPC).</p>
     */
    inline void SetDhcpOptionsId(const Aws::String& value) { m_dhcpOptionsIdHasBeenSet = true; m_dhcpOptionsId = value; }

    /**
     * <p>The ID of the set of DHCP options you've associated with the VPC (or
     * <code>default</code> if the default options are associated with the VPC).</p>
     */
    inline void SetDhcpOptionsId(Aws::String&& value) { m_dhcpOptionsIdHasBeenSet = true; m_dhcpOptionsId = std::move(value); }

    /**
     * <p>The ID of the set of DHCP options you've associated with the VPC (or
     * <code>default</code> if the default options are associated with the VPC).</p>
     */
    inline void SetDhcpOptionsId(const char* value) { m_dhcpOptionsIdHasBeenSet = true; m_dhcpOptionsId.assign(value); }

    /**
     * <p>The ID of the set of DHCP options you've associated with the VPC (or
     * <code>default</code> if the default options are associated with the VPC).</p>
     */
    inline Vpc& WithDhcpOptionsId(const Aws::String& value) { SetDhcpOptionsId(value); return *this;}

    /**
     * <p>The ID of the set of DHCP options you've associated with the VPC (or
     * <code>default</code> if the default options are associated with the VPC).</p>
     */
    inline Vpc& WithDhcpOptionsId(Aws::String&& value) { SetDhcpOptionsId(std::move(value)); return *this;}

    /**
     * <p>The ID of the set of DHCP options you've associated with the VPC (or
     * <code>default</code> if the default options are associated with the VPC).</p>
     */
    inline Vpc& WithDhcpOptionsId(const char* value) { SetDhcpOptionsId(value); return *this;}


    /**
     * <p>The current state of the VPC.</p>
     */
    inline const VpcState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the VPC.</p>
     */
    inline void SetState(const VpcState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the VPC.</p>
     */
    inline void SetState(VpcState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the VPC.</p>
     */
    inline Vpc& WithState(const VpcState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the VPC.</p>
     */
    inline Vpc& WithState(VpcState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

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
    inline Vpc& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline Vpc& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline Vpc& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The allowed tenancy of instances launched into the VPC.</p>
     */
    inline const Tenancy& GetInstanceTenancy() const{ return m_instanceTenancy; }

    /**
     * <p>The allowed tenancy of instances launched into the VPC.</p>
     */
    inline void SetInstanceTenancy(const Tenancy& value) { m_instanceTenancyHasBeenSet = true; m_instanceTenancy = value; }

    /**
     * <p>The allowed tenancy of instances launched into the VPC.</p>
     */
    inline void SetInstanceTenancy(Tenancy&& value) { m_instanceTenancyHasBeenSet = true; m_instanceTenancy = std::move(value); }

    /**
     * <p>The allowed tenancy of instances launched into the VPC.</p>
     */
    inline Vpc& WithInstanceTenancy(const Tenancy& value) { SetInstanceTenancy(value); return *this;}

    /**
     * <p>The allowed tenancy of instances launched into the VPC.</p>
     */
    inline Vpc& WithInstanceTenancy(Tenancy&& value) { SetInstanceTenancy(std::move(value)); return *this;}


    /**
     * <p>Information about the IPv6 CIDR blocks associated with the VPC.</p>
     */
    inline const Aws::Vector<VpcIpv6CidrBlockAssociation>& GetIpv6CidrBlockAssociationSet() const{ return m_ipv6CidrBlockAssociationSet; }

    /**
     * <p>Information about the IPv6 CIDR blocks associated with the VPC.</p>
     */
    inline void SetIpv6CidrBlockAssociationSet(const Aws::Vector<VpcIpv6CidrBlockAssociation>& value) { m_ipv6CidrBlockAssociationSetHasBeenSet = true; m_ipv6CidrBlockAssociationSet = value; }

    /**
     * <p>Information about the IPv6 CIDR blocks associated with the VPC.</p>
     */
    inline void SetIpv6CidrBlockAssociationSet(Aws::Vector<VpcIpv6CidrBlockAssociation>&& value) { m_ipv6CidrBlockAssociationSetHasBeenSet = true; m_ipv6CidrBlockAssociationSet = std::move(value); }

    /**
     * <p>Information about the IPv6 CIDR blocks associated with the VPC.</p>
     */
    inline Vpc& WithIpv6CidrBlockAssociationSet(const Aws::Vector<VpcIpv6CidrBlockAssociation>& value) { SetIpv6CidrBlockAssociationSet(value); return *this;}

    /**
     * <p>Information about the IPv6 CIDR blocks associated with the VPC.</p>
     */
    inline Vpc& WithIpv6CidrBlockAssociationSet(Aws::Vector<VpcIpv6CidrBlockAssociation>&& value) { SetIpv6CidrBlockAssociationSet(std::move(value)); return *this;}

    /**
     * <p>Information about the IPv6 CIDR blocks associated with the VPC.</p>
     */
    inline Vpc& AddIpv6CidrBlockAssociationSet(const VpcIpv6CidrBlockAssociation& value) { m_ipv6CidrBlockAssociationSetHasBeenSet = true; m_ipv6CidrBlockAssociationSet.push_back(value); return *this; }

    /**
     * <p>Information about the IPv6 CIDR blocks associated with the VPC.</p>
     */
    inline Vpc& AddIpv6CidrBlockAssociationSet(VpcIpv6CidrBlockAssociation&& value) { m_ipv6CidrBlockAssociationSetHasBeenSet = true; m_ipv6CidrBlockAssociationSet.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the IPv4 CIDR blocks associated with the VPC.</p>
     */
    inline const Aws::Vector<VpcCidrBlockAssociation>& GetCidrBlockAssociationSet() const{ return m_cidrBlockAssociationSet; }

    /**
     * <p>Information about the IPv4 CIDR blocks associated with the VPC.</p>
     */
    inline void SetCidrBlockAssociationSet(const Aws::Vector<VpcCidrBlockAssociation>& value) { m_cidrBlockAssociationSetHasBeenSet = true; m_cidrBlockAssociationSet = value; }

    /**
     * <p>Information about the IPv4 CIDR blocks associated with the VPC.</p>
     */
    inline void SetCidrBlockAssociationSet(Aws::Vector<VpcCidrBlockAssociation>&& value) { m_cidrBlockAssociationSetHasBeenSet = true; m_cidrBlockAssociationSet = std::move(value); }

    /**
     * <p>Information about the IPv4 CIDR blocks associated with the VPC.</p>
     */
    inline Vpc& WithCidrBlockAssociationSet(const Aws::Vector<VpcCidrBlockAssociation>& value) { SetCidrBlockAssociationSet(value); return *this;}

    /**
     * <p>Information about the IPv4 CIDR blocks associated with the VPC.</p>
     */
    inline Vpc& WithCidrBlockAssociationSet(Aws::Vector<VpcCidrBlockAssociation>&& value) { SetCidrBlockAssociationSet(std::move(value)); return *this;}

    /**
     * <p>Information about the IPv4 CIDR blocks associated with the VPC.</p>
     */
    inline Vpc& AddCidrBlockAssociationSet(const VpcCidrBlockAssociation& value) { m_cidrBlockAssociationSetHasBeenSet = true; m_cidrBlockAssociationSet.push_back(value); return *this; }

    /**
     * <p>Information about the IPv4 CIDR blocks associated with the VPC.</p>
     */
    inline Vpc& AddCidrBlockAssociationSet(VpcCidrBlockAssociation&& value) { m_cidrBlockAssociationSetHasBeenSet = true; m_cidrBlockAssociationSet.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether the VPC is the default VPC.</p>
     */
    inline bool GetIsDefault() const{ return m_isDefault; }

    /**
     * <p>Indicates whether the VPC is the default VPC.</p>
     */
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }

    /**
     * <p>Indicates whether the VPC is the default VPC.</p>
     */
    inline Vpc& WithIsDefault(bool value) { SetIsDefault(value); return *this;}


    /**
     * <p>Any tags assigned to the VPC.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the VPC.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the VPC.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the VPC.</p>
     */
    inline Vpc& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the VPC.</p>
     */
    inline Vpc& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the VPC.</p>
     */
    inline Vpc& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the VPC.</p>
     */
    inline Vpc& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet;

    Aws::String m_dhcpOptionsId;
    bool m_dhcpOptionsIdHasBeenSet;

    VpcState m_state;
    bool m_stateHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    Tenancy m_instanceTenancy;
    bool m_instanceTenancyHasBeenSet;

    Aws::Vector<VpcIpv6CidrBlockAssociation> m_ipv6CidrBlockAssociationSet;
    bool m_ipv6CidrBlockAssociationSetHasBeenSet;

    Aws::Vector<VpcCidrBlockAssociation> m_cidrBlockAssociationSet;
    bool m_cidrBlockAssociationSetHasBeenSet;

    bool m_isDefault;
    bool m_isDefaultHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
