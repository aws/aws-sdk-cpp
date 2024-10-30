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
    AWS_EC2_API SecurityGroup();
    AWS_EC2_API SecurityGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SecurityGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the security group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }
    inline SecurityGroup& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}
    inline SecurityGroup& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}
    inline SecurityGroup& WithGroupId(const char* value) { SetGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outbound rules associated with the security group.</p>
     */
    inline const Aws::Vector<IpPermission>& GetIpPermissionsEgress() const{ return m_ipPermissionsEgress; }
    inline bool IpPermissionsEgressHasBeenSet() const { return m_ipPermissionsEgressHasBeenSet; }
    inline void SetIpPermissionsEgress(const Aws::Vector<IpPermission>& value) { m_ipPermissionsEgressHasBeenSet = true; m_ipPermissionsEgress = value; }
    inline void SetIpPermissionsEgress(Aws::Vector<IpPermission>&& value) { m_ipPermissionsEgressHasBeenSet = true; m_ipPermissionsEgress = std::move(value); }
    inline SecurityGroup& WithIpPermissionsEgress(const Aws::Vector<IpPermission>& value) { SetIpPermissionsEgress(value); return *this;}
    inline SecurityGroup& WithIpPermissionsEgress(Aws::Vector<IpPermission>&& value) { SetIpPermissionsEgress(std::move(value)); return *this;}
    inline SecurityGroup& AddIpPermissionsEgress(const IpPermission& value) { m_ipPermissionsEgressHasBeenSet = true; m_ipPermissionsEgress.push_back(value); return *this; }
    inline SecurityGroup& AddIpPermissionsEgress(IpPermission&& value) { m_ipPermissionsEgressHasBeenSet = true; m_ipPermissionsEgress.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the security group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline SecurityGroup& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline SecurityGroup& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline SecurityGroup& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline SecurityGroup& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC for the security group.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline SecurityGroup& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline SecurityGroup& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline SecurityGroup& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the security group.</p>
     */
    inline const Aws::String& GetSecurityGroupArn() const{ return m_securityGroupArn; }
    inline bool SecurityGroupArnHasBeenSet() const { return m_securityGroupArnHasBeenSet; }
    inline void SetSecurityGroupArn(const Aws::String& value) { m_securityGroupArnHasBeenSet = true; m_securityGroupArn = value; }
    inline void SetSecurityGroupArn(Aws::String&& value) { m_securityGroupArnHasBeenSet = true; m_securityGroupArn = std::move(value); }
    inline void SetSecurityGroupArn(const char* value) { m_securityGroupArnHasBeenSet = true; m_securityGroupArn.assign(value); }
    inline SecurityGroup& WithSecurityGroupArn(const Aws::String& value) { SetSecurityGroupArn(value); return *this;}
    inline SecurityGroup& WithSecurityGroupArn(Aws::String&& value) { SetSecurityGroupArn(std::move(value)); return *this;}
    inline SecurityGroup& WithSecurityGroupArn(const char* value) { SetSecurityGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the owner of the security group.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline SecurityGroup& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline SecurityGroup& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline SecurityGroup& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the security group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }
    inline SecurityGroup& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline SecurityGroup& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline SecurityGroup& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the security group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline SecurityGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline SecurityGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline SecurityGroup& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inbound rules associated with the security group.</p>
     */
    inline const Aws::Vector<IpPermission>& GetIpPermissions() const{ return m_ipPermissions; }
    inline bool IpPermissionsHasBeenSet() const { return m_ipPermissionsHasBeenSet; }
    inline void SetIpPermissions(const Aws::Vector<IpPermission>& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions = value; }
    inline void SetIpPermissions(Aws::Vector<IpPermission>&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions = std::move(value); }
    inline SecurityGroup& WithIpPermissions(const Aws::Vector<IpPermission>& value) { SetIpPermissions(value); return *this;}
    inline SecurityGroup& WithIpPermissions(Aws::Vector<IpPermission>&& value) { SetIpPermissions(std::move(value)); return *this;}
    inline SecurityGroup& AddIpPermissions(const IpPermission& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions.push_back(value); return *this; }
    inline SecurityGroup& AddIpPermissions(IpPermission&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions.push_back(std::move(value)); return *this; }
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
