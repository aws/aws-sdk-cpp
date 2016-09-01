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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <ul> <li> <p> <a>CreateDBClusterSnapshot</a> </p> </li> <li> <p>
   * <a>DeleteDBClusterSnapshot</a> </p> </li> </ul> <p>This data type is used as a
   * response element in the <a>DescribeDBClusterSnapshots</a> action.</p>
   */
  class AWS_RDS_API DBClusterSnapshot
  {
  public:
    DBClusterSnapshot();
    DBClusterSnapshot(const Aws::Utils::Xml::XmlNode& xmlNode);
    DBClusterSnapshot& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>Provides the list of EC2 Availability Zones that instances in the DB cluster
     * snapshot can be restored in.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>Provides the list of EC2 Availability Zones that instances in the DB cluster
     * snapshot can be restored in.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>Provides the list of EC2 Availability Zones that instances in the DB cluster
     * snapshot can be restored in.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>Provides the list of EC2 Availability Zones that instances in the DB cluster
     * snapshot can be restored in.</p>
     */
    inline DBClusterSnapshot& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>Provides the list of EC2 Availability Zones that instances in the DB cluster
     * snapshot can be restored in.</p>
     */
    inline DBClusterSnapshot& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>Provides the list of EC2 Availability Zones that instances in the DB cluster
     * snapshot can be restored in.</p>
     */
    inline DBClusterSnapshot& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>Provides the list of EC2 Availability Zones that instances in the DB cluster
     * snapshot can be restored in.</p>
     */
    inline DBClusterSnapshot& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>Provides the list of EC2 Availability Zones that instances in the DB cluster
     * snapshot can be restored in.</p>
     */
    inline DBClusterSnapshot& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>Specifies the identifier for the DB cluster snapshot.</p>
     */
    inline const Aws::String& GetDBClusterSnapshotIdentifier() const{ return m_dBClusterSnapshotIdentifier; }

    /**
     * <p>Specifies the identifier for the DB cluster snapshot.</p>
     */
    inline void SetDBClusterSnapshotIdentifier(const Aws::String& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = value; }

    /**
     * <p>Specifies the identifier for the DB cluster snapshot.</p>
     */
    inline void SetDBClusterSnapshotIdentifier(Aws::String&& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = value; }

    /**
     * <p>Specifies the identifier for the DB cluster snapshot.</p>
     */
    inline void SetDBClusterSnapshotIdentifier(const char* value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier.assign(value); }

    /**
     * <p>Specifies the identifier for the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithDBClusterSnapshotIdentifier(const Aws::String& value) { SetDBClusterSnapshotIdentifier(value); return *this;}

    /**
     * <p>Specifies the identifier for the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithDBClusterSnapshotIdentifier(Aws::String&& value) { SetDBClusterSnapshotIdentifier(value); return *this;}

    /**
     * <p>Specifies the identifier for the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithDBClusterSnapshotIdentifier(const char* value) { SetDBClusterSnapshotIdentifier(value); return *this;}

    /**
     * <p>Specifies the DB cluster identifier of the DB cluster that this DB cluster
     * snapshot was created from.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>Specifies the DB cluster identifier of the DB cluster that this DB cluster
     * snapshot was created from.</p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>Specifies the DB cluster identifier of the DB cluster that this DB cluster
     * snapshot was created from.</p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>Specifies the DB cluster identifier of the DB cluster that this DB cluster
     * snapshot was created from.</p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>Specifies the DB cluster identifier of the DB cluster that this DB cluster
     * snapshot was created from.</p>
     */
    inline DBClusterSnapshot& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>Specifies the DB cluster identifier of the DB cluster that this DB cluster
     * snapshot was created from.</p>
     */
    inline DBClusterSnapshot& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>Specifies the DB cluster identifier of the DB cluster that this DB cluster
     * snapshot was created from.</p>
     */
    inline DBClusterSnapshot& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}

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
    inline DBClusterSnapshot& WithSnapshotCreateTime(const Aws::Utils::DateTime& value) { SetSnapshotCreateTime(value); return *this;}

    /**
     * <p>Provides the time when the snapshot was taken, in Universal Coordinated Time
     * (UTC).</p>
     */
    inline DBClusterSnapshot& WithSnapshotCreateTime(Aws::Utils::DateTime&& value) { SetSnapshotCreateTime(value); return *this;}

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
    inline DBClusterSnapshot& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>Specifies the name of the database engine.</p>
     */
    inline DBClusterSnapshot& WithEngine(Aws::String&& value) { SetEngine(value); return *this;}

    /**
     * <p>Specifies the name of the database engine.</p>
     */
    inline DBClusterSnapshot& WithEngine(const char* value) { SetEngine(value); return *this;}

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
    inline DBClusterSnapshot& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}

    /**
     * <p>Specifies the status of this DB cluster snapshot.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies the status of this DB cluster snapshot.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies the status of this DB cluster snapshot.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies the status of this DB cluster snapshot.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Specifies the status of this DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies the status of this DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithStatus(Aws::String&& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies the status of this DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithStatus(const char* value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies the port that the DB cluster was listening on at the time of the
     * snapshot.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>Specifies the port that the DB cluster was listening on at the time of the
     * snapshot.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>Specifies the port that the DB cluster was listening on at the time of the
     * snapshot.</p>
     */
    inline DBClusterSnapshot& WithPort(int value) { SetPort(value); return *this;}

    /**
     * <p>Provides the VPC ID associated with the DB cluster snapshot.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>Provides the VPC ID associated with the DB cluster snapshot.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>Provides the VPC ID associated with the DB cluster snapshot.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>Provides the VPC ID associated with the DB cluster snapshot.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>Provides the VPC ID associated with the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>Provides the VPC ID associated with the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /**
     * <p>Provides the VPC ID associated with the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithVpcId(const char* value) { SetVpcId(value); return *this;}

    /**
     * <p>Specifies the time when the DB cluster was created, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetClusterCreateTime() const{ return m_clusterCreateTime; }

    /**
     * <p>Specifies the time when the DB cluster was created, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline void SetClusterCreateTime(const Aws::Utils::DateTime& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = value; }

    /**
     * <p>Specifies the time when the DB cluster was created, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline void SetClusterCreateTime(Aws::Utils::DateTime&& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = value; }

    /**
     * <p>Specifies the time when the DB cluster was created, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline DBClusterSnapshot& WithClusterCreateTime(const Aws::Utils::DateTime& value) { SetClusterCreateTime(value); return *this;}

    /**
     * <p>Specifies the time when the DB cluster was created, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline DBClusterSnapshot& WithClusterCreateTime(Aws::Utils::DateTime&& value) { SetClusterCreateTime(value); return *this;}

    /**
     * <p>Provides the master username for the DB cluster snapshot.</p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /**
     * <p>Provides the master username for the DB cluster snapshot.</p>
     */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>Provides the master username for the DB cluster snapshot.</p>
     */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>Provides the master username for the DB cluster snapshot.</p>
     */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /**
     * <p>Provides the master username for the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>Provides the master username for the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithMasterUsername(Aws::String&& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>Provides the master username for the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}

    /**
     * <p>Provides the version of the database engine for this DB cluster snapshot.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>Provides the version of the database engine for this DB cluster snapshot.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>Provides the version of the database engine for this DB cluster snapshot.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>Provides the version of the database engine for this DB cluster snapshot.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>Provides the version of the database engine for this DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>Provides the version of the database engine for this DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithEngineVersion(Aws::String&& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>Provides the version of the database engine for this DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}

    /**
     * <p>Provides the license model information for this DB cluster snapshot.</p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }

    /**
     * <p>Provides the license model information for this DB cluster snapshot.</p>
     */
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p>Provides the license model information for this DB cluster snapshot.</p>
     */
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p>Provides the license model information for this DB cluster snapshot.</p>
     */
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }

    /**
     * <p>Provides the license model information for this DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /**
     * <p>Provides the license model information for this DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithLicenseModel(Aws::String&& value) { SetLicenseModel(value); return *this;}

    /**
     * <p>Provides the license model information for this DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}

    /**
     * <p>Provides the type of the DB cluster snapshot.</p>
     */
    inline const Aws::String& GetSnapshotType() const{ return m_snapshotType; }

    /**
     * <p>Provides the type of the DB cluster snapshot.</p>
     */
    inline void SetSnapshotType(const Aws::String& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }

    /**
     * <p>Provides the type of the DB cluster snapshot.</p>
     */
    inline void SetSnapshotType(Aws::String&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }

    /**
     * <p>Provides the type of the DB cluster snapshot.</p>
     */
    inline void SetSnapshotType(const char* value) { m_snapshotTypeHasBeenSet = true; m_snapshotType.assign(value); }

    /**
     * <p>Provides the type of the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithSnapshotType(const Aws::String& value) { SetSnapshotType(value); return *this;}

    /**
     * <p>Provides the type of the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithSnapshotType(Aws::String&& value) { SetSnapshotType(value); return *this;}

    /**
     * <p>Provides the type of the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithSnapshotType(const char* value) { SetSnapshotType(value); return *this;}

    /**
     * <p>Specifies the percentage of the estimated data that has been transferred.</p>
     */
    inline int GetPercentProgress() const{ return m_percentProgress; }

    /**
     * <p>Specifies the percentage of the estimated data that has been transferred.</p>
     */
    inline void SetPercentProgress(int value) { m_percentProgressHasBeenSet = true; m_percentProgress = value; }

    /**
     * <p>Specifies the percentage of the estimated data that has been transferred.</p>
     */
    inline DBClusterSnapshot& WithPercentProgress(int value) { SetPercentProgress(value); return *this;}

    /**
     * <p>Specifies whether the DB cluster snapshot is encrypted.</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }

    /**
     * <p>Specifies whether the DB cluster snapshot is encrypted.</p>
     */
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }

    /**
     * <p>Specifies whether the DB cluster snapshot is encrypted.</p>
     */
    inline DBClusterSnapshot& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}

    /**
     * <p>If <code>StorageEncrypted</code> is true, the KMS key identifier for the
     * encrypted DB cluster snapshot.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>If <code>StorageEncrypted</code> is true, the KMS key identifier for the
     * encrypted DB cluster snapshot.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>If <code>StorageEncrypted</code> is true, the KMS key identifier for the
     * encrypted DB cluster snapshot.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>If <code>StorageEncrypted</code> is true, the KMS key identifier for the
     * encrypted DB cluster snapshot.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>If <code>StorageEncrypted</code> is true, the KMS key identifier for the
     * encrypted DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>If <code>StorageEncrypted</code> is true, the KMS key identifier for the
     * encrypted DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>If <code>StorageEncrypted</code> is true, the KMS key identifier for the
     * encrypted DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster snapshot.</p>
     */
    inline const Aws::String& GetDBClusterSnapshotArn() const{ return m_dBClusterSnapshotArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster snapshot.</p>
     */
    inline void SetDBClusterSnapshotArn(const Aws::String& value) { m_dBClusterSnapshotArnHasBeenSet = true; m_dBClusterSnapshotArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster snapshot.</p>
     */
    inline void SetDBClusterSnapshotArn(Aws::String&& value) { m_dBClusterSnapshotArnHasBeenSet = true; m_dBClusterSnapshotArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster snapshot.</p>
     */
    inline void SetDBClusterSnapshotArn(const char* value) { m_dBClusterSnapshotArnHasBeenSet = true; m_dBClusterSnapshotArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithDBClusterSnapshotArn(const Aws::String& value) { SetDBClusterSnapshotArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithDBClusterSnapshotArn(Aws::String&& value) { SetDBClusterSnapshotArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the DB cluster snapshot.</p>
     */
    inline DBClusterSnapshot& WithDBClusterSnapshotArn(const char* value) { SetDBClusterSnapshotArn(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet;
    Aws::String m_dBClusterSnapshotIdentifier;
    bool m_dBClusterSnapshotIdentifierHasBeenSet;
    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;
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
    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
    Aws::Utils::DateTime m_clusterCreateTime;
    bool m_clusterCreateTimeHasBeenSet;
    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet;
    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;
    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet;
    Aws::String m_snapshotType;
    bool m_snapshotTypeHasBeenSet;
    int m_percentProgress;
    bool m_percentProgressHasBeenSet;
    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet;
    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;
    Aws::String m_dBClusterSnapshotArn;
    bool m_dBClusterSnapshotArnHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
