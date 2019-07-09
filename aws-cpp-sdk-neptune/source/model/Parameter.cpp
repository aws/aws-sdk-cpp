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

#include <aws/neptune/model/Parameter.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Neptune
{
namespace Model
{

Parameter::Parameter() : 
    m_parameterNameHasBeenSet(false),
    m_parameterValueHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_applyTypeHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_allowedValuesHasBeenSet(false),
    m_isModifiable(false),
    m_isModifiableHasBeenSet(false),
    m_minimumEngineVersionHasBeenSet(false),
    m_applyMethod(ApplyMethod::NOT_SET),
    m_applyMethodHasBeenSet(false)
{
}

Parameter::Parameter(const XmlNode& xmlNode) : 
    m_parameterNameHasBeenSet(false),
    m_parameterValueHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_applyTypeHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_allowedValuesHasBeenSet(false),
    m_isModifiable(false),
    m_isModifiableHasBeenSet(false),
    m_minimumEngineVersionHasBeenSet(false),
    m_applyMethod(ApplyMethod::NOT_SET),
    m_applyMethodHasBeenSet(false)
{
  *this = xmlNode;
}

Parameter& Parameter::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode parameterNameNode = resultNode.FirstChild("ParameterName");
    if(!parameterNameNode.IsNull())
    {
      m_parameterName = parameterNameNode.GetText();
      m_parameterNameHasBeenSet = true;
    }
    XmlNode parameterValueNode = resultNode.FirstChild("ParameterValue");
    if(!parameterValueNode.IsNull())
    {
      m_parameterValue = parameterValueNode.GetText();
      m_parameterValueHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode sourceNode = resultNode.FirstChild("Source");
    if(!sourceNode.IsNull())
    {
      m_source = sourceNode.GetText();
      m_sourceHasBeenSet = true;
    }
    XmlNode applyTypeNode = resultNode.FirstChild("ApplyType");
    if(!applyTypeNode.IsNull())
    {
      m_applyType = applyTypeNode.GetText();
      m_applyTypeHasBeenSet = true;
    }
    XmlNode dataTypeNode = resultNode.FirstChild("DataType");
    if(!dataTypeNode.IsNull())
    {
      m_dataType = dataTypeNode.GetText();
      m_dataTypeHasBeenSet = true;
    }
    XmlNode allowedValuesNode = resultNode.FirstChild("AllowedValues");
    if(!allowedValuesNode.IsNull())
    {
      m_allowedValues = allowedValuesNode.GetText();
      m_allowedValuesHasBeenSet = true;
    }
    XmlNode isModifiableNode = resultNode.FirstChild("IsModifiable");
    if(!isModifiableNode.IsNull())
    {
      m_isModifiable = StringUtils::ConvertToBool(StringUtils::Trim(isModifiableNode.GetText().c_str()).c_str());
      m_isModifiableHasBeenSet = true;
    }
    XmlNode minimumEngineVersionNode = resultNode.FirstChild("MinimumEngineVersion");
    if(!minimumEngineVersionNode.IsNull())
    {
      m_minimumEngineVersion = minimumEngineVersionNode.GetText();
      m_minimumEngineVersionHasBeenSet = true;
    }
    XmlNode applyMethodNode = resultNode.FirstChild("ApplyMethod");
    if(!applyMethodNode.IsNull())
    {
      m_applyMethod = ApplyMethodMapper::GetApplyMethodForName(StringUtils::Trim(applyMethodNode.GetText().c_str()).c_str());
      m_applyMethodHasBeenSet = true;
    }
  }

  return *this;
}

void Parameter::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_parameterNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ParameterName=" << StringUtils::URLEncode(m_parameterName.c_str()) << "&";
  }

  if(m_parameterValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".ParameterValue=" << StringUtils::URLEncode(m_parameterValue.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_sourceHasBeenSet)
  {
      oStream << location << index << locationValue << ".Source=" << StringUtils::URLEncode(m_source.c_str()) << "&";
  }

  if(m_applyTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ApplyType=" << StringUtils::URLEncode(m_applyType.c_str()) << "&";
  }

  if(m_dataTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DataType=" << StringUtils::URLEncode(m_dataType.c_str()) << "&";
  }

  if(m_allowedValuesHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllowedValues=" << StringUtils::URLEncode(m_allowedValues.c_str()) << "&";
  }

  if(m_isModifiableHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsModifiable=" << std::boolalpha << m_isModifiable << "&";
  }

  if(m_minimumEngineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".MinimumEngineVersion=" << StringUtils::URLEncode(m_minimumEngineVersion.c_str()) << "&";
  }

  if(m_applyMethodHasBeenSet)
  {
      oStream << location << index << locationValue << ".ApplyMethod=" << ApplyMethodMapper::GetNameForApplyMethod(m_applyMethod) << "&";
  }

}

void Parameter::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_parameterNameHasBeenSet)
  {
      oStream << location << ".ParameterName=" << StringUtils::URLEncode(m_parameterName.c_str()) << "&";
  }
  if(m_parameterValueHasBeenSet)
  {
      oStream << location << ".ParameterValue=" << StringUtils::URLEncode(m_parameterValue.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_sourceHasBeenSet)
  {
      oStream << location << ".Source=" << StringUtils::URLEncode(m_source.c_str()) << "&";
  }
  if(m_applyTypeHasBeenSet)
  {
      oStream << location << ".ApplyType=" << StringUtils::URLEncode(m_applyType.c_str()) << "&";
  }
  if(m_dataTypeHasBeenSet)
  {
      oStream << location << ".DataType=" << StringUtils::URLEncode(m_dataType.c_str()) << "&";
  }
  if(m_allowedValuesHasBeenSet)
  {
      oStream << location << ".AllowedValues=" << StringUtils::URLEncode(m_allowedValues.c_str()) << "&";
  }
  if(m_isModifiableHasBeenSet)
  {
      oStream << location << ".IsModifiable=" << std::boolalpha << m_isModifiable << "&";
  }
  if(m_minimumEngineVersionHasBeenSet)
  {
      oStream << location << ".MinimumEngineVersion=" << StringUtils::URLEncode(m_minimumEngineVersion.c_str()) << "&";
  }
  if(m_applyMethodHasBeenSet)
  {
      oStream << location << ".ApplyMethod=" << ApplyMethodMapper::GetNameForApplyMethod(m_applyMethod) << "&";
  }
}

} // namespace Model
} // namespace Neptune
} // namespace Aws
