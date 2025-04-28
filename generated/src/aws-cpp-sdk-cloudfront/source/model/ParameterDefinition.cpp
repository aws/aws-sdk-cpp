/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ParameterDefinition.h>
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

ParameterDefinition::ParameterDefinition(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ParameterDefinition& ParameterDefinition::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode definitionNode = resultNode.FirstChild("Definition");
    if(!definitionNode.IsNull())
    {
      m_definition = definitionNode;
      m_definitionHasBeenSet = true;
    }
  }

  return *this;
}

void ParameterDefinition::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_definitionHasBeenSet)
  {
   XmlNode definitionNode = parentNode.CreateChildElement("Definition");
   m_definition.AddToNode(definitionNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
