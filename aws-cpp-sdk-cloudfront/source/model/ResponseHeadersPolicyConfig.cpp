/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ResponseHeadersPolicyConfig.h>
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

ResponseHeadersPolicyConfig::ResponseHeadersPolicyConfig() : 
    m_commentHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_corsConfigHasBeenSet(false),
    m_securityHeadersConfigHasBeenSet(false),
    m_serverTimingHeadersConfigHasBeenSet(false),
    m_customHeadersConfigHasBeenSet(false)
{
}

ResponseHeadersPolicyConfig::ResponseHeadersPolicyConfig(const XmlNode& xmlNode) : 
    m_commentHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_corsConfigHasBeenSet(false),
    m_securityHeadersConfigHasBeenSet(false),
    m_serverTimingHeadersConfigHasBeenSet(false),
    m_customHeadersConfigHasBeenSet(false)
{
  *this = xmlNode;
}

ResponseHeadersPolicyConfig& ResponseHeadersPolicyConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode commentNode = resultNode.FirstChild("Comment");
    if(!commentNode.IsNull())
    {
      m_comment = Aws::Utils::Xml::DecodeEscapedXmlText(commentNode.GetText());
      m_commentHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode corsConfigNode = resultNode.FirstChild("CorsConfig");
    if(!corsConfigNode.IsNull())
    {
      m_corsConfig = corsConfigNode;
      m_corsConfigHasBeenSet = true;
    }
    XmlNode securityHeadersConfigNode = resultNode.FirstChild("SecurityHeadersConfig");
    if(!securityHeadersConfigNode.IsNull())
    {
      m_securityHeadersConfig = securityHeadersConfigNode;
      m_securityHeadersConfigHasBeenSet = true;
    }
    XmlNode serverTimingHeadersConfigNode = resultNode.FirstChild("ServerTimingHeadersConfig");
    if(!serverTimingHeadersConfigNode.IsNull())
    {
      m_serverTimingHeadersConfig = serverTimingHeadersConfigNode;
      m_serverTimingHeadersConfigHasBeenSet = true;
    }
    XmlNode customHeadersConfigNode = resultNode.FirstChild("CustomHeadersConfig");
    if(!customHeadersConfigNode.IsNull())
    {
      m_customHeadersConfig = customHeadersConfigNode;
      m_customHeadersConfigHasBeenSet = true;
    }
  }

  return *this;
}

void ResponseHeadersPolicyConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_commentHasBeenSet)
  {
   XmlNode commentNode = parentNode.CreateChildElement("Comment");
   commentNode.SetText(m_comment);
  }

  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_corsConfigHasBeenSet)
  {
   XmlNode corsConfigNode = parentNode.CreateChildElement("CorsConfig");
   m_corsConfig.AddToNode(corsConfigNode);
  }

  if(m_securityHeadersConfigHasBeenSet)
  {
   XmlNode securityHeadersConfigNode = parentNode.CreateChildElement("SecurityHeadersConfig");
   m_securityHeadersConfig.AddToNode(securityHeadersConfigNode);
  }

  if(m_serverTimingHeadersConfigHasBeenSet)
  {
   XmlNode serverTimingHeadersConfigNode = parentNode.CreateChildElement("ServerTimingHeadersConfig");
   m_serverTimingHeadersConfig.AddToNode(serverTimingHeadersConfigNode);
  }

  if(m_customHeadersConfigHasBeenSet)
  {
   XmlNode customHeadersConfigNode = parentNode.CreateChildElement("CustomHeadersConfig");
   m_customHeadersConfig.AddToNode(customHeadersConfigNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
