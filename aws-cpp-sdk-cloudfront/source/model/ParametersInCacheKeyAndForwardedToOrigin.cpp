/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ParametersInCacheKeyAndForwardedToOrigin.h>
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

ParametersInCacheKeyAndForwardedToOrigin::ParametersInCacheKeyAndForwardedToOrigin() : 
    m_enableAcceptEncodingGzip(false),
    m_enableAcceptEncodingGzipHasBeenSet(false),
    m_enableAcceptEncodingBrotli(false),
    m_enableAcceptEncodingBrotliHasBeenSet(false),
    m_headersConfigHasBeenSet(false),
    m_cookiesConfigHasBeenSet(false),
    m_queryStringsConfigHasBeenSet(false)
{
}

ParametersInCacheKeyAndForwardedToOrigin::ParametersInCacheKeyAndForwardedToOrigin(const XmlNode& xmlNode) : 
    m_enableAcceptEncodingGzip(false),
    m_enableAcceptEncodingGzipHasBeenSet(false),
    m_enableAcceptEncodingBrotli(false),
    m_enableAcceptEncodingBrotliHasBeenSet(false),
    m_headersConfigHasBeenSet(false),
    m_cookiesConfigHasBeenSet(false),
    m_queryStringsConfigHasBeenSet(false)
{
  *this = xmlNode;
}

ParametersInCacheKeyAndForwardedToOrigin& ParametersInCacheKeyAndForwardedToOrigin::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode enableAcceptEncodingGzipNode = resultNode.FirstChild("EnableAcceptEncodingGzip");
    if(!enableAcceptEncodingGzipNode.IsNull())
    {
      m_enableAcceptEncodingGzip = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enableAcceptEncodingGzipNode.GetText()).c_str()).c_str());
      m_enableAcceptEncodingGzipHasBeenSet = true;
    }
    XmlNode enableAcceptEncodingBrotliNode = resultNode.FirstChild("EnableAcceptEncodingBrotli");
    if(!enableAcceptEncodingBrotliNode.IsNull())
    {
      m_enableAcceptEncodingBrotli = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enableAcceptEncodingBrotliNode.GetText()).c_str()).c_str());
      m_enableAcceptEncodingBrotliHasBeenSet = true;
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

void ParametersInCacheKeyAndForwardedToOrigin::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_enableAcceptEncodingGzipHasBeenSet)
  {
   XmlNode enableAcceptEncodingGzipNode = parentNode.CreateChildElement("EnableAcceptEncodingGzip");
   ss << std::boolalpha << m_enableAcceptEncodingGzip;
   enableAcceptEncodingGzipNode.SetText(ss.str());
   ss.str("");
  }

  if(m_enableAcceptEncodingBrotliHasBeenSet)
  {
   XmlNode enableAcceptEncodingBrotliNode = parentNode.CreateChildElement("EnableAcceptEncodingBrotli");
   ss << std::boolalpha << m_enableAcceptEncodingBrotli;
   enableAcceptEncodingBrotliNode.SetText(ss.str());
   ss.str("");
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
