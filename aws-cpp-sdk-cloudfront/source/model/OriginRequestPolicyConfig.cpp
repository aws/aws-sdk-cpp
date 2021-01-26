/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/OriginRequestPolicyConfig.h>
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

OriginRequestPolicyConfig::OriginRequestPolicyConfig() : 
    m_commentHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_headersConfigHasBeenSet(false),
    m_cookiesConfigHasBeenSet(false),
    m_queryStringsConfigHasBeenSet(false)
{
}

OriginRequestPolicyConfig::OriginRequestPolicyConfig(const XmlNode& xmlNode) : 
    m_commentHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_headersConfigHasBeenSet(false),
    m_cookiesConfigHasBeenSet(false),
    m_queryStringsConfigHasBeenSet(false)
{
  *this = xmlNode;
}

OriginRequestPolicyConfig& OriginRequestPolicyConfig::operator =(const XmlNode& xmlNode)
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
    XmlNode headersConfigNode = resultNode.FirstChild("HeadersConfig");
    if(!headersConfigNode.IsNull())
    {
      m_headersConfig = headersConfigNode;
      m_headersConfigHasBeenSet = true;
    }
    XmlNode cookiesConfigNode = resultNode.FirstChild("CookiesConfig");
    if(!cookiesConfigNode.IsNull())
    {
      m_cookiesConfig = cookiesConfigNode;
      m_cookiesConfigHasBeenSet = true;
    }
    XmlNode queryStringsConfigNode = resultNode.FirstChild("QueryStringsConfig");
    if(!queryStringsConfigNode.IsNull())
    {
      m_queryStringsConfig = queryStringsConfigNode;
      m_queryStringsConfigHasBeenSet = true;
    }
  }

  return *this;
}

void OriginRequestPolicyConfig::AddToNode(XmlNode& parentNode) const
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

  if(m_headersConfigHasBeenSet)
  {
   XmlNode headersConfigNode = parentNode.CreateChildElement("HeadersConfig");
   m_headersConfig.AddToNode(headersConfigNode);
  }

  if(m_cookiesConfigHasBeenSet)
  {
   XmlNode cookiesConfigNode = parentNode.CreateChildElement("CookiesConfig");
   m_cookiesConfig.AddToNode(cookiesConfigNode);
  }

  if(m_queryStringsConfigHasBeenSet)
  {
   XmlNode queryStringsConfigNode = parentNode.CreateChildElement("QueryStringsConfig");
   m_queryStringsConfig.AddToNode(queryStringsConfigNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
