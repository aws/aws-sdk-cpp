/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceEventWindowAssociationTarget.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

InstanceEventWindowAssociationTarget::InstanceEventWindowAssociationTarget() : 
    m_instanceIdsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_dedicatedHostIdsHasBeenSet(false)
{
}

InstanceEventWindowAssociationTarget::InstanceEventWindowAssociationTarget(const XmlNode& xmlNode) : 
    m_instanceIdsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_dedicatedHostIdsHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceEventWindowAssociationTarget& InstanceEventWindowAssociationTarget::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceIdsNode = resultNode.FirstChild("instanceIdSet");
    if(!instanceIdsNode.IsNull())
    {
      XmlNode instanceIdsMember = instanceIdsNode.FirstChild("item");
      while(!instanceIdsMember.IsNull())
      {
        m_instanceIds.push_back(instanceIdsMember.GetText());
        instanceIdsMember = instanceIdsMember.NextNode("item");
      }

      m_instanceIdsHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode dedicatedHostIdsNode = resultNode.FirstChild("dedicatedHostIdSet");
    if(!dedicatedHostIdsNode.IsNull())
    {
      XmlNode dedicatedHostIdsMember = dedicatedHostIdsNode.FirstChild("item");
      while(!dedicatedHostIdsMember.IsNull())
      {
        m_dedicatedHostIds.push_back(dedicatedHostIdsMember.GetText());
        dedicatedHostIdsMember = dedicatedHostIdsMember.NextNode("item");
      }

      m_dedicatedHostIdsHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceEventWindowAssociationTarget::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceIdsHasBeenSet)
  {
      unsigned instanceIdsIdx = 1;
      for(auto& item : m_instanceIds)
      {
        oStream << location << index << locationValue << ".InstanceIdSet." << instanceIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

  if(m_dedicatedHostIdsHasBeenSet)
  {
      unsigned dedicatedHostIdsIdx = 1;
      for(auto& item : m_dedicatedHostIds)
      {
        oStream << location << index << locationValue << ".DedicatedHostIdSet." << dedicatedHostIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void InstanceEventWindowAssociationTarget::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceIdsHasBeenSet)
  {
      unsigned instanceIdsIdx = 1;
      for(auto& item : m_instanceIds)
      {
        oStream << location << ".InstanceIdSet." << instanceIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_dedicatedHostIdsHasBeenSet)
  {
      unsigned dedicatedHostIdsIdx = 1;
      for(auto& item : m_dedicatedHostIds)
      {
        oStream << location << ".DedicatedHostIdSet." << dedicatedHostIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
