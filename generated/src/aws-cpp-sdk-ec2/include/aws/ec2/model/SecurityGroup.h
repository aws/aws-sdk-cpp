/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/IpPermission.h>
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
   * <p>Describes a security group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SecurityGroup">AWS
   * API Reference</a></p>
   */
  class SecurityGroup
  {
  public:
    AWS_EC2_API SecurityGroup() = default;
    AWS_EC2_API SecurityGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SecurityGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the security group.</p>
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    SecurityGroup& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outbound rules associated with the security group.</p>
     */
    inline const Aws::Vector<IpPermission>& GetIpPermissionsEgress() const { return m_ipPermissionsEgress; }
    inline bool IpPermissionsEgressHasBeenSet() const { return m_ipPermissionsEgressHasBeenSet; }
    template<typename IpPermissionsEgressT = Aws::Vector<IpPermission>>
    void SetIpPermissionsEgress(IpPermissionsEgressT&& value) { m_ipPermissionsEgressHasBeenSet = true; m_ipPermissionsEgress = std::forward<IpPermissionsEgressT>(value); }
    template<typename IpPermissionsEgressT = Aws::Vector<IpPermission>>
    SecurityGroup& WithIpPermissionsEgress(IpPermissionsEgressT&& value) { SetIpPermissionsEgress(std::forward<IpPermissionsEgressT>(value)); return *this;}
    template<typename IpPermissionsEgressT = IpPermission>
    SecurityGroup& AddIpPermissionsEgress(IpPermissionsEgressT&& value) { m_ipPermissionsEgressHasBeenSet = true; m_ipPermissionsEgress.emplace_back(std::forward<IpPermissionsEgressT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the security group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    SecurityGroup& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    SecurityGroup& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC for the security group.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    SecurityGroup& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the security group.</p>
     */
    inline const Aws::String& GetSecurityGroupArn() const { return m_securityGroupArn; }
    inline bool SecurityGroupArnHasBeenSet() const { return m_securityGroupArnHasBeenSet; }
    template<typename SecurityGroupArnT = Aws::String>
    void SetSecurityGroupArn(SecurityGroupArnT&& value) { m_securityGroupArnHasBeenSet = true; m_securityGroupArn = std::forward<SecurityGroupArnT>(value); }
    template<typename SecurityGroupArnT = Aws::String>
    SecurityGroup& WithSecurityGroupArn(SecurityGroupArnT&& value) { SetSecurityGroupArn(std::forward<SecurityGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the owner of the security group.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    SecurityGroup& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the security group.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    SecurityGroup& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the security group.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    SecurityGroup& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inbound rules associated with the security group.</p>
     */
    inline const Aws::Vector<IpPermission>& GetIpPermissions() const { return m_ipPermissions; }
    inline bool IpPermissionsHasBeenSet() const { return m_ipPermissionsHasBeenSet; }
    template<typename IpPermissionsT = Aws::Vector<IpPermission>>
    void SetIpPermissions(IpPermissionsT&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions = std::forward<IpPermissionsT>(value); }
    template<typename IpPermissionsT = Aws::Vector<IpPermission>>
    SecurityGroup& WithIpPermissions(IpPermissionsT&& value) { SetIpPermissions(std::forward<IpPermissionsT>(value)); return *this;}
    template<typename IpPermissionsT = IpPermission>
    SecurityGroup& AddIpPermissions(IpPermissionsT&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions.emplace_back(std::forward<IpPermissionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::Vector<IpPermission> m_ipPermissionsEgress;
    bool m_ipPermissionsEgressHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_securityGroupArn;
    bool m_securityGroupArnHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<IpPermission> m_ipPermissions;
    bool m_ipPermissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
