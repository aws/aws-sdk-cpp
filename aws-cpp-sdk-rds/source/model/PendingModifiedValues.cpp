/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/PendingModifiedValues.h>
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

PendingModifiedValues::PendingModifiedValues() : 
    m_dBInstanceClassHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_masterUserPasswordHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_backupRetentionPeriod(0),
    m_backupRetentionPeriodHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_licenseModelHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_dBInstanceIdentifierHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_cACertificateIdentifierHasBeenSet(false),
    m_dBSubnetGroupNameHasBeenSet(false),
    m_pendingCloudwatchLogsExportsHasBeenSet(false),
    m_processorFeaturesHasBeenSet(false),
    m_iAMDatabaseAuthenticationEnabled(false),
    m_iAMDatabaseAuthenticationEnabledHasBeenSet(false),
    m_automationMode(AutomationMode::NOT_SET),
    m_automationModeHasBeenSet(false),
    m_resumeFullAutomationModeTimeHasBeenSet(false),
    m_storageThroughput(0),
    m_storageThroughputHasBeenSet(false)
{
}

PendingModifiedValues::PendingModifiedValues(const XmlNode& xmlNode) : 
    m_dBInstanceClassHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_masterUserPasswordHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_backupRetentionPeriod(0),
    m_backupRetentionPeriodHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_licenseModelHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_dBInstanceIdentifierHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_cACertificateIdentifierHasBeenSet(false),
    m_dBSubnetGroupNameHasBeenSet(false),
    m_pendingCloudwatchLogsExportsHasBeenSet(false),
    m_processorFeaturesHasBeenSet(false),
    m_iAMDatabaseAuthenticationEnabled(false),
    m_iAMDatabaseAuthenticationEnabledHasBeenSet(false),
    m_automationMode(AutomationMode::NOT_SET),
    m_automationModeHasBeenSet(false),
    m_resumeFullAutomationModeTimeHasBeenSet(false),
    m_storageThroughput(0),
    m_storageThroughputHasBeenSet(false)
{
  *this = xmlNode;
}

