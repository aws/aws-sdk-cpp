/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ResponseHeadersPolicyFrameOptions.h>
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

ResponseHeadersPolicyFrameOptions::ResponseHeadersPolicyFrameOptions() : 
    m_override(false),
    m_overrideHasBeenSet(false),
    m_frameOption(FrameOptionsList::NOT_SET),
    m_frameOptionHasBeenSet(false)
{
}

ResponseHeadersPolicyFrameOptions::ResponseHeadersPolicyFrameOptions(const XmlNode& xmlNode) : 
    m_override(false),
    m_overrideHasBeenSet(false),
    m_frameOption(FrameOptionsList::NOT_SET),
    m_frameOptionHasBeenSet(false)
{
  *this = xmlNode;
}

ResponseHeadersPolicyFrameOptions& ResponseHeadersPolicyFrameOptions::operator =(const XmlNode& xmlNode)
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
    XmlNode frameOptionNode = resultNode.FirstChild("FrameOption");
    if(!frameOptionNode.IsNull())
    {
      m_frameOption = FrameOptionsListMapper::GetFrameOptionsListForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(frameOptionNode.GetText()).c_str()).c_str());
      m_frameOptionHasBeenSet = true;
    }
  }

  return *this;
}

void ResponseHeadersPolicyFrameOptions::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_overrideHasBeenSet)
  {
   XmlNode overrideNode = parentNode.CreateChildElement("Override");
   ss << std::boolalpha << m_override;
   overrideNode.SetText(ss.str());
   ss.str("");
  }

  if(m_frameOptionHasBeenSet)
  {
   XmlNode frameOptionNode = parentNode.CreateChildElement("FrameOption");
   frameOptionNode.SetText(FrameOptionsListMapper::GetNameForFrameOptionsList(m_frameOption));
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
