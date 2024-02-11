/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceTopology.h>
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

InstanceTopology::InstanceTopology() : 
    m_instanceIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_networkNodesHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_zoneIdHasBeenSet(false)
{
}

InstanceTopology::InstanceTopology(const XmlNode& xmlNode) : 
    m_instanceIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_networkNodesHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_zoneIdHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceTopology& InstanceTopology::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceIdNode.GetText());
      m_instanceIdHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = Aws::Utils::Xml::DecodeEscapedXmlText(instanceTypeNode.GetText());
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode groupNameNode = resultNode.FirstChild("groupName");
    if(!groupNameNode.IsNull())
    {
      m_groupName = Aws::Utils::Xml::DecodeEscapedXmlText(groupNameNode.GetText());
      m_groupNameHasBeenSet = true;
    }
    XmlNode networkNodesNode = resultNode.FirstChild("networkNodeSet");
    if(!networkNodesNode.IsNull())
    {
      XmlNode networkNodesMember = networkNodesNode.FirstChild("item");
      while(!networkNodesMember.IsNull())
      {
        m_networkNodes.push_back(networkNodesMember.GetText());
        networkNodesMember = networkNodesMember.NextNode("item");
      }

      m_networkNodesHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode zoneIdNode = resultNode.FirstChild("zoneId");
    if(!zoneIdNode.IsNull())
    {
      m_zoneId = Aws::Utils::Xml::DecodeEscapedXmlText(zoneIdNode.GetText());
      m_zoneIdHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceTopology::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

  if(m_groupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }

  if(m_networkNodesHasBeenSet)
  {
      unsigned networkNodesIdx = 1;
      for(auto& item : m_networkNodes)
      {
        oStream << location << index << locationValue << ".NetworkNodeSet." << networkNodesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_zoneIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ZoneId=" << StringUtils::URLEncode(m_zoneId.c_str()) << "&";
  }

}

void InstanceTopology::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }
  if(m_groupNameHasBeenSet)
  {
      oStream << location << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }
  if(m_networkNodesHasBeenSet)
  {
      unsigned networkNodesIdx = 1;
      for(auto& item : m_networkNodes)
      {
        oStream << location << ".NetworkNodeSet." << networkNodesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_zoneIdHasBeenSet)
  {
      oStream << location << ".ZoneId=" << StringUtils::URLEncode(m_zoneId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
