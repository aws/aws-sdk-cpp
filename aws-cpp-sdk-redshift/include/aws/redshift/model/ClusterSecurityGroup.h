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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/EC2SecurityGroup.h>
#include <aws/redshift/model/IPRange.h>
#include <aws/redshift/model/Tag.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes a security group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClusterSecurityGroup">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API ClusterSecurityGroup
  {
  public:
    ClusterSecurityGroup();
    ClusterSecurityGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    ClusterSecurityGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the cluster security group to which the operation was
     * applied.</p>
     */
    inline const Aws::String& GetClusterSecurityGroupName() const{ return m_clusterSecurityGroupName; }

    /**
     * <p>The name of the cluster security group to which the operation was
     * applied.</p>
     */
    inline bool ClusterSecurityGroupNameHasBeenSet() const { return m_clusterSecurityGroupNameHasBeenSet; }

    /**
     * <p>The name of the cluster security group to which the operation was
     * applied.</p>
     */
    inline void SetClusterSecurityGroupName(const Aws::String& value) { m_clusterSecurityGroupNameHasBeenSet = true; m_clusterSecurityGroupName = value; }

    /**
     * <p>The name of the cluster security group to which the operation was
     * applied.</p>
     */
    inline void SetClusterSecurityGroupName(Aws::String&& value) { m_clusterSecurityGroupNameHasBeenSet = true; m_clusterSecurityGroupName = std::move(value); }

    /**
     * <p>The name of the cluster security group to which the operation was
     * applied.</p>
     */
    inline void SetClusterSecurityGroupName(const char* value) { m_clusterSecurityGroupNameHasBeenSet = true; m_clusterSecurityGroupName.assign(value); }

    /**
     * <p>The name of the cluster security group to which the operation was
     * applied.</p>
     */
    inline ClusterSecurityGroup& WithClusterSecurityGroupName(const Aws::String& value) { SetClusterSecurityGroupName(value); return *this;}

    /**
     * <p>The name of the cluster security group to which the operation was
     * applied.</p>
     */
    inline ClusterSecurityGroup& WithClusterSecurityGroupName(Aws::String&& value) { SetClusterSecurityGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster security group to which the operation was
     * applied.</p>
     */
    inline ClusterSecurityGroup& WithClusterSecurityGroupName(const char* value) { SetClusterSecurityGroupName(value); return *this;}


    /**
     * <p>A description of the security group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the security group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the security group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the security group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the security group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the security group.</p>
     */
    inline ClusterSecurityGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the security group.</p>
     */
    inline ClusterSecurityGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the security group.</p>
     */
    inline ClusterSecurityGroup& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A list of EC2 security groups that are permitted to access clusters
     * associated with this cluster security group.</p>
     */
    inline const Aws::Vector<EC2SecurityGroup>& GetEC2SecurityGroups() const{ return m_eC2SecurityGroups; }

    /**
     * <p>A list of EC2 security groups that are permitted to access clusters
     * associated with this cluster security group.</p>
     */
    inline bool EC2SecurityGroupsHasBeenSet() const { return m_eC2SecurityGroupsHasBeenSet; }

    /**
     * <p>A list of EC2 security groups that are permitted to access clusters
     * associated with this cluster security group.</p>
     */
    inline void SetEC2SecurityGroups(const Aws::Vector<EC2SecurityGroup>& value) { m_eC2SecurityGroupsHasBeenSet = true; m_eC2SecurityGroups = value; }

    /**
     * <p>A list of EC2 security groups that are permitted to access clusters
     * associated with this cluster security group.</p>
     */
    inline void SetEC2SecurityGroups(Aws::Vector<EC2SecurityGroup>&& value) { m_eC2SecurityGroupsHasBeenSet = true; m_eC2SecurityGroups = std::move(value); }

    /**
     * <p>A list of EC2 security groups that are permitted to access clusters
     * associated with this cluster security group.</p>
     */
    inline ClusterSecurityGroup& WithEC2SecurityGroups(const Aws::Vector<EC2SecurityGroup>& value) { SetEC2SecurityGroups(value); return *this;}

    /**
     * <p>A list of EC2 security groups that are permitted to access clusters
     * associated with this cluster security group.</p>
     */
    inline ClusterSecurityGroup& WithEC2SecurityGroups(Aws::Vector<EC2SecurityGroup>&& value) { SetEC2SecurityGroups(std::move(value)); return *this;}

    /**
     * <p>A list of EC2 security groups that are permitted to access clusters
     * associated with this cluster security group.</p>
     */
    inline ClusterSecurityGroup& AddEC2SecurityGroups(const EC2SecurityGroup& value) { m_eC2SecurityGroupsHasBeenSet = true; m_eC2SecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of EC2 security groups that are permitted to access clusters
     * associated with this cluster security group.</p>
     */
    inline ClusterSecurityGroup& AddEC2SecurityGroups(EC2SecurityGroup&& value) { m_eC2SecurityGroupsHasBeenSet = true; m_eC2SecurityGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of IP ranges (CIDR blocks) that are permitted to access clusters
     * associated with this cluster security group.</p>
     */
    inline const Aws::Vector<IPRange>& GetIPRanges() const{ return m_iPRanges; }

    /**
     * <p>A list of IP ranges (CIDR blocks) that are permitted to access clusters
     * associated with this cluster security group.</p>
     */
    inline bool IPRangesHasBeenSet() const { return m_iPRangesHasBeenSet; }

    /**
     * <p>A list of IP ranges (CIDR blocks) that are permitted to access clusters
     * associated with this cluster security group.</p>
     */
    inline void SetIPRanges(const Aws::Vector<IPRange>& value) { m_iPRangesHasBeenSet = true; m_iPRanges = value; }

    /**
     * <p>A list of IP ranges (CIDR blocks) that are permitted to access clusters
     * associated with this cluster security group.</p>
     */
    inline void SetIPRanges(Aws::Vector<IPRange>&& value) { m_iPRangesHasBeenSet = true; m_iPRanges = std::move(value); }

    /**
     * <p>A list of IP ranges (CIDR blocks) that are permitted to access clusters
     * associated with this cluster security group.</p>
     */
    inline ClusterSecurityGroup& WithIPRanges(const Aws::Vector<IPRange>& value) { SetIPRanges(value); return *this;}

    /**
     * <p>A list of IP ranges (CIDR blocks) that are permitted to access clusters
     * associated with this cluster security group.</p>
     */
    inline ClusterSecurityGroup& WithIPRanges(Aws::Vector<IPRange>&& value) { SetIPRanges(std::move(value)); return *this;}

    /**
     * <p>A list of IP ranges (CIDR blocks) that are permitted to access clusters
     * associated with this cluster security group.</p>
     */
    inline ClusterSecurityGroup& AddIPRanges(const IPRange& value) { m_iPRangesHasBeenSet = true; m_iPRanges.push_back(value); return *this; }

    /**
     * <p>A list of IP ranges (CIDR blocks) that are permitted to access clusters
     * associated with this cluster security group.</p>
     */
    inline ClusterSecurityGroup& AddIPRanges(IPRange&& value) { m_iPRangesHasBeenSet = true; m_iPRanges.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of tags for the cluster security group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tags for the cluster security group.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tags for the cluster security group.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tags for the cluster security group.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tags for the cluster security group.</p>
     */
    inline ClusterSecurityGroup& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tags for the cluster security group.</p>
     */
    inline ClusterSecurityGroup& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags for the cluster security group.</p>
     */
    inline ClusterSecurityGroup& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of tags for the cluster security group.</p>
     */
    inline ClusterSecurityGroup& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clusterSecurityGroupName;
    bool m_clusterSecurityGroupNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<EC2SecurityGroup> m_eC2SecurityGroups;
    bool m_eC2SecurityGroupsHasBeenSet;

    Aws::Vector<IPRange> m_iPRanges;
    bool m_iPRangesHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
