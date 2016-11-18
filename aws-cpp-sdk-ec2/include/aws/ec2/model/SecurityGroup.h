/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/IpPermission.h>
#include <aws/ec2/model/Tag.h>

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
   * <p>Describes a security group</p>
   */
  class AWS_EC2_API SecurityGroup
  {
  public:
    SecurityGroup();
    SecurityGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    SecurityGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The AWS account ID of the owner of the security group.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The AWS account ID of the owner of the security group.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The AWS account ID of the owner of the security group.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The AWS account ID of the owner of the security group.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The AWS account ID of the owner of the security group.</p>
     */
    inline SecurityGroup& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The AWS account ID of the owner of the security group.</p>
     */
    inline SecurityGroup& WithOwnerId(Aws::String&& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The AWS account ID of the owner of the security group.</p>
     */
    inline SecurityGroup& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}

    /**
     * <p>The name of the security group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the security group.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the security group.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the security group.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the security group.</p>
     */
    inline SecurityGroup& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the security group.</p>
     */
    inline SecurityGroup& WithGroupName(Aws::String&& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the security group.</p>
     */
    inline SecurityGroup& WithGroupName(const char* value) { SetGroupName(value); return *this;}

    /**
     * <p>The ID of the security group.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The ID of the security group.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The ID of the security group.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The ID of the security group.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The ID of the security group.</p>
     */
    inline SecurityGroup& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The ID of the security group.</p>
     */
    inline SecurityGroup& WithGroupId(Aws::String&& value) { SetGroupId(value); return *this;}

    /**
     * <p>The ID of the security group.</p>
     */
    inline SecurityGroup& WithGroupId(const char* value) { SetGroupId(value); return *this;}

    /**
     * <p>A description of the security group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the security group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the security group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the security group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the security group.</p>
     */
    inline SecurityGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the security group.</p>
     */
    inline SecurityGroup& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the security group.</p>
     */
    inline SecurityGroup& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>One or more inbound rules associated with the security group.</p>
     */
    inline const Aws::Vector<IpPermission>& GetIpPermissions() const{ return m_ipPermissions; }

    /**
     * <p>One or more inbound rules associated with the security group.</p>
     */
    inline void SetIpPermissions(const Aws::Vector<IpPermission>& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions = value; }

    /**
     * <p>One or more inbound rules associated with the security group.</p>
     */
    inline void SetIpPermissions(Aws::Vector<IpPermission>&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions = value; }

    /**
     * <p>One or more inbound rules associated with the security group.</p>
     */
    inline SecurityGroup& WithIpPermissions(const Aws::Vector<IpPermission>& value) { SetIpPermissions(value); return *this;}

    /**
     * <p>One or more inbound rules associated with the security group.</p>
     */
    inline SecurityGroup& WithIpPermissions(Aws::Vector<IpPermission>&& value) { SetIpPermissions(value); return *this;}

    /**
     * <p>One or more inbound rules associated with the security group.</p>
     */
    inline SecurityGroup& AddIpPermissions(const IpPermission& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions.push_back(value); return *this; }

    /**
     * <p>One or more inbound rules associated with the security group.</p>
     */
    inline SecurityGroup& AddIpPermissions(IpPermission&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions.push_back(value); return *this; }

    /**
     * <p>[EC2-VPC] One or more outbound rules associated with the security group.</p>
     */
    inline const Aws::Vector<IpPermission>& GetIpPermissionsEgress() const{ return m_ipPermissionsEgress; }

    /**
     * <p>[EC2-VPC] One or more outbound rules associated with the security group.</p>
     */
    inline void SetIpPermissionsEgress(const Aws::Vector<IpPermission>& value) { m_ipPermissionsEgressHasBeenSet = true; m_ipPermissionsEgress = value; }

    /**
     * <p>[EC2-VPC] One or more outbound rules associated with the security group.</p>
     */
    inline void SetIpPermissionsEgress(Aws::Vector<IpPermission>&& value) { m_ipPermissionsEgressHasBeenSet = true; m_ipPermissionsEgress = value; }

    /**
     * <p>[EC2-VPC] One or more outbound rules associated with the security group.</p>
     */
    inline SecurityGroup& WithIpPermissionsEgress(const Aws::Vector<IpPermission>& value) { SetIpPermissionsEgress(value); return *this;}

    /**
     * <p>[EC2-VPC] One or more outbound rules associated with the security group.</p>
     */
    inline SecurityGroup& WithIpPermissionsEgress(Aws::Vector<IpPermission>&& value) { SetIpPermissionsEgress(value); return *this;}

    /**
     * <p>[EC2-VPC] One or more outbound rules associated with the security group.</p>
     */
    inline SecurityGroup& AddIpPermissionsEgress(const IpPermission& value) { m_ipPermissionsEgressHasBeenSet = true; m_ipPermissionsEgress.push_back(value); return *this; }

    /**
     * <p>[EC2-VPC] One or more outbound rules associated with the security group.</p>
     */
    inline SecurityGroup& AddIpPermissionsEgress(IpPermission&& value) { m_ipPermissionsEgressHasBeenSet = true; m_ipPermissionsEgress.push_back(value); return *this; }

    /**
     * <p>[EC2-VPC] The ID of the VPC for the security group.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>[EC2-VPC] The ID of the VPC for the security group.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>[EC2-VPC] The ID of the VPC for the security group.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>[EC2-VPC] The ID of the VPC for the security group.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>[EC2-VPC] The ID of the VPC for the security group.</p>
     */
    inline SecurityGroup& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>[EC2-VPC] The ID of the VPC for the security group.</p>
     */
    inline SecurityGroup& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /**
     * <p>[EC2-VPC] The ID of the VPC for the security group.</p>
     */
    inline SecurityGroup& WithVpcId(const char* value) { SetVpcId(value); return *this;}

    /**
     * <p>Any tags assigned to the security group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the security group.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the security group.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the security group.</p>
     */
    inline SecurityGroup& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the security group.</p>
     */
    inline SecurityGroup& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the security group.</p>
     */
    inline SecurityGroup& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the security group.</p>
     */
    inline SecurityGroup& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet;
    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;
    Aws::String m_groupId;
    bool m_groupIdHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::Vector<IpPermission> m_ipPermissions;
    bool m_ipPermissionsHasBeenSet;
    Aws::Vector<IpPermission> m_ipPermissionsEgress;
    bool m_ipPermissionsEgressHasBeenSet;
    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
