/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/rds/model/OptionGroupOption.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

OptionGroupOption::OptionGroupOption() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_engineNameHasBeenSet(false),
    m_majorEngineVersionHasBeenSet(false),
    m_minimumRequiredMinorEngineVersionHasBeenSet(false),
    m_portRequired(false),
    m_portRequiredHasBeenSet(false),
    m_defaultPort(0),
    m_defaultPortHasBeenSet(false),
    m_optionsDependedOnHasBeenSet(false)
{
}

OptionGroupOption::OptionGroupOption(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_engineNameHasBeenSet(false),
    m_majorEngineVersionHasBeenSet(false),
    m_minimumRequiredMinorEngineVersionHasBeenSet(false),
    m_portRequired(false),
    m_portRequiredHasBeenSet(false),
    m_defaultPort(0),
    m_defaultPortHasBeenSet(false),
    m_optionsDependedOnHasBeenSet(false)
{
  *this = xmlNode;
}

OptionGroupOption& OptionGroupOption::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = StringUtils::Trim(nameNode.GetText().c_str());
      m_nameHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = StringUtils::Trim(descriptionNode.GetText().c_str());
      m_descriptionHasBeenSet = true;
    }
    XmlNode engineNameNode = resultNode.FirstChild("EngineName");
    if(!engineNameNode.IsNull())
    {
      m_engineName = StringUtils::Trim(engineNameNode.GetText().c_str());
      m_engineNameHasBeenSet = true;
    }
    XmlNode majorEngineVersionNode = resultNode.FirstChild("MajorEngineVersion");
    if(!majorEngineVersionNode.IsNull())
    {
      m_majorEngineVersion = StringUtils::Trim(majorEngineVersionNode.GetText().c_str());
      m_majorEngineVersionHasBeenSet = true;
    }
    XmlNode minimumRequiredMinorEngineVersionNode = resultNode.FirstChild("MinimumRequiredMinorEngineVersion");
    if(!minimumRequiredMinorEngineVersionNode.IsNull())
    {
      m_minimumRequiredMinorEngineVersion = StringUtils::Trim(minimumRequiredMinorEngineVersionNode.GetText().c_str());
      m_minimumRequiredMinorEngineVersionHasBeenSet = true;
    }
    XmlNode portRequiredNode = resultNode.FirstChild("PortRequired");
    if(!portRequiredNode.IsNull())
    {
      m_portRequired = StringUtils::ConvertToBool(StringUtils::Trim(portRequiredNode.GetText().c_str()).c_str());
      m_portRequiredHasBeenSet = true;
    }
    XmlNode defaultPortNode = resultNode.FirstChild("DefaultPort");
    if(!defaultPortNode.IsNull())
    {
      m_defaultPort = StringUtils::ConvertToInt32(StringUtils::Trim(defaultPortNode.GetText().c_str()).c_str());
      m_defaultPortHasBeenSet = true;
    }
    XmlNode optionsDependedOnNode = resultNode.FirstChild("OptionsDependedOn");
    if(!optionsDependedOnNode.IsNull())
    {
      XmlNode optionsDependedOnMember = optionsDependedOnNode.FirstChild("OptionName");
      while(!optionsDependedOnMember.IsNull())
      {
        m_optionsDependedOn.push_back(StringUtils::Trim(optionsDependedOnMember.GetText().c_str()));
        optionsDependedOnMember = optionsDependedOnMember.NextNode("OptionName");
      }

      m_optionsDependedOnHasBeenSet = true;
    }
  }

  return *this;
}

void OptionGroupOption::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_engineNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineName=" << StringUtils::URLEncode(m_engineName.c_str()) << "&";
  }
  if(m_majorEngineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".MajorEngineVersion=" << StringUtils::URLEncode(m_majorEngineVersion.c_str()) << "&";
  }
  if(m_minimumRequiredMinorEngineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".MinimumRequiredMinorEngineVersion=" << StringUtils::URLEncode(m_minimumRequiredMinorEngineVersion.c_str()) << "&";
  }
  if(m_portRequiredHasBeenSet)
  {
      oStream << location << index << locationValue << ".PortRequired=" << m_portRequired << "&";
  }
  if(m_defaultPortHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultPort=" << m_defaultPort << "&";
  }
  if(m_optionsDependedOnHasBeenSet)
  {
      for(auto& item : m_optionsDependedOn)
      {
        oStream << location << index << locationValue << ".OptionName=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

void OptionGroupOption::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_engineNameHasBeenSet)
  {
      oStream << location << ".EngineName=" << StringUtils::URLEncode(m_engineName.c_str()) << "&";
  }
  if(m_majorEngineVersionHasBeenSet)
  {
      oStream << location << ".MajorEngineVersion=" << StringUtils::URLEncode(m_majorEngineVersion.c_str()) << "&";
  }
  if(m_minimumRequiredMinorEngineVersionHasBeenSet)
  {
      oStream << location << ".MinimumRequiredMinorEngineVersion=" << StringUtils::URLEncode(m_minimumRequiredMinorEngineVersion.c_str()) << "&";
  }
  if(m_portRequiredHasBeenSet)
  {
      oStream << location << ".PortRequired=" << m_portRequired << "&";
  }
  if(m_defaultPortHasBeenSet)
  {
      oStream << location << ".DefaultPort=" << m_defaultPort << "&";
  }
  if(m_optionsDependedOnHasBeenSet)
  {
      for(auto& item : m_optionsDependedOn)
      {
        oStream << location << ".OptionName=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}
