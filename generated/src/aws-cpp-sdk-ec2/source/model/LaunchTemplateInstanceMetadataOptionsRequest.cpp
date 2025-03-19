/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LaunchTemplateInstanceMetadataOptionsRequest.h>
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

LaunchTemplateInstanceMetadataOptionsRequest::LaunchTemplateInstanceMetadataOptionsRequest(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

LaunchTemplateInstanceMetadataOptionsRequest& LaunchTemplateInstanceMetadataOptionsRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode httpTokensNode = resultNode.FirstChild("HttpTokens");
    if(!httpTokensNode.IsNull())
    {
      m_httpTokens = LaunchTemplateHttpTokensStateMapper::GetLaunchTemplateHttpTokensStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpTokensNode.GetText()).c_str()));
      m_httpTokensHasBeenSet = true;
    }
    XmlNode httpPutResponseHopLimitNode = resultNode.FirstChild("HttpPutResponseHopLimit");
    if(!httpPutResponseHopLimitNode.IsNull())
    {
      m_httpPutResponseHopLimit = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpPutResponseHopLimitNode.GetText()).c_str()).c_str());
      m_httpPutResponseHopLimitHasBeenSet = true;
    }
    XmlNode httpEndpointNode = resultNode.FirstChild("HttpEndpoint");
    if(!httpEndpointNode.IsNull())
    {
      m_httpEndpoint = LaunchTemplateInstanceMetadataEndpointStateMapper::GetLaunchTemplateInstanceMetadataEndpointStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpEndpointNode.GetText()).c_str()));
      m_httpEndpointHasBeenSet = true;
    }
    XmlNode httpProtocolIpv6Node = resultNode.FirstChild("HttpProtocolIpv6");
    if(!httpProtocolIpv6Node.IsNull())
    {
      m_httpProtocolIpv6 = LaunchTemplateInstanceMetadataProtocolIpv6Mapper::GetLaunchTemplateInstanceMetadataProtocolIpv6ForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpProtocolIpv6Node.GetText()).c_str()));
      m_httpProtocolIpv6HasBeenSet = true;
    }
    XmlNode instanceMetadataTagsNode = resultNode.FirstChild("InstanceMetadataTags");
    if(!instanceMetadataTagsNode.IsNull())
    {
      m_instanceMetadataTags = LaunchTemplateInstanceMetadataTagsStateMapper::GetLaunchTemplateInstanceMetadataTagsStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceMetadataTagsNode.GetText()).c_str()));
      m_instanceMetadataTagsHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchTemplateInstanceMetadataOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_httpTokensHasBeenSet)
  {
      oStream << location << index << locationValue << ".HttpTokens=" << StringUtils::URLEncode(LaunchTemplateHttpTokensStateMapper::GetNameForLaunchTemplateHttpTokensState(m_httpTokens)) << "&";
  }

  if(m_httpPutResponseHopLimitHasBeenSet)
  {
      oStream << location << index << locationValue << ".HttpPutResponseHopLimit=" << m_httpPutResponseHopLimit << "&";
  }

  if(m_httpEndpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".HttpEndpoint=" << StringUtils::URLEncode(LaunchTemplateInstanceMetadataEndpointStateMapper::GetNameForLaunchTemplateInstanceMetadataEndpointState(m_httpEndpoint)) << "&";
  }

  if(m_httpProtocolIpv6HasBeenSet)
  {
      oStream << location << index << locationValue << ".HttpProtocolIpv6=" << StringUtils::URLEncode(LaunchTemplateInstanceMetadataProtocolIpv6Mapper::GetNameForLaunchTemplateInstanceMetadataProtocolIpv6(m_httpProtocolIpv6)) << "&";
  }

  if(m_instanceMetadataTagsHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceMetadataTags=" << StringUtils::URLEncode(LaunchTemplateInstanceMetadataTagsStateMapper::GetNameForLaunchTemplateInstanceMetadataTagsState(m_instanceMetadataTags)) << "&";
  }

}

void LaunchTemplateInstanceMetadataOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_httpTokensHasBeenSet)
  {
      oStream << location << ".HttpTokens=" << StringUtils::URLEncode(LaunchTemplateHttpTokensStateMapper::GetNameForLaunchTemplateHttpTokensState(m_httpTokens)) << "&";
  }
  if(m_httpPutResponseHopLimitHasBeenSet)
  {
      oStream << location << ".HttpPutResponseHopLimit=" << m_httpPutResponseHopLimit << "&";
  }
  if(m_httpEndpointHasBeenSet)
  {
      oStream << location << ".HttpEndpoint=" << StringUtils::URLEncode(LaunchTemplateInstanceMetadataEndpointStateMapper::GetNameForLaunchTemplateInstanceMetadataEndpointState(m_httpEndpoint)) << "&";
  }
  if(m_httpProtocolIpv6HasBeenSet)
  {
      oStream << location << ".HttpProtocolIpv6=" << StringUtils::URLEncode(LaunchTemplateInstanceMetadataProtocolIpv6Mapper::GetNameForLaunchTemplateInstanceMetadataProtocolIpv6(m_httpProtocolIpv6)) << "&";
  }
  if(m_instanceMetadataTagsHasBeenSet)
  {
      oStream << location << ".InstanceMetadataTags=" << StringUtils::URLEncode(LaunchTemplateInstanceMetadataTagsStateMapper::GetNameForLaunchTemplateInstanceMetadataTagsState(m_instanceMetadataTags)) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
