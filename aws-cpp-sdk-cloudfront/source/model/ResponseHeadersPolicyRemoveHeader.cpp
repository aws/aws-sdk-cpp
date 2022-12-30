/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ResponseHeadersPolicyRemoveHeader.h>
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

ResponseHeadersPolicyRemoveHeader::ResponseHeadersPolicyRemoveHeader() : 
    m_headerHasBeenSet(false)
{
}

ResponseHeadersPolicyRemoveHeader::ResponseHeadersPolicyRemoveHeader(const XmlNode& xmlNode) : 
    m_headerHasBeenSet(false)
{
  *this = xmlNode;
}

ResponseHeadersPolicyRemoveHeader& ResponseHeadersPolicyRemoveHeader::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode headerNode = resultNode.FirstChild("Header");
    if(!headerNode.IsNull())
    {
      m_header = Aws::Utils::Xml::DecodeEscapedXmlText(headerNode.GetText());
      m_headerHasBeenSet = true;
    }
  }

  return *this;
}

void ResponseHeadersPolicyRemoveHeader::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_headerHasBeenSet)
  {
   XmlNode headerNode = parentNode.CreateChildElement("Header");
   headerNode.SetText(m_header);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
