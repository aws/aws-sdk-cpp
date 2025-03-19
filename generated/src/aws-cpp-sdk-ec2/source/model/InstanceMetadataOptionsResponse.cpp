/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceMetadataOptionsResponse.h>
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

InstanceMetadataOptionsResponse::InstanceMetadataOptionsResponse(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

InstanceMetadataOptionsResponse& InstanceMetadataOptionsResponse::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = InstanceMetadataOptionsStateMapper::GetInstanceMetadataOptionsStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode httpTokensNode = resultNode.FirstChild("httpTokens");
    if(!httpTokensNode.IsNull())
    {
      m_httpTokens = HttpTokensStateMapper::GetHttpTokensStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpTokensNode.GetText()).c_str()));
      m_httpTokensHasBeenSet = true;
    }
    XmlNode httpPutResponseHopLimitNode = resultNode.FirstChild("httpPutResponseHopLimit");
    if(!httpPutResponseHopLimitNode.IsNull())
    {
      m_httpPutResponseHopLimit = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpPutResponseHopLimitNode.GetText()).c_str()).c_str());
      m_httpPutResponseHopLimitHasBeenSet = true;
    }
    XmlNode httpEndpointNode = resultNode.FirstChild("httpEndpoint");
    if(!httpEndpointNode.IsNull())
    {
      m_httpEndpoint = InstanceMetadataEndpointStateMapper::GetInstanceMetadataEndpointStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpEndpointNode.GetText()).c_str()));
      m_httpEndpointHasBeenSet = true;
    }
    XmlNode httpProtocolIpv6Node = resultNode.FirstChild("httpProtocolIpv6");
    if(!httpProtocolIpv6Node.IsNull())
    {
      m_httpProtocolIpv6 = InstanceMetadataProtocolStateMapper::GetInstanceMetadataProtocolStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpProtocolIpv6Node.GetText()).c_str()));
      m_httpProtocolIpv6HasBeenSet = true;
    }
    XmlNode instanceMetadataTagsNode = resultNode.FirstChild("instanceMetadataTags");
    if(!instanceMetadataTagsNode.IsNull())
    {
      m_instanceMetadataTags = InstanceMetadataTagsStateMapper::GetInstanceMetadataTagsStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceMetadataTagsNode.GetText()).c_str()));
      m_instanceMetadataTagsHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceMetadataOptionsResponse::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(InstanceMetadataOptionsStateMapper::GetNameForInstanceMetadataOptionsState(m_state)) << "&";
  }

  if(m_httpTokensHasBeenSet)
  {
      oStream << location << index << locationValue << ".HttpTokens=" << StringUtils::URLEncode(HttpTokensStateMapper::GetNameForHttpTokensState(m_httpTokens)) << "&";
  }

  if(m_httpPutResponseHopLimitHasBeenSet)
  {
      oStream << location << index << locationValue << ".HttpPutResponseHopLimit=" << m_httpPutResponseHopLimit << "&";
  }

  if(m_httpEndpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".HttpEndpoint=" << StringUtils::URLEncode(InstanceMetadataEndpointStateMapper::GetNameForInstanceMetadataEndpointState(m_httpEndpoint)) << "&";
  }

  if(m_httpProtocolIpv6HasBeenSet)
  {
      oStream << location << index << locationValue << ".HttpProtocolIpv6=" << StringUtils::URLEncode(InstanceMetadataProtocolStateMapper::GetNameForInstanceMetadataProtocolState(m_httpProtocolIpv6)) << "&";
  }

  if(m_instanceMetadataTagsHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceMetadataTags=" << StringUtils::URLEncode(InstanceMetadataTagsStateMapper::GetNameForInstanceMetadataTagsState(m_instanceMetadataTags)) << "&";
  }

}

void InstanceMetadataOptionsResponse::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(InstanceMetadataOptionsStateMapper::GetNameForInstanceMetadataOptionsState(m_state)) << "&";
  }
  if(m_httpTokensHasBeenSet)
  {
      oStream << location << ".HttpTokens=" << StringUtils::URLEncode(HttpTokensStateMapper::GetNameForHttpTokensState(m_httpTokens)) << "&";
  }
  if(m_httpPutResponseHopLimitHasBeenSet)
  {
      oStream << location << ".HttpPutResponseHopLimit=" << m_httpPutResponseHopLimit << "&";
  }
  if(m_httpEndpointHasBeenSet)
  {
      oStream << location << ".HttpEndpoint=" << StringUtils::URLEncode(InstanceMetadataEndpointStateMapper::GetNameForInstanceMetadataEndpointState(m_httpEndpoint)) << "&";
  }
  if(m_httpProtocolIpv6HasBeenSet)
  {
      oStream << location << ".HttpProtocolIpv6=" << StringUtils::URLEncode(InstanceMetadataProtocolStateMapper::GetNameForInstanceMetadataProtocolState(m_httpProtocolIpv6)) << "&";
  }
  if(m_instanceMetadataTagsHasBeenSet)
  {
      oStream << location << ".InstanceMetadataTags=" << StringUtils::URLEncode(InstanceMetadataTagsStateMapper::GetNameForInstanceMetadataTagsState(m_instanceMetadataTags)) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
