/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/OriginCustomHeader.h>
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

OriginCustomHeader::OriginCustomHeader() : 
    m_headerNameHasBeenSet(false),
    m_headerValueHasBeenSet(false)
{
}

OriginCustomHeader::OriginCustomHeader(const XmlNode& xmlNode) : 
    m_headerNameHasBeenSet(false),
    m_headerValueHasBeenSet(false)
{
  *this = xmlNode;
}

OriginCustomHeader& OriginCustomHeader::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode headerNameNode = resultNode.FirstChild("HeaderName");
    if(!headerNameNode.IsNull())
    {
      m_headerName = Aws::Utils::Xml::DecodeEscapedXmlText(headerNameNode.GetText());
      m_headerNameHasBeenSet = true;
    }
    XmlNode headerValueNode = resultNode.FirstChild("HeaderValue");
    if(!headerValueNode.IsNull())
    {
      m_headerValue = Aws::Utils::Xml::DecodeEscapedXmlText(headerValueNode.GetText());
      m_headerValueHasBeenSet = true;
    }
  }

  return *this;
}

void OriginCustomHeader::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_headerNameHasBeenSet)
  {
   XmlNode headerNameNode = parentNode.CreateChildElement("HeaderName");
   headerNameNode.SetText(m_headerName);
  }

  if(m_headerValueHasBeenSet)
  {
   XmlNode headerValueNode = parentNode.CreateChildElement("HeaderValue");
   headerValueNode.SetText(m_headerValue);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
