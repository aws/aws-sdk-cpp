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

#include <aws/docdb/model/PendingModifiedValues.h>
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
    m_pendingCloudwatchLogsExportsHasBeenSet(false)
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
    m_pendingCloudwatchLogsExportsHasBeenSet(false)
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
      m_dBInstanceClass = dBInstanceClassNode.GetText();
      m_dBInstanceClassHasBeenSet = true;
    }
    XmlNode allocatedStorageNode = resultNode.FirstChild("AllocatedStorage");
    if(!allocatedStorageNode.IsNull())
    {
      m_allocatedStorage = StringUtils::ConvertToInt32(StringUtils::Trim(allocatedStorageNode.GetText().c_str()).c_str());
      m_allocatedStorageHasBeenSet = true;
    }
    XmlNode masterUserPasswordNode = resultNode.FirstChild("MasterUserPassword");
    if(!masterUserPasswordNode.IsNull())
    {
      m_masterUserPassword = masterUserPasswordNode.GetText();
      m_masterUserPasswordHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(portNode.GetText().c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode backupRetentionPeriodNode = resultNode.FirstChild("BackupRetentionPeriod");
    if(!backupRetentionPeriodNode.IsNull())
    {
      m_backupRetentionPeriod = StringUtils::ConvertToInt32(StringUtils::Trim(backupRetentionPeriodNode.GetText().c_str()).c_str());
      m_backupRetentionPeriodHasBeenSet = true;
    }
    XmlNode multiAZNode = resultNode.FirstChild("MultiAZ");
    if(!multiAZNode.IsNull())
    {
      m_multiAZ = StringUtils::ConvertToBool(StringUtils::Trim(multiAZNode.GetText().c_str()).c_str());
      m_multiAZHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = engineVersionNode.GetText();
      m_engineVersionHasBeenSet = true;
    }
    XmlNode licenseModelNode = resultNode.FirstChild("LicenseModel");
    if(!licenseModelNode.IsNull())
    {
      m_licenseModel = licenseModelNode.GetText();
      m_licenseModelHasBeenSet = true;
    }
    XmlNode iopsNode = resultNode.FirstChild("Iops");
    if(!iopsNode.IsNull())
    {
      m_iops = StringUtils::ConvertToInt32(StringUtils::Trim(iopsNode.GetText().c_str()).c_str());
      m_iopsHasBeenSet = true;
    }
    XmlNode dBInstanceIdentifierNode = resultNode.FirstChild("DBInstanceIdentifier");
    if(!dBInstanceIdentifierNode.IsNull())
    {
      m_dBInstanceIdentifier = dBInstanceIdentifierNode.GetText();
      m_dBInstanceIdentifierHasBeenSet = true;
    }
    XmlNode storageTypeNode = resultNode.FirstChild("StorageType");
    if(!storageTypeNode.IsNull())
    {
      m_storageType = storageTypeNode.GetText();
      m_storageTypeHasBeenSet = true;
    }
    XmlNode cACertificateIdentifierNode = resultNode.FirstChild("CACertificateIdentifier");
    if(!cACertificateIdentifierNode.IsNull())
    {
      m_cACertificateIdentifier = cACertificateIdentifierNode.GetText();
      m_cACertificateIdentifierHasBeenSet = true;
    }
    XmlNode dBSubnetGroupNameNode = resultNode.FirstChild("DBSubnetGroupName");
    if(!dBSubnetGroupNameNode.IsNull())
    {
      m_dBSubnetGroupName = dBSubnetGroupNameNode.GetText();
      m_dBSubnetGroupNameHasBeenSet = true;
    }
    XmlNode pendingCloudwatchLogsExportsNode = resultNode.FirstChild("PendingCloudwatchLogsExports");
    if(!pendingCloudwatchLogsExportsNode.IsNull())
    {
      m_pendingCloudwatchLogsExports = pendingCloudwatchLogsExportsNode;
      m_pendingCloudwatchLogsExportsHasBeenSet = true;
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
}

} // namespace Model
} // namespace DocDB
} // namespace Aws
