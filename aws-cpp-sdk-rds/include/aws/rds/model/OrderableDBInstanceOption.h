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
#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/AvailabilityZone.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>Contains a list of available options for a DB instance</p> <p> This data type
   * is used as a response element in the <a>DescribeOrderableDBInstanceOptions</a>
   * action. </p>
   */
  class AWS_RDS_API OrderableDBInstanceOption
  {
  public:
    OrderableDBInstanceOption();
    OrderableDBInstanceOption(const Aws::Utils::Xml::XmlNode& xmlNode);
    OrderableDBInstanceOption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The engine type of the orderable DB instance.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The engine type of the orderable DB instance.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The engine type of the orderable DB instance.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The engine type of the orderable DB instance.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The engine type of the orderable DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The engine type of the orderable DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithEngine(Aws::String&& value) { SetEngine(value); return *this;}

    /**
     * <p>The engine type of the orderable DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithEngine(const char* value) { SetEngine(value); return *this;}

    /**
     * <p>The engine version of the orderable DB instance.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The engine version of the orderable DB instance.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The engine version of the orderable DB instance.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The engine version of the orderable DB instance.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The engine version of the orderable DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The engine version of the orderable DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithEngineVersion(Aws::String&& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The engine version of the orderable DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The DB instance class for the orderable DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p>The DB instance class for the orderable DB instance.</p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>The DB instance class for the orderable DB instance.</p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>The DB instance class for the orderable DB instance.</p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p>The DB instance class for the orderable DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The DB instance class for the orderable DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The DB instance class for the orderable DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The license model for the orderable DB instance.</p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }

    /**
     * <p>The license model for the orderable DB instance.</p>
     */
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p>The license model for the orderable DB instance.</p>
     */
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p>The license model for the orderable DB instance.</p>
     */
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }

    /**
     * <p>The license model for the orderable DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /**
     * <p>The license model for the orderable DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithLicenseModel(Aws::String&& value) { SetLicenseModel(value); return *this;}

    /**
     * <p>The license model for the orderable DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}

    /**
     * <p>A list of Availability Zones for the orderable DB instance.</p>
     */
    inline const Aws::Vector<AvailabilityZone>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>A list of Availability Zones for the orderable DB instance.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<AvailabilityZone>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>A list of Availability Zones for the orderable DB instance.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<AvailabilityZone>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>A list of Availability Zones for the orderable DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithAvailabilityZones(const Aws::Vector<AvailabilityZone>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>A list of Availability Zones for the orderable DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithAvailabilityZones(Aws::Vector<AvailabilityZone>&& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>A list of Availability Zones for the orderable DB instance.</p>
     */
    inline OrderableDBInstanceOption& AddAvailabilityZones(const AvailabilityZone& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>A list of Availability Zones for the orderable DB instance.</p>
     */
    inline OrderableDBInstanceOption& AddAvailabilityZones(AvailabilityZone&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>Indicates whether this orderable DB instance is multi-AZ capable.</p>
     */
    inline bool GetMultiAZCapable() const{ return m_multiAZCapable; }

    /**
     * <p>Indicates whether this orderable DB instance is multi-AZ capable.</p>
     */
    inline void SetMultiAZCapable(bool value) { m_multiAZCapableHasBeenSet = true; m_multiAZCapable = value; }

    /**
     * <p>Indicates whether this orderable DB instance is multi-AZ capable.</p>
     */
    inline OrderableDBInstanceOption& WithMultiAZCapable(bool value) { SetMultiAZCapable(value); return *this;}

    /**
     * <p>Indicates whether this orderable DB instance can have a Read Replica.</p>
     */
    inline bool GetReadReplicaCapable() const{ return m_readReplicaCapable; }

    /**
     * <p>Indicates whether this orderable DB instance can have a Read Replica.</p>
     */
    inline void SetReadReplicaCapable(bool value) { m_readReplicaCapableHasBeenSet = true; m_readReplicaCapable = value; }

    /**
     * <p>Indicates whether this orderable DB instance can have a Read Replica.</p>
     */
    inline OrderableDBInstanceOption& WithReadReplicaCapable(bool value) { SetReadReplicaCapable(value); return *this;}

    /**
     * <p>Indicates whether this is a VPC orderable DB instance.</p>
     */
    inline bool GetVpc() const{ return m_vpc; }

    /**
     * <p>Indicates whether this is a VPC orderable DB instance.</p>
     */
    inline void SetVpc(bool value) { m_vpcHasBeenSet = true; m_vpc = value; }

    /**
     * <p>Indicates whether this is a VPC orderable DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithVpc(bool value) { SetVpc(value); return *this;}

    /**
     * <p>Indicates whether this orderable DB instance supports encrypted storage.</p>
     */
    inline bool GetSupportsStorageEncryption() const{ return m_supportsStorageEncryption; }

    /**
     * <p>Indicates whether this orderable DB instance supports encrypted storage.</p>
     */
    inline void SetSupportsStorageEncryption(bool value) { m_supportsStorageEncryptionHasBeenSet = true; m_supportsStorageEncryption = value; }

    /**
     * <p>Indicates whether this orderable DB instance supports encrypted storage.</p>
     */
    inline OrderableDBInstanceOption& WithSupportsStorageEncryption(bool value) { SetSupportsStorageEncryption(value); return *this;}

    /**
     * <p>Indicates the storage type for this orderable DB instance.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Indicates the storage type for this orderable DB instance.</p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Indicates the storage type for this orderable DB instance.</p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Indicates the storage type for this orderable DB instance.</p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>Indicates the storage type for this orderable DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>Indicates the storage type for this orderable DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithStorageType(Aws::String&& value) { SetStorageType(value); return *this;}

    /**
     * <p>Indicates the storage type for this orderable DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithStorageType(const char* value) { SetStorageType(value); return *this;}

    /**
     * <p>Indicates whether this orderable DB instance supports provisioned IOPS.</p>
     */
    inline bool GetSupportsIops() const{ return m_supportsIops; }

    /**
     * <p>Indicates whether this orderable DB instance supports provisioned IOPS.</p>
     */
    inline void SetSupportsIops(bool value) { m_supportsIopsHasBeenSet = true; m_supportsIops = value; }

    /**
     * <p>Indicates whether this orderable DB instance supports provisioned IOPS.</p>
     */
    inline OrderableDBInstanceOption& WithSupportsIops(bool value) { SetSupportsIops(value); return *this;}

    /**
     * <p>Indicates whether the DB instance supports enhanced monitoring at intervals
     * from 1 to 60 seconds.</p>
     */
    inline bool GetSupportsEnhancedMonitoring() const{ return m_supportsEnhancedMonitoring; }

    /**
     * <p>Indicates whether the DB instance supports enhanced monitoring at intervals
     * from 1 to 60 seconds.</p>
     */
    inline void SetSupportsEnhancedMonitoring(bool value) { m_supportsEnhancedMonitoringHasBeenSet = true; m_supportsEnhancedMonitoring = value; }

    /**
     * <p>Indicates whether the DB instance supports enhanced monitoring at intervals
     * from 1 to 60 seconds.</p>
     */
    inline OrderableDBInstanceOption& WithSupportsEnhancedMonitoring(bool value) { SetSupportsEnhancedMonitoring(value); return *this;}

  private:
    Aws::String m_engine;
    bool m_engineHasBeenSet;
    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;
    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet;
    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet;
    Aws::Vector<AvailabilityZone> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet;
    bool m_multiAZCapable;
    bool m_multiAZCapableHasBeenSet;
    bool m_readReplicaCapable;
    bool m_readReplicaCapableHasBeenSet;
    bool m_vpc;
    bool m_vpcHasBeenSet;
    bool m_supportsStorageEncryption;
    bool m_supportsStorageEncryptionHasBeenSet;
    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet;
    bool m_supportsIops;
    bool m_supportsIopsHasBeenSet;
    bool m_supportsEnhancedMonitoring;
    bool m_supportsEnhancedMonitoringHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
