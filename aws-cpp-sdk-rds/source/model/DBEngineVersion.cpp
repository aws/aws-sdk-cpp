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
    m_supportedTimezonesHasBeenSet(false),
    m_exportableLogTypesHasBeenSet(false),
    m_supportsLogExportsToCloudwatchLogs(false),
    m_supportsLogExportsToCloudwatchLogsHasBeenSet(false),
    m_supportsReadReplica(false),
    m_supportsReadReplicaHasBeenSet(false),
    m_supportedEngineModesHasBeenSet(false),
    m_supportedFeatureNamesHasBeenSet(false),
    m_statusHasBeenSet(false)
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
    m_supportedTimezonesHasBeenSet(false),
    m_exportableLogTypesHasBeenSet(false),
    m_supportsLogExportsToCloudwatchLogs(false),
    m_supportsLogExportsToCloudwatchLogsHasBeenSet(false),
    m_supportsReadReplica(false),
    m_supportsReadReplicaHasBeenSet(false),
    m_supportedEngineModesHasBeenSet(false),
    m_supportedFeatureNamesHasBeenSet(false),
    m_statusHasBeenSet(false)
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
      m_engine = engineNode.GetText();
      m_engineHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = engineVersionNode.GetText();
      m_engineVersionHasBeenSet = true;
    }
    XmlNode dBParameterGroupFamilyNode = resultNode.FirstChild("DBParameterGroupFamily");
    if(!dBParameterGroupFamilyNode.IsNull())
    {
      m_dBParameterGroupFamily = dBParameterGroupFamilyNode.GetText();
      m_dBParameterGroupFamilyHasBeenSet = true;
    }
    XmlNode dBEngineDescriptionNode = resultNode.FirstChild("DBEngineDescription");
    if(!dBEngineDescriptionNode.IsNull())
    {
      m_dBEngineDescription = dBEngineDescriptionNode.GetText();
      m_dBEngineDescriptionHasBeenSet = true;
    }
    XmlNode dBEngineVersionDescriptionNode = resultNode.FirstChild("DBEngineVersionDescription");
    if(!dBEngineVersionDescriptionNode.IsNull())
    {
      m_dBEngineVersionDescription = dBEngineVersionDescriptionNode.GetText();
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
    XmlNode exportableLogTypesNode = resultNode.FirstChild("ExportableLogTypes");
    if(!exportableLogTypesNode.IsNull())
    {
      XmlNode exportableLogTypesMember = exportableLogTypesNode.FirstChild("member");
      while(!exportableLogTypesMember.IsNull())
      {
        m_exportableLogTypes.push_back(exportableLogTypesMember.GetText());
        exportableLogTypesMember = exportableLogTypesMember.NextNode("member");
      }

      m_exportableLogTypesHasBeenSet = true;
    }
    XmlNode supportsLogExportsToCloudwatchLogsNode = resultNode.FirstChild("SupportsLogExportsToCloudwatchLogs");
    if(!supportsLogExportsToCloudwatchLogsNode.IsNull())
    {
      m_supportsLogExportsToCloudwatchLogs = StringUtils::ConvertToBool(StringUtils::Trim(supportsLogExportsToCloudwatchLogsNode.GetText().c_str()).c_str());
      m_supportsLogExportsToCloudwatchLogsHasBeenSet = true;
    }
    XmlNode supportsReadReplicaNode = resultNode.FirstChild("SupportsReadReplica");
    if(!supportsReadReplicaNode.IsNull())
    {
      m_supportsReadReplica = StringUtils::ConvertToBool(StringUtils::Trim(supportsReadReplicaNode.GetText().c_str()).c_str());
      m_supportsReadReplicaHasBeenSet = true;
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
    XmlNode supportedFeatureNamesNode = resultNode.FirstChild("SupportedFeatureNames");
    if(!supportedFeatureNamesNode.IsNull())
    {
      XmlNode supportedFeatureNamesMember = supportedFeatureNamesNode.FirstChild("member");
      while(!supportedFeatureNamesMember.IsNull())
      {
        m_supportedFeatureNames.push_back(supportedFeatureNamesMember.GetText());
        supportedFeatureNamesMember = supportedFeatureNamesMember.NextNode("member");
      }

      m_supportedFeatureNamesHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode.GetText();
      m_statusHasBeenSet = true;
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

  if(m_exportableLogTypesHasBeenSet)
  {
      unsigned exportableLogTypesIdx = 1;
      for(auto& item : m_exportableLogTypes)
      {
        oStream << location << index << locationValue << ".ExportableLogTypes.member." << exportableLogTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_supportsLogExportsToCloudwatchLogsHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsLogExportsToCloudwatchLogs=" << std::boolalpha << m_supportsLogExportsToCloudwatchLogs << "&";
  }

  if(m_supportsReadReplicaHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsReadReplica=" << std::boolalpha << m_supportsReadReplica << "&";
  }

  if(m_supportedEngineModesHasBeenSet)
  {
      unsigned supportedEngineModesIdx = 1;
      for(auto& item : m_supportedEngineModes)
      {
        oStream << location << index << locationValue << ".SupportedEngineModes.member." << supportedEngineModesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_supportedFeatureNamesHasBeenSet)
  {
      unsigned supportedFeatureNamesIdx = 1;
      for(auto& item : m_supportedFeatureNames)
      {
        oStream << location << index << locationValue << ".SupportedFeatureNames.member." << supportedFeatureNamesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
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
  if(m_exportableLogTypesHasBeenSet)
  {
      unsigned exportableLogTypesIdx = 1;
      for(auto& item : m_exportableLogTypes)
      {
        oStream << location << ".ExportableLogTypes.member." << exportableLogTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_supportsLogExportsToCloudwatchLogsHasBeenSet)
  {
      oStream << location << ".SupportsLogExportsToCloudwatchLogs=" << std::boolalpha << m_supportsLogExportsToCloudwatchLogs << "&";
  }
  if(m_supportsReadReplicaHasBeenSet)
  {
      oStream << location << ".SupportsReadReplica=" << std::boolalpha << m_supportsReadReplica << "&";
  }
  if(m_supportedEngineModesHasBeenSet)
  {
      unsigned supportedEngineModesIdx = 1;
      for(auto& item : m_supportedEngineModes)
      {
        oStream << location << ".SupportedEngineModes.member." << supportedEngineModesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_supportedFeatureNamesHasBeenSet)
  {
      unsigned supportedFeatureNamesIdx = 1;
      for(auto& item : m_supportedFeatureNames)
      {
        oStream << location << ".SupportedFeatureNames.member." << supportedFeatureNamesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
