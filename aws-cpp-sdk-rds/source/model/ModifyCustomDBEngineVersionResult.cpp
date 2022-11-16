/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ModifyCustomDBEngineVersionResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ModifyCustomDBEngineVersionResult::ModifyCustomDBEngineVersionResult() : 
    m_supportsLogExportsToCloudwatchLogs(false),
    m_supportsReadReplica(false),
    m_supportsParallelQuery(false),
    m_supportsGlobalDatabases(false),
    m_supportsBabelfish(false)
{
}

ModifyCustomDBEngineVersionResult::ModifyCustomDBEngineVersionResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_supportsLogExportsToCloudwatchLogs(false),
    m_supportsReadReplica(false),
    m_supportsParallelQuery(false),
    m_supportsGlobalDatabases(false),
    m_supportsBabelfish(false)
{
  *this = result;
}

ModifyCustomDBEngineVersionResult& ModifyCustomDBEngineVersionResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyCustomDBEngineVersionResult"))
  {
    resultNode = rootNode.FirstChild("ModifyCustomDBEngineVersionResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(engineVersionNode.GetText());
    }
    XmlNode dBParameterGroupFamilyNode = resultNode.FirstChild("DBParameterGroupFamily");
    if(!dBParameterGroupFamilyNode.IsNull())
    {
      m_dBParameterGroupFamily = Aws::Utils::Xml::DecodeEscapedXmlText(dBParameterGroupFamilyNode.GetText());
    }
    XmlNode dBEngineDescriptionNode = resultNode.FirstChild("DBEngineDescription");
    if(!dBEngineDescriptionNode.IsNull())
    {
      m_dBEngineDescription = Aws::Utils::Xml::DecodeEscapedXmlText(dBEngineDescriptionNode.GetText());
    }
    XmlNode dBEngineVersionDescriptionNode = resultNode.FirstChild("DBEngineVersionDescription");
    if(!dBEngineVersionDescriptionNode.IsNull())
    {
      m_dBEngineVersionDescription = Aws::Utils::Xml::DecodeEscapedXmlText(dBEngineVersionDescriptionNode.GetText());
    }
    XmlNode defaultCharacterSetNode = resultNode.FirstChild("DefaultCharacterSet");
    if(!defaultCharacterSetNode.IsNull())
    {
      m_defaultCharacterSet = defaultCharacterSetNode;
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

    }
    XmlNode supportsLogExportsToCloudwatchLogsNode = resultNode.FirstChild("SupportsLogExportsToCloudwatchLogs");
    if(!supportsLogExportsToCloudwatchLogsNode.IsNull())
    {
      m_supportsLogExportsToCloudwatchLogs = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsLogExportsToCloudwatchLogsNode.GetText()).c_str()).c_str());
    }
    XmlNode supportsReadReplicaNode = resultNode.FirstChild("SupportsReadReplica");
    if(!supportsReadReplicaNode.IsNull())
    {
      m_supportsReadReplica = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsReadReplicaNode.GetText()).c_str()).c_str());
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

    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
    }
    XmlNode supportsParallelQueryNode = resultNode.FirstChild("SupportsParallelQuery");
    if(!supportsParallelQueryNode.IsNull())
    {
      m_supportsParallelQuery = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsParallelQueryNode.GetText()).c_str()).c_str());
    }
    XmlNode supportsGlobalDatabasesNode = resultNode.FirstChild("SupportsGlobalDatabases");
    if(!supportsGlobalDatabasesNode.IsNull())
    {
      m_supportsGlobalDatabases = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsGlobalDatabasesNode.GetText()).c_str()).c_str());
    }
    XmlNode majorEngineVersionNode = resultNode.FirstChild("MajorEngineVersion");
    if(!majorEngineVersionNode.IsNull())
    {
      m_majorEngineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(majorEngineVersionNode.GetText());
    }
    XmlNode databaseInstallationFilesS3BucketNameNode = resultNode.FirstChild("DatabaseInstallationFilesS3BucketName");
    if(!databaseInstallationFilesS3BucketNameNode.IsNull())
    {
      m_databaseInstallationFilesS3BucketName = Aws::Utils::Xml::DecodeEscapedXmlText(databaseInstallationFilesS3BucketNameNode.GetText());
    }
    XmlNode databaseInstallationFilesS3PrefixNode = resultNode.FirstChild("DatabaseInstallationFilesS3Prefix");
    if(!databaseInstallationFilesS3PrefixNode.IsNull())
    {
      m_databaseInstallationFilesS3Prefix = Aws::Utils::Xml::DecodeEscapedXmlText(databaseInstallationFilesS3PrefixNode.GetText());
    }
    XmlNode dBEngineVersionArnNode = resultNode.FirstChild("DBEngineVersionArn");
    if(!dBEngineVersionArnNode.IsNull())
    {
      m_dBEngineVersionArn = Aws::Utils::Xml::DecodeEscapedXmlText(dBEngineVersionArnNode.GetText());
    }
    XmlNode kMSKeyIdNode = resultNode.FirstChild("KMSKeyId");
    if(!kMSKeyIdNode.IsNull())
    {
      m_kMSKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(kMSKeyIdNode.GetText());
    }
    XmlNode createTimeNode = resultNode.FirstChild("CreateTime");
    if(!createTimeNode.IsNull())
    {
      m_createTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
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

    }
    XmlNode supportsBabelfishNode = resultNode.FirstChild("SupportsBabelfish");
    if(!supportsBabelfishNode.IsNull())
    {
      m_supportsBabelfish = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsBabelfishNode.GetText()).c_str()).c_str());
    }
    XmlNode customDBEngineVersionManifestNode = resultNode.FirstChild("CustomDBEngineVersionManifest");
    if(!customDBEngineVersionManifestNode.IsNull())
    {
      m_customDBEngineVersionManifest = Aws::Utils::Xml::DecodeEscapedXmlText(customDBEngineVersionManifestNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::ModifyCustomDBEngineVersionResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
