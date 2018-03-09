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
   * <p>Describes a security group and AWS account ID pair.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UserIdGroupPair">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API UserIdGroupPair
  {
  public:
    UserIdGroupPair();
    UserIdGroupPair(const Aws::Utils::Xml::XmlNode& xmlNode);
    UserIdGroupPair& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A description for the security group rule that references this user ID group
     * pair.</p> <p>Constraints: Up to 255 characters in length. Allowed characters are
     * a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=;{}!$*</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the security group rule that references this user ID group
     * pair.</p> <p>Constraints: Up to 255 characters in length. Allowed characters are
     * a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=;{}!$*</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the security group rule that references this user ID group
     * pair.</p> <p>Constraints: Up to 255 characters in length. Allowed characters are
     * a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=;{}!$*</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the security group rule that references this user ID group
     * pair.</p> <p>Constraints: Up to 255 characters in length. Allowed characters are
     * a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=;{}!$*</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the security group rule that references this user ID group
     * pair.</p> <p>Constraints: Up to 255 characters in length. Allowed characters are
     * a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=;{}!$*</p>
     */
    inline UserIdGroupPair& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the security group rule that references this user ID group
     * pair.</p> <p>Constraints: Up to 255 characters in length. Allowed characters are
     * a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=;{}!$*</p>
     */
    inline UserIdGroupPair& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the security group rule that references this user ID group
     * pair.</p> <p>Constraints: Up to 255 characters in length. Allowed characters are
     * a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=;{}!$*</p>
     */
    inline UserIdGroupPair& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>The ID of the security group.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The ID of the security group.</p>
     */
    inline UserIdGroupPair& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The ID of the security group.</p>
     */
    inline UserIdGroupPair& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the security group.</p>
     */
    inline UserIdGroupPair& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>The name of the security group. In a request, use this parameter for a
     * security group in EC2-Classic or a default VPC only. For a security group in a
     * nondefault VPC, use the security group ID. </p> <p>For a referenced security
     * group in another VPC, this value is not returned if the referenced security
     * group is deleted.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the security group. In a request, use this parameter for a
     * security group in EC2-Classic or a default VPC only. For a security group in a
     * nondefault VPC, use the security group ID. </p> <p>For a referenced security
     * group in another VPC, this value is not returned if the referenced security
     * group is deleted.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the security group. In a request, use this parameter for a
     * security group in EC2-Classic or a default VPC only. For a security group in a
     * nondefault VPC, use the security group ID. </p> <p>For a referenced security
     * group in another VPC, this value is not returned if the referenced security
     * group is deleted.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The name of the security group. In a request, use this parameter for a
     * security group in EC2-Classic or a default VPC only. For a security group in a
     * nondefault VPC, use the security group ID. </p> <p>For a referenced security
     * group in another VPC, this value is not returned if the referenced security
     * group is deleted.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the security group. In a request, use this parameter for a
     * security group in EC2-Classic or a default VPC only. For a security group in a
     * nondefault VPC, use the security group ID. </p> <p>For a referenced security
     * group in another VPC, this value is not returned if the referenced security
     * group is deleted.</p>
     */
    inline UserIdGroupPair& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the security group. In a request, use this parameter for a
     * security group in EC2-Classic or a default VPC only. For a security group in a
     * nondefault VPC, use the security group ID. </p> <p>For a referenced security
     * group in another VPC, this value is not returned if the referenced security
     * group is deleted.</p>
     */
    inline UserIdGroupPair& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the security group. In a request, use this parameter for a
     * security group in EC2-Classic or a default VPC only. For a security group in a
     * nondefault VPC, use the security group ID. </p> <p>For a referenced security
     * group in another VPC, this value is not returned if the referenced security
     * group is deleted.</p>
     */
    inline UserIdGroupPair& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The status of a VPC peering connection, if applicable.</p>
     */
    inline const Aws::String& GetPeeringStatus() const{ return m_peeringStatus; }

    /**
     * <p>The status of a VPC peering connection, if applicable.</p>
     */
    inline void SetPeeringStatus(const Aws::String& value) { m_peeringStatusHasBeenSet = true; m_peeringStatus = value; }

    /**
     * <p>The status of a VPC peering connection, if applicable.</p>
     */
    inline void SetPeeringStatus(Aws::String&& value) { m_peeringStatusHasBeenSet = true; m_peeringStatus = std::move(value); }

    /**
     * <p>The status of a VPC peering connection, if applicable.</p>
     */
    inline void SetPeeringStatus(const char* value) { m_peeringStatusHasBeenSet = true; m_peeringStatus.assign(value); }

    /**
     * <p>The status of a VPC peering connection, if applicable.</p>
     */
    inline UserIdGroupPair& WithPeeringStatus(const Aws::String& value) { SetPeeringStatus(value); return *this;}

    /**
     * <p>The status of a VPC peering connection, if applicable.</p>
     */
    inline UserIdGroupPair& WithPeeringStatus(Aws::String&& value) { SetPeeringStatus(std::move(value)); return *this;}

    /**
     * <p>The status of a VPC peering connection, if applicable.</p>
     */
    inline UserIdGroupPair& WithPeeringStatus(const char* value) { SetPeeringStatus(value); return *this;}


    /**
     * <p>The ID of an AWS account.</p> <p>For a referenced security group in another
     * VPC, the account ID of the referenced security group is returned in the
     * response. If the referenced security group is deleted, this value is not
     * returned.</p> <p>[EC2-Classic] Required when adding or removing rules that
     * reference a security group in another AWS account.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The ID of an AWS account.</p> <p>For a referenced security group in another
     * VPC, the account ID of the referenced security group is returned in the
     * response. If the referenced security group is deleted, this value is not
     * returned.</p> <p>[EC2-Classic] Required when adding or removing rules that
     * reference a security group in another AWS account.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The ID of an AWS account.</p> <p>For a referenced security group in another
     * VPC, the account ID of the referenced security group is returned in the
     * response. If the referenced security group is deleted, this value is not
     * returned.</p> <p>[EC2-Classic] Required when adding or removing rules that
     * reference a security group in another AWS account.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The ID of an AWS account.</p> <p>For a referenced security group in another
     * VPC, the account ID of the referenced security group is returned in the
     * response. If the referenced security group is deleted, this value is not
     * returned.</p> <p>[EC2-Classic] Required when adding or removing rules that
     * reference a security group in another AWS account.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The ID of an AWS account.</p> <p>For a referenced security group in another
     * VPC, the account ID of the referenced security group is returned in the
     * response. If the referenced security group is deleted, this value is not
     * returned.</p> <p>[EC2-Classic] Required when adding or removing rules that
     * reference a security group in another AWS account.</p>
     */
    inline UserIdGroupPair& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The ID of an AWS account.</p> <p>For a referenced security group in another
     * VPC, the account ID of the referenced security group is returned in the
     * response. If the referenced security group is deleted, this value is not
     * returned.</p> <p>[EC2-Classic] Required when adding or removing rules that
     * reference a security group in another AWS account.</p>
     */
    inline UserIdGroupPair& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The ID of an AWS account.</p> <p>For a referenced security group in another
     * VPC, the account ID of the referenced security group is returned in the
     * response. If the referenced security group is deleted, this value is not
     * returned.</p> <p>[EC2-Classic] Required when adding or removing rules that
     * reference a security group in another AWS account.</p>
     */
    inline UserIdGroupPair& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The ID of the VPC for the referenced security group, if applicable.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC for the referenced security group, if applicable.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC for the referenced security group, if applicable.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC for the referenced security group, if applicable.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC for the referenced security group, if applicable.</p>
     */
    inline UserIdGroupPair& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC for the referenced security group, if applicable.</p>
     */
    inline UserIdGroupPair& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC for the referenced security group, if applicable.</p>
     */
    inline UserIdGroupPair& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The ID of the VPC peering connection, if applicable.</p>
     */
    inline const Aws::String& GetVpcPeeringConnectionId() const{ return m_vpcPeeringConnectionId; }

    /**
     * <p>The ID of the VPC peering connection, if applicable.</p>
     */
    inline void SetVpcPeeringConnectionId(const Aws::String& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = value; }

    /**
     * <p>The ID of the VPC peering connection, if applicable.</p>
     */
    inline void SetVpcPeeringConnectionId(Aws::String&& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = std::move(value); }

    /**
     * <p>The ID of the VPC peering connection, if applicable.</p>
     */
    inline void SetVpcPeeringConnectionId(const char* value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId.assign(value); }

    /**
     * <p>The ID of the VPC peering connection, if applicable.</p>
     */
    inline UserIdGroupPair& WithVpcPeeringConnectionId(const Aws::String& value) { SetVpcPeeringConnectionId(value); return *this;}

    /**
     * <p>The ID of the VPC peering connection, if applicable.</p>
     */
    inline UserIdGroupPair& WithVpcPeeringConnectionId(Aws::String&& value) { SetVpcPeeringConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC peering connection, if applicable.</p>
     */
    inline UserIdGroupPair& WithVpcPeeringConnectionId(const char* value) { SetVpcPeeringConnectionId(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;

    Aws::String m_peeringStatus;
    bool m_peeringStatusHasBeenSet;

    Aws::String m_userId;
    bool m_userIdHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    Aws::String m_vpcPeeringConnectionId;
    bool m_vpcPeeringConnectionIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
