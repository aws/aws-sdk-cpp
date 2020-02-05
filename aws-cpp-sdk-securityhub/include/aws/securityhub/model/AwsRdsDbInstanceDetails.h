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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsRdsDbInstanceEndpoint.h>
#include <aws/securityhub/model/AwsRdsDbInstanceAssociatedRole.h>
#include <aws/securityhub/model/AwsRdsDbInstanceVpcSecurityGroup.h>
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
  class AWS_SECURITYHUB_API AwsRdsDbInstanceDetails
  {
  public:
    AwsRdsDbInstanceDetails();
    AwsRdsDbInstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AwsRdsDbInstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS Identity and Access Management (IAM) roles associated with the DB
     * instance.</p>
     */
    inline const Aws::Vector<AwsRdsDbInstanceAssociatedRole>& GetAssociatedRoles() const{ return m_associatedRoles; }

    /**
     * <p>The AWS Identity and Access Management (IAM) roles associated with the DB
     * instance.</p>
     */
    inline bool AssociatedRolesHasBeenSet() const { return m_associatedRolesHasBeenSet; }

    /**
     * <p>The AWS Identity and Access Management (IAM) roles associated with the DB
     * instance.</p>
     */
    inline void SetAssociatedRoles(const Aws::Vector<AwsRdsDbInstanceAssociatedRole>& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles = value; }

    /**
     * <p>The AWS Identity and Access Management (IAM) roles associated with the DB
     * instance.</p>
     */
    inline void SetAssociatedRoles(Aws::Vector<AwsRdsDbInstanceAssociatedRole>&& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles = std::move(value); }

    /**
     * <p>The AWS Identity and Access Management (IAM) roles associated with the DB
     * instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithAssociatedRoles(const Aws::Vector<AwsRdsDbInstanceAssociatedRole>& value) { SetAssociatedRoles(value); return *this;}

    /**
     * <p>The AWS Identity and Access Management (IAM) roles associated with the DB
     * instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithAssociatedRoles(Aws::Vector<AwsRdsDbInstanceAssociatedRole>&& value) { SetAssociatedRoles(std::move(value)); return *this;}

    /**
     * <p>The AWS Identity and Access Management (IAM) roles associated with the DB
     * instance.</p>
     */
    inline AwsRdsDbInstanceDetails& AddAssociatedRoles(const AwsRdsDbInstanceAssociatedRole& value) { m_associatedRolesHasBeenSet = true; m_associatedRoles.push_back(value); return *this; }

    /**
     * <p>The AWS Identity and Access Management (IAM) roles associated with the DB
     * instance.</p>
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
     * <p>The AWS Region-unique, immutable identifier for the DB instance. This
     * identifier is found in AWS CloudTrail log entries whenever the AWS KMS key for
     * the DB instance is accessed. </p>
     */
    inline const Aws::String& GetDbiResourceId() const{ return m_dbiResourceId; }

    /**
     * <p>The AWS Region-unique, immutable identifier for the DB instance. This
     * identifier is found in AWS CloudTrail log entries whenever the AWS KMS key for
     * the DB instance is accessed. </p>
     */
    inline bool DbiResourceIdHasBeenSet() const { return m_dbiResourceIdHasBeenSet; }

    /**
     * <p>The AWS Region-unique, immutable identifier for the DB instance. This
     * identifier is found in AWS CloudTrail log entries whenever the AWS KMS key for
     * the DB instance is accessed. </p>
     */
    inline void SetDbiResourceId(const Aws::String& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = value; }

    /**
     * <p>The AWS Region-unique, immutable identifier for the DB instance. This
     * identifier is found in AWS CloudTrail log entries whenever the AWS KMS key for
     * the DB instance is accessed. </p>
     */
    inline void SetDbiResourceId(Aws::String&& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = std::move(value); }

    /**
     * <p>The AWS Region-unique, immutable identifier for the DB instance. This
     * identifier is found in AWS CloudTrail log entries whenever the AWS KMS key for
     * the DB instance is accessed. </p>
     */
    inline void SetDbiResourceId(const char* value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId.assign(value); }

    /**
     * <p>The AWS Region-unique, immutable identifier for the DB instance. This
     * identifier is found in AWS CloudTrail log entries whenever the AWS KMS key for
     * the DB instance is accessed. </p>
     */
    inline AwsRdsDbInstanceDetails& WithDbiResourceId(const Aws::String& value) { SetDbiResourceId(value); return *this;}

    /**
     * <p>The AWS Region-unique, immutable identifier for the DB instance. This
     * identifier is found in AWS CloudTrail log entries whenever the AWS KMS key for
     * the DB instance is accessed. </p>
     */
    inline AwsRdsDbInstanceDetails& WithDbiResourceId(Aws::String&& value) { SetDbiResourceId(std::move(value)); return *this;}

    /**
     * <p>The AWS Region-unique, immutable identifier for the DB instance. This
     * identifier is found in AWS CloudTrail log entries whenever the AWS KMS key for
     * the DB instance is accessed. </p>
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
     * <p>True if mapping of AWS Identity and Access Management (IAM) accounts to
     * database accounts is enabled, and otherwise false.</p> <p>IAM database
     * authentication can be enabled for the following database engines.</p> <ul> <li>
     * <p>For MySQL 5.6, minor version 5.6.34 or higher</p> </li> <li> <p>For MySQL
     * 5.7, minor version 5.7.16 or higher</p> </li> <li> <p>Aurora 5.6 or higher</p>
     * </li> </ul>
     */
    inline bool GetIAMDatabaseAuthenticationEnabled() const{ return m_iAMDatabaseAuthenticationEnabled; }

    /**
     * <p>True if mapping of AWS Identity and Access Management (IAM) accounts to
     * database accounts is enabled, and otherwise false.</p> <p>IAM database
     * authentication can be enabled for the following database engines.</p> <ul> <li>
     * <p>For MySQL 5.6, minor version 5.6.34 or higher</p> </li> <li> <p>For MySQL
     * 5.7, minor version 5.7.16 or higher</p> </li> <li> <p>Aurora 5.6 or higher</p>
     * </li> </ul>
     */
    inline bool IAMDatabaseAuthenticationEnabledHasBeenSet() const { return m_iAMDatabaseAuthenticationEnabledHasBeenSet; }

    /**
     * <p>True if mapping of AWS Identity and Access Management (IAM) accounts to
     * database accounts is enabled, and otherwise false.</p> <p>IAM database
     * authentication can be enabled for the following database engines.</p> <ul> <li>
     * <p>For MySQL 5.6, minor version 5.6.34 or higher</p> </li> <li> <p>For MySQL
     * 5.7, minor version 5.7.16 or higher</p> </li> <li> <p>Aurora 5.6 or higher</p>
     * </li> </ul>
     */
    inline void SetIAMDatabaseAuthenticationEnabled(bool value) { m_iAMDatabaseAuthenticationEnabledHasBeenSet = true; m_iAMDatabaseAuthenticationEnabled = value; }

    /**
     * <p>True if mapping of AWS Identity and Access Management (IAM) accounts to
     * database accounts is enabled, and otherwise false.</p> <p>IAM database
     * authentication can be enabled for the following database engines.</p> <ul> <li>
     * <p>For MySQL 5.6, minor version 5.6.34 or higher</p> </li> <li> <p>For MySQL
     * 5.7, minor version 5.7.16 or higher</p> </li> <li> <p>Aurora 5.6 or higher</p>
     * </li> </ul>
     */
    inline AwsRdsDbInstanceDetails& WithIAMDatabaseAuthenticationEnabled(bool value) { SetIAMDatabaseAuthenticationEnabled(value); return *this;}


    /**
     * <p>Provides the date and time the DB instance was created.</p>
     */
    inline const Aws::String& GetInstanceCreateTime() const{ return m_instanceCreateTime; }

    /**
     * <p>Provides the date and time the DB instance was created.</p>
     */
    inline bool InstanceCreateTimeHasBeenSet() const { return m_instanceCreateTimeHasBeenSet; }

    /**
     * <p>Provides the date and time the DB instance was created.</p>
     */
    inline void SetInstanceCreateTime(const Aws::String& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = value; }

    /**
     * <p>Provides the date and time the DB instance was created.</p>
     */
    inline void SetInstanceCreateTime(Aws::String&& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = std::move(value); }

    /**
     * <p>Provides the date and time the DB instance was created.</p>
     */
    inline void SetInstanceCreateTime(const char* value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime.assign(value); }

    /**
     * <p>Provides the date and time the DB instance was created.</p>
     */
    inline AwsRdsDbInstanceDetails& WithInstanceCreateTime(const Aws::String& value) { SetInstanceCreateTime(value); return *this;}

    /**
     * <p>Provides the date and time the DB instance was created.</p>
     */
    inline AwsRdsDbInstanceDetails& WithInstanceCreateTime(Aws::String&& value) { SetInstanceCreateTime(std::move(value)); return *this;}

    /**
     * <p>Provides the date and time the DB instance was created.</p>
     */
    inline AwsRdsDbInstanceDetails& WithInstanceCreateTime(const char* value) { SetInstanceCreateTime(value); return *this;}


    /**
     * <p>If <code>StorageEncrypted</code> is true, the AWS KMS key identifier for the
     * encrypted DB instance.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>If <code>StorageEncrypted</code> is true, the AWS KMS key identifier for the
     * encrypted DB instance.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>If <code>StorageEncrypted</code> is true, the AWS KMS key identifier for the
     * encrypted DB instance.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>If <code>StorageEncrypted</code> is true, the AWS KMS key identifier for the
     * encrypted DB instance.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>If <code>StorageEncrypted</code> is true, the AWS KMS key identifier for the
     * encrypted DB instance.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>If <code>StorageEncrypted</code> is true, the AWS KMS key identifier for the
     * encrypted DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>If <code>StorageEncrypted</code> is true, the AWS KMS key identifier for the
     * encrypted DB instance.</p>
     */
    inline AwsRdsDbInstanceDetails& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>If <code>StorageEncrypted</code> is true, the AWS KMS key identifier for the
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

  private:

    Aws::Vector<AwsRdsDbInstanceAssociatedRole> m_associatedRoles;
    bool m_associatedRolesHasBeenSet;

    Aws::String m_cACertificateIdentifier;
    bool m_cACertificateIdentifierHasBeenSet;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet;

    int m_dbInstancePort;
    bool m_dbInstancePortHasBeenSet;

    Aws::String m_dbiResourceId;
    bool m_dbiResourceIdHasBeenSet;

    Aws::String m_dBName;
    bool m_dBNameHasBeenSet;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet;

    AwsRdsDbInstanceEndpoint m_endpoint;
    bool m_endpointHasBeenSet;

    Aws::String m_engine;
    bool m_engineHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    bool m_iAMDatabaseAuthenticationEnabled;
    bool m_iAMDatabaseAuthenticationEnabledHasBeenSet;

    Aws::String m_instanceCreateTime;
    bool m_instanceCreateTimeHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet;

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet;

    Aws::String m_tdeCredentialArn;
    bool m_tdeCredentialArnHasBeenSet;

    Aws::Vector<AwsRdsDbInstanceVpcSecurityGroup> m_vpcSecurityGroups;
    bool m_vpcSecurityGroupsHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
