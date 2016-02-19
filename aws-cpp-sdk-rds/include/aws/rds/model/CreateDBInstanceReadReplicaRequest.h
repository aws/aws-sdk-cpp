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
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class AWS_RDS_API CreateDBInstanceReadReplicaRequest : public RDSRequest
  {
  public:
    CreateDBInstanceReadReplicaRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p> The DB Instance identifier of the Read Replica. This is the unique key that
     * identifies a DB Instance. This parameter is stored as a lowercase string. </p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p> The DB Instance identifier of the Read Replica. This is the unique key that
     * identifies a DB Instance. This parameter is stored as a lowercase string. </p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p> The DB Instance identifier of the Read Replica. This is the unique key that
     * identifies a DB Instance. This parameter is stored as a lowercase string. </p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p> The DB Instance identifier of the Read Replica. This is the unique key that
     * identifies a DB Instance. This parameter is stored as a lowercase string. </p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p> The DB Instance identifier of the Read Replica. This is the unique key that
     * identifies a DB Instance. This parameter is stored as a lowercase string. </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p> The DB Instance identifier of the Read Replica. This is the unique key that
     * identifies a DB Instance. This parameter is stored as a lowercase string. </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p> The DB Instance identifier of the Read Replica. This is the unique key that
     * identifies a DB Instance. This parameter is stored as a lowercase string. </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p> The identifier of the DB Instance that will act as the source for the Read
     * Replica. Each DB Instance can have up to five Read Replicas. </p>
     * <p>Constraints: Must be the identifier of an existing DB Instance that is not
     * already a Read Replica DB Instance. </p>
     */
    inline const Aws::String& GetSourceDBInstanceIdentifier() const{ return m_sourceDBInstanceIdentifier; }

    /**
     * <p> The identifier of the DB Instance that will act as the source for the Read
     * Replica. Each DB Instance can have up to five Read Replicas. </p>
     * <p>Constraints: Must be the identifier of an existing DB Instance that is not
     * already a Read Replica DB Instance. </p>
     */
    inline void SetSourceDBInstanceIdentifier(const Aws::String& value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier = value; }

    /**
     * <p> The identifier of the DB Instance that will act as the source for the Read
     * Replica. Each DB Instance can have up to five Read Replicas. </p>
     * <p>Constraints: Must be the identifier of an existing DB Instance that is not
     * already a Read Replica DB Instance. </p>
     */
    inline void SetSourceDBInstanceIdentifier(Aws::String&& value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier = value; }

    /**
     * <p> The identifier of the DB Instance that will act as the source for the Read
     * Replica. Each DB Instance can have up to five Read Replicas. </p>
     * <p>Constraints: Must be the identifier of an existing DB Instance that is not
     * already a Read Replica DB Instance. </p>
     */
    inline void SetSourceDBInstanceIdentifier(const char* value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier.assign(value); }

    /**
     * <p> The identifier of the DB Instance that will act as the source for the Read
     * Replica. Each DB Instance can have up to five Read Replicas. </p>
     * <p>Constraints: Must be the identifier of an existing DB Instance that is not
     * already a Read Replica DB Instance. </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithSourceDBInstanceIdentifier(const Aws::String& value) { SetSourceDBInstanceIdentifier(value); return *this;}

    /**
     * <p> The identifier of the DB Instance that will act as the source for the Read
     * Replica. Each DB Instance can have up to five Read Replicas. </p>
     * <p>Constraints: Must be the identifier of an existing DB Instance that is not
     * already a Read Replica DB Instance. </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithSourceDBInstanceIdentifier(Aws::String&& value) { SetSourceDBInstanceIdentifier(value); return *this;}

    /**
     * <p> The identifier of the DB Instance that will act as the source for the Read
     * Replica. Each DB Instance can have up to five Read Replicas. </p>
     * <p>Constraints: Must be the identifier of an existing DB Instance that is not
     * already a Read Replica DB Instance. </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithSourceDBInstanceIdentifier(const char* value) { SetSourceDBInstanceIdentifier(value); return *this;}

    /**
     * <p> The compute and memory capacity of the Read Replica. </p> <p> Valid Values:
     * <code>db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge
     * |db.m2.2xlarge | db.m2.4xlarge</code> </p> <p>Default: Inherits from the source
     * DB Instance.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p> The compute and memory capacity of the Read Replica. </p> <p> Valid Values:
     * <code>db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge
     * |db.m2.2xlarge | db.m2.4xlarge</code> </p> <p>Default: Inherits from the source
     * DB Instance.</p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p> The compute and memory capacity of the Read Replica. </p> <p> Valid Values:
     * <code>db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge
     * |db.m2.2xlarge | db.m2.4xlarge</code> </p> <p>Default: Inherits from the source
     * DB Instance.</p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p> The compute and memory capacity of the Read Replica. </p> <p> Valid Values:
     * <code>db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge
     * |db.m2.2xlarge | db.m2.4xlarge</code> </p> <p>Default: Inherits from the source
     * DB Instance.</p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p> The compute and memory capacity of the Read Replica. </p> <p> Valid Values:
     * <code>db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge
     * |db.m2.2xlarge | db.m2.4xlarge</code> </p> <p>Default: Inherits from the source
     * DB Instance.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p> The compute and memory capacity of the Read Replica. </p> <p> Valid Values:
     * <code>db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge
     * |db.m2.2xlarge | db.m2.4xlarge</code> </p> <p>Default: Inherits from the source
     * DB Instance.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p> The compute and memory capacity of the Read Replica. </p> <p> Valid Values:
     * <code>db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge
     * |db.m2.2xlarge | db.m2.4xlarge</code> </p> <p>Default: Inherits from the source
     * DB Instance.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p> The Amazon EC2 Availability Zone that the Read Replica will be created in.
     * </p> <p> Default: A random, system-chosen Availability Zone in the endpoint's
     * region. </p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p> The Amazon EC2 Availability Zone that the Read Replica will be created in.
     * </p> <p> Default: A random, system-chosen Availability Zone in the endpoint's
     * region. </p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p> The Amazon EC2 Availability Zone that the Read Replica will be created in.
     * </p> <p> Default: A random, system-chosen Availability Zone in the endpoint's
     * region. </p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p> The Amazon EC2 Availability Zone that the Read Replica will be created in.
     * </p> <p> Default: A random, system-chosen Availability Zone in the endpoint's
     * region. </p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p> The Amazon EC2 Availability Zone that the Read Replica will be created in.
     * </p> <p> Default: A random, system-chosen Availability Zone in the endpoint's
     * region. </p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p> The Amazon EC2 Availability Zone that the Read Replica will be created in.
     * </p> <p> Default: A random, system-chosen Availability Zone in the endpoint's
     * region. </p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p> The Amazon EC2 Availability Zone that the Read Replica will be created in.
     * </p> <p> Default: A random, system-chosen Availability Zone in the endpoint's
     * region. </p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p> The port number that the DB Instance uses for connections. </p> <p>Default:
     * Inherits from the source DB Instance</p> <p>Valid Values:
     * <code>1150-65535</code></p>
     */
    inline long GetPort() const{ return m_port; }

    /**
     * <p> The port number that the DB Instance uses for connections. </p> <p>Default:
     * Inherits from the source DB Instance</p> <p>Valid Values:
     * <code>1150-65535</code></p>
     */
    inline void SetPort(long value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p> The port number that the DB Instance uses for connections. </p> <p>Default:
     * Inherits from the source DB Instance</p> <p>Valid Values:
     * <code>1150-65535</code></p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithPort(long value) { SetPort(value); return *this;}

    /**
     * <p> Indicates that minor engine upgrades will be applied automatically to the
     * Read Replica during the maintenance window. </p> <p>Default: Inherits from the
     * source DB Instance</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p> Indicates that minor engine upgrades will be applied automatically to the
     * Read Replica during the maintenance window. </p> <p>Default: Inherits from the
     * source DB Instance</p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p> Indicates that minor engine upgrades will be applied automatically to the
     * Read Replica during the maintenance window. </p> <p>Default: Inherits from the
     * source DB Instance</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}

    /**
     * <p> The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB Instance. </p>
     */
    inline long GetIops() const{ return m_iops; }

    /**
     * <p> The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB Instance. </p>
     */
    inline void SetIops(long value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p> The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB Instance. </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithIops(long value) { SetIops(value); return *this;}

    /**
     * <p> The option group the DB instance will be associated with. If omitted, the
     * default Option Group for the engine specified will be used. </p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p> The option group the DB instance will be associated with. If omitted, the
     * default Option Group for the engine specified will be used. </p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p> The option group the DB instance will be associated with. If omitted, the
     * default Option Group for the engine specified will be used. </p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p> The option group the DB instance will be associated with. If omitted, the
     * default Option Group for the engine specified will be used. </p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p> The option group the DB instance will be associated with. If omitted, the
     * default Option Group for the engine specified will be used. </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p> The option group the DB instance will be associated with. If omitted, the
     * default Option Group for the engine specified will be used. </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p> The option group the DB instance will be associated with. If omitted, the
     * default Option Group for the engine specified will be used. </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}

    
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    
    inline CreateDBInstanceReadReplicaRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}

  private:
    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;
    Aws::String m_sourceDBInstanceIdentifier;
    bool m_sourceDBInstanceIdentifierHasBeenSet;
    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet;
    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;
    long m_port;
    bool m_portHasBeenSet;
    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;
    long m_iops;
    bool m_iopsHasBeenSet;
    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;
    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
