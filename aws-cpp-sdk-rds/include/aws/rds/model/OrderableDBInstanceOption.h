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

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/AvailabilityZone.h>
#include <aws/rds/model/AvailableProcessorFeature.h>
#include <utility>

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
   * <p>Contains a list of available options for a DB instance.</p> <p> This data
   * type is used as a response element in the
   * <code>DescribeOrderableDBInstanceOptions</code> action. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/OrderableDBInstanceOption">AWS
   * API Reference</a></p>
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
     * <p>The engine type of a DB instance.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The engine type of a DB instance.</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The engine type of a DB instance.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The engine type of a DB instance.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The engine type of a DB instance.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The engine type of a DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The engine type of a DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The engine type of a DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The engine version of a DB instance.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The engine version of a DB instance.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The engine version of a DB instance.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The engine version of a DB instance.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The engine version of a DB instance.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The engine version of a DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The engine version of a DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The engine version of a DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The DB instance class for a DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p>The DB instance class for a DB instance.</p>
     */
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }

    /**
     * <p>The DB instance class for a DB instance.</p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>The DB instance class for a DB instance.</p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }

    /**
     * <p>The DB instance class for a DB instance.</p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p>The DB instance class for a DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The DB instance class for a DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}

    /**
     * <p>The DB instance class for a DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}


    /**
     * <p>The license model for a DB instance.</p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }

    /**
     * <p>The license model for a DB instance.</p>
     */
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }

    /**
     * <p>The license model for a DB instance.</p>
     */
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p>The license model for a DB instance.</p>
     */
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }

    /**
     * <p>The license model for a DB instance.</p>
     */
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }

    /**
     * <p>The license model for a DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /**
     * <p>The license model for a DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}

    /**
     * <p>The license model for a DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}


    /**
     * <p>A list of Availability Zones for a DB instance.</p>
     */
    inline const Aws::Vector<AvailabilityZone>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>A list of Availability Zones for a DB instance.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>A list of Availability Zones for a DB instance.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<AvailabilityZone>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>A list of Availability Zones for a DB instance.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<AvailabilityZone>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>A list of Availability Zones for a DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithAvailabilityZones(const Aws::Vector<AvailabilityZone>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>A list of Availability Zones for a DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithAvailabilityZones(Aws::Vector<AvailabilityZone>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>A list of Availability Zones for a DB instance.</p>
     */
    inline OrderableDBInstanceOption& AddAvailabilityZones(const AvailabilityZone& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>A list of Availability Zones for a DB instance.</p>
     */
    inline OrderableDBInstanceOption& AddAvailabilityZones(AvailabilityZone&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether a DB instance is Multi-AZ capable.</p>
     */
    inline bool GetMultiAZCapable() const{ return m_multiAZCapable; }

    /**
     * <p>Indicates whether a DB instance is Multi-AZ capable.</p>
     */
    inline bool MultiAZCapableHasBeenSet() const { return m_multiAZCapableHasBeenSet; }

    /**
     * <p>Indicates whether a DB instance is Multi-AZ capable.</p>
     */
    inline void SetMultiAZCapable(bool value) { m_multiAZCapableHasBeenSet = true; m_multiAZCapable = value; }

    /**
     * <p>Indicates whether a DB instance is Multi-AZ capable.</p>
     */
    inline OrderableDBInstanceOption& WithMultiAZCapable(bool value) { SetMultiAZCapable(value); return *this;}


    /**
     * <p>Indicates whether a DB instance can have a Read Replica.</p>
     */
    inline bool GetReadReplicaCapable() const{ return m_readReplicaCapable; }

    /**
     * <p>Indicates whether a DB instance can have a Read Replica.</p>
     */
    inline bool ReadReplicaCapableHasBeenSet() const { return m_readReplicaCapableHasBeenSet; }

    /**
     * <p>Indicates whether a DB instance can have a Read Replica.</p>
     */
    inline void SetReadReplicaCapable(bool value) { m_readReplicaCapableHasBeenSet = true; m_readReplicaCapable = value; }

    /**
     * <p>Indicates whether a DB instance can have a Read Replica.</p>
     */
    inline OrderableDBInstanceOption& WithReadReplicaCapable(bool value) { SetReadReplicaCapable(value); return *this;}


    /**
     * <p>Indicates whether a DB instance is in a VPC.</p>
     */
    inline bool GetVpc() const{ return m_vpc; }

    /**
     * <p>Indicates whether a DB instance is in a VPC.</p>
     */
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }

    /**
     * <p>Indicates whether a DB instance is in a VPC.</p>
     */
    inline void SetVpc(bool value) { m_vpcHasBeenSet = true; m_vpc = value; }

    /**
     * <p>Indicates whether a DB instance is in a VPC.</p>
     */
    inline OrderableDBInstanceOption& WithVpc(bool value) { SetVpc(value); return *this;}


    /**
     * <p>Indicates whether a DB instance supports encrypted storage.</p>
     */
    inline bool GetSupportsStorageEncryption() const{ return m_supportsStorageEncryption; }

    /**
     * <p>Indicates whether a DB instance supports encrypted storage.</p>
     */
    inline bool SupportsStorageEncryptionHasBeenSet() const { return m_supportsStorageEncryptionHasBeenSet; }

    /**
     * <p>Indicates whether a DB instance supports encrypted storage.</p>
     */
    inline void SetSupportsStorageEncryption(bool value) { m_supportsStorageEncryptionHasBeenSet = true; m_supportsStorageEncryption = value; }

    /**
     * <p>Indicates whether a DB instance supports encrypted storage.</p>
     */
    inline OrderableDBInstanceOption& WithSupportsStorageEncryption(bool value) { SetSupportsStorageEncryption(value); return *this;}


    /**
     * <p>Indicates the storage type for a DB instance.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Indicates the storage type for a DB instance.</p>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>Indicates the storage type for a DB instance.</p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Indicates the storage type for a DB instance.</p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>Indicates the storage type for a DB instance.</p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>Indicates the storage type for a DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>Indicates the storage type for a DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>Indicates the storage type for a DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithStorageType(const char* value) { SetStorageType(value); return *this;}


    /**
     * <p>Indicates whether a DB instance supports provisioned IOPS.</p>
     */
    inline bool GetSupportsIops() const{ return m_supportsIops; }

    /**
     * <p>Indicates whether a DB instance supports provisioned IOPS.</p>
     */
    inline bool SupportsIopsHasBeenSet() const { return m_supportsIopsHasBeenSet; }

    /**
     * <p>Indicates whether a DB instance supports provisioned IOPS.</p>
     */
    inline void SetSupportsIops(bool value) { m_supportsIopsHasBeenSet = true; m_supportsIops = value; }

    /**
     * <p>Indicates whether a DB instance supports provisioned IOPS.</p>
     */
    inline OrderableDBInstanceOption& WithSupportsIops(bool value) { SetSupportsIops(value); return *this;}


    /**
     * <p>Indicates whether a DB instance supports Enhanced Monitoring at intervals
     * from 1 to 60 seconds.</p>
     */
    inline bool GetSupportsEnhancedMonitoring() const{ return m_supportsEnhancedMonitoring; }

    /**
     * <p>Indicates whether a DB instance supports Enhanced Monitoring at intervals
     * from 1 to 60 seconds.</p>
     */
    inline bool SupportsEnhancedMonitoringHasBeenSet() const { return m_supportsEnhancedMonitoringHasBeenSet; }

    /**
     * <p>Indicates whether a DB instance supports Enhanced Monitoring at intervals
     * from 1 to 60 seconds.</p>
     */
    inline void SetSupportsEnhancedMonitoring(bool value) { m_supportsEnhancedMonitoringHasBeenSet = true; m_supportsEnhancedMonitoring = value; }

    /**
     * <p>Indicates whether a DB instance supports Enhanced Monitoring at intervals
     * from 1 to 60 seconds.</p>
     */
    inline OrderableDBInstanceOption& WithSupportsEnhancedMonitoring(bool value) { SetSupportsEnhancedMonitoring(value); return *this;}


    /**
     * <p>Indicates whether a DB instance supports IAM database authentication.</p>
     */
    inline bool GetSupportsIAMDatabaseAuthentication() const{ return m_supportsIAMDatabaseAuthentication; }

    /**
     * <p>Indicates whether a DB instance supports IAM database authentication.</p>
     */
    inline bool SupportsIAMDatabaseAuthenticationHasBeenSet() const { return m_supportsIAMDatabaseAuthenticationHasBeenSet; }

    /**
     * <p>Indicates whether a DB instance supports IAM database authentication.</p>
     */
    inline void SetSupportsIAMDatabaseAuthentication(bool value) { m_supportsIAMDatabaseAuthenticationHasBeenSet = true; m_supportsIAMDatabaseAuthentication = value; }

    /**
     * <p>Indicates whether a DB instance supports IAM database authentication.</p>
     */
    inline OrderableDBInstanceOption& WithSupportsIAMDatabaseAuthentication(bool value) { SetSupportsIAMDatabaseAuthentication(value); return *this;}


    /**
     * <p>True if a DB instance supports Performance Insights, otherwise false.</p>
     */
    inline bool GetSupportsPerformanceInsights() const{ return m_supportsPerformanceInsights; }

    /**
     * <p>True if a DB instance supports Performance Insights, otherwise false.</p>
     */
    inline bool SupportsPerformanceInsightsHasBeenSet() const { return m_supportsPerformanceInsightsHasBeenSet; }

    /**
     * <p>True if a DB instance supports Performance Insights, otherwise false.</p>
     */
    inline void SetSupportsPerformanceInsights(bool value) { m_supportsPerformanceInsightsHasBeenSet = true; m_supportsPerformanceInsights = value; }

    /**
     * <p>True if a DB instance supports Performance Insights, otherwise false.</p>
     */
    inline OrderableDBInstanceOption& WithSupportsPerformanceInsights(bool value) { SetSupportsPerformanceInsights(value); return *this;}


    /**
     * <p>Minimum storage size for a DB instance.</p>
     */
    inline int GetMinStorageSize() const{ return m_minStorageSize; }

    /**
     * <p>Minimum storage size for a DB instance.</p>
     */
    inline bool MinStorageSizeHasBeenSet() const { return m_minStorageSizeHasBeenSet; }

    /**
     * <p>Minimum storage size for a DB instance.</p>
     */
    inline void SetMinStorageSize(int value) { m_minStorageSizeHasBeenSet = true; m_minStorageSize = value; }

    /**
     * <p>Minimum storage size for a DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithMinStorageSize(int value) { SetMinStorageSize(value); return *this;}


    /**
     * <p>Maximum storage size for a DB instance.</p>
     */
    inline int GetMaxStorageSize() const{ return m_maxStorageSize; }

    /**
     * <p>Maximum storage size for a DB instance.</p>
     */
    inline bool MaxStorageSizeHasBeenSet() const { return m_maxStorageSizeHasBeenSet; }

    /**
     * <p>Maximum storage size for a DB instance.</p>
     */
    inline void SetMaxStorageSize(int value) { m_maxStorageSizeHasBeenSet = true; m_maxStorageSize = value; }

    /**
     * <p>Maximum storage size for a DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithMaxStorageSize(int value) { SetMaxStorageSize(value); return *this;}


    /**
     * <p>Minimum total provisioned IOPS for a DB instance.</p>
     */
    inline int GetMinIopsPerDbInstance() const{ return m_minIopsPerDbInstance; }

    /**
     * <p>Minimum total provisioned IOPS for a DB instance.</p>
     */
    inline bool MinIopsPerDbInstanceHasBeenSet() const { return m_minIopsPerDbInstanceHasBeenSet; }

    /**
     * <p>Minimum total provisioned IOPS for a DB instance.</p>
     */
    inline void SetMinIopsPerDbInstance(int value) { m_minIopsPerDbInstanceHasBeenSet = true; m_minIopsPerDbInstance = value; }

    /**
     * <p>Minimum total provisioned IOPS for a DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithMinIopsPerDbInstance(int value) { SetMinIopsPerDbInstance(value); return *this;}


    /**
     * <p>Maximum total provisioned IOPS for a DB instance.</p>
     */
    inline int GetMaxIopsPerDbInstance() const{ return m_maxIopsPerDbInstance; }

    /**
     * <p>Maximum total provisioned IOPS for a DB instance.</p>
     */
    inline bool MaxIopsPerDbInstanceHasBeenSet() const { return m_maxIopsPerDbInstanceHasBeenSet; }

    /**
     * <p>Maximum total provisioned IOPS for a DB instance.</p>
     */
    inline void SetMaxIopsPerDbInstance(int value) { m_maxIopsPerDbInstanceHasBeenSet = true; m_maxIopsPerDbInstance = value; }

    /**
     * <p>Maximum total provisioned IOPS for a DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithMaxIopsPerDbInstance(int value) { SetMaxIopsPerDbInstance(value); return *this;}


    /**
     * <p>Minimum provisioned IOPS per GiB for a DB instance.</p>
     */
    inline double GetMinIopsPerGib() const{ return m_minIopsPerGib; }

    /**
     * <p>Minimum provisioned IOPS per GiB for a DB instance.</p>
     */
    inline bool MinIopsPerGibHasBeenSet() const { return m_minIopsPerGibHasBeenSet; }

    /**
     * <p>Minimum provisioned IOPS per GiB for a DB instance.</p>
     */
    inline void SetMinIopsPerGib(double value) { m_minIopsPerGibHasBeenSet = true; m_minIopsPerGib = value; }

    /**
     * <p>Minimum provisioned IOPS per GiB for a DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithMinIopsPerGib(double value) { SetMinIopsPerGib(value); return *this;}


    /**
     * <p>Maximum provisioned IOPS per GiB for a DB instance.</p>
     */
    inline double GetMaxIopsPerGib() const{ return m_maxIopsPerGib; }

    /**
     * <p>Maximum provisioned IOPS per GiB for a DB instance.</p>
     */
    inline bool MaxIopsPerGibHasBeenSet() const { return m_maxIopsPerGibHasBeenSet; }

    /**
     * <p>Maximum provisioned IOPS per GiB for a DB instance.</p>
     */
    inline void SetMaxIopsPerGib(double value) { m_maxIopsPerGibHasBeenSet = true; m_maxIopsPerGib = value; }

    /**
     * <p>Maximum provisioned IOPS per GiB for a DB instance.</p>
     */
    inline OrderableDBInstanceOption& WithMaxIopsPerGib(double value) { SetMaxIopsPerGib(value); return *this;}


    /**
     * <p>A list of the available processor features for the DB instance class of a DB
     * instance.</p>
     */
    inline const Aws::Vector<AvailableProcessorFeature>& GetAvailableProcessorFeatures() const{ return m_availableProcessorFeatures; }

    /**
     * <p>A list of the available processor features for the DB instance class of a DB
     * instance.</p>
     */
    inline bool AvailableProcessorFeaturesHasBeenSet() const { return m_availableProcessorFeaturesHasBeenSet; }

    /**
     * <p>A list of the available processor features for the DB instance class of a DB
     * instance.</p>
     */
    inline void SetAvailableProcessorFeatures(const Aws::Vector<AvailableProcessorFeature>& value) { m_availableProcessorFeaturesHasBeenSet = true; m_availableProcessorFeatures = value; }

    /**
     * <p>A list of the available processor features for the DB instance class of a DB
     * instance.</p>
     */
    inline void SetAvailableProcessorFeatures(Aws::Vector<AvailableProcessorFeature>&& value) { m_availableProcessorFeaturesHasBeenSet = true; m_availableProcessorFeatures = std::move(value); }

    /**
     * <p>A list of the available processor features for the DB instance class of a DB
     * instance.</p>
     */
    inline OrderableDBInstanceOption& WithAvailableProcessorFeatures(const Aws::Vector<AvailableProcessorFeature>& value) { SetAvailableProcessorFeatures(value); return *this;}

    /**
     * <p>A list of the available processor features for the DB instance class of a DB
     * instance.</p>
     */
    inline OrderableDBInstanceOption& WithAvailableProcessorFeatures(Aws::Vector<AvailableProcessorFeature>&& value) { SetAvailableProcessorFeatures(std::move(value)); return *this;}

    /**
     * <p>A list of the available processor features for the DB instance class of a DB
     * instance.</p>
     */
    inline OrderableDBInstanceOption& AddAvailableProcessorFeatures(const AvailableProcessorFeature& value) { m_availableProcessorFeaturesHasBeenSet = true; m_availableProcessorFeatures.push_back(value); return *this; }

    /**
     * <p>A list of the available processor features for the DB instance class of a DB
     * instance.</p>
     */
    inline OrderableDBInstanceOption& AddAvailableProcessorFeatures(AvailableProcessorFeature&& value) { m_availableProcessorFeaturesHasBeenSet = true; m_availableProcessorFeatures.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedEngineModes() const{ return m_supportedEngineModes; }

    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline bool SupportedEngineModesHasBeenSet() const { return m_supportedEngineModesHasBeenSet; }

    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline void SetSupportedEngineModes(const Aws::Vector<Aws::String>& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes = value; }

    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline void SetSupportedEngineModes(Aws::Vector<Aws::String>&& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes = std::move(value); }

    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline OrderableDBInstanceOption& WithSupportedEngineModes(const Aws::Vector<Aws::String>& value) { SetSupportedEngineModes(value); return *this;}

    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline OrderableDBInstanceOption& WithSupportedEngineModes(Aws::Vector<Aws::String>&& value) { SetSupportedEngineModes(std::move(value)); return *this;}

    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline OrderableDBInstanceOption& AddSupportedEngineModes(const Aws::String& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes.push_back(value); return *this; }

    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline OrderableDBInstanceOption& AddSupportedEngineModes(Aws::String&& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline OrderableDBInstanceOption& AddSupportedEngineModes(const char* value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes.push_back(value); return *this; }


    /**
     * <p>Whether or not Amazon RDS can automatically scale storage for DB instances
     * that use the specified instance class.</p>
     */
    inline bool GetSupportsStorageAutoscaling() const{ return m_supportsStorageAutoscaling; }

    /**
     * <p>Whether or not Amazon RDS can automatically scale storage for DB instances
     * that use the specified instance class.</p>
     */
    inline bool SupportsStorageAutoscalingHasBeenSet() const { return m_supportsStorageAutoscalingHasBeenSet; }

    /**
     * <p>Whether or not Amazon RDS can automatically scale storage for DB instances
     * that use the specified instance class.</p>
     */
    inline void SetSupportsStorageAutoscaling(bool value) { m_supportsStorageAutoscalingHasBeenSet = true; m_supportsStorageAutoscaling = value; }

    /**
     * <p>Whether or not Amazon RDS can automatically scale storage for DB instances
     * that use the specified instance class.</p>
     */
    inline OrderableDBInstanceOption& WithSupportsStorageAutoscaling(bool value) { SetSupportsStorageAutoscaling(value); return *this;}

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

    bool m_supportsIAMDatabaseAuthentication;
    bool m_supportsIAMDatabaseAuthenticationHasBeenSet;

    bool m_supportsPerformanceInsights;
    bool m_supportsPerformanceInsightsHasBeenSet;

    int m_minStorageSize;
    bool m_minStorageSizeHasBeenSet;

    int m_maxStorageSize;
    bool m_maxStorageSizeHasBeenSet;

    int m_minIopsPerDbInstance;
    bool m_minIopsPerDbInstanceHasBeenSet;

    int m_maxIopsPerDbInstance;
    bool m_maxIopsPerDbInstanceHasBeenSet;

    double m_minIopsPerGib;
    bool m_minIopsPerGibHasBeenSet;

    double m_maxIopsPerGib;
    bool m_maxIopsPerGibHasBeenSet;

    Aws::Vector<AvailableProcessorFeature> m_availableProcessorFeatures;
    bool m_availableProcessorFeaturesHasBeenSet;

    Aws::Vector<Aws::String> m_supportedEngineModes;
    bool m_supportedEngineModesHasBeenSet;

    bool m_supportsStorageAutoscaling;
    bool m_supportsStorageAutoscalingHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
