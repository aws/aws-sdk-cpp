/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/Origin.h>
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

Origin::Origin() : 
    m_idHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_originPathHasBeenSet(false),
    m_customHeadersHasBeenSet(false),
    m_s3OriginConfigHasBeenSet(false),
    m_customOriginConfigHasBeenSet(false),
    m_connectionAttempts(0),
    m_connectionAttemptsHasBeenSet(false),
    m_connectionTimeout(0),
    m_connectionTimeoutHasBeenSet(false),
    m_originShieldHasBeenSet(false),
    m_originAccessControlIdHasBeenSet(false)
{
}

Origin::Origin(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_originPathHasBeenSet(false),
    m_customHeadersHasBeenSet(false),
    m_s3OriginConfigHasBeenSet(false),
    m_customOriginConfigHasBeenSet(false),
    m_connectionAttempts(0),
    m_connectionAttemptsHasBeenSet(false),
    m_connectionTimeout(0),
    m_connectionTimeoutHasBeenSet(false),
    m_originShieldHasBeenSet(false),
    m_originAccessControlIdHasBeenSet(false)
{
  *this = xmlNode;
}

Origin& Origin::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    if(!idNode.IsNull())
    {
      m_id = Aws::Utils::Xml::DecodeEscapedXmlText(idNode.GetText());
      m_idHasBeenSet = true;
    }
    XmlNode domainNameNode = resultNode.FirstChild("DomainName");
    if(!domainNameNode.IsNull())
    {
      m_domainName = Aws::Utils::Xml::DecodeEscapedXmlText(domainNameNode.GetText());
      m_domainNameHasBeenSet = true;
    }
    XmlNode originPathNode = resultNode.FirstChild("OriginPath");
    if(!originPathNode.IsNull())
    {
      m_originPath = Aws::Utils::Xml::DecodeEscapedXmlText(originPathNode.GetText());
      m_originPathHasBeenSet = true;
    }
    XmlNode customHeadersNode = resultNode.FirstChild("CustomHeaders");
    if(!customHeadersNode.IsNull())
    {
      m_customHeaders = customHeadersNode;
      m_customHeadersHasBeenSet = true;
    }
    XmlNode s3OriginConfigNode = resultNode.FirstChild("S3OriginConfig");
    if(!s3OriginConfigNode.IsNull())
    {
      m_s3OriginConfig = s3OriginConfigNode;
      m_s3OriginConfigHasBeenSet = true;
    }
    XmlNode customOriginConfigNode = resultNode.FirstChild("CustomOriginConfig");
    if(!customOriginConfigNode.IsNull())
    {
      m_customOriginConfig = customOriginConfigNode;
      m_customOriginConfigHasBeenSet = true;
    }
    XmlNode connectionAttemptsNode = resultNode.FirstChild("ConnectionAttempts");
    if(!connectionAttemptsNode.IsNull())
    {
      m_connectionAttempts = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(connectionAttemptsNode.GetText()).c_str()).c_str());
      m_connectionAttemptsHasBeenSet = true;
    }
    XmlNode connectionTimeoutNode = resultNode.FirstChild("ConnectionTimeout");
    if(!connectionTimeoutNode.IsNull())
    {
      m_connectionTimeout = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(connectionTimeoutNode.GetText()).c_str()).c_str());
      m_connectionTimeoutHasBeenSet = true;
    }
    XmlNode originShieldNode = resultNode.FirstChild("OriginShield");
    if(!originShieldNode.IsNull())
    {
      m_originShield = originShieldNode;
      m_originShieldHasBeenSet = true;
    }
    XmlNode originAccessControlIdNode = resultNode.FirstChild("OriginAccessControlId");
    if(!originAccessControlIdNode.IsNull())
    {
      m_originAccessControlId = Aws::Utils::Xml::DecodeEscapedXmlText(originAccessControlIdNode.GetText());
      m_originAccessControlIdHasBeenSet = true;
    }
  }

  return *this;
}

void Origin::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_domainNameHasBeenSet)
  {
   XmlNode domainNameNode = parentNode.CreateChildElement("DomainName");
   domainNameNode.SetText(m_domainName);
  }

  if(m_originPathHasBeenSet)
  {
   XmlNode originPathNode = parentNode.CreateChildElement("OriginPath");
   originPathNode.SetText(m_originPath);
  }

  if(m_customHeadersHasBeenSet)
  {
   XmlNode customHeadersNode = parentNode.CreateChildElement("CustomHeaders");
   m_customHeaders.AddToNode(customHeadersNode);
  }

  if(m_s3OriginConfigHasBeenSet)
  {
   XmlNode s3OriginConfigNode = parentNode.CreateChildElement("S3OriginConfig");
   m_s3OriginConfig.AddToNode(s3OriginConfigNode);
  }

  if(m_customOriginConfigHasBeenSet)
  {
   XmlNode customOriginConfigNode = parentNode.CreateChildElement("CustomOriginConfig");
   m_customOriginConfig.AddToNode(customOriginConfigNode);
  }

  if(m_connectionAttemptsHasBeenSet)
  {
   XmlNode connectionAttemptsNode = parentNode.CreateChildElement("ConnectionAttempts");
   ss << m_connectionAttempts;
   connectionAttemptsNode.SetText(ss.str());
   ss.str("");
  }

  if(m_connectionTimeoutHasBeenSet)
  {
   XmlNode connectionTimeoutNode = parentNode.CreateChildElement("ConnectionTimeout");
   ss << m_connectionTimeout;
   connectionTimeoutNode.SetText(ss.str());
   ss.str("");
  }

  if(m_originShieldHasBeenSet)
  {
   XmlNode originShieldNode = parentNode.CreateChildElement("OriginShield");
   m_originShield.AddToNode(originShieldNode);
  }

  if(m_originAccessControlIdHasBeenSet)
  {
   XmlNode originAccessControlIdNode = parentNode.CreateChildElement("OriginAccessControlId");
   originAccessControlIdNode.SetText(m_originAccessControlId);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
