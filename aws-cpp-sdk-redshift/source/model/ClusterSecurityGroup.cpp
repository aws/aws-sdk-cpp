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

#include <aws/redshift/model/ClusterSecurityGroup.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

ClusterSecurityGroup::ClusterSecurityGroup() : 
    m_clusterSecurityGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_eC2SecurityGroupsHasBeenSet(false),
    m_iPRangesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ClusterSecurityGroup::ClusterSecurityGroup(const XmlNode& xmlNode) : 
    m_clusterSecurityGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_eC2SecurityGroupsHasBeenSet(false),
    m_iPRangesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

ClusterSecurityGroup& ClusterSecurityGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode clusterSecurityGroupNameNode = resultNode.FirstChild("ClusterSecurityGroupName");
    if(!clusterSecurityGroupNameNode.IsNull())
    {
      m_clusterSecurityGroupName = clusterSecurityGroupNameNode.GetText();
      m_clusterSecurityGroupNameHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode eC2SecurityGroupsNode = resultNode.FirstChild("EC2SecurityGroups");
    if(!eC2SecurityGroupsNode.IsNull())
    {
      XmlNode eC2SecurityGroupsMember = eC2SecurityGroupsNode.FirstChild("EC2SecurityGroup");
      while(!eC2SecurityGroupsMember.IsNull())
      {
        m_eC2SecurityGroups.push_back(eC2SecurityGroupsMember);
        eC2SecurityGroupsMember = eC2SecurityGroupsMember.NextNode("EC2SecurityGroup");
      }

      m_eC2SecurityGroupsHasBeenSet = true;
    }
    XmlNode iPRangesNode = resultNode.FirstChild("IPRanges");
    if(!iPRangesNode.IsNull())
    {
      XmlNode iPRangesMember = iPRangesNode.FirstChild("IPRange");
      while(!iPRangesMember.IsNull())
      {
        m_iPRanges.push_back(iPRangesMember);
        iPRangesMember = iPRangesMember.NextNode("IPRange");
      }

      m_iPRangesHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("Tag");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("Tag");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void ClusterSecurityGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_clusterSecurityGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterSecurityGroupName=" << StringUtils::URLEncode(m_clusterSecurityGroupName.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_eC2SecurityGroupsHasBeenSet)
  {
      unsigned eC2SecurityGroupsIdx = 1;
      for(auto& item : m_eC2SecurityGroups)
      {
        Aws::StringStream eC2SecurityGroupsSs;
        eC2SecurityGroupsSs << location << index << locationValue << ".EC2SecurityGroup." << eC2SecurityGroupsIdx++;
        item.OutputToStream(oStream, eC2SecurityGroupsSs.str().c_str());
      }
  }

  if(m_iPRangesHasBeenSet)
  {
      unsigned iPRangesIdx = 1;
      for(auto& item : m_iPRanges)
      {
        Aws::StringStream iPRangesSs;
        iPRangesSs << location << index << locationValue << ".IPRange." << iPRangesIdx++;
        item.OutputToStream(oStream, iPRangesSs.str().c_str());
      }
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".Tag." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

}

void ClusterSecurityGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_clusterSecurityGroupNameHasBeenSet)
  {
      oStream << location << ".ClusterSecurityGroupName=" << StringUtils::URLEncode(m_clusterSecurityGroupName.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_eC2SecurityGroupsHasBeenSet)
  {
      unsigned eC2SecurityGroupsIdx = 1;
      for(auto& item : m_eC2SecurityGroups)
      {
        Aws::StringStream eC2SecurityGroupsSs;
        eC2SecurityGroupsSs << location <<  ".EC2SecurityGroup." << eC2SecurityGroupsIdx++;
        item.OutputToStream(oStream, eC2SecurityGroupsSs.str().c_str());
      }
  }
  if(m_iPRangesHasBeenSet)
  {
      unsigned iPRangesIdx = 1;
      for(auto& item : m_iPRanges)
      {
        Aws::StringStream iPRangesSs;
        iPRangesSs << location <<  ".IPRange." << iPRangesIdx++;
        item.OutputToStream(oStream, iPRangesSs.str().c_str());
      }
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".Tag." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
