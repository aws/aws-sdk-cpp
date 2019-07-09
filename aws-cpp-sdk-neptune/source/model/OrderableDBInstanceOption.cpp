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

#include <aws/neptune/model/OrderableDBInstanceOption.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Neptune
{
namespace Model
{

OrderableDBInstanceOption::OrderableDBInstanceOption() : 
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_dBInstanceClassHasBeenSet(false),
    m_licenseModelHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_multiAZCapable(false),
    m_multiAZCapableHasBeenSet(false),
    m_readReplicaCapable(false),
    m_readReplicaCapableHasBeenSet(false),
    m_vpc(false),
    m_vpcHasBeenSet(false),
    m_supportsStorageEncryption(false),
    m_supportsStorageEncryptionHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_supportsIops(false),
    m_supportsIopsHasBeenSet(false),
    m_supportsEnhancedMonitoring(false),
    m_supportsEnhancedMonitoringHasBeenSet(false),
    m_supportsIAMDatabaseAuthentication(false),
    m_supportsIAMDatabaseAuthenticationHasBeenSet(false),
    m_supportsPerformanceInsights(false),
    m_supportsPerformanceInsightsHasBeenSet(false),
    m_minStorageSize(0),
    m_minStorageSizeHasBeenSet(false),
    m_maxStorageSize(0),
    m_maxStorageSizeHasBeenSet(false),
    m_minIopsPerDbInstance(0),
    m_minIopsPerDbInstanceHasBeenSet(false),
    m_maxIopsPerDbInstance(0),
    m_maxIopsPerDbInstanceHasBeenSet(false),
    m_minIopsPerGib(0.0),
    m_minIopsPerGibHasBeenSet(false),
    m_maxIopsPerGib(0.0),
    m_maxIopsPerGibHasBeenSet(false)
{
}

OrderableDBInstanceOption::OrderableDBInstanceOption(const XmlNode& xmlNode) : 
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_dBInstanceClassHasBeenSet(false),
    m_licenseModelHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_multiAZCapable(false),
    m_multiAZCapableHasBeenSet(false),
    m_readReplicaCapable(false),
    m_readReplicaCapableHasBeenSet(false),
    m_vpc(false),
    m_vpcHasBeenSet(false),
    m_supportsStorageEncryption(false),
    m_supportsStorageEncryptionHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_supportsIops(false),
    m_supportsIopsHasBeenSet(false),
    m_supportsEnhancedMonitoring(false),
    m_supportsEnhancedMonitoringHasBeenSet(false),
    m_supportsIAMDatabaseAuthentication(false),
    m_supportsIAMDatabaseAuthenticationHasBeenSet(false),
    m_supportsPerformanceInsights(false),
    m_supportsPerformanceInsightsHasBeenSet(false),
    m_minStorageSize(0),
    m_minStorageSizeHasBeenSet(false),
    m_maxStorageSize(0),
    m_maxStorageSizeHasBeenSet(false),
    m_minIopsPerDbInstance(0),
    m_minIopsPerDbInstanceHasBeenSet(false),
    m_maxIopsPerDbInstance(0),
    m_maxIopsPerDbInstanceHasBeenSet(false),
    m_minIopsPerGib(0.0),
    m_minIopsPerGibHasBeenSet(false),
    m_maxIopsPerGib(0.0),
    m_maxIopsPerGibHasBeenSet(false)
{
  *this = xmlNode;
}

OrderableDBInstanceOption& OrderableDBInstanceOption::operator =(const XmlNode& xmlNode)
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
    XmlNode dBInstanceClassNode = resultNode.FirstChild("DBInstanceClass");
    if(!dBInstanceClassNode.IsNull())
    {
      m_dBInstanceClass = dBInstanceClassNode.GetText();
      m_dBInstanceClassHasBeenSet = true;
    }
    XmlNode licenseModelNode = resultNode.FirstChild("LicenseModel");
    if(!licenseModelNode.IsNull())
    {
      m_licenseModel = licenseModelNode.GetText();
      m_licenseModelHasBeenSet = true;
    }
    XmlNode availabilityZonesNode = resultNode.FirstChild("AvailabilityZones");
    if(!availabilityZonesNode.IsNull())
    {
      XmlNode availabilityZonesMember = availabilityZonesNode.FirstChild("AvailabilityZone");
      while(!availabilityZonesMember.IsNull())
      {
        m_availabilityZones.push_back(availabilityZonesMember);
        availabilityZonesMember = availabilityZonesMember.NextNode("AvailabilityZone");
      }

      m_availabilityZonesHasBeenSet = true;
    }
    XmlNode multiAZCapableNode = resultNode.FirstChild("MultiAZCapable");
    if(!multiAZCapableNode.IsNull())
    {
      m_multiAZCapable = StringUtils::ConvertToBool(StringUtils::Trim(multiAZCapableNode.GetText().c_str()).c_str());
      m_multiAZCapableHasBeenSet = true;
    }
    XmlNode readReplicaCapableNode = resultNode.FirstChild("ReadReplicaCapable");
    if(!readReplicaCapableNode.IsNull())
    {
      m_readReplicaCapable = StringUtils::ConvertToBool(StringUtils::Trim(readReplicaCapableNode.GetText().c_str()).c_str());
      m_readReplicaCapableHasBeenSet = true;
    }
    XmlNode vpcNode = resultNode.FirstChild("Vpc");
    if(!vpcNode.IsNull())
    {
      m_vpc = StringUtils::ConvertToBool(StringUtils::Trim(vpcNode.GetText().c_str()).c_str());
      m_vpcHasBeenSet = true;
    }
    XmlNode supportsStorageEncryptionNode = resultNode.FirstChild("SupportsStorageEncryption");
    if(!supportsStorageEncryptionNode.IsNull())
    {
      m_supportsStorageEncryption = StringUtils::ConvertToBool(StringUtils::Trim(supportsStorageEncryptionNode.GetText().c_str()).c_str());
      m_supportsStorageEncryptionHasBeenSet = true;
    }
    XmlNode storageTypeNode = resultNode.FirstChild("StorageType");
    if(!storageTypeNode.IsNull())
    {
      m_storageType = storageTypeNode.GetText();
      m_storageTypeHasBeenSet = true;
    }
    XmlNode supportsIopsNode = resultNode.FirstChild("SupportsIops");
    if(!supportsIopsNode.IsNull())
    {
      m_supportsIops = StringUtils::ConvertToBool(StringUtils::Trim(supportsIopsNode.GetText().c_str()).c_str());
      m_supportsIopsHasBeenSet = true;
    }
    XmlNode supportsEnhancedMonitoringNode = resultNode.FirstChild("SupportsEnhancedMonitoring");
    if(!supportsEnhancedMonitoringNode.IsNull())
    {
      m_supportsEnhancedMonitoring = StringUtils::ConvertToBool(StringUtils::Trim(supportsEnhancedMonitoringNode.GetText().c_str()).c_str());
      m_supportsEnhancedMonitoringHasBeenSet = true;
    }
    XmlNode supportsIAMDatabaseAuthenticationNode = resultNode.FirstChild("SupportsIAMDatabaseAuthentication");
    if(!supportsIAMDatabaseAuthenticationNode.IsNull())
    {
      m_supportsIAMDatabaseAuthentication = StringUtils::ConvertToBool(StringUtils::Trim(supportsIAMDatabaseAuthenticationNode.GetText().c_str()).c_str());
      m_supportsIAMDatabaseAuthenticationHasBeenSet = true;
    }
    XmlNode supportsPerformanceInsightsNode = resultNode.FirstChild("SupportsPerformanceInsights");
    if(!supportsPerformanceInsightsNode.IsNull())
    {
      m_supportsPerformanceInsights = StringUtils::ConvertToBool(StringUtils::Trim(supportsPerformanceInsightsNode.GetText().c_str()).c_str());
      m_supportsPerformanceInsightsHasBeenSet = true;
    }
    XmlNode minStorageSizeNode = resultNode.FirstChild("MinStorageSize");
    if(!minStorageSizeNode.IsNull())
    {
      m_minStorageSize = StringUtils::ConvertToInt32(StringUtils::Trim(minStorageSizeNode.GetText().c_str()).c_str());
      m_minStorageSizeHasBeenSet = true;
    }
    XmlNode maxStorageSizeNode = resultNode.FirstChild("MaxStorageSize");
    if(!maxStorageSizeNode.IsNull())
    {
      m_maxStorageSize = StringUtils::ConvertToInt32(StringUtils::Trim(maxStorageSizeNode.GetText().c_str()).c_str());
      m_maxStorageSizeHasBeenSet = true;
    }
    XmlNode minIopsPerDbInstanceNode = resultNode.FirstChild("MinIopsPerDbInstance");
    if(!minIopsPerDbInstanceNode.IsNull())
    {
      m_minIopsPerDbInstance = StringUtils::ConvertToInt32(StringUtils::Trim(minIopsPerDbInstanceNode.GetText().c_str()).c_str());
      m_minIopsPerDbInstanceHasBeenSet = true;
    }
    XmlNode maxIopsPerDbInstanceNode = resultNode.FirstChild("MaxIopsPerDbInstance");
    if(!maxIopsPerDbInstanceNode.IsNull())
    {
      m_maxIopsPerDbInstance = StringUtils::ConvertToInt32(StringUtils::Trim(maxIopsPerDbInstanceNode.GetText().c_str()).c_str());
      m_maxIopsPerDbInstanceHasBeenSet = true;
    }
    XmlNode minIopsPerGibNode = resultNode.FirstChild("MinIopsPerGib");
    if(!minIopsPerGibNode.IsNull())
    {
      m_minIopsPerGib = StringUtils::ConvertToDouble(StringUtils::Trim(minIopsPerGibNode.GetText().c_str()).c_str());
      m_minIopsPerGibHasBeenSet = true;
    }
    XmlNode maxIopsPerGibNode = resultNode.FirstChild("MaxIopsPerGib");
    if(!maxIopsPerGibNode.IsNull())
    {
      m_maxIopsPerGib = StringUtils::ConvertToDouble(StringUtils::Trim(maxIopsPerGibNode.GetText().c_str()).c_str());
      m_maxIopsPerGibHasBeenSet = true;
    }
  }

  return *this;
}

