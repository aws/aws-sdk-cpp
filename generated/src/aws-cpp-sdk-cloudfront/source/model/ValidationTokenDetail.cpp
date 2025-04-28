/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ValidationTokenDetail.h>
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

ValidationTokenDetail::ValidationTokenDetail(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ValidationTokenDetail& ValidationTokenDetail::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode domainNode = resultNode.FirstChild("Domain");
    if(!domainNode.IsNull())
    {
      m_domain = Aws::Utils::Xml::DecodeEscapedXmlText(domainNode.GetText());
      m_domainHasBeenSet = true;
    }
    XmlNode redirectToNode = resultNode.FirstChild("RedirectTo");
    if(!redirectToNode.IsNull())
    {
      m_redirectTo = Aws::Utils::Xml::DecodeEscapedXmlText(redirectToNode.GetText());
      m_redirectToHasBeenSet = true;
    }
    XmlNode redirectFromNode = resultNode.FirstChild("RedirectFrom");
    if(!redirectFromNode.IsNull())
    {
      m_redirectFrom = Aws::Utils::Xml::DecodeEscapedXmlText(redirectFromNode.GetText());
      m_redirectFromHasBeenSet = true;
    }
  }

  return *this;
}

void ValidationTokenDetail::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_domainHasBeenSet)
  {
   XmlNode domainNode = parentNode.CreateChildElement("Domain");
   domainNode.SetText(m_domain);
  }

  if(m_redirectToHasBeenSet)
  {
   XmlNode redirectToNode = parentNode.CreateChildElement("RedirectTo");
   redirectToNode.SetText(m_redirectTo);
  }

  if(m_redirectFromHasBeenSet)
  {
   XmlNode redirectFromNode = parentNode.CreateChildElement("RedirectFrom");
   redirectFromNode.SetText(m_redirectFrom);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
