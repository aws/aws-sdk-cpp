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

#include <aws/ec2/model/VpcEndpointConnection.h>
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

VpcEndpointConnection::VpcEndpointConnection() : 
    m_serviceIdHasBeenSet(false),
    m_vpcEndpointIdHasBeenSet(false),
    m_vpcEndpointOwnerHasBeenSet(false),
    m_vpcEndpointState(State::NOT_SET),
    m_vpcEndpointStateHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_dnsEntriesHasBeenSet(false),
    m_networkLoadBalancerArnsHasBeenSet(false)
{
}

VpcEndpointConnection::VpcEndpointConnection(const XmlNode& xmlNode) : 
    m_serviceIdHasBeenSet(false),
    m_vpcEndpointIdHasBeenSet(false),
    m_vpcEndpointOwnerHasBeenSet(false),
    m_vpcEndpointState(State::NOT_SET),
    m_vpcEndpointStateHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_dnsEntriesHasBeenSet(false),
    m_networkLoadBalancerArnsHasBeenSet(false)
{
  *this = xmlNode;
}

VpcEndpointConnection& VpcEndpointConnection::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode serviceIdNode = resultNode.FirstChild("serviceId");
    if(!serviceIdNode.IsNull())
    {
      m_serviceId = serviceIdNode.GetText();
      m_serviceIdHasBeenSet = true;
    }
    XmlNode vpcEndpointIdNode = resultNode.FirstChild("vpcEndpointId");
    if(!vpcEndpointIdNode.IsNull())
    {
      m_vpcEndpointId = vpcEndpointIdNode.GetText();
      m_vpcEndpointIdHasBeenSet = true;
    }
    XmlNode vpcEndpointOwnerNode = resultNode.FirstChild("vpcEndpointOwner");
    if(!vpcEndpointOwnerNode.IsNull())
    {
      m_vpcEndpointOwner = vpcEndpointOwnerNode.GetText();
      m_vpcEndpointOwnerHasBeenSet = true;
    }
    XmlNode vpcEndpointStateNode = resultNode.FirstChild("vpcEndpointState");
    if(!vpcEndpointStateNode.IsNull())
    {
      m_vpcEndpointState = StateMapper::GetStateForName(StringUtils::Trim(vpcEndpointStateNode.GetText().c_str()).c_str());
      m_vpcEndpointStateHasBeenSet = true;
    }
    XmlNode creationTimestampNode = resultNode.FirstChild("creationTimestamp");
    if(!creationTimestampNode.IsNull())
    {
      m_creationTimestamp = DateTime(StringUtils::Trim(creationTimestampNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_creationTimestampHasBeenSet = true;
    }
    XmlNode dnsEntriesNode = resultNode.FirstChild("dnsEntrySet");
    if(!dnsEntriesNode.IsNull())
    {
      XmlNode dnsEntriesMember = dnsEntriesNode.FirstChild("item");
      while(!dnsEntriesMember.IsNull())
      {
        m_dnsEntries.push_back(dnsEntriesMember);
        dnsEntriesMember = dnsEntriesMember.NextNode("item");
      }

      m_dnsEntriesHasBeenSet = true;
    }
    XmlNode networkLoadBalancerArnsNode = resultNode.FirstChild("networkLoadBalancerArnSet");
    if(!networkLoadBalancerArnsNode.IsNull())
    {
      XmlNode networkLoadBalancerArnsMember = networkLoadBalancerArnsNode.FirstChild("item");
      while(!networkLoadBalancerArnsMember.IsNull())
      {
        m_networkLoadBalancerArns.push_back(networkLoadBalancerArnsMember.GetText());
        networkLoadBalancerArnsMember = networkLoadBalancerArnsMember.NextNode("item");
      }

      m_networkLoadBalancerArnsHasBeenSet = true;
    }
  }

  return *this;
}

void VpcEndpointConnection::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_serviceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceId=" << StringUtils::URLEncode(m_serviceId.c_str()) << "&";
  }

  if(m_vpcEndpointIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcEndpointId=" << StringUtils::URLEncode(m_vpcEndpointId.c_str()) << "&";
  }

  if(m_vpcEndpointOwnerHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcEndpointOwner=" << StringUtils::URLEncode(m_vpcEndpointOwner.c_str()) << "&";
  }

  if(m_vpcEndpointStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcEndpointState=" << StateMapper::GetNameForState(m_vpcEndpointState) << "&";
  }

  if(m_creationTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationTimestamp=" << StringUtils::URLEncode(m_creationTimestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_dnsEntriesHasBeenSet)
  {
      unsigned dnsEntriesIdx = 1;
      for(auto& item : m_dnsEntries)
      {
        Aws::StringStream dnsEntriesSs;
        dnsEntriesSs << location << index << locationValue << ".DnsEntrySet." << dnsEntriesIdx++;
        item.OutputToStream(oStream, dnsEntriesSs.str().c_str());
      }
  }

  if(m_networkLoadBalancerArnsHasBeenSet)
  {
      unsigned networkLoadBalancerArnsIdx = 1;
      for(auto& item : m_networkLoadBalancerArns)
      {
        oStream << location << index << locationValue << ".NetworkLoadBalancerArnSet." << networkLoadBalancerArnsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void VpcEndpointConnection::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_serviceIdHasBeenSet)
  {
      oStream << location << ".ServiceId=" << StringUtils::URLEncode(m_serviceId.c_str()) << "&";
  }
  if(m_vpcEndpointIdHasBeenSet)
  {
      oStream << location << ".VpcEndpointId=" << StringUtils::URLEncode(m_vpcEndpointId.c_str()) << "&";
  }
  if(m_vpcEndpointOwnerHasBeenSet)
  {
      oStream << location << ".VpcEndpointOwner=" << StringUtils::URLEncode(m_vpcEndpointOwner.c_str()) << "&";
  }
  if(m_vpcEndpointStateHasBeenSet)
  {
      oStream << location << ".VpcEndpointState=" << StateMapper::GetNameForState(m_vpcEndpointState) << "&";
  }
  if(m_creationTimestampHasBeenSet)
  {
      oStream << location << ".CreationTimestamp=" << StringUtils::URLEncode(m_creationTimestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_dnsEntriesHasBeenSet)
  {
      unsigned dnsEntriesIdx = 1;
      for(auto& item : m_dnsEntries)
      {
        Aws::StringStream dnsEntriesSs;
        dnsEntriesSs << location <<  ".DnsEntrySet." << dnsEntriesIdx++;
        item.OutputToStream(oStream, dnsEntriesSs.str().c_str());
      }
  }
  if(m_networkLoadBalancerArnsHasBeenSet)
  {
      unsigned networkLoadBalancerArnsIdx = 1;
      for(auto& item : m_networkLoadBalancerArns)
      {
        oStream << location << ".NetworkLoadBalancerArnSet." << networkLoadBalancerArnsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