PendingModifiedValues& PendingModifiedValues::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBInstanceClassNode = resultNode.FirstChild("DBInstanceClass");
    if(!dBInstanceClassNode.IsNull())
    {
      m_dBInstanceClass = Aws::Utils::Xml::DecodeEscapedXmlText(dBInstanceClassNode.GetText());
      m_dBInstanceClassHasBeenSet = true;
    }
    XmlNode allocatedStorageNode = resultNode.FirstChild("AllocatedStorage");
    if(!allocatedStorageNode.IsNull())
    {
      m_allocatedStorage = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allocatedStorageNode.GetText()).c_str()).c_str());
      m_allocatedStorageHasBeenSet = true;
    }
    XmlNode masterUserPasswordNode = resultNode.FirstChild("MasterUserPassword");
    if(!masterUserPasswordNode.IsNull())
    {
      m_masterUserPassword = Aws::Utils::Xml::DecodeEscapedXmlText(masterUserPasswordNode.GetText());
      m_masterUserPasswordHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(portNode.GetText()).c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode backupRetentionPeriodNode = resultNode.FirstChild("BackupRetentionPeriod");
    if(!backupRetentionPeriodNode.IsNull())
    {
      m_backupRetentionPeriod = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(backupRetentionPeriodNode.GetText()).c_str()).c_str());
      m_backupRetentionPeriodHasBeenSet = true;
    }
    XmlNode multiAZNode = resultNode.FirstChild("MultiAZ");
    if(!multiAZNode.IsNull())
    {
      m_multiAZ = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(multiAZNode.GetText()).c_str()).c_str());
      m_multiAZHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(engineVersionNode.GetText());
      m_engineVersionHasBeenSet = true;
    }
    XmlNode licenseModelNode = resultNode.FirstChild("LicenseModel");
    if(!licenseModelNode.IsNull())
    {
      m_licenseModel = Aws::Utils::Xml::DecodeEscapedXmlText(licenseModelNode.GetText());
      m_licenseModelHasBeenSet = true;
    }
    XmlNode iopsNode = resultNode.FirstChild("Iops");
    if(!iopsNode.IsNull())
    {
      m_iops = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(iopsNode.GetText()).c_str()).c_str());
      m_iopsHasBeenSet = true;
    }
    XmlNode dBInstanceIdentifierNode = resultNode.FirstChild("DBInstanceIdentifier");
    if(!dBInstanceIdentifierNode.IsNull())
    {
      m_dBInstanceIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBInstanceIdentifierNode.GetText());
      m_dBInstanceIdentifierHasBeenSet = true;
    }
    XmlNode storageTypeNode = resultNode.FirstChild("StorageType");
    if(!storageTypeNode.IsNull())
    {
      m_storageType = Aws::Utils::Xml::DecodeEscapedXmlText(storageTypeNode.GetText());
      m_storageTypeHasBeenSet = true;
    }
    XmlNode cACertificateIdentifierNode = resultNode.FirstChild("CACertificateIdentifier");
    if(!cACertificateIdentifierNode.IsNull())
    {
      m_cACertificateIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(cACertificateIdentifierNode.GetText());
      m_cACertificateIdentifierHasBeenSet = true;
    }
    XmlNode dBSubnetGroupNameNode = resultNode.FirstChild("DBSubnetGroupName");
    if(!dBSubnetGroupNameNode.IsNull())
    {
      m_dBSubnetGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(dBSubnetGroupNameNode.GetText());
      m_dBSubnetGroupNameHasBeenSet = true;
    }
    XmlNode pendingCloudwatchLogsExportsNode = resultNode.FirstChild("PendingCloudwatchLogsExports");
    if(!pendingCloudwatchLogsExportsNode.IsNull())
    {
      m_pendingCloudwatchLogsExports = pendingCloudwatchLogsExportsNode;
      m_pendingCloudwatchLogsExportsHasBeenSet = true;
    }
    XmlNode processorFeaturesNode = resultNode.FirstChild("ProcessorFeatures");
    if(!processorFeaturesNode.IsNull())
    {
      XmlNode processorFeaturesMember = processorFeaturesNode.FirstChild("ProcessorFeature");
      while(!processorFeaturesMember.IsNull())
      {
        m_processorFeatures.push_back(processorFeaturesMember);
        processorFeaturesMember = processorFeaturesMember.NextNode("ProcessorFeature");
      }

      m_processorFeaturesHasBeenSet = true;
    }
    XmlNode iAMDatabaseAuthenticationEnabledNode = resultNode.FirstChild("IAMDatabaseAuthenticationEnabled");
    if(!iAMDatabaseAuthenticationEnabledNode.IsNull())
    {
      m_iAMDatabaseAuthenticationEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(iAMDatabaseAuthenticationEnabledNode.GetText()).c_str()).c_str());
      m_iAMDatabaseAuthenticationEnabledHasBeenSet = true;
    }
    XmlNode automationModeNode = resultNode.FirstChild("AutomationMode");
    if(!automationModeNode.IsNull())
    {
      m_automationMode = AutomationModeMapper::GetAutomationModeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(automationModeNode.GetText()).c_str()).c_str());
      m_automationModeHasBeenSet = true;
    }
    XmlNode resumeFullAutomationModeTimeNode = resultNode.FirstChild("ResumeFullAutomationModeTime");
    if(!resumeFullAutomationModeTimeNode.IsNull())
    {
      m_resumeFullAutomationModeTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resumeFullAutomationModeTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_resumeFullAutomationModeTimeHasBeenSet = true;
    }
    XmlNode storageThroughputNode = resultNode.FirstChild("StorageThroughput");
    if(!storageThroughputNode.IsNull())
    {
      m_storageThroughput = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(storageThroughputNode.GetText()).c_str()).c_str());
      m_storageThroughputHasBeenSet = true;
    }
  }

  return *this;
}

