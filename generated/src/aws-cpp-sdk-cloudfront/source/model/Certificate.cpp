/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/Certificate.h>
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

Certificate::Certificate(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

Certificate& Certificate::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode arnNode = resultNode.FirstChild("Arn");
    if(!arnNode.IsNull())
    {
      m_arn = Aws::Utils::Xml::DecodeEscapedXmlText(arnNode.GetText());
      m_arnHasBeenSet = true;
    }
  }

  return *this;
}

void Certificate::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_arnHasBeenSet)
  {
   XmlNode arnNode = parentNode.CreateChildElement("Arn");
   arnNode.SetText(m_arn);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
