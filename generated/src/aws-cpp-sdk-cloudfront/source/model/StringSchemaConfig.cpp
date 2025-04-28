/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/StringSchemaConfig.h>
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

StringSchemaConfig::StringSchemaConfig(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

StringSchemaConfig& StringSchemaConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode commentNode = resultNode.FirstChild("Comment");
    if(!commentNode.IsNull())
    {
      m_comment = Aws::Utils::Xml::DecodeEscapedXmlText(commentNode.GetText());
      m_commentHasBeenSet = true;
    }
    XmlNode defaultValueNode = resultNode.FirstChild("DefaultValue");
    if(!defaultValueNode.IsNull())
    {
      m_defaultValue = Aws::Utils::Xml::DecodeEscapedXmlText(defaultValueNode.GetText());
      m_defaultValueHasBeenSet = true;
    }
    XmlNode requiredNode = resultNode.FirstChild("Required");
    if(!requiredNode.IsNull())
    {
      m_required = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(requiredNode.GetText()).c_str()).c_str());
      m_requiredHasBeenSet = true;
    }
  }

  return *this;
}

void StringSchemaConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_commentHasBeenSet)
  {
   XmlNode commentNode = parentNode.CreateChildElement("Comment");
   commentNode.SetText(m_comment);
  }

  if(m_defaultValueHasBeenSet)
  {
   XmlNode defaultValueNode = parentNode.CreateChildElement("DefaultValue");
   defaultValueNode.SetText(m_defaultValue);
  }

  if(m_requiredHasBeenSet)
  {
   XmlNode requiredNode = parentNode.CreateChildElement("Required");
   ss << std::boolalpha << m_required;
   requiredNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
