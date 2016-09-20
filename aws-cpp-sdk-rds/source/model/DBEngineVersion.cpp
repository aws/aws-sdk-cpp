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
#include <aws/rds/model/DBEngineVersion.h>
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

DBEngineVersion::DBEngineVersion() : 
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_dBParameterGroupFamilyHasBeenSet(false),
    m_dBEngineDescriptionHasBeenSet(false),
    m_dBEngineVersionDescriptionHasBeenSet(false),
    m_defaultCharacterSetHasBeenSet(false),
    m_supportedCharacterSetsHasBeenSet(false),
    m_validUpgradeTargetHasBeenSet(false),
    m_supportedTimezonesHasBeenSet(false)
{
}

DBEngineVersion::DBEngineVersion(const XmlNode& xmlNode) : 
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_dBParameterGroupFamilyHasBeenSet(false),
    m_dBEngineDescriptionHasBeenSet(false),
    m_dBEngineVersionDescriptionHasBeenSet(false),
    m_defaultCharacterSetHasBeenSet(false),
    m_supportedCharacterSetsHasBeenSet(false),
    m_validUpgradeTargetHasBeenSet(false),
    m_supportedTimezonesHasBeenSet(false)
{
  *this = xmlNode;
}

DBEngineVersion& DBEngineVersion::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = StringUtils::Trim(engineNode.GetText().c_str());
      m_engineHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = StringUtils::Trim(engineVersionNode.GetText().c_str());
      m_engineVersionHasBeenSet = true;
    }
    XmlNode dBParameterGroupFamilyNode = resultNode.FirstChild("DBParameterGroupFamily");
    if(!dBParameterGroupFamilyNode.IsNull())
    {
      m_dBParameterGroupFamily = StringUtils::Trim(dBParameterGroupFamilyNode.GetText().c_str());
      m_dBParameterGroupFamilyHasBeenSet = true;
    }
    XmlNode dBEngineDescriptionNode = resultNode.FirstChild("DBEngineDescription");
    if(!dBEngineDescriptionNode.IsNull())
    {
      m_dBEngineDescription = StringUtils::Trim(dBEngineDescriptionNode.GetText().c_str());
      m_dBEngineDescriptionHasBeenSet = true;
    }
    XmlNode dBEngineVersionDescriptionNode = resultNode.FirstChild("DBEngineVersionDescription");
    if(!dBEngineVersionDescriptionNode.IsNull())
    {
      m_dBEngineVersionDescription = StringUtils::Trim(dBEngineVersionDescriptionNode.GetText().c_str());
      m_dBEngineVersionDescriptionHasBeenSet = true;
    }
    XmlNode defaultCharacterSetNode = resultNode.FirstChild("DefaultCharacterSet");
    if(!defaultCharacterSetNode.IsNull())
    {
      m_defaultCharacterSet = defaultCharacterSetNode;
      m_defaultCharacterSetHasBeenSet = true;
    }
    XmlNode supportedCharacterSetsNode = resultNode.FirstChild("SupportedCharacterSets");
    if(!supportedCharacterSetsNode.IsNull())
    {
      XmlNode supportedCharacterSetsMember = supportedCharacterSetsNode.FirstChild("CharacterSet");
      while(!supportedCharacterSetsMember.IsNull())
      {
        m_supportedCharacterSets.push_back(supportedCharacterSetsMember);
        supportedCharacterSetsMember = supportedCharacterSetsMember.NextNode("CharacterSet");
      }

      m_supportedCharacterSetsHasBeenSet = true;
    }
    XmlNode validUpgradeTargetNode = resultNode.FirstChild("ValidUpgradeTarget");
    if(!validUpgradeTargetNode.IsNull())
    {
      XmlNode validUpgradeTargetMember = validUpgradeTargetNode.FirstChild("UpgradeTarget");
      while(!validUpgradeTargetMember.IsNull())
      {
        m_validUpgradeTarget.push_back(validUpgradeTargetMember);
        validUpgradeTargetMember = validUpgradeTargetMember.NextNode("UpgradeTarget");
      }

      m_validUpgradeTargetHasBeenSet = true;
    }
    XmlNode supportedTimezonesNode = resultNode.FirstChild("SupportedTimezones");
    if(!supportedTimezonesNode.IsNull())
    {
      XmlNode supportedTimezonesMember = supportedTimezonesNode.FirstChild("Timezone");
      while(!supportedTimezonesMember.IsNull())
      {
        m_supportedTimezones.push_back(supportedTimezonesMember);
        supportedTimezonesMember = supportedTimezonesMember.NextNode("Timezone");
      }

      m_supportedTimezonesHasBeenSet = true;
    }
  }

  return *this;
}

