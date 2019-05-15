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
#include <aws/rds/model/PendingCloudwatchLogsExports.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ProcessorFeature.h>
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
   * <p> This data type is used as a response element in the
   * <code>ModifyDBInstance</code> action. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/PendingModifiedValues">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API PendingModifiedValues
  {
  public:
    PendingModifiedValues();
    PendingModifiedValues(const Aws::Utils::Xml::XmlNode& xmlNode);
    PendingModifiedValues& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p> Contains the new <code>DBInstanceClass</code> for the DB instance that will
     * be applied or is currently being applied. </p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p> Contains the new <code>DBInstanceClass</code> for the DB instance that will
     * be applied or is currently being applied. </p>
     */
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }

    /**
     * <p> Contains the new <code>DBInstanceClass</code> for the DB instance that will
     * be applied or is currently being applied. </p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p> Contains the new <code>DBInstanceClass</code> for the DB instance that will
     * be applied or is currently being applied. </p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }

    /**
     * <p> Contains the new <code>DBInstanceClass</code> for the DB instance that will
     * be applied or is currently being applied. </p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p> Contains the new <code>DBInstanceClass</code> for the DB instance that will
     * be applied or is currently being applied. </p>
     */
    inline PendingModifiedValues& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p> Contains the new <code>DBInstanceClass</code> for the DB instance that will
     * be applied or is currently being applied. </p>
     */
    inline PendingModifiedValues& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}

    /**
     * <p> Contains the new <code>DBInstanceClass</code> for the DB instance that will
     * be applied or is currently being applied. </p>
     */
    inline PendingModifiedValues& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}


    /**
     * <p> Contains the new <code>AllocatedStorage</code> size for the DB instance that
     * will be applied or is currently being applied. </p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p> Contains the new <code>AllocatedStorage</code> size for the DB instance that
     * will be applied or is currently being applied. </p>
     */
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }

    /**
     * <p> Contains the new <code>AllocatedStorage</code> size for the DB instance that
     * will be applied or is currently being applied. </p>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p> Contains the new <code>AllocatedStorage</code> size for the DB instance that
     * will be applied or is currently being applied. </p>
     */
    inline PendingModifiedValues& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}


    /**
     * <p>Contains the pending or currently-in-progress change of the master
     * credentials for the DB instance.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p>Contains the pending or currently-in-progress change of the master
     * credentials for the DB instance.</p>
     */
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }

    /**
     * <p>Contains the pending or currently-in-progress change of the master
     * credentials for the DB instance.</p>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p>Contains the pending or currently-in-progress change of the master
     * credentials for the DB instance.</p>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }

    /**
     * <p>Contains the pending or currently-in-progress change of the master
     * credentials for the DB instance.</p>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p>Contains the pending or currently-in-progress change of the master
     * credentials for the DB instance.</p>
     */
    inline PendingModifiedValues& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>Contains the pending or currently-in-progress change of the master
     * credentials for the DB instance.</p>
     */
    inline PendingModifiedValues& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}

    /**
     * <p>Contains the pending or currently-in-progress change of the master
     * credentials for the DB instance.</p>
     */
    inline PendingModifiedValues& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}


    /**
     * <p>Specifies the pending port for the DB instance.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>Specifies the pending port for the DB instance.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>Specifies the pending port for the DB instance.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>Specifies the pending port for the DB instance.</p>
     */
    inline PendingModifiedValues& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>Specifies the pending number of days for which automated backups are
     * retained.</p>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }

    /**
     * <p>Specifies the pending number of days for which automated backups are
     * retained.</p>
     */
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }

    /**
     * <p>Specifies the pending number of days for which automated backups are
     * retained.</p>
     */
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /**
     * <p>Specifies the pending number of days for which automated backups are
     * retained.</p>
     */
    inline PendingModifiedValues& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}


    /**
     * <p>Indicates that the Single-AZ DB instance is to change to a Multi-AZ
     * deployment.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p>Indicates that the Single-AZ DB instance is to change to a Multi-AZ
     * deployment.</p>
     */
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }

    /**
     * <p>Indicates that the Single-AZ DB instance is to change to a Multi-AZ
     * deployment.</p>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p>Indicates that the Single-AZ DB instance is to change to a Multi-AZ
     * deployment.</p>
     */
    inline PendingModifiedValues& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}


    /**
     * <p>Indicates the database engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline PendingModifiedValues& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline PendingModifiedValues& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline PendingModifiedValues& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The license model for the DB instance.</p> <p>Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }

    /**
     * <p>The license model for the DB instance.</p> <p>Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }

    /**
     * <p>The license model for the DB instance.</p> <p>Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p>The license model for the DB instance.</p> <p>Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }

    /**
     * <p>The license model for the DB instance.</p> <p>Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }

    /**
     * <p>The license model for the DB instance.</p> <p>Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline PendingModifiedValues& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /**
     * <p>The license model for the DB instance.</p> <p>Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline PendingModifiedValues& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}

    /**
     * <p>The license model for the DB instance.</p> <p>Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline PendingModifiedValues& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}


    /**
     * <p>Specifies the new Provisioned IOPS value for the DB instance that will be
     * applied or is currently being applied.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>Specifies the new Provisioned IOPS value for the DB instance that will be
     * applied or is currently being applied.</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>Specifies the new Provisioned IOPS value for the DB instance that will be
     * applied or is currently being applied.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>Specifies the new Provisioned IOPS value for the DB instance that will be
     * applied or is currently being applied.</p>
     */
    inline PendingModifiedValues& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p> Contains the new <code>DBInstanceIdentifier</code> for the DB instance that
     * will be applied or is currently being applied. </p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p> Contains the new <code>DBInstanceIdentifier</code> for the DB instance that
     * will be applied or is currently being applied. </p>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p> Contains the new <code>DBInstanceIdentifier</code> for the DB instance that
     * will be applied or is currently being applied. </p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p> Contains the new <code>DBInstanceIdentifier</code> for the DB instance that
     * will be applied or is currently being applied. </p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p> Contains the new <code>DBInstanceIdentifier</code> for the DB instance that
     * will be applied or is currently being applied. </p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p> Contains the new <code>DBInstanceIdentifier</code> for the DB instance that
     * will be applied or is currently being applied. </p>
     */
    inline PendingModifiedValues& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p> Contains the new <code>DBInstanceIdentifier</code> for the DB instance that
     * will be applied or is currently being applied. </p>
     */
    inline PendingModifiedValues& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p> Contains the new <code>DBInstanceIdentifier</code> for the DB instance that
     * will be applied or is currently being applied. </p>
     */
    inline PendingModifiedValues& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p>
     */
    inline PendingModifiedValues& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p>
     */
    inline PendingModifiedValues& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p>
     */
    inline PendingModifiedValues& WithStorageType(const char* value) { SetStorageType(value); return *this;}


    /**
     * <p>Specifies the identifier of the CA certificate for the DB instance.</p>
     */
    inline const Aws::String& GetCACertificateIdentifier() const{ return m_cACertificateIdentifier; }

    /**
     * <p>Specifies the identifier of the CA certificate for the DB instance.</p>
     */
    inline bool CACertificateIdentifierHasBeenSet() const { return m_cACertificateIdentifierHasBeenSet; }

    /**
     * <p>Specifies the identifier of the CA certificate for the DB instance.</p>
     */
    inline void SetCACertificateIdentifier(const Aws::String& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = value; }

    /**
     * <p>Specifies the identifier of the CA certificate for the DB instance.</p>
     */
    inline void SetCACertificateIdentifier(Aws::String&& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = std::move(value); }

    /**
     * <p>Specifies the identifier of the CA certificate for the DB instance.</p>
     */
    inline void SetCACertificateIdentifier(const char* value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier.assign(value); }

    /**
     * <p>Specifies the identifier of the CA certificate for the DB instance.</p>
     */
    inline PendingModifiedValues& WithCACertificateIdentifier(const Aws::String& value) { SetCACertificateIdentifier(value); return *this;}

    /**
     * <p>Specifies the identifier of the CA certificate for the DB instance.</p>
     */
    inline PendingModifiedValues& WithCACertificateIdentifier(Aws::String&& value) { SetCACertificateIdentifier(std::move(value)); return *this;}

    /**
     * <p>Specifies the identifier of the CA certificate for the DB instance.</p>
     */
    inline PendingModifiedValues& WithCACertificateIdentifier(const char* value) { SetCACertificateIdentifier(value); return *this;}


    /**
     * <p>The new DB subnet group for the DB instance. </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>The new DB subnet group for the DB instance. </p>
     */
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }

    /**
     * <p>The new DB subnet group for the DB instance. </p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>The new DB subnet group for the DB instance. </p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }

    /**
     * <p>The new DB subnet group for the DB instance. </p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>The new DB subnet group for the DB instance. </p>
     */
    inline PendingModifiedValues& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>The new DB subnet group for the DB instance. </p>
     */
    inline PendingModifiedValues& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The new DB subnet group for the DB instance. </p>
     */
    inline PendingModifiedValues& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}


    
    inline const PendingCloudwatchLogsExports& GetPendingCloudwatchLogsExports() const{ return m_pendingCloudwatchLogsExports; }

    
    inline bool PendingCloudwatchLogsExportsHasBeenSet() const { return m_pendingCloudwatchLogsExportsHasBeenSet; }

    
    inline void SetPendingCloudwatchLogsExports(const PendingCloudwatchLogsExports& value) { m_pendingCloudwatchLogsExportsHasBeenSet = true; m_pendingCloudwatchLogsExports = value; }

    
    inline void SetPendingCloudwatchLogsExports(PendingCloudwatchLogsExports&& value) { m_pendingCloudwatchLogsExportsHasBeenSet = true; m_pendingCloudwatchLogsExports = std::move(value); }

    
    inline PendingModifiedValues& WithPendingCloudwatchLogsExports(const PendingCloudwatchLogsExports& value) { SetPendingCloudwatchLogsExports(value); return *this;}

    
    inline PendingModifiedValues& WithPendingCloudwatchLogsExports(PendingCloudwatchLogsExports&& value) { SetPendingCloudwatchLogsExports(std::move(value)); return *this;}


    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline const Aws::Vector<ProcessorFeature>& GetProcessorFeatures() const{ return m_processorFeatures; }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline bool ProcessorFeaturesHasBeenSet() const { return m_processorFeaturesHasBeenSet; }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline void SetProcessorFeatures(const Aws::Vector<ProcessorFeature>& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = value; }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline void SetProcessorFeatures(Aws::Vector<ProcessorFeature>&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = std::move(value); }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline PendingModifiedValues& WithProcessorFeatures(const Aws::Vector<ProcessorFeature>& value) { SetProcessorFeatures(value); return *this;}

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline PendingModifiedValues& WithProcessorFeatures(Aws::Vector<ProcessorFeature>&& value) { SetProcessorFeatures(std::move(value)); return *this;}

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline PendingModifiedValues& AddProcessorFeatures(const ProcessorFeature& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(value); return *this; }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline PendingModifiedValues& AddProcessorFeatures(ProcessorFeature&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet;

    int m_iops;
    bool m_iopsHasBeenSet;

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet;

    Aws::String m_cACertificateIdentifier;
    bool m_cACertificateIdentifierHasBeenSet;

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet;

    PendingCloudwatchLogsExports m_pendingCloudwatchLogsExports;
    bool m_pendingCloudwatchLogsExportsHasBeenSet;

    Aws::Vector<ProcessorFeature> m_processorFeatures;
    bool m_processorFeaturesHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
