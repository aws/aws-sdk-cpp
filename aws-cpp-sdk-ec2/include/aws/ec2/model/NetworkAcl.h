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
  class AWS_EC2_API NetworkAcl
  {
  public:
    NetworkAcl();
    NetworkAcl(const Aws::Utils::Xml::XmlNode& xmlNode);
    NetworkAcl& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Any associations between the network ACL and one or more subnets</p>
     */
    inline const Aws::Vector<NetworkAclAssociation>& GetAssociations() const{ return m_associations; }

    /**
     * <p>Any associations between the network ACL and one or more subnets</p>
     */
    inline void SetAssociations(const Aws::Vector<NetworkAclAssociation>& value) { m_associationsHasBeenSet = true; m_associations = value; }

    /**
     * <p>Any associations between the network ACL and one or more subnets</p>
     */
    inline void SetAssociations(Aws::Vector<NetworkAclAssociation>&& value) { m_associationsHasBeenSet = true; m_associations = std::move(value); }

    /**
     * <p>Any associations between the network ACL and one or more subnets</p>
     */
    inline NetworkAcl& WithAssociations(const Aws::Vector<NetworkAclAssociation>& value) { SetAssociations(value); return *this;}

    /**
     * <p>Any associations between the network ACL and one or more subnets</p>
     */
    inline NetworkAcl& WithAssociations(Aws::Vector<NetworkAclAssociation>&& value) { SetAssociations(std::move(value)); return *this;}

    /**
     * <p>Any associations between the network ACL and one or more subnets</p>
     */
    inline NetworkAcl& AddAssociations(const NetworkAclAssociation& value) { m_associationsHasBeenSet = true; m_associations.push_back(value); return *this; }

    /**
     * <p>Any associations between the network ACL and one or more subnets</p>
     */
    inline NetworkAcl& AddAssociations(NetworkAclAssociation&& value) { m_associationsHasBeenSet = true; m_associations.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more entries (rules) in the network ACL.</p>
     */
    inline const Aws::Vector<NetworkAclEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>One or more entries (rules) in the network ACL.</p>
     */
    inline void SetEntries(const Aws::Vector<NetworkAclEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }

    /**
     * <p>One or more entries (rules) in the network ACL.</p>
     */
    inline void SetEntries(Aws::Vector<NetworkAclEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }

    /**
     * <p>One or more entries (rules) in the network ACL.</p>
     */
    inline NetworkAcl& WithEntries(const Aws::Vector<NetworkAclEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>One or more entries (rules) in the network ACL.</p>
     */
    inline NetworkAcl& WithEntries(Aws::Vector<NetworkAclEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>One or more entries (rules) in the network ACL.</p>
     */
    inline NetworkAcl& AddEntries(const NetworkAclEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }

    /**
     * <p>One or more entries (rules) in the network ACL.</p>
     */
    inline NetworkAcl& AddEntries(NetworkAclEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether this is the default network ACL for the VPC.</p>
     */
    inline bool GetIsDefault() const{ return m_isDefault; }

    /**
     * <p>Indicates whether this is the default network ACL for the VPC.</p>
     */
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }

    /**
     * <p>Indicates whether this is the default network ACL for the VPC.</p>
     */
    inline NetworkAcl& WithIsDefault(bool value) { SetIsDefault(value); return *this;}


    /**
     * <p>The ID of the network ACL.</p>
     */
    inline const Aws::String& GetNetworkAclId() const{ return m_networkAclId; }

    /**
     * <p>The ID of the network ACL.</p>
     */
    inline void SetNetworkAclId(const Aws::String& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = value; }

    /**
     * <p>The ID of the network ACL.</p>
     */
    inline void SetNetworkAclId(Aws::String&& value) { m_networkAclIdHasBeenSet = true; m_networkAclId = std::move(value); }

    /**
     * <p>The ID of the network ACL.</p>
     */
    inline void SetNetworkAclId(const char* value) { m_networkAclIdHasBeenSet = true; m_networkAclId.assign(value); }

    /**
     * <p>The ID of the network ACL.</p>
     */
    inline NetworkAcl& WithNetworkAclId(const Aws::String& value) { SetNetworkAclId(value); return *this;}

    /**
     * <p>The ID of the network ACL.</p>
     */
    inline NetworkAcl& WithNetworkAclId(Aws::String&& value) { SetNetworkAclId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network ACL.</p>
     */
    inline NetworkAcl& WithNetworkAclId(const char* value) { SetNetworkAclId(value); return *this;}


    /**
     * <p>Any tags assigned to the network ACL.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the network ACL.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the network ACL.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the network ACL.</p>
     */
    inline NetworkAcl& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the network ACL.</p>
     */
    inline NetworkAcl& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the network ACL.</p>
     */
    inline NetworkAcl& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the network ACL.</p>
     */
    inline NetworkAcl& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the VPC for the network ACL.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC for the network ACL.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC for the network ACL.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC for the network ACL.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC for the network ACL.</p>
     */
    inline NetworkAcl& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC for the network ACL.</p>
     */
    inline NetworkAcl& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC for the network ACL.</p>
     */
    inline NetworkAcl& WithVpcId(const char* value) { SetVpcId(value); return *this;}

  private:

    Aws::Vector<NetworkAclAssociation> m_associations;
    bool m_associationsHasBeenSet;

    Aws::Vector<NetworkAclEntry> m_entries;
    bool m_entriesHasBeenSet;

    bool m_isDefault;
    bool m_isDefaultHasBeenSet;

    Aws::String m_networkAclId;
    bool m_networkAclIdHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
