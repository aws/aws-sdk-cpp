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
#include <aws/core/utils/DateTime.h>

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
   * <p>Contains the result of a successful invocation of the following actions:</p>
   * <ul> <li> <p> <a>CreateDBSnapshot</a> </p> </li> <li> <p>
   * <a>DeleteDBSnapshot</a> </p> </li> </ul> <p>This data type is used as a response
   * element in the <a>DescribeDBSnapshots</a> action.</p>
   */
  class AWS_RDS_API DBSnapshot
  {
  public:
    DBSnapshot();
    DBSnapshot(const Aws::Utils::Xml::XmlNode& xmlNode);
    DBSnapshot& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>Specifies the identifier for the DB snapshot.</p>
     */
    inline const Aws::String& GetDBSnapshotIdentifier() const{ return m_dBSnapshotIdentifier; }

    /**
     * <p>Specifies the identifier for the DB snapshot.</p>
     */
    inline void SetDBSnapshotIdentifier(const Aws::String& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = value; }

    /**
     * <p>Specifies the identifier for the DB snapshot.</p>
     */
    inline void SetDBSnapshotIdentifier(Aws::String&& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = value; }

    /**
     * <p>Specifies the identifier for the DB snapshot.</p>
     */
    inline void SetDBSnapshotIdentifier(const char* value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier.assign(value); }

    /**
     * <p>Specifies the identifier for the DB snapshot.</p>
     */
    inline DBSnapshot& WithDBSnapshotIdentifier(const Aws::String& value) { SetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>Specifies the identifier for the DB snapshot.</p>
     */
    inline DBSnapshot& WithDBSnapshotIdentifier(Aws::String&& value) { SetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>Specifies the identifier for the DB snapshot.</p>
     */
    inline DBSnapshot& WithDBSnapshotIdentifier(const char* value) { SetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>Specifies the DB instance identifier of the DB instance this DB snapshot was
     * created from.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>Specifies the DB instance identifier of the DB instance this DB snapshot was
     * created from.</p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>Specifies the DB instance identifier of the DB instance this DB snapshot was
     * created from.</p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>Specifies the DB instance identifier of the DB instance this DB snapshot was
     * created from.</p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>Specifies the DB instance identifier of the DB instance this DB snapshot was
     * created from.</p>
     */
    inline DBSnapshot& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>Specifies the DB instance identifier of the DB instance this DB snapshot was
     * created from.</p>
     */
    inline DBSnapshot& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>Specifies the DB instance identifier of the DB instance this DB snapshot was
     * created from.</p>
     */
    inline DBSnapshot& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>Provides the time when the snapshot was taken, in Universal Coordinated Time
     * (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotCreateTime() const{ return m_snapshotCreateTime; }

    /**
     * <p>Provides the time when the snapshot was taken, in Universal Coordinated Time
     * (UTC).</p>
     */
    inline void SetSnapshotCreateTime(const Aws::Utils::DateTime& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = value; }

    /**
     * <p>Provides the time when the snapshot was taken, in Universal Coordinated Time
     * (UTC).</p>
     */
    inline void SetSnapshotCreateTime(Aws::Utils::DateTime&& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = value; }

    /**
     * <p>Provides the time when the snapshot was taken, in Universal Coordinated Time
     * (UTC).</p>
     */
    inline DBSnapshot& WithSnapshotCreateTime(const Aws::Utils::DateTime& value) { SetSnapshotCreateTime(value); return *this;}

    /**
     * <p>Provides the time when the snapshot was taken, in Universal Coordinated Time
     * (UTC).</p>
     */
    inline DBSnapshot& WithSnapshotCreateTime(Aws::Utils::DateTime&& value) { SetSnapshotCreateTime(value); return *this;}

    /**
     * <p>Specifies the name of the database engine.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>Specifies the name of the database engine.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>Specifies the name of the database engine.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>Specifies the name of the database engine.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>Specifies the name of the database engine.</p>
     */
    inline DBSnapshot& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>Specifies the name of the database engine.</p>
     */
    inline DBSnapshot& WithEngine(Aws::String&& value) { SetEngine(value); return *this;}

    /**
     * <p>Specifies the name of the database engine.</p>
     */
    inline DBSnapshot& WithEngine(const char* value) { SetEngine(value); return *this;}

    /**
     * <p>Specifies the allocated storage size in gigabytes (GB).</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p>Specifies the allocated storage size in gigabytes (GB).</p>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p>Specifies the allocated storage size in gigabytes (GB).</p>
     */
    inline DBSnapshot& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}

    /**
     * <p>Specifies the status of this DB snapshot.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies the status of this DB snapshot.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies the status of this DB snapshot.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies the status of this DB snapshot.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Specifies the status of this DB snapshot.</p>
     */
    inline DBSnapshot& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies the status of this DB snapshot.</p>
     */
    inline DBSnapshot& WithStatus(Aws::String&& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies the status of this DB snapshot.</p>
     */
    inline DBSnapshot& WithStatus(const char* value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies the port that the database engine was listening on at the time of
     * the snapshot.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>Specifies the port that the database engine was listening on at the time of
     * the snapshot.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>Specifies the port that the database engine was listening on at the time of
     * the snapshot.</p>
     */
    inline DBSnapshot& WithPort(int value) { SetPort(value); return *this;}

    /**
     * <p>Specifies the name of the Availability Zone the DB instance was located in at
     * the time of the DB snapshot.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>Specifies the name of the Availability Zone the DB instance was located in at
     * the time of the DB snapshot.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>Specifies the name of the Availability Zone the DB instance was located in at
     * the time of the DB snapshot.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>Specifies the name of the Availability Zone the DB instance was located in at
     * the time of the DB snapshot.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>Specifies the name of the Availability Zone the DB instance was located in at
     * the time of the DB snapshot.</p>
     */
    inline DBSnapshot& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>Specifies the name of the Availability Zone the DB instance was located in at
     * the time of the DB snapshot.</p>
     */
    inline DBSnapshot& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>Specifies the name of the Availability Zone the DB instance was located in at
     * the time of the DB snapshot.</p>
     */
    inline DBSnapshot& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>Provides the VPC ID associated with the DB snapshot.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>Provides the VPC ID associated with the DB snapshot.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>Provides the VPC ID associated with the DB snapshot.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>Provides the VPC ID associated with the DB snapshot.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>Provides the VPC ID associated with the DB snapshot.</p>
     */
    inline DBSnapshot& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>Provides the VPC ID associated with the DB snapshot.</p>
     */
    inline DBSnapshot& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /**
     * <p>Provides the VPC ID associated with the DB snapshot.</p>
     */
    inline DBSnapshot& WithVpcId(const char* value) { SetVpcId(value); return *this;}

    /**
     * <p>Specifies the time when the snapshot was taken, in Universal Coordinated Time
     * (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetInstanceCreateTime() const{ return m_instanceCreateTime; }

    /**
     * <p>Specifies the time when the snapshot was taken, in Universal Coordinated Time
     * (UTC).</p>
     */
    inline void SetInstanceCreateTime(const Aws::Utils::DateTime& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = value; }

    /**
     * <p>Specifies the time when the snapshot was taken, in Universal Coordinated Time
     * (UTC).</p>
     */
    inline void SetInstanceCreateTime(Aws::Utils::DateTime&& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = value; }

    /**
     * <p>Specifies the time when the snapshot was taken, in Universal Coordinated Time
     * (UTC).</p>
     */
    inline DBSnapshot& WithInstanceCreateTime(const Aws::Utils::DateTime& value) { SetInstanceCreateTime(value); return *this;}

    /**
     * <p>Specifies the time when the snapshot was taken, in Universal Coordinated Time
     * (UTC).</p>
     */
    inline DBSnapshot& WithInstanceCreateTime(Aws::Utils::DateTime&& value) { SetInstanceCreateTime(value); return *this;}

    /**
     * <p>Provides the master username for the DB snapshot.</p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /**
     * <p>Provides the master username for the DB snapshot.</p>
     */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>Provides the master username for the DB snapshot.</p>
     */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>Provides the master username for the DB snapshot.</p>
     */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /**
     * <p>Provides the master username for the DB snapshot.</p>
     */
    inline DBSnapshot& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>Provides the master username for the DB snapshot.</p>
     */
    inline DBSnapshot& WithMasterUsername(Aws::String&& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>Provides the master username for the DB snapshot.</p>
     */
    inline DBSnapshot& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}

    /**
     * <p>Specifies the version of the database engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>Specifies the version of the database engine.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>Specifies the version of the database engine.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>Specifies the version of the database engine.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>Specifies the version of the database engine.</p>
     */
    inline DBSnapshot& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>Specifies the version of the database engine.</p>
     */
    inline DBSnapshot& WithEngineVersion(Aws::String&& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>Specifies the version of the database engine.</p>
     */
    inline DBSnapshot& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}

    /**
     * <p>License model information for the restored DB instance.</p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }

    /**
     * <p>License model information for the restored DB instance.</p>
     */
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p>License model information for the restored DB instance.</p>
     */
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p>License model information for the restored DB instance.</p>
     */
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }

    /**
     * <p>License model information for the restored DB instance.</p>
     */
    inline DBSnapshot& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /**
     * <p>License model information for the restored DB instance.</p>
     */
    inline DBSnapshot& WithLicenseModel(Aws::String&& value) { SetLicenseModel(value); return *this;}

    /**
     * <p>License model information for the restored DB instance.</p>
     */
    inline DBSnapshot& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}

    /**
     * <p>Provides the type of the DB snapshot.</p>
     */
    inline const Aws::String& GetSnapshotType() const{ return m_snapshotType; }

    /**
     * <p>Provides the type of the DB snapshot.</p>
     */
    inline void SetSnapshotType(const Aws::String& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }

    /**
     * <p>Provides the type of the DB snapshot.</p>
     */
    inline void SetSnapshotType(Aws::String&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }

    /**
     * <p>Provides the type of the DB snapshot.</p>
     */
    inline void SetSnapshotType(const char* value) { m_snapshotTypeHasBeenSet = true; m_snapshotType.assign(value); }

    /**
     * <p>Provides the type of the DB snapshot.</p>
     */
    inline DBSnapshot& WithSnapshotType(const Aws::String& value) { SetSnapshotType(value); return *this;}

    /**
     * <p>Provides the type of the DB snapshot.</p>
     */
    inline DBSnapshot& WithSnapshotType(Aws::String&& value) { SetSnapshotType(value); return *this;}

    /**
     * <p>Provides the type of the DB snapshot.</p>
     */
    inline DBSnapshot& WithSnapshotType(const char* value) { SetSnapshotType(value); return *this;}

    /**
     * <p>Specifies the Provisioned IOPS (I/O operations per second) value of the DB
     * instance at the time of the snapshot.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>Specifies the Provisioned IOPS (I/O operations per second) value of the DB
     * instance at the time of the snapshot.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>Specifies the Provisioned IOPS (I/O operations per second) value of the DB
     * instance at the time of the snapshot.</p>
     */
    inline DBSnapshot& WithIops(int value) { SetIops(value); return *this;}

    /**
     * <p>Provides the option group name for the DB snapshot.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>Provides the option group name for the DB snapshot.</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>Provides the option group name for the DB snapshot.</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>Provides the option group name for the DB snapshot.</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>Provides the option group name for the DB snapshot.</p>
     */
    inline DBSnapshot& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>Provides the option group name for the DB snapshot.</p>
     */
    inline DBSnapshot& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>Provides the option group name for the DB snapshot.</p>
     */
    inline DBSnapshot& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The percentage of the estimated data that has been transferred.</p>
     */
    inline int GetPercentProgress() const{ return m_percentProgress; }

    /**
     * <p>The percentage of the estimated data that has been transferred.</p>
     */
    inline void SetPercentProgress(int value) { m_percentProgressHasBeenSet = true; m_percentProgress = value; }

    /**
     * <p>The percentage of the estimated data that has been transferred.</p>
     */
    inline DBSnapshot& WithPercentProgress(int value) { SetPercentProgress(value); return *this;}

    /**
     * <p>The region that the DB snapshot was created in or copied from.</p>
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }

    /**
     * <p>The region that the DB snapshot was created in or copied from.</p>
     */
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }

    /**
     * <p>The region that the DB snapshot was created in or copied from.</p>
     */
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }

    /**
     * <p>The region that the DB snapshot was created in or copied from.</p>
     */
    inline void SetSourceRegion(const char* value) { m_sourceRegionHasBeenSet = true; m_sourceRegion.assign(value); }

    /**
     * <p>The region that the DB snapshot was created in or copied from.</p>
     */
    inline DBSnapshot& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}

    /**
     * <p>The region that the DB snapshot was created in or copied from.</p>
     */
    inline DBSnapshot& WithSourceRegion(Aws::String&& value) { SetSourceRegion(value); return *this;}

    /**
     * <p>The region that the DB snapshot was created in or copied from.</p>
     */
    inline DBSnapshot& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}

    /**
     * <p>The DB snapshot Arn that the DB snapshot was copied from. It only has value
     * in case of cross customer or cross region copy.</p>
     */
    inline const Aws::String& GetSourceDBSnapshotIdentifier() const{ return m_sourceDBSnapshotIdentifier; }

    /**
     * <p>The DB snapshot Arn that the DB snapshot was copied from. It only has value
     * in case of cross customer or cross region copy.</p>
     */
    inline void SetSourceDBSnapshotIdentifier(const Aws::String& value) { m_sourceDBSnapshotIdentifierHasBeenSet = true; m_sourceDBSnapshotIdentifier = value; }

    /**
     * <p>The DB snapshot Arn that the DB snapshot was copied from. It only has value
     * in case of cross customer or cross region copy.</p>
     */
    inline void SetSourceDBSnapshotIdentifier(Aws::String&& value) { m_sourceDBSnapshotIdentifierHasBeenSet = true; m_sourceDBSnapshotIdentifier = value; }

    /**
     * <p>The DB snapshot Arn that the DB snapshot was copied from. It only has value
     * in case of cross customer or cross region copy.</p>
     */
    inline void SetSourceDBSnapshotIdentifier(const char* value) { m_sourceDBSnapshotIdentifierHasBeenSet = true; m_sourceDBSnapshotIdentifier.assign(value); }

    /**
     * <p>The DB snapshot Arn that the DB snapshot was copied from. It only has value
     * in case of cross customer or cross region copy.</p>
     */
    inline DBSnapshot& WithSourceDBSnapshotIdentifier(const Aws::String& value) { SetSourceDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The DB snapshot Arn that the DB snapshot was copied from. It only has value
     * in case of cross customer or cross region copy.</p>
     */
    inline DBSnapshot& WithSourceDBSnapshotIdentifier(Aws::String&& value) { SetSourceDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The DB snapshot Arn that the DB snapshot was copied from. It only has value
     * in case of cross customer or cross region copy.</p>
     */
    inline DBSnapshot& WithSourceDBSnapshotIdentifier(const char* value) { SetSourceDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>Specifies the storage type associated with DB snapshot.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Specifies the storage type associated with DB snapshot.</p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Specifies the storage type associated with DB snapshot.</p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Specifies the storage type associated with DB snapshot.</p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>Specifies the storage type associated with DB snapshot.</p>
     */
    inline DBSnapshot& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>Specifies the storage type associated with DB snapshot.</p>
     */
    inline DBSnapshot& WithStorageType(Aws::String&& value) { SetStorageType(value); return *this;}

    /**
     * <p>Specifies the storage type associated with DB snapshot.</p>
     */
    inline DBSnapshot& WithStorageType(const char* value) { SetStorageType(value); return *this;}

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline const Aws::String& GetTdeCredentialArn() const{ return m_tdeCredentialArn; }

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline void SetTdeCredentialArn(const Aws::String& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = value; }

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline void SetTdeCredentialArn(Aws::String&& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = value; }

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline void SetTdeCredentialArn(const char* value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn.assign(value); }

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline DBSnapshot& WithTdeCredentialArn(const Aws::String& value) { SetTdeCredentialArn(value); return *this;}

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline DBSnapshot& WithTdeCredentialArn(Aws::String&& value) { SetTdeCredentialArn(value); return *this;}

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline DBSnapshot& WithTdeCredentialArn(const char* value) { SetTdeCredentialArn(value); return *this;}

    /**
     * <p>Specifies whether the DB snapshot is encrypted.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Specifies whether the DB snapshot is encrypted.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Specifies whether the DB snapshot is encrypted.</p>
     */
    inline DBSnapshot& WithEncrypted(bool value) { SetEncrypted(value); return *this;}

    /**
     * <p> If <code>Encrypted</code> is true, the KMS key identifier for the encrypted
     * DB snapshot. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p> If <code>Encrypted</code> is true, the KMS key identifier for the encrypted
     * DB snapshot. </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p> If <code>Encrypted</code> is true, the KMS key identifier for the encrypted
     * DB snapshot. </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p> If <code>Encrypted</code> is true, the KMS key identifier for the encrypted
     * DB snapshot. </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p> If <code>Encrypted</code> is true, the KMS key identifier for the encrypted
     * DB snapshot. </p>
     */
    inline DBSnapshot& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p> If <code>Encrypted</code> is true, the KMS key identifier for the encrypted
     * DB snapshot. </p>
     */
    inline DBSnapshot& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p> If <code>Encrypted</code> is true, the KMS key identifier for the encrypted
     * DB snapshot. </p>
     */
    inline DBSnapshot& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the DB snapshot.</p>
     */
    inline const Aws::String& GetDBSnapshotArn() const{ return m_dBSnapshotArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB snapshot.</p>
     */
    inline void SetDBSnapshotArn(const Aws::String& value) { m_dBSnapshotArnHasBeenSet = true; m_dBSnapshotArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB snapshot.</p>
     */
    inline void SetDBSnapshotArn(Aws::String&& value) { m_dBSnapshotArnHasBeenSet = true; m_dBSnapshotArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB snapshot.</p>
     */
    inline void SetDBSnapshotArn(const char* value) { m_dBSnapshotArnHasBeenSet = true; m_dBSnapshotArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB snapshot.</p>
     */
    inline DBSnapshot& WithDBSnapshotArn(const Aws::String& value) { SetDBSnapshotArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the DB snapshot.</p>
     */
    inline DBSnapshot& WithDBSnapshotArn(Aws::String&& value) { SetDBSnapshotArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the DB snapshot.</p>
     */
    inline DBSnapshot& WithDBSnapshotArn(const char* value) { SetDBSnapshotArn(value); return *this;}

    /**
     * <p>The time zone of the DB snapshot. In most cases, the <code>Timezone</code>
     * element is empty. <code>Timezone</code> content appears only for snapshots taken
     * from Microsoft SQL Server DB instances that were created with a time zone
     * specified. </p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * <p>The time zone of the DB snapshot. In most cases, the <code>Timezone</code>
     * element is empty. <code>Timezone</code> content appears only for snapshots taken
     * from Microsoft SQL Server DB instances that were created with a time zone
     * specified. </p>
     */
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    /**
     * <p>The time zone of the DB snapshot. In most cases, the <code>Timezone</code>
     * element is empty. <code>Timezone</code> content appears only for snapshots taken
     * from Microsoft SQL Server DB instances that were created with a time zone
     * specified. </p>
     */
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    /**
     * <p>The time zone of the DB snapshot. In most cases, the <code>Timezone</code>
     * element is empty. <code>Timezone</code> content appears only for snapshots taken
     * from Microsoft SQL Server DB instances that were created with a time zone
     * specified. </p>
     */
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }

    /**
     * <p>The time zone of the DB snapshot. In most cases, the <code>Timezone</code>
     * element is empty. <code>Timezone</code> content appears only for snapshots taken
     * from Microsoft SQL Server DB instances that were created with a time zone
     * specified. </p>
     */
    inline DBSnapshot& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * <p>The time zone of the DB snapshot. In most cases, the <code>Timezone</code>
     * element is empty. <code>Timezone</code> content appears only for snapshots taken
     * from Microsoft SQL Server DB instances that were created with a time zone
     * specified. </p>
     */
    inline DBSnapshot& WithTimezone(Aws::String&& value) { SetTimezone(value); return *this;}

    /**
     * <p>The time zone of the DB snapshot. In most cases, the <code>Timezone</code>
     * element is empty. <code>Timezone</code> content appears only for snapshots taken
     * from Microsoft SQL Server DB instances that were created with a time zone
     * specified. </p>
     */
    inline DBSnapshot& WithTimezone(const char* value) { SetTimezone(value); return *this;}

  private:
    Aws::String m_dBSnapshotIdentifier;
    bool m_dBSnapshotIdentifierHasBeenSet;
    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;
    Aws::Utils::DateTime m_snapshotCreateTime;
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
    Aws::Utils::DateTime m_instanceCreateTime;
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
    Aws::String m_sourceDBSnapshotIdentifier;
    bool m_sourceDBSnapshotIdentifierHasBeenSet;
    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet;
    Aws::String m_tdeCredentialArn;
    bool m_tdeCredentialArnHasBeenSet;
    bool m_encrypted;
    bool m_encryptedHasBeenSet;
    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;
    Aws::String m_dBSnapshotArn;
    bool m_dBSnapshotArnHasBeenSet;
    Aws::String m_timezone;
    bool m_timezoneHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
