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
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
#include <aws/rds/model/ProcessorFeature.h>
#include <utility>

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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBInstanceReadReplica"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The DB instance identifier of the Read Replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The DB instance identifier of the Read Replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The DB instance identifier of the Read Replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The DB instance identifier of the Read Replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>The DB instance identifier of the Read Replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The DB instance identifier of the Read Replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The DB instance identifier of the Read Replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB instance identifier of the Read Replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>The identifier of the DB instance that will act as the source for the Read
     * Replica. Each DB instance can have up to five Read Replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, Oracle, or PostgreSQL DB instance.</p> </li> <li> <p>Can specify a DB
     * instance that is a MySQL Read Replica only if the source is running MySQL 5.6 or
     * later.</p> </li> <li> <p>For the limitations of Oracle Read Replicas, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.html">Read
     * Replica Limitations with Oracle</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </li> <li> <p>Can specify a DB instance that is a PostgreSQL DB instance only if
     * the source is running PostgreSQL 9.3.5 or later (9.4.7 and higher for
     * cross-region replication).</p> </li> <li> <p>The specified DB instance must have
     * automatic backups enabled, its backup retention period must be greater than
     * 0.</p> </li> <li> <p>If the source DB instance is in the same AWS Region as the
     * Read Replica, specify a valid DB instance identifier.</p> </li> <li> <p>If the
     * source DB instance is in a different AWS Region than the Read Replica, specify a
     * valid DB instance ARN. For more information, go to <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an ARN for Amazon RDS</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetSourceDBInstanceIdentifier() const{ return m_sourceDBInstanceIdentifier; }

    /**
     * <p>The identifier of the DB instance that will act as the source for the Read
     * Replica. Each DB instance can have up to five Read Replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, Oracle, or PostgreSQL DB instance.</p> </li> <li> <p>Can specify a DB
     * instance that is a MySQL Read Replica only if the source is running MySQL 5.6 or
     * later.</p> </li> <li> <p>For the limitations of Oracle Read Replicas, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.html">Read
     * Replica Limitations with Oracle</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </li> <li> <p>Can specify a DB instance that is a PostgreSQL DB instance only if
     * the source is running PostgreSQL 9.3.5 or later (9.4.7 and higher for
     * cross-region replication).</p> </li> <li> <p>The specified DB instance must have
     * automatic backups enabled, its backup retention period must be greater than
     * 0.</p> </li> <li> <p>If the source DB instance is in the same AWS Region as the
     * Read Replica, specify a valid DB instance identifier.</p> </li> <li> <p>If the
     * source DB instance is in a different AWS Region than the Read Replica, specify a
     * valid DB instance ARN. For more information, go to <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an ARN for Amazon RDS</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </li> </ul>
     */
    inline bool SourceDBInstanceIdentifierHasBeenSet() const { return m_sourceDBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the DB instance that will act as the source for the Read
     * Replica. Each DB instance can have up to five Read Replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, Oracle, or PostgreSQL DB instance.</p> </li> <li> <p>Can specify a DB
     * instance that is a MySQL Read Replica only if the source is running MySQL 5.6 or
     * later.</p> </li> <li> <p>For the limitations of Oracle Read Replicas, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.html">Read
     * Replica Limitations with Oracle</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </li> <li> <p>Can specify a DB instance that is a PostgreSQL DB instance only if
     * the source is running PostgreSQL 9.3.5 or later (9.4.7 and higher for
     * cross-region replication).</p> </li> <li> <p>The specified DB instance must have
     * automatic backups enabled, its backup retention period must be greater than
     * 0.</p> </li> <li> <p>If the source DB instance is in the same AWS Region as the
     * Read Replica, specify a valid DB instance identifier.</p> </li> <li> <p>If the
     * source DB instance is in a different AWS Region than the Read Replica, specify a
     * valid DB instance ARN. For more information, go to <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an ARN for Amazon RDS</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </li> </ul>
     */
    inline void SetSourceDBInstanceIdentifier(const Aws::String& value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier = value; }

    /**
     * <p>The identifier of the DB instance that will act as the source for the Read
     * Replica. Each DB instance can have up to five Read Replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, Oracle, or PostgreSQL DB instance.</p> </li> <li> <p>Can specify a DB
     * instance that is a MySQL Read Replica only if the source is running MySQL 5.6 or
     * later.</p> </li> <li> <p>For the limitations of Oracle Read Replicas, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.html">Read
     * Replica Limitations with Oracle</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </li> <li> <p>Can specify a DB instance that is a PostgreSQL DB instance only if
     * the source is running PostgreSQL 9.3.5 or later (9.4.7 and higher for
     * cross-region replication).</p> </li> <li> <p>The specified DB instance must have
     * automatic backups enabled, its backup retention period must be greater than
     * 0.</p> </li> <li> <p>If the source DB instance is in the same AWS Region as the
     * Read Replica, specify a valid DB instance identifier.</p> </li> <li> <p>If the
     * source DB instance is in a different AWS Region than the Read Replica, specify a
     * valid DB instance ARN. For more information, go to <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an ARN for Amazon RDS</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </li> </ul>
     */
    inline void SetSourceDBInstanceIdentifier(Aws::String&& value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier = std::move(value); }

    /**
     * <p>The identifier of the DB instance that will act as the source for the Read
     * Replica. Each DB instance can have up to five Read Replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, Oracle, or PostgreSQL DB instance.</p> </li> <li> <p>Can specify a DB
     * instance that is a MySQL Read Replica only if the source is running MySQL 5.6 or
     * later.</p> </li> <li> <p>For the limitations of Oracle Read Replicas, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.html">Read
     * Replica Limitations with Oracle</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </li> <li> <p>Can specify a DB instance that is a PostgreSQL DB instance only if
     * the source is running PostgreSQL 9.3.5 or later (9.4.7 and higher for
     * cross-region replication).</p> </li> <li> <p>The specified DB instance must have
     * automatic backups enabled, its backup retention period must be greater than
     * 0.</p> </li> <li> <p>If the source DB instance is in the same AWS Region as the
     * Read Replica, specify a valid DB instance identifier.</p> </li> <li> <p>If the
     * source DB instance is in a different AWS Region than the Read Replica, specify a
     * valid DB instance ARN. For more information, go to <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an ARN for Amazon RDS</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </li> </ul>
     */
    inline void SetSourceDBInstanceIdentifier(const char* value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier.assign(value); }

    /**
     * <p>The identifier of the DB instance that will act as the source for the Read
     * Replica. Each DB instance can have up to five Read Replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, Oracle, or PostgreSQL DB instance.</p> </li> <li> <p>Can specify a DB
     * instance that is a MySQL Read Replica only if the source is running MySQL 5.6 or
     * later.</p> </li> <li> <p>For the limitations of Oracle Read Replicas, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.html">Read
     * Replica Limitations with Oracle</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </li> <li> <p>Can specify a DB instance that is a PostgreSQL DB instance only if
     * the source is running PostgreSQL 9.3.5 or later (9.4.7 and higher for
     * cross-region replication).</p> </li> <li> <p>The specified DB instance must have
     * automatic backups enabled, its backup retention period must be greater than
     * 0.</p> </li> <li> <p>If the source DB instance is in the same AWS Region as the
     * Read Replica, specify a valid DB instance identifier.</p> </li> <li> <p>If the
     * source DB instance is in a different AWS Region than the Read Replica, specify a
     * valid DB instance ARN. For more information, go to <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an ARN for Amazon RDS</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </li> </ul>
     */
    inline CreateDBInstanceReadReplicaRequest& WithSourceDBInstanceIdentifier(const Aws::String& value) { SetSourceDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The identifier of the DB instance that will act as the source for the Read
     * Replica. Each DB instance can have up to five Read Replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, Oracle, or PostgreSQL DB instance.</p> </li> <li> <p>Can specify a DB
     * instance that is a MySQL Read Replica only if the source is running MySQL 5.6 or
     * later.</p> </li> <li> <p>For the limitations of Oracle Read Replicas, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.html">Read
     * Replica Limitations with Oracle</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </li> <li> <p>Can specify a DB instance that is a PostgreSQL DB instance only if
     * the source is running PostgreSQL 9.3.5 or later (9.4.7 and higher for
     * cross-region replication).</p> </li> <li> <p>The specified DB instance must have
     * automatic backups enabled, its backup retention period must be greater than
     * 0.</p> </li> <li> <p>If the source DB instance is in the same AWS Region as the
     * Read Replica, specify a valid DB instance identifier.</p> </li> <li> <p>If the
     * source DB instance is in a different AWS Region than the Read Replica, specify a
     * valid DB instance ARN. For more information, go to <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an ARN for Amazon RDS</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </li> </ul>
     */
    inline CreateDBInstanceReadReplicaRequest& WithSourceDBInstanceIdentifier(Aws::String&& value) { SetSourceDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the DB instance that will act as the source for the Read
     * Replica. Each DB instance can have up to five Read Replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, Oracle, or PostgreSQL DB instance.</p> </li> <li> <p>Can specify a DB
     * instance that is a MySQL Read Replica only if the source is running MySQL 5.6 or
     * later.</p> </li> <li> <p>For the limitations of Oracle Read Replicas, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.html">Read
     * Replica Limitations with Oracle</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </li> <li> <p>Can specify a DB instance that is a PostgreSQL DB instance only if
     * the source is running PostgreSQL 9.3.5 or later (9.4.7 and higher for
     * cross-region replication).</p> </li> <li> <p>The specified DB instance must have
     * automatic backups enabled, its backup retention period must be greater than
     * 0.</p> </li> <li> <p>If the source DB instance is in the same AWS Region as the
     * Read Replica, specify a valid DB instance identifier.</p> </li> <li> <p>If the
     * source DB instance is in a different AWS Region than the Read Replica, specify a
     * valid DB instance ARN. For more information, go to <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an ARN for Amazon RDS</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </li> </ul>
     */
    inline CreateDBInstanceReadReplicaRequest& WithSourceDBInstanceIdentifier(const char* value) { SetSourceDBInstanceIdentifier(value); return *this;}


    /**
     * <p>The compute and memory capacity of the Read Replica, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default:
     * Inherits from the source DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p>The compute and memory capacity of the Read Replica, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default:
     * Inherits from the source DB instance.</p>
     */
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }

    /**
     * <p>The compute and memory capacity of the Read Replica, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default:
     * Inherits from the source DB instance.</p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>The compute and memory capacity of the Read Replica, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default:
     * Inherits from the source DB instance.</p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }

    /**
     * <p>The compute and memory capacity of the Read Replica, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default:
     * Inherits from the source DB instance.</p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p>The compute and memory capacity of the Read Replica, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default:
     * Inherits from the source DB instance.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The compute and memory capacity of the Read Replica, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default:
     * Inherits from the source DB instance.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}

    /**
     * <p>The compute and memory capacity of the Read Replica, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default:
     * Inherits from the source DB instance.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}


    /**
     * <p>The Availability Zone (AZ) where the Read Replica will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone in the endpoint's AWS
     * Region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone (AZ) where the Read Replica will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone in the endpoint's AWS
     * Region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone (AZ) where the Read Replica will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone in the endpoint's AWS
     * Region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone (AZ) where the Read Replica will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone in the endpoint's AWS
     * Region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone (AZ) where the Read Replica will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone in the endpoint's AWS
     * Region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone (AZ) where the Read Replica will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone in the endpoint's AWS
     * Region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone (AZ) where the Read Replica will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone in the endpoint's AWS
     * Region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone (AZ) where the Read Replica will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone in the endpoint's AWS
     * Region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The port number that the DB instance uses for connections.</p> <p>Default:
     * Inherits from the source DB instance</p> <p>Valid Values:
     * <code>1150-65535</code> </p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number that the DB instance uses for connections.</p> <p>Default:
     * Inherits from the source DB instance</p> <p>Valid Values:
     * <code>1150-65535</code> </p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number that the DB instance uses for connections.</p> <p>Default:
     * Inherits from the source DB instance</p> <p>Valid Values:
     * <code>1150-65535</code> </p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number that the DB instance uses for connections.</p> <p>Default:
     * Inherits from the source DB instance</p> <p>Valid Values:
     * <code>1150-65535</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>A value that indicates whether the Read Replica is in a Multi-AZ deployment.
     * </p> <p>You can create a Read Replica as a Multi-AZ DB instance. RDS creates a
     * standby of your replica in another Availability Zone for failover support for
     * the replica. Creating your Read Replica as a Multi-AZ DB instance is independent
     * of whether the source database is a Multi-AZ DB instance. </p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p>A value that indicates whether the Read Replica is in a Multi-AZ deployment.
     * </p> <p>You can create a Read Replica as a Multi-AZ DB instance. RDS creates a
     * standby of your replica in another Availability Zone for failover support for
     * the replica. Creating your Read Replica as a Multi-AZ DB instance is independent
     * of whether the source database is a Multi-AZ DB instance. </p>
     */
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }

    /**
     * <p>A value that indicates whether the Read Replica is in a Multi-AZ deployment.
     * </p> <p>You can create a Read Replica as a Multi-AZ DB instance. RDS creates a
     * standby of your replica in another Availability Zone for failover support for
     * the replica. Creating your Read Replica as a Multi-AZ DB instance is independent
     * of whether the source database is a Multi-AZ DB instance. </p>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p>A value that indicates whether the Read Replica is in a Multi-AZ deployment.
     * </p> <p>You can create a Read Replica as a Multi-AZ DB instance. RDS creates a
     * standby of your replica in another Availability Zone for failover support for
     * the replica. Creating your Read Replica as a Multi-AZ DB instance is independent
     * of whether the source database is a Multi-AZ DB instance. </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}


    /**
     * <p>A value that indicates whether minor engine upgrades are applied
     * automatically to the Read Replica during the maintenance window.</p> <p>Default:
     * Inherits from the source DB instance</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>A value that indicates whether minor engine upgrades are applied
     * automatically to the Read Replica during the maintenance window.</p> <p>Default:
     * Inherits from the source DB instance</p>
     */
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }

    /**
     * <p>A value that indicates whether minor engine upgrades are applied
     * automatically to the Read Replica during the maintenance window.</p> <p>Default:
     * Inherits from the source DB instance</p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p>A value that indicates whether minor engine upgrades are applied
     * automatically to the Read Replica during the maintenance window.</p> <p>Default:
     * Inherits from the source DB instance</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB instance.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB instance.</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB instance.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB instance.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>The option group the DB instance is associated with. If omitted, the option
     * group associated with the source instance is used.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>The option group the DB instance is associated with. If omitted, the option
     * group associated with the source instance is used.</p>
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p>The option group the DB instance is associated with. If omitted, the option
     * group associated with the source instance is used.</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The option group the DB instance is associated with. If omitted, the option
     * group associated with the source instance is used.</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p>The option group the DB instance is associated with. If omitted, the option
     * group associated with the source instance is used.</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>The option group the DB instance is associated with. If omitted, the option
     * group associated with the source instance is used.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The option group the DB instance is associated with. If omitted, the option
     * group associated with the source instance is used.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>The option group the DB instance is associated with. If omitted, the option
     * group associated with the source instance is used.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}


    /**
     * <p>A value that indicates whether the DB instance is publicly accessible. When
     * the DB instance is publicly accessible, it is an Internet-facing instance with a
     * publicly resolvable DNS name, which resolves to a public IP address. When the DB
     * instance is not publicly accessible, it is an internal instance with a DNS name
     * that resolves to a private IP address. For more information, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>A value that indicates whether the DB instance is publicly accessible. When
     * the DB instance is publicly accessible, it is an Internet-facing instance with a
     * publicly resolvable DNS name, which resolves to a public IP address. When the DB
     * instance is not publicly accessible, it is an internal instance with a DNS name
     * that resolves to a private IP address. For more information, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB instance is publicly accessible. When
     * the DB instance is publicly accessible, it is an Internet-facing instance with a
     * publicly resolvable DNS name, which resolves to a public IP address. When the DB
     * instance is not publicly accessible, it is an internal instance with a DNS name
     * that resolves to a private IP address. For more information, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>A value that indicates whether the DB instance is publicly accessible. When
     * the DB instance is publicly accessible, it is an Internet-facing instance with a
     * publicly resolvable DNS name, which resolves to a public IP address. When the DB
     * instance is not publicly accessible, it is an internal instance with a DNS name
     * that resolves to a private IP address. For more information, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreateDBInstanceReadReplicaRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CreateDBInstanceReadReplicaRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateDBInstanceReadReplicaRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CreateDBInstanceReadReplicaRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance is
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance is not created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another AWS Region.</p> </li> <li> <p>If
     * supplied, must match the name of an existing DBSubnetGroup.</p> </li> <li>
     * <p>The specified DB subnet group must be in the same AWS Region in which the
     * operation is running.</p> </li> <li> <p>All Read Replicas in one AWS Region that
     * are created from the same source DB instance must either:&gt;</p> <ul> <li>
     * <p>Specify DB subnet groups from the same VPC. All these Read Replicas are
     * created in the same VPC.</p> </li> <li> <p>Not specify a DB subnet group. All
     * these Read Replicas are created outside of any VPC.</p> </li> </ul> </li> </ul>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance is
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance is not created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another AWS Region.</p> </li> <li> <p>If
     * supplied, must match the name of an existing DBSubnetGroup.</p> </li> <li>
     * <p>The specified DB subnet group must be in the same AWS Region in which the
     * operation is running.</p> </li> <li> <p>All Read Replicas in one AWS Region that
     * are created from the same source DB instance must either:&gt;</p> <ul> <li>
     * <p>Specify DB subnet groups from the same VPC. All these Read Replicas are
     * created in the same VPC.</p> </li> <li> <p>Not specify a DB subnet group. All
     * these Read Replicas are created outside of any VPC.</p> </li> </ul> </li> </ul>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance is
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance is not created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another AWS Region.</p> </li> <li> <p>If
     * supplied, must match the name of an existing DBSubnetGroup.</p> </li> <li>
     * <p>The specified DB subnet group must be in the same AWS Region in which the
     * operation is running.</p> </li> <li> <p>All Read Replicas in one AWS Region that
     * are created from the same source DB instance must either:&gt;</p> <ul> <li>
     * <p>Specify DB subnet groups from the same VPC. All these Read Replicas are
     * created in the same VPC.</p> </li> <li> <p>Not specify a DB subnet group. All
     * these Read Replicas are created outside of any VPC.</p> </li> </ul> </li> </ul>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance is
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance is not created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another AWS Region.</p> </li> <li> <p>If
     * supplied, must match the name of an existing DBSubnetGroup.</p> </li> <li>
     * <p>The specified DB subnet group must be in the same AWS Region in which the
     * operation is running.</p> </li> <li> <p>All Read Replicas in one AWS Region that
     * are created from the same source DB instance must either:&gt;</p> <ul> <li>
     * <p>Specify DB subnet groups from the same VPC. All these Read Replicas are
     * created in the same VPC.</p> </li> <li> <p>Not specify a DB subnet group. All
     * these Read Replicas are created outside of any VPC.</p> </li> </ul> </li> </ul>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance is
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance is not created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another AWS Region.</p> </li> <li> <p>If
     * supplied, must match the name of an existing DBSubnetGroup.</p> </li> <li>
     * <p>The specified DB subnet group must be in the same AWS Region in which the
     * operation is running.</p> </li> <li> <p>All Read Replicas in one AWS Region that
     * are created from the same source DB instance must either:&gt;</p> <ul> <li>
     * <p>Specify DB subnet groups from the same VPC. All these Read Replicas are
     * created in the same VPC.</p> </li> <li> <p>Not specify a DB subnet group. All
     * these Read Replicas are created outside of any VPC.</p> </li> </ul> </li> </ul>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance is
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance is not created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another AWS Region.</p> </li> <li> <p>If
     * supplied, must match the name of an existing DBSubnetGroup.</p> </li> <li>
     * <p>The specified DB subnet group must be in the same AWS Region in which the
     * operation is running.</p> </li> <li> <p>All Read Replicas in one AWS Region that
     * are created from the same source DB instance must either:&gt;</p> <ul> <li>
     * <p>Specify DB subnet groups from the same VPC. All these Read Replicas are
     * created in the same VPC.</p> </li> <li> <p>Not specify a DB subnet group. All
     * these Read Replicas are created outside of any VPC.</p> </li> </ul> </li> </ul>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance is
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance is not created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another AWS Region.</p> </li> <li> <p>If
     * supplied, must match the name of an existing DBSubnetGroup.</p> </li> <li>
     * <p>The specified DB subnet group must be in the same AWS Region in which the
     * operation is running.</p> </li> <li> <p>All Read Replicas in one AWS Region that
     * are created from the same source DB instance must either:&gt;</p> <ul> <li>
     * <p>Specify DB subnet groups from the same VPC. All these Read Replicas are
     * created in the same VPC.</p> </li> <li> <p>Not specify a DB subnet group. All
     * these Read Replicas are created outside of any VPC.</p> </li> </ul> </li> </ul>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance is
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance is not created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another AWS Region.</p> </li> <li> <p>If
     * supplied, must match the name of an existing DBSubnetGroup.</p> </li> <li>
     * <p>The specified DB subnet group must be in the same AWS Region in which the
     * operation is running.</p> </li> <li> <p>All Read Replicas in one AWS Region that
     * are created from the same source DB instance must either:&gt;</p> <ul> <li>
     * <p>Specify DB subnet groups from the same VPC. All these Read Replicas are
     * created in the same VPC.</p> </li> <li> <p>Not specify a DB subnet group. All
     * these Read Replicas are created outside of any VPC.</p> </li> </ul> </li> </ul>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}


    /**
     * <p> A list of EC2 VPC security groups to associate with the Read Replica. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p> A list of EC2 VPC security groups to associate with the Read Replica. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p> A list of EC2 VPC security groups to associate with the Read Replica. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p> A list of EC2 VPC security groups to associate with the Read Replica. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p> A list of EC2 VPC security groups to associate with the Read Replica. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p> A list of EC2 VPC security groups to associate with the Read Replica. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p> A list of EC2 VPC security groups to associate with the Read Replica. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline CreateDBInstanceReadReplicaRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p> A list of EC2 VPC security groups to associate with the Read Replica. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline CreateDBInstanceReadReplicaRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of EC2 VPC security groups to associate with the Read Replica. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline CreateDBInstanceReadReplicaRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>Specifies the storage type to be associated with the Read Replica.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>gp2</code> </p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Specifies the storage type to be associated with the Read Replica.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>gp2</code> </p>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>Specifies the storage type to be associated with the Read Replica.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>gp2</code> </p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Specifies the storage type to be associated with the Read Replica.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>gp2</code> </p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>Specifies the storage type to be associated with the Read Replica.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>gp2</code> </p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>Specifies the storage type to be associated with the Read Replica.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>gp2</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the Read Replica.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>gp2</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the Read Replica.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>gp2</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithStorageType(const char* value) { SetStorageType(value); return *this;}


    /**
     * <p>A value that indicates whether to copy all tags from the Read Replica to
     * snapshots of the Read Replica. By default, tags are not copied.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }

    /**
     * <p>A value that indicates whether to copy all tags from the Read Replica to
     * snapshots of the Read Replica. By default, tags are not copied.</p>
     */
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }

    /**
     * <p>A value that indicates whether to copy all tags from the Read Replica to
     * snapshots of the Read Replica. By default, tags are not copied.</p>
     */
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }

    /**
     * <p>A value that indicates whether to copy all tags from the Read Replica to
     * snapshots of the Read Replica. By default, tags are not copied.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}


    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the Read Replica. To disable collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, then you must also set <code>MonitoringInterval</code> to a value
     * other than 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p>
     */
    inline int GetMonitoringInterval() const{ return m_monitoringInterval; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the Read Replica. To disable collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, then you must also set <code>MonitoringInterval</code> to a value
     * other than 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p>
     */
    inline bool MonitoringIntervalHasBeenSet() const { return m_monitoringIntervalHasBeenSet; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the Read Replica. To disable collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, then you must also set <code>MonitoringInterval</code> to a value
     * other than 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p>
     */
    inline void SetMonitoringInterval(int value) { m_monitoringIntervalHasBeenSet = true; m_monitoringInterval = value; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the Read Replica. To disable collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, then you must also set <code>MonitoringInterval</code> to a value
     * other than 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithMonitoringInterval(int value) { SetMonitoringInterval(value); return *this;}


    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a> in the <i>Amazon RDS
     * User Guide</i>.</p> <p>If <code>MonitoringInterval</code> is set to a value
     * other than 0, then you must supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline const Aws::String& GetMonitoringRoleArn() const{ return m_monitoringRoleArn; }

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a> in the <i>Amazon RDS
     * User Guide</i>.</p> <p>If <code>MonitoringInterval</code> is set to a value
     * other than 0, then you must supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline bool MonitoringRoleArnHasBeenSet() const { return m_monitoringRoleArnHasBeenSet; }

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a> in the <i>Amazon RDS
     * User Guide</i>.</p> <p>If <code>MonitoringInterval</code> is set to a value
     * other than 0, then you must supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline void SetMonitoringRoleArn(const Aws::String& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = value; }

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a> in the <i>Amazon RDS
     * User Guide</i>.</p> <p>If <code>MonitoringInterval</code> is set to a value
     * other than 0, then you must supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline void SetMonitoringRoleArn(Aws::String&& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = std::move(value); }

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a> in the <i>Amazon RDS
     * User Guide</i>.</p> <p>If <code>MonitoringInterval</code> is set to a value
     * other than 0, then you must supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline void SetMonitoringRoleArn(const char* value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn.assign(value); }

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a> in the <i>Amazon RDS
     * User Guide</i>.</p> <p>If <code>MonitoringInterval</code> is set to a value
     * other than 0, then you must supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithMonitoringRoleArn(const Aws::String& value) { SetMonitoringRoleArn(value); return *this;}

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a> in the <i>Amazon RDS
     * User Guide</i>.</p> <p>If <code>MonitoringInterval</code> is set to a value
     * other than 0, then you must supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithMonitoringRoleArn(Aws::String&& value) { SetMonitoringRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a> in the <i>Amazon RDS
     * User Guide</i>.</p> <p>If <code>MonitoringInterval</code> is set to a value
     * other than 0, then you must supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithMonitoringRoleArn(const char* value) { SetMonitoringRoleArn(value); return *this;}


    /**
     * <p>The AWS KMS key ID for an encrypted Read Replica. The KMS key ID is the
     * Amazon Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you create an encrypted Read Replica in the same AWS
     * Region as the source DB instance, then you do not have to specify a value for
     * this parameter. The Read Replica is encrypted with the same KMS key as the
     * source DB instance. </p> <p>If you create an encrypted Read Replica in a
     * different AWS Region, then you must specify a KMS key for the destination AWS
     * Region. KMS encryption keys are specific to the AWS Region that they are created
     * in, and you can't use encryption keys from one AWS Region in another AWS Region.
     * </p> <p>You can't create an encrypted Read Replica from an unencrypted DB
     * instance. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The AWS KMS key ID for an encrypted Read Replica. The KMS key ID is the
     * Amazon Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you create an encrypted Read Replica in the same AWS
     * Region as the source DB instance, then you do not have to specify a value for
     * this parameter. The Read Replica is encrypted with the same KMS key as the
     * source DB instance. </p> <p>If you create an encrypted Read Replica in a
     * different AWS Region, then you must specify a KMS key for the destination AWS
     * Region. KMS encryption keys are specific to the AWS Region that they are created
     * in, and you can't use encryption keys from one AWS Region in another AWS Region.
     * </p> <p>You can't create an encrypted Read Replica from an unencrypted DB
     * instance. </p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The AWS KMS key ID for an encrypted Read Replica. The KMS key ID is the
     * Amazon Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you create an encrypted Read Replica in the same AWS
     * Region as the source DB instance, then you do not have to specify a value for
     * this parameter. The Read Replica is encrypted with the same KMS key as the
     * source DB instance. </p> <p>If you create an encrypted Read Replica in a
     * different AWS Region, then you must specify a KMS key for the destination AWS
     * Region. KMS encryption keys are specific to the AWS Region that they are created
     * in, and you can't use encryption keys from one AWS Region in another AWS Region.
     * </p> <p>You can't create an encrypted Read Replica from an unencrypted DB
     * instance. </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The AWS KMS key ID for an encrypted Read Replica. The KMS key ID is the
     * Amazon Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you create an encrypted Read Replica in the same AWS
     * Region as the source DB instance, then you do not have to specify a value for
     * this parameter. The Read Replica is encrypted with the same KMS key as the
     * source DB instance. </p> <p>If you create an encrypted Read Replica in a
     * different AWS Region, then you must specify a KMS key for the destination AWS
     * Region. KMS encryption keys are specific to the AWS Region that they are created
     * in, and you can't use encryption keys from one AWS Region in another AWS Region.
     * </p> <p>You can't create an encrypted Read Replica from an unencrypted DB
     * instance. </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The AWS KMS key ID for an encrypted Read Replica. The KMS key ID is the
     * Amazon Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you create an encrypted Read Replica in the same AWS
     * Region as the source DB instance, then you do not have to specify a value for
     * this parameter. The Read Replica is encrypted with the same KMS key as the
     * source DB instance. </p> <p>If you create an encrypted Read Replica in a
     * different AWS Region, then you must specify a KMS key for the destination AWS
     * Region. KMS encryption keys are specific to the AWS Region that they are created
     * in, and you can't use encryption keys from one AWS Region in another AWS Region.
     * </p> <p>You can't create an encrypted Read Replica from an unencrypted DB
     * instance. </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The AWS KMS key ID for an encrypted Read Replica. The KMS key ID is the
     * Amazon Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you create an encrypted Read Replica in the same AWS
     * Region as the source DB instance, then you do not have to specify a value for
     * this parameter. The Read Replica is encrypted with the same KMS key as the
     * source DB instance. </p> <p>If you create an encrypted Read Replica in a
     * different AWS Region, then you must specify a KMS key for the destination AWS
     * Region. KMS encryption keys are specific to the AWS Region that they are created
     * in, and you can't use encryption keys from one AWS Region in another AWS Region.
     * </p> <p>You can't create an encrypted Read Replica from an unencrypted DB
     * instance. </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS KMS key ID for an encrypted Read Replica. The KMS key ID is the
     * Amazon Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you create an encrypted Read Replica in the same AWS
     * Region as the source DB instance, then you do not have to specify a value for
     * this parameter. The Read Replica is encrypted with the same KMS key as the
     * source DB instance. </p> <p>If you create an encrypted Read Replica in a
     * different AWS Region, then you must specify a KMS key for the destination AWS
     * Region. KMS encryption keys are specific to the AWS Region that they are created
     * in, and you can't use encryption keys from one AWS Region in another AWS Region.
     * </p> <p>You can't create an encrypted Read Replica from an unencrypted DB
     * instance. </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS KMS key ID for an encrypted Read Replica. The KMS key ID is the
     * Amazon Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you create an encrypted Read Replica in the same AWS
     * Region as the source DB instance, then you do not have to specify a value for
     * this parameter. The Read Replica is encrypted with the same KMS key as the
     * source DB instance. </p> <p>If you create an encrypted Read Replica in a
     * different AWS Region, then you must specify a KMS key for the destination AWS
     * Region. KMS encryption keys are specific to the AWS Region that they are created
     * in, and you can't use encryption keys from one AWS Region in another AWS Region.
     * </p> <p>You can't create an encrypted Read Replica from an unencrypted DB
     * instance. </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBInstanceReadReplica</code> API action in the source AWS Region
     * that contains the source DB instance. </p> <p>You must specify this parameter
     * when you create an encrypted Read Replica from another AWS Region by using the
     * Amazon RDS API. You can specify the <code>--source-region</code> option instead
     * of this parameter when you create an encrypted Read Replica from another AWS
     * Region by using the AWS CLI. </p> <p>The presigned URL must be a valid request
     * for the <code>CreateDBInstanceReadReplica</code> API action that can be executed
     * in the source AWS Region that contains the encrypted source DB instance. The
     * presigned URL request must contain the following parameter values: </p> <ul>
     * <li> <p> <code>DestinationRegion</code> - The AWS Region that the encrypted Read
     * Replica is created in. This AWS Region is the same one where the
     * <code>CreateDBInstanceReadReplica</code> action is called that contains this
     * presigned URL. </p> <p>For example, if you create an encrypted DB instance in
     * the us-west-1 AWS Region, from a source DB instance in the us-east-2 AWS Region,
     * then you call the <code>CreateDBInstanceReadReplica</code> action in the
     * us-east-1 AWS Region and provide a presigned URL that contains a call to the
     * <code>CreateDBInstanceReadReplica</code> action in the us-west-2 AWS Region. For
     * this example, the <code>DestinationRegion</code> in the presigned URL must be
     * set to the us-east-1 AWS Region. </p> </li> <li> <p> <code>KmsKeyId</code> - The
     * AWS KMS key identifier for the key to use to encrypt the Read Replica in the
     * destination AWS Region. This is the same identifier for both the
     * <code>CreateDBInstanceReadReplica</code> action that is called in the
     * destination AWS Region, and the action contained in the presigned URL. </p>
     * </li> <li> <p> <code>SourceDBInstanceIdentifier</code> - The DB instance
     * identifier for the encrypted DB instance to be replicated. This identifier must
     * be in the Amazon Resource Name (ARN) format for the source AWS Region. For
     * example, if you are creating an encrypted Read Replica from a DB instance in the
     * us-west-2 AWS Region, then your <code>SourceDBInstanceIdentifier</code> looks
     * like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:instance:mysql-instance1-20161115</code>.
     * </p> </li> </ul> <p>To learn how to generate a Signature Version 4 signed
     * request, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (AWS Signature Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>. </p>
     */
    inline const Aws::String& GetPreSignedUrl() const{ return m_preSignedUrl; }

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBInstanceReadReplica</code> API action in the source AWS Region
     * that contains the source DB instance. </p> <p>You must specify this parameter
     * when you create an encrypted Read Replica from another AWS Region by using the
     * Amazon RDS API. You can specify the <code>--source-region</code> option instead
     * of this parameter when you create an encrypted Read Replica from another AWS
     * Region by using the AWS CLI. </p> <p>The presigned URL must be a valid request
     * for the <code>CreateDBInstanceReadReplica</code> API action that can be executed
     * in the source AWS Region that contains the encrypted source DB instance. The
     * presigned URL request must contain the following parameter values: </p> <ul>
     * <li> <p> <code>DestinationRegion</code> - The AWS Region that the encrypted Read
     * Replica is created in. This AWS Region is the same one where the
     * <code>CreateDBInstanceReadReplica</code> action is called that contains this
     * presigned URL. </p> <p>For example, if you create an encrypted DB instance in
     * the us-west-1 AWS Region, from a source DB instance in the us-east-2 AWS Region,
     * then you call the <code>CreateDBInstanceReadReplica</code> action in the
     * us-east-1 AWS Region and provide a presigned URL that contains a call to the
     * <code>CreateDBInstanceReadReplica</code> action in the us-west-2 AWS Region. For
     * this example, the <code>DestinationRegion</code> in the presigned URL must be
     * set to the us-east-1 AWS Region. </p> </li> <li> <p> <code>KmsKeyId</code> - The
     * AWS KMS key identifier for the key to use to encrypt the Read Replica in the
     * destination AWS Region. This is the same identifier for both the
     * <code>CreateDBInstanceReadReplica</code> action that is called in the
     * destination AWS Region, and the action contained in the presigned URL. </p>
     * </li> <li> <p> <code>SourceDBInstanceIdentifier</code> - The DB instance
     * identifier for the encrypted DB instance to be replicated. This identifier must
     * be in the Amazon Resource Name (ARN) format for the source AWS Region. For
     * example, if you are creating an encrypted Read Replica from a DB instance in the
     * us-west-2 AWS Region, then your <code>SourceDBInstanceIdentifier</code> looks
     * like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:instance:mysql-instance1-20161115</code>.
     * </p> </li> </ul> <p>To learn how to generate a Signature Version 4 signed
     * request, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (AWS Signature Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>. </p>
     */
    inline bool PreSignedUrlHasBeenSet() const { return m_preSignedUrlHasBeenSet; }

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBInstanceReadReplica</code> API action in the source AWS Region
     * that contains the source DB instance. </p> <p>You must specify this parameter
     * when you create an encrypted Read Replica from another AWS Region by using the
     * Amazon RDS API. You can specify the <code>--source-region</code> option instead
     * of this parameter when you create an encrypted Read Replica from another AWS
     * Region by using the AWS CLI. </p> <p>The presigned URL must be a valid request
     * for the <code>CreateDBInstanceReadReplica</code> API action that can be executed
     * in the source AWS Region that contains the encrypted source DB instance. The
     * presigned URL request must contain the following parameter values: </p> <ul>
     * <li> <p> <code>DestinationRegion</code> - The AWS Region that the encrypted Read
     * Replica is created in. This AWS Region is the same one where the
     * <code>CreateDBInstanceReadReplica</code> action is called that contains this
     * presigned URL. </p> <p>For example, if you create an encrypted DB instance in
     * the us-west-1 AWS Region, from a source DB instance in the us-east-2 AWS Region,
     * then you call the <code>CreateDBInstanceReadReplica</code> action in the
     * us-east-1 AWS Region and provide a presigned URL that contains a call to the
     * <code>CreateDBInstanceReadReplica</code> action in the us-west-2 AWS Region. For
     * this example, the <code>DestinationRegion</code> in the presigned URL must be
     * set to the us-east-1 AWS Region. </p> </li> <li> <p> <code>KmsKeyId</code> - The
     * AWS KMS key identifier for the key to use to encrypt the Read Replica in the
     * destination AWS Region. This is the same identifier for both the
     * <code>CreateDBInstanceReadReplica</code> action that is called in the
     * destination AWS Region, and the action contained in the presigned URL. </p>
     * </li> <li> <p> <code>SourceDBInstanceIdentifier</code> - The DB instance
     * identifier for the encrypted DB instance to be replicated. This identifier must
     * be in the Amazon Resource Name (ARN) format for the source AWS Region. For
     * example, if you are creating an encrypted Read Replica from a DB instance in the
     * us-west-2 AWS Region, then your <code>SourceDBInstanceIdentifier</code> looks
     * like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:instance:mysql-instance1-20161115</code>.
     * </p> </li> </ul> <p>To learn how to generate a Signature Version 4 signed
     * request, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (AWS Signature Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>. </p>
     */
    inline void SetPreSignedUrl(const Aws::String& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = value; }

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBInstanceReadReplica</code> API action in the source AWS Region
     * that contains the source DB instance. </p> <p>You must specify this parameter
     * when you create an encrypted Read Replica from another AWS Region by using the
     * Amazon RDS API. You can specify the <code>--source-region</code> option instead
     * of this parameter when you create an encrypted Read Replica from another AWS
     * Region by using the AWS CLI. </p> <p>The presigned URL must be a valid request
     * for the <code>CreateDBInstanceReadReplica</code> API action that can be executed
     * in the source AWS Region that contains the encrypted source DB instance. The
     * presigned URL request must contain the following parameter values: </p> <ul>
     * <li> <p> <code>DestinationRegion</code> - The AWS Region that the encrypted Read
     * Replica is created in. This AWS Region is the same one where the
     * <code>CreateDBInstanceReadReplica</code> action is called that contains this
     * presigned URL. </p> <p>For example, if you create an encrypted DB instance in
     * the us-west-1 AWS Region, from a source DB instance in the us-east-2 AWS Region,
     * then you call the <code>CreateDBInstanceReadReplica</code> action in the
     * us-east-1 AWS Region and provide a presigned URL that contains a call to the
     * <code>CreateDBInstanceReadReplica</code> action in the us-west-2 AWS Region. For
     * this example, the <code>DestinationRegion</code> in the presigned URL must be
     * set to the us-east-1 AWS Region. </p> </li> <li> <p> <code>KmsKeyId</code> - The
     * AWS KMS key identifier for the key to use to encrypt the Read Replica in the
     * destination AWS Region. This is the same identifier for both the
     * <code>CreateDBInstanceReadReplica</code> action that is called in the
     * destination AWS Region, and the action contained in the presigned URL. </p>
     * </li> <li> <p> <code>SourceDBInstanceIdentifier</code> - The DB instance
     * identifier for the encrypted DB instance to be replicated. This identifier must
     * be in the Amazon Resource Name (ARN) format for the source AWS Region. For
     * example, if you are creating an encrypted Read Replica from a DB instance in the
     * us-west-2 AWS Region, then your <code>SourceDBInstanceIdentifier</code> looks
     * like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:instance:mysql-instance1-20161115</code>.
     * </p> </li> </ul> <p>To learn how to generate a Signature Version 4 signed
     * request, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (AWS Signature Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>. </p>
     */
    inline void SetPreSignedUrl(Aws::String&& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = std::move(value); }

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBInstanceReadReplica</code> API action in the source AWS Region
     * that contains the source DB instance. </p> <p>You must specify this parameter
     * when you create an encrypted Read Replica from another AWS Region by using the
     * Amazon RDS API. You can specify the <code>--source-region</code> option instead
     * of this parameter when you create an encrypted Read Replica from another AWS
     * Region by using the AWS CLI. </p> <p>The presigned URL must be a valid request
     * for the <code>CreateDBInstanceReadReplica</code> API action that can be executed
     * in the source AWS Region that contains the encrypted source DB instance. The
     * presigned URL request must contain the following parameter values: </p> <ul>
     * <li> <p> <code>DestinationRegion</code> - The AWS Region that the encrypted Read
     * Replica is created in. This AWS Region is the same one where the
     * <code>CreateDBInstanceReadReplica</code> action is called that contains this
     * presigned URL. </p> <p>For example, if you create an encrypted DB instance in
     * the us-west-1 AWS Region, from a source DB instance in the us-east-2 AWS Region,
     * then you call the <code>CreateDBInstanceReadReplica</code> action in the
     * us-east-1 AWS Region and provide a presigned URL that contains a call to the
     * <code>CreateDBInstanceReadReplica</code> action in the us-west-2 AWS Region. For
     * this example, the <code>DestinationRegion</code> in the presigned URL must be
     * set to the us-east-1 AWS Region. </p> </li> <li> <p> <code>KmsKeyId</code> - The
     * AWS KMS key identifier for the key to use to encrypt the Read Replica in the
     * destination AWS Region. This is the same identifier for both the
     * <code>CreateDBInstanceReadReplica</code> action that is called in the
     * destination AWS Region, and the action contained in the presigned URL. </p>
     * </li> <li> <p> <code>SourceDBInstanceIdentifier</code> - The DB instance
     * identifier for the encrypted DB instance to be replicated. This identifier must
     * be in the Amazon Resource Name (ARN) format for the source AWS Region. For
     * example, if you are creating an encrypted Read Replica from a DB instance in the
     * us-west-2 AWS Region, then your <code>SourceDBInstanceIdentifier</code> looks
     * like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:instance:mysql-instance1-20161115</code>.
     * </p> </li> </ul> <p>To learn how to generate a Signature Version 4 signed
     * request, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (AWS Signature Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>. </p>
     */
    inline void SetPreSignedUrl(const char* value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl.assign(value); }

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBInstanceReadReplica</code> API action in the source AWS Region
     * that contains the source DB instance. </p> <p>You must specify this parameter
     * when you create an encrypted Read Replica from another AWS Region by using the
     * Amazon RDS API. You can specify the <code>--source-region</code> option instead
     * of this parameter when you create an encrypted Read Replica from another AWS
     * Region by using the AWS CLI. </p> <p>The presigned URL must be a valid request
     * for the <code>CreateDBInstanceReadReplica</code> API action that can be executed
     * in the source AWS Region that contains the encrypted source DB instance. The
     * presigned URL request must contain the following parameter values: </p> <ul>
     * <li> <p> <code>DestinationRegion</code> - The AWS Region that the encrypted Read
     * Replica is created in. This AWS Region is the same one where the
     * <code>CreateDBInstanceReadReplica</code> action is called that contains this
     * presigned URL. </p> <p>For example, if you create an encrypted DB instance in
     * the us-west-1 AWS Region, from a source DB instance in the us-east-2 AWS Region,
     * then you call the <code>CreateDBInstanceReadReplica</code> action in the
     * us-east-1 AWS Region and provide a presigned URL that contains a call to the
     * <code>CreateDBInstanceReadReplica</code> action in the us-west-2 AWS Region. For
     * this example, the <code>DestinationRegion</code> in the presigned URL must be
     * set to the us-east-1 AWS Region. </p> </li> <li> <p> <code>KmsKeyId</code> - The
     * AWS KMS key identifier for the key to use to encrypt the Read Replica in the
     * destination AWS Region. This is the same identifier for both the
     * <code>CreateDBInstanceReadReplica</code> action that is called in the
     * destination AWS Region, and the action contained in the presigned URL. </p>
     * </li> <li> <p> <code>SourceDBInstanceIdentifier</code> - The DB instance
     * identifier for the encrypted DB instance to be replicated. This identifier must
     * be in the Amazon Resource Name (ARN) format for the source AWS Region. For
     * example, if you are creating an encrypted Read Replica from a DB instance in the
     * us-west-2 AWS Region, then your <code>SourceDBInstanceIdentifier</code> looks
     * like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:instance:mysql-instance1-20161115</code>.
     * </p> </li> </ul> <p>To learn how to generate a Signature Version 4 signed
     * request, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (AWS Signature Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>. </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithPreSignedUrl(const Aws::String& value) { SetPreSignedUrl(value); return *this;}

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBInstanceReadReplica</code> API action in the source AWS Region
     * that contains the source DB instance. </p> <p>You must specify this parameter
     * when you create an encrypted Read Replica from another AWS Region by using the
     * Amazon RDS API. You can specify the <code>--source-region</code> option instead
     * of this parameter when you create an encrypted Read Replica from another AWS
     * Region by using the AWS CLI. </p> <p>The presigned URL must be a valid request
     * for the <code>CreateDBInstanceReadReplica</code> API action that can be executed
     * in the source AWS Region that contains the encrypted source DB instance. The
     * presigned URL request must contain the following parameter values: </p> <ul>
     * <li> <p> <code>DestinationRegion</code> - The AWS Region that the encrypted Read
     * Replica is created in. This AWS Region is the same one where the
     * <code>CreateDBInstanceReadReplica</code> action is called that contains this
     * presigned URL. </p> <p>For example, if you create an encrypted DB instance in
     * the us-west-1 AWS Region, from a source DB instance in the us-east-2 AWS Region,
     * then you call the <code>CreateDBInstanceReadReplica</code> action in the
     * us-east-1 AWS Region and provide a presigned URL that contains a call to the
     * <code>CreateDBInstanceReadReplica</code> action in the us-west-2 AWS Region. For
     * this example, the <code>DestinationRegion</code> in the presigned URL must be
     * set to the us-east-1 AWS Region. </p> </li> <li> <p> <code>KmsKeyId</code> - The
     * AWS KMS key identifier for the key to use to encrypt the Read Replica in the
     * destination AWS Region. This is the same identifier for both the
     * <code>CreateDBInstanceReadReplica</code> action that is called in the
     * destination AWS Region, and the action contained in the presigned URL. </p>
     * </li> <li> <p> <code>SourceDBInstanceIdentifier</code> - The DB instance
     * identifier for the encrypted DB instance to be replicated. This identifier must
     * be in the Amazon Resource Name (ARN) format for the source AWS Region. For
     * example, if you are creating an encrypted Read Replica from a DB instance in the
     * us-west-2 AWS Region, then your <code>SourceDBInstanceIdentifier</code> looks
     * like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:instance:mysql-instance1-20161115</code>.
     * </p> </li> </ul> <p>To learn how to generate a Signature Version 4 signed
     * request, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (AWS Signature Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>. </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithPreSignedUrl(Aws::String&& value) { SetPreSignedUrl(std::move(value)); return *this;}

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBInstanceReadReplica</code> API action in the source AWS Region
     * that contains the source DB instance. </p> <p>You must specify this parameter
     * when you create an encrypted Read Replica from another AWS Region by using the
     * Amazon RDS API. You can specify the <code>--source-region</code> option instead
     * of this parameter when you create an encrypted Read Replica from another AWS
     * Region by using the AWS CLI. </p> <p>The presigned URL must be a valid request
     * for the <code>CreateDBInstanceReadReplica</code> API action that can be executed
     * in the source AWS Region that contains the encrypted source DB instance. The
     * presigned URL request must contain the following parameter values: </p> <ul>
     * <li> <p> <code>DestinationRegion</code> - The AWS Region that the encrypted Read
     * Replica is created in. This AWS Region is the same one where the
     * <code>CreateDBInstanceReadReplica</code> action is called that contains this
     * presigned URL. </p> <p>For example, if you create an encrypted DB instance in
     * the us-west-1 AWS Region, from a source DB instance in the us-east-2 AWS Region,
     * then you call the <code>CreateDBInstanceReadReplica</code> action in the
     * us-east-1 AWS Region and provide a presigned URL that contains a call to the
     * <code>CreateDBInstanceReadReplica</code> action in the us-west-2 AWS Region. For
     * this example, the <code>DestinationRegion</code> in the presigned URL must be
     * set to the us-east-1 AWS Region. </p> </li> <li> <p> <code>KmsKeyId</code> - The
     * AWS KMS key identifier for the key to use to encrypt the Read Replica in the
     * destination AWS Region. This is the same identifier for both the
     * <code>CreateDBInstanceReadReplica</code> action that is called in the
     * destination AWS Region, and the action contained in the presigned URL. </p>
     * </li> <li> <p> <code>SourceDBInstanceIdentifier</code> - The DB instance
     * identifier for the encrypted DB instance to be replicated. This identifier must
     * be in the Amazon Resource Name (ARN) format for the source AWS Region. For
     * example, if you are creating an encrypted Read Replica from a DB instance in the
     * us-west-2 AWS Region, then your <code>SourceDBInstanceIdentifier</code> looks
     * like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:instance:mysql-instance1-20161115</code>.
     * </p> </li> </ul> <p>To learn how to generate a Signature Version 4 signed
     * request, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (AWS Signature Version 4)</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>. </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithPreSignedUrl(const char* value) { SetPreSignedUrl(value); return *this;}


    /**
     * <p>A value that indicates whether to enable mapping of AWS Identity and Access
     * Management (IAM) accounts to database accounts. By default, mapping is
     * disabled.</p> <p>You can enable IAM database authentication for the following
     * database engines</p> <ul> <li> <p>For MySQL 5.6, minor version 5.6.34 or
     * higher</p> </li> <li> <p>For MySQL 5.7, minor version 5.7.16 or higher</p> </li>
     * <li> <p>Aurora MySQL 5.6 or higher</p> </li> </ul>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const{ return m_enableIAMDatabaseAuthentication; }

    /**
     * <p>A value that indicates whether to enable mapping of AWS Identity and Access
     * Management (IAM) accounts to database accounts. By default, mapping is
     * disabled.</p> <p>You can enable IAM database authentication for the following
     * database engines</p> <ul> <li> <p>For MySQL 5.6, minor version 5.6.34 or
     * higher</p> </li> <li> <p>For MySQL 5.7, minor version 5.7.16 or higher</p> </li>
     * <li> <p>Aurora MySQL 5.6 or higher</p> </li> </ul>
     */
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }

    /**
     * <p>A value that indicates whether to enable mapping of AWS Identity and Access
     * Management (IAM) accounts to database accounts. By default, mapping is
     * disabled.</p> <p>You can enable IAM database authentication for the following
     * database engines</p> <ul> <li> <p>For MySQL 5.6, minor version 5.6.34 or
     * higher</p> </li> <li> <p>For MySQL 5.7, minor version 5.7.16 or higher</p> </li>
     * <li> <p>Aurora MySQL 5.6 or higher</p> </li> </ul>
     */
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }

    /**
     * <p>A value that indicates whether to enable mapping of AWS Identity and Access
     * Management (IAM) accounts to database accounts. By default, mapping is
     * disabled.</p> <p>You can enable IAM database authentication for the following
     * database engines</p> <ul> <li> <p>For MySQL 5.6, minor version 5.6.34 or
     * higher</p> </li> <li> <p>For MySQL 5.7, minor version 5.7.16 or higher</p> </li>
     * <li> <p>Aurora MySQL 5.6 or higher</p> </li> </ul>
     */
    inline CreateDBInstanceReadReplicaRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}


    /**
     * <p>A value that indicates whether to enable Performance Insights for the Read
     * Replica. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">Using
     * Amazon Performance Insights</a> in the <i>Amazon RDS User Guide</i>. </p>
     */
    inline bool GetEnablePerformanceInsights() const{ return m_enablePerformanceInsights; }

    /**
     * <p>A value that indicates whether to enable Performance Insights for the Read
     * Replica. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">Using
     * Amazon Performance Insights</a> in the <i>Amazon RDS User Guide</i>. </p>
     */
    inline bool EnablePerformanceInsightsHasBeenSet() const { return m_enablePerformanceInsightsHasBeenSet; }

    /**
     * <p>A value that indicates whether to enable Performance Insights for the Read
     * Replica. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">Using
     * Amazon Performance Insights</a> in the <i>Amazon RDS User Guide</i>. </p>
     */
    inline void SetEnablePerformanceInsights(bool value) { m_enablePerformanceInsightsHasBeenSet = true; m_enablePerformanceInsights = value; }

    /**
     * <p>A value that indicates whether to enable Performance Insights for the Read
     * Replica. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">Using
     * Amazon Performance Insights</a> in the <i>Amazon RDS User Guide</i>. </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithEnablePerformanceInsights(bool value) { SetEnablePerformanceInsights(value); return *this;}


    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p> <p>If you do not specify a value for
     * <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS Region.</p>
     */
    inline const Aws::String& GetPerformanceInsightsKMSKeyId() const{ return m_performanceInsightsKMSKeyId; }

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p> <p>If you do not specify a value for
     * <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS Region.</p>
     */
    inline bool PerformanceInsightsKMSKeyIdHasBeenSet() const { return m_performanceInsightsKMSKeyIdHasBeenSet; }

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p> <p>If you do not specify a value for
     * <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS Region.</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(const Aws::String& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = value; }

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p> <p>If you do not specify a value for
     * <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS Region.</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(Aws::String&& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = std::move(value); }

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p> <p>If you do not specify a value for
     * <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS Region.</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(const char* value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId.assign(value); }

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p> <p>If you do not specify a value for
     * <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS Region.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithPerformanceInsightsKMSKeyId(const Aws::String& value) { SetPerformanceInsightsKMSKeyId(value); return *this;}

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p> <p>If you do not specify a value for
     * <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS Region.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithPerformanceInsightsKMSKeyId(Aws::String&& value) { SetPerformanceInsightsKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p> <p>If you do not specify a value for
     * <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS Region.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithPerformanceInsightsKMSKeyId(const char* value) { SetPerformanceInsightsKMSKeyId(value); return *this;}


    /**
     * <p>The amount of time, in days, to retain Performance Insights data. Valid
     * values are 7 or 731 (2 years). </p>
     */
    inline int GetPerformanceInsightsRetentionPeriod() const{ return m_performanceInsightsRetentionPeriod; }

    /**
     * <p>The amount of time, in days, to retain Performance Insights data. Valid
     * values are 7 or 731 (2 years). </p>
     */
    inline bool PerformanceInsightsRetentionPeriodHasBeenSet() const { return m_performanceInsightsRetentionPeriodHasBeenSet; }

    /**
     * <p>The amount of time, in days, to retain Performance Insights data. Valid
     * values are 7 or 731 (2 years). </p>
     */
    inline void SetPerformanceInsightsRetentionPeriod(int value) { m_performanceInsightsRetentionPeriodHasBeenSet = true; m_performanceInsightsRetentionPeriod = value; }

    /**
     * <p>The amount of time, in days, to retain Performance Insights data. Valid
     * values are 7 or 731 (2 years). </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithPerformanceInsightsRetentionPeriod(int value) { SetPerformanceInsightsRetentionPeriod(value); return *this;}


    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch Logs.
     * The values in the list depend on the DB engine being used. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnableCloudwatchLogsExports() const{ return m_enableCloudwatchLogsExports; }

    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch Logs.
     * The values in the list depend on the DB engine being used. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline bool EnableCloudwatchLogsExportsHasBeenSet() const { return m_enableCloudwatchLogsExportsHasBeenSet; }

    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch Logs.
     * The values in the list depend on the DB engine being used. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline void SetEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = value; }

    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch Logs.
     * The values in the list depend on the DB engine being used. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline void SetEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = std::move(value); }

    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch Logs.
     * The values in the list depend on the DB engine being used. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnableCloudwatchLogsExports(value); return *this;}

    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch Logs.
     * The values in the list depend on the DB engine being used. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnableCloudwatchLogsExports(std::move(value)); return *this;}

    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch Logs.
     * The values in the list depend on the DB engine being used. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& AddEnableCloudwatchLogsExports(const Aws::String& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }

    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch Logs.
     * The values in the list depend on the DB engine being used. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& AddEnableCloudwatchLogsExports(Aws::String&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch Logs.
     * The values in the list depend on the DB engine being used. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& AddEnableCloudwatchLogsExports(const char* value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }


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
    inline CreateDBInstanceReadReplicaRequest& WithProcessorFeatures(const Aws::Vector<ProcessorFeature>& value) { SetProcessorFeatures(value); return *this;}

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithProcessorFeatures(Aws::Vector<ProcessorFeature>&& value) { SetProcessorFeatures(std::move(value)); return *this;}

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& AddProcessorFeatures(const ProcessorFeature& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(value); return *this; }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& AddProcessorFeatures(ProcessorFeature&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(std::move(value)); return *this; }


    /**
     * <p>A value that indicates whether the DB instance class of the DB instance uses
     * its default processor features.</p>
     */
    inline bool GetUseDefaultProcessorFeatures() const{ return m_useDefaultProcessorFeatures; }

    /**
     * <p>A value that indicates whether the DB instance class of the DB instance uses
     * its default processor features.</p>
     */
    inline bool UseDefaultProcessorFeaturesHasBeenSet() const { return m_useDefaultProcessorFeaturesHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB instance class of the DB instance uses
     * its default processor features.</p>
     */
    inline void SetUseDefaultProcessorFeatures(bool value) { m_useDefaultProcessorFeaturesHasBeenSet = true; m_useDefaultProcessorFeatures = value; }

    /**
     * <p>A value that indicates whether the DB instance class of the DB instance uses
     * its default processor features.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithUseDefaultProcessorFeatures(bool value) { SetUseDefaultProcessorFeatures(value); return *this;}


    /**
     * <p>A value that indicates whether the DB instance has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
     * Deleting a DB Instance</a>. </p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>A value that indicates whether the DB instance has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
     * Deleting a DB Instance</a>. </p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB instance has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
     * Deleting a DB Instance</a>. </p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>A value that indicates whether the DB instance has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
     * Deleting a DB Instance</a>. </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}

  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;

    Aws::String m_sourceDBInstanceIdentifier;
    bool m_sourceDBInstanceIdentifierHasBeenSet;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;

    int m_iops;
    bool m_iopsHasBeenSet;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet;

    int m_monitoringInterval;
    bool m_monitoringIntervalHasBeenSet;

    Aws::String m_monitoringRoleArn;
    bool m_monitoringRoleArnHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::String m_preSignedUrl;
    bool m_preSignedUrlHasBeenSet;

    bool m_enableIAMDatabaseAuthentication;
    bool m_enableIAMDatabaseAuthenticationHasBeenSet;

    bool m_enablePerformanceInsights;
    bool m_enablePerformanceInsightsHasBeenSet;

    Aws::String m_performanceInsightsKMSKeyId;
    bool m_performanceInsightsKMSKeyIdHasBeenSet;

    int m_performanceInsightsRetentionPeriod;
    bool m_performanceInsightsRetentionPeriodHasBeenSet;

    Aws::Vector<Aws::String> m_enableCloudwatchLogsExports;
    bool m_enableCloudwatchLogsExportsHasBeenSet;

    Aws::Vector<ProcessorFeature> m_processorFeatures;
    bool m_processorFeaturesHasBeenSet;

    bool m_useDefaultProcessorFeatures;
    bool m_useDefaultProcessorFeaturesHasBeenSet;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
