/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/Parameter.h>
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

Parameter::Parameter() : 
    m_parameterKeyHasBeenSet(false),
    m_parameterValueHasBeenSet(false),
    m_usePreviousValue(false),
    m_usePreviousValueHasBeenSet(false),
    m_resolvedValueHasBeenSet(false)
{
}

Parameter::Parameter(const XmlNode& xmlNode) : 
    m_parameterKeyHasBeenSet(false),
    m_parameterValueHasBeenSet(false),
    m_usePreviousValue(false),
    m_usePreviousValueHasBeenSet(false),
    m_resolvedValueHasBeenSet(false)
{
  *this = xmlNode;
}

Parameter& Parameter::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode parameterKeyNode = resultNode.FirstChild("ParameterKey");
    if(!parameterKeyNode.IsNull())
    {
      m_parameterKey = Aws::Utils::Xml::DecodeEscapedXmlText(parameterKeyNode.GetText());
      m_parameterKeyHasBeenSet = true;
    }
    XmlNode parameterValueNode = resultNode.FirstChild("ParameterValue");
    if(!parameterValueNode.IsNull())
    {
      m_parameterValue = Aws::Utils::Xml::DecodeEscapedXmlText(parameterValueNode.GetText());
      m_parameterValueHasBeenSet = true;
    }
    XmlNode usePreviousValueNode = resultNode.FirstChild("UsePreviousValue");
    if(!usePreviousValueNode.IsNull())
    {
      m_usePreviousValue = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(usePreviousValueNode.GetText()).c_str()).c_str());
      m_usePreviousValueHasBeenSet = true;
    }
    XmlNode resolvedValueNode = resultNode.FirstChild("ResolvedValue");
    if(!resolvedValueNode.IsNull())
    {
      m_resolvedValue = Aws::Utils::Xml::DecodeEscapedXmlText(resolvedValueNode.GetText());
      m_resolvedValueHasBeenSet = true;
    }
  }

  return *this;
}

void Parameter::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_parameterKeyHasBeenSet)
  {
      oStream << location << index << locationValue << ".ParameterKey=" << StringUtils::URLEncode(m_parameterKey.c_str()) << "&";
  }

  if(m_parameterValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".ParameterValue=" << StringUtils::URLEncode(m_parameterValue.c_str()) << "&";
  }

  if(m_usePreviousValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".UsePreviousValue=" << std::boolalpha << m_usePreviousValue << "&";
  }

  if(m_resolvedValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResolvedValue=" << StringUtils::URLEncode(m_resolvedValue.c_str()) << "&";
  }

}

void Parameter::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_parameterKeyHasBeenSet)
  {
      oStream << location << ".ParameterKey=" << StringUtils::URLEncode(m_parameterKey.c_str()) << "&";
  }
  if(m_parameterValueHasBeenSet)
  {
      oStream << location << ".ParameterValue=" << StringUtils::URLEncode(m_parameterValue.c_str()) << "&";
  }
  if(m_usePreviousValueHasBeenSet)
  {
      oStream << location << ".UsePreviousValue=" << std::boolalpha << m_usePreviousValue << "&";
  }
  if(m_resolvedValueHasBeenSet)
  {
      oStream << location << ".ResolvedValue=" << StringUtils::URLEncode(m_resolvedValue.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
