/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/TenantConfig.h>
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

TenantConfig::TenantConfig(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

TenantConfig& TenantConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode parameterDefinitionsNode = resultNode.FirstChild("ParameterDefinitions");
    if(!parameterDefinitionsNode.IsNull())
    {
      XmlNode parameterDefinitionsMember = parameterDefinitionsNode.FirstChild("member");
      m_parameterDefinitionsHasBeenSet = !parameterDefinitionsMember.IsNull();
      while(!parameterDefinitionsMember.IsNull())
      {
        m_parameterDefinitions.push_back(parameterDefinitionsMember);
        parameterDefinitionsMember = parameterDefinitionsMember.NextNode("member");
      }

      m_parameterDefinitionsHasBeenSet = true;
    }
  }

  return *this;
}

void TenantConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_parameterDefinitionsHasBeenSet)
  {
   XmlNode parameterDefinitionsParentNode = parentNode.CreateChildElement("ParameterDefinitions");
   for(const auto& item : m_parameterDefinitions)
   {
     XmlNode parameterDefinitionsNode = parameterDefinitionsParentNode.CreateChildElement("ParameterDefinition");
     item.AddToNode(parameterDefinitionsNode);
   }
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
