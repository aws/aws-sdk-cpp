/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/S3Origin.h>
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

S3Origin::S3Origin() : 
    m_domainNameHasBeenSet(false),
    m_originAccessIdentityHasBeenSet(false)
{
}

S3Origin::S3Origin(const XmlNode& xmlNode) : 
    m_domainNameHasBeenSet(false),
    m_originAccessIdentityHasBeenSet(false)
{
  *this = xmlNode;
}

S3Origin& S3Origin::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode domainNameNode = resultNode.FirstChild("DomainName");
    if(!domainNameNode.IsNull())
    {
      m_domainName = Aws::Utils::Xml::DecodeEscapedXmlText(domainNameNode.GetText());
      m_domainNameHasBeenSet = true;
    }
    XmlNode originAccessIdentityNode = resultNode.FirstChild("OriginAccessIdentity");
    if(!originAccessIdentityNode.IsNull())
    {
      m_originAccessIdentity = Aws::Utils::Xml::DecodeEscapedXmlText(originAccessIdentityNode.GetText());
      m_originAccessIdentityHasBeenSet = true;
    }
  }

  return *this;
}

void S3Origin::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_domainNameHasBeenSet)
  {
   XmlNode domainNameNode = parentNode.CreateChildElement("DomainName");
   domainNameNode.SetText(m_domainName);
  }

  if(m_originAccessIdentityHasBeenSet)
  {
   XmlNode originAccessIdentityNode = parentNode.CreateChildElement("OriginAccessIdentity");
   originAccessIdentityNode.SetText(m_originAccessIdentity);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
