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

#include <aws/rds/model/OptionSetting.h>
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

OptionSetting::OptionSetting() : 
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_applyTypeHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_allowedValuesHasBeenSet(false),
    m_isModifiable(false),
    m_isModifiableHasBeenSet(false),
    m_isCollection(false),
    m_isCollectionHasBeenSet(false)
{
}

OptionSetting::OptionSetting(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_applyTypeHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_allowedValuesHasBeenSet(false),
    m_isModifiable(false),
    m_isModifiableHasBeenSet(false),
    m_isCollection(false),
    m_isCollectionHasBeenSet(false)
{
  *this = xmlNode;
}

OptionSetting& OptionSetting::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = nameNode.GetText();
      m_nameHasBeenSet = true;
    }
    XmlNode valueNode = resultNode.FirstChild("Value");
    if(!valueNode.IsNull())
    {
      m_value = valueNode.GetText();
      m_valueHasBeenSet = true;
    }
    XmlNode defaultValueNode = resultNode.FirstChild("DefaultValue");
    if(!defaultValueNode.IsNull())
    {
      m_defaultValue = defaultValueNode.GetText();
      m_defaultValueHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
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
    XmlNode isCollectionNode = resultNode.FirstChild("IsCollection");
    if(!isCollectionNode.IsNull())
    {
      m_isCollection = StringUtils::ConvertToBool(StringUtils::Trim(isCollectionNode.GetText().c_str()).c_str());
      m_isCollectionHasBeenSet = true;
    }
  }

  return *this;
}

void OptionSetting::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_valueHasBeenSet)
  {
      oStream << location << index << locationValue << ".Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }

  if(m_defaultValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultValue=" << StringUtils::URLEncode(m_defaultValue.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
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

  if(m_isCollectionHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsCollection=" << std::boolalpha << m_isCollection << "&";
  }

}

void OptionSetting::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_valueHasBeenSet)
  {
      oStream << location << ".Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }
  if(m_defaultValueHasBeenSet)
  {
      oStream << location << ".DefaultValue=" << StringUtils::URLEncode(m_defaultValue.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
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
  if(m_isCollectionHasBeenSet)
  {
      oStream << location << ".IsCollection=" << std::boolalpha << m_isCollection << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