void OrderableDBInstanceOption::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_dBInstanceClassHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBInstanceClass=" << StringUtils::URLEncode(m_dBInstanceClass.c_str()) << "&";
  }

  if(m_licenseModelHasBeenSet)
  {
      oStream << location << index << locationValue << ".LicenseModel=" << StringUtils::URLEncode(m_licenseModel.c_str()) << "&";
  }

  if(m_availabilityZonesHasBeenSet)
  {
      unsigned availabilityZonesIdx = 1;
      for(auto& item : m_availabilityZones)
      {
        Aws::StringStream availabilityZonesSs;
        availabilityZonesSs << location << index << locationValue << ".AvailabilityZone." << availabilityZonesIdx++;
        item.OutputToStream(oStream, availabilityZonesSs.str().c_str());
      }
  }

  if(m_multiAZCapableHasBeenSet)
  {
      oStream << location << index << locationValue << ".MultiAZCapable=" << std::boolalpha << m_multiAZCapable << "&";
  }

  if(m_readReplicaCapableHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReadReplicaCapable=" << std::boolalpha << m_readReplicaCapable << "&";
  }

  if(m_vpcHasBeenSet)
  {
      oStream << location << index << locationValue << ".Vpc=" << std::boolalpha << m_vpc << "&";
  }

  if(m_supportsStorageEncryptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsStorageEncryption=" << std::boolalpha << m_supportsStorageEncryption << "&";
  }

  if(m_storageTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }

  if(m_supportsIopsHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsIops=" << std::boolalpha << m_supportsIops << "&";
  }

  if(m_supportsEnhancedMonitoringHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsEnhancedMonitoring=" << std::boolalpha << m_supportsEnhancedMonitoring << "&";
  }

  if(m_supportsIAMDatabaseAuthenticationHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsIAMDatabaseAuthentication=" << std::boolalpha << m_supportsIAMDatabaseAuthentication << "&";
  }

  if(m_supportsPerformanceInsightsHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsPerformanceInsights=" << std::boolalpha << m_supportsPerformanceInsights << "&";
  }

  if(m_minStorageSizeHasBeenSet)
  {
      oStream << location << index << locationValue << ".MinStorageSize=" << m_minStorageSize << "&";
  }

  if(m_maxStorageSizeHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxStorageSize=" << m_maxStorageSize << "&";
  }

  if(m_minIopsPerDbInstanceHasBeenSet)
  {
      oStream << location << index << locationValue << ".MinIopsPerDbInstance=" << m_minIopsPerDbInstance << "&";
  }

  if(m_maxIopsPerDbInstanceHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxIopsPerDbInstance=" << m_maxIopsPerDbInstance << "&";
  }

  if(m_minIopsPerGibHasBeenSet)
  {
        oStream << location << index << locationValue << ".MinIopsPerGib=" << StringUtils::URLEncode(m_minIopsPerGib) << "&";
  }

  if(m_maxIopsPerGibHasBeenSet)
  {
        oStream << location << index << locationValue << ".MaxIopsPerGib=" << StringUtils::URLEncode(m_maxIopsPerGib) << "&";
  }

}

