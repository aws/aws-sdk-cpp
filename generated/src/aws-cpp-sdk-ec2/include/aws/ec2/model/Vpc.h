/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Tenancy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/BlockPublicAccessStates.h>
#include <aws/ec2/model/VpcState.h>
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
  class Vpc
  {
  public:
    AWS_EC2_API Vpc();
    AWS_EC2_API Vpc(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Vpc& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the VPC.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline Vpc& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline Vpc& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline Vpc& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allowed tenancy of instances launched into the VPC.</p>
     */
    inline const Tenancy& GetInstanceTenancy() const{ return m_instanceTenancy; }
    inline bool InstanceTenancyHasBeenSet() const { return m_instanceTenancyHasBeenSet; }
    inline void SetInstanceTenancy(const Tenancy& value) { m_instanceTenancyHasBeenSet = true; m_instanceTenancy = value; }
    inline void SetInstanceTenancy(Tenancy&& value) { m_instanceTenancyHasBeenSet = true; m_instanceTenancy = std::move(value); }
    inline Vpc& WithInstanceTenancy(const Tenancy& value) { SetInstanceTenancy(value); return *this;}
    inline Vpc& WithInstanceTenancy(Tenancy&& value) { SetInstanceTenancy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the IPv6 CIDR blocks associated with the VPC.</p>
     */
    inline const Aws::Vector<VpcIpv6CidrBlockAssociation>& GetIpv6CidrBlockAssociationSet() const{ return m_ipv6CidrBlockAssociationSet; }
    inline bool Ipv6CidrBlockAssociationSetHasBeenSet() const { return m_ipv6CidrBlockAssociationSetHasBeenSet; }
    inline void SetIpv6CidrBlockAssociationSet(const Aws::Vector<VpcIpv6CidrBlockAssociation>& value) { m_ipv6CidrBlockAssociationSetHasBeenSet = true; m_ipv6CidrBlockAssociationSet = value; }
    inline void SetIpv6CidrBlockAssociationSet(Aws::Vector<VpcIpv6CidrBlockAssociation>&& value) { m_ipv6CidrBlockAssociationSetHasBeenSet = true; m_ipv6CidrBlockAssociationSet = std::move(value); }
    inline Vpc& WithIpv6CidrBlockAssociationSet(const Aws::Vector<VpcIpv6CidrBlockAssociation>& value) { SetIpv6CidrBlockAssociationSet(value); return *this;}
    inline Vpc& WithIpv6CidrBlockAssociationSet(Aws::Vector<VpcIpv6CidrBlockAssociation>&& value) { SetIpv6CidrBlockAssociationSet(std::move(value)); return *this;}
    inline Vpc& AddIpv6CidrBlockAssociationSet(const VpcIpv6CidrBlockAssociation& value) { m_ipv6CidrBlockAssociationSetHasBeenSet = true; m_ipv6CidrBlockAssociationSet.push_back(value); return *this; }
    inline Vpc& AddIpv6CidrBlockAssociationSet(VpcIpv6CidrBlockAssociation&& value) { m_ipv6CidrBlockAssociationSetHasBeenSet = true; m_ipv6CidrBlockAssociationSet.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the IPv4 CIDR blocks associated with the VPC.</p>
     */
    inline const Aws::Vector<VpcCidrBlockAssociation>& GetCidrBlockAssociationSet() const{ return m_cidrBlockAssociationSet; }
    inline bool CidrBlockAssociationSetHasBeenSet() const { return m_cidrBlockAssociationSetHasBeenSet; }
    inline void SetCidrBlockAssociationSet(const Aws::Vector<VpcCidrBlockAssociation>& value) { m_cidrBlockAssociationSetHasBeenSet = true; m_cidrBlockAssociationSet = value; }
    inline void SetCidrBlockAssociationSet(Aws::Vector<VpcCidrBlockAssociation>&& value) { m_cidrBlockAssociationSetHasBeenSet = true; m_cidrBlockAssociationSet = std::move(value); }
    inline Vpc& WithCidrBlockAssociationSet(const Aws::Vector<VpcCidrBlockAssociation>& value) { SetCidrBlockAssociationSet(value); return *this;}
    inline Vpc& WithCidrBlockAssociationSet(Aws::Vector<VpcCidrBlockAssociation>&& value) { SetCidrBlockAssociationSet(std::move(value)); return *this;}
    inline Vpc& AddCidrBlockAssociationSet(const VpcCidrBlockAssociation& value) { m_cidrBlockAssociationSetHasBeenSet = true; m_cidrBlockAssociationSet.push_back(value); return *this; }
    inline Vpc& AddCidrBlockAssociationSet(VpcCidrBlockAssociation&& value) { m_cidrBlockAssociationSetHasBeenSet = true; m_cidrBlockAssociationSet.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the VPC is the default VPC.</p>
     */
    inline bool GetIsDefault() const{ return m_isDefault; }
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }
    inline Vpc& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the VPC.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Vpc& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline Vpc& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline Vpc& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline Vpc& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state of VPC Block Public Access (BPA).</p>
     */
    inline const BlockPublicAccessStates& GetBlockPublicAccessStates() const{ return m_blockPublicAccessStates; }
    inline bool BlockPublicAccessStatesHasBeenSet() const { return m_blockPublicAccessStatesHasBeenSet; }
    inline void SetBlockPublicAccessStates(const BlockPublicAccessStates& value) { m_blockPublicAccessStatesHasBeenSet = true; m_blockPublicAccessStates = value; }
    inline void SetBlockPublicAccessStates(BlockPublicAccessStates&& value) { m_blockPublicAccessStatesHasBeenSet = true; m_blockPublicAccessStates = std::move(value); }
    inline Vpc& WithBlockPublicAccessStates(const BlockPublicAccessStates& value) { SetBlockPublicAccessStates(value); return *this;}
    inline Vpc& WithBlockPublicAccessStates(BlockPublicAccessStates&& value) { SetBlockPublicAccessStates(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline Vpc& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline Vpc& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline Vpc& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the VPC.</p>
     */
    inline const VpcState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const VpcState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(VpcState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Vpc& WithState(const VpcState& value) { SetState(value); return *this;}
    inline Vpc& WithState(VpcState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary IPv4 CIDR block for the VPC.</p>
     */
    inline const Aws::String& GetCidrBlock() const{ return m_cidrBlock; }
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }
    inline void SetCidrBlock(const Aws::String& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }
    inline void SetCidrBlock(Aws::String&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::move(value); }
    inline void SetCidrBlock(const char* value) { m_cidrBlockHasBeenSet = true; m_cidrBlock.assign(value); }
    inline Vpc& WithCidrBlock(const Aws::String& value) { SetCidrBlock(value); return *this;}
    inline Vpc& WithCidrBlock(Aws::String&& value) { SetCidrBlock(std::move(value)); return *this;}
    inline Vpc& WithCidrBlock(const char* value) { SetCidrBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the set of DHCP options you've associated with the VPC.</p>
     */
    inline const Aws::String& GetDhcpOptionsId() const{ return m_dhcpOptionsId; }
    inline bool DhcpOptionsIdHasBeenSet() const { return m_dhcpOptionsIdHasBeenSet; }
    inline void SetDhcpOptionsId(const Aws::String& value) { m_dhcpOptionsIdHasBeenSet = true; m_dhcpOptionsId = value; }
    inline void SetDhcpOptionsId(Aws::String&& value) { m_dhcpOptionsIdHasBeenSet = true; m_dhcpOptionsId = std::move(value); }
    inline void SetDhcpOptionsId(const char* value) { m_dhcpOptionsIdHasBeenSet = true; m_dhcpOptionsId.assign(value); }
    inline Vpc& WithDhcpOptionsId(const Aws::String& value) { SetDhcpOptionsId(value); return *this;}
    inline Vpc& WithDhcpOptionsId(Aws::String&& value) { SetDhcpOptionsId(std::move(value)); return *this;}
    inline Vpc& WithDhcpOptionsId(const char* value) { SetDhcpOptionsId(value); return *this;}
    ///@}
  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Tenancy m_instanceTenancy;
    bool m_instanceTenancyHasBeenSet = false;

    Aws::Vector<VpcIpv6CidrBlockAssociation> m_ipv6CidrBlockAssociationSet;
    bool m_ipv6CidrBlockAssociationSetHasBeenSet = false;

    Aws::Vector<VpcCidrBlockAssociation> m_cidrBlockAssociationSet;
    bool m_cidrBlockAssociationSetHasBeenSet = false;

    bool m_isDefault;
    bool m_isDefaultHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    BlockPublicAccessStates m_blockPublicAccessStates;
    bool m_blockPublicAccessStatesHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    VpcState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;

    Aws::String m_dhcpOptionsId;
    bool m_dhcpOptionsIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
