/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-xml-protocol-namespace/model/NestedWithNamespace.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RestXmlProtocolNamespace
{
namespace Model
{

NestedWithNamespace::NestedWithNamespace() : 
    m_attrFieldHasBeenSet(false)
{
}

NestedWithNamespace::NestedWithNamespace(const XmlNode& xmlNode)
  : NestedWithNamespace()
{
  *this = xmlNode;
}

NestedWithNamespace& NestedWithNamespace::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    auto attrField = resultNode.GetAttributeValue("xsi:someName");
    if(!attrField.empty())
    {
      m_attrField = Aws::Utils::Xml::DecodeEscapedXmlText(attrField);
      m_attrFieldHasBeenSet = true;
    }
  }

  return *this;
}

void NestedWithNamespace::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_attrFieldHasBeenSet)
  {
   parentNode.SetAttributeValue("xsi:someName", m_attrField);
  }

}

} // namespace Model
} // namespace RestXmlProtocolNamespace
} // namespace Aws