void OrderableDBInstanceOption::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_dBInstanceClassHasBeenSet)
  {
      oStream << location << ".DBInstanceClass=" << StringUtils::URLEncode(m_dBInstanceClass.c_str()) << "&";
  }
  if(m_licenseModelHasBeenSet)
  {
      oStream << location << ".LicenseModel=" << StringUtils::URLEncode(m_licenseModel.c_str()) << "&";
  }
  if(m_availabilityZonesHasBeenSet)
  {
      unsigned availabilityZonesIdx = 1;
      for(auto& item : m_availabilityZones)
      {
        Aws::StringStream availabilityZonesSs;
        availabilityZonesSs << location <<  ".AvailabilityZone." << availabilityZonesIdx++;
        item.OutputToStream(oStream, availabilityZonesSs.str().c_str());
      }
  }
  if(m_multiAZCapableHasBeenSet)
  {
      oStream << location << ".MultiAZCapable=" << std::boolalpha << m_multiAZCapable << "&";
  }
  if(m_readReplicaCapableHasBeenSet)
  {
      oStream << location << ".ReadReplicaCapable=" << std::boolalpha << m_readReplicaCapable << "&";
  }
  if(m_vpcHasBeenSet)
  {
      oStream << location << ".Vpc=" << std::boolalpha << m_vpc << "&";
  }
  if(m_supportsStorageEncryptionHasBeenSet)
  {
      oStream << location << ".SupportsStorageEncryption=" << std::boolalpha << m_supportsStorageEncryption << "&";
  }
  if(m_storageTypeHasBeenSet)
  {
      oStream << location << ".StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }
  if(m_supportsIopsHasBeenSet)
  {
      oStream << location << ".SupportsIops=" << std::boolalpha << m_supportsIops << "&";
  }
  if(m_supportsEnhancedMonitoringHasBeenSet)
  {
      oStream << location << ".SupportsEnhancedMonitoring=" << std::boolalpha << m_supportsEnhancedMonitoring << "&";
  }
  if(m_supportsIAMDatabaseAuthenticationHasBeenSet)
  {
      oStream << location << ".SupportsIAMDatabaseAuthentication=" << std::boolalpha << m_supportsIAMDatabaseAuthentication << "&";
  }
  if(m_supportsPerformanceInsightsHasBeenSet)
  {
      oStream << location << ".SupportsPerformanceInsights=" << std::boolalpha << m_supportsPerformanceInsights << "&";
  }
  if(m_minStorageSizeHasBeenSet)
  {
      oStream << location << ".MinStorageSize=" << m_minStorageSize << "&";
  }
  if(m_maxStorageSizeHasBeenSet)
  {
      oStream << location << ".MaxStorageSize=" << m_maxStorageSize << "&";
  }
  if(m_minIopsPerDbInstanceHasBeenSet)
  {
      oStream << location << ".MinIopsPerDbInstance=" << m_minIopsPerDbInstance << "&";
  }
  if(m_maxIopsPerDbInstanceHasBeenSet)
  {
      oStream << location << ".MaxIopsPerDbInstance=" << m_maxIopsPerDbInstance << "&";
  }
  if(m_minIopsPerGibHasBeenSet)
  {
        oStream << location << ".MinIopsPerGib=" << StringUtils::URLEncode(m_minIopsPerGib) << "&";
  }
  if(m_maxIopsPerGibHasBeenSet)
  {
        oStream << location << ".MaxIopsPerGib=" << StringUtils::URLEncode(m_maxIopsPerGib) << "&";
  }
}

} // namespace Model
} // namespace Neptune
} // namespace Aws
