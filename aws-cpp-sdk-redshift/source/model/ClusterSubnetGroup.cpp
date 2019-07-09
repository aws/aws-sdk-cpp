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

#include <aws/redshift/model/ClusterSubnetGroup.h>
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

ClusterSubnetGroup::ClusterSubnetGroup() : 
    m_clusterSubnetGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetGroupStatusHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ClusterSubnetGroup::ClusterSubnetGroup(const XmlNode& xmlNode) : 
    m_clusterSubnetGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetGroupStatusHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

ClusterSubnetGroup& ClusterSubnetGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode clusterSubnetGroupNameNode = resultNode.FirstChild("ClusterSubnetGroupName");
    if(!clusterSubnetGroupNameNode.IsNull())
    {
      m_clusterSubnetGroupName = clusterSubnetGroupNameNode.GetText();
      m_clusterSubnetGroupNameHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("VpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = vpcIdNode.GetText();
      m_vpcIdHasBeenSet = true;
    }
    XmlNode subnetGroupStatusNode = resultNode.FirstChild("SubnetGroupStatus");
    if(!subnetGroupStatusNode.IsNull())
    {
      m_subnetGroupStatus = subnetGroupStatusNode.GetText();
      m_subnetGroupStatusHasBeenSet = true;
    }
    XmlNode subnetsNode = resultNode.FirstChild("Subnets");
    if(!subnetsNode.IsNull())
    {
      XmlNode subnetsMember = subnetsNode.FirstChild("Subnet");
      while(!subnetsMember.IsNull())
      {
        m_subnets.push_back(subnetsMember);
        subnetsMember = subnetsMember.NextNode("Subnet");
      }

      m_subnetsHasBeenSet = true;
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

void ClusterSubnetGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_clusterSubnetGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterSubnetGroupName=" << StringUtils::URLEncode(m_clusterSubnetGroupName.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_subnetGroupStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetGroupStatus=" << StringUtils::URLEncode(m_subnetGroupStatus.c_str()) << "&";
  }

  if(m_subnetsHasBeenSet)
  {
      unsigned subnetsIdx = 1;
      for(auto& item : m_subnets)
      {
        Aws::StringStream subnetsSs;
        subnetsSs << location << index << locationValue << ".Subnet." << subnetsIdx++;
        item.OutputToStream(oStream, subnetsSs.str().c_str());
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

void ClusterSubnetGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_clusterSubnetGroupNameHasBeenSet)
  {
      oStream << location << ".ClusterSubnetGroupName=" << StringUtils::URLEncode(m_clusterSubnetGroupName.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_subnetGroupStatusHasBeenSet)
  {
      oStream << location << ".SubnetGroupStatus=" << StringUtils::URLEncode(m_subnetGroupStatus.c_str()) << "&";
  }
  if(m_subnetsHasBeenSet)
  {
      unsigned subnetsIdx = 1;
      for(auto& item : m_subnets)
      {
        Aws::StringStream subnetsSs;
        subnetsSs << location <<  ".Subnet." << subnetsIdx++;
        item.OutputToStream(oStream, subnetsSs.str().c_str());
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
