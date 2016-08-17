/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    m_usePreviousValueHasBeenSet(false)
{
}

Parameter::Parameter(const XmlNode& xmlNode) : 
    m_parameterKeyHasBeenSet(false),
    m_parameterValueHasBeenSet(false),
    m_usePreviousValue(false),
    m_usePreviousValueHasBeenSet(false)
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
      m_parameterKey = StringUtils::Trim(parameterKeyNode.GetText().c_str());
      m_parameterKeyHasBeenSet = true;
    }
    XmlNode parameterValueNode = resultNode.FirstChild("ParameterValue");
    if(!parameterValueNode.IsNull())
    {
      m_parameterValue = StringUtils::Trim(parameterValueNode.GetText().c_str());
      m_parameterValueHasBeenSet = true;
    }
    XmlNode usePreviousValueNode = resultNode.FirstChild("UsePreviousValue");
    if(!usePreviousValueNode.IsNull())
    {
      m_usePreviousValue = StringUtils::ConvertToBool(StringUtils::Trim(usePreviousValueNode.GetText().c_str()).c_str());
      m_usePreviousValueHasBeenSet = true;
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
      oStream << location << index << locationValue << ".UsePreviousValue=" << m_usePreviousValue << "&";
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
      oStream << location << ".UsePreviousValue=" << m_usePreviousValue << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
