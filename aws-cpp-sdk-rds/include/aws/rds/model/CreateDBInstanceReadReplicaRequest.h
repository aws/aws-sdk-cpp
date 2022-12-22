/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ReplicaMode.h>
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
  class CreateDBInstanceReadReplicaRequest : public RDSRequest
  {
  public:
    AWS_RDS_API CreateDBInstanceReadReplicaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBInstanceReadReplica"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The DB instance identifier of the read replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The DB instance identifier of the read replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The DB instance identifier of the read replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The DB instance identifier of the read replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>The DB instance identifier of the read replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The DB instance identifier of the read replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The DB instance identifier of the read replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB instance identifier of the read replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>The identifier of the DB instance that will act as the source for the read
     * replica. Each DB instance can have up to five read replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, Oracle, PostgreSQL, or SQL Server DB instance.</p> </li> <li> <p>Can
     * specify a DB instance that is a MySQL read replica only if the source is running
     * MySQL 5.6 or later.</p> </li> <li> <p>For the limitations of Oracle read
     * replicas, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.html">Read
     * Replica Limitations with Oracle</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </li> <li> <p>For the limitations of SQL Server read replicas, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/SQLServer.ReadReplicas.Limitations.html">Read
     * Replica Limitations with Microsoft SQL Server</a> in the <i>Amazon RDS User
     * Guide</i>.</p> </li> <li> <p>Can specify a PostgreSQL DB instance only if the
     * source is running PostgreSQL 9.3.5 or later (9.4.7 and higher for cross-Region
     * replication).</p> </li> <li> <p>The specified DB instance must have automatic
     * backups enabled, that is, its backup retention period must be greater than
     * 0.</p> </li> <li> <p>If the source DB instance is in the same Amazon Web
     * Services Region as the read replica, specify a valid DB instance identifier.</p>
     * </li> <li> <p>If the source DB instance is in a different Amazon Web Services
     * Region from the read replica, specify a valid DB instance ARN. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">Constructing
     * an ARN for Amazon RDS</a> in the <i>Amazon RDS User Guide</i>. This doesn't
     * apply to SQL Server or RDS Custom, which don't support cross-Region
     * replicas.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceDBInstanceIdentifier() const{ return m_sourceDBInstanceIdentifier; }

    /**
     * <p>The identifier of the DB instance that will act as the source for the read
     * replica. Each DB instance can have up to five read replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, Oracle, PostgreSQL, or SQL Server DB instance.</p> </li> <li> <p>Can
     * specify a DB instance that is a MySQL read replica only if the source is running
     * MySQL 5.6 or later.</p> </li> <li> <p>For the limitations of Oracle read
     * replicas, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.html">Read
     * Replica Limitations with Oracle</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </li> <li> <p>For the limitations of SQL Server read replicas, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/SQLServer.ReadReplicas.Limitations.html">Read
     * Replica Limitations with Microsoft SQL Server</a> in the <i>Amazon RDS User
     * Guide</i>.</p> </li> <li> <p>Can specify a PostgreSQL DB instance only if the
     * source is running PostgreSQL 9.3.5 or later (9.4.7 and higher for cross-Region
     * replication).</p> </li> <li> <p>The specified DB instance must have automatic
     * backups enabled, that is, its backup retention period must be greater than
     * 0.</p> </li> <li> <p>If the source DB instance is in the same Amazon Web
     * Services Region as the read replica, specify a valid DB instance identifier.</p>
     * </li> <li> <p>If the source DB instance is in a different Amazon Web Services
     * Region from the read replica, specify a valid DB instance ARN. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">Constructing
     * an ARN for Amazon RDS</a> in the <i>Amazon RDS User Guide</i>. This doesn't
     * apply to SQL Server or RDS Custom, which don't support cross-Region
     * replicas.</p> </li> </ul>
     */
    inline bool SourceDBInstanceIdentifierHasBeenSet() const { return m_sourceDBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the DB instance that will act as the source for the read
     * replica. Each DB instance can have up to five read replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, Oracle, PostgreSQL, or SQL Server DB instance.</p> </li> <li> <p>Can
     * specify a DB instance that is a MySQL read replica only if the source is running
     * MySQL 5.6 or later.</p> </li> <li> <p>For the limitations of Oracle read
     * replicas, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.html">Read
     * Replica Limitations with Oracle</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </li> <li> <p>For the limitations of SQL Server read replicas, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/SQLServer.ReadReplicas.Limitations.html">Read
     * Replica Limitations with Microsoft SQL Server</a> in the <i>Amazon RDS User
     * Guide</i>.</p> </li> <li> <p>Can specify a PostgreSQL DB instance only if the
     * source is running PostgreSQL 9.3.5 or later (9.4.7 and higher for cross-Region
     * replication).</p> </li> <li> <p>The specified DB instance must have automatic
     * backups enabled, that is, its backup retention period must be greater than
     * 0.</p> </li> <li> <p>If the source DB instance is in the same Amazon Web
     * Services Region as the read replica, specify a valid DB instance identifier.</p>
     * </li> <li> <p>If the source DB instance is in a different Amazon Web Services
     * Region from the read replica, specify a valid DB instance ARN. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">Constructing
     * an ARN for Amazon RDS</a> in the <i>Amazon RDS User Guide</i>. This doesn't
     * apply to SQL Server or RDS Custom, which don't support cross-Region
     * replicas.</p> </li> </ul>
     */
    inline void SetSourceDBInstanceIdentifier(const Aws::String& value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier = value; }

    /**
     * <p>The identifier of the DB instance that will act as the source for the read
     * replica. Each DB instance can have up to five read replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, Oracle, PostgreSQL, or SQL Server DB instance.</p> </li> <li> <p>Can
     * specify a DB instance that is a MySQL read replica only if the source is running
     * MySQL 5.6 or later.</p> </li> <li> <p>For the limitations of Oracle read
     * replicas, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.html">Read
     * Replica Limitations with Oracle</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </li> <li> <p>For the limitations of SQL Server read replicas, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/SQLServer.ReadReplicas.Limitations.html">Read
     * Replica Limitations with Microsoft SQL Server</a> in the <i>Amazon RDS User
     * Guide</i>.</p> </li> <li> <p>Can specify a PostgreSQL DB instance only if the
     * source is running PostgreSQL 9.3.5 or later (9.4.7 and higher for cross-Region
     * replication).</p> </li> <li> <p>The specified DB instance must have automatic
     * backups enabled, that is, its backup retention period must be greater than
     * 0.</p> </li> <li> <p>If the source DB instance is in the same Amazon Web
     * Services Region as the read replica, specify a valid DB instance identifier.</p>
     * </li> <li> <p>If the source DB instance is in a different Amazon Web Services
     * Region from the read replica, specify a valid DB instance ARN. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">Constructing
     * an ARN for Amazon RDS</a> in the <i>Amazon RDS User Guide</i>. This doesn't
     * apply to SQL Server or RDS Custom, which don't support cross-Region
     * replicas.</p> </li> </ul>
     */
    inline void SetSourceDBInstanceIdentifier(Aws::String&& value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier = std::move(value); }

    /**
     * <p>The identifier of the DB instance that will act as the source for the read
     * replica. Each DB instance can have up to five read replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, Oracle, PostgreSQL, or SQL Server DB instance.</p> </li> <li> <p>Can
     * specify a DB instance that is a MySQL read replica only if the source is running
     * MySQL 5.6 or later.</p> </li> <li> <p>For the limitations of Oracle read
     * replicas, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.html">Read
     * Replica Limitations with Oracle</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </li> <li> <p>For the limitations of SQL Server read replicas, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/SQLServer.ReadReplicas.Limitations.html">Read
     * Replica Limitations with Microsoft SQL Server</a> in the <i>Amazon RDS User
     * Guide</i>.</p> </li> <li> <p>Can specify a PostgreSQL DB instance only if the
     * source is running PostgreSQL 9.3.5 or later (9.4.7 and higher for cross-Region
     * replication).</p> </li> <li> <p>The specified DB instance must have automatic
     * backups enabled, that is, its backup retention period must be greater than
     * 0.</p> </li> <li> <p>If the source DB instance is in the same Amazon Web
     * Services Region as the read replica, specify a valid DB instance identifier.</p>
     * </li> <li> <p>If the source DB instance is in a different Amazon Web Services
     * Region from the read replica, specify a valid DB instance ARN. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">Constructing
     * an ARN for Amazon RDS</a> in the <i>Amazon RDS User Guide</i>. This doesn't
     * apply to SQL Server or RDS Custom, which don't support cross-Region
     * replicas.</p> </li> </ul>
     */
    inline void SetSourceDBInstanceIdentifier(const char* value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier.assign(value); }

    /**
     * <p>The identifier of the DB instance that will act as the source for the read
     * replica. Each DB instance can have up to five read replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, Oracle, PostgreSQL, or SQL Server DB instance.</p> </li> <li> <p>Can
     * specify a DB instance that is a MySQL read replica only if the source is running
     * MySQL 5.6 or later.</p> </li> <li> <p>For the limitations of Oracle read
     * replicas, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.html">Read
     * Replica Limitations with Oracle</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </li> <li> <p>For the limitations of SQL Server read replicas, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/SQLServer.ReadReplicas.Limitations.html">Read
     * Replica Limitations with Microsoft SQL Server</a> in the <i>Amazon RDS User
     * Guide</i>.</p> </li> <li> <p>Can specify a PostgreSQL DB instance only if the
     * source is running PostgreSQL 9.3.5 or later (9.4.7 and higher for cross-Region
     * replication).</p> </li> <li> <p>The specified DB instance must have automatic
     * backups enabled, that is, its backup retention period must be greater than
     * 0.</p> </li> <li> <p>If the source DB instance is in the same Amazon Web
     * Services Region as the read replica, specify a valid DB instance identifier.</p>
     * </li> <li> <p>If the source DB instance is in a different Amazon Web Services
     * Region from the read replica, specify a valid DB instance ARN. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">Constructing
     * an ARN for Amazon RDS</a> in the <i>Amazon RDS User Guide</i>. This doesn't
     * apply to SQL Server or RDS Custom, which don't support cross-Region
     * replicas.</p> </li> </ul>
     */
    inline CreateDBInstanceReadReplicaRequest& WithSourceDBInstanceIdentifier(const Aws::String& value) { SetSourceDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The identifier of the DB instance that will act as the source for the read
     * replica. Each DB instance can have up to five read replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, Oracle, PostgreSQL, or SQL Server DB instance.</p> </li> <li> <p>Can
     * specify a DB instance that is a MySQL read replica only if the source is running
     * MySQL 5.6 or later.</p> </li> <li> <p>For the limitations of Oracle read
     * replicas, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.html">Read
     * Replica Limitations with Oracle</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </li> <li> <p>For the limitations of SQL Server read replicas, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/SQLServer.ReadReplicas.Limitations.html">Read
     * Replica Limitations with Microsoft SQL Server</a> in the <i>Amazon RDS User
     * Guide</i>.</p> </li> <li> <p>Can specify a PostgreSQL DB instance only if the
     * source is running PostgreSQL 9.3.5 or later (9.4.7 and higher for cross-Region
     * replication).</p> </li> <li> <p>The specified DB instance must have automatic
     * backups enabled, that is, its backup retention period must be greater than
     * 0.</p> </li> <li> <p>If the source DB instance is in the same Amazon Web
     * Services Region as the read replica, specify a valid DB instance identifier.</p>
     * </li> <li> <p>If the source DB instance is in a different Amazon Web Services
     * Region from the read replica, specify a valid DB instance ARN. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">Constructing
     * an ARN for Amazon RDS</a> in the <i>Amazon RDS User Guide</i>. This doesn't
     * apply to SQL Server or RDS Custom, which don't support cross-Region
     * replicas.</p> </li> </ul>
     */
    inline CreateDBInstanceReadReplicaRequest& WithSourceDBInstanceIdentifier(Aws::String&& value) { SetSourceDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the DB instance that will act as the source for the read
     * replica. Each DB instance can have up to five read replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, Oracle, PostgreSQL, or SQL Server DB instance.</p> </li> <li> <p>Can
     * specify a DB instance that is a MySQL read replica only if the source is running
     * MySQL 5.6 or later.</p> </li> <li> <p>For the limitations of Oracle read
     * replicas, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.html">Read
     * Replica Limitations with Oracle</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </li> <li> <p>For the limitations of SQL Server read replicas, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/SQLServer.ReadReplicas.Limitations.html">Read
     * Replica Limitations with Microsoft SQL Server</a> in the <i>Amazon RDS User
     * Guide</i>.</p> </li> <li> <p>Can specify a PostgreSQL DB instance only if the
     * source is running PostgreSQL 9.3.5 or later (9.4.7 and higher for cross-Region
     * replication).</p> </li> <li> <p>The specified DB instance must have automatic
     * backups enabled, that is, its backup retention period must be greater than
     * 0.</p> </li> <li> <p>If the source DB instance is in the same Amazon Web
     * Services Region as the read replica, specify a valid DB instance identifier.</p>
     * </li> <li> <p>If the source DB instance is in a different Amazon Web Services
     * Region from the read replica, specify a valid DB instance ARN. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">Constructing
     * an ARN for Amazon RDS</a> in the <i>Amazon RDS User Guide</i>. This doesn't
     * apply to SQL Server or RDS Custom, which don't support cross-Region
     * replicas.</p> </li> </ul>
     */
    inline CreateDBInstanceReadReplicaRequest& WithSourceDBInstanceIdentifier(const char* value) { SetSourceDBInstanceIdentifier(value); return *this;}


    /**
     * <p>The compute and memory capacity of the read replica, for example db.m4.large.
     * Not all DB instance classes are available in all Amazon Web Services Regions, or
     * for all database engines. For the full list of DB instance classes, and
     * availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Default: Inherits
     * from the source DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p>The compute and memory capacity of the read replica, for example db.m4.large.
     * Not all DB instance classes are available in all Amazon Web Services Regions, or
     * for all database engines. For the full list of DB instance classes, and
     * availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Default: Inherits
     * from the source DB instance.</p>
     */
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }

    /**
     * <p>The compute and memory capacity of the read replica, for example db.m4.large.
     * Not all DB instance classes are available in all Amazon Web Services Regions, or
     * for all database engines. For the full list of DB instance classes, and
     * availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Default: Inherits
     * from the source DB instance.</p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>The compute and memory capacity of the read replica, for example db.m4.large.
     * Not all DB instance classes are available in all Amazon Web Services Regions, or
     * for all database engines. For the full list of DB instance classes, and
     * availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Default: Inherits
     * from the source DB instance.</p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }

    /**
     * <p>The compute and memory capacity of the read replica, for example db.m4.large.
     * Not all DB instance classes are available in all Amazon Web Services Regions, or
     * for all database engines. For the full list of DB instance classes, and
     * availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Default: Inherits
     * from the source DB instance.</p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p>The compute and memory capacity of the read replica, for example db.m4.large.
     * Not all DB instance classes are available in all Amazon Web Services Regions, or
     * for all database engines. For the full list of DB instance classes, and
     * availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Default: Inherits
     * from the source DB instance.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The compute and memory capacity of the read replica, for example db.m4.large.
     * Not all DB instance classes are available in all Amazon Web Services Regions, or
     * for all database engines. For the full list of DB instance classes, and
     * availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Default: Inherits
     * from the source DB instance.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}

    /**
     * <p>The compute and memory capacity of the read replica, for example db.m4.large.
     * Not all DB instance classes are available in all Amazon Web Services Regions, or
     * for all database engines. For the full list of DB instance classes, and
     * availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Default: Inherits
     * from the source DB instance.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}


    /**
     * <p>The Availability Zone (AZ) where the read replica will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone in the endpoint's Amazon
     * Web Services Region.</p> <p>Example: <code>us-east-1d</code> </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone (AZ) where the read replica will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone in the endpoint's Amazon
     * Web Services Region.</p> <p>Example: <code>us-east-1d</code> </p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone (AZ) where the read replica will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone in the endpoint's Amazon
     * Web Services Region.</p> <p>Example: <code>us-east-1d</code> </p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone (AZ) where the read replica will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone in the endpoint's Amazon
     * Web Services Region.</p> <p>Example: <code>us-east-1d</code> </p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone (AZ) where the read replica will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone in the endpoint's Amazon
     * Web Services Region.</p> <p>Example: <code>us-east-1d</code> </p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone (AZ) where the read replica will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone in the endpoint's Amazon
     * Web Services Region.</p> <p>Example: <code>us-east-1d</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone (AZ) where the read replica will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone in the endpoint's Amazon
     * Web Services Region.</p> <p>Example: <code>us-east-1d</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone (AZ) where the read replica will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone in the endpoint's Amazon
     * Web Services Region.</p> <p>Example: <code>us-east-1d</code> </p>
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
     * <p>A value that indicates whether the read replica is in a Multi-AZ
     * deployment.</p> <p>You can create a read replica as a Multi-AZ DB instance. RDS
     * creates a standby of your replica in another Availability Zone for failover
     * support for the replica. Creating your read replica as a Multi-AZ DB instance is
     * independent of whether the source database is a Multi-AZ DB instance.</p>
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p>A value that indicates whether the read replica is in a Multi-AZ
     * deployment.</p> <p>You can create a read replica as a Multi-AZ DB instance. RDS
     * creates a standby of your replica in another Availability Zone for failover
     * support for the replica. Creating your read replica as a Multi-AZ DB instance is
     * independent of whether the source database is a Multi-AZ DB instance.</p>
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }

    /**
     * <p>A value that indicates whether the read replica is in a Multi-AZ
     * deployment.</p> <p>You can create a read replica as a Multi-AZ DB instance. RDS
     * creates a standby of your replica in another Availability Zone for failover
     * support for the replica. Creating your read replica as a Multi-AZ DB instance is
     * independent of whether the source database is a Multi-AZ DB instance.</p>
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p>A value that indicates whether the read replica is in a Multi-AZ
     * deployment.</p> <p>You can create a read replica as a Multi-AZ DB instance. RDS
     * creates a standby of your replica in another Availability Zone for failover
     * support for the replica. Creating your read replica as a Multi-AZ DB instance is
     * independent of whether the source database is a Multi-AZ DB instance.</p>
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}


    /**
     * <p>A value that indicates whether minor engine upgrades are applied
     * automatically to the read replica during the maintenance window.</p> <p>This
     * setting doesn't apply to RDS Custom.</p> <p>Default: Inherits from the source DB
     * instance</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>A value that indicates whether minor engine upgrades are applied
     * automatically to the read replica during the maintenance window.</p> <p>This
     * setting doesn't apply to RDS Custom.</p> <p>Default: Inherits from the source DB
     * instance</p>
     */
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }

    /**
     * <p>A value that indicates whether minor engine upgrades are applied
     * automatically to the read replica during the maintenance window.</p> <p>This
     * setting doesn't apply to RDS Custom.</p> <p>Default: Inherits from the source DB
     * instance</p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p>A value that indicates whether minor engine upgrades are applied
     * automatically to the read replica during the maintenance window.</p> <p>This
     * setting doesn't apply to RDS Custom.</p> <p>Default: Inherits from the source DB
     * instance</p>
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
     * group associated with the source instance is used.</p>  <p>For SQL Server,
     * you must use the option group associated with the source instance.</p> 
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>The option group the DB instance is associated with. If omitted, the option
     * group associated with the source instance is used.</p>  <p>For SQL Server,
     * you must use the option group associated with the source instance.</p> 
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p>The option group the DB instance is associated with. If omitted, the option
     * group associated with the source instance is used.</p>  <p>For SQL Server,
     * you must use the option group associated with the source instance.</p> 
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The option group the DB instance is associated with. If omitted, the option
     * group associated with the source instance is used.</p>  <p>For SQL Server,
     * you must use the option group associated with the source instance.</p> 
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p>The option group the DB instance is associated with. If omitted, the option
     * group associated with the source instance is used.</p>  <p>For SQL Server,
     * you must use the option group associated with the source instance.</p> 
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>The option group the DB instance is associated with. If omitted, the option
     * group associated with the source instance is used.</p>  <p>For SQL Server,
     * you must use the option group associated with the source instance.</p> 
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The option group the DB instance is associated with. If omitted, the option
     * group associated with the source instance is used.</p>  <p>For SQL Server,
     * you must use the option group associated with the source instance.</p> 
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>The option group the DB instance is associated with. If omitted, the option
     * group associated with the source instance is used.</p>  <p>For SQL Server,
     * you must use the option group associated with the source instance.</p> 
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}


    /**
     * <p>The name of the DB parameter group to associate with this DB instance.</p>
     * <p>If you do not specify a value for <code>DBParameterGroupName</code>, then
     * Amazon RDS uses the <code>DBParameterGroup</code> of source DB instance for a
     * same Region read replica, or the default <code>DBParameterGroup</code> for the
     * specified DB engine for a cross-Region read replica.</p> <p>Specifying a
     * parameter group for this operation is only supported for MySQL and Oracle DB
     * instances. It isn't supported for RDS Custom.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens</p> </li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance.</p>
     * <p>If you do not specify a value for <code>DBParameterGroupName</code>, then
     * Amazon RDS uses the <code>DBParameterGroup</code> of source DB instance for a
     * same Region read replica, or the default <code>DBParameterGroup</code> for the
     * specified DB engine for a cross-Region read replica.</p> <p>Specifying a
     * parameter group for this operation is only supported for MySQL and Oracle DB
     * instances. It isn't supported for RDS Custom.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens</p> </li> </ul>
     */
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance.</p>
     * <p>If you do not specify a value for <code>DBParameterGroupName</code>, then
     * Amazon RDS uses the <code>DBParameterGroup</code> of source DB instance for a
     * same Region read replica, or the default <code>DBParameterGroup</code> for the
     * specified DB engine for a cross-Region read replica.</p> <p>Specifying a
     * parameter group for this operation is only supported for MySQL and Oracle DB
     * instances. It isn't supported for RDS Custom.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens</p> </li> </ul>
     */
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance.</p>
     * <p>If you do not specify a value for <code>DBParameterGroupName</code>, then
     * Amazon RDS uses the <code>DBParameterGroup</code> of source DB instance for a
     * same Region read replica, or the default <code>DBParameterGroup</code> for the
     * specified DB engine for a cross-Region read replica.</p> <p>Specifying a
     * parameter group for this operation is only supported for MySQL and Oracle DB
     * instances. It isn't supported for RDS Custom.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens</p> </li> </ul>
     */
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance.</p>
     * <p>If you do not specify a value for <code>DBParameterGroupName</code>, then
     * Amazon RDS uses the <code>DBParameterGroup</code> of source DB instance for a
     * same Region read replica, or the default <code>DBParameterGroup</code> for the
     * specified DB engine for a cross-Region read replica.</p> <p>Specifying a
     * parameter group for this operation is only supported for MySQL and Oracle DB
     * instances. It isn't supported for RDS Custom.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens</p> </li> </ul>
     */
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance.</p>
     * <p>If you do not specify a value for <code>DBParameterGroupName</code>, then
     * Amazon RDS uses the <code>DBParameterGroup</code> of source DB instance for a
     * same Region read replica, or the default <code>DBParameterGroup</code> for the
     * specified DB engine for a cross-Region read replica.</p> <p>Specifying a
     * parameter group for this operation is only supported for MySQL and Oracle DB
     * instances. It isn't supported for RDS Custom.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens</p> </li> </ul>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB parameter group to associate with this DB instance.</p>
     * <p>If you do not specify a value for <code>DBParameterGroupName</code>, then
     * Amazon RDS uses the <code>DBParameterGroup</code> of source DB instance for a
     * same Region read replica, or the default <code>DBParameterGroup</code> for the
     * specified DB engine for a cross-Region read replica.</p> <p>Specifying a
     * parameter group for this operation is only supported for MySQL and Oracle DB
     * instances. It isn't supported for RDS Custom.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens</p> </li> </ul>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB parameter group to associate with this DB instance.</p>
     * <p>If you do not specify a value for <code>DBParameterGroupName</code>, then
     * Amazon RDS uses the <code>DBParameterGroup</code> of source DB instance for a
     * same Region read replica, or the default <code>DBParameterGroup</code> for the
     * specified DB engine for a cross-Region read replica.</p> <p>Specifying a
     * parameter group for this operation is only supported for MySQL and Oracle DB
     * instances. It isn't supported for RDS Custom.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens</p> </li> </ul>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}


    /**
     * <p>A value that indicates whether the DB instance is publicly accessible.</p>
     * <p>When the DB cluster is publicly accessible, its Domain Name System (DNS)
     * endpoint resolves to the private IP address from within the DB cluster's virtual
     * private cloud (VPC). It resolves to the public IP address from outside of the DB
     * cluster's VPC. Access to the DB cluster is ultimately controlled by the security
     * group it uses. That public access isn't permitted if the security group assigned
     * to the DB cluster doesn't permit it.</p> <p>When the DB instance isn't publicly
     * accessible, it is an internal DB instance with a DNS name that resolves to a
     * private IP address.</p> <p>For more information, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>A value that indicates whether the DB instance is publicly accessible.</p>
     * <p>When the DB cluster is publicly accessible, its Domain Name System (DNS)
     * endpoint resolves to the private IP address from within the DB cluster's virtual
     * private cloud (VPC). It resolves to the public IP address from outside of the DB
     * cluster's VPC. Access to the DB cluster is ultimately controlled by the security
     * group it uses. That public access isn't permitted if the security group assigned
     * to the DB cluster doesn't permit it.</p> <p>When the DB instance isn't publicly
     * accessible, it is an internal DB instance with a DNS name that resolves to a
     * private IP address.</p> <p>For more information, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB instance is publicly accessible.</p>
     * <p>When the DB cluster is publicly accessible, its Domain Name System (DNS)
     * endpoint resolves to the private IP address from within the DB cluster's virtual
     * private cloud (VPC). It resolves to the public IP address from outside of the DB
     * cluster's VPC. Access to the DB cluster is ultimately controlled by the security
     * group it uses. That public access isn't permitted if the security group assigned
     * to the DB cluster doesn't permit it.</p> <p>When the DB instance isn't publicly
     * accessible, it is an internal DB instance with a DNS name that resolves to a
     * private IP address.</p> <p>For more information, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>A value that indicates whether the DB instance is publicly accessible.</p>
     * <p>When the DB cluster is publicly accessible, its Domain Name System (DNS)
     * endpoint resolves to the private IP address from within the DB cluster's virtual
     * private cloud (VPC). It resolves to the public IP address from outside of the DB
     * cluster's VPC. Access to the DB cluster is ultimately controlled by the security
     * group it uses. That public access isn't permitted if the security group assigned
     * to the DB cluster doesn't permit it.</p> <p>When the DB instance isn't publicly
     * accessible, it is an internal DB instance with a DNS name that resolves to a
     * private IP address.</p> <p>For more information, see
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
     * specified, then the new DB instance isn't created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another Amazon Web Services Region.</p>
     * </li> <li> <p>If supplied, must match the name of an existing DBSubnetGroup.</p>
     * </li> <li> <p>The specified DB subnet group must be in the same Amazon Web
     * Services Region in which the operation is running.</p> </li> <li> <p>All read
     * replicas in one Amazon Web Services Region that are created from the same source
     * DB instance must either:&gt;</p> <ul> <li> <p>Specify DB subnet groups from the
     * same VPC. All these read replicas are created in the same VPC.</p> </li> <li>
     * <p>Not specify a DB subnet group. All these read replicas are created outside of
     * any VPC.</p> </li> </ul> </li> </ul> <p>Example: <code>mydbsubnetgroup</code>
     * </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance is
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance isn't created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another Amazon Web Services Region.</p>
     * </li> <li> <p>If supplied, must match the name of an existing DBSubnetGroup.</p>
     * </li> <li> <p>The specified DB subnet group must be in the same Amazon Web
     * Services Region in which the operation is running.</p> </li> <li> <p>All read
     * replicas in one Amazon Web Services Region that are created from the same source
     * DB instance must either:&gt;</p> <ul> <li> <p>Specify DB subnet groups from the
     * same VPC. All these read replicas are created in the same VPC.</p> </li> <li>
     * <p>Not specify a DB subnet group. All these read replicas are created outside of
     * any VPC.</p> </li> </ul> </li> </ul> <p>Example: <code>mydbsubnetgroup</code>
     * </p>
     */
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance is
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance isn't created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another Amazon Web Services Region.</p>
     * </li> <li> <p>If supplied, must match the name of an existing DBSubnetGroup.</p>
     * </li> <li> <p>The specified DB subnet group must be in the same Amazon Web
     * Services Region in which the operation is running.</p> </li> <li> <p>All read
     * replicas in one Amazon Web Services Region that are created from the same source
     * DB instance must either:&gt;</p> <ul> <li> <p>Specify DB subnet groups from the
     * same VPC. All these read replicas are created in the same VPC.</p> </li> <li>
     * <p>Not specify a DB subnet group. All these read replicas are created outside of
     * any VPC.</p> </li> </ul> </li> </ul> <p>Example: <code>mydbsubnetgroup</code>
     * </p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance is
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance isn't created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another Amazon Web Services Region.</p>
     * </li> <li> <p>If supplied, must match the name of an existing DBSubnetGroup.</p>
     * </li> <li> <p>The specified DB subnet group must be in the same Amazon Web
     * Services Region in which the operation is running.</p> </li> <li> <p>All read
     * replicas in one Amazon Web Services Region that are created from the same source
     * DB instance must either:&gt;</p> <ul> <li> <p>Specify DB subnet groups from the
     * same VPC. All these read replicas are created in the same VPC.</p> </li> <li>
     * <p>Not specify a DB subnet group. All these read replicas are created outside of
     * any VPC.</p> </li> </ul> </li> </ul> <p>Example: <code>mydbsubnetgroup</code>
     * </p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance is
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance isn't created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another Amazon Web Services Region.</p>
     * </li> <li> <p>If supplied, must match the name of an existing DBSubnetGroup.</p>
     * </li> <li> <p>The specified DB subnet group must be in the same Amazon Web
     * Services Region in which the operation is running.</p> </li> <li> <p>All read
     * replicas in one Amazon Web Services Region that are created from the same source
     * DB instance must either:&gt;</p> <ul> <li> <p>Specify DB subnet groups from the
     * same VPC. All these read replicas are created in the same VPC.</p> </li> <li>
     * <p>Not specify a DB subnet group. All these read replicas are created outside of
     * any VPC.</p> </li> </ul> </li> </ul> <p>Example: <code>mydbsubnetgroup</code>
     * </p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance is
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance isn't created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another Amazon Web Services Region.</p>
     * </li> <li> <p>If supplied, must match the name of an existing DBSubnetGroup.</p>
     * </li> <li> <p>The specified DB subnet group must be in the same Amazon Web
     * Services Region in which the operation is running.</p> </li> <li> <p>All read
     * replicas in one Amazon Web Services Region that are created from the same source
     * DB instance must either:&gt;</p> <ul> <li> <p>Specify DB subnet groups from the
     * same VPC. All these read replicas are created in the same VPC.</p> </li> <li>
     * <p>Not specify a DB subnet group. All these read replicas are created outside of
     * any VPC.</p> </li> </ul> </li> </ul> <p>Example: <code>mydbsubnetgroup</code>
     * </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance is
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance isn't created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another Amazon Web Services Region.</p>
     * </li> <li> <p>If supplied, must match the name of an existing DBSubnetGroup.</p>
     * </li> <li> <p>The specified DB subnet group must be in the same Amazon Web
     * Services Region in which the operation is running.</p> </li> <li> <p>All read
     * replicas in one Amazon Web Services Region that are created from the same source
     * DB instance must either:&gt;</p> <ul> <li> <p>Specify DB subnet groups from the
     * same VPC. All these read replicas are created in the same VPC.</p> </li> <li>
     * <p>Not specify a DB subnet group. All these read replicas are created outside of
     * any VPC.</p> </li> </ul> </li> </ul> <p>Example: <code>mydbsubnetgroup</code>
     * </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance is
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance isn't created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another Amazon Web Services Region.</p>
     * </li> <li> <p>If supplied, must match the name of an existing DBSubnetGroup.</p>
     * </li> <li> <p>The specified DB subnet group must be in the same Amazon Web
     * Services Region in which the operation is running.</p> </li> <li> <p>All read
     * replicas in one Amazon Web Services Region that are created from the same source
     * DB instance must either:&gt;</p> <ul> <li> <p>Specify DB subnet groups from the
     * same VPC. All these read replicas are created in the same VPC.</p> </li> <li>
     * <p>Not specify a DB subnet group. All these read replicas are created outside of
     * any VPC.</p> </li> </ul> </li> </ul> <p>Example: <code>mydbsubnetgroup</code>
     * </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}


    /**
     * <p>A list of Amazon EC2 VPC security groups to associate with the read
     * replica.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>Default: The
     * default EC2 VPC security group for the DB subnet group's VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>A list of Amazon EC2 VPC security groups to associate with the read
     * replica.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>Default: The
     * default EC2 VPC security group for the DB subnet group's VPC.</p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>A list of Amazon EC2 VPC security groups to associate with the read
     * replica.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>Default: The
     * default EC2 VPC security group for the DB subnet group's VPC.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of Amazon EC2 VPC security groups to associate with the read
     * replica.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>Default: The
     * default EC2 VPC security group for the DB subnet group's VPC.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>A list of Amazon EC2 VPC security groups to associate with the read
     * replica.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>Default: The
     * default EC2 VPC security group for the DB subnet group's VPC.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of Amazon EC2 VPC security groups to associate with the read
     * replica.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>Default: The
     * default EC2 VPC security group for the DB subnet group's VPC.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of Amazon EC2 VPC security groups to associate with the read
     * replica.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>Default: The
     * default EC2 VPC security group for the DB subnet group's VPC.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of Amazon EC2 VPC security groups to associate with the read
     * replica.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>Default: The
     * default EC2 VPC security group for the DB subnet group's VPC.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Amazon EC2 VPC security groups to associate with the read
     * replica.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>Default: The
     * default EC2 VPC security group for the DB subnet group's VPC.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>Specifies the storage type to be associated with the read replica.</p>
     * <p>Valid values: <code>gp2 | gp3 | io1 | standard</code> </p> <p>If you specify
     * <code>io1</code> or <code>gp3</code>, you must also include a value for the
     * <code>Iops</code> parameter.</p> <p>Default: <code>io1</code> if the
     * <code>Iops</code> parameter is specified, otherwise <code>gp2</code> </p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Specifies the storage type to be associated with the read replica.</p>
     * <p>Valid values: <code>gp2 | gp3 | io1 | standard</code> </p> <p>If you specify
     * <code>io1</code> or <code>gp3</code>, you must also include a value for the
     * <code>Iops</code> parameter.</p> <p>Default: <code>io1</code> if the
     * <code>Iops</code> parameter is specified, otherwise <code>gp2</code> </p>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>Specifies the storage type to be associated with the read replica.</p>
     * <p>Valid values: <code>gp2 | gp3 | io1 | standard</code> </p> <p>If you specify
     * <code>io1</code> or <code>gp3</code>, you must also include a value for the
     * <code>Iops</code> parameter.</p> <p>Default: <code>io1</code> if the
     * <code>Iops</code> parameter is specified, otherwise <code>gp2</code> </p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Specifies the storage type to be associated with the read replica.</p>
     * <p>Valid values: <code>gp2 | gp3 | io1 | standard</code> </p> <p>If you specify
     * <code>io1</code> or <code>gp3</code>, you must also include a value for the
     * <code>Iops</code> parameter.</p> <p>Default: <code>io1</code> if the
     * <code>Iops</code> parameter is specified, otherwise <code>gp2</code> </p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>Specifies the storage type to be associated with the read replica.</p>
     * <p>Valid values: <code>gp2 | gp3 | io1 | standard</code> </p> <p>If you specify
     * <code>io1</code> or <code>gp3</code>, you must also include a value for the
     * <code>Iops</code> parameter.</p> <p>Default: <code>io1</code> if the
     * <code>Iops</code> parameter is specified, otherwise <code>gp2</code> </p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>Specifies the storage type to be associated with the read replica.</p>
     * <p>Valid values: <code>gp2 | gp3 | io1 | standard</code> </p> <p>If you specify
     * <code>io1</code> or <code>gp3</code>, you must also include a value for the
     * <code>Iops</code> parameter.</p> <p>Default: <code>io1</code> if the
     * <code>Iops</code> parameter is specified, otherwise <code>gp2</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the read replica.</p>
     * <p>Valid values: <code>gp2 | gp3 | io1 | standard</code> </p> <p>If you specify
     * <code>io1</code> or <code>gp3</code>, you must also include a value for the
     * <code>Iops</code> parameter.</p> <p>Default: <code>io1</code> if the
     * <code>Iops</code> parameter is specified, otherwise <code>gp2</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the read replica.</p>
     * <p>Valid values: <code>gp2 | gp3 | io1 | standard</code> </p> <p>If you specify
     * <code>io1</code> or <code>gp3</code>, you must also include a value for the
     * <code>Iops</code> parameter.</p> <p>Default: <code>io1</code> if the
     * <code>Iops</code> parameter is specified, otherwise <code>gp2</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithStorageType(const char* value) { SetStorageType(value); return *this;}


    /**
     * <p>A value that indicates whether to copy all tags from the read replica to
     * snapshots of the read replica. By default, tags are not copied.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }

    /**
     * <p>A value that indicates whether to copy all tags from the read replica to
     * snapshots of the read replica. By default, tags are not copied.</p>
     */
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }

    /**
     * <p>A value that indicates whether to copy all tags from the read replica to
     * snapshots of the read replica. By default, tags are not copied.</p>
     */
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }

    /**
     * <p>A value that indicates whether to copy all tags from the read replica to
     * snapshots of the read replica. By default, tags are not copied.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}


    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the read replica. To disable collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, then you must also set <code>MonitoringInterval</code> to a value
     * other than 0.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>Valid
     * Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p>
     */
    inline int GetMonitoringInterval() const{ return m_monitoringInterval; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the read replica. To disable collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, then you must also set <code>MonitoringInterval</code> to a value
     * other than 0.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>Valid
     * Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p>
     */
    inline bool MonitoringIntervalHasBeenSet() const { return m_monitoringIntervalHasBeenSet; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the read replica. To disable collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, then you must also set <code>MonitoringInterval</code> to a value
     * other than 0.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>Valid
     * Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p>
     */
    inline void SetMonitoringInterval(int value) { m_monitoringIntervalHasBeenSet = true; m_monitoringInterval = value; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the read replica. To disable collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, then you must also set <code>MonitoringInterval</code> to a value
     * other than 0.</p> <p>This setting doesn't apply to RDS Custom.</p> <p>Valid
     * Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p>
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
     * <p>This setting doesn't apply to RDS Custom.</p>
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
     * <p>This setting doesn't apply to RDS Custom.</p>
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
     * <p>This setting doesn't apply to RDS Custom.</p>
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
     * <p>This setting doesn't apply to RDS Custom.</p>
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
     * <p>This setting doesn't apply to RDS Custom.</p>
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
     * <p>This setting doesn't apply to RDS Custom.</p>
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
     * <p>This setting doesn't apply to RDS Custom.</p>
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
     * <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithMonitoringRoleArn(const char* value) { SetMonitoringRoleArn(value); return *this;}


    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted read replica.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key.</p> <p>If you create an encrypted read replica in
     * the same Amazon Web Services Region as the source DB instance, then do not
     * specify a value for this parameter. A read replica in the same Amazon Web
     * Services Region is always encrypted with the same KMS key as the source DB
     * instance.</p> <p>If you create an encrypted read replica in a different Amazon
     * Web Services Region, then you must specify a KMS key identifier for the
     * destination Amazon Web Services Region. KMS keys are specific to the Amazon Web
     * Services Region that they are created in, and you can't use KMS keys from one
     * Amazon Web Services Region in another Amazon Web Services Region.</p> <p>You
     * can't create an encrypted read replica from an unencrypted DB instance.</p>
     * <p>This setting doesn't apply to RDS Custom, which uses the same KMS key as the
     * primary replica.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted read replica.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key.</p> <p>If you create an encrypted read replica in
     * the same Amazon Web Services Region as the source DB instance, then do not
     * specify a value for this parameter. A read replica in the same Amazon Web
     * Services Region is always encrypted with the same KMS key as the source DB
     * instance.</p> <p>If you create an encrypted read replica in a different Amazon
     * Web Services Region, then you must specify a KMS key identifier for the
     * destination Amazon Web Services Region. KMS keys are specific to the Amazon Web
     * Services Region that they are created in, and you can't use KMS keys from one
     * Amazon Web Services Region in another Amazon Web Services Region.</p> <p>You
     * can't create an encrypted read replica from an unencrypted DB instance.</p>
     * <p>This setting doesn't apply to RDS Custom, which uses the same KMS key as the
     * primary replica.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted read replica.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key.</p> <p>If you create an encrypted read replica in
     * the same Amazon Web Services Region as the source DB instance, then do not
     * specify a value for this parameter. A read replica in the same Amazon Web
     * Services Region is always encrypted with the same KMS key as the source DB
     * instance.</p> <p>If you create an encrypted read replica in a different Amazon
     * Web Services Region, then you must specify a KMS key identifier for the
     * destination Amazon Web Services Region. KMS keys are specific to the Amazon Web
     * Services Region that they are created in, and you can't use KMS keys from one
     * Amazon Web Services Region in another Amazon Web Services Region.</p> <p>You
     * can't create an encrypted read replica from an unencrypted DB instance.</p>
     * <p>This setting doesn't apply to RDS Custom, which uses the same KMS key as the
     * primary replica.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted read replica.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key.</p> <p>If you create an encrypted read replica in
     * the same Amazon Web Services Region as the source DB instance, then do not
     * specify a value for this parameter. A read replica in the same Amazon Web
     * Services Region is always encrypted with the same KMS key as the source DB
     * instance.</p> <p>If you create an encrypted read replica in a different Amazon
     * Web Services Region, then you must specify a KMS key identifier for the
     * destination Amazon Web Services Region. KMS keys are specific to the Amazon Web
     * Services Region that they are created in, and you can't use KMS keys from one
     * Amazon Web Services Region in another Amazon Web Services Region.</p> <p>You
     * can't create an encrypted read replica from an unencrypted DB instance.</p>
     * <p>This setting doesn't apply to RDS Custom, which uses the same KMS key as the
     * primary replica.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted read replica.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key.</p> <p>If you create an encrypted read replica in
     * the same Amazon Web Services Region as the source DB instance, then do not
     * specify a value for this parameter. A read replica in the same Amazon Web
     * Services Region is always encrypted with the same KMS key as the source DB
     * instance.</p> <p>If you create an encrypted read replica in a different Amazon
     * Web Services Region, then you must specify a KMS key identifier for the
     * destination Amazon Web Services Region. KMS keys are specific to the Amazon Web
     * Services Region that they are created in, and you can't use KMS keys from one
     * Amazon Web Services Region in another Amazon Web Services Region.</p> <p>You
     * can't create an encrypted read replica from an unencrypted DB instance.</p>
     * <p>This setting doesn't apply to RDS Custom, which uses the same KMS key as the
     * primary replica.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted read replica.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key.</p> <p>If you create an encrypted read replica in
     * the same Amazon Web Services Region as the source DB instance, then do not
     * specify a value for this parameter. A read replica in the same Amazon Web
     * Services Region is always encrypted with the same KMS key as the source DB
     * instance.</p> <p>If you create an encrypted read replica in a different Amazon
     * Web Services Region, then you must specify a KMS key identifier for the
     * destination Amazon Web Services Region. KMS keys are specific to the Amazon Web
     * Services Region that they are created in, and you can't use KMS keys from one
     * Amazon Web Services Region in another Amazon Web Services Region.</p> <p>You
     * can't create an encrypted read replica from an unencrypted DB instance.</p>
     * <p>This setting doesn't apply to RDS Custom, which uses the same KMS key as the
     * primary replica.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted read replica.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key.</p> <p>If you create an encrypted read replica in
     * the same Amazon Web Services Region as the source DB instance, then do not
     * specify a value for this parameter. A read replica in the same Amazon Web
     * Services Region is always encrypted with the same KMS key as the source DB
     * instance.</p> <p>If you create an encrypted read replica in a different Amazon
     * Web Services Region, then you must specify a KMS key identifier for the
     * destination Amazon Web Services Region. KMS keys are specific to the Amazon Web
     * Services Region that they are created in, and you can't use KMS keys from one
     * Amazon Web Services Region in another Amazon Web Services Region.</p> <p>You
     * can't create an encrypted read replica from an unencrypted DB instance.</p>
     * <p>This setting doesn't apply to RDS Custom, which uses the same KMS key as the
     * primary replica.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted read replica.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key.</p> <p>If you create an encrypted read replica in
     * the same Amazon Web Services Region as the source DB instance, then do not
     * specify a value for this parameter. A read replica in the same Amazon Web
     * Services Region is always encrypted with the same KMS key as the source DB
     * instance.</p> <p>If you create an encrypted read replica in a different Amazon
     * Web Services Region, then you must specify a KMS key identifier for the
     * destination Amazon Web Services Region. KMS keys are specific to the Amazon Web
     * Services Region that they are created in, and you can't use KMS keys from one
     * Amazon Web Services Region in another Amazon Web Services Region.</p> <p>You
     * can't create an encrypted read replica from an unencrypted DB instance.</p>
     * <p>This setting doesn't apply to RDS Custom, which uses the same KMS key as the
     * primary replica.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>When you are creating a read replica from one Amazon Web Services GovCloud
     * (US) Region to another or from one China Amazon Web Services Region to another,
     * the URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBInstanceReadReplica</code> API operation in the source Amazon Web
     * Services Region that contains the source DB instance.</p> <p>This setting
     * applies only to Amazon Web Services GovCloud (US) Regions and China Amazon Web
     * Services Regions. It's ignored in other Amazon Web Services Regions.</p> <p>You
     * must specify this parameter when you create an encrypted read replica from
     * another Amazon Web Services Region by using the Amazon RDS API. Don't specify
     * <code>PreSignedUrl</code> when you are creating an encrypted read replica in the
     * same Amazon Web Services Region.</p> <p>The presigned URL must be a valid
     * request for the <code>CreateDBInstanceReadReplica</code> API operation that can
     * run in the source Amazon Web Services Region that contains the encrypted source
     * DB instance. The presigned URL request must contain the following parameter
     * values:</p> <ul> <li> <p> <code>DestinationRegion</code> - The Amazon Web
     * Services Region that the encrypted read replica is created in. This Amazon Web
     * Services Region is the same one where the
     * <code>CreateDBInstanceReadReplica</code> operation is called that contains this
     * presigned URL.</p> <p>For example, if you create an encrypted DB instance in the
     * us-west-1 Amazon Web Services Region, from a source DB instance in the us-east-2
     * Amazon Web Services Region, then you call the
     * <code>CreateDBInstanceReadReplica</code> operation in the us-east-1 Amazon Web
     * Services Region and provide a presigned URL that contains a call to the
     * <code>CreateDBInstanceReadReplica</code> operation in the us-west-2 Amazon Web
     * Services Region. For this example, the <code>DestinationRegion</code> in the
     * presigned URL must be set to the us-east-1 Amazon Web Services Region.</p> </li>
     * <li> <p> <code>KmsKeyId</code> - The KMS key identifier for the key to use to
     * encrypt the read replica in the destination Amazon Web Services Region. This is
     * the same identifier for both the <code>CreateDBInstanceReadReplica</code>
     * operation that is called in the destination Amazon Web Services Region, and the
     * operation contained in the presigned URL.</p> </li> <li> <p>
     * <code>SourceDBInstanceIdentifier</code> - The DB instance identifier for the
     * encrypted DB instance to be replicated. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source Amazon Web Services Region. For
     * example, if you are creating an encrypted read replica from a DB instance in the
     * us-west-2 Amazon Web Services Region, then your
     * <code>SourceDBInstanceIdentifier</code> looks like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:instance:mysql-instance1-20161115</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (Amazon Web Services Signature Version 4)</a>
     * and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>.</p>  <p>If you are using an Amazon Web
     * Services SDK tool or the CLI, you can specify <code>SourceRegion</code> (or
     * <code>--source-region</code> for the CLI) instead of specifying
     * <code>PreSignedUrl</code> manually. Specifying <code>SourceRegion</code>
     * autogenerates a presigned URL that is a valid request for the operation that can
     * run in the source Amazon Web Services Region.</p> <p> <code>SourceRegion</code>
     * isn't supported for SQL Server, because Amazon RDS for SQL Server doesn't
     * support cross-Region read replicas.</p>  <p>This setting doesn't apply to
     * RDS Custom.</p>
     */
    inline const Aws::String& GetPreSignedUrl() const{ return m_preSignedUrl; }

    /**
     * <p>When you are creating a read replica from one Amazon Web Services GovCloud
     * (US) Region to another or from one China Amazon Web Services Region to another,
     * the URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBInstanceReadReplica</code> API operation in the source Amazon Web
     * Services Region that contains the source DB instance.</p> <p>This setting
     * applies only to Amazon Web Services GovCloud (US) Regions and China Amazon Web
     * Services Regions. It's ignored in other Amazon Web Services Regions.</p> <p>You
     * must specify this parameter when you create an encrypted read replica from
     * another Amazon Web Services Region by using the Amazon RDS API. Don't specify
     * <code>PreSignedUrl</code> when you are creating an encrypted read replica in the
     * same Amazon Web Services Region.</p> <p>The presigned URL must be a valid
     * request for the <code>CreateDBInstanceReadReplica</code> API operation that can
     * run in the source Amazon Web Services Region that contains the encrypted source
     * DB instance. The presigned URL request must contain the following parameter
     * values:</p> <ul> <li> <p> <code>DestinationRegion</code> - The Amazon Web
     * Services Region that the encrypted read replica is created in. This Amazon Web
     * Services Region is the same one where the
     * <code>CreateDBInstanceReadReplica</code> operation is called that contains this
     * presigned URL.</p> <p>For example, if you create an encrypted DB instance in the
     * us-west-1 Amazon Web Services Region, from a source DB instance in the us-east-2
     * Amazon Web Services Region, then you call the
     * <code>CreateDBInstanceReadReplica</code> operation in the us-east-1 Amazon Web
     * Services Region and provide a presigned URL that contains a call to the
     * <code>CreateDBInstanceReadReplica</code> operation in the us-west-2 Amazon Web
     * Services Region. For this example, the <code>DestinationRegion</code> in the
     * presigned URL must be set to the us-east-1 Amazon Web Services Region.</p> </li>
     * <li> <p> <code>KmsKeyId</code> - The KMS key identifier for the key to use to
     * encrypt the read replica in the destination Amazon Web Services Region. This is
     * the same identifier for both the <code>CreateDBInstanceReadReplica</code>
     * operation that is called in the destination Amazon Web Services Region, and the
     * operation contained in the presigned URL.</p> </li> <li> <p>
     * <code>SourceDBInstanceIdentifier</code> - The DB instance identifier for the
     * encrypted DB instance to be replicated. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source Amazon Web Services Region. For
     * example, if you are creating an encrypted read replica from a DB instance in the
     * us-west-2 Amazon Web Services Region, then your
     * <code>SourceDBInstanceIdentifier</code> looks like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:instance:mysql-instance1-20161115</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (Amazon Web Services Signature Version 4)</a>
     * and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>.</p>  <p>If you are using an Amazon Web
     * Services SDK tool or the CLI, you can specify <code>SourceRegion</code> (or
     * <code>--source-region</code> for the CLI) instead of specifying
     * <code>PreSignedUrl</code> manually. Specifying <code>SourceRegion</code>
     * autogenerates a presigned URL that is a valid request for the operation that can
     * run in the source Amazon Web Services Region.</p> <p> <code>SourceRegion</code>
     * isn't supported for SQL Server, because Amazon RDS for SQL Server doesn't
     * support cross-Region read replicas.</p>  <p>This setting doesn't apply to
     * RDS Custom.</p>
     */
    inline bool PreSignedUrlHasBeenSet() const { return m_preSignedUrlHasBeenSet; }

    /**
     * <p>When you are creating a read replica from one Amazon Web Services GovCloud
     * (US) Region to another or from one China Amazon Web Services Region to another,
     * the URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBInstanceReadReplica</code> API operation in the source Amazon Web
     * Services Region that contains the source DB instance.</p> <p>This setting
     * applies only to Amazon Web Services GovCloud (US) Regions and China Amazon Web
     * Services Regions. It's ignored in other Amazon Web Services Regions.</p> <p>You
     * must specify this parameter when you create an encrypted read replica from
     * another Amazon Web Services Region by using the Amazon RDS API. Don't specify
     * <code>PreSignedUrl</code> when you are creating an encrypted read replica in the
     * same Amazon Web Services Region.</p> <p>The presigned URL must be a valid
     * request for the <code>CreateDBInstanceReadReplica</code> API operation that can
     * run in the source Amazon Web Services Region that contains the encrypted source
     * DB instance. The presigned URL request must contain the following parameter
     * values:</p> <ul> <li> <p> <code>DestinationRegion</code> - The Amazon Web
     * Services Region that the encrypted read replica is created in. This Amazon Web
     * Services Region is the same one where the
     * <code>CreateDBInstanceReadReplica</code> operation is called that contains this
     * presigned URL.</p> <p>For example, if you create an encrypted DB instance in the
     * us-west-1 Amazon Web Services Region, from a source DB instance in the us-east-2
     * Amazon Web Services Region, then you call the
     * <code>CreateDBInstanceReadReplica</code> operation in the us-east-1 Amazon Web
     * Services Region and provide a presigned URL that contains a call to the
     * <code>CreateDBInstanceReadReplica</code> operation in the us-west-2 Amazon Web
     * Services Region. For this example, the <code>DestinationRegion</code> in the
     * presigned URL must be set to the us-east-1 Amazon Web Services Region.</p> </li>
     * <li> <p> <code>KmsKeyId</code> - The KMS key identifier for the key to use to
     * encrypt the read replica in the destination Amazon Web Services Region. This is
     * the same identifier for both the <code>CreateDBInstanceReadReplica</code>
     * operation that is called in the destination Amazon Web Services Region, and the
     * operation contained in the presigned URL.</p> </li> <li> <p>
     * <code>SourceDBInstanceIdentifier</code> - The DB instance identifier for the
     * encrypted DB instance to be replicated. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source Amazon Web Services Region. For
     * example, if you are creating an encrypted read replica from a DB instance in the
     * us-west-2 Amazon Web Services Region, then your
     * <code>SourceDBInstanceIdentifier</code> looks like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:instance:mysql-instance1-20161115</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (Amazon Web Services Signature Version 4)</a>
     * and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>.</p>  <p>If you are using an Amazon Web
     * Services SDK tool or the CLI, you can specify <code>SourceRegion</code> (or
     * <code>--source-region</code> for the CLI) instead of specifying
     * <code>PreSignedUrl</code> manually. Specifying <code>SourceRegion</code>
     * autogenerates a presigned URL that is a valid request for the operation that can
     * run in the source Amazon Web Services Region.</p> <p> <code>SourceRegion</code>
     * isn't supported for SQL Server, because Amazon RDS for SQL Server doesn't
     * support cross-Region read replicas.</p>  <p>This setting doesn't apply to
     * RDS Custom.</p>
     */
    inline void SetPreSignedUrl(const Aws::String& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = value; }

    /**
     * <p>When you are creating a read replica from one Amazon Web Services GovCloud
     * (US) Region to another or from one China Amazon Web Services Region to another,
     * the URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBInstanceReadReplica</code> API operation in the source Amazon Web
     * Services Region that contains the source DB instance.</p> <p>This setting
     * applies only to Amazon Web Services GovCloud (US) Regions and China Amazon Web
     * Services Regions. It's ignored in other Amazon Web Services Regions.</p> <p>You
     * must specify this parameter when you create an encrypted read replica from
     * another Amazon Web Services Region by using the Amazon RDS API. Don't specify
     * <code>PreSignedUrl</code> when you are creating an encrypted read replica in the
     * same Amazon Web Services Region.</p> <p>The presigned URL must be a valid
     * request for the <code>CreateDBInstanceReadReplica</code> API operation that can
     * run in the source Amazon Web Services Region that contains the encrypted source
     * DB instance. The presigned URL request must contain the following parameter
     * values:</p> <ul> <li> <p> <code>DestinationRegion</code> - The Amazon Web
     * Services Region that the encrypted read replica is created in. This Amazon Web
     * Services Region is the same one where the
     * <code>CreateDBInstanceReadReplica</code> operation is called that contains this
     * presigned URL.</p> <p>For example, if you create an encrypted DB instance in the
     * us-west-1 Amazon Web Services Region, from a source DB instance in the us-east-2
     * Amazon Web Services Region, then you call the
     * <code>CreateDBInstanceReadReplica</code> operation in the us-east-1 Amazon Web
     * Services Region and provide a presigned URL that contains a call to the
     * <code>CreateDBInstanceReadReplica</code> operation in the us-west-2 Amazon Web
     * Services Region. For this example, the <code>DestinationRegion</code> in the
     * presigned URL must be set to the us-east-1 Amazon Web Services Region.</p> </li>
     * <li> <p> <code>KmsKeyId</code> - The KMS key identifier for the key to use to
     * encrypt the read replica in the destination Amazon Web Services Region. This is
     * the same identifier for both the <code>CreateDBInstanceReadReplica</code>
     * operation that is called in the destination Amazon Web Services Region, and the
     * operation contained in the presigned URL.</p> </li> <li> <p>
     * <code>SourceDBInstanceIdentifier</code> - The DB instance identifier for the
     * encrypted DB instance to be replicated. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source Amazon Web Services Region. For
     * example, if you are creating an encrypted read replica from a DB instance in the
     * us-west-2 Amazon Web Services Region, then your
     * <code>SourceDBInstanceIdentifier</code> looks like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:instance:mysql-instance1-20161115</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (Amazon Web Services Signature Version 4)</a>
     * and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>.</p>  <p>If you are using an Amazon Web
     * Services SDK tool or the CLI, you can specify <code>SourceRegion</code> (or
     * <code>--source-region</code> for the CLI) instead of specifying
     * <code>PreSignedUrl</code> manually. Specifying <code>SourceRegion</code>
     * autogenerates a presigned URL that is a valid request for the operation that can
     * run in the source Amazon Web Services Region.</p> <p> <code>SourceRegion</code>
     * isn't supported for SQL Server, because Amazon RDS for SQL Server doesn't
     * support cross-Region read replicas.</p>  <p>This setting doesn't apply to
     * RDS Custom.</p>
     */
    inline void SetPreSignedUrl(Aws::String&& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = std::move(value); }

    /**
     * <p>When you are creating a read replica from one Amazon Web Services GovCloud
     * (US) Region to another or from one China Amazon Web Services Region to another,
     * the URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBInstanceReadReplica</code> API operation in the source Amazon Web
     * Services Region that contains the source DB instance.</p> <p>This setting
     * applies only to Amazon Web Services GovCloud (US) Regions and China Amazon Web
     * Services Regions. It's ignored in other Amazon Web Services Regions.</p> <p>You
     * must specify this parameter when you create an encrypted read replica from
     * another Amazon Web Services Region by using the Amazon RDS API. Don't specify
     * <code>PreSignedUrl</code> when you are creating an encrypted read replica in the
     * same Amazon Web Services Region.</p> <p>The presigned URL must be a valid
     * request for the <code>CreateDBInstanceReadReplica</code> API operation that can
     * run in the source Amazon Web Services Region that contains the encrypted source
     * DB instance. The presigned URL request must contain the following parameter
     * values:</p> <ul> <li> <p> <code>DestinationRegion</code> - The Amazon Web
     * Services Region that the encrypted read replica is created in. This Amazon Web
     * Services Region is the same one where the
     * <code>CreateDBInstanceReadReplica</code> operation is called that contains this
     * presigned URL.</p> <p>For example, if you create an encrypted DB instance in the
     * us-west-1 Amazon Web Services Region, from a source DB instance in the us-east-2
     * Amazon Web Services Region, then you call the
     * <code>CreateDBInstanceReadReplica</code> operation in the us-east-1 Amazon Web
     * Services Region and provide a presigned URL that contains a call to the
     * <code>CreateDBInstanceReadReplica</code> operation in the us-west-2 Amazon Web
     * Services Region. For this example, the <code>DestinationRegion</code> in the
     * presigned URL must be set to the us-east-1 Amazon Web Services Region.</p> </li>
     * <li> <p> <code>KmsKeyId</code> - The KMS key identifier for the key to use to
     * encrypt the read replica in the destination Amazon Web Services Region. This is
     * the same identifier for both the <code>CreateDBInstanceReadReplica</code>
     * operation that is called in the destination Amazon Web Services Region, and the
     * operation contained in the presigned URL.</p> </li> <li> <p>
     * <code>SourceDBInstanceIdentifier</code> - The DB instance identifier for the
     * encrypted DB instance to be replicated. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source Amazon Web Services Region. For
     * example, if you are creating an encrypted read replica from a DB instance in the
     * us-west-2 Amazon Web Services Region, then your
     * <code>SourceDBInstanceIdentifier</code> looks like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:instance:mysql-instance1-20161115</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (Amazon Web Services Signature Version 4)</a>
     * and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>.</p>  <p>If you are using an Amazon Web
     * Services SDK tool or the CLI, you can specify <code>SourceRegion</code> (or
     * <code>--source-region</code> for the CLI) instead of specifying
     * <code>PreSignedUrl</code> manually. Specifying <code>SourceRegion</code>
     * autogenerates a presigned URL that is a valid request for the operation that can
     * run in the source Amazon Web Services Region.</p> <p> <code>SourceRegion</code>
     * isn't supported for SQL Server, because Amazon RDS for SQL Server doesn't
     * support cross-Region read replicas.</p>  <p>This setting doesn't apply to
     * RDS Custom.</p>
     */
    inline void SetPreSignedUrl(const char* value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl.assign(value); }

    /**
     * <p>When you are creating a read replica from one Amazon Web Services GovCloud
     * (US) Region to another or from one China Amazon Web Services Region to another,
     * the URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBInstanceReadReplica</code> API operation in the source Amazon Web
     * Services Region that contains the source DB instance.</p> <p>This setting
     * applies only to Amazon Web Services GovCloud (US) Regions and China Amazon Web
     * Services Regions. It's ignored in other Amazon Web Services Regions.</p> <p>You
     * must specify this parameter when you create an encrypted read replica from
     * another Amazon Web Services Region by using the Amazon RDS API. Don't specify
     * <code>PreSignedUrl</code> when you are creating an encrypted read replica in the
     * same Amazon Web Services Region.</p> <p>The presigned URL must be a valid
     * request for the <code>CreateDBInstanceReadReplica</code> API operation that can
     * run in the source Amazon Web Services Region that contains the encrypted source
     * DB instance. The presigned URL request must contain the following parameter
     * values:</p> <ul> <li> <p> <code>DestinationRegion</code> - The Amazon Web
     * Services Region that the encrypted read replica is created in. This Amazon Web
     * Services Region is the same one where the
     * <code>CreateDBInstanceReadReplica</code> operation is called that contains this
     * presigned URL.</p> <p>For example, if you create an encrypted DB instance in the
     * us-west-1 Amazon Web Services Region, from a source DB instance in the us-east-2
     * Amazon Web Services Region, then you call the
     * <code>CreateDBInstanceReadReplica</code> operation in the us-east-1 Amazon Web
     * Services Region and provide a presigned URL that contains a call to the
     * <code>CreateDBInstanceReadReplica</code> operation in the us-west-2 Amazon Web
     * Services Region. For this example, the <code>DestinationRegion</code> in the
     * presigned URL must be set to the us-east-1 Amazon Web Services Region.</p> </li>
     * <li> <p> <code>KmsKeyId</code> - The KMS key identifier for the key to use to
     * encrypt the read replica in the destination Amazon Web Services Region. This is
     * the same identifier for both the <code>CreateDBInstanceReadReplica</code>
     * operation that is called in the destination Amazon Web Services Region, and the
     * operation contained in the presigned URL.</p> </li> <li> <p>
     * <code>SourceDBInstanceIdentifier</code> - The DB instance identifier for the
     * encrypted DB instance to be replicated. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source Amazon Web Services Region. For
     * example, if you are creating an encrypted read replica from a DB instance in the
     * us-west-2 Amazon Web Services Region, then your
     * <code>SourceDBInstanceIdentifier</code> looks like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:instance:mysql-instance1-20161115</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (Amazon Web Services Signature Version 4)</a>
     * and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>.</p>  <p>If you are using an Amazon Web
     * Services SDK tool or the CLI, you can specify <code>SourceRegion</code> (or
     * <code>--source-region</code> for the CLI) instead of specifying
     * <code>PreSignedUrl</code> manually. Specifying <code>SourceRegion</code>
     * autogenerates a presigned URL that is a valid request for the operation that can
     * run in the source Amazon Web Services Region.</p> <p> <code>SourceRegion</code>
     * isn't supported for SQL Server, because Amazon RDS for SQL Server doesn't
     * support cross-Region read replicas.</p>  <p>This setting doesn't apply to
     * RDS Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithPreSignedUrl(const Aws::String& value) { SetPreSignedUrl(value); return *this;}

    /**
     * <p>When you are creating a read replica from one Amazon Web Services GovCloud
     * (US) Region to another or from one China Amazon Web Services Region to another,
     * the URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBInstanceReadReplica</code> API operation in the source Amazon Web
     * Services Region that contains the source DB instance.</p> <p>This setting
     * applies only to Amazon Web Services GovCloud (US) Regions and China Amazon Web
     * Services Regions. It's ignored in other Amazon Web Services Regions.</p> <p>You
     * must specify this parameter when you create an encrypted read replica from
     * another Amazon Web Services Region by using the Amazon RDS API. Don't specify
     * <code>PreSignedUrl</code> when you are creating an encrypted read replica in the
     * same Amazon Web Services Region.</p> <p>The presigned URL must be a valid
     * request for the <code>CreateDBInstanceReadReplica</code> API operation that can
     * run in the source Amazon Web Services Region that contains the encrypted source
     * DB instance. The presigned URL request must contain the following parameter
     * values:</p> <ul> <li> <p> <code>DestinationRegion</code> - The Amazon Web
     * Services Region that the encrypted read replica is created in. This Amazon Web
     * Services Region is the same one where the
     * <code>CreateDBInstanceReadReplica</code> operation is called that contains this
     * presigned URL.</p> <p>For example, if you create an encrypted DB instance in the
     * us-west-1 Amazon Web Services Region, from a source DB instance in the us-east-2
     * Amazon Web Services Region, then you call the
     * <code>CreateDBInstanceReadReplica</code> operation in the us-east-1 Amazon Web
     * Services Region and provide a presigned URL that contains a call to the
     * <code>CreateDBInstanceReadReplica</code> operation in the us-west-2 Amazon Web
     * Services Region. For this example, the <code>DestinationRegion</code> in the
     * presigned URL must be set to the us-east-1 Amazon Web Services Region.</p> </li>
     * <li> <p> <code>KmsKeyId</code> - The KMS key identifier for the key to use to
     * encrypt the read replica in the destination Amazon Web Services Region. This is
     * the same identifier for both the <code>CreateDBInstanceReadReplica</code>
     * operation that is called in the destination Amazon Web Services Region, and the
     * operation contained in the presigned URL.</p> </li> <li> <p>
     * <code>SourceDBInstanceIdentifier</code> - The DB instance identifier for the
     * encrypted DB instance to be replicated. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source Amazon Web Services Region. For
     * example, if you are creating an encrypted read replica from a DB instance in the
     * us-west-2 Amazon Web Services Region, then your
     * <code>SourceDBInstanceIdentifier</code> looks like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:instance:mysql-instance1-20161115</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (Amazon Web Services Signature Version 4)</a>
     * and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>.</p>  <p>If you are using an Amazon Web
     * Services SDK tool or the CLI, you can specify <code>SourceRegion</code> (or
     * <code>--source-region</code> for the CLI) instead of specifying
     * <code>PreSignedUrl</code> manually. Specifying <code>SourceRegion</code>
     * autogenerates a presigned URL that is a valid request for the operation that can
     * run in the source Amazon Web Services Region.</p> <p> <code>SourceRegion</code>
     * isn't supported for SQL Server, because Amazon RDS for SQL Server doesn't
     * support cross-Region read replicas.</p>  <p>This setting doesn't apply to
     * RDS Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithPreSignedUrl(Aws::String&& value) { SetPreSignedUrl(std::move(value)); return *this;}

    /**
     * <p>When you are creating a read replica from one Amazon Web Services GovCloud
     * (US) Region to another or from one China Amazon Web Services Region to another,
     * the URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBInstanceReadReplica</code> API operation in the source Amazon Web
     * Services Region that contains the source DB instance.</p> <p>This setting
     * applies only to Amazon Web Services GovCloud (US) Regions and China Amazon Web
     * Services Regions. It's ignored in other Amazon Web Services Regions.</p> <p>You
     * must specify this parameter when you create an encrypted read replica from
     * another Amazon Web Services Region by using the Amazon RDS API. Don't specify
     * <code>PreSignedUrl</code> when you are creating an encrypted read replica in the
     * same Amazon Web Services Region.</p> <p>The presigned URL must be a valid
     * request for the <code>CreateDBInstanceReadReplica</code> API operation that can
     * run in the source Amazon Web Services Region that contains the encrypted source
     * DB instance. The presigned URL request must contain the following parameter
     * values:</p> <ul> <li> <p> <code>DestinationRegion</code> - The Amazon Web
     * Services Region that the encrypted read replica is created in. This Amazon Web
     * Services Region is the same one where the
     * <code>CreateDBInstanceReadReplica</code> operation is called that contains this
     * presigned URL.</p> <p>For example, if you create an encrypted DB instance in the
     * us-west-1 Amazon Web Services Region, from a source DB instance in the us-east-2
     * Amazon Web Services Region, then you call the
     * <code>CreateDBInstanceReadReplica</code> operation in the us-east-1 Amazon Web
     * Services Region and provide a presigned URL that contains a call to the
     * <code>CreateDBInstanceReadReplica</code> operation in the us-west-2 Amazon Web
     * Services Region. For this example, the <code>DestinationRegion</code> in the
     * presigned URL must be set to the us-east-1 Amazon Web Services Region.</p> </li>
     * <li> <p> <code>KmsKeyId</code> - The KMS key identifier for the key to use to
     * encrypt the read replica in the destination Amazon Web Services Region. This is
     * the same identifier for both the <code>CreateDBInstanceReadReplica</code>
     * operation that is called in the destination Amazon Web Services Region, and the
     * operation contained in the presigned URL.</p> </li> <li> <p>
     * <code>SourceDBInstanceIdentifier</code> - The DB instance identifier for the
     * encrypted DB instance to be replicated. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source Amazon Web Services Region. For
     * example, if you are creating an encrypted read replica from a DB instance in the
     * us-west-2 Amazon Web Services Region, then your
     * <code>SourceDBInstanceIdentifier</code> looks like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:instance:mysql-instance1-20161115</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (Amazon Web Services Signature Version 4)</a>
     * and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>.</p>  <p>If you are using an Amazon Web
     * Services SDK tool or the CLI, you can specify <code>SourceRegion</code> (or
     * <code>--source-region</code> for the CLI) instead of specifying
     * <code>PreSignedUrl</code> manually. Specifying <code>SourceRegion</code>
     * autogenerates a presigned URL that is a valid request for the operation that can
     * run in the source Amazon Web Services Region.</p> <p> <code>SourceRegion</code>
     * isn't supported for SQL Server, because Amazon RDS for SQL Server doesn't
     * support cross-Region read replicas.</p>  <p>This setting doesn't apply to
     * RDS Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithPreSignedUrl(const char* value) { SetPreSignedUrl(value); return *this;}


    /**
     * <p>A value that indicates whether to enable mapping of Amazon Web Services
     * Identity and Access Management (IAM) accounts to database accounts. By default,
     * mapping isn't enabled.</p> <p>For more information about IAM database
     * authentication, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication for MySQL and PostgreSQL</a> in the <i>Amazon RDS
     * User Guide</i>.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const{ return m_enableIAMDatabaseAuthentication; }

    /**
     * <p>A value that indicates whether to enable mapping of Amazon Web Services
     * Identity and Access Management (IAM) accounts to database accounts. By default,
     * mapping isn't enabled.</p> <p>For more information about IAM database
     * authentication, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication for MySQL and PostgreSQL</a> in the <i>Amazon RDS
     * User Guide</i>.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }

    /**
     * <p>A value that indicates whether to enable mapping of Amazon Web Services
     * Identity and Access Management (IAM) accounts to database accounts. By default,
     * mapping isn't enabled.</p> <p>For more information about IAM database
     * authentication, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication for MySQL and PostgreSQL</a> in the <i>Amazon RDS
     * User Guide</i>.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }

    /**
     * <p>A value that indicates whether to enable mapping of Amazon Web Services
     * Identity and Access Management (IAM) accounts to database accounts. By default,
     * mapping isn't enabled.</p> <p>For more information about IAM database
     * authentication, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication for MySQL and PostgreSQL</a> in the <i>Amazon RDS
     * User Guide</i>.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}


    /**
     * <p>A value that indicates whether to enable Performance Insights for the read
     * replica.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">Using
     * Amazon Performance Insights</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting doesn't apply to RDS Custom.</p>
     */
    inline bool GetEnablePerformanceInsights() const{ return m_enablePerformanceInsights; }

    /**
     * <p>A value that indicates whether to enable Performance Insights for the read
     * replica.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">Using
     * Amazon Performance Insights</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting doesn't apply to RDS Custom.</p>
     */
    inline bool EnablePerformanceInsightsHasBeenSet() const { return m_enablePerformanceInsightsHasBeenSet; }

    /**
     * <p>A value that indicates whether to enable Performance Insights for the read
     * replica.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">Using
     * Amazon Performance Insights</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting doesn't apply to RDS Custom.</p>
     */
    inline void SetEnablePerformanceInsights(bool value) { m_enablePerformanceInsightsHasBeenSet = true; m_enablePerformanceInsights = value; }

    /**
     * <p>A value that indicates whether to enable Performance Insights for the read
     * replica.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">Using
     * Amazon Performance Insights</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting doesn't apply to RDS Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithEnablePerformanceInsights(bool value) { SetEnablePerformanceInsights(value); return *this;}


    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you do not specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline const Aws::String& GetPerformanceInsightsKMSKeyId() const{ return m_performanceInsightsKMSKeyId; }

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you do not specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline bool PerformanceInsightsKMSKeyIdHasBeenSet() const { return m_performanceInsightsKMSKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you do not specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(const Aws::String& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = value; }

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you do not specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(Aws::String&& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you do not specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(const char* value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you do not specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithPerformanceInsightsKMSKeyId(const Aws::String& value) { SetPerformanceInsightsKMSKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you do not specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithPerformanceInsightsKMSKeyId(Aws::String&& value) { SetPerformanceInsightsKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you do not specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithPerformanceInsightsKMSKeyId(const char* value) { SetPerformanceInsightsKMSKeyId(value); return *this;}


    /**
     * <p>The number of days to retain Performance Insights data. The default is 7
     * days. The following values are valid:</p> <ul> <li> <p>7</p> </li> <li> <p>
     * <i>month</i> * 31, where <i>month</i> is a number of months from 1-23</p> </li>
     * <li> <p>731</p> </li> </ul> <p>For example, the following values are valid:</p>
     * <ul> <li> <p>93 (3 months * 31)</p> </li> <li> <p>341 (11 months * 31)</p> </li>
     * <li> <p>589 (19 months * 31)</p> </li> <li> <p>731</p> </li> </ul> <p>If you
     * specify a retention period such as 94, which isn't a valid value, RDS issues an
     * error.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline int GetPerformanceInsightsRetentionPeriod() const{ return m_performanceInsightsRetentionPeriod; }

    /**
     * <p>The number of days to retain Performance Insights data. The default is 7
     * days. The following values are valid:</p> <ul> <li> <p>7</p> </li> <li> <p>
     * <i>month</i> * 31, where <i>month</i> is a number of months from 1-23</p> </li>
     * <li> <p>731</p> </li> </ul> <p>For example, the following values are valid:</p>
     * <ul> <li> <p>93 (3 months * 31)</p> </li> <li> <p>341 (11 months * 31)</p> </li>
     * <li> <p>589 (19 months * 31)</p> </li> <li> <p>731</p> </li> </ul> <p>If you
     * specify a retention period such as 94, which isn't a valid value, RDS issues an
     * error.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline bool PerformanceInsightsRetentionPeriodHasBeenSet() const { return m_performanceInsightsRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days to retain Performance Insights data. The default is 7
     * days. The following values are valid:</p> <ul> <li> <p>7</p> </li> <li> <p>
     * <i>month</i> * 31, where <i>month</i> is a number of months from 1-23</p> </li>
     * <li> <p>731</p> </li> </ul> <p>For example, the following values are valid:</p>
     * <ul> <li> <p>93 (3 months * 31)</p> </li> <li> <p>341 (11 months * 31)</p> </li>
     * <li> <p>589 (19 months * 31)</p> </li> <li> <p>731</p> </li> </ul> <p>If you
     * specify a retention period such as 94, which isn't a valid value, RDS issues an
     * error.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetPerformanceInsightsRetentionPeriod(int value) { m_performanceInsightsRetentionPeriodHasBeenSet = true; m_performanceInsightsRetentionPeriod = value; }

    /**
     * <p>The number of days to retain Performance Insights data. The default is 7
     * days. The following values are valid:</p> <ul> <li> <p>7</p> </li> <li> <p>
     * <i>month</i> * 31, where <i>month</i> is a number of months from 1-23</p> </li>
     * <li> <p>731</p> </li> </ul> <p>For example, the following values are valid:</p>
     * <ul> <li> <p>93 (3 months * 31)</p> </li> <li> <p>341 (11 months * 31)</p> </li>
     * <li> <p>589 (19 months * 31)</p> </li> <li> <p>731</p> </li> </ul> <p>If you
     * specify a retention period such as 94, which isn't a valid value, RDS issues an
     * error.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithPerformanceInsightsRetentionPeriod(int value) { SetPerformanceInsightsRetentionPeriod(value); return *this;}


    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch Logs.
     * The values in the list depend on the DB engine being used. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnableCloudwatchLogsExports() const{ return m_enableCloudwatchLogsExports; }

    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch Logs.
     * The values in the list depend on the DB engine being used. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline bool EnableCloudwatchLogsExportsHasBeenSet() const { return m_enableCloudwatchLogsExportsHasBeenSet; }

    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch Logs.
     * The values in the list depend on the DB engine being used. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = value; }

    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch Logs.
     * The values in the list depend on the DB engine being used. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = std::move(value); }

    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch Logs.
     * The values in the list depend on the DB engine being used. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnableCloudwatchLogsExports(value); return *this;}

    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch Logs.
     * The values in the list depend on the DB engine being used. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnableCloudwatchLogsExports(std::move(value)); return *this;}

    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch Logs.
     * The values in the list depend on the DB engine being used. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& AddEnableCloudwatchLogsExports(const Aws::String& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }

    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch Logs.
     * The values in the list depend on the DB engine being used. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& AddEnableCloudwatchLogsExports(Aws::String&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch Logs.
     * The values in the list depend on the DB engine being used. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& AddEnableCloudwatchLogsExports(const char* value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }


    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline const Aws::Vector<ProcessorFeature>& GetProcessorFeatures() const{ return m_processorFeatures; }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline bool ProcessorFeaturesHasBeenSet() const { return m_processorFeaturesHasBeenSet; }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline void SetProcessorFeatures(const Aws::Vector<ProcessorFeature>& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = value; }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline void SetProcessorFeatures(Aws::Vector<ProcessorFeature>&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = std::move(value); }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithProcessorFeatures(const Aws::Vector<ProcessorFeature>& value) { SetProcessorFeatures(value); return *this;}

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithProcessorFeatures(Aws::Vector<ProcessorFeature>&& value) { SetProcessorFeatures(std::move(value)); return *this;}

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& AddProcessorFeatures(const ProcessorFeature& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(value); return *this; }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& AddProcessorFeatures(ProcessorFeature&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(std::move(value)); return *this; }


    /**
     * <p>A value that indicates whether the DB instance class of the DB instance uses
     * its default processor features.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline bool GetUseDefaultProcessorFeatures() const{ return m_useDefaultProcessorFeatures; }

    /**
     * <p>A value that indicates whether the DB instance class of the DB instance uses
     * its default processor features.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline bool UseDefaultProcessorFeaturesHasBeenSet() const { return m_useDefaultProcessorFeaturesHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB instance class of the DB instance uses
     * its default processor features.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline void SetUseDefaultProcessorFeatures(bool value) { m_useDefaultProcessorFeaturesHasBeenSet = true; m_useDefaultProcessorFeatures = value; }

    /**
     * <p>A value that indicates whether the DB instance class of the DB instance uses
     * its default processor features.</p> <p>This setting doesn't apply to RDS
     * Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithUseDefaultProcessorFeatures(bool value) { SetUseDefaultProcessorFeatures(value); return *this;}


    /**
     * <p>A value that indicates whether the DB instance has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection isn't enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
     * Deleting a DB Instance</a>.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>A value that indicates whether the DB instance has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection isn't enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
     * Deleting a DB Instance</a>.</p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB instance has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection isn't enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
     * Deleting a DB Instance</a>.</p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>A value that indicates whether the DB instance has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection isn't enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
     * Deleting a DB Instance</a>.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}


    /**
     * <p>The Active Directory directory ID to create the DB instance in. Currently,
     * only MySQL, Microsoft SQL Server, Oracle, and PostgreSQL DB instances can be
     * created in an Active Directory Domain.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting doesn't apply to RDS Custom.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The Active Directory directory ID to create the DB instance in. Currently,
     * only MySQL, Microsoft SQL Server, Oracle, and PostgreSQL DB instances can be
     * created in an Active Directory Domain.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting doesn't apply to RDS Custom.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The Active Directory directory ID to create the DB instance in. Currently,
     * only MySQL, Microsoft SQL Server, Oracle, and PostgreSQL DB instances can be
     * created in an Active Directory Domain.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting doesn't apply to RDS Custom.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The Active Directory directory ID to create the DB instance in. Currently,
     * only MySQL, Microsoft SQL Server, Oracle, and PostgreSQL DB instances can be
     * created in an Active Directory Domain.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting doesn't apply to RDS Custom.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The Active Directory directory ID to create the DB instance in. Currently,
     * only MySQL, Microsoft SQL Server, Oracle, and PostgreSQL DB instances can be
     * created in an Active Directory Domain.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting doesn't apply to RDS Custom.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The Active Directory directory ID to create the DB instance in. Currently,
     * only MySQL, Microsoft SQL Server, Oracle, and PostgreSQL DB instances can be
     * created in an Active Directory Domain.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting doesn't apply to RDS Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The Active Directory directory ID to create the DB instance in. Currently,
     * only MySQL, Microsoft SQL Server, Oracle, and PostgreSQL DB instances can be
     * created in an Active Directory Domain.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting doesn't apply to RDS Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The Active Directory directory ID to create the DB instance in. Currently,
     * only MySQL, Microsoft SQL Server, Oracle, and PostgreSQL DB instances can be
     * created in an Active Directory Domain.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting doesn't apply to RDS Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline const Aws::String& GetDomainIAMRoleName() const{ return m_domainIAMRoleName; }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline bool DomainIAMRoleNameHasBeenSet() const { return m_domainIAMRoleNameHasBeenSet; }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetDomainIAMRoleName(const Aws::String& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = value; }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetDomainIAMRoleName(Aws::String&& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = std::move(value); }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline void SetDomainIAMRoleName(const char* value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName.assign(value); }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDomainIAMRoleName(const Aws::String& value) { SetDomainIAMRoleName(value); return *this;}

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDomainIAMRoleName(Aws::String&& value) { SetDomainIAMRoleName(std::move(value)); return *this;}

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p> <p>This setting doesn't apply to RDS Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDomainIAMRoleName(const char* value) { SetDomainIAMRoleName(value); return *this;}


    /**
     * <p>The open mode of the replica database: mounted or read-only.</p> 
     * <p>This parameter is only supported for Oracle DB instances.</p> 
     * <p>Mounted DB replicas are included in Oracle Database Enterprise Edition. The
     * main use case for mounted replicas is cross-Region disaster recovery. The
     * primary database doesn't use Active Data Guard to transmit information to the
     * mounted replica. Because it doesn't accept user connections, a mounted replica
     * can't serve a read-only workload.</p> <p>You can create a combination of mounted
     * and read-only DB replicas for the same primary DB instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.html">Working
     * with Oracle Read Replicas for Amazon RDS</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For RDS Custom, you must specify this parameter and set it to
     * <code>mounted</code>. The value won't be set by default. After replica creation,
     * you can manage the open mode manually.</p>
     */
    inline const ReplicaMode& GetReplicaMode() const{ return m_replicaMode; }

    /**
     * <p>The open mode of the replica database: mounted or read-only.</p> 
     * <p>This parameter is only supported for Oracle DB instances.</p> 
     * <p>Mounted DB replicas are included in Oracle Database Enterprise Edition. The
     * main use case for mounted replicas is cross-Region disaster recovery. The
     * primary database doesn't use Active Data Guard to transmit information to the
     * mounted replica. Because it doesn't accept user connections, a mounted replica
     * can't serve a read-only workload.</p> <p>You can create a combination of mounted
     * and read-only DB replicas for the same primary DB instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.html">Working
     * with Oracle Read Replicas for Amazon RDS</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For RDS Custom, you must specify this parameter and set it to
     * <code>mounted</code>. The value won't be set by default. After replica creation,
     * you can manage the open mode manually.</p>
     */
    inline bool ReplicaModeHasBeenSet() const { return m_replicaModeHasBeenSet; }

    /**
     * <p>The open mode of the replica database: mounted or read-only.</p> 
     * <p>This parameter is only supported for Oracle DB instances.</p> 
     * <p>Mounted DB replicas are included in Oracle Database Enterprise Edition. The
     * main use case for mounted replicas is cross-Region disaster recovery. The
     * primary database doesn't use Active Data Guard to transmit information to the
     * mounted replica. Because it doesn't accept user connections, a mounted replica
     * can't serve a read-only workload.</p> <p>You can create a combination of mounted
     * and read-only DB replicas for the same primary DB instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.html">Working
     * with Oracle Read Replicas for Amazon RDS</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For RDS Custom, you must specify this parameter and set it to
     * <code>mounted</code>. The value won't be set by default. After replica creation,
     * you can manage the open mode manually.</p>
     */
    inline void SetReplicaMode(const ReplicaMode& value) { m_replicaModeHasBeenSet = true; m_replicaMode = value; }

    /**
     * <p>The open mode of the replica database: mounted or read-only.</p> 
     * <p>This parameter is only supported for Oracle DB instances.</p> 
     * <p>Mounted DB replicas are included in Oracle Database Enterprise Edition. The
     * main use case for mounted replicas is cross-Region disaster recovery. The
     * primary database doesn't use Active Data Guard to transmit information to the
     * mounted replica. Because it doesn't accept user connections, a mounted replica
     * can't serve a read-only workload.</p> <p>You can create a combination of mounted
     * and read-only DB replicas for the same primary DB instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.html">Working
     * with Oracle Read Replicas for Amazon RDS</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For RDS Custom, you must specify this parameter and set it to
     * <code>mounted</code>. The value won't be set by default. After replica creation,
     * you can manage the open mode manually.</p>
     */
    inline void SetReplicaMode(ReplicaMode&& value) { m_replicaModeHasBeenSet = true; m_replicaMode = std::move(value); }

    /**
     * <p>The open mode of the replica database: mounted or read-only.</p> 
     * <p>This parameter is only supported for Oracle DB instances.</p> 
     * <p>Mounted DB replicas are included in Oracle Database Enterprise Edition. The
     * main use case for mounted replicas is cross-Region disaster recovery. The
     * primary database doesn't use Active Data Guard to transmit information to the
     * mounted replica. Because it doesn't accept user connections, a mounted replica
     * can't serve a read-only workload.</p> <p>You can create a combination of mounted
     * and read-only DB replicas for the same primary DB instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.html">Working
     * with Oracle Read Replicas for Amazon RDS</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For RDS Custom, you must specify this parameter and set it to
     * <code>mounted</code>. The value won't be set by default. After replica creation,
     * you can manage the open mode manually.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithReplicaMode(const ReplicaMode& value) { SetReplicaMode(value); return *this;}

    /**
     * <p>The open mode of the replica database: mounted or read-only.</p> 
     * <p>This parameter is only supported for Oracle DB instances.</p> 
     * <p>Mounted DB replicas are included in Oracle Database Enterprise Edition. The
     * main use case for mounted replicas is cross-Region disaster recovery. The
     * primary database doesn't use Active Data Guard to transmit information to the
     * mounted replica. Because it doesn't accept user connections, a mounted replica
     * can't serve a read-only workload.</p> <p>You can create a combination of mounted
     * and read-only DB replicas for the same primary DB instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.html">Working
     * with Oracle Read Replicas for Amazon RDS</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For RDS Custom, you must specify this parameter and set it to
     * <code>mounted</code>. The value won't be set by default. After replica creation,
     * you can manage the open mode manually.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithReplicaMode(ReplicaMode&& value) { SetReplicaMode(std::move(value)); return *this;}


    /**
     * <p>The upper limit in gibibytes (GiB) to which Amazon RDS can automatically
     * scale the storage of the DB instance.</p> <p>For more information about this
     * setting, including limitations that apply to it, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PIOPS.StorageTypes.html#USER_PIOPS.Autoscaling">
     * Managing capacity automatically with Amazon RDS storage autoscaling</a> in the
     * <i>Amazon RDS User Guide</i>.</p>
     */
    inline int GetMaxAllocatedStorage() const{ return m_maxAllocatedStorage; }

    /**
     * <p>The upper limit in gibibytes (GiB) to which Amazon RDS can automatically
     * scale the storage of the DB instance.</p> <p>For more information about this
     * setting, including limitations that apply to it, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PIOPS.StorageTypes.html#USER_PIOPS.Autoscaling">
     * Managing capacity automatically with Amazon RDS storage autoscaling</a> in the
     * <i>Amazon RDS User Guide</i>.</p>
     */
    inline bool MaxAllocatedStorageHasBeenSet() const { return m_maxAllocatedStorageHasBeenSet; }

    /**
     * <p>The upper limit in gibibytes (GiB) to which Amazon RDS can automatically
     * scale the storage of the DB instance.</p> <p>For more information about this
     * setting, including limitations that apply to it, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PIOPS.StorageTypes.html#USER_PIOPS.Autoscaling">
     * Managing capacity automatically with Amazon RDS storage autoscaling</a> in the
     * <i>Amazon RDS User Guide</i>.</p>
     */
    inline void SetMaxAllocatedStorage(int value) { m_maxAllocatedStorageHasBeenSet = true; m_maxAllocatedStorage = value; }

    /**
     * <p>The upper limit in gibibytes (GiB) to which Amazon RDS can automatically
     * scale the storage of the DB instance.</p> <p>For more information about this
     * setting, including limitations that apply to it, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PIOPS.StorageTypes.html#USER_PIOPS.Autoscaling">
     * Managing capacity automatically with Amazon RDS storage autoscaling</a> in the
     * <i>Amazon RDS User Guide</i>.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithMaxAllocatedStorage(int value) { SetMaxAllocatedStorage(value); return *this;}


    /**
     * <p>The instance profile associated with the underlying Amazon EC2 instance of an
     * RDS Custom DB instance. The instance profile must meet the following
     * requirements:</p> <ul> <li> <p>The profile must exist in your account.</p> </li>
     * <li> <p>The profile must have an IAM role that Amazon EC2 has permissions to
     * assume.</p> </li> <li> <p>The instance profile name and the associated IAM role
     * name must start with the prefix <code>AWSRDSCustom</code>.</p> </li> </ul>
     * <p>For the list of permissions required for the IAM role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-setup-orcl.html#custom-setup-orcl.iam-vpc">
     * Configure IAM and your VPC</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting is required for RDS Custom.</p>
     */
    inline const Aws::String& GetCustomIamInstanceProfile() const{ return m_customIamInstanceProfile; }

    /**
     * <p>The instance profile associated with the underlying Amazon EC2 instance of an
     * RDS Custom DB instance. The instance profile must meet the following
     * requirements:</p> <ul> <li> <p>The profile must exist in your account.</p> </li>
     * <li> <p>The profile must have an IAM role that Amazon EC2 has permissions to
     * assume.</p> </li> <li> <p>The instance profile name and the associated IAM role
     * name must start with the prefix <code>AWSRDSCustom</code>.</p> </li> </ul>
     * <p>For the list of permissions required for the IAM role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-setup-orcl.html#custom-setup-orcl.iam-vpc">
     * Configure IAM and your VPC</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting is required for RDS Custom.</p>
     */
    inline bool CustomIamInstanceProfileHasBeenSet() const { return m_customIamInstanceProfileHasBeenSet; }

    /**
     * <p>The instance profile associated with the underlying Amazon EC2 instance of an
     * RDS Custom DB instance. The instance profile must meet the following
     * requirements:</p> <ul> <li> <p>The profile must exist in your account.</p> </li>
     * <li> <p>The profile must have an IAM role that Amazon EC2 has permissions to
     * assume.</p> </li> <li> <p>The instance profile name and the associated IAM role
     * name must start with the prefix <code>AWSRDSCustom</code>.</p> </li> </ul>
     * <p>For the list of permissions required for the IAM role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-setup-orcl.html#custom-setup-orcl.iam-vpc">
     * Configure IAM and your VPC</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting is required for RDS Custom.</p>
     */
    inline void SetCustomIamInstanceProfile(const Aws::String& value) { m_customIamInstanceProfileHasBeenSet = true; m_customIamInstanceProfile = value; }

    /**
     * <p>The instance profile associated with the underlying Amazon EC2 instance of an
     * RDS Custom DB instance. The instance profile must meet the following
     * requirements:</p> <ul> <li> <p>The profile must exist in your account.</p> </li>
     * <li> <p>The profile must have an IAM role that Amazon EC2 has permissions to
     * assume.</p> </li> <li> <p>The instance profile name and the associated IAM role
     * name must start with the prefix <code>AWSRDSCustom</code>.</p> </li> </ul>
     * <p>For the list of permissions required for the IAM role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-setup-orcl.html#custom-setup-orcl.iam-vpc">
     * Configure IAM and your VPC</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting is required for RDS Custom.</p>
     */
    inline void SetCustomIamInstanceProfile(Aws::String&& value) { m_customIamInstanceProfileHasBeenSet = true; m_customIamInstanceProfile = std::move(value); }

    /**
     * <p>The instance profile associated with the underlying Amazon EC2 instance of an
     * RDS Custom DB instance. The instance profile must meet the following
     * requirements:</p> <ul> <li> <p>The profile must exist in your account.</p> </li>
     * <li> <p>The profile must have an IAM role that Amazon EC2 has permissions to
     * assume.</p> </li> <li> <p>The instance profile name and the associated IAM role
     * name must start with the prefix <code>AWSRDSCustom</code>.</p> </li> </ul>
     * <p>For the list of permissions required for the IAM role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-setup-orcl.html#custom-setup-orcl.iam-vpc">
     * Configure IAM and your VPC</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting is required for RDS Custom.</p>
     */
    inline void SetCustomIamInstanceProfile(const char* value) { m_customIamInstanceProfileHasBeenSet = true; m_customIamInstanceProfile.assign(value); }

    /**
     * <p>The instance profile associated with the underlying Amazon EC2 instance of an
     * RDS Custom DB instance. The instance profile must meet the following
     * requirements:</p> <ul> <li> <p>The profile must exist in your account.</p> </li>
     * <li> <p>The profile must have an IAM role that Amazon EC2 has permissions to
     * assume.</p> </li> <li> <p>The instance profile name and the associated IAM role
     * name must start with the prefix <code>AWSRDSCustom</code>.</p> </li> </ul>
     * <p>For the list of permissions required for the IAM role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-setup-orcl.html#custom-setup-orcl.iam-vpc">
     * Configure IAM and your VPC</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting is required for RDS Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithCustomIamInstanceProfile(const Aws::String& value) { SetCustomIamInstanceProfile(value); return *this;}

    /**
     * <p>The instance profile associated with the underlying Amazon EC2 instance of an
     * RDS Custom DB instance. The instance profile must meet the following
     * requirements:</p> <ul> <li> <p>The profile must exist in your account.</p> </li>
     * <li> <p>The profile must have an IAM role that Amazon EC2 has permissions to
     * assume.</p> </li> <li> <p>The instance profile name and the associated IAM role
     * name must start with the prefix <code>AWSRDSCustom</code>.</p> </li> </ul>
     * <p>For the list of permissions required for the IAM role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-setup-orcl.html#custom-setup-orcl.iam-vpc">
     * Configure IAM and your VPC</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting is required for RDS Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithCustomIamInstanceProfile(Aws::String&& value) { SetCustomIamInstanceProfile(std::move(value)); return *this;}

    /**
     * <p>The instance profile associated with the underlying Amazon EC2 instance of an
     * RDS Custom DB instance. The instance profile must meet the following
     * requirements:</p> <ul> <li> <p>The profile must exist in your account.</p> </li>
     * <li> <p>The profile must have an IAM role that Amazon EC2 has permissions to
     * assume.</p> </li> <li> <p>The instance profile name and the associated IAM role
     * name must start with the prefix <code>AWSRDSCustom</code>.</p> </li> </ul>
     * <p>For the list of permissions required for the IAM role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-setup-orcl.html#custom-setup-orcl.iam-vpc">
     * Configure IAM and your VPC</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting is required for RDS Custom.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithCustomIamInstanceProfile(const char* value) { SetCustomIamInstanceProfile(value); return *this;}


    /**
     * <p>The network type of the DB instance.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for read
     * replica. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or the
     * IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon RDS User Guide.</i>
     * </p>
     */
    inline const Aws::String& GetNetworkType() const{ return m_networkType; }

    /**
     * <p>The network type of the DB instance.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for read
     * replica. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or the
     * IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon RDS User Guide.</i>
     * </p>
     */
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }

    /**
     * <p>The network type of the DB instance.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for read
     * replica. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or the
     * IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon RDS User Guide.</i>
     * </p>
     */
    inline void SetNetworkType(const Aws::String& value) { m_networkTypeHasBeenSet = true; m_networkType = value; }

    /**
     * <p>The network type of the DB instance.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for read
     * replica. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or the
     * IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon RDS User Guide.</i>
     * </p>
     */
    inline void SetNetworkType(Aws::String&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::move(value); }

    /**
     * <p>The network type of the DB instance.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for read
     * replica. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or the
     * IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon RDS User Guide.</i>
     * </p>
     */
    inline void SetNetworkType(const char* value) { m_networkTypeHasBeenSet = true; m_networkType.assign(value); }

    /**
     * <p>The network type of the DB instance.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for read
     * replica. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or the
     * IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon RDS User Guide.</i>
     * </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithNetworkType(const Aws::String& value) { SetNetworkType(value); return *this;}

    /**
     * <p>The network type of the DB instance.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for read
     * replica. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or the
     * IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon RDS User Guide.</i>
     * </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithNetworkType(Aws::String&& value) { SetNetworkType(std::move(value)); return *this;}

    /**
     * <p>The network type of the DB instance.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for read
     * replica. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or the
     * IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon RDS User Guide.</i>
     * </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithNetworkType(const char* value) { SetNetworkType(value); return *this;}


    /**
     * <p>Specifies the storage throughput value for the read replica.</p> <p>This
     * setting doesn't apply to RDS Custom or Amazon Aurora.</p>
     */
    inline int GetStorageThroughput() const{ return m_storageThroughput; }

    /**
     * <p>Specifies the storage throughput value for the read replica.</p> <p>This
     * setting doesn't apply to RDS Custom or Amazon Aurora.</p>
     */
    inline bool StorageThroughputHasBeenSet() const { return m_storageThroughputHasBeenSet; }

    /**
     * <p>Specifies the storage throughput value for the read replica.</p> <p>This
     * setting doesn't apply to RDS Custom or Amazon Aurora.</p>
     */
    inline void SetStorageThroughput(int value) { m_storageThroughputHasBeenSet = true; m_storageThroughput = value; }

    /**
     * <p>Specifies the storage throughput value for the read replica.</p> <p>This
     * setting doesn't apply to RDS Custom or Amazon Aurora.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithStorageThroughput(int value) { SetStorageThroughput(value); return *this;}


    /**
     * <p>A value that indicates whether to enable a customer-owned IP address (CoIP)
     * for an RDS on Outposts read replica.</p> <p>A <i>CoIP</i> provides local or
     * external connectivity to resources in your Outpost subnets through your
     * on-premises network. For some use cases, a CoIP can provide lower latency for
     * connections to the read replica from outside of its virtual private cloud (VPC)
     * on your local network.</p> <p>For more information about RDS on Outposts, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-on-outposts.html">Working
     * with Amazon RDS on Amazon Web Services Outposts</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about CoIPs, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/routing.html#ip-addressing">Customer-owned
     * IP addresses</a> in the <i>Amazon Web Services Outposts User Guide</i>.</p>
     */
    inline bool GetEnableCustomerOwnedIp() const{ return m_enableCustomerOwnedIp; }

    /**
     * <p>A value that indicates whether to enable a customer-owned IP address (CoIP)
     * for an RDS on Outposts read replica.</p> <p>A <i>CoIP</i> provides local or
     * external connectivity to resources in your Outpost subnets through your
     * on-premises network. For some use cases, a CoIP can provide lower latency for
     * connections to the read replica from outside of its virtual private cloud (VPC)
     * on your local network.</p> <p>For more information about RDS on Outposts, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-on-outposts.html">Working
     * with Amazon RDS on Amazon Web Services Outposts</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about CoIPs, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/routing.html#ip-addressing">Customer-owned
     * IP addresses</a> in the <i>Amazon Web Services Outposts User Guide</i>.</p>
     */
    inline bool EnableCustomerOwnedIpHasBeenSet() const { return m_enableCustomerOwnedIpHasBeenSet; }

    /**
     * <p>A value that indicates whether to enable a customer-owned IP address (CoIP)
     * for an RDS on Outposts read replica.</p> <p>A <i>CoIP</i> provides local or
     * external connectivity to resources in your Outpost subnets through your
     * on-premises network. For some use cases, a CoIP can provide lower latency for
     * connections to the read replica from outside of its virtual private cloud (VPC)
     * on your local network.</p> <p>For more information about RDS on Outposts, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-on-outposts.html">Working
     * with Amazon RDS on Amazon Web Services Outposts</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about CoIPs, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/routing.html#ip-addressing">Customer-owned
     * IP addresses</a> in the <i>Amazon Web Services Outposts User Guide</i>.</p>
     */
    inline void SetEnableCustomerOwnedIp(bool value) { m_enableCustomerOwnedIpHasBeenSet = true; m_enableCustomerOwnedIp = value; }

    /**
     * <p>A value that indicates whether to enable a customer-owned IP address (CoIP)
     * for an RDS on Outposts read replica.</p> <p>A <i>CoIP</i> provides local or
     * external connectivity to resources in your Outpost subnets through your
     * on-premises network. For some use cases, a CoIP can provide lower latency for
     * connections to the read replica from outside of its virtual private cloud (VPC)
     * on your local network.</p> <p>For more information about RDS on Outposts, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-on-outposts.html">Working
     * with Amazon RDS on Amazon Web Services Outposts</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about CoIPs, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/routing.html#ip-addressing">Customer-owned
     * IP addresses</a> in the <i>Amazon Web Services Outposts User Guide</i>.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithEnableCustomerOwnedIp(bool value) { SetEnableCustomerOwnedIp(value); return *this;}


    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::move(value); }

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline void SetSourceRegion(const char* value) { m_sourceRegionHasBeenSet = true; m_sourceRegion.assign(value); }

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline CreateDBInstanceReadReplicaRequest& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline CreateDBInstanceReadReplicaRequest& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline CreateDBInstanceReadReplicaRequest& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}

  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    Aws::String m_sourceDBInstanceIdentifier;
    bool m_sourceDBInstanceIdentifierHasBeenSet = false;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet = false;

    int m_monitoringInterval;
    bool m_monitoringIntervalHasBeenSet = false;

    Aws::String m_monitoringRoleArn;
    bool m_monitoringRoleArnHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_preSignedUrl;
    bool m_preSignedUrlHasBeenSet = false;

    bool m_enableIAMDatabaseAuthentication;
    bool m_enableIAMDatabaseAuthenticationHasBeenSet = false;

    bool m_enablePerformanceInsights;
    bool m_enablePerformanceInsightsHasBeenSet = false;

    Aws::String m_performanceInsightsKMSKeyId;
    bool m_performanceInsightsKMSKeyIdHasBeenSet = false;

    int m_performanceInsightsRetentionPeriod;
    bool m_performanceInsightsRetentionPeriodHasBeenSet = false;

    Aws::Vector<Aws::String> m_enableCloudwatchLogsExports;
    bool m_enableCloudwatchLogsExportsHasBeenSet = false;

    Aws::Vector<ProcessorFeature> m_processorFeatures;
    bool m_processorFeaturesHasBeenSet = false;

    bool m_useDefaultProcessorFeatures;
    bool m_useDefaultProcessorFeaturesHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainIAMRoleName;
    bool m_domainIAMRoleNameHasBeenSet = false;

    ReplicaMode m_replicaMode;
    bool m_replicaModeHasBeenSet = false;

    int m_maxAllocatedStorage;
    bool m_maxAllocatedStorageHasBeenSet = false;

    Aws::String m_customIamInstanceProfile;
    bool m_customIamInstanceProfileHasBeenSet = false;

    Aws::String m_networkType;
    bool m_networkTypeHasBeenSet = false;

    int m_storageThroughput;
    bool m_storageThroughputHasBeenSet = false;

    bool m_enableCustomerOwnedIp;
    bool m_enableCustomerOwnedIpHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