void DBEngineVersion::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_dBParameterGroupFamilyHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBParameterGroupFamily=" << StringUtils::URLEncode(m_dBParameterGroupFamily.c_str()) << "&";
  }

  if(m_dBEngineDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBEngineDescription=" << StringUtils::URLEncode(m_dBEngineDescription.c_str()) << "&";
  }

  if(m_dBEngineVersionDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBEngineVersionDescription=" << StringUtils::URLEncode(m_dBEngineVersionDescription.c_str()) << "&";
  }

  if(m_defaultCharacterSetHasBeenSet)
  {
      Aws::StringStream defaultCharacterSetLocationAndMemberSs;
      defaultCharacterSetLocationAndMemberSs << location << index << locationValue << ".DefaultCharacterSet";
      m_defaultCharacterSet.OutputToStream(oStream, defaultCharacterSetLocationAndMemberSs.str().c_str());
  }

  if(m_supportedCharacterSetsHasBeenSet)
  {
      unsigned supportedCharacterSetsIdx = 1;
      for(auto& item : m_supportedCharacterSets)
      {
        Aws::StringStream supportedCharacterSetsSs;
        supportedCharacterSetsSs << location << index << locationValue << ".CharacterSet." << supportedCharacterSetsIdx++;
        item.OutputToStream(oStream, supportedCharacterSetsSs.str().c_str());
      }
  }

  if(m_validUpgradeTargetHasBeenSet)
  {
      unsigned validUpgradeTargetIdx = 1;
      for(auto& item : m_validUpgradeTarget)
      {
        Aws::StringStream validUpgradeTargetSs;
        validUpgradeTargetSs << location << index << locationValue << ".UpgradeTarget." << validUpgradeTargetIdx++;
        item.OutputToStream(oStream, validUpgradeTargetSs.str().c_str());
      }
  }

  if(m_supportedTimezonesHasBeenSet)
  {
      unsigned supportedTimezonesIdx = 1;
      for(auto& item : m_supportedTimezones)
      {
        Aws::StringStream supportedTimezonesSs;
        supportedTimezonesSs << location << index << locationValue << ".Timezone." << supportedTimezonesIdx++;
        item.OutputToStream(oStream, supportedTimezonesSs.str().c_str());
      }
  }

}

void DBEngineVersion::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_dBParameterGroupFamilyHasBeenSet)
  {
      oStream << location << ".DBParameterGroupFamily=" << StringUtils::URLEncode(m_dBParameterGroupFamily.c_str()) << "&";
  }
  if(m_dBEngineDescriptionHasBeenSet)
  {
      oStream << location << ".DBEngineDescription=" << StringUtils::URLEncode(m_dBEngineDescription.c_str()) << "&";
  }
  if(m_dBEngineVersionDescriptionHasBeenSet)
  {
      oStream << location << ".DBEngineVersionDescription=" << StringUtils::URLEncode(m_dBEngineVersionDescription.c_str()) << "&";
  }
  if(m_defaultCharacterSetHasBeenSet)
  {
      Aws::String defaultCharacterSetLocationAndMember(location);
      defaultCharacterSetLocationAndMember += ".DefaultCharacterSet";
      m_defaultCharacterSet.OutputToStream(oStream, defaultCharacterSetLocationAndMember.c_str());
  }
  if(m_supportedCharacterSetsHasBeenSet)
  {
      unsigned supportedCharacterSetsIdx = 1;
      for(auto& item : m_supportedCharacterSets)
      {
        Aws::StringStream supportedCharacterSetsSs;
        supportedCharacterSetsSs << location <<  ".CharacterSet." << supportedCharacterSetsIdx++;
        item.OutputToStream(oStream, supportedCharacterSetsSs.str().c_str());
      }
  }
  if(m_validUpgradeTargetHasBeenSet)
  {
      unsigned validUpgradeTargetIdx = 1;
      for(auto& item : m_validUpgradeTarget)
      {
        Aws::StringStream validUpgradeTargetSs;
        validUpgradeTargetSs << location <<  ".UpgradeTarget." << validUpgradeTargetIdx++;
        item.OutputToStream(oStream, validUpgradeTargetSs.str().c_str());
      }
  }
  if(m_supportedTimezonesHasBeenSet)
  {
      unsigned supportedTimezonesIdx = 1;
      for(auto& item : m_supportedTimezones)
      {
        Aws::StringStream supportedTimezonesSs;
        supportedTimezonesSs << location <<  ".Timezone." << supportedTimezonesIdx++;
        item.OutputToStream(oStream, supportedTimezonesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
