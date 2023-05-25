/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceMetadataOptionsRequest.h>
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

InstanceMetadataOptionsRequest::InstanceMetadataOptionsRequest() : 
    m_httpTokens(HttpTokensState::NOT_SET),
    m_httpTokensHasBeenSet(false),
    m_httpPutResponseHopLimit(0),
    m_httpPutResponseHopLimitHasBeenSet(false),
    m_httpEndpoint(InstanceMetadataEndpointState::NOT_SET),
    m_httpEndpointHasBeenSet(false),
    m_httpProtocolIpv6(InstanceMetadataProtocolState::NOT_SET),
    m_httpProtocolIpv6HasBeenSet(false),
    m_instanceMetadataTags(InstanceMetadataTagsState::NOT_SET),
    m_instanceMetadataTagsHasBeenSet(false)
{
}

InstanceMetadataOptionsRequest::InstanceMetadataOptionsRequest(const XmlNode& xmlNode) : 
    m_httpTokens(HttpTokensState::NOT_SET),
    m_httpTokensHasBeenSet(false),
    m_httpPutResponseHopLimit(0),
    m_httpPutResponseHopLimitHasBeenSet(false),
    m_httpEndpoint(InstanceMetadataEndpointState::NOT_SET),
    m_httpEndpointHasBeenSet(false),
    m_httpProtocolIpv6(InstanceMetadataProtocolState::NOT_SET),
    m_httpProtocolIpv6HasBeenSet(false),
    m_instanceMetadataTags(InstanceMetadataTagsState::NOT_SET),
    m_instanceMetadataTagsHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceMetadataOptionsRequest& InstanceMetadataOptionsRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode httpTokensNode = resultNode.FirstChild("HttpTokens");
    if(!httpTokensNode.IsNull())
    {
      m_httpTokens = HttpTokensStateMapper::GetHttpTokensStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpTokensNode.GetText()).c_str()).c_str());
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
      m_httpEndpoint = InstanceMetadataEndpointStateMapper::GetInstanceMetadataEndpointStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpEndpointNode.GetText()).c_str()).c_str());
      m_httpEndpointHasBeenSet = true;
    }
    XmlNode httpProtocolIpv6Node = resultNode.FirstChild("HttpProtocolIpv6");
    if(!httpProtocolIpv6Node.IsNull())
    {
      m_httpProtocolIpv6 = InstanceMetadataProtocolStateMapper::GetInstanceMetadataProtocolStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(httpProtocolIpv6Node.GetText()).c_str()).c_str());
      m_httpProtocolIpv6HasBeenSet = true;
    }
    XmlNode instanceMetadataTagsNode = resultNode.FirstChild("InstanceMetadataTags");
    if(!instanceMetadataTagsNode.IsNull())
    {
      m_instanceMetadataTags = InstanceMetadataTagsStateMapper::GetInstanceMetadataTagsStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceMetadataTagsNode.GetText()).c_str()).c_str());
      m_instanceMetadataTagsHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceMetadataOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_httpTokensHasBeenSet)
  {
      oStream << location << index << locationValue << ".HttpTokens=" << HttpTokensStateMapper::GetNameForHttpTokensState(m_httpTokens) << "&";
  }

  if(m_httpPutResponseHopLimitHasBeenSet)
  {
      oStream << location << index << locationValue << ".HttpPutResponseHopLimit=" << m_httpPutResponseHopLimit << "&";
  }

  if(m_httpEndpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".HttpEndpoint=" << InstanceMetadataEndpointStateMapper::GetNameForInstanceMetadataEndpointState(m_httpEndpoint) << "&";
  }

  if(m_httpProtocolIpv6HasBeenSet)
  {
      oStream << location << index << locationValue << ".HttpProtocolIpv6=" << InstanceMetadataProtocolStateMapper::GetNameForInstanceMetadataProtocolState(m_httpProtocolIpv6) << "&";
  }

  if(m_instanceMetadataTagsHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceMetadataTags=" << InstanceMetadataTagsStateMapper::GetNameForInstanceMetadataTagsState(m_instanceMetadataTags) << "&";
  }

}

void InstanceMetadataOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_httpTokensHasBeenSet)
  {
      oStream << location << ".HttpTokens=" << HttpTokensStateMapper::GetNameForHttpTokensState(m_httpTokens) << "&";
  }
  if(m_httpPutResponseHopLimitHasBeenSet)
  {
      oStream << location << ".HttpPutResponseHopLimit=" << m_httpPutResponseHopLimit << "&";
  }
  if(m_httpEndpointHasBeenSet)
  {
      oStream << location << ".HttpEndpoint=" << InstanceMetadataEndpointStateMapper::GetNameForInstanceMetadataEndpointState(m_httpEndpoint) << "&";
  }
  if(m_httpProtocolIpv6HasBeenSet)
  {
      oStream << location << ".HttpProtocolIpv6=" << InstanceMetadataProtocolStateMapper::GetNameForInstanceMetadataProtocolState(m_httpProtocolIpv6) << "&";
  }
  if(m_instanceMetadataTagsHasBeenSet)
  {
      oStream << location << ".InstanceMetadataTags=" << InstanceMetadataTagsStateMapper::GetNameForInstanceMetadataTagsState(m_instanceMetadataTags) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
