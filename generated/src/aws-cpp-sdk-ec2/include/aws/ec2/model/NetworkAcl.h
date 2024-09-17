/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/NetworkAclAssociation.h>
#include <aws/ec2/model/NetworkAclEntry.h>
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
   * <p>Describes a network ACL.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NetworkAcl">AWS API
   * Reference</a></p>
   */
  class NetworkAcl
  {
  public:
    AWS_EC2_API NetworkAcl();
    AWS_EC2_API NetworkAcl(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkAcl& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Any associations between the network ACL and your subnets</p>
     */
    inline const Aws::Vector<NetworkAclAssociation>& GetAssociations() const{ return m_associations; }
    inline bool AssociationsHasBeenSet() const { return m_associationsHasBeenSet; }
    inline void SetAssociations(const Aws::Vector<NetworkAclAssociation>& value) { m_associationsHasBeenSet = true; m_associations = value; }
    inline void SetAssociations(Aws::Vector<NetworkAclAssociation>&& value) { m_associationsHasBeenSet = true; m_associations = std::move(value); }
    inline NetworkAcl& WithAssociations(const Aws::Vector<NetworkAclAssociation>& value) { SetAssociations(value); return *this;}
    inline NetworkAcl& WithAssociations(Aws::Vector<NetworkAclAssociation>&& value) { SetAssociations(std::move(value)); return *this;}
    inline NetworkAcl& AddAssociations(const NetworkAclAssociation& value) { m_associationsHasBeenSet = true; m_associations.push_back(value); return *this; }
    inline NetworkAcl& AddAssociations(NetworkAclAssociation&& value) { m_associationsHasBeenSet = true; m_associations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The entries (rules) in the network ACL.</p>
     */
    inline const Aws::Vector<NetworkAclEntry>& GetEntries() const{ return m_entries; }
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
    inline void SetEntries(const Aws::Vector<NetworkAclEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }
    inline void SetEntries(Aws::Vector<NetworkAclEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }
    inline NetworkAcl& WithEntries(const Aws::Vector<NetworkAclEntry>& value) { SetEntries(value); return *this;}
    inline NetworkAcl& WithEntries(Aws::Vector<NetworkAclEntry>&& value) { SetEntries(std::move(value)); return *this;}
    inline NetworkAcl& AddEntries(const NetworkAclEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }
    inline NetworkAcl& AddEntries(NetworkAclEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether this is the default network ACL for the VPC.</p>
     */
    inline bool GetIsDefault() const{ return m_isDefault; }
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }
    inline NetworkAcl& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the network ACL.</p>
     */
    inline const Aws::String& GetNetworkAclId() const{ return m_networkAclId; }
    inline bool NetworkAclIdHasBeenSet() const { return m_networkAclIdHasBeenSet; }
    inline void SetNetworkAclId(const Aws::String& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = value; }
    inline void SetNetworkAclId(Aws::String&& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = std::move(value); }
    inline void SetNetworkAclId(const char* value) { m_networkAclIdHasBeenSet = true; m_networkAclId.assign(value); }
    inline NetworkAcl& WithNetworkAclId(const Aws::String& value) { SetNetworkAclId(value); return *this;}
    inline NetworkAcl& WithNetworkAclId(Aws::String&& value) { SetNetworkAclId(std::move(value)); return *this;}
    inline NetworkAcl& WithNetworkAclId(const char* value) { SetNetworkAclId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the network ACL.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline NetworkAcl& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline NetworkAcl& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline NetworkAcl& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline NetworkAcl& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC for the network ACL.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline NetworkAcl& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline NetworkAcl& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline NetworkAcl& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the network ACL.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline NetworkAcl& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline NetworkAcl& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline NetworkAcl& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}
  private:

    Aws::Vector<NetworkAclAssociation> m_associations;
    bool m_associationsHasBeenSet = false;

    Aws::Vector<NetworkAclEntry> m_entries;
    bool m_entriesHasBeenSet = false;

    bool m_isDefault;
    bool m_isDefaultHasBeenSet = false;

    Aws::String m_networkAclId;
    bool m_networkAclIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
