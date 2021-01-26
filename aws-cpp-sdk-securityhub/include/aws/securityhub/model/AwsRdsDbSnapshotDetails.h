/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbSnapshotDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsRdsDbSnapshotDetails
  {
  public:
    AwsRdsDbSnapshotDetails();
    AwsRdsDbSnapshotDetails(Aws::Utils::Json::JsonView jsonValue);
    AwsRdsDbSnapshotDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Aws::String& GetDbSnapshotIdentifier() const{ return m_dbSnapshotIdentifier; }

    /**
     * <p/>
     */
    inline bool DbSnapshotIdentifierHasBeenSet() const { return m_dbSnapshotIdentifierHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetDbSnapshotIdentifier(const Aws::String& value) { m_dbSnapshotIdentifierHasBeenSet = true; m_dbSnapshotIdentifier = value; }

    /**
     * <p/>
     */
    inline void SetDbSnapshotIdentifier(Aws::String&& value) { m_dbSnapshotIdentifierHasBeenSet = true; m_dbSnapshotIdentifier = std::move(value); }

    /**
     * <p/>
     */
    inline void SetDbSnapshotIdentifier(const char* value) { m_dbSnapshotIdentifierHasBeenSet = true; m_dbSnapshotIdentifier.assign(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithDbSnapshotIdentifier(const Aws::String& value) { SetDbSnapshotIdentifier(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithDbSnapshotIdentifier(Aws::String&& value) { SetDbSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithDbSnapshotIdentifier(const char* value) { SetDbSnapshotIdentifier(value); return *this;}


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
    inline AwsRdsDbSnapshotDetails& WithDbInstanceIdentifier(const Aws::String& value) { SetDbInstanceIdentifier(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithDbInstanceIdentifier(Aws::String&& value) { SetDbInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithDbInstanceIdentifier(const char* value) { SetDbInstanceIdentifier(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetSnapshotCreateTime() const{ return m_snapshotCreateTime; }

    /**
     * <p/>
     */
    inline bool SnapshotCreateTimeHasBeenSet() const { return m_snapshotCreateTimeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetSnapshotCreateTime(const Aws::String& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = value; }

    /**
     * <p/>
     */
    inline void SetSnapshotCreateTime(Aws::String&& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = std::move(value); }

    /**
     * <p/>
     */
    inline void SetSnapshotCreateTime(const char* value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime.assign(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithSnapshotCreateTime(const Aws::String& value) { SetSnapshotCreateTime(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithSnapshotCreateTime(Aws::String&& value) { SetSnapshotCreateTime(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithSnapshotCreateTime(const char* value) { SetSnapshotCreateTime(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p/>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p/>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p/>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithEngine(const char* value) { SetEngine(value); return *this;}


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
    inline AwsRdsDbSnapshotDetails& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p/>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p/>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p/>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithStatus(const char* value) { SetStatus(value); return *this;}


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
    inline AwsRdsDbSnapshotDetails& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p/>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p/>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p/>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p/>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p/>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetInstanceCreateTime() const{ return m_instanceCreateTime; }

    /**
     * <p/>
     */
    inline bool InstanceCreateTimeHasBeenSet() const { return m_instanceCreateTimeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetInstanceCreateTime(const Aws::String& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = value; }

    /**
     * <p/>
     */
    inline void SetInstanceCreateTime(Aws::String&& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = std::move(value); }

    /**
     * <p/>
     */
    inline void SetInstanceCreateTime(const char* value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime.assign(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithInstanceCreateTime(const Aws::String& value) { SetInstanceCreateTime(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithInstanceCreateTime(Aws::String&& value) { SetInstanceCreateTime(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithInstanceCreateTime(const char* value) { SetInstanceCreateTime(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /**
     * <p/>
     */
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p/>
     */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }

    /**
     * <p/>
     */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}


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
    inline AwsRdsDbSnapshotDetails& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


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
    inline AwsRdsDbSnapshotDetails& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetSnapshotType() const{ return m_snapshotType; }

    /**
     * <p/>
     */
    inline bool SnapshotTypeHasBeenSet() const { return m_snapshotTypeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetSnapshotType(const Aws::String& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }

    /**
     * <p/>
     */
    inline void SetSnapshotType(Aws::String&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = std::move(value); }

    /**
     * <p/>
     */
    inline void SetSnapshotType(const char* value) { m_snapshotTypeHasBeenSet = true; m_snapshotType.assign(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithSnapshotType(const Aws::String& value) { SetSnapshotType(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithSnapshotType(Aws::String&& value) { SetSnapshotType(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithSnapshotType(const char* value) { SetSnapshotType(value); return *this;}


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
    inline AwsRdsDbSnapshotDetails& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p/>
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p/>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p/>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}


    /**
     * <p/>
     */
    inline int GetPercentProgress() const{ return m_percentProgress; }

    /**
     * <p/>
     */
    inline bool PercentProgressHasBeenSet() const { return m_percentProgressHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetPercentProgress(int value) { m_percentProgressHasBeenSet = true; m_percentProgress = value; }

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithPercentProgress(int value) { SetPercentProgress(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }

    /**
     * <p/>
     */
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }

    /**
     * <p/>
     */
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::move(value); }

    /**
     * <p/>
     */
    inline void SetSourceRegion(const char* value) { m_sourceRegionHasBeenSet = true; m_sourceRegion.assign(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetSourceDbSnapshotIdentifier() const{ return m_sourceDbSnapshotIdentifier; }

    /**
     * <p/>
     */
    inline bool SourceDbSnapshotIdentifierHasBeenSet() const { return m_sourceDbSnapshotIdentifierHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetSourceDbSnapshotIdentifier(const Aws::String& value) { m_sourceDbSnapshotIdentifierHasBeenSet = true; m_sourceDbSnapshotIdentifier = value; }

    /**
     * <p/>
     */
    inline void SetSourceDbSnapshotIdentifier(Aws::String&& value) { m_sourceDbSnapshotIdentifierHasBeenSet = true; m_sourceDbSnapshotIdentifier = std::move(value); }

    /**
     * <p/>
     */
    inline void SetSourceDbSnapshotIdentifier(const char* value) { m_sourceDbSnapshotIdentifierHasBeenSet = true; m_sourceDbSnapshotIdentifier.assign(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithSourceDbSnapshotIdentifier(const Aws::String& value) { SetSourceDbSnapshotIdentifier(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithSourceDbSnapshotIdentifier(Aws::String&& value) { SetSourceDbSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithSourceDbSnapshotIdentifier(const char* value) { SetSourceDbSnapshotIdentifier(value); return *this;}


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
    inline AwsRdsDbSnapshotDetails& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithStorageType(const char* value) { SetStorageType(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetTdeCredentialArn() const{ return m_tdeCredentialArn; }

    /**
     * <p/>
     */
    inline bool TdeCredentialArnHasBeenSet() const { return m_tdeCredentialArnHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTdeCredentialArn(const Aws::String& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = value; }

    /**
     * <p/>
     */
    inline void SetTdeCredentialArn(Aws::String&& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = std::move(value); }

    /**
     * <p/>
     */
    inline void SetTdeCredentialArn(const char* value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn.assign(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithTdeCredentialArn(const Aws::String& value) { SetTdeCredentialArn(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithTdeCredentialArn(Aws::String&& value) { SetTdeCredentialArn(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithTdeCredentialArn(const char* value) { SetTdeCredentialArn(value); return *this;}


    /**
     * <p/>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p/>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p/>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p/>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * <p/>
     */
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    /**
     * <p/>
     */
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }

    /**
     * <p/>
     */
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithTimezone(const char* value) { SetTimezone(value); return *this;}


    /**
     * <p/>
     */
    inline bool GetIamDatabaseAuthenticationEnabled() const{ return m_iamDatabaseAuthenticationEnabled; }

    /**
     * <p/>
     */
    inline bool IamDatabaseAuthenticationEnabledHasBeenSet() const { return m_iamDatabaseAuthenticationEnabledHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetIamDatabaseAuthenticationEnabled(bool value) { m_iamDatabaseAuthenticationEnabledHasBeenSet = true; m_iamDatabaseAuthenticationEnabled = value; }

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithIamDatabaseAuthenticationEnabled(bool value) { SetIamDatabaseAuthenticationEnabled(value); return *this;}


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
    inline AwsRdsDbSnapshotDetails& WithProcessorFeatures(const Aws::Vector<AwsRdsDbProcessorFeature>& value) { SetProcessorFeatures(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithProcessorFeatures(Aws::Vector<AwsRdsDbProcessorFeature>&& value) { SetProcessorFeatures(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& AddProcessorFeatures(const AwsRdsDbProcessorFeature& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& AddProcessorFeatures(AwsRdsDbProcessorFeature&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(std::move(value)); return *this; }


    /**
     * <p/>
     */
    inline const Aws::String& GetDbiResourceId() const{ return m_dbiResourceId; }

    /**
     * <p/>
     */
    inline bool DbiResourceIdHasBeenSet() const { return m_dbiResourceIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetDbiResourceId(const Aws::String& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = value; }

    /**
     * <p/>
     */
    inline void SetDbiResourceId(Aws::String&& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetDbiResourceId(const char* value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId.assign(value); }

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithDbiResourceId(const Aws::String& value) { SetDbiResourceId(value); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithDbiResourceId(Aws::String&& value) { SetDbiResourceId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AwsRdsDbSnapshotDetails& WithDbiResourceId(const char* value) { SetDbiResourceId(value); return *this;}

  private:

    Aws::String m_dbSnapshotIdentifier;
    bool m_dbSnapshotIdentifierHasBeenSet;

    Aws::String m_dbInstanceIdentifier;
    bool m_dbInstanceIdentifierHasBeenSet;

    Aws::String m_snapshotCreateTime;
    bool m_snapshotCreateTimeHasBeenSet;

    Aws::String m_engine;
    bool m_engineHasBeenSet;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    Aws::String m_instanceCreateTime;
    bool m_instanceCreateTimeHasBeenSet;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet;

    Aws::String m_snapshotType;
    bool m_snapshotTypeHasBeenSet;

    int m_iops;
    bool m_iopsHasBeenSet;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;

    int m_percentProgress;
    bool m_percentProgressHasBeenSet;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet;

    Aws::String m_sourceDbSnapshotIdentifier;
    bool m_sourceDbSnapshotIdentifierHasBeenSet;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet;

    Aws::String m_tdeCredentialArn;
    bool m_tdeCredentialArnHasBeenSet;

    bool m_encrypted;
    bool m_encryptedHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet;

    bool m_iamDatabaseAuthenticationEnabled;
    bool m_iamDatabaseAuthenticationEnabledHasBeenSet;

    Aws::Vector<AwsRdsDbProcessorFeature> m_processorFeatures;
    bool m_processorFeaturesHasBeenSet;

    Aws::String m_dbiResourceId;
    bool m_dbiResourceIdHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
