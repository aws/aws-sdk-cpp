/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ResponseHeadersPolicyContentTypeOptions.h>
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

ResponseHeadersPolicyContentTypeOptions::ResponseHeadersPolicyContentTypeOptions() : 
    m_override(false),
    m_overrideHasBeenSet(false)
{
}

ResponseHeadersPolicyContentTypeOptions::ResponseHeadersPolicyContentTypeOptions(const XmlNode& xmlNode) : 
    m_override(false),
    m_overrideHasBeenSet(false)
{
  *this = xmlNode;
}

ResponseHeadersPolicyContentTypeOptions& ResponseHeadersPolicyContentTypeOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode overrideNode = resultNode.FirstChild("Override");
    if(!overrideNode.IsNull())
    {
      m_override = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(overrideNode.GetText()).c_str()).c_str());
      m_overrideHasBeenSet = true;
    }
  }

  return *this;
}

void ResponseHeadersPolicyContentTypeOptions::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_overrideHasBeenSet)
  {
   XmlNode overrideNode = parentNode.CreateChildElement("Override");
   ss << std::boolalpha << m_override;
   overrideNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
