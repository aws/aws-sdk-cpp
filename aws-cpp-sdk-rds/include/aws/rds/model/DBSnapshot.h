/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  /*
    <p> Contains the result of a successful invocation of the following actions: </p> <ul> <li><a>CreateDBSnapshot</a></li> <li><a>DeleteDBSnapshot</a></li> </ul> <p>This data type is used as a response element in the <a>DescribeDBSnapshots</a> action.</p>
  */
  class AWS_RDS_API DBSnapshot
  {
  public:
    DBSnapshot();
    DBSnapshot(const Aws::Utils::Xml::XmlNode& xmlNode);
    DBSnapshot& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /*
     <p> Specifies the identifier for the DB Snapshot. </p>
    */
    inline const Aws::String& GetDBSnapshotIdentifier() const{ return m_dBSnapshotIdentifier; }

    /*
     <p> Specifies the identifier for the DB Snapshot. </p>
    */
    inline void SetDBSnapshotIdentifier(const Aws::String& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = value; }

    /*
     <p> Specifies the identifier for the DB Snapshot. </p>
    */
    inline void SetDBSnapshotIdentifier(Aws::String&& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = value; }

    /*
     <p> Specifies the identifier for the DB Snapshot. </p>
    */
    inline void SetDBSnapshotIdentifier(const char* value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier.assign(value); }

    /*
     <p> Specifies the identifier for the DB Snapshot. </p>
    */
    inline DBSnapshot& WithDBSnapshotIdentifier(const Aws::String& value) { SetDBSnapshotIdentifier(value); return *this;}

    /*
     <p> Specifies the identifier for the DB Snapshot. </p>
    */
    inline DBSnapshot& WithDBSnapshotIdentifier(Aws::String&& value) { SetDBSnapshotIdentifier(value); return *this;}

    /*
     <p> Specifies the identifier for the DB Snapshot. </p>
    */
    inline DBSnapshot& WithDBSnapshotIdentifier(const char* value) { SetDBSnapshotIdentifier(value); return *this;}

    /*
     <p> Specifies the the DBInstanceIdentifier of the DB Instance this DB Snapshot was created from. </p>
    */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /*
     <p> Specifies the the DBInstanceIdentifier of the DB Instance this DB Snapshot was created from. </p>
    */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /*
     <p> Specifies the the DBInstanceIdentifier of the DB Instance this DB Snapshot was created from. </p>
    */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /*
     <p> Specifies the the DBInstanceIdentifier of the DB Instance this DB Snapshot was created from. </p>
    */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /*
     <p> Specifies the the DBInstanceIdentifier of the DB Instance this DB Snapshot was created from. </p>
    */
    inline DBSnapshot& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /*
     <p> Specifies the the DBInstanceIdentifier of the DB Instance this DB Snapshot was created from. </p>
    */
    inline DBSnapshot& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(value); return *this;}

    /*
     <p> Specifies the the DBInstanceIdentifier of the DB Instance this DB Snapshot was created from. </p>
    */
    inline DBSnapshot& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}

    /*
     <p> Provides the time (UTC) when the snapshot was taken. </p>
    */
    inline double GetSnapshotCreateTime() const{ return m_snapshotCreateTime; }

    /*
     <p> Provides the time (UTC) when the snapshot was taken. </p>
    */
    inline void SetSnapshotCreateTime(double value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = value; }

    /*
     <p> Provides the time (UTC) when the snapshot was taken. </p>
    */
    inline DBSnapshot& WithSnapshotCreateTime(double value) { SetSnapshotCreateTime(value); return *this;}

    /*
     <p> Specifies the name of the database engine. </p>
    */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /*
     <p> Specifies the name of the database engine. </p>
    */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /*
     <p> Specifies the name of the database engine. </p>
    */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = value; }

    /*
     <p> Specifies the name of the database engine. </p>
    */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /*
     <p> Specifies the name of the database engine. </p>
    */
    inline DBSnapshot& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /*
     <p> Specifies the name of the database engine. </p>
    */
    inline DBSnapshot& WithEngine(Aws::String&& value) { SetEngine(value); return *this;}

    /*
     <p> Specifies the name of the database engine. </p>
    */
    inline DBSnapshot& WithEngine(const char* value) { SetEngine(value); return *this;}

    /*
     <p> Specifies the allocated storage size in gigabytes (GB). </p>
    */
    inline long GetAllocatedStorage() const{ return m_allocatedStorage; }

    /*
     <p> Specifies the allocated storage size in gigabytes (GB). </p>
    */
    inline void SetAllocatedStorage(long value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /*
     <p> Specifies the allocated storage size in gigabytes (GB). </p>
    */
    inline DBSnapshot& WithAllocatedStorage(long value) { SetAllocatedStorage(value); return *this;}

    /*
     <p> Specifies the status of this DB Snapshot. </p>
    */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /*
     <p> Specifies the status of this DB Snapshot. </p>
    */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /*
     <p> Specifies the status of this DB Snapshot. </p>
    */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = value; }

    /*
     <p> Specifies the status of this DB Snapshot. </p>
    */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /*
     <p> Specifies the status of this DB Snapshot. </p>
    */
    inline DBSnapshot& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /*
     <p> Specifies the status of this DB Snapshot. </p>
    */
    inline DBSnapshot& WithStatus(Aws::String&& value) { SetStatus(value); return *this;}

    /*
     <p> Specifies the status of this DB Snapshot. </p>
    */
    inline DBSnapshot& WithStatus(const char* value) { SetStatus(value); return *this;}

    /*
     <p> Specifies the port that the database engine was listening on at the time of the snapshot. </p>
    */
    inline long GetPort() const{ return m_port; }

    /*
     <p> Specifies the port that the database engine was listening on at the time of the snapshot. </p>
    */
    inline void SetPort(long value) { m_portHasBeenSet = true; m_port = value; }

    /*
     <p> Specifies the port that the database engine was listening on at the time of the snapshot. </p>
    */
    inline DBSnapshot& WithPort(long value) { SetPort(value); return *this;}

    /*
     <p> Specifies the name of the Availability Zone the DB Instance was located in at the time of the DB Snapshot. </p>
    */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /*
     <p> Specifies the name of the Availability Zone the DB Instance was located in at the time of the DB Snapshot. </p>
    */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /*
     <p> Specifies the name of the Availability Zone the DB Instance was located in at the time of the DB Snapshot. </p>
    */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /*
     <p> Specifies the name of the Availability Zone the DB Instance was located in at the time of the DB Snapshot. </p>
    */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /*
     <p> Specifies the name of the Availability Zone the DB Instance was located in at the time of the DB Snapshot. </p>
    */
    inline DBSnapshot& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /*
     <p> Specifies the name of the Availability Zone the DB Instance was located in at the time of the DB Snapshot. </p>
    */
    inline DBSnapshot& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(value); return *this;}

    /*
     <p> Specifies the name of the Availability Zone the DB Instance was located in at the time of the DB Snapshot. </p>
    */
    inline DBSnapshot& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

    /*
     <p> Provides the Vpc Id associated with the DB Snapshot. </p>
    */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /*
     <p> Provides the Vpc Id associated with the DB Snapshot. </p>
    */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /*
     <p> Provides the Vpc Id associated with the DB Snapshot. </p>
    */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /*
     <p> Provides the Vpc Id associated with the DB Snapshot. </p>
    */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /*
     <p> Provides the Vpc Id associated with the DB Snapshot. </p>
    */
    inline DBSnapshot& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /*
     <p> Provides the Vpc Id associated with the DB Snapshot. </p>
    */
    inline DBSnapshot& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /*
     <p> Provides the Vpc Id associated with the DB Snapshot. </p>
    */
    inline DBSnapshot& WithVpcId(const char* value) { SetVpcId(value); return *this;}

    /*
     <p> Specifies the time (UTC) when the snapshot was taken. </p>
    */
    inline double GetInstanceCreateTime() const{ return m_instanceCreateTime; }

    /*
     <p> Specifies the time (UTC) when the snapshot was taken. </p>
    */
    inline void SetInstanceCreateTime(double value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = value; }

    /*
     <p> Specifies the time (UTC) when the snapshot was taken. </p>
    */
    inline DBSnapshot& WithInstanceCreateTime(double value) { SetInstanceCreateTime(value); return *this;}

    /*
     <p> Provides the master username for the DB Instance. </p>
    */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /*
     <p> Provides the master username for the DB Instance. </p>
    */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /*
     <p> Provides the master username for the DB Instance. </p>
    */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /*
     <p> Provides the master username for the DB Instance. </p>
    */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /*
     <p> Provides the master username for the DB Instance. </p>
    */
    inline DBSnapshot& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /*
     <p> Provides the master username for the DB Instance. </p>
    */
    inline DBSnapshot& WithMasterUsername(Aws::String&& value) { SetMasterUsername(value); return *this;}

    /*
     <p> Provides the master username for the DB Instance. </p>
    */
    inline DBSnapshot& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}

    /*
     <p> Specifies the version of the database engine. </p>
    */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /*
     <p> Specifies the version of the database engine. </p>
    */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /*
     <p> Specifies the version of the database engine. </p>
    */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /*
     <p> Specifies the version of the database engine. </p>
    */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /*
     <p> Specifies the version of the database engine. </p>
    */
    inline DBSnapshot& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /*
     <p> Specifies the version of the database engine. </p>
    */
    inline DBSnapshot& WithEngineVersion(Aws::String&& value) { SetEngineVersion(value); return *this;}

    /*
     <p> Specifies the version of the database engine. </p>
    */
    inline DBSnapshot& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}

    /*
     <p> License model information for the restored DB Instance. </p>
    */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }

    /*
     <p> License model information for the restored DB Instance. </p>
    */
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /*
     <p> License model information for the restored DB Instance. </p>
    */
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /*
     <p> License model information for the restored DB Instance. </p>
    */
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }

    /*
     <p> License model information for the restored DB Instance. </p>
    */
    inline DBSnapshot& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /*
     <p> License model information for the restored DB Instance. </p>
    */
    inline DBSnapshot& WithLicenseModel(Aws::String&& value) { SetLicenseModel(value); return *this;}

    /*
     <p> License model information for the restored DB Instance. </p>
    */
    inline DBSnapshot& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}

    /*
     <p> Provides the type of the DB Snapshot. </p>
    */
    inline const Aws::String& GetSnapshotType() const{ return m_snapshotType; }

    /*
     <p> Provides the type of the DB Snapshot. </p>
    */
    inline void SetSnapshotType(const Aws::String& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }

    /*
     <p> Provides the type of the DB Snapshot. </p>
    */
    inline void SetSnapshotType(Aws::String&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }

    /*
     <p> Provides the type of the DB Snapshot. </p>
    */
    inline void SetSnapshotType(const char* value) { m_snapshotTypeHasBeenSet = true; m_snapshotType.assign(value); }

    /*
     <p> Provides the type of the DB Snapshot. </p>
    */
    inline DBSnapshot& WithSnapshotType(const Aws::String& value) { SetSnapshotType(value); return *this;}

    /*
     <p> Provides the type of the DB Snapshot. </p>
    */
    inline DBSnapshot& WithSnapshotType(Aws::String&& value) { SetSnapshotType(value); return *this;}

    /*
     <p> Provides the type of the DB Snapshot. </p>
    */
    inline DBSnapshot& WithSnapshotType(const char* value) { SetSnapshotType(value); return *this;}

    /*
     <p> Specifies the Provisioned IOPS (I/O operations per second) value of the DB Instance at the time of the snapshot. </p>
    */
    inline long GetIops() const{ return m_iops; }

    /*
     <p> Specifies the Provisioned IOPS (I/O operations per second) value of the DB Instance at the time of the snapshot. </p>
    */
    inline void SetIops(long value) { m_iopsHasBeenSet = true; m_iops = value; }

    /*
     <p> Specifies the Provisioned IOPS (I/O operations per second) value of the DB Instance at the time of the snapshot. </p>
    */
    inline DBSnapshot& WithIops(long value) { SetIops(value); return *this;}

  private:
    Aws::String m_dBSnapshotIdentifier;
    bool m_dBSnapshotIdentifierHasBeenSet;
    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;
    double m_snapshotCreateTime;
    bool m_snapshotCreateTimeHasBeenSet;
    Aws::String m_engine;
    bool m_engineHasBeenSet;
    long m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet;
    Aws::String m_status;
    bool m_statusHasBeenSet;
    long m_port;
    bool m_portHasBeenSet;
    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;
    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
    double m_instanceCreateTime;
    bool m_instanceCreateTimeHasBeenSet;
    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet;
    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;
    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet;
    Aws::String m_snapshotType;
    bool m_snapshotTypeHasBeenSet;
    long m_iops;
    bool m_iopsHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
