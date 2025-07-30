/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb/model/DBEngineVersion.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace DocDB
{
namespace Model
{

DBEngineVersion::DBEngineVersion(const XmlNode& xmlNode)
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
    XmlNode validUpgradeTargetNode = resultNode.FirstChild("ValidUpgradeTarget");
    if(!validUpgradeTargetNode.IsNull())
    {
      XmlNode validUpgradeTargetMember = validUpgradeTargetNode.FirstChild("UpgradeTarget");
      m_validUpgradeTargetHasBeenSet = !validUpgradeTargetMember.IsNull();
      while(!validUpgradeTargetMember.IsNull())
      {
        m_validUpgradeTarget.push_back(validUpgradeTargetMember);
        validUpgradeTargetMember = validUpgradeTargetMember.NextNode("UpgradeTarget");
      }

      m_validUpgradeTargetHasBeenSet = true;
    }
    XmlNode exportableLogTypesNode = resultNode.FirstChild("ExportableLogTypes");
    if(!exportableLogTypesNode.IsNull())
    {
      XmlNode exportableLogTypesMember = exportableLogTypesNode.FirstChild("member");
      m_exportableLogTypesHasBeenSet = !exportableLogTypesMember.IsNull();
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
    XmlNode supportedCACertificateIdentifiersNode = resultNode.FirstChild("SupportedCACertificateIdentifiers");
    if(!supportedCACertificateIdentifiersNode.IsNull())
    {
      XmlNode supportedCACertificateIdentifiersMember = supportedCACertificateIdentifiersNode.FirstChild("member");
      m_supportedCACertificateIdentifiersHasBeenSet = !supportedCACertificateIdentifiersMember.IsNull();
      while(!supportedCACertificateIdentifiersMember.IsNull())
      {
        m_supportedCACertificateIdentifiers.push_back(supportedCACertificateIdentifiersMember.GetText());
        supportedCACertificateIdentifiersMember = supportedCACertificateIdentifiersMember.NextNode("member");
      }

      m_supportedCACertificateIdentifiersHasBeenSet = true;
    }
    XmlNode supportsCertificateRotationWithoutRestartNode = resultNode.FirstChild("SupportsCertificateRotationWithoutRestart");
    if(!supportsCertificateRotationWithoutRestartNode.IsNull())
    {
      m_supportsCertificateRotationWithoutRestart = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsCertificateRotationWithoutRestartNode.GetText()).c_str()).c_str());
      m_supportsCertificateRotationWithoutRestartHasBeenSet = true;
    }
    XmlNode serverlessV2FeaturesSupportNode = resultNode.FirstChild("ServerlessV2FeaturesSupport");
    if(!serverlessV2FeaturesSupportNode.IsNull())
    {
      m_serverlessV2FeaturesSupport = serverlessV2FeaturesSupportNode;
      m_serverlessV2FeaturesSupportHasBeenSet = true;
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

  if(m_validUpgradeTargetHasBeenSet)
  {
      unsigned validUpgradeTargetIdx = 1;
      for(auto& item : m_validUpgradeTarget)
      {
        Aws::StringStream validUpgradeTargetSs;
        validUpgradeTargetSs << location << index << locationValue << ".ValidUpgradeTarget.UpgradeTarget." << validUpgradeTargetIdx++;
        item.OutputToStream(oStream, validUpgradeTargetSs.str().c_str());
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

  if(m_supportedCACertificateIdentifiersHasBeenSet)
  {
      unsigned supportedCACertificateIdentifiersIdx = 1;
      for(auto& item : m_supportedCACertificateIdentifiers)
      {
        oStream << location << index << locationValue << ".SupportedCACertificateIdentifiers.member." << supportedCACertificateIdentifiersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_supportsCertificateRotationWithoutRestartHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsCertificateRotationWithoutRestart=" << std::boolalpha << m_supportsCertificateRotationWithoutRestart << "&";
  }

  if(m_serverlessV2FeaturesSupportHasBeenSet)
  {
      Aws::StringStream serverlessV2FeaturesSupportLocationAndMemberSs;
      serverlessV2FeaturesSupportLocationAndMemberSs << location << index << locationValue << ".ServerlessV2FeaturesSupport";
      m_serverlessV2FeaturesSupport.OutputToStream(oStream, serverlessV2FeaturesSupportLocationAndMemberSs.str().c_str());
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
  if(m_validUpgradeTargetHasBeenSet)
  {
      unsigned validUpgradeTargetIdx = 1;
      for(auto& item : m_validUpgradeTarget)
      {
        Aws::StringStream validUpgradeTargetSs;
        validUpgradeTargetSs << location << ".ValidUpgradeTarget.UpgradeTarget." << validUpgradeTargetIdx++;
        item.OutputToStream(oStream, validUpgradeTargetSs.str().c_str());
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
  if(m_supportedCACertificateIdentifiersHasBeenSet)
  {
      unsigned supportedCACertificateIdentifiersIdx = 1;
      for(auto& item : m_supportedCACertificateIdentifiers)
      {
        oStream << location << ".SupportedCACertificateIdentifiers.member." << supportedCACertificateIdentifiersIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_supportsCertificateRotationWithoutRestartHasBeenSet)
  {
      oStream << location << ".SupportsCertificateRotationWithoutRestart=" << std::boolalpha << m_supportsCertificateRotationWithoutRestart << "&";
  }
  if(m_serverlessV2FeaturesSupportHasBeenSet)
  {
      Aws::String serverlessV2FeaturesSupportLocationAndMember(location);
      serverlessV2FeaturesSupportLocationAndMember += ".ServerlessV2FeaturesSupport";
      m_serverlessV2FeaturesSupport.OutputToStream(oStream, serverlessV2FeaturesSupportLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace DocDB
} // namespace Aws
