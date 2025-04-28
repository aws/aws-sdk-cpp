/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ConnectionGroupAssociationFilter.h>
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

ConnectionGroupAssociationFilter::ConnectionGroupAssociationFilter(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ConnectionGroupAssociationFilter& ConnectionGroupAssociationFilter::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode anycastIpListIdNode = resultNode.FirstChild("AnycastIpListId");
    if(!anycastIpListIdNode.IsNull())
    {
      m_anycastIpListId = Aws::Utils::Xml::DecodeEscapedXmlText(anycastIpListIdNode.GetText());
      m_anycastIpListIdHasBeenSet = true;
    }
  }

  return *this;
}

void ConnectionGroupAssociationFilter::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_anycastIpListIdHasBeenSet)
  {
   XmlNode anycastIpListIdNode = parentNode.CreateChildElement("AnycastIpListId");
   anycastIpListIdNode.SetText(m_anycastIpListId);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
