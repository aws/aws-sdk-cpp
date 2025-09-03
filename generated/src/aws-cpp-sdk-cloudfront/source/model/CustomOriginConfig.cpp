/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/CustomOriginConfig.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace Model
{

CustomOriginConfig::CustomOriginConfig(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

CustomOriginConfig& CustomOriginConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode hTTPPortNode = resultNode.FirstChild("HTTPPort");
    if(!hTTPPortNode.IsNull())
    {
      m_hTTPPort = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(hTTPPortNode.GetText()).c_str()).c_str());
      m_hTTPPortHasBeenSet = true;
    }
    XmlNode hTTPSPortNode = resultNode.FirstChild("HTTPSPort");
    if(!hTTPSPortNode.IsNull())
    {
      m_hTTPSPort = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(hTTPSPortNode.GetText()).c_str()).c_str());
      m_hTTPSPortHasBeenSet = true;
    }
    XmlNode originProtocolPolicyNode = resultNode.FirstChild("OriginProtocolPolicy");
    if(!originProtocolPolicyNode.IsNull())
    {
      m_originProtocolPolicy = OriginProtocolPolicyMapper::GetOriginProtocolPolicyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(originProtocolPolicyNode.GetText()).c_str()));
      m_originProtocolPolicyHasBeenSet = true;
    }
    XmlNode originSslProtocolsNode = resultNode.FirstChild("OriginSslProtocols");
    if(!originSslProtocolsNode.IsNull())
    {
      m_originSslProtocols = originSslProtocolsNode;
      m_originSslProtocolsHasBeenSet = true;
    }
    XmlNode originReadTimeoutNode = resultNode.FirstChild("OriginReadTimeout");
    if(!originReadTimeoutNode.IsNull())
    {
      m_originReadTimeout = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(originReadTimeoutNode.GetText()).c_str()).c_str());
      m_originReadTimeoutHasBeenSet = true;
    }
    XmlNode originKeepaliveTimeoutNode = resultNode.FirstChild("OriginKeepaliveTimeout");
    if(!originKeepaliveTimeoutNode.IsNull())
    {
      m_originKeepaliveTimeout = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(originKeepaliveTimeoutNode.GetText()).c_str()).c_str());
      m_originKeepaliveTimeoutHasBeenSet = true;
    }
    XmlNode ipAddressTypeNode = resultNode.FirstChild("IpAddressType");
    if(!ipAddressTypeNode.IsNull())
    {
      m_ipAddressType = IpAddressTypeMapper::GetIpAddressTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ipAddressTypeNode.GetText()).c_str()));
      m_ipAddressTypeHasBeenSet = true;
    }
  }

  return *this;
}

void CustomOriginConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_hTTPPortHasBeenSet)
  {
   XmlNode hTTPPortNode = parentNode.CreateChildElement("HTTPPort");
   ss << m_hTTPPort;
   hTTPPortNode.SetText(ss.str());
   ss.str("");
  }

  if(m_hTTPSPortHasBeenSet)
  {
   XmlNode hTTPSPortNode = parentNode.CreateChildElement("HTTPSPort");
   ss << m_hTTPSPort;
   hTTPSPortNode.SetText(ss.str());
   ss.str("");
  }

  if(m_originProtocolPolicyHasBeenSet)
  {
   XmlNode originProtocolPolicyNode = parentNode.CreateChildElement("OriginProtocolPolicy");
   originProtocolPolicyNode.SetText(OriginProtocolPolicyMapper::GetNameForOriginProtocolPolicy(m_originProtocolPolicy));
  }

  if(m_originSslProtocolsHasBeenSet)
  {
   XmlNode originSslProtocolsNode = parentNode.CreateChildElement("OriginSslProtocols");
   m_originSslProtocols.AddToNode(originSslProtocolsNode);
  }

  if(m_originReadTimeoutHasBeenSet)
  {
   XmlNode originReadTimeoutNode = parentNode.CreateChildElement("OriginReadTimeout");
   ss << m_originReadTimeout;
   originReadTimeoutNode.SetText(ss.str());
   ss.str("");
  }

  if(m_originKeepaliveTimeoutHasBeenSet)
  {
   XmlNode originKeepaliveTimeoutNode = parentNode.CreateChildElement("OriginKeepaliveTimeout");
   ss << m_originKeepaliveTimeout;
   originKeepaliveTimeoutNode.SetText(ss.str());
   ss.str("");
  }

  if(m_ipAddressTypeHasBeenSet)
  {
   XmlNode ipAddressTypeNode = parentNode.CreateChildElement("IpAddressType");
   ipAddressTypeNode.SetText(IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType));
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
