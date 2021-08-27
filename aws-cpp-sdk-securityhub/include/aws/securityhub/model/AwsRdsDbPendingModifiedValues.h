/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsRdsPendingCloudWatchLogsExports.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsRdsDbProcessorFeature.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbPendingModifiedValues">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsRdsDbPendingModifiedValues
  {
  public:
    AwsRdsDbPendingModifiedValues();
    AwsRdsDbPendingModifiedValues(Aws::Utils::Json::JsonView jsonValue);
    AwsRdsDbPendingModifiedValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Aws::String& GetDbInstanceClass() const{ return m_dbInstanceClass; }

    /**
     * <p/>
     */
    inline bool DbInstanceClassHasBeenSet() const { return m_dbInstanceClassHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetDbInstanceClass(const Aws::String& value) { m_dbInstanceClassHasBeenSet = true; m_dbInstanceClass = value; }

    /**
     * <p/>
     */
    inline void SetDbInstanceClass(Aws::String&& value) { m_dbInstanceClassHasBeenSet = true; m_dbInstanceClass = std::move(value); }

    /**
     * <p/>
     */
    inline void SetDbInstanceClass(const char* value) { m_dbInstanceClassHasBeenSet = true; m_dbInstanceClass.assign(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithDbInstanceClass(const Aws::String& value) { SetDbInstanceClass(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithDbInstanceClass(Aws::String&& value) { SetDbInstanceClass(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithDbInstanceClass(const char* value) { SetDbInstanceClass(value); return *this;}


    /**
     * <p/>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p/>
     */
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p/>
     */
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p/>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }

    /**
     * <p/>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}


    /**
     * <p/>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p/>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p/>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }

    /**
     * <p/>
     */
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}


    /**
     * <p/>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p/>
     */
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p/>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p/>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p/>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }

    /**
     * <p/>
     */
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p/>
     */
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }

    /**
     * <p/>
     */
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}


    /**
     * <p/>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p/>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetDbInstanceIdentifier() const{ return m_dbInstanceIdentifier; }

    /**
     * <p/>
     */
    inline bool DbInstanceIdentifierHasBeenSet() const { return m_dbInstanceIdentifierHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetDbInstanceIdentifier(const Aws::String& value) { m_dbInstanceIdentifierHasBeenSet = true; m_dbInstanceIdentifier = value; }

    /**
     * <p/>
     */
    inline void SetDbInstanceIdentifier(Aws::String&& value) { m_dbInstanceIdentifierHasBeenSet = true; m_dbInstanceIdentifier = std::move(value); }

    /**
     * <p/>
     */
    inline void SetDbInstanceIdentifier(const char* value) { m_dbInstanceIdentifierHasBeenSet = true; m_dbInstanceIdentifier.assign(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithDbInstanceIdentifier(const Aws::String& value) { SetDbInstanceIdentifier(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithDbInstanceIdentifier(Aws::String&& value) { SetDbInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithDbInstanceIdentifier(const char* value) { SetDbInstanceIdentifier(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p/>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p/>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p/>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithStorageType(const char* value) { SetStorageType(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetCaCertificateIdentifier() const{ return m_caCertificateIdentifier; }

    /**
     * <p/>
     */
    inline bool CaCertificateIdentifierHasBeenSet() const { return m_caCertificateIdentifierHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetCaCertificateIdentifier(const Aws::String& value) { m_caCertificateIdentifierHasBeenSet = true; m_caCertificateIdentifier = value; }

    /**
     * <p/>
     */
    inline void SetCaCertificateIdentifier(Aws::String&& value) { m_caCertificateIdentifierHasBeenSet = true; m_caCertificateIdentifier = std::move(value); }

    /**
     * <p/>
     */
    inline void SetCaCertificateIdentifier(const char* value) { m_caCertificateIdentifierHasBeenSet = true; m_caCertificateIdentifier.assign(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithCaCertificateIdentifier(const Aws::String& value) { SetCaCertificateIdentifier(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithCaCertificateIdentifier(Aws::String&& value) { SetCaCertificateIdentifier(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithCaCertificateIdentifier(const char* value) { SetCaCertificateIdentifier(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetDbSubnetGroupName() const{ return m_dbSubnetGroupName; }

    /**
     * <p/>
     */
    inline bool DbSubnetGroupNameHasBeenSet() const { return m_dbSubnetGroupNameHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetDbSubnetGroupName(const Aws::String& value) { m_dbSubnetGroupNameHasBeenSet = true; m_dbSubnetGroupName = value; }

    /**
     * <p/>
     */
    inline void SetDbSubnetGroupName(Aws::String&& value) { m_dbSubnetGroupNameHasBeenSet = true; m_dbSubnetGroupName = std::move(value); }

    /**
     * <p/>
     */
    inline void SetDbSubnetGroupName(const char* value) { m_dbSubnetGroupNameHasBeenSet = true; m_dbSubnetGroupName.assign(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithDbSubnetGroupName(const Aws::String& value) { SetDbSubnetGroupName(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithDbSubnetGroupName(Aws::String&& value) { SetDbSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithDbSubnetGroupName(const char* value) { SetDbSubnetGroupName(value); return *this;}


    /**
     * <p/>
     */
    inline const AwsRdsPendingCloudWatchLogsExports& GetPendingCloudWatchLogsExports() const{ return m_pendingCloudWatchLogsExports; }

    /**
     * <p/>
     */
    inline bool PendingCloudWatchLogsExportsHasBeenSet() const { return m_pendingCloudWatchLogsExportsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetPendingCloudWatchLogsExports(const AwsRdsPendingCloudWatchLogsExports& value) { m_pendingCloudWatchLogsExportsHasBeenSet = true; m_pendingCloudWatchLogsExports = value; }

    /**
     * <p/>
     */
    inline void SetPendingCloudWatchLogsExports(AwsRdsPendingCloudWatchLogsExports&& value) { m_pendingCloudWatchLogsExportsHasBeenSet = true; m_pendingCloudWatchLogsExports = std::move(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithPendingCloudWatchLogsExports(const AwsRdsPendingCloudWatchLogsExports& value) { SetPendingCloudWatchLogsExports(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithPendingCloudWatchLogsExports(AwsRdsPendingCloudWatchLogsExports&& value) { SetPendingCloudWatchLogsExports(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<AwsRdsDbProcessorFeature>& GetProcessorFeatures() const{ return m_processorFeatures; }

    /**
     * <p/>
     */
    inline bool ProcessorFeaturesHasBeenSet() const { return m_processorFeaturesHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetProcessorFeatures(const Aws::Vector<AwsRdsDbProcessorFeature>& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = value; }

    /**
     * <p/>
     */
    inline void SetProcessorFeatures(Aws::Vector<AwsRdsDbProcessorFeature>&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = std::move(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithProcessorFeatures(const Aws::Vector<AwsRdsDbProcessorFeature>& value) { SetProcessorFeatures(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& WithProcessorFeatures(Aws::Vector<AwsRdsDbProcessorFeature>&& value) { SetProcessorFeatures(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& AddProcessorFeatures(const AwsRdsDbProcessorFeature& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline AwsRdsDbPendingModifiedValues& AddProcessorFeatures(AwsRdsDbProcessorFeature&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dbInstanceClass;
    bool m_dbInstanceClassHasBeenSet;

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

    Aws::String m_dbInstanceIdentifier;
    bool m_dbInstanceIdentifierHasBeenSet;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet;

    Aws::String m_caCertificateIdentifier;
    bool m_caCertificateIdentifierHasBeenSet;

    Aws::String m_dbSubnetGroupName;
    bool m_dbSubnetGroupNameHasBeenSet;

    AwsRdsPendingCloudWatchLogsExports m_pendingCloudWatchLogsExports;
    bool m_pendingCloudWatchLogsExportsHasBeenSet;

    Aws::Vector<AwsRdsDbProcessorFeature> m_processorFeatures;
    bool m_processorFeaturesHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
