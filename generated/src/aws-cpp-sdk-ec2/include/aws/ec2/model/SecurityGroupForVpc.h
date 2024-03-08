/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A security group that can be used by interfaces in the VPC.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SecurityGroupForVpc">AWS
   * API Reference</a></p>
   */
  class SecurityGroupForVpc
  {
  public:
    AWS_EC2_API SecurityGroupForVpc();
    AWS_EC2_API SecurityGroupForVpc(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SecurityGroupForVpc& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The security group's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The security group's description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The security group's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The security group's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The security group's description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The security group's description.</p>
     */
    inline SecurityGroupForVpc& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The security group's description.</p>
     */
    inline SecurityGroupForVpc& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The security group's description.</p>
     */
    inline SecurityGroupForVpc& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The security group name.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The security group name.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The security group name.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The security group name.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The security group name.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The security group name.</p>
     */
    inline SecurityGroupForVpc& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The security group name.</p>
     */
    inline SecurityGroupForVpc& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The security group name.</p>
     */
    inline SecurityGroupForVpc& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The security group owner ID.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The security group owner ID.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The security group owner ID.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The security group owner ID.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The security group owner ID.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The security group owner ID.</p>
     */
    inline SecurityGroupForVpc& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The security group owner ID.</p>
     */
    inline SecurityGroupForVpc& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The security group owner ID.</p>
     */
    inline SecurityGroupForVpc& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The security group ID.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The security group ID.</p>
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * <p>The security group ID.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The security group ID.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>The security group ID.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The security group ID.</p>
     */
    inline SecurityGroupForVpc& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The security group ID.</p>
     */
    inline SecurityGroupForVpc& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The security group ID.</p>
     */
    inline SecurityGroupForVpc& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>The security group tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The security group tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The security group tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The security group tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The security group tags.</p>
     */
    inline SecurityGroupForVpc& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The security group tags.</p>
     */
    inline SecurityGroupForVpc& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The security group tags.</p>
     */
    inline SecurityGroupForVpc& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The security group tags.</p>
     */
    inline SecurityGroupForVpc& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The VPC ID in which the security group was created.</p>
     */
    inline const Aws::String& GetPrimaryVpcId() const{ return m_primaryVpcId; }

    /**
     * <p>The VPC ID in which the security group was created.</p>
     */
    inline bool PrimaryVpcIdHasBeenSet() const { return m_primaryVpcIdHasBeenSet; }

    /**
     * <p>The VPC ID in which the security group was created.</p>
     */
    inline void SetPrimaryVpcId(const Aws::String& value) { m_primaryVpcIdHasBeenSet = true; m_primaryVpcId = value; }

    /**
     * <p>The VPC ID in which the security group was created.</p>
     */
    inline void SetPrimaryVpcId(Aws::String&& value) { m_primaryVpcIdHasBeenSet = true; m_primaryVpcId = std::move(value); }

    /**
     * <p>The VPC ID in which the security group was created.</p>
     */
    inline void SetPrimaryVpcId(const char* value) { m_primaryVpcIdHasBeenSet = true; m_primaryVpcId.assign(value); }

    /**
     * <p>The VPC ID in which the security group was created.</p>
     */
    inline SecurityGroupForVpc& WithPrimaryVpcId(const Aws::String& value) { SetPrimaryVpcId(value); return *this;}

    /**
     * <p>The VPC ID in which the security group was created.</p>
     */
    inline SecurityGroupForVpc& WithPrimaryVpcId(Aws::String&& value) { SetPrimaryVpcId(std::move(value)); return *this;}

    /**
     * <p>The VPC ID in which the security group was created.</p>
     */
    inline SecurityGroupForVpc& WithPrimaryVpcId(const char* value) { SetPrimaryVpcId(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_primaryVpcId;
    bool m_primaryVpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
