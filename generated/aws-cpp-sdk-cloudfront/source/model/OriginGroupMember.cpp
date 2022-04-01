/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/OriginGroupMember.h>
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

OriginGroupMember::OriginGroupMember() : 
    m_originIdHasBeenSet(false)
{
}

OriginGroupMember::OriginGroupMember(const XmlNode& xmlNode) : 
    m_originIdHasBeenSet(false)
{
  *this = xmlNode;
}

OriginGroupMember& OriginGroupMember::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode originIdNode = resultNode.FirstChild("OriginId");
    if(!originIdNode.IsNull())
    {
      m_originId = Aws::Utils::Xml::DecodeEscapedXmlText(originIdNode.GetText());
      m_originIdHasBeenSet = true;
    }
  }

  return *this;
}

void OriginGroupMember::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_originIdHasBeenSet)
  {
   XmlNode originIdNode = parentNode.CreateChildElement("OriginId");
   originIdNode.SetText(m_originId);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
