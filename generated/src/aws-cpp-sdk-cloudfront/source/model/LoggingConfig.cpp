/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/LoggingConfig.h>
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

LoggingConfig::LoggingConfig() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_includeCookies(false),
    m_includeCookiesHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
}

LoggingConfig::LoggingConfig(const XmlNode& xmlNode) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_includeCookies(false),
    m_includeCookiesHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
  *this = xmlNode;
}

LoggingConfig& LoggingConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledNode.GetText()).c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode includeCookiesNode = resultNode.FirstChild("IncludeCookies");
    if(!includeCookiesNode.IsNull())
    {
      m_includeCookies = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(includeCookiesNode.GetText()).c_str()).c_str());
      m_includeCookiesHasBeenSet = true;
    }
    XmlNode bucketNode = resultNode.FirstChild("Bucket");
    if(!bucketNode.IsNull())
    {
      m_bucket = Aws::Utils::Xml::DecodeEscapedXmlText(bucketNode.GetText());
      m_bucketHasBeenSet = true;
    }
    XmlNode prefixNode = resultNode.FirstChild("Prefix");
    if(!prefixNode.IsNull())
    {
      m_prefix = Aws::Utils::Xml::DecodeEscapedXmlText(prefixNode.GetText());
      m_prefixHasBeenSet = true;
    }
  }

  return *this;
}

void LoggingConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_enabledHasBeenSet)
  {
   XmlNode enabledNode = parentNode.CreateChildElement("Enabled");
   ss << std::boolalpha << m_enabled;
   enabledNode.SetText(ss.str());
   ss.str("");
  }

  if(m_includeCookiesHasBeenSet)
  {
   XmlNode includeCookiesNode = parentNode.CreateChildElement("IncludeCookies");
   ss << std::boolalpha << m_includeCookies;
   includeCookiesNode.SetText(ss.str());
   ss.str("");
  }

  if(m_bucketHasBeenSet)
  {
   XmlNode bucketNode = parentNode.CreateChildElement("Bucket");
   bucketNode.SetText(m_bucket);
  }

  if(m_prefixHasBeenSet)
  {
   XmlNode prefixNode = parentNode.CreateChildElement("Prefix");
   prefixNode.SetText(m_prefix);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
