/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ParameterDefinitionSchema.h>
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

ParameterDefinitionSchema::ParameterDefinitionSchema(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ParameterDefinitionSchema& ParameterDefinitionSchema::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stringSchemaNode = resultNode.FirstChild("StringSchema");
    if(!stringSchemaNode.IsNull())
    {
      m_stringSchema = stringSchemaNode;
      m_stringSchemaHasBeenSet = true;
    }
  }

  return *this;
}

void ParameterDefinitionSchema::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_stringSchemaHasBeenSet)
  {
   XmlNode stringSchemaNode = parentNode.CreateChildElement("StringSchema");
   m_stringSchema.AddToNode(stringSchemaNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
