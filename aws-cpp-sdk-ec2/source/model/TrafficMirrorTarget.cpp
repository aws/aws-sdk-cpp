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

#include <aws/ec2/model/TrafficMirrorTarget.h>
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

TrafficMirrorTarget::TrafficMirrorTarget() : 
    m_trafficMirrorTargetIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_networkLoadBalancerArnHasBeenSet(false),
    m_type(TrafficMirrorTargetType::NOT_SET),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

TrafficMirrorTarget::TrafficMirrorTarget(const XmlNode& xmlNode) : 
    m_trafficMirrorTargetIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_networkLoadBalancerArnHasBeenSet(false),
    m_type(TrafficMirrorTargetType::NOT_SET),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

TrafficMirrorTarget& TrafficMirrorTarget::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode trafficMirrorTargetIdNode = resultNode.FirstChild("trafficMirrorTargetId");
    if(!trafficMirrorTargetIdNode.IsNull())
    {
      m_trafficMirrorTargetId = trafficMirrorTargetIdNode.GetText();
      m_trafficMirrorTargetIdHasBeenSet = true;
    }
    XmlNode networkInterfaceIdNode = resultNode.FirstChild("networkInterfaceId");
    if(!networkInterfaceIdNode.IsNull())
    {
      m_networkInterfaceId = networkInterfaceIdNode.GetText();
      m_networkInterfaceIdHasBeenSet = true;
    }
    XmlNode networkLoadBalancerArnNode = resultNode.FirstChild("networkLoadBalancerArn");
    if(!networkLoadBalancerArnNode.IsNull())
    {
      m_networkLoadBalancerArn = networkLoadBalancerArnNode.GetText();
      m_networkLoadBalancerArnHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("type");
    if(!typeNode.IsNull())
    {
      m_type = TrafficMirrorTargetTypeMapper::GetTrafficMirrorTargetTypeForName(StringUtils::Trim(typeNode.GetText().c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = ownerIdNode.GetText();
      m_ownerIdHasBeenSet = true;
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

void TrafficMirrorTarget::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_trafficMirrorTargetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TrafficMirrorTargetId=" << StringUtils::URLEncode(m_trafficMirrorTargetId.c_str()) << "&";
  }

  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

  if(m_networkLoadBalancerArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkLoadBalancerArn=" << StringUtils::URLEncode(m_networkLoadBalancerArn.c_str()) << "&";
  }

  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << TrafficMirrorTargetTypeMapper::GetNameForTrafficMirrorTargetType(m_type) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
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

void TrafficMirrorTarget::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_trafficMirrorTargetIdHasBeenSet)
  {
      oStream << location << ".TrafficMirrorTargetId=" << StringUtils::URLEncode(m_trafficMirrorTargetId.c_str()) << "&";
  }
  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }
  if(m_networkLoadBalancerArnHasBeenSet)
  {
      oStream << location << ".NetworkLoadBalancerArn=" << StringUtils::URLEncode(m_networkLoadBalancerArn.c_str()) << "&";
  }
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << TrafficMirrorTargetTypeMapper::GetNameForTrafficMirrorTargetType(m_type) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
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
