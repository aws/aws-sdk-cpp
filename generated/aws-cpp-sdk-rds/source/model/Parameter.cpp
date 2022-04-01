/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/Parameter.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
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
    m_applyMethodHasBeenSet(false),
    m_supportedEngineModesHasBeenSet(false)
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
    m_applyMethodHasBeenSet(false),
    m_supportedEngineModesHasBeenSet(false)
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
      m_parameterName = Aws::Utils::Xml::DecodeEscapedXmlText(parameterNameNode.GetText());
      m_parameterNameHasBeenSet = true;
    }
    XmlNode parameterValueNode = resultNode.FirstChild("ParameterValue");
    if(!parameterValueNode.IsNull())
    {
      m_parameterValue = Aws::Utils::Xml::DecodeEscapedXmlText(parameterValueNode.GetText());
      m_parameterValueHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode sourceNode = resultNode.FirstChild("Source");
    if(!sourceNode.IsNull())
    {
      m_source = Aws::Utils::Xml::DecodeEscapedXmlText(sourceNode.GetText());
      m_sourceHasBeenSet = true;
    }
    XmlNode applyTypeNode = resultNode.FirstChild("ApplyType");
    if(!applyTypeNode.IsNull())
    {
      m_applyType = Aws::Utils::Xml::DecodeEscapedXmlText(applyTypeNode.GetText());
      m_applyTypeHasBeenSet = true;
    }
    XmlNode dataTypeNode = resultNode.FirstChild("DataType");
    if(!dataTypeNode.IsNull())
    {
      m_dataType = Aws::Utils::Xml::DecodeEscapedXmlText(dataTypeNode.GetText());
      m_dataTypeHasBeenSet = true;
    }
    XmlNode allowedValuesNode = resultNode.FirstChild("AllowedValues");
    if(!allowedValuesNode.IsNull())
    {
      m_allowedValues = Aws::Utils::Xml::DecodeEscapedXmlText(allowedValuesNode.GetText());
      m_allowedValuesHasBeenSet = true;
    }
    XmlNode isModifiableNode = resultNode.FirstChild("IsModifiable");
    if(!isModifiableNode.IsNull())
    {
      m_isModifiable = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isModifiableNode.GetText()).c_str()).c_str());
      m_isModifiableHasBeenSet = true;
    }
    XmlNode minimumEngineVersionNode = resultNode.FirstChild("MinimumEngineVersion");
    if(!minimumEngineVersionNode.IsNull())
    {
      m_minimumEngineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(minimumEngineVersionNode.GetText());
      m_minimumEngineVersionHasBeenSet = true;
    }
    XmlNode applyMethodNode = resultNode.FirstChild("ApplyMethod");
    if(!applyMethodNode.IsNull())
    {
      m_applyMethod = ApplyMethodMapper::GetApplyMethodForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(applyMethodNode.GetText()).c_str()).c_str());
      m_applyMethodHasBeenSet = true;
    }
    XmlNode supportedEngineModesNode = resultNode.FirstChild("SupportedEngineModes");
    if(!supportedEngineModesNode.IsNull())
    {
      XmlNode supportedEngineModesMember = supportedEngineModesNode.FirstChild("member");
      while(!supportedEngineModesMember.IsNull())
      {
        m_supportedEngineModes.push_back(supportedEngineModesMember.GetText());
        supportedEngineModesMember = supportedEngineModesMember.NextNode("member");
      }

      m_supportedEngineModesHasBeenSet = true;
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

  if(m_supportedEngineModesHasBeenSet)
  {
      unsigned supportedEngineModesIdx = 1;
      for(auto& item : m_supportedEngineModes)
      {
        oStream << location << index << locationValue << ".SupportedEngineModes.member." << supportedEngineModesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
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
  if(m_supportedEngineModesHasBeenSet)
  {
      unsigned supportedEngineModesIdx = 1;
      for(auto& item : m_supportedEngineModes)
      {
        oStream << location << ".SupportedEngineModes.member." << supportedEngineModesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
