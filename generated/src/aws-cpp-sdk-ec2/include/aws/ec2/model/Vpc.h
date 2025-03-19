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
#include <aws/ec2/model/VpcEncryptionControl.h>
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
    AWS_EC2_API Vpc() = default;
    AWS_EC2_API Vpc(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Vpc& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the VPC.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    Vpc& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allowed tenancy of instances launched into the VPC.</p>
     */
    inline Tenancy GetInstanceTenancy() const { return m_instanceTenancy; }
    inline bool InstanceTenancyHasBeenSet() const { return m_instanceTenancyHasBeenSet; }
    inline void SetInstanceTenancy(Tenancy value) { m_instanceTenancyHasBeenSet = true; m_instanceTenancy = value; }
    inline Vpc& WithInstanceTenancy(Tenancy value) { SetInstanceTenancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the IPv6 CIDR blocks associated with the VPC.</p>
     */
    inline const Aws::Vector<VpcIpv6CidrBlockAssociation>& GetIpv6CidrBlockAssociationSet() const { return m_ipv6CidrBlockAssociationSet; }
    inline bool Ipv6CidrBlockAssociationSetHasBeenSet() const { return m_ipv6CidrBlockAssociationSetHasBeenSet; }
    template<typename Ipv6CidrBlockAssociationSetT = Aws::Vector<VpcIpv6CidrBlockAssociation>>
    void SetIpv6CidrBlockAssociationSet(Ipv6CidrBlockAssociationSetT&& value) { m_ipv6CidrBlockAssociationSetHasBeenSet = true; m_ipv6CidrBlockAssociationSet = std::forward<Ipv6CidrBlockAssociationSetT>(value); }
    template<typename Ipv6CidrBlockAssociationSetT = Aws::Vector<VpcIpv6CidrBlockAssociation>>
    Vpc& WithIpv6CidrBlockAssociationSet(Ipv6CidrBlockAssociationSetT&& value) { SetIpv6CidrBlockAssociationSet(std::forward<Ipv6CidrBlockAssociationSetT>(value)); return *this;}
    template<typename Ipv6CidrBlockAssociationSetT = VpcIpv6CidrBlockAssociation>
    Vpc& AddIpv6CidrBlockAssociationSet(Ipv6CidrBlockAssociationSetT&& value) { m_ipv6CidrBlockAssociationSetHasBeenSet = true; m_ipv6CidrBlockAssociationSet.emplace_back(std::forward<Ipv6CidrBlockAssociationSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the IPv4 CIDR blocks associated with the VPC.</p>
     */
    inline const Aws::Vector<VpcCidrBlockAssociation>& GetCidrBlockAssociationSet() const { return m_cidrBlockAssociationSet; }
    inline bool CidrBlockAssociationSetHasBeenSet() const { return m_cidrBlockAssociationSetHasBeenSet; }
    template<typename CidrBlockAssociationSetT = Aws::Vector<VpcCidrBlockAssociation>>
    void SetCidrBlockAssociationSet(CidrBlockAssociationSetT&& value) { m_cidrBlockAssociationSetHasBeenSet = true; m_cidrBlockAssociationSet = std::forward<CidrBlockAssociationSetT>(value); }
    template<typename CidrBlockAssociationSetT = Aws::Vector<VpcCidrBlockAssociation>>
    Vpc& WithCidrBlockAssociationSet(CidrBlockAssociationSetT&& value) { SetCidrBlockAssociationSet(std::forward<CidrBlockAssociationSetT>(value)); return *this;}
    template<typename CidrBlockAssociationSetT = VpcCidrBlockAssociation>
    Vpc& AddCidrBlockAssociationSet(CidrBlockAssociationSetT&& value) { m_cidrBlockAssociationSetHasBeenSet = true; m_cidrBlockAssociationSet.emplace_back(std::forward<CidrBlockAssociationSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the VPC is the default VPC.</p>
     */
    inline bool GetIsDefault() const { return m_isDefault; }
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }
    inline Vpc& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
    ///@}

    ///@{
    
    inline const VpcEncryptionControl& GetEncryptionControl() const { return m_encryptionControl; }
    inline bool EncryptionControlHasBeenSet() const { return m_encryptionControlHasBeenSet; }
    template<typename EncryptionControlT = VpcEncryptionControl>
    void SetEncryptionControl(EncryptionControlT&& value) { m_encryptionControlHasBeenSet = true; m_encryptionControl = std::forward<EncryptionControlT>(value); }
    template<typename EncryptionControlT = VpcEncryptionControl>
    Vpc& WithEncryptionControl(EncryptionControlT&& value) { SetEncryptionControl(std::forward<EncryptionControlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the VPC.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Vpc& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Vpc& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state of VPC Block Public Access (BPA).</p>
     */
    inline const BlockPublicAccessStates& GetBlockPublicAccessStates() const { return m_blockPublicAccessStates; }
    inline bool BlockPublicAccessStatesHasBeenSet() const { return m_blockPublicAccessStatesHasBeenSet; }
    template<typename BlockPublicAccessStatesT = BlockPublicAccessStates>
    void SetBlockPublicAccessStates(BlockPublicAccessStatesT&& value) { m_blockPublicAccessStatesHasBeenSet = true; m_blockPublicAccessStates = std::forward<BlockPublicAccessStatesT>(value); }
    template<typename BlockPublicAccessStatesT = BlockPublicAccessStates>
    Vpc& WithBlockPublicAccessStates(BlockPublicAccessStatesT&& value) { SetBlockPublicAccessStates(std::forward<BlockPublicAccessStatesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    Vpc& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the VPC.</p>
     */
    inline VpcState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(VpcState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Vpc& WithState(VpcState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary IPv4 CIDR block for the VPC.</p>
     */
    inline const Aws::String& GetCidrBlock() const { return m_cidrBlock; }
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }
    template<typename CidrBlockT = Aws::String>
    void SetCidrBlock(CidrBlockT&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::forward<CidrBlockT>(value); }
    template<typename CidrBlockT = Aws::String>
    Vpc& WithCidrBlock(CidrBlockT&& value) { SetCidrBlock(std::forward<CidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the set of DHCP options you've associated with the VPC.</p>
     */
    inline const Aws::String& GetDhcpOptionsId() const { return m_dhcpOptionsId; }
    inline bool DhcpOptionsIdHasBeenSet() const { return m_dhcpOptionsIdHasBeenSet; }
    template<typename DhcpOptionsIdT = Aws::String>
    void SetDhcpOptionsId(DhcpOptionsIdT&& value) { m_dhcpOptionsIdHasBeenSet = true; m_dhcpOptionsId = std::forward<DhcpOptionsIdT>(value); }
    template<typename DhcpOptionsIdT = Aws::String>
    Vpc& WithDhcpOptionsId(DhcpOptionsIdT&& value) { SetDhcpOptionsId(std::forward<DhcpOptionsIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Tenancy m_instanceTenancy{Tenancy::NOT_SET};
    bool m_instanceTenancyHasBeenSet = false;

    Aws::Vector<VpcIpv6CidrBlockAssociation> m_ipv6CidrBlockAssociationSet;
    bool m_ipv6CidrBlockAssociationSetHasBeenSet = false;

    Aws::Vector<VpcCidrBlockAssociation> m_cidrBlockAssociationSet;
    bool m_cidrBlockAssociationSetHasBeenSet = false;

    bool m_isDefault{false};
    bool m_isDefaultHasBeenSet = false;

    VpcEncryptionControl m_encryptionControl;
    bool m_encryptionControlHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    BlockPublicAccessStates m_blockPublicAccessStates;
    bool m_blockPublicAccessStatesHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    VpcState m_state{VpcState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;

    Aws::String m_dhcpOptionsId;
    bool m_dhcpOptionsIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
