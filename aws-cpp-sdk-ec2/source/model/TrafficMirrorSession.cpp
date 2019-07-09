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

#include <aws/ec2/model/TrafficMirrorSession.h>
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

TrafficMirrorSession::TrafficMirrorSession() : 
    m_trafficMirrorSessionIdHasBeenSet(false),
    m_trafficMirrorTargetIdHasBeenSet(false),
    m_trafficMirrorFilterIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_packetLength(0),
    m_packetLengthHasBeenSet(false),
    m_sessionNumber(0),
    m_sessionNumberHasBeenSet(false),
    m_virtualNetworkId(0),
    m_virtualNetworkIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

TrafficMirrorSession::TrafficMirrorSession(const XmlNode& xmlNode) : 
    m_trafficMirrorSessionIdHasBeenSet(false),
    m_trafficMirrorTargetIdHasBeenSet(false),
    m_trafficMirrorFilterIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_packetLength(0),
    m_packetLengthHasBeenSet(false),
    m_sessionNumber(0),
    m_sessionNumberHasBeenSet(false),
    m_virtualNetworkId(0),
    m_virtualNetworkIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

TrafficMirrorSession& TrafficMirrorSession::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode trafficMirrorSessionIdNode = resultNode.FirstChild("trafficMirrorSessionId");
    if(!trafficMirrorSessionIdNode.IsNull())
    {
      m_trafficMirrorSessionId = trafficMirrorSessionIdNode.GetText();
      m_trafficMirrorSessionIdHasBeenSet = true;
    }
    XmlNode trafficMirrorTargetIdNode = resultNode.FirstChild("trafficMirrorTargetId");
    if(!trafficMirrorTargetIdNode.IsNull())
    {
      m_trafficMirrorTargetId = trafficMirrorTargetIdNode.GetText();
      m_trafficMirrorTargetIdHasBeenSet = true;
    }
    XmlNode trafficMirrorFilterIdNode = resultNode.FirstChild("trafficMirrorFilterId");
    if(!trafficMirrorFilterIdNode.IsNull())
    {
      m_trafficMirrorFilterId = trafficMirrorFilterIdNode.GetText();
      m_trafficMirrorFilterIdHasBeenSet = true;
    }
    XmlNode networkInterfaceIdNode = resultNode.FirstChild("networkInterfaceId");
    if(!networkInterfaceIdNode.IsNull())
    {
      m_networkInterfaceId = networkInterfaceIdNode.GetText();
      m_networkInterfaceIdHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = ownerIdNode.GetText();
      m_ownerIdHasBeenSet = true;
    }
    XmlNode packetLengthNode = resultNode.FirstChild("packetLength");
    if(!packetLengthNode.IsNull())
    {
      m_packetLength = StringUtils::ConvertToInt32(StringUtils::Trim(packetLengthNode.GetText().c_str()).c_str());
      m_packetLengthHasBeenSet = true;
    }
    XmlNode sessionNumberNode = resultNode.FirstChild("sessionNumber");
    if(!sessionNumberNode.IsNull())
    {
      m_sessionNumber = StringUtils::ConvertToInt32(StringUtils::Trim(sessionNumberNode.GetText().c_str()).c_str());
      m_sessionNumberHasBeenSet = true;
    }
    XmlNode virtualNetworkIdNode = resultNode.FirstChild("virtualNetworkId");
    if(!virtualNetworkIdNode.IsNull())
    {
      m_virtualNetworkId = StringUtils::ConvertToInt32(StringUtils::Trim(virtualNetworkIdNode.GetText().c_str()).c_str());
      m_virtualNetworkIdHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
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
  }

  return *this;
}

void TrafficMirrorSession::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_trafficMirrorSessionIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TrafficMirrorSessionId=" << StringUtils::URLEncode(m_trafficMirrorSessionId.c_str()) << "&";
  }

  if(m_trafficMirrorTargetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TrafficMirrorTargetId=" << StringUtils::URLEncode(m_trafficMirrorTargetId.c_str()) << "&";
  }

  if(m_trafficMirrorFilterIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TrafficMirrorFilterId=" << StringUtils::URLEncode(m_trafficMirrorFilterId.c_str()) << "&";
  }

  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_packetLengthHasBeenSet)
  {
      oStream << location << index << locationValue << ".PacketLength=" << m_packetLength << "&";
  }

  if(m_sessionNumberHasBeenSet)
  {
      oStream << location << index << locationValue << ".SessionNumber=" << m_sessionNumber << "&";
  }

  if(m_virtualNetworkIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VirtualNetworkId=" << m_virtualNetworkId << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
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

}

void TrafficMirrorSession::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_trafficMirrorSessionIdHasBeenSet)
  {
      oStream << location << ".TrafficMirrorSessionId=" << StringUtils::URLEncode(m_trafficMirrorSessionId.c_str()) << "&";
  }
  if(m_trafficMirrorTargetIdHasBeenSet)
  {
      oStream << location << ".TrafficMirrorTargetId=" << StringUtils::URLEncode(m_trafficMirrorTargetId.c_str()) << "&";
  }
  if(m_trafficMirrorFilterIdHasBeenSet)
  {
      oStream << location << ".TrafficMirrorFilterId=" << StringUtils::URLEncode(m_trafficMirrorFilterId.c_str()) << "&";
  }
  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_packetLengthHasBeenSet)
  {
      oStream << location << ".PacketLength=" << m_packetLength << "&";
  }
  if(m_sessionNumberHasBeenSet)
  {
      oStream << location << ".SessionNumber=" << m_sessionNumber << "&";
  }
  if(m_virtualNetworkIdHasBeenSet)
  {
      oStream << location << ".VirtualNetworkId=" << m_virtualNetworkId << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
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
}

} // namespace Model
} // namespace EC2
} // namespace Aws
