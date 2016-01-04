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
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /*
    <p> </p>
  */
  class AWS_RDS_API RestoreDBInstanceToPointInTimeRequest : public RDSRequest
  {
  public:
    RestoreDBInstanceToPointInTimeRequest();
    Aws::String SerializePayload() const override;


    /*
     <p> The identifier of the source DB Instance from which to restore. </p> <p>Constraints:</p> <ul> <li>Must be the identifier of an existing database instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline const Aws::String& GetSourceDBInstanceIdentifier() const{ return m_sourceDBInstanceIdentifier; }

    /*
     <p> The identifier of the source DB Instance from which to restore. </p> <p>Constraints:</p> <ul> <li>Must be the identifier of an existing database instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetSourceDBInstanceIdentifier(const Aws::String& value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier = value; }

    /*
     <p> The identifier of the source DB Instance from which to restore. </p> <p>Constraints:</p> <ul> <li>Must be the identifier of an existing database instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetSourceDBInstanceIdentifier(Aws::String&& value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier = value; }

    /*
     <p> The identifier of the source DB Instance from which to restore. </p> <p>Constraints:</p> <ul> <li>Must be the identifier of an existing database instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetSourceDBInstanceIdentifier(const char* value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier.assign(value); }

    /*
     <p> The identifier of the source DB Instance from which to restore. </p> <p>Constraints:</p> <ul> <li>Must be the identifier of an existing database instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithSourceDBInstanceIdentifier(const Aws::String& value) { SetSourceDBInstanceIdentifier(value); return *this;}

    /*
     <p> The identifier of the source DB Instance from which to restore. </p> <p>Constraints:</p> <ul> <li>Must be the identifier of an existing database instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithSourceDBInstanceIdentifier(Aws::String&& value) { SetSourceDBInstanceIdentifier(value); return *this;}

    /*
     <p> The identifier of the source DB Instance from which to restore. </p> <p>Constraints:</p> <ul> <li>Must be the identifier of an existing database instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithSourceDBInstanceIdentifier(const char* value) { SetSourceDBInstanceIdentifier(value); return *this;}

    /*
     <p> The name of the new database instance to be created. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline const Aws::String& GetTargetDBInstanceIdentifier() const{ return m_targetDBInstanceIdentifier; }

    /*
     <p> The name of the new database instance to be created. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetTargetDBInstanceIdentifier(const Aws::String& value) { m_targetDBInstanceIdentifierHasBeenSet = true; m_targetDBInstanceIdentifier = value; }

    /*
     <p> The name of the new database instance to be created. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetTargetDBInstanceIdentifier(Aws::String&& value) { m_targetDBInstanceIdentifierHasBeenSet = true; m_targetDBInstanceIdentifier = value; }

    /*
     <p> The name of the new database instance to be created. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline void SetTargetDBInstanceIdentifier(const char* value) { m_targetDBInstanceIdentifierHasBeenSet = true; m_targetDBInstanceIdentifier.assign(value); }

    /*
     <p> The name of the new database instance to be created. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithTargetDBInstanceIdentifier(const Aws::String& value) { SetTargetDBInstanceIdentifier(value); return *this;}

    /*
     <p> The name of the new database instance to be created. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithTargetDBInstanceIdentifier(Aws::String&& value) { SetTargetDBInstanceIdentifier(value); return *this;}

    /*
     <p> The name of the new database instance to be created. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithTargetDBInstanceIdentifier(const char* value) { SetTargetDBInstanceIdentifier(value); return *this;}

    /*
     <p> The date and time to restore from. </p> <p>Valid Values: Value must be a UTC time</p> <p>Constraints:</p> <ul> <li>Must be before the latest restorable time for the DB Instance</li> <li>Cannot be specified if UseLatestRestorableTime parameter is true</li> </ul> <p>Example: <code>2009-09-07T23:45:00Z</code></p>
    */
    inline double GetRestoreTime() const{ return m_restoreTime; }

    /*
     <p> The date and time to restore from. </p> <p>Valid Values: Value must be a UTC time</p> <p>Constraints:</p> <ul> <li>Must be before the latest restorable time for the DB Instance</li> <li>Cannot be specified if UseLatestRestorableTime parameter is true</li> </ul> <p>Example: <code>2009-09-07T23:45:00Z</code></p>
    */
    inline void SetRestoreTime(double value) { m_restoreTimeHasBeenSet = true; m_restoreTime = value; }

    /*
     <p> The date and time to restore from. </p> <p>Valid Values: Value must be a UTC time</p> <p>Constraints:</p> <ul> <li>Must be before the latest restorable time for the DB Instance</li> <li>Cannot be specified if UseLatestRestorableTime parameter is true</li> </ul> <p>Example: <code>2009-09-07T23:45:00Z</code></p>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithRestoreTime(double value) { SetRestoreTime(value); return *this;}

    /*
     <p> Specifies whether (<code>true</code>) or not (<code>false</code>) the DB Instance is restored from the latest backup time. </p> <p>Default: <code>false</code></p> <p>Constraints: Cannot be specified if RestoreTime parameter is provided.</p>
    */
    inline bool GetUseLatestRestorableTime() const{ return m_useLatestRestorableTime; }

    /*
     <p> Specifies whether (<code>true</code>) or not (<code>false</code>) the DB Instance is restored from the latest backup time. </p> <p>Default: <code>false</code></p> <p>Constraints: Cannot be specified if RestoreTime parameter is provided.</p>
    */
    inline void SetUseLatestRestorableTime(bool value) { m_useLatestRestorableTimeHasBeenSet = true; m_useLatestRestorableTime = value; }

    /*
     <p> Specifies whether (<code>true</code>) or not (<code>false</code>) the DB Instance is restored from the latest backup time. </p> <p>Default: <code>false</code></p> <p>Constraints: Cannot be specified if RestoreTime parameter is provided.</p>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithUseLatestRestorableTime(bool value) { SetUseLatestRestorableTime(value); return *this;}

    /*
     <p> The compute and memory capacity of the Amazon RDS DB instance. </p> <p>Valid Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.2xlarge | db.m2.4xlarge</code></p> <p>Default: The same DBInstanceClass as the original DB Instance.</p>
    */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /*
     <p> The compute and memory capacity of the Amazon RDS DB instance. </p> <p>Valid Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.2xlarge | db.m2.4xlarge</code></p> <p>Default: The same DBInstanceClass as the original DB Instance.</p>
    */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /*
     <p> The compute and memory capacity of the Amazon RDS DB instance. </p> <p>Valid Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.2xlarge | db.m2.4xlarge</code></p> <p>Default: The same DBInstanceClass as the original DB Instance.</p>
    */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /*
     <p> The compute and memory capacity of the Amazon RDS DB instance. </p> <p>Valid Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.2xlarge | db.m2.4xlarge</code></p> <p>Default: The same DBInstanceClass as the original DB Instance.</p>
    */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /*
     <p> The compute and memory capacity of the Amazon RDS DB instance. </p> <p>Valid Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.2xlarge | db.m2.4xlarge</code></p> <p>Default: The same DBInstanceClass as the original DB Instance.</p>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /*
     <p> The compute and memory capacity of the Amazon RDS DB instance. </p> <p>Valid Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.2xlarge | db.m2.4xlarge</code></p> <p>Default: The same DBInstanceClass as the original DB Instance.</p>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(value); return *this;}

    /*
     <p> The compute and memory capacity of the Amazon RDS DB instance. </p> <p>Valid Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.2xlarge | db.m2.4xlarge</code></p> <p>Default: The same DBInstanceClass as the original DB Instance.</p>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}

    /*
     <p> The port number on which the database accepts connections. </p> <p>Constraints: Value must be <code>1150-65535</code></p> <p>Default: The same port as the original DB Instance.</p>
    */
    inline long GetPort() const{ return m_port; }

    /*
     <p> The port number on which the database accepts connections. </p> <p>Constraints: Value must be <code>1150-65535</code></p> <p>Default: The same port as the original DB Instance.</p>
    */
    inline void SetPort(long value) { m_portHasBeenSet = true; m_port = value; }

    /*
     <p> The port number on which the database accepts connections. </p> <p>Constraints: Value must be <code>1150-65535</code></p> <p>Default: The same port as the original DB Instance.</p>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithPort(long value) { SetPort(value); return *this;}

    /*
     <p> The EC2 Availability Zone that the database instance will be created in. </p> <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You cannot specify the AvailabilityZone parameter if the MultiAZ parameter is set to true.</p> <p>Example: <code>us-east-1a</code></p>
    */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /*
     <p> The EC2 Availability Zone that the database instance will be created in. </p> <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You cannot specify the AvailabilityZone parameter if the MultiAZ parameter is set to true.</p> <p>Example: <code>us-east-1a</code></p>
    */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /*
     <p> The EC2 Availability Zone that the database instance will be created in. </p> <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You cannot specify the AvailabilityZone parameter if the MultiAZ parameter is set to true.</p> <p>Example: <code>us-east-1a</code></p>
    */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /*
     <p> The EC2 Availability Zone that the database instance will be created in. </p> <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You cannot specify the AvailabilityZone parameter if the MultiAZ parameter is set to true.</p> <p>Example: <code>us-east-1a</code></p>
    */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /*
     <p> The EC2 Availability Zone that the database instance will be created in. </p> <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You cannot specify the AvailabilityZone parameter if the MultiAZ parameter is set to true.</p> <p>Example: <code>us-east-1a</code></p>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /*
     <p> The EC2 Availability Zone that the database instance will be created in. </p> <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You cannot specify the AvailabilityZone parameter if the MultiAZ parameter is set to true.</p> <p>Example: <code>us-east-1a</code></p>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(value); return *this;}

    /*
     <p> The EC2 Availability Zone that the database instance will be created in. </p> <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You cannot specify the AvailabilityZone parameter if the MultiAZ parameter is set to true.</p> <p>Example: <code>us-east-1a</code></p>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

    /*
     <p> The DB subnet group name to use for the new instance. </p>
    */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /*
     <p> The DB subnet group name to use for the new instance. </p>
    */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /*
     <p> The DB subnet group name to use for the new instance. </p>
    */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /*
     <p> The DB subnet group name to use for the new instance. </p>
    */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /*
     <p> The DB subnet group name to use for the new instance. </p>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /*
     <p> The DB subnet group name to use for the new instance. </p>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(value); return *this;}

    /*
     <p> The DB subnet group name to use for the new instance. </p>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}

    /*
     <p> Specifies if the DB Instance is a Multi-AZ deployment. </p> <p>Constraint: You cannot specify the AvailabilityZone parameter if the MultiAZ parameter is set to <code>true</code>.</p>
    */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /*
     <p> Specifies if the DB Instance is a Multi-AZ deployment. </p> <p>Constraint: You cannot specify the AvailabilityZone parameter if the MultiAZ parameter is set to <code>true</code>.</p>
    */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /*
     <p> Specifies if the DB Instance is a Multi-AZ deployment. </p> <p>Constraint: You cannot specify the AvailabilityZone parameter if the MultiAZ parameter is set to <code>true</code>.</p>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}

    
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    
    inline RestoreDBInstanceToPointInTimeRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}

    /*
     <p> Indicates that minor version upgrades will be applied automatically to the DB Instance during the maintenance window. </p>
    */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /*
     <p> Indicates that minor version upgrades will be applied automatically to the DB Instance during the maintenance window. </p>
    */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /*
     <p> Indicates that minor version upgrades will be applied automatically to the DB Instance during the maintenance window. </p>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}

    /*
     <p> License model information for the restored DB Instance. </p> <p> Default: Same as source. </p> <p> Valid values: <code>license-included</code> | <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
    */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }

    /*
     <p> License model information for the restored DB Instance. </p> <p> Default: Same as source. </p> <p> Valid values: <code>license-included</code> | <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
    */
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /*
     <p> License model information for the restored DB Instance. </p> <p> Default: Same as source. </p> <p> Valid values: <code>license-included</code> | <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
    */
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /*
     <p> License model information for the restored DB Instance. </p> <p> Default: Same as source. </p> <p> Valid values: <code>license-included</code> | <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
    */
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }

    /*
     <p> License model information for the restored DB Instance. </p> <p> Default: Same as source. </p> <p> Valid values: <code>license-included</code> | <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /*
     <p> License model information for the restored DB Instance. </p> <p> Default: Same as source. </p> <p> Valid values: <code>license-included</code> | <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithLicenseModel(Aws::String&& value) { SetLicenseModel(value); return *this;}

    /*
     <p> License model information for the restored DB Instance. </p> <p> Default: Same as source. </p> <p> Valid values: <code>license-included</code> | <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}

    /*
     <p> The database name for the restored DB Instance. </p> <note> <p>This parameter is not used for the MySQL engine.</p> </note>
    */
    inline const Aws::String& GetDBName() const{ return m_dBName; }

    /*
     <p> The database name for the restored DB Instance. </p> <note> <p>This parameter is not used for the MySQL engine.</p> </note>
    */
    inline void SetDBName(const Aws::String& value) { m_dBNameHasBeenSet = true; m_dBName = value; }

    /*
     <p> The database name for the restored DB Instance. </p> <note> <p>This parameter is not used for the MySQL engine.</p> </note>
    */
    inline void SetDBName(Aws::String&& value) { m_dBNameHasBeenSet = true; m_dBName = value; }

    /*
     <p> The database name for the restored DB Instance. </p> <note> <p>This parameter is not used for the MySQL engine.</p> </note>
    */
    inline void SetDBName(const char* value) { m_dBNameHasBeenSet = true; m_dBName.assign(value); }

    /*
     <p> The database name for the restored DB Instance. </p> <note> <p>This parameter is not used for the MySQL engine.</p> </note>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBName(const Aws::String& value) { SetDBName(value); return *this;}

    /*
     <p> The database name for the restored DB Instance. </p> <note> <p>This parameter is not used for the MySQL engine.</p> </note>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBName(Aws::String&& value) { SetDBName(value); return *this;}

    /*
     <p> The database name for the restored DB Instance. </p> <note> <p>This parameter is not used for the MySQL engine.</p> </note>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithDBName(const char* value) { SetDBName(value); return *this;}

    /*
     <p> The database engine to use for the new instance. </p> <p>Default: The same as source</p> <p>Constraint: Must be compatible with the engine of the source</p> <p>Example: <code>oracle-ee</code></p>
    */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /*
     <p> The database engine to use for the new instance. </p> <p>Default: The same as source</p> <p>Constraint: Must be compatible with the engine of the source</p> <p>Example: <code>oracle-ee</code></p>
    */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /*
     <p> The database engine to use for the new instance. </p> <p>Default: The same as source</p> <p>Constraint: Must be compatible with the engine of the source</p> <p>Example: <code>oracle-ee</code></p>
    */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = value; }

    /*
     <p> The database engine to use for the new instance. </p> <p>Default: The same as source</p> <p>Constraint: Must be compatible with the engine of the source</p> <p>Example: <code>oracle-ee</code></p>
    */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /*
     <p> The database engine to use for the new instance. </p> <p>Default: The same as source</p> <p>Constraint: Must be compatible with the engine of the source</p> <p>Example: <code>oracle-ee</code></p>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /*
     <p> The database engine to use for the new instance. </p> <p>Default: The same as source</p> <p>Constraint: Must be compatible with the engine of the source</p> <p>Example: <code>oracle-ee</code></p>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithEngine(Aws::String&& value) { SetEngine(value); return *this;}

    /*
     <p> The database engine to use for the new instance. </p> <p>Default: The same as source</p> <p>Constraint: Must be compatible with the engine of the source</p> <p>Example: <code>oracle-ee</code></p>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithEngine(const char* value) { SetEngine(value); return *this;}

    /*
     <p> The amount of Provisioned IOPS (input/output operations per second) to be initially allocated for the DB Instance. </p> <p> Constraints: Must be an integer greater than 1000.</p>
    */
    inline long GetIops() const{ return m_iops; }

    /*
     <p> The amount of Provisioned IOPS (input/output operations per second) to be initially allocated for the DB Instance. </p> <p> Constraints: Must be an integer greater than 1000.</p>
    */
    inline void SetIops(long value) { m_iopsHasBeenSet = true; m_iops = value; }

    /*
     <p> The amount of Provisioned IOPS (input/output operations per second) to be initially allocated for the DB Instance. </p> <p> Constraints: Must be an integer greater than 1000.</p>
    */
    inline RestoreDBInstanceToPointInTimeRequest& WithIops(long value) { SetIops(value); return *this;}

    
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    
    inline RestoreDBInstanceToPointInTimeRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    
    inline RestoreDBInstanceToPointInTimeRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(value); return *this;}

    
    inline RestoreDBInstanceToPointInTimeRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}

  private:
    Aws::String m_sourceDBInstanceIdentifier;
    bool m_sourceDBInstanceIdentifierHasBeenSet;
    Aws::String m_targetDBInstanceIdentifier;
    bool m_targetDBInstanceIdentifierHasBeenSet;
    double m_restoreTime;
    bool m_restoreTimeHasBeenSet;
    bool m_useLatestRestorableTime;
    bool m_useLatestRestorableTimeHasBeenSet;
    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet;
    long m_port;
    bool m_portHasBeenSet;
    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;
    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet;
    bool m_multiAZ;
    bool m_multiAZHasBeenSet;
    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet;
    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;
    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet;
    Aws::String m_dBName;
    bool m_dBNameHasBeenSet;
    Aws::String m_engine;
    bool m_engineHasBeenSet;
    long m_iops;
    bool m_iopsHasBeenSet;
    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
