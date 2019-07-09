/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/elasticloadbalancing/model/PolicyAttributeDescription.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

PolicyAttributeDescription::PolicyAttributeDescription() : 
    m_attributeNameHasBeenSet(false),
    m_attributeValueHasBeenSet(false)
{
}

PolicyAttributeDescription::PolicyAttributeDescription(const XmlNode& xmlNode) : 
    m_attributeNameHasBeenSet(false),
    m_attributeValueHasBeenSet(false)
{
  *this = xmlNode;
}

PolicyAttributeDescription& PolicyAttributeDescription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode attributeNameNode = resultNode.FirstChild("AttributeName");
    if(!attributeNameNode.IsNull())
    {
      m_attributeName = attributeNameNode.GetText();
      m_attributeNameHasBeenSet = true;
    }
    XmlNode attributeValueNode = resultNode.FirstChild("AttributeValue");
    if(!attributeValueNode.IsNull())
    {
      m_attributeValue = attributeValueNode.GetText();
      m_attributeValueHasBeenSet = true;
    }
  }

  return *this;
}

void PolicyAttributeDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_attributeNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".AttributeName=" << StringUtils::URLEncode(m_attributeName.c_str()) << "&";
  }

  if(m_attributeValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".AttributeValue=" << StringUtils::URLEncode(m_attributeValue.c_str()) << "&";
  }

}

void PolicyAttributeDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_attributeNameHasBeenSet)
  {
      oStream << location << ".AttributeName=" << StringUtils::URLEncode(m_attributeName.c_str()) << "&";
  }
  if(m_attributeValueHasBeenSet)
  {
      oStream << location << ".AttributeValue=" << StringUtils::URLEncode(m_attributeValue.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
