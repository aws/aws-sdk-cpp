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

#include <aws/cloudformation/model/TemplateParameter.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

TemplateParameter::TemplateParameter() : 
    m_parameterKeyHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_noEcho(false),
    m_noEchoHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

TemplateParameter::TemplateParameter(const XmlNode& xmlNode) : 
    m_parameterKeyHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_noEcho(false),
    m_noEchoHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = xmlNode;
}

TemplateParameter& TemplateParameter::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode parameterKeyNode = resultNode.FirstChild("ParameterKey");
    if(!parameterKeyNode.IsNull())
    {
      m_parameterKey = parameterKeyNode.GetText();
      m_parameterKeyHasBeenSet = true;
    }
    XmlNode defaultValueNode = resultNode.FirstChild("DefaultValue");
    if(!defaultValueNode.IsNull())
    {
      m_defaultValue = defaultValueNode.GetText();
      m_defaultValueHasBeenSet = true;
    }
    XmlNode noEchoNode = resultNode.FirstChild("NoEcho");
    if(!noEchoNode.IsNull())
    {
      m_noEcho = StringUtils::ConvertToBool(StringUtils::Trim(noEchoNode.GetText().c_str()).c_str());
      m_noEchoHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
  }

  return *this;
}

void TemplateParameter::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_parameterKeyHasBeenSet)
  {
      oStream << location << index << locationValue << ".ParameterKey=" << StringUtils::URLEncode(m_parameterKey.c_str()) << "&";
  }

  if(m_defaultValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultValue=" << StringUtils::URLEncode(m_defaultValue.c_str()) << "&";
  }

  if(m_noEchoHasBeenSet)
  {
      oStream << location << index << locationValue << ".NoEcho=" << std::boolalpha << m_noEcho << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

}

void TemplateParameter::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_parameterKeyHasBeenSet)
  {
      oStream << location << ".ParameterKey=" << StringUtils::URLEncode(m_parameterKey.c_str()) << "&";
  }
  if(m_defaultValueHasBeenSet)
  {
      oStream << location << ".DefaultValue=" << StringUtils::URLEncode(m_defaultValue.c_str()) << "&";
  }
  if(m_noEchoHasBeenSet)
  {
      oStream << location << ".NoEcho=" << std::boolalpha << m_noEcho << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
