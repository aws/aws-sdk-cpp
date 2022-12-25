/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/PendingCloudwatchLogsExports.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/AutomationMode.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>This data type is used as a response element in the
   * <code>ModifyDBInstance</code> operation and contains changes that will be
   * applied during the next maintenance window.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/PendingModifiedValues">AWS
   * API Reference</a></p>
   */
  class PendingModifiedValues
  {
  public:
    AWS_RDS_API PendingModifiedValues();
    AWS_RDS_API PendingModifiedValues(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API PendingModifiedValues& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the compute and memory capacity class for the DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p>The name of the compute and memory capacity class for the DB instance.</p>
     */
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }

    /**
     * <p>The name of the compute and memory capacity class for the DB instance.</p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>The name of the compute and memory capacity class for the DB instance.</p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }

    /**
     * <p>The name of the compute and memory capacity class for the DB instance.</p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p>The name of the compute and memory capacity class for the DB instance.</p>
     */
    inline PendingModifiedValues& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The name of the compute and memory capacity class for the DB instance.</p>
     */
    inline PendingModifiedValues& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}

    /**
     * <p>The name of the compute and memory capacity class for the DB instance.</p>
     */
    inline PendingModifiedValues& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}


    /**
     * <p>The allocated storage size for the DB instance specified in gibibytes
     * (GiB).</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p>The allocated storage size for the DB instance specified in gibibytes
     * (GiB).</p>
     */
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }

    /**
     * <p>The allocated storage size for the DB instance specified in gibibytes
     * (GiB).</p>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p>The allocated storage size for the DB instance specified in gibibytes
     * (GiB).</p>
     */
    inline PendingModifiedValues& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}


    /**
     * <p>The master credentials for the DB instance.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p>The master credentials for the DB instance.</p>
     */
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }

    /**
     * <p>The master credentials for the DB instance.</p>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p>The master credentials for the DB instance.</p>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }

    /**
     * <p>The master credentials for the DB instance.</p>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p>The master credentials for the DB instance.</p>
     */
    inline PendingModifiedValues& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>The master credentials for the DB instance.</p>
     */
    inline PendingModifiedValues& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}

    /**
     * <p>The master credentials for the DB instance.</p>
     */
    inline PendingModifiedValues& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}


    /**
     * <p>The port for the DB instance.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port for the DB instance.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port for the DB instance.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port for the DB instance.</p>
     */
    inline PendingModifiedValues& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The number of days for which automated backups are retained.</p>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }

    /**
     * <p>The number of days for which automated backups are retained.</p>
     */
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days for which automated backups are retained.</p>
     */
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /**
     * <p>The number of days for which automated backups are retained.</p>
     */
    inline PendingModifiedValues& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}


    /**
     * <p>A value that indicates that the Single-AZ DB instance will change to a
     * Multi-AZ deployment.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p>A value that indicates that the Single-AZ DB instance will change to a
     * Multi-AZ deployment.</p>
     */
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }

    /**
     * <p>A value that indicates that the Single-AZ DB instance will change to a
     * Multi-AZ deployment.</p>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p>A value that indicates that the Single-AZ DB instance will change to a
     * Multi-AZ deployment.</p>
     */
    inline PendingModifiedValues& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}


    /**
     * <p>The database engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The database engine version.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The database engine version.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The database engine version.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The database engine version.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The database engine version.</p>
     */
    inline PendingModifiedValues& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The database engine version.</p>
     */
    inline PendingModifiedValues& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The database engine version.</p>
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
     * <p>The Provisioned IOPS value for the DB instance.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The Provisioned IOPS value for the DB instance.</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The Provisioned IOPS value for the DB instance.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The Provisioned IOPS value for the DB instance.</p>
     */
    inline PendingModifiedValues& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>The database identifier for the DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The database identifier for the DB instance.</p>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The database identifier for the DB instance.</p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The database identifier for the DB instance.</p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>The database identifier for the DB instance.</p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The database identifier for the DB instance.</p>
     */
    inline PendingModifiedValues& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The database identifier for the DB instance.</p>
     */
    inline PendingModifiedValues& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The database identifier for the DB instance.</p>
     */
    inline PendingModifiedValues& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>The storage type of the DB instance.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>The storage type of the DB instance.</p>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>The storage type of the DB instance.</p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>The storage type of the DB instance.</p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>The storage type of the DB instance.</p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>The storage type of the DB instance.</p>
     */
    inline PendingModifiedValues& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>The storage type of the DB instance.</p>
     */
    inline PendingModifiedValues& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>The storage type of the DB instance.</p>
     */
    inline PendingModifiedValues& WithStorageType(const char* value) { SetStorageType(value); return *this;}


    /**
     * <p>The identifier of the CA certificate for the DB instance.</p>
     */
    inline const Aws::String& GetCACertificateIdentifier() const{ return m_cACertificateIdentifier; }

    /**
     * <p>The identifier of the CA certificate for the DB instance.</p>
     */
    inline bool CACertificateIdentifierHasBeenSet() const { return m_cACertificateIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the CA certificate for the DB instance.</p>
     */
    inline void SetCACertificateIdentifier(const Aws::String& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = value; }

    /**
     * <p>The identifier of the CA certificate for the DB instance.</p>
     */
    inline void SetCACertificateIdentifier(Aws::String&& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = std::move(value); }

    /**
     * <p>The identifier of the CA certificate for the DB instance.</p>
     */
    inline void SetCACertificateIdentifier(const char* value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier.assign(value); }

    /**
     * <p>The identifier of the CA certificate for the DB instance.</p>
     */
    inline PendingModifiedValues& WithCACertificateIdentifier(const Aws::String& value) { SetCACertificateIdentifier(value); return *this;}

    /**
     * <p>The identifier of the CA certificate for the DB instance.</p>
     */
    inline PendingModifiedValues& WithCACertificateIdentifier(Aws::String&& value) { SetCACertificateIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the CA certificate for the DB instance.</p>
     */
    inline PendingModifiedValues& WithCACertificateIdentifier(const char* value) { SetCACertificateIdentifier(value); return *this;}


    /**
     * <p>The DB subnet group for the DB instance.</p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>The DB subnet group for the DB instance.</p>
     */
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }

    /**
     * <p>The DB subnet group for the DB instance.</p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>The DB subnet group for the DB instance.</p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }

    /**
     * <p>The DB subnet group for the DB instance.</p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>The DB subnet group for the DB instance.</p>
     */
    inline PendingModifiedValues& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>The DB subnet group for the DB instance.</p>
     */
    inline PendingModifiedValues& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The DB subnet group for the DB instance.</p>
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


    /**
     * <p>Whether mapping of Amazon Web Services Identity and Access Management (IAM)
     * accounts to database accounts is enabled.</p>
     */
    inline bool GetIAMDatabaseAuthenticationEnabled() const{ return m_iAMDatabaseAuthenticationEnabled; }

    /**
     * <p>Whether mapping of Amazon Web Services Identity and Access Management (IAM)
     * accounts to database accounts is enabled.</p>
     */
    inline bool IAMDatabaseAuthenticationEnabledHasBeenSet() const { return m_iAMDatabaseAuthenticationEnabledHasBeenSet; }

    /**
     * <p>Whether mapping of Amazon Web Services Identity and Access Management (IAM)
     * accounts to database accounts is enabled.</p>
     */
    inline void SetIAMDatabaseAuthenticationEnabled(bool value) { m_iAMDatabaseAuthenticationEnabledHasBeenSet = true; m_iAMDatabaseAuthenticationEnabled = value; }

    /**
     * <p>Whether mapping of Amazon Web Services Identity and Access Management (IAM)
     * accounts to database accounts is enabled.</p>
     */
    inline PendingModifiedValues& WithIAMDatabaseAuthenticationEnabled(bool value) { SetIAMDatabaseAuthenticationEnabled(value); return *this;}


    /**
     * <p>The automation mode of the RDS Custom DB instance: <code>full</code> or
     * <code>all-paused</code>. If <code>full</code>, the DB instance automates
     * monitoring and instance recovery. If <code>all-paused</code>, the instance
     * pauses automation for the duration set by
     * <code>--resume-full-automation-mode-minutes</code>.</p>
     */
    inline const AutomationMode& GetAutomationMode() const{ return m_automationMode; }

    /**
     * <p>The automation mode of the RDS Custom DB instance: <code>full</code> or
     * <code>all-paused</code>. If <code>full</code>, the DB instance automates
     * monitoring and instance recovery. If <code>all-paused</code>, the instance
     * pauses automation for the duration set by
     * <code>--resume-full-automation-mode-minutes</code>.</p>
     */
    inline bool AutomationModeHasBeenSet() const { return m_automationModeHasBeenSet; }

    /**
     * <p>The automation mode of the RDS Custom DB instance: <code>full</code> or
     * <code>all-paused</code>. If <code>full</code>, the DB instance automates
     * monitoring and instance recovery. If <code>all-paused</code>, the instance
     * pauses automation for the duration set by
     * <code>--resume-full-automation-mode-minutes</code>.</p>
     */
    inline void SetAutomationMode(const AutomationMode& value) { m_automationModeHasBeenSet = true; m_automationMode = value; }

    /**
     * <p>The automation mode of the RDS Custom DB instance: <code>full</code> or
     * <code>all-paused</code>. If <code>full</code>, the DB instance automates
     * monitoring and instance recovery. If <code>all-paused</code>, the instance
     * pauses automation for the duration set by
     * <code>--resume-full-automation-mode-minutes</code>.</p>
     */
    inline void SetAutomationMode(AutomationMode&& value) { m_automationModeHasBeenSet = true; m_automationMode = std::move(value); }

    /**
     * <p>The automation mode of the RDS Custom DB instance: <code>full</code> or
     * <code>all-paused</code>. If <code>full</code>, the DB instance automates
     * monitoring and instance recovery. If <code>all-paused</code>, the instance
     * pauses automation for the duration set by
     * <code>--resume-full-automation-mode-minutes</code>.</p>
     */
    inline PendingModifiedValues& WithAutomationMode(const AutomationMode& value) { SetAutomationMode(value); return *this;}

    /**
     * <p>The automation mode of the RDS Custom DB instance: <code>full</code> or
     * <code>all-paused</code>. If <code>full</code>, the DB instance automates
     * monitoring and instance recovery. If <code>all-paused</code>, the instance
     * pauses automation for the duration set by
     * <code>--resume-full-automation-mode-minutes</code>.</p>
     */
    inline PendingModifiedValues& WithAutomationMode(AutomationMode&& value) { SetAutomationMode(std::move(value)); return *this;}


    /**
     * <p>The number of minutes to pause the automation. When the time period ends, RDS
     * Custom resumes full automation. The minimum value is 60 (default). The maximum
     * value is 1,440.</p>
     */
    inline const Aws::Utils::DateTime& GetResumeFullAutomationModeTime() const{ return m_resumeFullAutomationModeTime; }

    /**
     * <p>The number of minutes to pause the automation. When the time period ends, RDS
     * Custom resumes full automation. The minimum value is 60 (default). The maximum
     * value is 1,440.</p>
     */
    inline bool ResumeFullAutomationModeTimeHasBeenSet() const { return m_resumeFullAutomationModeTimeHasBeenSet; }

    /**
     * <p>The number of minutes to pause the automation. When the time period ends, RDS
     * Custom resumes full automation. The minimum value is 60 (default). The maximum
     * value is 1,440.</p>
     */
    inline void SetResumeFullAutomationModeTime(const Aws::Utils::DateTime& value) { m_resumeFullAutomationModeTimeHasBeenSet = true; m_resumeFullAutomationModeTime = value; }

    /**
     * <p>The number of minutes to pause the automation. When the time period ends, RDS
     * Custom resumes full automation. The minimum value is 60 (default). The maximum
     * value is 1,440.</p>
     */
    inline void SetResumeFullAutomationModeTime(Aws::Utils::DateTime&& value) { m_resumeFullAutomationModeTimeHasBeenSet = true; m_resumeFullAutomationModeTime = std::move(value); }

    /**
     * <p>The number of minutes to pause the automation. When the time period ends, RDS
     * Custom resumes full automation. The minimum value is 60 (default). The maximum
     * value is 1,440.</p>
     */
    inline PendingModifiedValues& WithResumeFullAutomationModeTime(const Aws::Utils::DateTime& value) { SetResumeFullAutomationModeTime(value); return *this;}

    /**
     * <p>The number of minutes to pause the automation. When the time period ends, RDS
     * Custom resumes full automation. The minimum value is 60 (default). The maximum
     * value is 1,440.</p>
     */
    inline PendingModifiedValues& WithResumeFullAutomationModeTime(Aws::Utils::DateTime&& value) { SetResumeFullAutomationModeTime(std::move(value)); return *this;}


    /**
     * <p>The storage throughput of the DB instance.</p>
     */
    inline int GetStorageThroughput() const{ return m_storageThroughput; }

    /**
     * <p>The storage throughput of the DB instance.</p>
     */
    inline bool StorageThroughputHasBeenSet() const { return m_storageThroughputHasBeenSet; }

    /**
     * <p>The storage throughput of the DB instance.</p>
     */
    inline void SetStorageThroughput(int value) { m_storageThroughputHasBeenSet = true; m_storageThroughput = value; }

    /**
     * <p>The storage throughput of the DB instance.</p>
     */
    inline PendingModifiedValues& WithStorageThroughput(int value) { SetStorageThroughput(value); return *this;}

  private:

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet = false;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet = false;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    Aws::String m_cACertificateIdentifier;
    bool m_cACertificateIdentifierHasBeenSet = false;

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet = false;

    PendingCloudwatchLogsExports m_pendingCloudwatchLogsExports;
    bool m_pendingCloudwatchLogsExportsHasBeenSet = false;

    Aws::Vector<ProcessorFeature> m_processorFeatures;
    bool m_processorFeaturesHasBeenSet = false;

    bool m_iAMDatabaseAuthenticationEnabled;
    bool m_iAMDatabaseAuthenticationEnabledHasBeenSet = false;

    AutomationMode m_automationMode;
    bool m_automationModeHasBeenSet = false;

    Aws::Utils::DateTime m_resumeFullAutomationModeTime;
    bool m_resumeFullAutomationModeTimeHasBeenSet = false;

    int m_storageThroughput;
    bool m_storageThroughputHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
