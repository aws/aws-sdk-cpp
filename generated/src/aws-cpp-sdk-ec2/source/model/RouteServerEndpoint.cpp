/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RouteServerEndpoint.h>
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

RouteServerEndpoint::RouteServerEndpoint(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

RouteServerEndpoint& RouteServerEndpoint::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode routeServerIdNode = resultNode.FirstChild("routeServerId");
    if(!routeServerIdNode.IsNull())
    {
      m_routeServerId = Aws::Utils::Xml::DecodeEscapedXmlText(routeServerIdNode.GetText());
      m_routeServerIdHasBeenSet = true;
    }
    XmlNode routeServerEndpointIdNode = resultNode.FirstChild("routeServerEndpointId");
    if(!routeServerEndpointIdNode.IsNull())
    {
      m_routeServerEndpointId = Aws::Utils::Xml::DecodeEscapedXmlText(routeServerEndpointIdNode.GetText());
      m_routeServerEndpointIdHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode subnetIdNode = resultNode.FirstChild("subnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = Aws::Utils::Xml::DecodeEscapedXmlText(subnetIdNode.GetText());
      m_subnetIdHasBeenSet = true;
    }
    XmlNode eniIdNode = resultNode.FirstChild("eniId");
    if(!eniIdNode.IsNull())
    {
      m_eniId = Aws::Utils::Xml::DecodeEscapedXmlText(eniIdNode.GetText());
      m_eniIdHasBeenSet = true;
    }
    XmlNode eniAddressNode = resultNode.FirstChild("eniAddress");
    if(!eniAddressNode.IsNull())
    {
      m_eniAddress = Aws::Utils::Xml::DecodeEscapedXmlText(eniAddressNode.GetText());
      m_eniAddressHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = RouteServerEndpointStateMapper::GetRouteServerEndpointStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode failureReasonNode = resultNode.FirstChild("failureReason");
    if(!failureReasonNode.IsNull())
    {
      m_failureReason = Aws::Utils::Xml::DecodeEscapedXmlText(failureReasonNode.GetText());
      m_failureReasonHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      m_tagsHasBeenSet = !tagsMember.IsNull();
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

void RouteServerEndpoint::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_routeServerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RouteServerId=" << StringUtils::URLEncode(m_routeServerId.c_str()) << "&";
  }

  if(m_routeServerEndpointIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RouteServerEndpointId=" << StringUtils::URLEncode(m_routeServerEndpointId.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_eniIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".EniId=" << StringUtils::URLEncode(m_eniId.c_str()) << "&";
  }

  if(m_eniAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".EniAddress=" << StringUtils::URLEncode(m_eniAddress.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(RouteServerEndpointStateMapper::GetNameForRouteServerEndpointState(m_state)) << "&";
  }

  if(m_failureReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".FailureReason=" << StringUtils::URLEncode(m_failureReason.c_str()) << "&";
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

void RouteServerEndpoint::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_routeServerIdHasBeenSet)
  {
      oStream << location << ".RouteServerId=" << StringUtils::URLEncode(m_routeServerId.c_str()) << "&";
  }
  if(m_routeServerEndpointIdHasBeenSet)
  {
      oStream << location << ".RouteServerEndpointId=" << StringUtils::URLEncode(m_routeServerEndpointId.c_str()) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if(m_eniIdHasBeenSet)
  {
      oStream << location << ".EniId=" << StringUtils::URLEncode(m_eniId.c_str()) << "&";
  }
  if(m_eniAddressHasBeenSet)
  {
      oStream << location << ".EniAddress=" << StringUtils::URLEncode(m_eniAddress.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(RouteServerEndpointStateMapper::GetNameForRouteServerEndpointState(m_state)) << "&";
  }
  if(m_failureReasonHasBeenSet)
  {
      oStream << location << ".FailureReason=" << StringUtils::URLEncode(m_failureReason.c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
