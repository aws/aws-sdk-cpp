/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ResponseHeadersPolicyCorsConfig.h>
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

ResponseHeadersPolicyCorsConfig::ResponseHeadersPolicyCorsConfig() : 
    m_accessControlAllowOriginsHasBeenSet(false),
    m_accessControlAllowHeadersHasBeenSet(false),
    m_accessControlAllowMethodsHasBeenSet(false),
    m_accessControlAllowCredentials(false),
    m_accessControlAllowCredentialsHasBeenSet(false),
    m_accessControlExposeHeadersHasBeenSet(false),
    m_accessControlMaxAgeSec(0),
    m_accessControlMaxAgeSecHasBeenSet(false),
    m_originOverride(false),
    m_originOverrideHasBeenSet(false)
{
}

ResponseHeadersPolicyCorsConfig::ResponseHeadersPolicyCorsConfig(const XmlNode& xmlNode) : 
    m_accessControlAllowOriginsHasBeenSet(false),
    m_accessControlAllowHeadersHasBeenSet(false),
    m_accessControlAllowMethodsHasBeenSet(false),
    m_accessControlAllowCredentials(false),
    m_accessControlAllowCredentialsHasBeenSet(false),
    m_accessControlExposeHeadersHasBeenSet(false),
    m_accessControlMaxAgeSec(0),
    m_accessControlMaxAgeSecHasBeenSet(false),
    m_originOverride(false),
    m_originOverrideHasBeenSet(false)
{
  *this = xmlNode;
}

ResponseHeadersPolicyCorsConfig& ResponseHeadersPolicyCorsConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode accessControlAllowOriginsNode = resultNode.FirstChild("AccessControlAllowOrigins");
    if(!accessControlAllowOriginsNode.IsNull())
    {
      m_accessControlAllowOrigins = accessControlAllowOriginsNode;
      m_accessControlAllowOriginsHasBeenSet = true;
    }
    XmlNode accessControlAllowHeadersNode = resultNode.FirstChild("AccessControlAllowHeaders");
    if(!accessControlAllowHeadersNode.IsNull())
    {
      m_accessControlAllowHeaders = accessControlAllowHeadersNode;
      m_accessControlAllowHeadersHasBeenSet = true;
    }
    XmlNode accessControlAllowMethodsNode = resultNode.FirstChild("AccessControlAllowMethods");
    if(!accessControlAllowMethodsNode.IsNull())
    {
      m_accessControlAllowMethods = accessControlAllowMethodsNode;
      m_accessControlAllowMethodsHasBeenSet = true;
    }
    XmlNode accessControlAllowCredentialsNode = resultNode.FirstChild("AccessControlAllowCredentials");
    if(!accessControlAllowCredentialsNode.IsNull())
    {
      m_accessControlAllowCredentials = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(accessControlAllowCredentialsNode.GetText()).c_str()).c_str());
      m_accessControlAllowCredentialsHasBeenSet = true;
    }
    XmlNode accessControlExposeHeadersNode = resultNode.FirstChild("AccessControlExposeHeaders");
    if(!accessControlExposeHeadersNode.IsNull())
    {
      m_accessControlExposeHeaders = accessControlExposeHeadersNode;
      m_accessControlExposeHeadersHasBeenSet = true;
    }
    XmlNode accessControlMaxAgeSecNode = resultNode.FirstChild("AccessControlMaxAgeSec");
    if(!accessControlMaxAgeSecNode.IsNull())
    {
      m_accessControlMaxAgeSec = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(accessControlMaxAgeSecNode.GetText()).c_str()).c_str());
      m_accessControlMaxAgeSecHasBeenSet = true;
    }
    XmlNode originOverrideNode = resultNode.FirstChild("OriginOverride");
    if(!originOverrideNode.IsNull())
    {
      m_originOverride = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(originOverrideNode.GetText()).c_str()).c_str());
      m_originOverrideHasBeenSet = true;
    }
  }

  return *this;
}

void ResponseHeadersPolicyCorsConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_accessControlAllowOriginsHasBeenSet)
  {
   XmlNode accessControlAllowOriginsNode = parentNode.CreateChildElement("AccessControlAllowOrigins");
   m_accessControlAllowOrigins.AddToNode(accessControlAllowOriginsNode);
  }

  if(m_accessControlAllowHeadersHasBeenSet)
  {
   XmlNode accessControlAllowHeadersNode = parentNode.CreateChildElement("AccessControlAllowHeaders");
   m_accessControlAllowHeaders.AddToNode(accessControlAllowHeadersNode);
  }

  if(m_accessControlAllowMethodsHasBeenSet)
  {
   XmlNode accessControlAllowMethodsNode = parentNode.CreateChildElement("AccessControlAllowMethods");
   m_accessControlAllowMethods.AddToNode(accessControlAllowMethodsNode);
  }

  if(m_accessControlAllowCredentialsHasBeenSet)
  {
   XmlNode accessControlAllowCredentialsNode = parentNode.CreateChildElement("AccessControlAllowCredentials");
   ss << std::boolalpha << m_accessControlAllowCredentials;
   accessControlAllowCredentialsNode.SetText(ss.str());
   ss.str("");
  }

  if(m_accessControlExposeHeadersHasBeenSet)
  {
   XmlNode accessControlExposeHeadersNode = parentNode.CreateChildElement("AccessControlExposeHeaders");
   m_accessControlExposeHeaders.AddToNode(accessControlExposeHeadersNode);
  }

  if(m_accessControlMaxAgeSecHasBeenSet)
  {
   XmlNode accessControlMaxAgeSecNode = parentNode.CreateChildElement("AccessControlMaxAgeSec");
   ss << m_accessControlMaxAgeSec;
   accessControlMaxAgeSecNode.SetText(ss.str());
   ss.str("");
  }

  if(m_originOverrideHasBeenSet)
  {
   XmlNode originOverrideNode = parentNode.CreateChildElement("OriginOverride");
   ss << std::boolalpha << m_originOverride;
   originOverrideNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
