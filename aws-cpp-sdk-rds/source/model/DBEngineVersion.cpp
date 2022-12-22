/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_supportedNcharCharacterSetsHasBeenSet(false),
    m_validUpgradeTargetHasBeenSet(false),
    m_supportedTimezonesHasBeenSet(false),
    m_exportableLogTypesHasBeenSet(false),
    m_supportsLogExportsToCloudwatchLogs(false),
    m_supportsLogExportsToCloudwatchLogsHasBeenSet(false),
    m_supportsReadReplica(false),
    m_supportsReadReplicaHasBeenSet(false),
    m_supportedEngineModesHasBeenSet(false),
    m_supportedFeatureNamesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_supportsParallelQuery(false),
    m_supportsParallelQueryHasBeenSet(false),
    m_supportsGlobalDatabases(false),
    m_supportsGlobalDatabasesHasBeenSet(false),
    m_majorEngineVersionHasBeenSet(false),
    m_databaseInstallationFilesS3BucketNameHasBeenSet(false),
    m_databaseInstallationFilesS3PrefixHasBeenSet(false),
    m_dBEngineVersionArnHasBeenSet(false),
    m_kMSKeyIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_supportsBabelfish(false),
    m_supportsBabelfishHasBeenSet(false),
    m_customDBEngineVersionManifestHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
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
    m_supportedNcharCharacterSetsHasBeenSet(false),
    m_validUpgradeTargetHasBeenSet(false),
    m_supportedTimezonesHasBeenSet(false),
    m_exportableLogTypesHasBeenSet(false),
    m_supportsLogExportsToCloudwatchLogs(false),
    m_supportsLogExportsToCloudwatchLogsHasBeenSet(false),
    m_supportsReadReplica(false),
    m_supportsReadReplicaHasBeenSet(false),
    m_supportedEngineModesHasBeenSet(false),
    m_supportedFeatureNamesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_supportsParallelQuery(false),
    m_supportsParallelQueryHasBeenSet(false),
    m_supportsGlobalDatabases(false),
    m_supportsGlobalDatabasesHasBeenSet(false),
    m_majorEngineVersionHasBeenSet(false),
    m_databaseInstallationFilesS3BucketNameHasBeenSet(false),
    m_databaseInstallationFilesS3PrefixHasBeenSet(false),
    m_dBEngineVersionArnHasBeenSet(false),
    m_kMSKeyIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_supportsBabelfish(false),
    m_supportsBabelfishHasBeenSet(false),
    m_customDBEngineVersionManifestHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
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
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
      m_engineHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(engineVersionNode.GetText());
      m_engineVersionHasBeenSet = true;
    }
    XmlNode dBParameterGroupFamilyNode = resultNode.FirstChild("DBParameterGroupFamily");
    if(!dBParameterGroupFamilyNode.IsNull())
    {
      m_dBParameterGroupFamily = Aws::Utils::Xml::DecodeEscapedXmlText(dBParameterGroupFamilyNode.GetText());
      m_dBParameterGroupFamilyHasBeenSet = true;
    }
    XmlNode dBEngineDescriptionNode = resultNode.FirstChild("DBEngineDescription");
    if(!dBEngineDescriptionNode.IsNull())
    {
      m_dBEngineDescription = Aws::Utils::Xml::DecodeEscapedXmlText(dBEngineDescriptionNode.GetText());
      m_dBEngineDescriptionHasBeenSet = true;
    }
    XmlNode dBEngineVersionDescriptionNode = resultNode.FirstChild("DBEngineVersionDescription");
    if(!dBEngineVersionDescriptionNode.IsNull())
    {
      m_dBEngineVersionDescription = Aws::Utils::Xml::DecodeEscapedXmlText(dBEngineVersionDescriptionNode.GetText());
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
    XmlNode supportedNcharCharacterSetsNode = resultNode.FirstChild("SupportedNcharCharacterSets");
    if(!supportedNcharCharacterSetsNode.IsNull())
    {
      XmlNode supportedNcharCharacterSetsMember = supportedNcharCharacterSetsNode.FirstChild("CharacterSet");
      while(!supportedNcharCharacterSetsMember.IsNull())
      {
        m_supportedNcharCharacterSets.push_back(supportedNcharCharacterSetsMember);
        supportedNcharCharacterSetsMember = supportedNcharCharacterSetsMember.NextNode("CharacterSet");
      }

      m_supportedNcharCharacterSetsHasBeenSet = true;
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
      m_supportsLogExportsToCloudwatchLogs = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsLogExportsToCloudwatchLogsNode.GetText()).c_str()).c_str());
      m_supportsLogExportsToCloudwatchLogsHasBeenSet = true;
    }
    XmlNode supportsReadReplicaNode = resultNode.FirstChild("SupportsReadReplica");
    if(!supportsReadReplicaNode.IsNull())
    {
      m_supportsReadReplica = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsReadReplicaNode.GetText()).c_str()).c_str());
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
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode supportsParallelQueryNode = resultNode.FirstChild("SupportsParallelQuery");
    if(!supportsParallelQueryNode.IsNull())
    {
      m_supportsParallelQuery = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsParallelQueryNode.GetText()).c_str()).c_str());
      m_supportsParallelQueryHasBeenSet = true;
    }
    XmlNode supportsGlobalDatabasesNode = resultNode.FirstChild("SupportsGlobalDatabases");
    if(!supportsGlobalDatabasesNode.IsNull())
    {
      m_supportsGlobalDatabases = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsGlobalDatabasesNode.GetText()).c_str()).c_str());
      m_supportsGlobalDatabasesHasBeenSet = true;
    }
    XmlNode majorEngineVersionNode = resultNode.FirstChild("MajorEngineVersion");
    if(!majorEngineVersionNode.IsNull())
    {
      m_majorEngineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(majorEngineVersionNode.GetText());
      m_majorEngineVersionHasBeenSet = true;
    }
    XmlNode databaseInstallationFilesS3BucketNameNode = resultNode.FirstChild("DatabaseInstallationFilesS3BucketName");
    if(!databaseInstallationFilesS3BucketNameNode.IsNull())
    {
      m_databaseInstallationFilesS3BucketName = Aws::Utils::Xml::DecodeEscapedXmlText(databaseInstallationFilesS3BucketNameNode.GetText());
      m_databaseInstallationFilesS3BucketNameHasBeenSet = true;
    }
    XmlNode databaseInstallationFilesS3PrefixNode = resultNode.FirstChild("DatabaseInstallationFilesS3Prefix");
    if(!databaseInstallationFilesS3PrefixNode.IsNull())
    {
      m_databaseInstallationFilesS3Prefix = Aws::Utils::Xml::DecodeEscapedXmlText(databaseInstallationFilesS3PrefixNode.GetText());
      m_databaseInstallationFilesS3PrefixHasBeenSet = true;
    }
    XmlNode dBEngineVersionArnNode = resultNode.FirstChild("DBEngineVersionArn");
    if(!dBEngineVersionArnNode.IsNull())
    {
      m_dBEngineVersionArn = Aws::Utils::Xml::DecodeEscapedXmlText(dBEngineVersionArnNode.GetText());
      m_dBEngineVersionArnHasBeenSet = true;
    }
    XmlNode kMSKeyIdNode = resultNode.FirstChild("KMSKeyId");
    if(!kMSKeyIdNode.IsNull())
    {
      m_kMSKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(kMSKeyIdNode.GetText());
      m_kMSKeyIdHasBeenSet = true;
    }
    XmlNode createTimeNode = resultNode.FirstChild("CreateTime");
    if(!createTimeNode.IsNull())
    {
      m_createTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createTimeHasBeenSet = true;
    }
    XmlNode tagListNode = resultNode.FirstChild("TagList");
    if(!tagListNode.IsNull())
    {
      XmlNode tagListMember = tagListNode.FirstChild("Tag");
      while(!tagListMember.IsNull())
      {
        m_tagList.push_back(tagListMember);
        tagListMember = tagListMember.NextNode("Tag");
      }

      m_tagListHasBeenSet = true;
    }
    XmlNode supportsBabelfishNode = resultNode.FirstChild("SupportsBabelfish");
    if(!supportsBabelfishNode.IsNull())
    {
      m_supportsBabelfish = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsBabelfishNode.GetText()).c_str()).c_str());
      m_supportsBabelfishHasBeenSet = true;
    }
    XmlNode customDBEngineVersionManifestNode = resultNode.FirstChild("CustomDBEngineVersionManifest");
    if(!customDBEngineVersionManifestNode.IsNull())
    {
      m_customDBEngineVersionManifest = Aws::Utils::Xml::DecodeEscapedXmlText(customDBEngineVersionManifestNode.GetText());
      m_customDBEngineVersionManifestHasBeenSet = true;
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

  if(m_supportedNcharCharacterSetsHasBeenSet)
  {
      unsigned supportedNcharCharacterSetsIdx = 1;
      for(auto& item : m_supportedNcharCharacterSets)
      {
        Aws::StringStream supportedNcharCharacterSetsSs;
        supportedNcharCharacterSetsSs << location << index << locationValue << ".CharacterSet." << supportedNcharCharacterSetsIdx++;
        item.OutputToStream(oStream, supportedNcharCharacterSetsSs.str().c_str());
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

  if(m_supportsParallelQueryHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsParallelQuery=" << std::boolalpha << m_supportsParallelQuery << "&";
  }

  if(m_supportsGlobalDatabasesHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsGlobalDatabases=" << std::boolalpha << m_supportsGlobalDatabases << "&";
  }

  if(m_majorEngineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".MajorEngineVersion=" << StringUtils::URLEncode(m_majorEngineVersion.c_str()) << "&";
  }

  if(m_databaseInstallationFilesS3BucketNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DatabaseInstallationFilesS3BucketName=" << StringUtils::URLEncode(m_databaseInstallationFilesS3BucketName.c_str()) << "&";
  }

  if(m_databaseInstallationFilesS3PrefixHasBeenSet)
  {
      oStream << location << index << locationValue << ".DatabaseInstallationFilesS3Prefix=" << StringUtils::URLEncode(m_databaseInstallationFilesS3Prefix.c_str()) << "&";
  }

  if(m_dBEngineVersionArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBEngineVersionArn=" << StringUtils::URLEncode(m_dBEngineVersionArn.c_str()) << "&";
  }

  if(m_kMSKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KMSKeyId=" << StringUtils::URLEncode(m_kMSKeyId.c_str()) << "&";
  }

  if(m_createTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_tagListHasBeenSet)
  {
      unsigned tagListIdx = 1;
      for(auto& item : m_tagList)
      {
        Aws::StringStream tagListSs;
        tagListSs << location << index << locationValue << ".Tag." << tagListIdx++;
        item.OutputToStream(oStream, tagListSs.str().c_str());
      }
  }

  if(m_supportsBabelfishHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsBabelfish=" << std::boolalpha << m_supportsBabelfish << "&";
  }

  if(m_customDBEngineVersionManifestHasBeenSet)
  {
      oStream << location << index << locationValue << ".CustomDBEngineVersionManifest=" << StringUtils::URLEncode(m_customDBEngineVersionManifest.c_str()) << "&";
  }

  if(m_responseMetadataHasBeenSet)
  {
      Aws::StringStream responseMetadataLocationAndMemberSs;
      responseMetadataLocationAndMemberSs << location << index << locationValue << ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMemberSs.str().c_str());
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
  if(m_supportedNcharCharacterSetsHasBeenSet)
  {
      unsigned supportedNcharCharacterSetsIdx = 1;
      for(auto& item : m_supportedNcharCharacterSets)
      {
        Aws::StringStream supportedNcharCharacterSetsSs;
        supportedNcharCharacterSetsSs << location <<  ".CharacterSet." << supportedNcharCharacterSetsIdx++;
        item.OutputToStream(oStream, supportedNcharCharacterSetsSs.str().c_str());
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
  if(m_supportsParallelQueryHasBeenSet)
  {
      oStream << location << ".SupportsParallelQuery=" << std::boolalpha << m_supportsParallelQuery << "&";
  }
  if(m_supportsGlobalDatabasesHasBeenSet)
  {
      oStream << location << ".SupportsGlobalDatabases=" << std::boolalpha << m_supportsGlobalDatabases << "&";
  }
  if(m_majorEngineVersionHasBeenSet)
  {
      oStream << location << ".MajorEngineVersion=" << StringUtils::URLEncode(m_majorEngineVersion.c_str()) << "&";
  }
  if(m_databaseInstallationFilesS3BucketNameHasBeenSet)
  {
      oStream << location << ".DatabaseInstallationFilesS3BucketName=" << StringUtils::URLEncode(m_databaseInstallationFilesS3BucketName.c_str()) << "&";
  }
  if(m_databaseInstallationFilesS3PrefixHasBeenSet)
  {
      oStream << location << ".DatabaseInstallationFilesS3Prefix=" << StringUtils::URLEncode(m_databaseInstallationFilesS3Prefix.c_str()) << "&";
  }
  if(m_dBEngineVersionArnHasBeenSet)
  {
      oStream << location << ".DBEngineVersionArn=" << StringUtils::URLEncode(m_dBEngineVersionArn.c_str()) << "&";
  }
  if(m_kMSKeyIdHasBeenSet)
  {
      oStream << location << ".KMSKeyId=" << StringUtils::URLEncode(m_kMSKeyId.c_str()) << "&";
  }
  if(m_createTimeHasBeenSet)
  {
      oStream << location << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_tagListHasBeenSet)
  {
      unsigned tagListIdx = 1;
      for(auto& item : m_tagList)
      {
        Aws::StringStream tagListSs;
        tagListSs << location <<  ".Tag." << tagListIdx++;
        item.OutputToStream(oStream, tagListSs.str().c_str());
      }
  }
  if(m_supportsBabelfishHasBeenSet)
  {
      oStream << location << ".SupportsBabelfish=" << std::boolalpha << m_supportsBabelfish << "&";
  }
  if(m_customDBEngineVersionManifestHasBeenSet)
  {
      oStream << location << ".CustomDBEngineVersionManifest=" << StringUtils::URLEncode(m_customDBEngineVersionManifest.c_str()) << "&";
  }
  if(m_responseMetadataHasBeenSet)
  {
      Aws::String responseMetadataLocationAndMember(location);
      responseMetadataLocationAndMember += ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
