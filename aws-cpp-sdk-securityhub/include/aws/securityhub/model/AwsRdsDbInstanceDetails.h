/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsRdsDbInstanceEndpoint.h>
#include <aws/securityhub/model/AwsRdsDbSubnetGroup.h>
#include <aws/securityhub/model/AwsRdsDbPendingModifiedValues.h>
#include <aws/securityhub/model/AwsRdsDbInstanceAssociatedRole.h>
#include <aws/securityhub/model/AwsRdsDbInstanceVpcSecurityGroup.h>
#include <aws/securityhub/model/AwsRdsDbParameterGroup.h>
#include <aws/securityhub/model/AwsRdsDbOptionGroupMembership.h>
#include <aws/securityhub/model/AwsRdsDbStatusInfo.h>
#include <aws/securityhub/model/AwsRdsDbDomainMembership.h>
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
   * <p>Contains the details of an Amazon RDS DB instance.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbInstanceDetails">AWS
   * API Reference</a></p>
   */
  class AwsRdsDbInstanceDetails
  {
  public:
    AWS_SECURITYHUB_API AwsRdsDbInstanceDetails();
    AWS_SECURITYHUB_API AwsRdsDbInstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbInstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IAM roles associated with the DB instance.</p>
     */
    inline const Aws::Vector<AwsRdsDbInstanceAssociatedRole>& GetAssociatedRoles() const{ return m_associatedRoles; }

    /**
     * <p>The IAM roles associated with the DB instance.</p>
     */
    inline bool AssociatedRolesHasBeenSet() const { return m_associatedRolesHasBeenSet; }

    /**
     * <p>The IAM roles associated with the DB instance.</p>
     */
    inline void SetAssociatedRoles(const Aws::Vector<AwsRdsDbInstanceAssociatedRole>& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles = value; }

    /**
     * <p>The IAM roles associated with the DB instance.</p>
     */
    inline void SetAssociatedRoles(Aws::Vector<AwsRdsDbInstanceAssociatedRole>&& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles = std::move(value); }

    /**
     * <p>The IAM roles associated with the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithAssociatedRoles(const Aws::Vector<AwsRdsDbInstanceAssociatedRole>& value) { SetAssociatedRoles(value); return *this;}

    /**
     * <p>The IAM roles associated with the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithAssociatedRoles(Aws::Vector<AwsRdsDbInstanceAssociatedRole>&& value) { SetAssociatedRoles(std::move(value)); return *this;}

    /**
     * <p>The IAM roles associated with the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& AddAssociatedRoles(const AwsRdsDbInstanceAssociatedRole& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles.push_back(value); return *this; }

    /**
     * <p>The IAM roles associated with the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& AddAssociatedRoles(AwsRdsDbInstanceAssociatedRole&& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles.push_back(std::move(value)); return *this; }


    /**
     * <p>The identifier of the CA certificate for this DB instance.</p>
     */
    inline const Aws::String& GetCACertificateIdentifier() const{ return m_cACertificateIdentifier; }

    /**
     * <p>The identifier of the CA certificate for this DB instance.</p>
     */
    inline bool CACertificateIdentifierHasBeenSet() const { return m_cACertificateIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the CA certificate for this DB instance.</p>
     */
    inline void SetCACertificateIdentifier(const Aws::String& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = value; }

    /**
     * <p>The identifier of the CA certificate for this DB instance.</p>
     */
    inline void SetCACertificateIdentifier(Aws::String&& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = std::move(value); }

    /**
     * <p>The identifier of the CA certificate for this DB instance.</p>
     */
    inline void SetCACertificateIdentifier(const char* value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier.assign(value); }

    /**
     * <p>The identifier of the CA certificate for this DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithCACertificateIdentifier(const Aws::String& value) { SetCACertificateIdentifier(value); return *this;}

    /**
     * <p>The identifier of the CA certificate for this DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithCACertificateIdentifier(Aws::String&& value) { SetCACertificateIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the CA certificate for this DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithCACertificateIdentifier(const char* value) { SetCACertificateIdentifier(value); return *this;}


    /**
     * <p>If the DB instance is a member of a DB cluster, contains the name of the DB
     * cluster that the DB instance is a member of.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>If the DB instance is a member of a DB cluster, contains the name of the DB
     * cluster that the DB instance is a member of.</p>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>If the DB instance is a member of a DB cluster, contains the name of the DB
     * cluster that the DB instance is a member of.</p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>If the DB instance is a member of a DB cluster, contains the name of the DB
     * cluster that the DB instance is a member of.</p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>If the DB instance is a member of a DB cluster, contains the name of the DB
     * cluster that the DB instance is a member of.</p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>If the DB instance is a member of a DB cluster, contains the name of the DB
     * cluster that the DB instance is a member of.</p>
     */
    inline AwsRdsDbInstanceDetails& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>If the DB instance is a member of a DB cluster, contains the name of the DB
     * cluster that the DB instance is a member of.</p>
     */
    inline AwsRdsDbInstanceDetails& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>If the DB instance is a member of a DB cluster, contains the name of the DB
     * cluster that the DB instance is a member of.</p>
     */
    inline AwsRdsDbInstanceDetails& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>Contains a user-supplied database identifier. This identifier is the unique
     * key that identifies a DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>Contains a user-supplied database identifier. This identifier is the unique
     * key that identifies a DB instance.</p>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>Contains a user-supplied database identifier. This identifier is the unique
     * key that identifies a DB instance.</p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>Contains a user-supplied database identifier. This identifier is the unique
     * key that identifies a DB instance.</p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>Contains a user-supplied database identifier. This identifier is the unique
     * key that identifies a DB instance.</p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>Contains a user-supplied database identifier. This identifier is the unique
     * key that identifies a DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>Contains a user-supplied database identifier. This identifier is the unique
     * key that identifies a DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>Contains a user-supplied database identifier. This identifier is the unique
     * key that identifies a DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>Contains the name of the compute and memory capacity class of the DB
     * instance.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p>Contains the name of the compute and memory capacity class of the DB
     * instance.</p>
     */
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }

    /**
     * <p>Contains the name of the compute and memory capacity class of the DB
     * instance.</p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>Contains the name of the compute and memory capacity class of the DB
     * instance.</p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }

    /**
     * <p>Contains the name of the compute and memory capacity class of the DB
     * instance.</p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p>Contains the name of the compute and memory capacity class of the DB
     * instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>Contains the name of the compute and memory capacity class of the DB
     * instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}

    /**
     * <p>Contains the name of the compute and memory capacity class of the DB
     * instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}


    /**
     * <p>Specifies the port that the DB instance listens on. If the DB instance is
     * part of a DB cluster, this can be a different port than the DB cluster port.</p>
     */
    inline int GetDbInstancePort() const{ return m_dbInstancePort; }

    /**
     * <p>Specifies the port that the DB instance listens on. If the DB instance is
     * part of a DB cluster, this can be a different port than the DB cluster port.</p>
     */
    inline bool DbInstancePortHasBeenSet() const { return m_dbInstancePortHasBeenSet; }

    /**
     * <p>Specifies the port that the DB instance listens on. If the DB instance is
     * part of a DB cluster, this can be a different port than the DB cluster port.</p>
     */
    inline void SetDbInstancePort(int value) { m_dbInstancePortHasBeenSet = true; m_dbInstancePort = value; }

    /**
     * <p>Specifies the port that the DB instance listens on. If the DB instance is
     * part of a DB cluster, this can be a different port than the DB cluster port.</p>
     */
    inline AwsRdsDbInstanceDetails& WithDbInstancePort(int value) { SetDbInstancePort(value); return *this;}


    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * instance. This identifier is found in CloudTrail log entries whenever the KMS
     * key for the DB instance is accessed. </p>
     */
    inline const Aws::String& GetDbiResourceId() const{ return m_dbiResourceId; }

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * instance. This identifier is found in CloudTrail log entries whenever the KMS
     * key for the DB instance is accessed. </p>
     */
    inline bool DbiResourceIdHasBeenSet() const { return m_dbiResourceIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * instance. This identifier is found in CloudTrail log entries whenever the KMS
     * key for the DB instance is accessed. </p>
     */
    inline void SetDbiResourceId(const Aws::String& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = value; }

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * instance. This identifier is found in CloudTrail log entries whenever the KMS
     * key for the DB instance is accessed. </p>
     */
    inline void SetDbiResourceId(Aws::String&& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = std::move(value); }

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * instance. This identifier is found in CloudTrail log entries whenever the KMS
     * key for the DB instance is accessed. </p>
     */
    inline void SetDbiResourceId(const char* value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId.assign(value); }

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * instance. This identifier is found in CloudTrail log entries whenever the KMS
     * key for the DB instance is accessed. </p>
     */
    inline AwsRdsDbInstanceDetails& WithDbiResourceId(const Aws::String& value) { SetDbiResourceId(value); return *this;}

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * instance. This identifier is found in CloudTrail log entries whenever the KMS
     * key for the DB instance is accessed. </p>
     */
    inline AwsRdsDbInstanceDetails& WithDbiResourceId(Aws::String&& value) { SetDbiResourceId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region-unique, immutable identifier for the DB
     * instance. This identifier is found in CloudTrail log entries whenever the KMS
     * key for the DB instance is accessed. </p>
     */
    inline AwsRdsDbInstanceDetails& WithDbiResourceId(const char* value) { SetDbiResourceId(value); return *this;}


    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p> <b>MySQL, MariaDB, SQL Server, PostgreSQL</b> </p> <p>Contains the
     * name of the initial database of this instance that was provided at create time,
     * if one was specified when the DB instance was created. This same name is
     * returned for the life of the DB instance.</p> <p> <b>Oracle</b> </p> <p>Contains
     * the Oracle System ID (SID) of the created DB instance. Not shown when the
     * returned parameters do not apply to an Oracle DB instance. </p>
     */
    inline const Aws::String& GetDBName() const{ return m_dBName; }

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p> <b>MySQL, MariaDB, SQL Server, PostgreSQL</b> </p> <p>Contains the
     * name of the initial database of this instance that was provided at create time,
     * if one was specified when the DB instance was created. This same name is
     * returned for the life of the DB instance.</p> <p> <b>Oracle</b> </p> <p>Contains
     * the Oracle System ID (SID) of the created DB instance. Not shown when the
     * returned parameters do not apply to an Oracle DB instance. </p>
     */
    inline bool DBNameHasBeenSet() const { return m_dBNameHasBeenSet; }

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p> <b>MySQL, MariaDB, SQL Server, PostgreSQL</b> </p> <p>Contains the
     * name of the initial database of this instance that was provided at create time,
     * if one was specified when the DB instance was created. This same name is
     * returned for the life of the DB instance.</p> <p> <b>Oracle</b> </p> <p>Contains
     * the Oracle System ID (SID) of the created DB instance. Not shown when the
     * returned parameters do not apply to an Oracle DB instance. </p>
     */
    inline void SetDBName(const Aws::String& value) { m_dBNameHasBeenSet = true; m_dBName = value; }

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p> <b>MySQL, MariaDB, SQL Server, PostgreSQL</b> </p> <p>Contains the
     * name of the initial database of this instance that was provided at create time,
     * if one was specified when the DB instance was created. This same name is
     * returned for the life of the DB instance.</p> <p> <b>Oracle</b> </p> <p>Contains
     * the Oracle System ID (SID) of the created DB instance. Not shown when the
     * returned parameters do not apply to an Oracle DB instance. </p>
     */
    inline void SetDBName(Aws::String&& value) { m_dBNameHasBeenSet = true; m_dBName = std::move(value); }

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p> <b>MySQL, MariaDB, SQL Server, PostgreSQL</b> </p> <p>Contains the
     * name of the initial database of this instance that was provided at create time,
     * if one was specified when the DB instance was created. This same name is
     * returned for the life of the DB instance.</p> <p> <b>Oracle</b> </p> <p>Contains
     * the Oracle System ID (SID) of the created DB instance. Not shown when the
     * returned parameters do not apply to an Oracle DB instance. </p>
     */
    inline void SetDBName(const char* value) { m_dBNameHasBeenSet = true; m_dBName.assign(value); }

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p> <b>MySQL, MariaDB, SQL Server, PostgreSQL</b> </p> <p>Contains the
     * name of the initial database of this instance that was provided at create time,
     * if one was specified when the DB instance was created. This same name is
     * returned for the life of the DB instance.</p> <p> <b>Oracle</b> </p> <p>Contains
     * the Oracle System ID (SID) of the created DB instance. Not shown when the
     * returned parameters do not apply to an Oracle DB instance. </p>
     */
    inline AwsRdsDbInstanceDetails& WithDBName(const Aws::String& value) { SetDBName(value); return *this;}

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p> <b>MySQL, MariaDB, SQL Server, PostgreSQL</b> </p> <p>Contains the
     * name of the initial database of this instance that was provided at create time,
     * if one was specified when the DB instance was created. This same name is
     * returned for the life of the DB instance.</p> <p> <b>Oracle</b> </p> <p>Contains
     * the Oracle System ID (SID) of the created DB instance. Not shown when the
     * returned parameters do not apply to an Oracle DB instance. </p>
     */
    inline AwsRdsDbInstanceDetails& WithDBName(Aws::String&& value) { SetDBName(std::move(value)); return *this;}

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p> <b>MySQL, MariaDB, SQL Server, PostgreSQL</b> </p> <p>Contains the
     * name of the initial database of this instance that was provided at create time,
     * if one was specified when the DB instance was created. This same name is
     * returned for the life of the DB instance.</p> <p> <b>Oracle</b> </p> <p>Contains
     * the Oracle System ID (SID) of the created DB instance. Not shown when the
     * returned parameters do not apply to an Oracle DB instance. </p>
     */
    inline AwsRdsDbInstanceDetails& WithDBName(const char* value) { SetDBName(value); return *this;}


    /**
     * <p>Indicates whether the DB instance has deletion protection enabled.</p>
     * <p>When deletion protection is enabled, the database cannot be deleted.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>Indicates whether the DB instance has deletion protection enabled.</p>
     * <p>When deletion protection is enabled, the database cannot be deleted.</p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>Indicates whether the DB instance has deletion protection enabled.</p>
     * <p>When deletion protection is enabled, the database cannot be deleted.</p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>Indicates whether the DB instance has deletion protection enabled.</p>
     * <p>When deletion protection is enabled, the database cannot be deleted.</p>
     */
    inline AwsRdsDbInstanceDetails& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}


    /**
     * <p>Specifies the connection endpoint.</p>
     */
    inline const AwsRdsDbInstanceEndpoint& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>Specifies the connection endpoint.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>Specifies the connection endpoint.</p>
     */
    inline void SetEndpoint(const AwsRdsDbInstanceEndpoint& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>Specifies the connection endpoint.</p>
     */
    inline void SetEndpoint(AwsRdsDbInstanceEndpoint&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>Specifies the connection endpoint.</p>
     */
    inline AwsRdsDbInstanceDetails& WithEndpoint(const AwsRdsDbInstanceEndpoint& value) { SetEndpoint(value); return *this;}

    /**
     * <p>Specifies the connection endpoint.</p>
     */
    inline AwsRdsDbInstanceDetails& WithEndpoint(AwsRdsDbInstanceEndpoint&& value) { SetEndpoint(std::move(value)); return *this;}


    /**
     * <p>Provides the name of the database engine to use for this DB instance.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>Provides the name of the database engine to use for this DB instance.</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>Provides the name of the database engine to use for this DB instance.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>Provides the name of the database engine to use for this DB instance.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>Provides the name of the database engine to use for this DB instance.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>Provides the name of the database engine to use for this DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>Provides the name of the database engine to use for this DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>Provides the name of the database engine to use for this DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>Indicates the database engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline AwsRdsDbInstanceDetails& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline AwsRdsDbInstanceDetails& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline AwsRdsDbInstanceDetails& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>True if mapping of IAM accounts to database accounts is enabled, and
     * otherwise false.</p> <p>IAM database authentication can be enabled for the
     * following database engines.</p> <ul> <li> <p>For MySQL 5.6, minor version 5.6.34
     * or higher</p> </li> <li> <p>For MySQL 5.7, minor version 5.7.16 or higher</p>
     * </li> <li> <p>Aurora 5.6 or higher</p> </li> </ul>
     */
    inline bool GetIAMDatabaseAuthenticationEnabled() const{ return m_iAMDatabaseAuthenticationEnabled; }

    /**
     * <p>True if mapping of IAM accounts to database accounts is enabled, and
     * otherwise false.</p> <p>IAM database authentication can be enabled for the
     * following database engines.</p> <ul> <li> <p>For MySQL 5.6, minor version 5.6.34
     * or higher</p> </li> <li> <p>For MySQL 5.7, minor version 5.7.16 or higher</p>
     * </li> <li> <p>Aurora 5.6 or higher</p> </li> </ul>
     */
    inline bool IAMDatabaseAuthenticationEnabledHasBeenSet() const { return m_iAMDatabaseAuthenticationEnabledHasBeenSet; }

    /**
     * <p>True if mapping of IAM accounts to database accounts is enabled, and
     * otherwise false.</p> <p>IAM database authentication can be enabled for the
     * following database engines.</p> <ul> <li> <p>For MySQL 5.6, minor version 5.6.34
     * or higher</p> </li> <li> <p>For MySQL 5.7, minor version 5.7.16 or higher</p>
     * </li> <li> <p>Aurora 5.6 or higher</p> </li> </ul>
     */
    inline void SetIAMDatabaseAuthenticationEnabled(bool value) { m_iAMDatabaseAuthenticationEnabledHasBeenSet = true; m_iAMDatabaseAuthenticationEnabled = value; }

    /**
     * <p>True if mapping of IAM accounts to database accounts is enabled, and
     * otherwise false.</p> <p>IAM database authentication can be enabled for the
     * following database engines.</p> <ul> <li> <p>For MySQL 5.6, minor version 5.6.34
     * or higher</p> </li> <li> <p>For MySQL 5.7, minor version 5.7.16 or higher</p>
     * </li> <li> <p>Aurora 5.6 or higher</p> </li> </ul>
     */
    inline AwsRdsDbInstanceDetails& WithIAMDatabaseAuthenticationEnabled(bool value) { SetIAMDatabaseAuthenticationEnabled(value); return *this;}


    /**
     * <p>Indicates when the DB instance was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetInstanceCreateTime() const{ return m_instanceCreateTime; }

    /**
     * <p>Indicates when the DB instance was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool InstanceCreateTimeHasBeenSet() const { return m_instanceCreateTimeHasBeenSet; }

    /**
     * <p>Indicates when the DB instance was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetInstanceCreateTime(const Aws::String& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = value; }

    /**
     * <p>Indicates when the DB instance was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetInstanceCreateTime(Aws::String&& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = std::move(value); }

    /**
     * <p>Indicates when the DB instance was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetInstanceCreateTime(const char* value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime.assign(value); }

    /**
     * <p>Indicates when the DB instance was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRdsDbInstanceDetails& WithInstanceCreateTime(const Aws::String& value) { SetInstanceCreateTime(value); return *this;}

    /**
     * <p>Indicates when the DB instance was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRdsDbInstanceDetails& WithInstanceCreateTime(Aws::String&& value) { SetInstanceCreateTime(std::move(value)); return *this;}

    /**
     * <p>Indicates when the DB instance was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRdsDbInstanceDetails& WithInstanceCreateTime(const char* value) { SetInstanceCreateTime(value); return *this;}


    /**
     * <p>If <code>StorageEncrypted</code> is true, the KMS key identifier for the
     * encrypted DB instance.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>If <code>StorageEncrypted</code> is true, the KMS key identifier for the
     * encrypted DB instance.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>If <code>StorageEncrypted</code> is true, the KMS key identifier for the
     * encrypted DB instance.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>If <code>StorageEncrypted</code> is true, the KMS key identifier for the
     * encrypted DB instance.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>If <code>StorageEncrypted</code> is true, the KMS key identifier for the
     * encrypted DB instance.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>If <code>StorageEncrypted</code> is true, the KMS key identifier for the
     * encrypted DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>If <code>StorageEncrypted</code> is true, the KMS key identifier for the
     * encrypted DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>If <code>StorageEncrypted</code> is true, the KMS key identifier for the
     * encrypted DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Specifies the accessibility options for the DB instance.</p> <p>A value of
     * true specifies an Internet-facing instance with a publicly resolvable DNS name,
     * which resolves to a public IP address.</p> <p>A value of false specifies an
     * internal instance with a DNS name that resolves to a private IP address. </p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>Specifies the accessibility options for the DB instance.</p> <p>A value of
     * true specifies an Internet-facing instance with a publicly resolvable DNS name,
     * which resolves to a public IP address.</p> <p>A value of false specifies an
     * internal instance with a DNS name that resolves to a private IP address. </p>
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * <p>Specifies the accessibility options for the DB instance.</p> <p>A value of
     * true specifies an Internet-facing instance with a publicly resolvable DNS name,
     * which resolves to a public IP address.</p> <p>A value of false specifies an
     * internal instance with a DNS name that resolves to a private IP address. </p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>Specifies the accessibility options for the DB instance.</p> <p>A value of
     * true specifies an Internet-facing instance with a publicly resolvable DNS name,
     * which resolves to a public IP address.</p> <p>A value of false specifies an
     * internal instance with a DNS name that resolves to a private IP address. </p>
     */
    inline AwsRdsDbInstanceDetails& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    /**
     * <p>Specifies whether the DB instance is encrypted.</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }

    /**
     * <p>Specifies whether the DB instance is encrypted.</p>
     */
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }

    /**
     * <p>Specifies whether the DB instance is encrypted.</p>
     */
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }

    /**
     * <p>Specifies whether the DB instance is encrypted.</p>
     */
    inline AwsRdsDbInstanceDetails& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}


    /**
     * <p>The ARN from the key store with which the instance is associated for TDE
     * encryption.</p>
     */
    inline const Aws::String& GetTdeCredentialArn() const{ return m_tdeCredentialArn; }

    /**
     * <p>The ARN from the key store with which the instance is associated for TDE
     * encryption.</p>
     */
    inline bool TdeCredentialArnHasBeenSet() const { return m_tdeCredentialArnHasBeenSet; }

    /**
     * <p>The ARN from the key store with which the instance is associated for TDE
     * encryption.</p>
     */
    inline void SetTdeCredentialArn(const Aws::String& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = value; }

    /**
     * <p>The ARN from the key store with which the instance is associated for TDE
     * encryption.</p>
     */
    inline void SetTdeCredentialArn(Aws::String&& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = std::move(value); }

    /**
     * <p>The ARN from the key store with which the instance is associated for TDE
     * encryption.</p>
     */
    inline void SetTdeCredentialArn(const char* value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn.assign(value); }

    /**
     * <p>The ARN from the key store with which the instance is associated for TDE
     * encryption.</p>
     */
    inline AwsRdsDbInstanceDetails& WithTdeCredentialArn(const Aws::String& value) { SetTdeCredentialArn(value); return *this;}

    /**
     * <p>The ARN from the key store with which the instance is associated for TDE
     * encryption.</p>
     */
    inline AwsRdsDbInstanceDetails& WithTdeCredentialArn(Aws::String&& value) { SetTdeCredentialArn(std::move(value)); return *this;}

    /**
     * <p>The ARN from the key store with which the instance is associated for TDE
     * encryption.</p>
     */
    inline AwsRdsDbInstanceDetails& WithTdeCredentialArn(const char* value) { SetTdeCredentialArn(value); return *this;}


    /**
     * <p>A list of VPC security groups that the DB instance belongs to.</p>
     */
    inline const Aws::Vector<AwsRdsDbInstanceVpcSecurityGroup>& GetVpcSecurityGroups() const{ return m_vpcSecurityGroups; }

    /**
     * <p>A list of VPC security groups that the DB instance belongs to.</p>
     */
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }

    /**
     * <p>A list of VPC security groups that the DB instance belongs to.</p>
     */
    inline void SetVpcSecurityGroups(const Aws::Vector<AwsRdsDbInstanceVpcSecurityGroup>& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = value; }

    /**
     * <p>A list of VPC security groups that the DB instance belongs to.</p>
     */
    inline void SetVpcSecurityGroups(Aws::Vector<AwsRdsDbInstanceVpcSecurityGroup>&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::move(value); }

    /**
     * <p>A list of VPC security groups that the DB instance belongs to.</p>
     */
    inline AwsRdsDbInstanceDetails& WithVpcSecurityGroups(const Aws::Vector<AwsRdsDbInstanceVpcSecurityGroup>& value) { SetVpcSecurityGroups(value); return *this;}

    /**
     * <p>A list of VPC security groups that the DB instance belongs to.</p>
     */
    inline AwsRdsDbInstanceDetails& WithVpcSecurityGroups(Aws::Vector<AwsRdsDbInstanceVpcSecurityGroup>&& value) { SetVpcSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>A list of VPC security groups that the DB instance belongs to.</p>
     */
    inline AwsRdsDbInstanceDetails& AddVpcSecurityGroups(const AwsRdsDbInstanceVpcSecurityGroup& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of VPC security groups that the DB instance belongs to.</p>
     */
    inline AwsRdsDbInstanceDetails& AddVpcSecurityGroups(AwsRdsDbInstanceVpcSecurityGroup&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>Whether the DB instance is a multiple Availability Zone deployment.</p>
     */
    inline bool GetMultiAz() const{ return m_multiAz; }

    /**
     * <p>Whether the DB instance is a multiple Availability Zone deployment.</p>
     */
    inline bool MultiAzHasBeenSet() const { return m_multiAzHasBeenSet; }

    /**
     * <p>Whether the DB instance is a multiple Availability Zone deployment.</p>
     */
    inline void SetMultiAz(bool value) { m_multiAzHasBeenSet = true; m_multiAz = value; }

    /**
     * <p>Whether the DB instance is a multiple Availability Zone deployment.</p>
     */
    inline AwsRdsDbInstanceDetails& WithMultiAz(bool value) { SetMultiAz(value); return *this;}


    /**
     * <p>The ARN of the CloudWatch Logs log stream that receives the enhanced
     * monitoring metrics data for the DB instance.</p>
     */
    inline const Aws::String& GetEnhancedMonitoringResourceArn() const{ return m_enhancedMonitoringResourceArn; }

    /**
     * <p>The ARN of the CloudWatch Logs log stream that receives the enhanced
     * monitoring metrics data for the DB instance.</p>
     */
    inline bool EnhancedMonitoringResourceArnHasBeenSet() const { return m_enhancedMonitoringResourceArnHasBeenSet; }

    /**
     * <p>The ARN of the CloudWatch Logs log stream that receives the enhanced
     * monitoring metrics data for the DB instance.</p>
     */
    inline void SetEnhancedMonitoringResourceArn(const Aws::String& value) { m_enhancedMonitoringResourceArnHasBeenSet = true; m_enhancedMonitoringResourceArn = value; }

    /**
     * <p>The ARN of the CloudWatch Logs log stream that receives the enhanced
     * monitoring metrics data for the DB instance.</p>
     */
    inline void SetEnhancedMonitoringResourceArn(Aws::String&& value) { m_enhancedMonitoringResourceArnHasBeenSet = true; m_enhancedMonitoringResourceArn = std::move(value); }

    /**
     * <p>The ARN of the CloudWatch Logs log stream that receives the enhanced
     * monitoring metrics data for the DB instance.</p>
     */
    inline void SetEnhancedMonitoringResourceArn(const char* value) { m_enhancedMonitoringResourceArnHasBeenSet = true; m_enhancedMonitoringResourceArn.assign(value); }

    /**
     * <p>The ARN of the CloudWatch Logs log stream that receives the enhanced
     * monitoring metrics data for the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithEnhancedMonitoringResourceArn(const Aws::String& value) { SetEnhancedMonitoringResourceArn(value); return *this;}

    /**
     * <p>The ARN of the CloudWatch Logs log stream that receives the enhanced
     * monitoring metrics data for the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithEnhancedMonitoringResourceArn(Aws::String&& value) { SetEnhancedMonitoringResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the CloudWatch Logs log stream that receives the enhanced
     * monitoring metrics data for the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithEnhancedMonitoringResourceArn(const char* value) { SetEnhancedMonitoringResourceArn(value); return *this;}


    /**
     * <p>The current status of the DB instance.</p>
     */
    inline const Aws::String& GetDbInstanceStatus() const{ return m_dbInstanceStatus; }

    /**
     * <p>The current status of the DB instance.</p>
     */
    inline bool DbInstanceStatusHasBeenSet() const { return m_dbInstanceStatusHasBeenSet; }

    /**
     * <p>The current status of the DB instance.</p>
     */
    inline void SetDbInstanceStatus(const Aws::String& value) { m_dbInstanceStatusHasBeenSet = true; m_dbInstanceStatus = value; }

    /**
     * <p>The current status of the DB instance.</p>
     */
    inline void SetDbInstanceStatus(Aws::String&& value) { m_dbInstanceStatusHasBeenSet = true; m_dbInstanceStatus = std::move(value); }

    /**
     * <p>The current status of the DB instance.</p>
     */
    inline void SetDbInstanceStatus(const char* value) { m_dbInstanceStatusHasBeenSet = true; m_dbInstanceStatus.assign(value); }

    /**
     * <p>The current status of the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithDbInstanceStatus(const Aws::String& value) { SetDbInstanceStatus(value); return *this;}

    /**
     * <p>The current status of the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithDbInstanceStatus(Aws::String&& value) { SetDbInstanceStatus(std::move(value)); return *this;}

    /**
     * <p>The current status of the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithDbInstanceStatus(const char* value) { SetDbInstanceStatus(value); return *this;}


    /**
     * <p>The master user name of the DB instance.</p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /**
     * <p>The master user name of the DB instance.</p>
     */
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }

    /**
     * <p>The master user name of the DB instance.</p>
     */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>The master user name of the DB instance.</p>
     */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }

    /**
     * <p>The master user name of the DB instance.</p>
     */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /**
     * <p>The master user name of the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>The master user name of the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}

    /**
     * <p>The master user name of the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}


    /**
     * <p>The amount of storage (in gigabytes) to initially allocate for the DB
     * instance.</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p>The amount of storage (in gigabytes) to initially allocate for the DB
     * instance.</p>
     */
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }

    /**
     * <p>The amount of storage (in gigabytes) to initially allocate for the DB
     * instance.</p>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p>The amount of storage (in gigabytes) to initially allocate for the DB
     * instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}


    /**
     * <p>The range of time each day when automated backups are created, if automated
     * backups are enabled.</p> <p>Uses the format <code>HH:MM-HH:MM</code>. For
     * example, <code>04:52-05:22</code>.</p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    /**
     * <p>The range of time each day when automated backups are created, if automated
     * backups are enabled.</p> <p>Uses the format <code>HH:MM-HH:MM</code>. For
     * example, <code>04:52-05:22</code>.</p>
     */
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }

    /**
     * <p>The range of time each day when automated backups are created, if automated
     * backups are enabled.</p> <p>Uses the format <code>HH:MM-HH:MM</code>. For
     * example, <code>04:52-05:22</code>.</p>
     */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p>The range of time each day when automated backups are created, if automated
     * backups are enabled.</p> <p>Uses the format <code>HH:MM-HH:MM</code>. For
     * example, <code>04:52-05:22</code>.</p>
     */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }

    /**
     * <p>The range of time each day when automated backups are created, if automated
     * backups are enabled.</p> <p>Uses the format <code>HH:MM-HH:MM</code>. For
     * example, <code>04:52-05:22</code>.</p>
     */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /**
     * <p>The range of time each day when automated backups are created, if automated
     * backups are enabled.</p> <p>Uses the format <code>HH:MM-HH:MM</code>. For
     * example, <code>04:52-05:22</code>.</p>
     */
    inline AwsRdsDbInstanceDetails& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p>The range of time each day when automated backups are created, if automated
     * backups are enabled.</p> <p>Uses the format <code>HH:MM-HH:MM</code>. For
     * example, <code>04:52-05:22</code>.</p>
     */
    inline AwsRdsDbInstanceDetails& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}

    /**
     * <p>The range of time each day when automated backups are created, if automated
     * backups are enabled.</p> <p>Uses the format <code>HH:MM-HH:MM</code>. For
     * example, <code>04:52-05:22</code>.</p>
     */
    inline AwsRdsDbInstanceDetails& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}


    /**
     * <p>The number of days for which to retain automated backups.</p>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }

    /**
     * <p>The number of days for which to retain automated backups.</p>
     */
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days for which to retain automated backups.</p>
     */
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /**
     * <p>The number of days for which to retain automated backups.</p>
     */
    inline AwsRdsDbInstanceDetails& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}


    /**
     * <p>A list of the DB security groups to assign to the DB instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDbSecurityGroups() const{ return m_dbSecurityGroups; }

    /**
     * <p>A list of the DB security groups to assign to the DB instance.</p>
     */
    inline bool DbSecurityGroupsHasBeenSet() const { return m_dbSecurityGroupsHasBeenSet; }

    /**
     * <p>A list of the DB security groups to assign to the DB instance.</p>
     */
    inline void SetDbSecurityGroups(const Aws::Vector<Aws::String>& value) { m_dbSecurityGroupsHasBeenSet = true; m_dbSecurityGroups = value; }

    /**
     * <p>A list of the DB security groups to assign to the DB instance.</p>
     */
    inline void SetDbSecurityGroups(Aws::Vector<Aws::String>&& value) { m_dbSecurityGroupsHasBeenSet = true; m_dbSecurityGroups = std::move(value); }

    /**
     * <p>A list of the DB security groups to assign to the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithDbSecurityGroups(const Aws::Vector<Aws::String>& value) { SetDbSecurityGroups(value); return *this;}

    /**
     * <p>A list of the DB security groups to assign to the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithDbSecurityGroups(Aws::Vector<Aws::String>&& value) { SetDbSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>A list of the DB security groups to assign to the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& AddDbSecurityGroups(const Aws::String& value) { m_dbSecurityGroupsHasBeenSet = true; m_dbSecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of the DB security groups to assign to the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& AddDbSecurityGroups(Aws::String&& value) { m_dbSecurityGroupsHasBeenSet = true; m_dbSecurityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the DB security groups to assign to the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& AddDbSecurityGroups(const char* value) { m_dbSecurityGroupsHasBeenSet = true; m_dbSecurityGroups.push_back(value); return *this; }


    /**
     * <p>A list of the DB parameter groups to assign to the DB instance.</p>
     */
    inline const Aws::Vector<AwsRdsDbParameterGroup>& GetDbParameterGroups() const{ return m_dbParameterGroups; }

    /**
     * <p>A list of the DB parameter groups to assign to the DB instance.</p>
     */
    inline bool DbParameterGroupsHasBeenSet() const { return m_dbParameterGroupsHasBeenSet; }

    /**
     * <p>A list of the DB parameter groups to assign to the DB instance.</p>
     */
    inline void SetDbParameterGroups(const Aws::Vector<AwsRdsDbParameterGroup>& value) { m_dbParameterGroupsHasBeenSet = true; m_dbParameterGroups = value; }

    /**
     * <p>A list of the DB parameter groups to assign to the DB instance.</p>
     */
    inline void SetDbParameterGroups(Aws::Vector<AwsRdsDbParameterGroup>&& value) { m_dbParameterGroupsHasBeenSet = true; m_dbParameterGroups = std::move(value); }

    /**
     * <p>A list of the DB parameter groups to assign to the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithDbParameterGroups(const Aws::Vector<AwsRdsDbParameterGroup>& value) { SetDbParameterGroups(value); return *this;}

    /**
     * <p>A list of the DB parameter groups to assign to the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithDbParameterGroups(Aws::Vector<AwsRdsDbParameterGroup>&& value) { SetDbParameterGroups(std::move(value)); return *this;}

    /**
     * <p>A list of the DB parameter groups to assign to the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& AddDbParameterGroups(const AwsRdsDbParameterGroup& value) { m_dbParameterGroupsHasBeenSet = true; m_dbParameterGroups.push_back(value); return *this; }

    /**
     * <p>A list of the DB parameter groups to assign to the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& AddDbParameterGroups(AwsRdsDbParameterGroup&& value) { m_dbParameterGroupsHasBeenSet = true; m_dbParameterGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>The Availability Zone where the DB instance will be created.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone where the DB instance will be created.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone where the DB instance will be created.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone where the DB instance will be created.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone where the DB instance will be created.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone where the DB instance will be created.</p>
     */
    inline AwsRdsDbInstanceDetails& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone where the DB instance will be created.</p>
     */
    inline AwsRdsDbInstanceDetails& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone where the DB instance will be created.</p>
     */
    inline AwsRdsDbInstanceDetails& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>Information about the subnet group that is associated with the DB
     * instance.</p>
     */
    inline const AwsRdsDbSubnetGroup& GetDbSubnetGroup() const{ return m_dbSubnetGroup; }

    /**
     * <p>Information about the subnet group that is associated with the DB
     * instance.</p>
     */
    inline bool DbSubnetGroupHasBeenSet() const { return m_dbSubnetGroupHasBeenSet; }

    /**
     * <p>Information about the subnet group that is associated with the DB
     * instance.</p>
     */
    inline void SetDbSubnetGroup(const AwsRdsDbSubnetGroup& value) { m_dbSubnetGroupHasBeenSet = true; m_dbSubnetGroup = value; }

    /**
     * <p>Information about the subnet group that is associated with the DB
     * instance.</p>
     */
    inline void SetDbSubnetGroup(AwsRdsDbSubnetGroup&& value) { m_dbSubnetGroupHasBeenSet = true; m_dbSubnetGroup = std::move(value); }

    /**
     * <p>Information about the subnet group that is associated with the DB
     * instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithDbSubnetGroup(const AwsRdsDbSubnetGroup& value) { SetDbSubnetGroup(value); return *this;}

    /**
     * <p>Information about the subnet group that is associated with the DB
     * instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithDbSubnetGroup(AwsRdsDbSubnetGroup&& value) { SetDbSubnetGroup(std::move(value)); return *this;}


    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Uses the format
     * <code>&lt;day&gt;:HH:MM-&lt;day&gt;:HH:MM</code>.</p> <p>For the day values, use
     * <code>mon</code>|<code>tue</code>|<code>wed</code>|<code>thu</code>|<code>fri</code>|<code>sat</code>|<code>sun</code>.</p>
     * <p>For example, <code>sun:09:32-sun:10:02</code>.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Uses the format
     * <code>&lt;day&gt;:HH:MM-&lt;day&gt;:HH:MM</code>.</p> <p>For the day values, use
     * <code>mon</code>|<code>tue</code>|<code>wed</code>|<code>thu</code>|<code>fri</code>|<code>sat</code>|<code>sun</code>.</p>
     * <p>For example, <code>sun:09:32-sun:10:02</code>.</p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Uses the format
     * <code>&lt;day&gt;:HH:MM-&lt;day&gt;:HH:MM</code>.</p> <p>For the day values, use
     * <code>mon</code>|<code>tue</code>|<code>wed</code>|<code>thu</code>|<code>fri</code>|<code>sat</code>|<code>sun</code>.</p>
     * <p>For example, <code>sun:09:32-sun:10:02</code>.</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Uses the format
     * <code>&lt;day&gt;:HH:MM-&lt;day&gt;:HH:MM</code>.</p> <p>For the day values, use
     * <code>mon</code>|<code>tue</code>|<code>wed</code>|<code>thu</code>|<code>fri</code>|<code>sat</code>|<code>sun</code>.</p>
     * <p>For example, <code>sun:09:32-sun:10:02</code>.</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Uses the format
     * <code>&lt;day&gt;:HH:MM-&lt;day&gt;:HH:MM</code>.</p> <p>For the day values, use
     * <code>mon</code>|<code>tue</code>|<code>wed</code>|<code>thu</code>|<code>fri</code>|<code>sat</code>|<code>sun</code>.</p>
     * <p>For example, <code>sun:09:32-sun:10:02</code>.</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Uses the format
     * <code>&lt;day&gt;:HH:MM-&lt;day&gt;:HH:MM</code>.</p> <p>For the day values, use
     * <code>mon</code>|<code>tue</code>|<code>wed</code>|<code>thu</code>|<code>fri</code>|<code>sat</code>|<code>sun</code>.</p>
     * <p>For example, <code>sun:09:32-sun:10:02</code>.</p>
     */
    inline AwsRdsDbInstanceDetails& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Uses the format
     * <code>&lt;day&gt;:HH:MM-&lt;day&gt;:HH:MM</code>.</p> <p>For the day values, use
     * <code>mon</code>|<code>tue</code>|<code>wed</code>|<code>thu</code>|<code>fri</code>|<code>sat</code>|<code>sun</code>.</p>
     * <p>For example, <code>sun:09:32-sun:10:02</code>.</p>
     */
    inline AwsRdsDbInstanceDetails& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Uses the format
     * <code>&lt;day&gt;:HH:MM-&lt;day&gt;:HH:MM</code>.</p> <p>For the day values, use
     * <code>mon</code>|<code>tue</code>|<code>wed</code>|<code>thu</code>|<code>fri</code>|<code>sat</code>|<code>sun</code>.</p>
     * <p>For example, <code>sun:09:32-sun:10:02</code>.</p>
     */
    inline AwsRdsDbInstanceDetails& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>Changes to the DB instance that are currently pending.</p>
     */
    inline const AwsRdsDbPendingModifiedValues& GetPendingModifiedValues() const{ return m_pendingModifiedValues; }

    /**
     * <p>Changes to the DB instance that are currently pending.</p>
     */
    inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }

    /**
     * <p>Changes to the DB instance that are currently pending.</p>
     */
    inline void SetPendingModifiedValues(const AwsRdsDbPendingModifiedValues& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = value; }

    /**
     * <p>Changes to the DB instance that are currently pending.</p>
     */
    inline void SetPendingModifiedValues(AwsRdsDbPendingModifiedValues&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = std::move(value); }

    /**
     * <p>Changes to the DB instance that are currently pending.</p>
     */
    inline AwsRdsDbInstanceDetails& WithPendingModifiedValues(const AwsRdsDbPendingModifiedValues& value) { SetPendingModifiedValues(value); return *this;}

    /**
     * <p>Changes to the DB instance that are currently pending.</p>
     */
    inline AwsRdsDbInstanceDetails& WithPendingModifiedValues(AwsRdsDbPendingModifiedValues&& value) { SetPendingModifiedValues(std::move(value)); return *this;}


    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p> <p>Uses the <code>date-time</code> format specified
     * in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section
     * 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetLatestRestorableTime() const{ return m_latestRestorableTime; }

    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p> <p>Uses the <code>date-time</code> format specified
     * in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section
     * 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool LatestRestorableTimeHasBeenSet() const { return m_latestRestorableTimeHasBeenSet; }

    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p> <p>Uses the <code>date-time</code> format specified
     * in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section
     * 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetLatestRestorableTime(const Aws::String& value) { m_latestRestorableTimeHasBeenSet = true; m_latestRestorableTime = value; }

    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p> <p>Uses the <code>date-time</code> format specified
     * in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section
     * 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetLatestRestorableTime(Aws::String&& value) { m_latestRestorableTimeHasBeenSet = true; m_latestRestorableTime = std::move(value); }

    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p> <p>Uses the <code>date-time</code> format specified
     * in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section
     * 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetLatestRestorableTime(const char* value) { m_latestRestorableTimeHasBeenSet = true; m_latestRestorableTime.assign(value); }

    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p> <p>Uses the <code>date-time</code> format specified
     * in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section
     * 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRdsDbInstanceDetails& WithLatestRestorableTime(const Aws::String& value) { SetLatestRestorableTime(value); return *this;}

    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p> <p>Uses the <code>date-time</code> format specified
     * in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section
     * 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRdsDbInstanceDetails& WithLatestRestorableTime(Aws::String&& value) { SetLatestRestorableTime(std::move(value)); return *this;}

    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p> <p>Uses the <code>date-time</code> format specified
     * in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section
     * 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRdsDbInstanceDetails& WithLatestRestorableTime(const char* value) { SetLatestRestorableTime(value); return *this;}


    /**
     * <p>Indicates whether minor version patches are applied automatically.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>Indicates whether minor version patches are applied automatically.</p>
     */
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }

    /**
     * <p>Indicates whether minor version patches are applied automatically.</p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p>Indicates whether minor version patches are applied automatically.</p>
     */
    inline AwsRdsDbInstanceDetails& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * <p>If this DB instance is a read replica, contains the identifier of the source
     * DB instance.</p>
     */
    inline const Aws::String& GetReadReplicaSourceDBInstanceIdentifier() const{ return m_readReplicaSourceDBInstanceIdentifier; }

    /**
     * <p>If this DB instance is a read replica, contains the identifier of the source
     * DB instance.</p>
     */
    inline bool ReadReplicaSourceDBInstanceIdentifierHasBeenSet() const { return m_readReplicaSourceDBInstanceIdentifierHasBeenSet; }

    /**
     * <p>If this DB instance is a read replica, contains the identifier of the source
     * DB instance.</p>
     */
    inline void SetReadReplicaSourceDBInstanceIdentifier(const Aws::String& value) { m_readReplicaSourceDBInstanceIdentifierHasBeenSet = true; m_readReplicaSourceDBInstanceIdentifier = value; }

    /**
     * <p>If this DB instance is a read replica, contains the identifier of the source
     * DB instance.</p>
     */
    inline void SetReadReplicaSourceDBInstanceIdentifier(Aws::String&& value) { m_readReplicaSourceDBInstanceIdentifierHasBeenSet = true; m_readReplicaSourceDBInstanceIdentifier = std::move(value); }

    /**
     * <p>If this DB instance is a read replica, contains the identifier of the source
     * DB instance.</p>
     */
    inline void SetReadReplicaSourceDBInstanceIdentifier(const char* value) { m_readReplicaSourceDBInstanceIdentifierHasBeenSet = true; m_readReplicaSourceDBInstanceIdentifier.assign(value); }

    /**
     * <p>If this DB instance is a read replica, contains the identifier of the source
     * DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithReadReplicaSourceDBInstanceIdentifier(const Aws::String& value) { SetReadReplicaSourceDBInstanceIdentifier(value); return *this;}

    /**
     * <p>If this DB instance is a read replica, contains the identifier of the source
     * DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithReadReplicaSourceDBInstanceIdentifier(Aws::String&& value) { SetReadReplicaSourceDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>If this DB instance is a read replica, contains the identifier of the source
     * DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithReadReplicaSourceDBInstanceIdentifier(const char* value) { SetReadReplicaSourceDBInstanceIdentifier(value); return *this;}


    /**
     * <p>List of identifiers of the read replicas associated with this DB
     * instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadReplicaDBInstanceIdentifiers() const{ return m_readReplicaDBInstanceIdentifiers; }

    /**
     * <p>List of identifiers of the read replicas associated with this DB
     * instance.</p>
     */
    inline bool ReadReplicaDBInstanceIdentifiersHasBeenSet() const { return m_readReplicaDBInstanceIdentifiersHasBeenSet; }

    /**
     * <p>List of identifiers of the read replicas associated with this DB
     * instance.</p>
     */
    inline void SetReadReplicaDBInstanceIdentifiers(const Aws::Vector<Aws::String>& value) { m_readReplicaDBInstanceIdentifiersHasBeenSet = true; m_readReplicaDBInstanceIdentifiers = value; }

    /**
     * <p>List of identifiers of the read replicas associated with this DB
     * instance.</p>
     */
    inline void SetReadReplicaDBInstanceIdentifiers(Aws::Vector<Aws::String>&& value) { m_readReplicaDBInstanceIdentifiersHasBeenSet = true; m_readReplicaDBInstanceIdentifiers = std::move(value); }

    /**
     * <p>List of identifiers of the read replicas associated with this DB
     * instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithReadReplicaDBInstanceIdentifiers(const Aws::Vector<Aws::String>& value) { SetReadReplicaDBInstanceIdentifiers(value); return *this;}

    /**
     * <p>List of identifiers of the read replicas associated with this DB
     * instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithReadReplicaDBInstanceIdentifiers(Aws::Vector<Aws::String>&& value) { SetReadReplicaDBInstanceIdentifiers(std::move(value)); return *this;}

    /**
     * <p>List of identifiers of the read replicas associated with this DB
     * instance.</p>
     */
    inline AwsRdsDbInstanceDetails& AddReadReplicaDBInstanceIdentifiers(const Aws::String& value) { m_readReplicaDBInstanceIdentifiersHasBeenSet = true; m_readReplicaDBInstanceIdentifiers.push_back(value); return *this; }

    /**
     * <p>List of identifiers of the read replicas associated with this DB
     * instance.</p>
     */
    inline AwsRdsDbInstanceDetails& AddReadReplicaDBInstanceIdentifiers(Aws::String&& value) { m_readReplicaDBInstanceIdentifiersHasBeenSet = true; m_readReplicaDBInstanceIdentifiers.push_back(std::move(value)); return *this; }

    /**
     * <p>List of identifiers of the read replicas associated with this DB
     * instance.</p>
     */
    inline AwsRdsDbInstanceDetails& AddReadReplicaDBInstanceIdentifiers(const char* value) { m_readReplicaDBInstanceIdentifiersHasBeenSet = true; m_readReplicaDBInstanceIdentifiers.push_back(value); return *this; }


    /**
     * <p>List of identifiers of Aurora DB clusters to which the RDS DB instance is
     * replicated as a read replica.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadReplicaDBClusterIdentifiers() const{ return m_readReplicaDBClusterIdentifiers; }

    /**
     * <p>List of identifiers of Aurora DB clusters to which the RDS DB instance is
     * replicated as a read replica.</p>
     */
    inline bool ReadReplicaDBClusterIdentifiersHasBeenSet() const { return m_readReplicaDBClusterIdentifiersHasBeenSet; }

    /**
     * <p>List of identifiers of Aurora DB clusters to which the RDS DB instance is
     * replicated as a read replica.</p>
     */
    inline void SetReadReplicaDBClusterIdentifiers(const Aws::Vector<Aws::String>& value) { m_readReplicaDBClusterIdentifiersHasBeenSet = true; m_readReplicaDBClusterIdentifiers = value; }

    /**
     * <p>List of identifiers of Aurora DB clusters to which the RDS DB instance is
     * replicated as a read replica.</p>
     */
    inline void SetReadReplicaDBClusterIdentifiers(Aws::Vector<Aws::String>&& value) { m_readReplicaDBClusterIdentifiersHasBeenSet = true; m_readReplicaDBClusterIdentifiers = std::move(value); }

    /**
     * <p>List of identifiers of Aurora DB clusters to which the RDS DB instance is
     * replicated as a read replica.</p>
     */
    inline AwsRdsDbInstanceDetails& WithReadReplicaDBClusterIdentifiers(const Aws::Vector<Aws::String>& value) { SetReadReplicaDBClusterIdentifiers(value); return *this;}

    /**
     * <p>List of identifiers of Aurora DB clusters to which the RDS DB instance is
     * replicated as a read replica.</p>
     */
    inline AwsRdsDbInstanceDetails& WithReadReplicaDBClusterIdentifiers(Aws::Vector<Aws::String>&& value) { SetReadReplicaDBClusterIdentifiers(std::move(value)); return *this;}

    /**
     * <p>List of identifiers of Aurora DB clusters to which the RDS DB instance is
     * replicated as a read replica.</p>
     */
    inline AwsRdsDbInstanceDetails& AddReadReplicaDBClusterIdentifiers(const Aws::String& value) { m_readReplicaDBClusterIdentifiersHasBeenSet = true; m_readReplicaDBClusterIdentifiers.push_back(value); return *this; }

    /**
     * <p>List of identifiers of Aurora DB clusters to which the RDS DB instance is
     * replicated as a read replica.</p>
     */
    inline AwsRdsDbInstanceDetails& AddReadReplicaDBClusterIdentifiers(Aws::String&& value) { m_readReplicaDBClusterIdentifiersHasBeenSet = true; m_readReplicaDBClusterIdentifiers.push_back(std::move(value)); return *this; }

    /**
     * <p>List of identifiers of Aurora DB clusters to which the RDS DB instance is
     * replicated as a read replica.</p>
     */
    inline AwsRdsDbInstanceDetails& AddReadReplicaDBClusterIdentifiers(const char* value) { m_readReplicaDBClusterIdentifiersHasBeenSet = true; m_readReplicaDBClusterIdentifiers.push_back(value); return *this; }


    /**
     * <p>License model information for this DB instance.</p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }

    /**
     * <p>License model information for this DB instance.</p>
     */
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }

    /**
     * <p>License model information for this DB instance.</p>
     */
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p>License model information for this DB instance.</p>
     */
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }

    /**
     * <p>License model information for this DB instance.</p>
     */
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }

    /**
     * <p>License model information for this DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /**
     * <p>License model information for this DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}

    /**
     * <p>License model information for this DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}


    /**
     * <p>Specifies the provisioned IOPS (I/O operations per second) for this DB
     * instance.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>Specifies the provisioned IOPS (I/O operations per second) for this DB
     * instance.</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>Specifies the provisioned IOPS (I/O operations per second) for this DB
     * instance.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>Specifies the provisioned IOPS (I/O operations per second) for this DB
     * instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>The list of option group memberships for this DB instance.</p>
     */
    inline const Aws::Vector<AwsRdsDbOptionGroupMembership>& GetOptionGroupMemberships() const{ return m_optionGroupMemberships; }

    /**
     * <p>The list of option group memberships for this DB instance.</p>
     */
    inline bool OptionGroupMembershipsHasBeenSet() const { return m_optionGroupMembershipsHasBeenSet; }

    /**
     * <p>The list of option group memberships for this DB instance.</p>
     */
    inline void SetOptionGroupMemberships(const Aws::Vector<AwsRdsDbOptionGroupMembership>& value) { m_optionGroupMembershipsHasBeenSet = true; m_optionGroupMemberships = value; }

    /**
     * <p>The list of option group memberships for this DB instance.</p>
     */
    inline void SetOptionGroupMemberships(Aws::Vector<AwsRdsDbOptionGroupMembership>&& value) { m_optionGroupMembershipsHasBeenSet = true; m_optionGroupMemberships = std::move(value); }

    /**
     * <p>The list of option group memberships for this DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithOptionGroupMemberships(const Aws::Vector<AwsRdsDbOptionGroupMembership>& value) { SetOptionGroupMemberships(value); return *this;}

    /**
     * <p>The list of option group memberships for this DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithOptionGroupMemberships(Aws::Vector<AwsRdsDbOptionGroupMembership>&& value) { SetOptionGroupMemberships(std::move(value)); return *this;}

    /**
     * <p>The list of option group memberships for this DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& AddOptionGroupMemberships(const AwsRdsDbOptionGroupMembership& value) { m_optionGroupMembershipsHasBeenSet = true; m_optionGroupMemberships.push_back(value); return *this; }

    /**
     * <p>The list of option group memberships for this DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& AddOptionGroupMemberships(AwsRdsDbOptionGroupMembership&& value) { m_optionGroupMembershipsHasBeenSet = true; m_optionGroupMemberships.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the character set that this DB instance is associated with.</p>
     */
    inline const Aws::String& GetCharacterSetName() const{ return m_characterSetName; }

    /**
     * <p>The name of the character set that this DB instance is associated with.</p>
     */
    inline bool CharacterSetNameHasBeenSet() const { return m_characterSetNameHasBeenSet; }

    /**
     * <p>The name of the character set that this DB instance is associated with.</p>
     */
    inline void SetCharacterSetName(const Aws::String& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = value; }

    /**
     * <p>The name of the character set that this DB instance is associated with.</p>
     */
    inline void SetCharacterSetName(Aws::String&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = std::move(value); }

    /**
     * <p>The name of the character set that this DB instance is associated with.</p>
     */
    inline void SetCharacterSetName(const char* value) { m_characterSetNameHasBeenSet = true; m_characterSetName.assign(value); }

    /**
     * <p>The name of the character set that this DB instance is associated with.</p>
     */
    inline AwsRdsDbInstanceDetails& WithCharacterSetName(const Aws::String& value) { SetCharacterSetName(value); return *this;}

    /**
     * <p>The name of the character set that this DB instance is associated with.</p>
     */
    inline AwsRdsDbInstanceDetails& WithCharacterSetName(Aws::String&& value) { SetCharacterSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the character set that this DB instance is associated with.</p>
     */
    inline AwsRdsDbInstanceDetails& WithCharacterSetName(const char* value) { SetCharacterSetName(value); return *this;}


    /**
     * <p>For a DB instance with multi-Availability Zone support, the name of the
     * secondary Availability Zone.</p>
     */
    inline const Aws::String& GetSecondaryAvailabilityZone() const{ return m_secondaryAvailabilityZone; }

    /**
     * <p>For a DB instance with multi-Availability Zone support, the name of the
     * secondary Availability Zone.</p>
     */
    inline bool SecondaryAvailabilityZoneHasBeenSet() const { return m_secondaryAvailabilityZoneHasBeenSet; }

    /**
     * <p>For a DB instance with multi-Availability Zone support, the name of the
     * secondary Availability Zone.</p>
     */
    inline void SetSecondaryAvailabilityZone(const Aws::String& value) { m_secondaryAvailabilityZoneHasBeenSet = true; m_secondaryAvailabilityZone = value; }

    /**
     * <p>For a DB instance with multi-Availability Zone support, the name of the
     * secondary Availability Zone.</p>
     */
    inline void SetSecondaryAvailabilityZone(Aws::String&& value) { m_secondaryAvailabilityZoneHasBeenSet = true; m_secondaryAvailabilityZone = std::move(value); }

    /**
     * <p>For a DB instance with multi-Availability Zone support, the name of the
     * secondary Availability Zone.</p>
     */
    inline void SetSecondaryAvailabilityZone(const char* value) { m_secondaryAvailabilityZoneHasBeenSet = true; m_secondaryAvailabilityZone.assign(value); }

    /**
     * <p>For a DB instance with multi-Availability Zone support, the name of the
     * secondary Availability Zone.</p>
     */
    inline AwsRdsDbInstanceDetails& WithSecondaryAvailabilityZone(const Aws::String& value) { SetSecondaryAvailabilityZone(value); return *this;}

    /**
     * <p>For a DB instance with multi-Availability Zone support, the name of the
     * secondary Availability Zone.</p>
     */
    inline AwsRdsDbInstanceDetails& WithSecondaryAvailabilityZone(Aws::String&& value) { SetSecondaryAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>For a DB instance with multi-Availability Zone support, the name of the
     * secondary Availability Zone.</p>
     */
    inline AwsRdsDbInstanceDetails& WithSecondaryAvailabilityZone(const char* value) { SetSecondaryAvailabilityZone(value); return *this;}


    /**
     * <p>The status of a read replica. If the instance isn't a read replica, this is
     * empty.</p>
     */
    inline const Aws::Vector<AwsRdsDbStatusInfo>& GetStatusInfos() const{ return m_statusInfos; }

    /**
     * <p>The status of a read replica. If the instance isn't a read replica, this is
     * empty.</p>
     */
    inline bool StatusInfosHasBeenSet() const { return m_statusInfosHasBeenSet; }

    /**
     * <p>The status of a read replica. If the instance isn't a read replica, this is
     * empty.</p>
     */
    inline void SetStatusInfos(const Aws::Vector<AwsRdsDbStatusInfo>& value) { m_statusInfosHasBeenSet = true; m_statusInfos = value; }

    /**
     * <p>The status of a read replica. If the instance isn't a read replica, this is
     * empty.</p>
     */
    inline void SetStatusInfos(Aws::Vector<AwsRdsDbStatusInfo>&& value) { m_statusInfosHasBeenSet = true; m_statusInfos = std::move(value); }

    /**
     * <p>The status of a read replica. If the instance isn't a read replica, this is
     * empty.</p>
     */
    inline AwsRdsDbInstanceDetails& WithStatusInfos(const Aws::Vector<AwsRdsDbStatusInfo>& value) { SetStatusInfos(value); return *this;}

    /**
     * <p>The status of a read replica. If the instance isn't a read replica, this is
     * empty.</p>
     */
    inline AwsRdsDbInstanceDetails& WithStatusInfos(Aws::Vector<AwsRdsDbStatusInfo>&& value) { SetStatusInfos(std::move(value)); return *this;}

    /**
     * <p>The status of a read replica. If the instance isn't a read replica, this is
     * empty.</p>
     */
    inline AwsRdsDbInstanceDetails& AddStatusInfos(const AwsRdsDbStatusInfo& value) { m_statusInfosHasBeenSet = true; m_statusInfos.push_back(value); return *this; }

    /**
     * <p>The status of a read replica. If the instance isn't a read replica, this is
     * empty.</p>
     */
    inline AwsRdsDbInstanceDetails& AddStatusInfos(AwsRdsDbStatusInfo&& value) { m_statusInfosHasBeenSet = true; m_statusInfos.push_back(std::move(value)); return *this; }


    /**
     * <p>The storage type for the DB instance.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>The storage type for the DB instance.</p>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>The storage type for the DB instance.</p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>The storage type for the DB instance.</p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>The storage type for the DB instance.</p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>The storage type for the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>The storage type for the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>The storage type for the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithStorageType(const char* value) { SetStorageType(value); return *this;}


    /**
     * <p>The Active Directory domain membership records associated with the DB
     * instance.</p>
     */
    inline const Aws::Vector<AwsRdsDbDomainMembership>& GetDomainMemberships() const{ return m_domainMemberships; }

    /**
     * <p>The Active Directory domain membership records associated with the DB
     * instance.</p>
     */
    inline bool DomainMembershipsHasBeenSet() const { return m_domainMembershipsHasBeenSet; }

    /**
     * <p>The Active Directory domain membership records associated with the DB
     * instance.</p>
     */
    inline void SetDomainMemberships(const Aws::Vector<AwsRdsDbDomainMembership>& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships = value; }

    /**
     * <p>The Active Directory domain membership records associated with the DB
     * instance.</p>
     */
    inline void SetDomainMemberships(Aws::Vector<AwsRdsDbDomainMembership>&& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships = std::move(value); }

    /**
     * <p>The Active Directory domain membership records associated with the DB
     * instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithDomainMemberships(const Aws::Vector<AwsRdsDbDomainMembership>& value) { SetDomainMemberships(value); return *this;}

    /**
     * <p>The Active Directory domain membership records associated with the DB
     * instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithDomainMemberships(Aws::Vector<AwsRdsDbDomainMembership>&& value) { SetDomainMemberships(std::move(value)); return *this;}

    /**
     * <p>The Active Directory domain membership records associated with the DB
     * instance.</p>
     */
    inline AwsRdsDbInstanceDetails& AddDomainMemberships(const AwsRdsDbDomainMembership& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships.push_back(value); return *this; }

    /**
     * <p>The Active Directory domain membership records associated with the DB
     * instance.</p>
     */
    inline AwsRdsDbInstanceDetails& AddDomainMemberships(AwsRdsDbDomainMembership&& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships.push_back(std::move(value)); return *this; }


    /**
     * <p>Whether to copy resource tags to snapshots of the DB instance.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }

    /**
     * <p>Whether to copy resource tags to snapshots of the DB instance.</p>
     */
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }

    /**
     * <p>Whether to copy resource tags to snapshots of the DB instance.</p>
     */
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }

    /**
     * <p>Whether to copy resource tags to snapshots of the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}


    /**
     * <p>The interval, in seconds, between points when enhanced monitoring metrics are
     * collected for the DB instance.</p>
     */
    inline int GetMonitoringInterval() const{ return m_monitoringInterval; }

    /**
     * <p>The interval, in seconds, between points when enhanced monitoring metrics are
     * collected for the DB instance.</p>
     */
    inline bool MonitoringIntervalHasBeenSet() const { return m_monitoringIntervalHasBeenSet; }

    /**
     * <p>The interval, in seconds, between points when enhanced monitoring metrics are
     * collected for the DB instance.</p>
     */
    inline void SetMonitoringInterval(int value) { m_monitoringIntervalHasBeenSet = true; m_monitoringInterval = value; }

    /**
     * <p>The interval, in seconds, between points when enhanced monitoring metrics are
     * collected for the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithMonitoringInterval(int value) { SetMonitoringInterval(value); return *this;}


    /**
     * <p>The ARN for the IAM role that permits Amazon RDS to send enhanced monitoring
     * metrics to CloudWatch Logs.</p>
     */
    inline const Aws::String& GetMonitoringRoleArn() const{ return m_monitoringRoleArn; }

    /**
     * <p>The ARN for the IAM role that permits Amazon RDS to send enhanced monitoring
     * metrics to CloudWatch Logs.</p>
     */
    inline bool MonitoringRoleArnHasBeenSet() const { return m_monitoringRoleArnHasBeenSet; }

    /**
     * <p>The ARN for the IAM role that permits Amazon RDS to send enhanced monitoring
     * metrics to CloudWatch Logs.</p>
     */
    inline void SetMonitoringRoleArn(const Aws::String& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = value; }

    /**
     * <p>The ARN for the IAM role that permits Amazon RDS to send enhanced monitoring
     * metrics to CloudWatch Logs.</p>
     */
    inline void SetMonitoringRoleArn(Aws::String&& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = std::move(value); }

    /**
     * <p>The ARN for the IAM role that permits Amazon RDS to send enhanced monitoring
     * metrics to CloudWatch Logs.</p>
     */
    inline void SetMonitoringRoleArn(const char* value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn.assign(value); }

    /**
     * <p>The ARN for the IAM role that permits Amazon RDS to send enhanced monitoring
     * metrics to CloudWatch Logs.</p>
     */
    inline AwsRdsDbInstanceDetails& WithMonitoringRoleArn(const Aws::String& value) { SetMonitoringRoleArn(value); return *this;}

    /**
     * <p>The ARN for the IAM role that permits Amazon RDS to send enhanced monitoring
     * metrics to CloudWatch Logs.</p>
     */
    inline AwsRdsDbInstanceDetails& WithMonitoringRoleArn(Aws::String&& value) { SetMonitoringRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the IAM role that permits Amazon RDS to send enhanced monitoring
     * metrics to CloudWatch Logs.</p>
     */
    inline AwsRdsDbInstanceDetails& WithMonitoringRoleArn(const char* value) { SetMonitoringRoleArn(value); return *this;}


    /**
     * <p>The order in which to promote an Aurora replica to the primary instance after
     * a failure of the existing primary instance.</p>
     */
    inline int GetPromotionTier() const{ return m_promotionTier; }

    /**
     * <p>The order in which to promote an Aurora replica to the primary instance after
     * a failure of the existing primary instance.</p>
     */
    inline bool PromotionTierHasBeenSet() const { return m_promotionTierHasBeenSet; }

    /**
     * <p>The order in which to promote an Aurora replica to the primary instance after
     * a failure of the existing primary instance.</p>
     */
    inline void SetPromotionTier(int value) { m_promotionTierHasBeenSet = true; m_promotionTier = value; }

    /**
     * <p>The order in which to promote an Aurora replica to the primary instance after
     * a failure of the existing primary instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithPromotionTier(int value) { SetPromotionTier(value); return *this;}


    /**
     * <p>The time zone of the DB instance.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * <p>The time zone of the DB instance.</p>
     */
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }

    /**
     * <p>The time zone of the DB instance.</p>
     */
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    /**
     * <p>The time zone of the DB instance.</p>
     */
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }

    /**
     * <p>The time zone of the DB instance.</p>
     */
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }

    /**
     * <p>The time zone of the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * <p>The time zone of the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    /**
     * <p>The time zone of the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithTimezone(const char* value) { SetTimezone(value); return *this;}


    /**
     * <p>Indicates whether Performance Insights is enabled for the DB instance.</p>
     */
    inline bool GetPerformanceInsightsEnabled() const{ return m_performanceInsightsEnabled; }

    /**
     * <p>Indicates whether Performance Insights is enabled for the DB instance.</p>
     */
    inline bool PerformanceInsightsEnabledHasBeenSet() const { return m_performanceInsightsEnabledHasBeenSet; }

    /**
     * <p>Indicates whether Performance Insights is enabled for the DB instance.</p>
     */
    inline void SetPerformanceInsightsEnabled(bool value) { m_performanceInsightsEnabledHasBeenSet = true; m_performanceInsightsEnabled = value; }

    /**
     * <p>Indicates whether Performance Insights is enabled for the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithPerformanceInsightsEnabled(bool value) { SetPerformanceInsightsEnabled(value); return *this;}


    /**
     * <p>The identifier of the KMS key used to encrypt the Performance Insights
     * data.</p>
     */
    inline const Aws::String& GetPerformanceInsightsKmsKeyId() const{ return m_performanceInsightsKmsKeyId; }

    /**
     * <p>The identifier of the KMS key used to encrypt the Performance Insights
     * data.</p>
     */
    inline bool PerformanceInsightsKmsKeyIdHasBeenSet() const { return m_performanceInsightsKmsKeyIdHasBeenSet; }

    /**
     * <p>The identifier of the KMS key used to encrypt the Performance Insights
     * data.</p>
     */
    inline void SetPerformanceInsightsKmsKeyId(const Aws::String& value) { m_performanceInsightsKmsKeyIdHasBeenSet = true; m_performanceInsightsKmsKeyId = value; }

    /**
     * <p>The identifier of the KMS key used to encrypt the Performance Insights
     * data.</p>
     */
    inline void SetPerformanceInsightsKmsKeyId(Aws::String&& value) { m_performanceInsightsKmsKeyIdHasBeenSet = true; m_performanceInsightsKmsKeyId = std::move(value); }

    /**
     * <p>The identifier of the KMS key used to encrypt the Performance Insights
     * data.</p>
     */
    inline void SetPerformanceInsightsKmsKeyId(const char* value) { m_performanceInsightsKmsKeyIdHasBeenSet = true; m_performanceInsightsKmsKeyId.assign(value); }

    /**
     * <p>The identifier of the KMS key used to encrypt the Performance Insights
     * data.</p>
     */
    inline AwsRdsDbInstanceDetails& WithPerformanceInsightsKmsKeyId(const Aws::String& value) { SetPerformanceInsightsKmsKeyId(value); return *this;}

    /**
     * <p>The identifier of the KMS key used to encrypt the Performance Insights
     * data.</p>
     */
    inline AwsRdsDbInstanceDetails& WithPerformanceInsightsKmsKeyId(Aws::String&& value) { SetPerformanceInsightsKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the KMS key used to encrypt the Performance Insights
     * data.</p>
     */
    inline AwsRdsDbInstanceDetails& WithPerformanceInsightsKmsKeyId(const char* value) { SetPerformanceInsightsKmsKeyId(value); return *this;}


    /**
     * <p>The number of days to retain Performance Insights data.</p>
     */
    inline int GetPerformanceInsightsRetentionPeriod() const{ return m_performanceInsightsRetentionPeriod; }

    /**
     * <p>The number of days to retain Performance Insights data.</p>
     */
    inline bool PerformanceInsightsRetentionPeriodHasBeenSet() const { return m_performanceInsightsRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days to retain Performance Insights data.</p>
     */
    inline void SetPerformanceInsightsRetentionPeriod(int value) { m_performanceInsightsRetentionPeriodHasBeenSet = true; m_performanceInsightsRetentionPeriod = value; }

    /**
     * <p>The number of days to retain Performance Insights data.</p>
     */
    inline AwsRdsDbInstanceDetails& WithPerformanceInsightsRetentionPeriod(int value) { SetPerformanceInsightsRetentionPeriod(value); return *this;}


    /**
     * <p>A list of log types that this DB instance is configured to export to
     * CloudWatch Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledCloudWatchLogsExports() const{ return m_enabledCloudWatchLogsExports; }

    /**
     * <p>A list of log types that this DB instance is configured to export to
     * CloudWatch Logs.</p>
     */
    inline bool EnabledCloudWatchLogsExportsHasBeenSet() const { return m_enabledCloudWatchLogsExportsHasBeenSet; }

    /**
     * <p>A list of log types that this DB instance is configured to export to
     * CloudWatch Logs.</p>
     */
    inline void SetEnabledCloudWatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enabledCloudWatchLogsExportsHasBeenSet = true; m_enabledCloudWatchLogsExports = value; }

    /**
     * <p>A list of log types that this DB instance is configured to export to
     * CloudWatch Logs.</p>
     */
    inline void SetEnabledCloudWatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enabledCloudWatchLogsExportsHasBeenSet = true; m_enabledCloudWatchLogsExports = std::move(value); }

    /**
     * <p>A list of log types that this DB instance is configured to export to
     * CloudWatch Logs.</p>
     */
    inline AwsRdsDbInstanceDetails& WithEnabledCloudWatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnabledCloudWatchLogsExports(value); return *this;}

    /**
     * <p>A list of log types that this DB instance is configured to export to
     * CloudWatch Logs.</p>
     */
    inline AwsRdsDbInstanceDetails& WithEnabledCloudWatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnabledCloudWatchLogsExports(std::move(value)); return *this;}

    /**
     * <p>A list of log types that this DB instance is configured to export to
     * CloudWatch Logs.</p>
     */
    inline AwsRdsDbInstanceDetails& AddEnabledCloudWatchLogsExports(const Aws::String& value) { m_enabledCloudWatchLogsExportsHasBeenSet = true; m_enabledCloudWatchLogsExports.push_back(value); return *this; }

    /**
     * <p>A list of log types that this DB instance is configured to export to
     * CloudWatch Logs.</p>
     */
    inline AwsRdsDbInstanceDetails& AddEnabledCloudWatchLogsExports(Aws::String&& value) { m_enabledCloudWatchLogsExportsHasBeenSet = true; m_enabledCloudWatchLogsExports.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of log types that this DB instance is configured to export to
     * CloudWatch Logs.</p>
     */
    inline AwsRdsDbInstanceDetails& AddEnabledCloudWatchLogsExports(const char* value) { m_enabledCloudWatchLogsExportsHasBeenSet = true; m_enabledCloudWatchLogsExports.push_back(value); return *this; }


    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline const Aws::Vector<AwsRdsDbProcessorFeature>& GetProcessorFeatures() const{ return m_processorFeatures; }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline bool ProcessorFeaturesHasBeenSet() const { return m_processorFeaturesHasBeenSet; }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline void SetProcessorFeatures(const Aws::Vector<AwsRdsDbProcessorFeature>& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = value; }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline void SetProcessorFeatures(Aws::Vector<AwsRdsDbProcessorFeature>&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = std::move(value); }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithProcessorFeatures(const Aws::Vector<AwsRdsDbProcessorFeature>& value) { SetProcessorFeatures(value); return *this;}

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithProcessorFeatures(Aws::Vector<AwsRdsDbProcessorFeature>&& value) { SetProcessorFeatures(std::move(value)); return *this;}

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& AddProcessorFeatures(const AwsRdsDbProcessorFeature& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(value); return *this; }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& AddProcessorFeatures(AwsRdsDbProcessorFeature&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(std::move(value)); return *this; }


    
    inline const AwsRdsDbInstanceEndpoint& GetListenerEndpoint() const{ return m_listenerEndpoint; }

    
    inline bool ListenerEndpointHasBeenSet() const { return m_listenerEndpointHasBeenSet; }

    
    inline void SetListenerEndpoint(const AwsRdsDbInstanceEndpoint& value) { m_listenerEndpointHasBeenSet = true; m_listenerEndpoint = value; }

    
    inline void SetListenerEndpoint(AwsRdsDbInstanceEndpoint&& value) { m_listenerEndpointHasBeenSet = true; m_listenerEndpoint = std::move(value); }

    
    inline AwsRdsDbInstanceDetails& WithListenerEndpoint(const AwsRdsDbInstanceEndpoint& value) { SetListenerEndpoint(value); return *this;}

    
    inline AwsRdsDbInstanceDetails& WithListenerEndpoint(AwsRdsDbInstanceEndpoint&& value) { SetListenerEndpoint(std::move(value)); return *this;}


    /**
     * <p>The upper limit to which Amazon RDS can automatically scale the storage of
     * the DB instance.</p>
     */
    inline int GetMaxAllocatedStorage() const{ return m_maxAllocatedStorage; }

    /**
     * <p>The upper limit to which Amazon RDS can automatically scale the storage of
     * the DB instance.</p>
     */
    inline bool MaxAllocatedStorageHasBeenSet() const { return m_maxAllocatedStorageHasBeenSet; }

    /**
     * <p>The upper limit to which Amazon RDS can automatically scale the storage of
     * the DB instance.</p>
     */
    inline void SetMaxAllocatedStorage(int value) { m_maxAllocatedStorageHasBeenSet = true; m_maxAllocatedStorage = value; }

    /**
     * <p>The upper limit to which Amazon RDS can automatically scale the storage of
     * the DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithMaxAllocatedStorage(int value) { SetMaxAllocatedStorage(value); return *this;}

  private:

    Aws::Vector<AwsRdsDbInstanceAssociatedRole> m_associatedRoles;
    bool m_associatedRolesHasBeenSet = false;

    Aws::String m_cACertificateIdentifier;
    bool m_cACertificateIdentifierHasBeenSet = false;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet = false;

    int m_dbInstancePort;
    bool m_dbInstancePortHasBeenSet = false;

    Aws::String m_dbiResourceId;
    bool m_dbiResourceIdHasBeenSet = false;

    Aws::String m_dBName;
    bool m_dBNameHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    AwsRdsDbInstanceEndpoint m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_iAMDatabaseAuthenticationEnabled;
    bool m_iAMDatabaseAuthenticationEnabledHasBeenSet = false;

    Aws::String m_instanceCreateTime;
    bool m_instanceCreateTimeHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet = false;

    Aws::String m_tdeCredentialArn;
    bool m_tdeCredentialArnHasBeenSet = false;

    Aws::Vector<AwsRdsDbInstanceVpcSecurityGroup> m_vpcSecurityGroups;
    bool m_vpcSecurityGroupsHasBeenSet = false;

    bool m_multiAz;
    bool m_multiAzHasBeenSet = false;

    Aws::String m_enhancedMonitoringResourceArn;
    bool m_enhancedMonitoringResourceArnHasBeenSet = false;

    Aws::String m_dbInstanceStatus;
    bool m_dbInstanceStatusHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::Vector<Aws::String> m_dbSecurityGroups;
    bool m_dbSecurityGroupsHasBeenSet = false;

    Aws::Vector<AwsRdsDbParameterGroup> m_dbParameterGroups;
    bool m_dbParameterGroupsHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    AwsRdsDbSubnetGroup m_dbSubnetGroup;
    bool m_dbSubnetGroupHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    AwsRdsDbPendingModifiedValues m_pendingModifiedValues;
    bool m_pendingModifiedValuesHasBeenSet = false;

    Aws::String m_latestRestorableTime;
    bool m_latestRestorableTimeHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    Aws::String m_readReplicaSourceDBInstanceIdentifier;
    bool m_readReplicaSourceDBInstanceIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_readReplicaDBInstanceIdentifiers;
    bool m_readReplicaDBInstanceIdentifiersHasBeenSet = false;

    Aws::Vector<Aws::String> m_readReplicaDBClusterIdentifiers;
    bool m_readReplicaDBClusterIdentifiersHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    Aws::Vector<AwsRdsDbOptionGroupMembership> m_optionGroupMemberships;
    bool m_optionGroupMembershipsHasBeenSet = false;

    Aws::String m_characterSetName;
    bool m_characterSetNameHasBeenSet = false;

    Aws::String m_secondaryAvailabilityZone;
    bool m_secondaryAvailabilityZoneHasBeenSet = false;

    Aws::Vector<AwsRdsDbStatusInfo> m_statusInfos;
    bool m_statusInfosHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    Aws::Vector<AwsRdsDbDomainMembership> m_domainMemberships;
    bool m_domainMembershipsHasBeenSet = false;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet = false;

    int m_monitoringInterval;
    bool m_monitoringIntervalHasBeenSet = false;

    Aws::String m_monitoringRoleArn;
    bool m_monitoringRoleArnHasBeenSet = false;

    int m_promotionTier;
    bool m_promotionTierHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    bool m_performanceInsightsEnabled;
    bool m_performanceInsightsEnabledHasBeenSet = false;

    Aws::String m_performanceInsightsKmsKeyId;
    bool m_performanceInsightsKmsKeyIdHasBeenSet = false;

    int m_performanceInsightsRetentionPeriod;
    bool m_performanceInsightsRetentionPeriodHasBeenSet = false;

    Aws::Vector<Aws::String> m_enabledCloudWatchLogsExports;
    bool m_enabledCloudWatchLogsExportsHasBeenSet = false;

    Aws::Vector<AwsRdsDbProcessorFeature> m_processorFeatures;
    bool m_processorFeaturesHasBeenSet = false;

    AwsRdsDbInstanceEndpoint m_listenerEndpoint;
    bool m_listenerEndpointHasBeenSet = false;

    int m_maxAllocatedStorage;
    bool m_maxAllocatedStorageHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
