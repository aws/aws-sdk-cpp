/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/WebAclCustomization.h>
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

WebAclCustomization::WebAclCustomization(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

WebAclCustomization& WebAclCustomization::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode actionNode = resultNode.FirstChild("Action");
    if(!actionNode.IsNull())
    {
      m_action = CustomizationActionTypeMapper::GetCustomizationActionTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(actionNode.GetText()).c_str()));
      m_actionHasBeenSet = true;
    }
    XmlNode arnNode = resultNode.FirstChild("Arn");
    if(!arnNode.IsNull())
    {
      m_arn = Aws::Utils::Xml::DecodeEscapedXmlText(arnNode.GetText());
      m_arnHasBeenSet = true;
    }
  }

  return *this;
}

void WebAclCustomization::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_actionHasBeenSet)
  {
   XmlNode actionNode = parentNode.CreateChildElement("Action");
   actionNode.SetText(CustomizationActionTypeMapper::GetNameForCustomizationActionType(m_action));
  }

  if(m_arnHasBeenSet)
  {
   XmlNode arnNode = parentNode.CreateChildElement("Arn");
   arnNode.SetText(m_arn);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