void PendingModifiedValues::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBInstanceClassHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBInstanceClass=" << StringUtils::URLEncode(m_dBInstanceClass.c_str()) << "&";
  }

  if(m_allocatedStorageHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocatedStorage=" << m_allocatedStorage << "&";
  }

  if(m_masterUserPasswordHasBeenSet)
  {
      oStream << location << index << locationValue << ".MasterUserPassword=" << StringUtils::URLEncode(m_masterUserPassword.c_str()) << "&";
  }

  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }

  if(m_backupRetentionPeriodHasBeenSet)
  {
      oStream << location << index << locationValue << ".BackupRetentionPeriod=" << m_backupRetentionPeriod << "&";
  }

  if(m_multiAZHasBeenSet)
  {
      oStream << location << index << locationValue << ".MultiAZ=" << std::boolalpha << m_multiAZ << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_licenseModelHasBeenSet)
  {
      oStream << location << index << locationValue << ".LicenseModel=" << StringUtils::URLEncode(m_licenseModel.c_str()) << "&";
  }

  if(m_iopsHasBeenSet)
  {
      oStream << location << index << locationValue << ".Iops=" << m_iops << "&";
  }

  if(m_dBInstanceIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  if(m_storageTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }

  if(m_cACertificateIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".CACertificateIdentifier=" << StringUtils::URLEncode(m_cACertificateIdentifier.c_str()) << "&";
  }

  if(m_dBSubnetGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBSubnetGroupName=" << StringUtils::URLEncode(m_dBSubnetGroupName.c_str()) << "&";
  }

  if(m_pendingCloudwatchLogsExportsHasBeenSet)
  {
      Aws::StringStream pendingCloudwatchLogsExportsLocationAndMemberSs;
      pendingCloudwatchLogsExportsLocationAndMemberSs << location << index << locationValue << ".PendingCloudwatchLogsExports";
      m_pendingCloudwatchLogsExports.OutputToStream(oStream, pendingCloudwatchLogsExportsLocationAndMemberSs.str().c_str());
  }

  if(m_processorFeaturesHasBeenSet)
  {
      unsigned processorFeaturesIdx = 1;
      for(auto& item : m_processorFeatures)
      {
        Aws::StringStream processorFeaturesSs;
        processorFeaturesSs << location << index << locationValue << ".ProcessorFeature." << processorFeaturesIdx++;
        item.OutputToStream(oStream, processorFeaturesSs.str().c_str());
      }
  }

  if(m_iAMDatabaseAuthenticationEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".IAMDatabaseAuthenticationEnabled=" << std::boolalpha << m_iAMDatabaseAuthenticationEnabled << "&";
  }

  if(m_automationModeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutomationMode=" << AutomationModeMapper::GetNameForAutomationMode(m_automationMode) << "&";
  }

  if(m_resumeFullAutomationModeTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResumeFullAutomationModeTime=" << StringUtils::URLEncode(m_resumeFullAutomationModeTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_storageThroughputHasBeenSet)
  {
      oStream << location << index << locationValue << ".StorageThroughput=" << m_storageThroughput << "&";
  }

}

void PendingModifiedValues::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBInstanceClassHasBeenSet)
  {
      oStream << location << ".DBInstanceClass=" << StringUtils::URLEncode(m_dBInstanceClass.c_str()) << "&";
  }
  if(m_allocatedStorageHasBeenSet)
  {
      oStream << location << ".AllocatedStorage=" << m_allocatedStorage << "&";
  }
  if(m_masterUserPasswordHasBeenSet)
  {
      oStream << location << ".MasterUserPassword=" << StringUtils::URLEncode(m_masterUserPassword.c_str()) << "&";
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << m_port << "&";
  }
  if(m_backupRetentionPeriodHasBeenSet)
  {
      oStream << location << ".BackupRetentionPeriod=" << m_backupRetentionPeriod << "&";
  }
  if(m_multiAZHasBeenSet)
  {
      oStream << location << ".MultiAZ=" << std::boolalpha << m_multiAZ << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_licenseModelHasBeenSet)
  {
      oStream << location << ".LicenseModel=" << StringUtils::URLEncode(m_licenseModel.c_str()) << "&";
  }
  if(m_iopsHasBeenSet)
  {
      oStream << location << ".Iops=" << m_iops << "&";
  }
  if(m_dBInstanceIdentifierHasBeenSet)
  {
      oStream << location << ".DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }
  if(m_storageTypeHasBeenSet)
  {
      oStream << location << ".StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }
  if(m_cACertificateIdentifierHasBeenSet)
  {
      oStream << location << ".CACertificateIdentifier=" << StringUtils::URLEncode(m_cACertificateIdentifier.c_str()) << "&";
  }
  if(m_dBSubnetGroupNameHasBeenSet)
  {
      oStream << location << ".DBSubnetGroupName=" << StringUtils::URLEncode(m_dBSubnetGroupName.c_str()) << "&";
  }
  if(m_pendingCloudwatchLogsExportsHasBeenSet)
  {
      Aws::String pendingCloudwatchLogsExportsLocationAndMember(location);
      pendingCloudwatchLogsExportsLocationAndMember += ".PendingCloudwatchLogsExports";
      m_pendingCloudwatchLogsExports.OutputToStream(oStream, pendingCloudwatchLogsExportsLocationAndMember.c_str());
  }
  if(m_processorFeaturesHasBeenSet)
  {
      unsigned processorFeaturesIdx = 1;
      for(auto& item : m_processorFeatures)
      {
        Aws::StringStream processorFeaturesSs;
        processorFeaturesSs << location <<  ".ProcessorFeature." << processorFeaturesIdx++;
        item.OutputToStream(oStream, processorFeaturesSs.str().c_str());
      }
  }
  if(m_iAMDatabaseAuthenticationEnabledHasBeenSet)
  {
      oStream << location << ".IAMDatabaseAuthenticationEnabled=" << std::boolalpha << m_iAMDatabaseAuthenticationEnabled << "&";
  }
  if(m_automationModeHasBeenSet)
  {
      oStream << location << ".AutomationMode=" << AutomationModeMapper::GetNameForAutomationMode(m_automationMode) << "&";
  }
  if(m_resumeFullAutomationModeTimeHasBeenSet)
  {
      oStream << location << ".ResumeFullAutomationModeTime=" << StringUtils::URLEncode(m_resumeFullAutomationModeTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_storageThroughputHasBeenSet)
  {
      oStream << location << ".StorageThroughput=" << m_storageThroughput << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
