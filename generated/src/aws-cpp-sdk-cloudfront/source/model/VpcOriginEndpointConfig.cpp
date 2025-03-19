/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/VpcOriginEndpointConfig.h>
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

VpcOriginEndpointConfig::VpcOriginEndpointConfig(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

VpcOriginEndpointConfig& VpcOriginEndpointConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode arnNode = resultNode.FirstChild("Arn");
    if(!arnNode.IsNull())
    {
      m_arn = Aws::Utils::Xml::DecodeEscapedXmlText(arnNode.GetText());
      m_arnHasBeenSet = true;
    }
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
  }

  return *this;
}

void VpcOriginEndpointConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_arnHasBeenSet)
  {
   XmlNode arnNode = parentNode.CreateChildElement("Arn");
   arnNode.SetText(m_arn);
  }

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

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
