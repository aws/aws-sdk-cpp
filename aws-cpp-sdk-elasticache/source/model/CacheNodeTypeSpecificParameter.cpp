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

#include <aws/elasticache/model/CacheNodeTypeSpecificParameter.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

CacheNodeTypeSpecificParameter::CacheNodeTypeSpecificParameter() : 
    m_parameterNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_allowedValuesHasBeenSet(false),
    m_isModifiable(false),
    m_isModifiableHasBeenSet(false),
    m_minimumEngineVersionHasBeenSet(false),
    m_cacheNodeTypeSpecificValuesHasBeenSet(false),
    m_changeType(ChangeType::NOT_SET),
    m_changeTypeHasBeenSet(false)
{
}

CacheNodeTypeSpecificParameter::CacheNodeTypeSpecificParameter(const XmlNode& xmlNode) : 
    m_parameterNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_allowedValuesHasBeenSet(false),
    m_isModifiable(false),
    m_isModifiableHasBeenSet(false),
    m_minimumEngineVersionHasBeenSet(false),
    m_cacheNodeTypeSpecificValuesHasBeenSet(false),
    m_changeType(ChangeType::NOT_SET),
    m_changeTypeHasBeenSet(false)
{
  *this = xmlNode;
}

CacheNodeTypeSpecificParameter& CacheNodeTypeSpecificParameter::operator =(const XmlNode& xmlNode)
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
    XmlNode cacheNodeTypeSpecificValuesNode = resultNode.FirstChild("CacheNodeTypeSpecificValues");
    if(!cacheNodeTypeSpecificValuesNode.IsNull())
    {
      XmlNode cacheNodeTypeSpecificValuesMember = cacheNodeTypeSpecificValuesNode.FirstChild("CacheNodeTypeSpecificValue");
      while(!cacheNodeTypeSpecificValuesMember.IsNull())
      {
        m_cacheNodeTypeSpecificValues.push_back(cacheNodeTypeSpecificValuesMember);
        cacheNodeTypeSpecificValuesMember = cacheNodeTypeSpecificValuesMember.NextNode("CacheNodeTypeSpecificValue");
      }

      m_cacheNodeTypeSpecificValuesHasBeenSet = true;
    }
    XmlNode changeTypeNode = resultNode.FirstChild("ChangeType");
    if(!changeTypeNode.IsNull())
    {
      m_changeType = ChangeTypeMapper::GetChangeTypeForName(StringUtils::Trim(changeTypeNode.GetText().c_str()).c_str());
      m_changeTypeHasBeenSet = true;
    }
  }

  return *this;
}

void CacheNodeTypeSpecificParameter::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_parameterNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ParameterName=" << StringUtils::URLEncode(m_parameterName.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_sourceHasBeenSet)
  {
      oStream << location << index << locationValue << ".Source=" << StringUtils::URLEncode(m_source.c_str()) << "&";
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

  if(m_cacheNodeTypeSpecificValuesHasBeenSet)
  {
      unsigned cacheNodeTypeSpecificValuesIdx = 1;
      for(auto& item : m_cacheNodeTypeSpecificValues)
      {
        Aws::StringStream cacheNodeTypeSpecificValuesSs;
        cacheNodeTypeSpecificValuesSs << location << index << locationValue << ".CacheNodeTypeSpecificValue." << cacheNodeTypeSpecificValuesIdx++;
        item.OutputToStream(oStream, cacheNodeTypeSpecificValuesSs.str().c_str());
      }
  }

  if(m_changeTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ChangeType=" << ChangeTypeMapper::GetNameForChangeType(m_changeType) << "&";
  }

}

void CacheNodeTypeSpecificParameter::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_parameterNameHasBeenSet)
  {
      oStream << location << ".ParameterName=" << StringUtils::URLEncode(m_parameterName.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_sourceHasBeenSet)
  {
      oStream << location << ".Source=" << StringUtils::URLEncode(m_source.c_str()) << "&";
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
  if(m_cacheNodeTypeSpecificValuesHasBeenSet)
  {
      unsigned cacheNodeTypeSpecificValuesIdx = 1;
      for(auto& item : m_cacheNodeTypeSpecificValues)
      {
        Aws::StringStream cacheNodeTypeSpecificValuesSs;
        cacheNodeTypeSpecificValuesSs << location <<  ".CacheNodeTypeSpecificValue." << cacheNodeTypeSpecificValuesIdx++;
        item.OutputToStream(oStream, cacheNodeTypeSpecificValuesSs.str().c_str());
      }
  }
  if(m_changeTypeHasBeenSet)
  {
      oStream << location << ".ChangeType=" << ChangeTypeMapper::GetNameForChangeType(m_changeType) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
