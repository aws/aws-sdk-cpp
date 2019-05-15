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
  class AWS_RDS_API RestoreDBInstanceFromS3Request : public RDSRequest
  {
  public:
    RestoreDBInstanceFromS3Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreDBInstanceFromS3"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the database to create when the DB instance is created. Follow
     * the naming rules specified in <code>CreateDBInstance</code>. </p>
     */
    inline const Aws::String& GetDBName() const{ return m_dBName; }

    /**
     * <p>The name of the database to create when the DB instance is created. Follow
     * the naming rules specified in <code>CreateDBInstance</code>. </p>
     */
    inline bool DBNameHasBeenSet() const { return m_dBNameHasBeenSet; }

    /**
     * <p>The name of the database to create when the DB instance is created. Follow
     * the naming rules specified in <code>CreateDBInstance</code>. </p>
     */
    inline void SetDBName(const Aws::String& value) { m_dBNameHasBeenSet = true; m_dBName = value; }

    /**
     * <p>The name of the database to create when the DB instance is created. Follow
     * the naming rules specified in <code>CreateDBInstance</code>. </p>
     */
    inline void SetDBName(Aws::String&& value) { m_dBNameHasBeenSet = true; m_dBName = std::move(value); }

    /**
     * <p>The name of the database to create when the DB instance is created. Follow
     * the naming rules specified in <code>CreateDBInstance</code>. </p>
     */
    inline void SetDBName(const char* value) { m_dBNameHasBeenSet = true; m_dBName.assign(value); }

    /**
     * <p>The name of the database to create when the DB instance is created. Follow
     * the naming rules specified in <code>CreateDBInstance</code>. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithDBName(const Aws::String& value) { SetDBName(value); return *this;}

    /**
     * <p>The name of the database to create when the DB instance is created. Follow
     * the naming rules specified in <code>CreateDBInstance</code>. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithDBName(Aws::String&& value) { SetDBName(std::move(value)); return *this;}

    /**
     * <p>The name of the database to create when the DB instance is created. Follow
     * the naming rules specified in <code>CreateDBInstance</code>. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithDBName(const char* value) { SetDBName(value); return *this;}


    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase string.
     * </p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase string.
     * </p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase string.
     * </p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase string.
     * </p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase string.
     * </p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase string.
     * </p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline RestoreDBInstanceFromS3Request& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase string.
     * </p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline RestoreDBInstanceFromS3Request& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase string.
     * </p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline RestoreDBInstanceFromS3Request& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>The amount of storage (in gigabytes) to allocate initially for the DB
     * instance. Follow the allocation rules specified in
     * <code>CreateDBInstance</code>. </p> <note> <p>Be sure to allocate enough memory
     * for your new DB instance so that the restore operation can succeed. You can also
     * allocate additional memory for future growth. </p> </note>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p>The amount of storage (in gigabytes) to allocate initially for the DB
     * instance. Follow the allocation rules specified in
     * <code>CreateDBInstance</code>. </p> <note> <p>Be sure to allocate enough memory
     * for your new DB instance so that the restore operation can succeed. You can also
     * allocate additional memory for future growth. </p> </note>
     */
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }

    /**
     * <p>The amount of storage (in gigabytes) to allocate initially for the DB
     * instance. Follow the allocation rules specified in
     * <code>CreateDBInstance</code>. </p> <note> <p>Be sure to allocate enough memory
     * for your new DB instance so that the restore operation can succeed. You can also
     * allocate additional memory for future growth. </p> </note>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p>The amount of storage (in gigabytes) to allocate initially for the DB
     * instance. Follow the allocation rules specified in
     * <code>CreateDBInstance</code>. </p> <note> <p>Be sure to allocate enough memory
     * for your new DB instance so that the restore operation can succeed. You can also
     * allocate additional memory for future growth. </p> </note>
     */
    inline RestoreDBInstanceFromS3Request& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}


    /**
     * <p>The compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Importing from
     * Amazon S3 is not supported on the db.t2.micro DB instance class. </p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p>The compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Importing from
     * Amazon S3 is not supported on the db.t2.micro DB instance class. </p>
     */
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }

    /**
     * <p>The compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Importing from
     * Amazon S3 is not supported on the db.t2.micro DB instance class. </p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>The compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Importing from
     * Amazon S3 is not supported on the db.t2.micro DB instance class. </p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }

    /**
     * <p>The compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Importing from
     * Amazon S3 is not supported on the db.t2.micro DB instance class. </p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p>The compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Importing from
     * Amazon S3 is not supported on the db.t2.micro DB instance class. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Importing from
     * Amazon S3 is not supported on the db.t2.micro DB instance class. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}

    /**
     * <p>The compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Importing from
     * Amazon S3 is not supported on the db.t2.micro DB instance class. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}


    /**
     * <p>The name of the database engine to be used for this instance. </p> <p>Valid
     * Values: <code>mysql</code> </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the database engine to be used for this instance. </p> <p>Valid
     * Values: <code>mysql</code> </p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The name of the database engine to be used for this instance. </p> <p>Valid
     * Values: <code>mysql</code> </p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the database engine to be used for this instance. </p> <p>Valid
     * Values: <code>mysql</code> </p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The name of the database engine to be used for this instance. </p> <p>Valid
     * Values: <code>mysql</code> </p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The name of the database engine to be used for this instance. </p> <p>Valid
     * Values: <code>mysql</code> </p>
     */
    inline RestoreDBInstanceFromS3Request& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the database engine to be used for this instance. </p> <p>Valid
     * Values: <code>mysql</code> </p>
     */
    inline RestoreDBInstanceFromS3Request& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The name of the database engine to be used for this instance. </p> <p>Valid
     * Values: <code>mysql</code> </p>
     */
    inline RestoreDBInstanceFromS3Request& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The name for the master user. </p> <p>Constraints: </p> <ul> <li> <p>Must be
     * 1 to 16 letters or numbers.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't be a reserved word for the chosen database
     * engine.</p> </li> </ul>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /**
     * <p>The name for the master user. </p> <p>Constraints: </p> <ul> <li> <p>Must be
     * 1 to 16 letters or numbers.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't be a reserved word for the chosen database
     * engine.</p> </li> </ul>
     */
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }

    /**
     * <p>The name for the master user. </p> <p>Constraints: </p> <ul> <li> <p>Must be
     * 1 to 16 letters or numbers.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't be a reserved word for the chosen database
     * engine.</p> </li> </ul>
     */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>The name for the master user. </p> <p>Constraints: </p> <ul> <li> <p>Must be
     * 1 to 16 letters or numbers.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't be a reserved word for the chosen database
     * engine.</p> </li> </ul>
     */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }

    /**
     * <p>The name for the master user. </p> <p>Constraints: </p> <ul> <li> <p>Must be
     * 1 to 16 letters or numbers.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't be a reserved word for the chosen database
     * engine.</p> </li> </ul>
     */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /**
     * <p>The name for the master user. </p> <p>Constraints: </p> <ul> <li> <p>Must be
     * 1 to 16 letters or numbers.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't be a reserved word for the chosen database
     * engine.</p> </li> </ul>
     */
    inline RestoreDBInstanceFromS3Request& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>The name for the master user. </p> <p>Constraints: </p> <ul> <li> <p>Must be
     * 1 to 16 letters or numbers.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't be a reserved word for the chosen database
     * engine.</p> </li> </ul>
     */
    inline RestoreDBInstanceFromS3Request& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}

    /**
     * <p>The name for the master user. </p> <p>Constraints: </p> <ul> <li> <p>Must be
     * 1 to 16 letters or numbers.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Can't be a reserved word for the chosen database
     * engine.</p> </li> </ul>
     */
    inline RestoreDBInstanceFromS3Request& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}


    /**
     * <p>The password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@". </p> <p>Constraints: Must contain from
     * 8 to 41 characters.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p>The password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@". </p> <p>Constraints: Must contain from
     * 8 to 41 characters.</p>
     */
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }

    /**
     * <p>The password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@". </p> <p>Constraints: Must contain from
     * 8 to 41 characters.</p>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p>The password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@". </p> <p>Constraints: Must contain from
     * 8 to 41 characters.</p>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }

    /**
     * <p>The password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@". </p> <p>Constraints: Must contain from
     * 8 to 41 characters.</p>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p>The password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@". </p> <p>Constraints: Must contain from
     * 8 to 41 characters.</p>
     */
    inline RestoreDBInstanceFromS3Request& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>The password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@". </p> <p>Constraints: Must contain from
     * 8 to 41 characters.</p>
     */
    inline RestoreDBInstanceFromS3Request& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@". </p> <p>Constraints: Must contain from
     * 8 to 41 characters.</p>
     */
    inline RestoreDBInstanceFromS3Request& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}


    /**
     * <p>A list of DB security groups to associate with this DB instance.</p>
     * <p>Default: The default DB security group for the database engine.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDBSecurityGroups() const{ return m_dBSecurityGroups; }

    /**
     * <p>A list of DB security groups to associate with this DB instance.</p>
     * <p>Default: The default DB security group for the database engine.</p>
     */
    inline bool DBSecurityGroupsHasBeenSet() const { return m_dBSecurityGroupsHasBeenSet; }

    /**
     * <p>A list of DB security groups to associate with this DB instance.</p>
     * <p>Default: The default DB security group for the database engine.</p>
     */
    inline void SetDBSecurityGroups(const Aws::Vector<Aws::String>& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = value; }

    /**
     * <p>A list of DB security groups to associate with this DB instance.</p>
     * <p>Default: The default DB security group for the database engine.</p>
     */
    inline void SetDBSecurityGroups(Aws::Vector<Aws::String>&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = std::move(value); }

    /**
     * <p>A list of DB security groups to associate with this DB instance.</p>
     * <p>Default: The default DB security group for the database engine.</p>
     */
    inline RestoreDBInstanceFromS3Request& WithDBSecurityGroups(const Aws::Vector<Aws::String>& value) { SetDBSecurityGroups(value); return *this;}

    /**
     * <p>A list of DB security groups to associate with this DB instance.</p>
     * <p>Default: The default DB security group for the database engine.</p>
     */
    inline RestoreDBInstanceFromS3Request& WithDBSecurityGroups(Aws::Vector<Aws::String>&& value) { SetDBSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>A list of DB security groups to associate with this DB instance.</p>
     * <p>Default: The default DB security group for the database engine.</p>
     */
    inline RestoreDBInstanceFromS3Request& AddDBSecurityGroups(const Aws::String& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of DB security groups to associate with this DB instance.</p>
     * <p>Default: The default DB security group for the database engine.</p>
     */
    inline RestoreDBInstanceFromS3Request& AddDBSecurityGroups(Aws::String&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of DB security groups to associate with this DB instance.</p>
     * <p>Default: The default DB security group for the database engine.</p>
     */
    inline RestoreDBInstanceFromS3Request& AddDBSecurityGroups(const char* value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }


    /**
     * <p>A list of VPC security groups to associate with this DB instance. </p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>A list of VPC security groups to associate with this DB instance. </p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>A list of VPC security groups to associate with this DB instance. </p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of VPC security groups to associate with this DB instance. </p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>A list of VPC security groups to associate with this DB instance. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of VPC security groups to associate with this DB instance. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of VPC security groups to associate with this DB instance. </p>
     */
    inline RestoreDBInstanceFromS3Request& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of VPC security groups to associate with this DB instance. </p>
     */
    inline RestoreDBInstanceFromS3Request& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of VPC security groups to associate with this DB instance. </p>
     */
    inline RestoreDBInstanceFromS3Request& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>The Availability Zone that the DB instance is created in. For information
     * about AWS Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default:
     * A random, system-chosen Availability Zone in the endpoint's AWS Region. </p> <p>
     * Example: <code>us-east-1d</code> </p> <p>Constraint: The
     * <code>AvailabilityZone</code> parameter can't be specified if the DB instance is
     * a Multi-AZ deployment. The specified Availability Zone must be in the same AWS
     * Region as the current endpoint. </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone that the DB instance is created in. For information
     * about AWS Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default:
     * A random, system-chosen Availability Zone in the endpoint's AWS Region. </p> <p>
     * Example: <code>us-east-1d</code> </p> <p>Constraint: The
     * <code>AvailabilityZone</code> parameter can't be specified if the DB instance is
     * a Multi-AZ deployment. The specified Availability Zone must be in the same AWS
     * Region as the current endpoint. </p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone that the DB instance is created in. For information
     * about AWS Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default:
     * A random, system-chosen Availability Zone in the endpoint's AWS Region. </p> <p>
     * Example: <code>us-east-1d</code> </p> <p>Constraint: The
     * <code>AvailabilityZone</code> parameter can't be specified if the DB instance is
     * a Multi-AZ deployment. The specified Availability Zone must be in the same AWS
     * Region as the current endpoint. </p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone that the DB instance is created in. For information
     * about AWS Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default:
     * A random, system-chosen Availability Zone in the endpoint's AWS Region. </p> <p>
     * Example: <code>us-east-1d</code> </p> <p>Constraint: The
     * <code>AvailabilityZone</code> parameter can't be specified if the DB instance is
     * a Multi-AZ deployment. The specified Availability Zone must be in the same AWS
     * Region as the current endpoint. </p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone that the DB instance is created in. For information
     * about AWS Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default:
     * A random, system-chosen Availability Zone in the endpoint's AWS Region. </p> <p>
     * Example: <code>us-east-1d</code> </p> <p>Constraint: The
     * <code>AvailabilityZone</code> parameter can't be specified if the DB instance is
     * a Multi-AZ deployment. The specified Availability Zone must be in the same AWS
     * Region as the current endpoint. </p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone that the DB instance is created in. For information
     * about AWS Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default:
     * A random, system-chosen Availability Zone in the endpoint's AWS Region. </p> <p>
     * Example: <code>us-east-1d</code> </p> <p>Constraint: The
     * <code>AvailabilityZone</code> parameter can't be specified if the DB instance is
     * a Multi-AZ deployment. The specified Availability Zone must be in the same AWS
     * Region as the current endpoint. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone that the DB instance is created in. For information
     * about AWS Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default:
     * A random, system-chosen Availability Zone in the endpoint's AWS Region. </p> <p>
     * Example: <code>us-east-1d</code> </p> <p>Constraint: The
     * <code>AvailabilityZone</code> parameter can't be specified if the DB instance is
     * a Multi-AZ deployment. The specified Availability Zone must be in the same AWS
     * Region as the current endpoint. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone that the DB instance is created in. For information
     * about AWS Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default:
     * A random, system-chosen Availability Zone in the endpoint's AWS Region. </p> <p>
     * Example: <code>us-east-1d</code> </p> <p>Constraint: The
     * <code>AvailabilityZone</code> parameter can't be specified if the DB instance is
     * a Multi-AZ deployment. The specified Availability Zone must be in the same AWS
     * Region as the current endpoint. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>A DB subnet group to associate with this DB instance.</p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>A DB subnet group to associate with this DB instance.</p>
     */
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }

    /**
     * <p>A DB subnet group to associate with this DB instance.</p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>A DB subnet group to associate with this DB instance.</p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }

    /**
     * <p>A DB subnet group to associate with this DB instance.</p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>A DB subnet group to associate with this DB instance.</p>
     */
    inline RestoreDBInstanceFromS3Request& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>A DB subnet group to associate with this DB instance.</p>
     */
    inline RestoreDBInstanceFromS3Request& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>A DB subnet group to associate with this DB instance.</p>
     */
    inline RestoreDBInstanceFromS3Request& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}


    /**
     * <p>The time range each week during which system maintenance can occur, in
     * Universal Coordinated Time (UTC). For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Maintenance.html#Concepts.DBMaintenance">Amazon
     * RDS Maintenance Window</a> in the <i>Amazon RDS User Guide.</i> </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>ddd:hh24:mi-ddd:hh24:mi</code>.</p> </li> <li> <p>Valid Days: Mon, Tue,
     * Wed, Thu, Fri, Sat, Sun.</p> </li> <li> <p>Must be in Universal Coordinated Time
     * (UTC).</p> </li> <li> <p>Must not conflict with the preferred backup window.</p>
     * </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The time range each week during which system maintenance can occur, in
     * Universal Coordinated Time (UTC). For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Maintenance.html#Concepts.DBMaintenance">Amazon
     * RDS Maintenance Window</a> in the <i>Amazon RDS User Guide.</i> </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>ddd:hh24:mi-ddd:hh24:mi</code>.</p> </li> <li> <p>Valid Days: Mon, Tue,
     * Wed, Thu, Fri, Sat, Sun.</p> </li> <li> <p>Must be in Universal Coordinated Time
     * (UTC).</p> </li> <li> <p>Must not conflict with the preferred backup window.</p>
     * </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>The time range each week during which system maintenance can occur, in
     * Universal Coordinated Time (UTC). For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Maintenance.html#Concepts.DBMaintenance">Amazon
     * RDS Maintenance Window</a> in the <i>Amazon RDS User Guide.</i> </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>ddd:hh24:mi-ddd:hh24:mi</code>.</p> </li> <li> <p>Valid Days: Mon, Tue,
     * Wed, Thu, Fri, Sat, Sun.</p> </li> <li> <p>Must be in Universal Coordinated Time
     * (UTC).</p> </li> <li> <p>Must not conflict with the preferred backup window.</p>
     * </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The time range each week during which system maintenance can occur, in
     * Universal Coordinated Time (UTC). For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Maintenance.html#Concepts.DBMaintenance">Amazon
     * RDS Maintenance Window</a> in the <i>Amazon RDS User Guide.</i> </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>ddd:hh24:mi-ddd:hh24:mi</code>.</p> </li> <li> <p>Valid Days: Mon, Tue,
     * Wed, Thu, Fri, Sat, Sun.</p> </li> <li> <p>Must be in Universal Coordinated Time
     * (UTC).</p> </li> <li> <p>Must not conflict with the preferred backup window.</p>
     * </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>The time range each week during which system maintenance can occur, in
     * Universal Coordinated Time (UTC). For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Maintenance.html#Concepts.DBMaintenance">Amazon
     * RDS Maintenance Window</a> in the <i>Amazon RDS User Guide.</i> </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>ddd:hh24:mi-ddd:hh24:mi</code>.</p> </li> <li> <p>Valid Days: Mon, Tue,
     * Wed, Thu, Fri, Sat, Sun.</p> </li> <li> <p>Must be in Universal Coordinated Time
     * (UTC).</p> </li> <li> <p>Must not conflict with the preferred backup window.</p>
     * </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The time range each week during which system maintenance can occur, in
     * Universal Coordinated Time (UTC). For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Maintenance.html#Concepts.DBMaintenance">Amazon
     * RDS Maintenance Window</a> in the <i>Amazon RDS User Guide.</i> </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>ddd:hh24:mi-ddd:hh24:mi</code>.</p> </li> <li> <p>Valid Days: Mon, Tue,
     * Wed, Thu, Fri, Sat, Sun.</p> </li> <li> <p>Must be in Universal Coordinated Time
     * (UTC).</p> </li> <li> <p>Must not conflict with the preferred backup window.</p>
     * </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline RestoreDBInstanceFromS3Request& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The time range each week during which system maintenance can occur, in
     * Universal Coordinated Time (UTC). For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Maintenance.html#Concepts.DBMaintenance">Amazon
     * RDS Maintenance Window</a> in the <i>Amazon RDS User Guide.</i> </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>ddd:hh24:mi-ddd:hh24:mi</code>.</p> </li> <li> <p>Valid Days: Mon, Tue,
     * Wed, Thu, Fri, Sat, Sun.</p> </li> <li> <p>Must be in Universal Coordinated Time
     * (UTC).</p> </li> <li> <p>Must not conflict with the preferred backup window.</p>
     * </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline RestoreDBInstanceFromS3Request& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>The time range each week during which system maintenance can occur, in
     * Universal Coordinated Time (UTC). For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Maintenance.html#Concepts.DBMaintenance">Amazon
     * RDS Maintenance Window</a> in the <i>Amazon RDS User Guide.</i> </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>ddd:hh24:mi-ddd:hh24:mi</code>.</p> </li> <li> <p>Valid Days: Mon, Tue,
     * Wed, Thu, Fri, Sat, Sun.</p> </li> <li> <p>Must be in Universal Coordinated Time
     * (UTC).</p> </li> <li> <p>Must not conflict with the preferred backup window.</p>
     * </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline RestoreDBInstanceFromS3Request& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default parameter group for the specified engine
     * is used. </p>
     */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default parameter group for the specified engine
     * is used. </p>
     */
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default parameter group for the specified engine
     * is used. </p>
     */
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default parameter group for the specified engine
     * is used. </p>
     */
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default parameter group for the specified engine
     * is used. </p>
     */
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default parameter group for the specified engine
     * is used. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default parameter group for the specified engine
     * is used. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default parameter group for the specified engine
     * is used. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}


    /**
     * <p>The number of days for which automated backups are retained. Setting this
     * parameter to a positive number enables backups. For more information, see
     * <code>CreateDBInstance</code>. </p>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }

    /**
     * <p>The number of days for which automated backups are retained. Setting this
     * parameter to a positive number enables backups. For more information, see
     * <code>CreateDBInstance</code>. </p>
     */
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days for which automated backups are retained. Setting this
     * parameter to a positive number enables backups. For more information, see
     * <code>CreateDBInstance</code>. </p>
     */
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /**
     * <p>The number of days for which automated backups are retained. Setting this
     * parameter to a positive number enables backups. For more information, see
     * <code>CreateDBInstance</code>. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}


    /**
     * <p>The time range each day during which automated backups are created if
     * automated backups are enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithAutomatedBackups.html#USER_WorkingWithAutomatedBackups.BackupWindow">The
     * Backup Window</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Constraints:</p>
     * <ul> <li> <p>Must be in the format <code>hh24:mi-hh24:mi</code>.</p> </li> <li>
     * <p>Must be in Universal Coordinated Time (UTC).</p> </li> <li> <p>Must not
     * conflict with the preferred maintenance window.</p> </li> <li> <p>Must be at
     * least 30 minutes.</p> </li> </ul>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    /**
     * <p>The time range each day during which automated backups are created if
     * automated backups are enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithAutomatedBackups.html#USER_WorkingWithAutomatedBackups.BackupWindow">The
     * Backup Window</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Constraints:</p>
     * <ul> <li> <p>Must be in the format <code>hh24:mi-hh24:mi</code>.</p> </li> <li>
     * <p>Must be in Universal Coordinated Time (UTC).</p> </li> <li> <p>Must not
     * conflict with the preferred maintenance window.</p> </li> <li> <p>Must be at
     * least 30 minutes.</p> </li> </ul>
     */
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }

    /**
     * <p>The time range each day during which automated backups are created if
     * automated backups are enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithAutomatedBackups.html#USER_WorkingWithAutomatedBackups.BackupWindow">The
     * Backup Window</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Constraints:</p>
     * <ul> <li> <p>Must be in the format <code>hh24:mi-hh24:mi</code>.</p> </li> <li>
     * <p>Must be in Universal Coordinated Time (UTC).</p> </li> <li> <p>Must not
     * conflict with the preferred maintenance window.</p> </li> <li> <p>Must be at
     * least 30 minutes.</p> </li> </ul>
     */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p>The time range each day during which automated backups are created if
     * automated backups are enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithAutomatedBackups.html#USER_WorkingWithAutomatedBackups.BackupWindow">The
     * Backup Window</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Constraints:</p>
     * <ul> <li> <p>Must be in the format <code>hh24:mi-hh24:mi</code>.</p> </li> <li>
     * <p>Must be in Universal Coordinated Time (UTC).</p> </li> <li> <p>Must not
     * conflict with the preferred maintenance window.</p> </li> <li> <p>Must be at
     * least 30 minutes.</p> </li> </ul>
     */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }

    /**
     * <p>The time range each day during which automated backups are created if
     * automated backups are enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithAutomatedBackups.html#USER_WorkingWithAutomatedBackups.BackupWindow">The
     * Backup Window</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Constraints:</p>
     * <ul> <li> <p>Must be in the format <code>hh24:mi-hh24:mi</code>.</p> </li> <li>
     * <p>Must be in Universal Coordinated Time (UTC).</p> </li> <li> <p>Must not
     * conflict with the preferred maintenance window.</p> </li> <li> <p>Must be at
     * least 30 minutes.</p> </li> </ul>
     */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /**
     * <p>The time range each day during which automated backups are created if
     * automated backups are enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithAutomatedBackups.html#USER_WorkingWithAutomatedBackups.BackupWindow">The
     * Backup Window</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Constraints:</p>
     * <ul> <li> <p>Must be in the format <code>hh24:mi-hh24:mi</code>.</p> </li> <li>
     * <p>Must be in Universal Coordinated Time (UTC).</p> </li> <li> <p>Must not
     * conflict with the preferred maintenance window.</p> </li> <li> <p>Must be at
     * least 30 minutes.</p> </li> </ul>
     */
    inline RestoreDBInstanceFromS3Request& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p>The time range each day during which automated backups are created if
     * automated backups are enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithAutomatedBackups.html#USER_WorkingWithAutomatedBackups.BackupWindow">The
     * Backup Window</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Constraints:</p>
     * <ul> <li> <p>Must be in the format <code>hh24:mi-hh24:mi</code>.</p> </li> <li>
     * <p>Must be in Universal Coordinated Time (UTC).</p> </li> <li> <p>Must not
     * conflict with the preferred maintenance window.</p> </li> <li> <p>Must be at
     * least 30 minutes.</p> </li> </ul>
     */
    inline RestoreDBInstanceFromS3Request& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}

    /**
     * <p>The time range each day during which automated backups are created if
     * automated backups are enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithAutomatedBackups.html#USER_WorkingWithAutomatedBackups.BackupWindow">The
     * Backup Window</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Constraints:</p>
     * <ul> <li> <p>Must be in the format <code>hh24:mi-hh24:mi</code>.</p> </li> <li>
     * <p>Must be in Universal Coordinated Time (UTC).</p> </li> <li> <p>Must not
     * conflict with the preferred maintenance window.</p> </li> <li> <p>Must be at
     * least 30 minutes.</p> </li> </ul>
     */
    inline RestoreDBInstanceFromS3Request& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}


    /**
     * <p>The port number on which the database accepts connections. </p> <p>Type:
     * Integer </p> <p>Valid Values: <code>1150</code>-<code>65535</code> </p>
     * <p>Default: <code>3306</code> </p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which the database accepts connections. </p> <p>Type:
     * Integer </p> <p>Valid Values: <code>1150</code>-<code>65535</code> </p>
     * <p>Default: <code>3306</code> </p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number on which the database accepts connections. </p> <p>Type:
     * Integer </p> <p>Valid Values: <code>1150</code>-<code>65535</code> </p>
     * <p>Default: <code>3306</code> </p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number on which the database accepts connections. </p> <p>Type:
     * Integer </p> <p>Valid Values: <code>1150</code>-<code>65535</code> </p>
     * <p>Default: <code>3306</code> </p>
     */
    inline RestoreDBInstanceFromS3Request& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>A value that indicates whether the DB instance is a Multi-AZ deployment. If
     * the DB instance is a Multi-AZ deployment, you can't set the
     * <code>AvailabilityZone</code> parameter. </p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p>A value that indicates whether the DB instance is a Multi-AZ deployment. If
     * the DB instance is a Multi-AZ deployment, you can't set the
     * <code>AvailabilityZone</code> parameter. </p>
     */
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB instance is a Multi-AZ deployment. If
     * the DB instance is a Multi-AZ deployment, you can't set the
     * <code>AvailabilityZone</code> parameter. </p>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p>A value that indicates whether the DB instance is a Multi-AZ deployment. If
     * the DB instance is a Multi-AZ deployment, you can't set the
     * <code>AvailabilityZone</code> parameter. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}


    /**
     * <p>The version number of the database engine to use. Choose the latest minor
     * version of your database engine. For information about engine versions, see
     * <code>CreateDBInstance</code>, or call <code>DescribeDBEngineVersions</code>.
     * </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version number of the database engine to use. Choose the latest minor
     * version of your database engine. For information about engine versions, see
     * <code>CreateDBInstance</code>, or call <code>DescribeDBEngineVersions</code>.
     * </p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version number of the database engine to use. Choose the latest minor
     * version of your database engine. For information about engine versions, see
     * <code>CreateDBInstance</code>, or call <code>DescribeDBEngineVersions</code>.
     * </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version number of the database engine to use. Choose the latest minor
     * version of your database engine. For information about engine versions, see
     * <code>CreateDBInstance</code>, or call <code>DescribeDBEngineVersions</code>.
     * </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version number of the database engine to use. Choose the latest minor
     * version of your database engine. For information about engine versions, see
     * <code>CreateDBInstance</code>, or call <code>DescribeDBEngineVersions</code>.
     * </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version number of the database engine to use. Choose the latest minor
     * version of your database engine. For information about engine versions, see
     * <code>CreateDBInstance</code>, or call <code>DescribeDBEngineVersions</code>.
     * </p>
     */
    inline RestoreDBInstanceFromS3Request& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version number of the database engine to use. Choose the latest minor
     * version of your database engine. For information about engine versions, see
     * <code>CreateDBInstance</code>, or call <code>DescribeDBEngineVersions</code>.
     * </p>
     */
    inline RestoreDBInstanceFromS3Request& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the database engine to use. Choose the latest minor
     * version of your database engine. For information about engine versions, see
     * <code>CreateDBInstance</code>, or call <code>DescribeDBEngineVersions</code>.
     * </p>
     */
    inline RestoreDBInstanceFromS3Request& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>A value that indicates whether minor engine upgrades are applied
     * automatically to the DB instance during the maintenance window. By default,
     * minor engine upgrades are not applied automatically. </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>A value that indicates whether minor engine upgrades are applied
     * automatically to the DB instance during the maintenance window. By default,
     * minor engine upgrades are not applied automatically. </p>
     */
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }

    /**
     * <p>A value that indicates whether minor engine upgrades are applied
     * automatically to the DB instance during the maintenance window. By default,
     * minor engine upgrades are not applied automatically. </p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p>A value that indicates whether minor engine upgrades are applied
     * automatically to the DB instance during the maintenance window. By default,
     * minor engine upgrades are not applied automatically. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * <p>The license model for this DB instance. Use
     * <code>general-public-license</code>. </p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }

    /**
     * <p>The license model for this DB instance. Use
     * <code>general-public-license</code>. </p>
     */
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }

    /**
     * <p>The license model for this DB instance. Use
     * <code>general-public-license</code>. </p>
     */
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p>The license model for this DB instance. Use
     * <code>general-public-license</code>. </p>
     */
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }

    /**
     * <p>The license model for this DB instance. Use
     * <code>general-public-license</code>. </p>
     */
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }

    /**
     * <p>The license model for this DB instance. Use
     * <code>general-public-license</code>. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /**
     * <p>The license model for this DB instance. Use
     * <code>general-public-license</code>. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}

    /**
     * <p>The license model for this DB instance. Use
     * <code>general-public-license</code>. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}


    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to
     * allocate initially for the DB instance. For information about valid Iops values,
     * see see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html#USER_PIOPS">Amazon
     * RDS Provisioned IOPS Storage to Improve Performance</a> in the <i>Amazon RDS
     * User Guide.</i> </p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to
     * allocate initially for the DB instance. For information about valid Iops values,
     * see see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html#USER_PIOPS">Amazon
     * RDS Provisioned IOPS Storage to Improve Performance</a> in the <i>Amazon RDS
     * User Guide.</i> </p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to
     * allocate initially for the DB instance. For information about valid Iops values,
     * see see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html#USER_PIOPS">Amazon
     * RDS Provisioned IOPS Storage to Improve Performance</a> in the <i>Amazon RDS
     * User Guide.</i> </p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to
     * allocate initially for the DB instance. For information about valid Iops values,
     * see see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html#USER_PIOPS">Amazon
     * RDS Provisioned IOPS Storage to Improve Performance</a> in the <i>Amazon RDS
     * User Guide.</i> </p>
     */
    inline RestoreDBInstanceFromS3Request& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>The name of the option group to associate with this DB instance. If this
     * argument is omitted, the default option group for the specified engine is used.
     * </p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>The name of the option group to associate with this DB instance. If this
     * argument is omitted, the default option group for the specified engine is used.
     * </p>
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p>The name of the option group to associate with this DB instance. If this
     * argument is omitted, the default option group for the specified engine is used.
     * </p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The name of the option group to associate with this DB instance. If this
     * argument is omitted, the default option group for the specified engine is used.
     * </p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p>The name of the option group to associate with this DB instance. If this
     * argument is omitted, the default option group for the specified engine is used.
     * </p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>The name of the option group to associate with this DB instance. If this
     * argument is omitted, the default option group for the specified engine is used.
     * </p>
     */
    inline RestoreDBInstanceFromS3Request& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The name of the option group to associate with this DB instance. If this
     * argument is omitted, the default option group for the specified engine is used.
     * </p>
     */
    inline RestoreDBInstanceFromS3Request& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the option group to associate with this DB instance. If this
     * argument is omitted, the default option group for the specified engine is used.
     * </p>
     */
    inline RestoreDBInstanceFromS3Request& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}


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
    inline RestoreDBInstanceFromS3Request& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    /**
     * <p>A list of tags to associate with this DB instance. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.html">Tagging
     * Amazon RDS Resources</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to associate with this DB instance. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.html">Tagging
     * Amazon RDS Resources</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to associate with this DB instance. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.html">Tagging
     * Amazon RDS Resources</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to associate with this DB instance. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.html">Tagging
     * Amazon RDS Resources</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to associate with this DB instance. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.html">Tagging
     * Amazon RDS Resources</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline RestoreDBInstanceFromS3Request& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to associate with this DB instance. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.html">Tagging
     * Amazon RDS Resources</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline RestoreDBInstanceFromS3Request& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to associate with this DB instance. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.html">Tagging
     * Amazon RDS Resources</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline RestoreDBInstanceFromS3Request& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags to associate with this DB instance. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.html">Tagging
     * Amazon RDS Resources</a> in the <i>Amazon RDS User Guide.</i> </p>
     */
    inline RestoreDBInstanceFromS3Request& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the storage type to be associated with the DB instance. </p>
     * <p>Valid values: <code>standard</code> | <code>gp2</code> | <code>io1</code>
     * </p> <p>If you specify <code>io1</code>, you must also include a value for the
     * <code>Iops</code> parameter. </p> <p>Default: <code>io1</code> if the
     * <code>Iops</code> parameter is specified; otherwise <code>gp2</code> </p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Specifies the storage type to be associated with the DB instance. </p>
     * <p>Valid values: <code>standard</code> | <code>gp2</code> | <code>io1</code>
     * </p> <p>If you specify <code>io1</code>, you must also include a value for the
     * <code>Iops</code> parameter. </p> <p>Default: <code>io1</code> if the
     * <code>Iops</code> parameter is specified; otherwise <code>gp2</code> </p>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>Specifies the storage type to be associated with the DB instance. </p>
     * <p>Valid values: <code>standard</code> | <code>gp2</code> | <code>io1</code>
     * </p> <p>If you specify <code>io1</code>, you must also include a value for the
     * <code>Iops</code> parameter. </p> <p>Default: <code>io1</code> if the
     * <code>Iops</code> parameter is specified; otherwise <code>gp2</code> </p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Specifies the storage type to be associated with the DB instance. </p>
     * <p>Valid values: <code>standard</code> | <code>gp2</code> | <code>io1</code>
     * </p> <p>If you specify <code>io1</code>, you must also include a value for the
     * <code>Iops</code> parameter. </p> <p>Default: <code>io1</code> if the
     * <code>Iops</code> parameter is specified; otherwise <code>gp2</code> </p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>Specifies the storage type to be associated with the DB instance. </p>
     * <p>Valid values: <code>standard</code> | <code>gp2</code> | <code>io1</code>
     * </p> <p>If you specify <code>io1</code>, you must also include a value for the
     * <code>Iops</code> parameter. </p> <p>Default: <code>io1</code> if the
     * <code>Iops</code> parameter is specified; otherwise <code>gp2</code> </p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>Specifies the storage type to be associated with the DB instance. </p>
     * <p>Valid values: <code>standard</code> | <code>gp2</code> | <code>io1</code>
     * </p> <p>If you specify <code>io1</code>, you must also include a value for the
     * <code>Iops</code> parameter. </p> <p>Default: <code>io1</code> if the
     * <code>Iops</code> parameter is specified; otherwise <code>gp2</code> </p>
     */
    inline RestoreDBInstanceFromS3Request& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the DB instance. </p>
     * <p>Valid values: <code>standard</code> | <code>gp2</code> | <code>io1</code>
     * </p> <p>If you specify <code>io1</code>, you must also include a value for the
     * <code>Iops</code> parameter. </p> <p>Default: <code>io1</code> if the
     * <code>Iops</code> parameter is specified; otherwise <code>gp2</code> </p>
     */
    inline RestoreDBInstanceFromS3Request& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the DB instance. </p>
     * <p>Valid values: <code>standard</code> | <code>gp2</code> | <code>io1</code>
     * </p> <p>If you specify <code>io1</code>, you must also include a value for the
     * <code>Iops</code> parameter. </p> <p>Default: <code>io1</code> if the
     * <code>Iops</code> parameter is specified; otherwise <code>gp2</code> </p>
     */
    inline RestoreDBInstanceFromS3Request& WithStorageType(const char* value) { SetStorageType(value); return *this;}


    /**
     * <p>A value that indicates whether the new DB instance is encrypted or not. </p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }

    /**
     * <p>A value that indicates whether the new DB instance is encrypted or not. </p>
     */
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }

    /**
     * <p>A value that indicates whether the new DB instance is encrypted or not. </p>
     */
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }

    /**
     * <p>A value that indicates whether the new DB instance is encrypted or not. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}


    /**
     * <p>The AWS KMS key identifier for an encrypted DB instance. </p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB instance with the same AWS account that owns the KMS
     * encryption key used to encrypt the new DB instance, then you can use the KMS key
     * alias instead of the ARN for the KM encryption key. </p> <p>If the
     * <code>StorageEncrypted</code> parameter is enabled, and you do not specify a
     * value for the <code>KmsKeyId</code> parameter, then Amazon RDS will use your
     * default encryption key. AWS KMS creates the default encryption key for your AWS
     * account. Your AWS account has a different default encryption key for each AWS
     * Region. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The AWS KMS key identifier for an encrypted DB instance. </p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB instance with the same AWS account that owns the KMS
     * encryption key used to encrypt the new DB instance, then you can use the KMS key
     * alias instead of the ARN for the KM encryption key. </p> <p>If the
     * <code>StorageEncrypted</code> parameter is enabled, and you do not specify a
     * value for the <code>KmsKeyId</code> parameter, then Amazon RDS will use your
     * default encryption key. AWS KMS creates the default encryption key for your AWS
     * account. Your AWS account has a different default encryption key for each AWS
     * Region. </p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The AWS KMS key identifier for an encrypted DB instance. </p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB instance with the same AWS account that owns the KMS
     * encryption key used to encrypt the new DB instance, then you can use the KMS key
     * alias instead of the ARN for the KM encryption key. </p> <p>If the
     * <code>StorageEncrypted</code> parameter is enabled, and you do not specify a
     * value for the <code>KmsKeyId</code> parameter, then Amazon RDS will use your
     * default encryption key. AWS KMS creates the default encryption key for your AWS
     * account. Your AWS account has a different default encryption key for each AWS
     * Region. </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The AWS KMS key identifier for an encrypted DB instance. </p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB instance with the same AWS account that owns the KMS
     * encryption key used to encrypt the new DB instance, then you can use the KMS key
     * alias instead of the ARN for the KM encryption key. </p> <p>If the
     * <code>StorageEncrypted</code> parameter is enabled, and you do not specify a
     * value for the <code>KmsKeyId</code> parameter, then Amazon RDS will use your
     * default encryption key. AWS KMS creates the default encryption key for your AWS
     * account. Your AWS account has a different default encryption key for each AWS
     * Region. </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The AWS KMS key identifier for an encrypted DB instance. </p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB instance with the same AWS account that owns the KMS
     * encryption key used to encrypt the new DB instance, then you can use the KMS key
     * alias instead of the ARN for the KM encryption key. </p> <p>If the
     * <code>StorageEncrypted</code> parameter is enabled, and you do not specify a
     * value for the <code>KmsKeyId</code> parameter, then Amazon RDS will use your
     * default encryption key. AWS KMS creates the default encryption key for your AWS
     * account. Your AWS account has a different default encryption key for each AWS
     * Region. </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The AWS KMS key identifier for an encrypted DB instance. </p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB instance with the same AWS account that owns the KMS
     * encryption key used to encrypt the new DB instance, then you can use the KMS key
     * alias instead of the ARN for the KM encryption key. </p> <p>If the
     * <code>StorageEncrypted</code> parameter is enabled, and you do not specify a
     * value for the <code>KmsKeyId</code> parameter, then Amazon RDS will use your
     * default encryption key. AWS KMS creates the default encryption key for your AWS
     * account. Your AWS account has a different default encryption key for each AWS
     * Region. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS KMS key identifier for an encrypted DB instance. </p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB instance with the same AWS account that owns the KMS
     * encryption key used to encrypt the new DB instance, then you can use the KMS key
     * alias instead of the ARN for the KM encryption key. </p> <p>If the
     * <code>StorageEncrypted</code> parameter is enabled, and you do not specify a
     * value for the <code>KmsKeyId</code> parameter, then Amazon RDS will use your
     * default encryption key. AWS KMS creates the default encryption key for your AWS
     * account. Your AWS account has a different default encryption key for each AWS
     * Region. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS KMS key identifier for an encrypted DB instance. </p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB instance with the same AWS account that owns the KMS
     * encryption key used to encrypt the new DB instance, then you can use the KMS key
     * alias instead of the ARN for the KM encryption key. </p> <p>If the
     * <code>StorageEncrypted</code> parameter is enabled, and you do not specify a
     * value for the <code>KmsKeyId</code> parameter, then Amazon RDS will use your
     * default encryption key. AWS KMS creates the default encryption key for your AWS
     * account. Your AWS account has a different default encryption key for each AWS
     * Region. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>A value that indicates whether to copy all tags from the DB instance to
     * snapshots of the DB instance. By default, tags are not copied. </p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }

    /**
     * <p>A value that indicates whether to copy all tags from the DB instance to
     * snapshots of the DB instance. By default, tags are not copied. </p>
     */
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }

    /**
     * <p>A value that indicates whether to copy all tags from the DB instance to
     * snapshots of the DB instance. By default, tags are not copied. </p>
     */
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }

    /**
     * <p>A value that indicates whether to copy all tags from the DB instance to
     * snapshots of the DB instance. By default, tags are not copied. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}


    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB instance. To disable collecting Enhanced Monitoring
     * metrics, specify 0. </p> <p>If <code>MonitoringRoleArn</code> is specified, then
     * you must also set <code>MonitoringInterval</code> to a value other than 0. </p>
     * <p>Valid Values: 0, 1, 5, 10, 15, 30, 60 </p> <p>Default: <code>0</code> </p>
     */
    inline int GetMonitoringInterval() const{ return m_monitoringInterval; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB instance. To disable collecting Enhanced Monitoring
     * metrics, specify 0. </p> <p>If <code>MonitoringRoleArn</code> is specified, then
     * you must also set <code>MonitoringInterval</code> to a value other than 0. </p>
     * <p>Valid Values: 0, 1, 5, 10, 15, 30, 60 </p> <p>Default: <code>0</code> </p>
     */
    inline bool MonitoringIntervalHasBeenSet() const { return m_monitoringIntervalHasBeenSet; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB instance. To disable collecting Enhanced Monitoring
     * metrics, specify 0. </p> <p>If <code>MonitoringRoleArn</code> is specified, then
     * you must also set <code>MonitoringInterval</code> to a value other than 0. </p>
     * <p>Valid Values: 0, 1, 5, 10, 15, 30, 60 </p> <p>Default: <code>0</code> </p>
     */
    inline void SetMonitoringInterval(int value) { m_monitoringIntervalHasBeenSet = true; m_monitoringInterval = value; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB instance. To disable collecting Enhanced Monitoring
     * metrics, specify 0. </p> <p>If <code>MonitoringRoleArn</code> is specified, then
     * you must also set <code>MonitoringInterval</code> to a value other than 0. </p>
     * <p>Valid Values: 0, 1, 5, 10, 15, 30, 60 </p> <p>Default: <code>0</code> </p>
     */
    inline RestoreDBInstanceFromS3Request& WithMonitoringInterval(int value) { SetMonitoringInterval(value); return *this;}


    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.OS.html#USER_Monitoring.OS.Enabling">Setting
     * Up and Enabling Enhanced Monitoring</a> in the <i>Amazon RDS User Guide.</i>
     * </p> <p>If <code>MonitoringInterval</code> is set to a value other than 0, then
     * you must supply a <code>MonitoringRoleArn</code> value. </p>
     */
    inline const Aws::String& GetMonitoringRoleArn() const{ return m_monitoringRoleArn; }

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.OS.html#USER_Monitoring.OS.Enabling">Setting
     * Up and Enabling Enhanced Monitoring</a> in the <i>Amazon RDS User Guide.</i>
     * </p> <p>If <code>MonitoringInterval</code> is set to a value other than 0, then
     * you must supply a <code>MonitoringRoleArn</code> value. </p>
     */
    inline bool MonitoringRoleArnHasBeenSet() const { return m_monitoringRoleArnHasBeenSet; }

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.OS.html#USER_Monitoring.OS.Enabling">Setting
     * Up and Enabling Enhanced Monitoring</a> in the <i>Amazon RDS User Guide.</i>
     * </p> <p>If <code>MonitoringInterval</code> is set to a value other than 0, then
     * you must supply a <code>MonitoringRoleArn</code> value. </p>
     */
    inline void SetMonitoringRoleArn(const Aws::String& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = value; }

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.OS.html#USER_Monitoring.OS.Enabling">Setting
     * Up and Enabling Enhanced Monitoring</a> in the <i>Amazon RDS User Guide.</i>
     * </p> <p>If <code>MonitoringInterval</code> is set to a value other than 0, then
     * you must supply a <code>MonitoringRoleArn</code> value. </p>
     */
    inline void SetMonitoringRoleArn(Aws::String&& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = std::move(value); }

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.OS.html#USER_Monitoring.OS.Enabling">Setting
     * Up and Enabling Enhanced Monitoring</a> in the <i>Amazon RDS User Guide.</i>
     * </p> <p>If <code>MonitoringInterval</code> is set to a value other than 0, then
     * you must supply a <code>MonitoringRoleArn</code> value. </p>
     */
    inline void SetMonitoringRoleArn(const char* value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn.assign(value); }

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.OS.html#USER_Monitoring.OS.Enabling">Setting
     * Up and Enabling Enhanced Monitoring</a> in the <i>Amazon RDS User Guide.</i>
     * </p> <p>If <code>MonitoringInterval</code> is set to a value other than 0, then
     * you must supply a <code>MonitoringRoleArn</code> value. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithMonitoringRoleArn(const Aws::String& value) { SetMonitoringRoleArn(value); return *this;}

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.OS.html#USER_Monitoring.OS.Enabling">Setting
     * Up and Enabling Enhanced Monitoring</a> in the <i>Amazon RDS User Guide.</i>
     * </p> <p>If <code>MonitoringInterval</code> is set to a value other than 0, then
     * you must supply a <code>MonitoringRoleArn</code> value. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithMonitoringRoleArn(Aws::String&& value) { SetMonitoringRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.OS.html#USER_Monitoring.OS.Enabling">Setting
     * Up and Enabling Enhanced Monitoring</a> in the <i>Amazon RDS User Guide.</i>
     * </p> <p>If <code>MonitoringInterval</code> is set to a value other than 0, then
     * you must supply a <code>MonitoringRoleArn</code> value. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithMonitoringRoleArn(const char* value) { SetMonitoringRoleArn(value); return *this;}


    /**
     * <p>A value that indicates whether to enable mapping of AWS Identity and Access
     * Management (IAM) accounts to database accounts. By default, mapping is
     * disabled.</p>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const{ return m_enableIAMDatabaseAuthentication; }

    /**
     * <p>A value that indicates whether to enable mapping of AWS Identity and Access
     * Management (IAM) accounts to database accounts. By default, mapping is
     * disabled.</p>
     */
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }

    /**
     * <p>A value that indicates whether to enable mapping of AWS Identity and Access
     * Management (IAM) accounts to database accounts. By default, mapping is
     * disabled.</p>
     */
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }

    /**
     * <p>A value that indicates whether to enable mapping of AWS Identity and Access
     * Management (IAM) accounts to database accounts. By default, mapping is
     * disabled.</p>
     */
    inline RestoreDBInstanceFromS3Request& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}


    /**
     * <p>The name of the engine of your source database. </p> <p>Valid Values:
     * <code>mysql</code> </p>
     */
    inline const Aws::String& GetSourceEngine() const{ return m_sourceEngine; }

    /**
     * <p>The name of the engine of your source database. </p> <p>Valid Values:
     * <code>mysql</code> </p>
     */
    inline bool SourceEngineHasBeenSet() const { return m_sourceEngineHasBeenSet; }

    /**
     * <p>The name of the engine of your source database. </p> <p>Valid Values:
     * <code>mysql</code> </p>
     */
    inline void SetSourceEngine(const Aws::String& value) { m_sourceEngineHasBeenSet = true; m_sourceEngine = value; }

    /**
     * <p>The name of the engine of your source database. </p> <p>Valid Values:
     * <code>mysql</code> </p>
     */
    inline void SetSourceEngine(Aws::String&& value) { m_sourceEngineHasBeenSet = true; m_sourceEngine = std::move(value); }

    /**
     * <p>The name of the engine of your source database. </p> <p>Valid Values:
     * <code>mysql</code> </p>
     */
    inline void SetSourceEngine(const char* value) { m_sourceEngineHasBeenSet = true; m_sourceEngine.assign(value); }

    /**
     * <p>The name of the engine of your source database. </p> <p>Valid Values:
     * <code>mysql</code> </p>
     */
    inline RestoreDBInstanceFromS3Request& WithSourceEngine(const Aws::String& value) { SetSourceEngine(value); return *this;}

    /**
     * <p>The name of the engine of your source database. </p> <p>Valid Values:
     * <code>mysql</code> </p>
     */
    inline RestoreDBInstanceFromS3Request& WithSourceEngine(Aws::String&& value) { SetSourceEngine(std::move(value)); return *this;}

    /**
     * <p>The name of the engine of your source database. </p> <p>Valid Values:
     * <code>mysql</code> </p>
     */
    inline RestoreDBInstanceFromS3Request& WithSourceEngine(const char* value) { SetSourceEngine(value); return *this;}


    /**
     * <p>The engine version of your source database. </p> <p>Valid Values:
     * <code>5.6</code> </p>
     */
    inline const Aws::String& GetSourceEngineVersion() const{ return m_sourceEngineVersion; }

    /**
     * <p>The engine version of your source database. </p> <p>Valid Values:
     * <code>5.6</code> </p>
     */
    inline bool SourceEngineVersionHasBeenSet() const { return m_sourceEngineVersionHasBeenSet; }

    /**
     * <p>The engine version of your source database. </p> <p>Valid Values:
     * <code>5.6</code> </p>
     */
    inline void SetSourceEngineVersion(const Aws::String& value) { m_sourceEngineVersionHasBeenSet = true; m_sourceEngineVersion = value; }

    /**
     * <p>The engine version of your source database. </p> <p>Valid Values:
     * <code>5.6</code> </p>
     */
    inline void SetSourceEngineVersion(Aws::String&& value) { m_sourceEngineVersionHasBeenSet = true; m_sourceEngineVersion = std::move(value); }

    /**
     * <p>The engine version of your source database. </p> <p>Valid Values:
     * <code>5.6</code> </p>
     */
    inline void SetSourceEngineVersion(const char* value) { m_sourceEngineVersionHasBeenSet = true; m_sourceEngineVersion.assign(value); }

    /**
     * <p>The engine version of your source database. </p> <p>Valid Values:
     * <code>5.6</code> </p>
     */
    inline RestoreDBInstanceFromS3Request& WithSourceEngineVersion(const Aws::String& value) { SetSourceEngineVersion(value); return *this;}

    /**
     * <p>The engine version of your source database. </p> <p>Valid Values:
     * <code>5.6</code> </p>
     */
    inline RestoreDBInstanceFromS3Request& WithSourceEngineVersion(Aws::String&& value) { SetSourceEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The engine version of your source database. </p> <p>Valid Values:
     * <code>5.6</code> </p>
     */
    inline RestoreDBInstanceFromS3Request& WithSourceEngineVersion(const char* value) { SetSourceEngineVersion(value); return *this;}


    /**
     * <p>The name of your Amazon S3 bucket that contains your database backup file.
     * </p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The name of your Amazon S3 bucket that contains your database backup file.
     * </p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The name of your Amazon S3 bucket that contains your database backup file.
     * </p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The name of your Amazon S3 bucket that contains your database backup file.
     * </p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The name of your Amazon S3 bucket that contains your database backup file.
     * </p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The name of your Amazon S3 bucket that contains your database backup file.
     * </p>
     */
    inline RestoreDBInstanceFromS3Request& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The name of your Amazon S3 bucket that contains your database backup file.
     * </p>
     */
    inline RestoreDBInstanceFromS3Request& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The name of your Amazon S3 bucket that contains your database backup file.
     * </p>
     */
    inline RestoreDBInstanceFromS3Request& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>The prefix of your Amazon S3 bucket. </p>
     */
    inline const Aws::String& GetS3Prefix() const{ return m_s3Prefix; }

    /**
     * <p>The prefix of your Amazon S3 bucket. </p>
     */
    inline bool S3PrefixHasBeenSet() const { return m_s3PrefixHasBeenSet; }

    /**
     * <p>The prefix of your Amazon S3 bucket. </p>
     */
    inline void SetS3Prefix(const Aws::String& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = value; }

    /**
     * <p>The prefix of your Amazon S3 bucket. </p>
     */
    inline void SetS3Prefix(Aws::String&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = std::move(value); }

    /**
     * <p>The prefix of your Amazon S3 bucket. </p>
     */
    inline void SetS3Prefix(const char* value) { m_s3PrefixHasBeenSet = true; m_s3Prefix.assign(value); }

    /**
     * <p>The prefix of your Amazon S3 bucket. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithS3Prefix(const Aws::String& value) { SetS3Prefix(value); return *this;}

    /**
     * <p>The prefix of your Amazon S3 bucket. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithS3Prefix(Aws::String&& value) { SetS3Prefix(std::move(value)); return *this;}

    /**
     * <p>The prefix of your Amazon S3 bucket. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithS3Prefix(const char* value) { SetS3Prefix(value); return *this;}


    /**
     * <p>An AWS Identity and Access Management (IAM) role to allow Amazon RDS to
     * access your Amazon S3 bucket. </p>
     */
    inline const Aws::String& GetS3IngestionRoleArn() const{ return m_s3IngestionRoleArn; }

    /**
     * <p>An AWS Identity and Access Management (IAM) role to allow Amazon RDS to
     * access your Amazon S3 bucket. </p>
     */
    inline bool S3IngestionRoleArnHasBeenSet() const { return m_s3IngestionRoleArnHasBeenSet; }

    /**
     * <p>An AWS Identity and Access Management (IAM) role to allow Amazon RDS to
     * access your Amazon S3 bucket. </p>
     */
    inline void SetS3IngestionRoleArn(const Aws::String& value) { m_s3IngestionRoleArnHasBeenSet = true; m_s3IngestionRoleArn = value; }

    /**
     * <p>An AWS Identity and Access Management (IAM) role to allow Amazon RDS to
     * access your Amazon S3 bucket. </p>
     */
    inline void SetS3IngestionRoleArn(Aws::String&& value) { m_s3IngestionRoleArnHasBeenSet = true; m_s3IngestionRoleArn = std::move(value); }

    /**
     * <p>An AWS Identity and Access Management (IAM) role to allow Amazon RDS to
     * access your Amazon S3 bucket. </p>
     */
    inline void SetS3IngestionRoleArn(const char* value) { m_s3IngestionRoleArnHasBeenSet = true; m_s3IngestionRoleArn.assign(value); }

    /**
     * <p>An AWS Identity and Access Management (IAM) role to allow Amazon RDS to
     * access your Amazon S3 bucket. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithS3IngestionRoleArn(const Aws::String& value) { SetS3IngestionRoleArn(value); return *this;}

    /**
     * <p>An AWS Identity and Access Management (IAM) role to allow Amazon RDS to
     * access your Amazon S3 bucket. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithS3IngestionRoleArn(Aws::String&& value) { SetS3IngestionRoleArn(std::move(value)); return *this;}

    /**
     * <p>An AWS Identity and Access Management (IAM) role to allow Amazon RDS to
     * access your Amazon S3 bucket. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithS3IngestionRoleArn(const char* value) { SetS3IngestionRoleArn(value); return *this;}


    /**
     * <p>A value that indicates whether to enable Performance Insights for the DB
     * instance. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">Using
     * Amazon Performance Insights</a> in the <i>Amazon Relational Database Service
     * User Guide</i>. </p>
     */
    inline bool GetEnablePerformanceInsights() const{ return m_enablePerformanceInsights; }

    /**
     * <p>A value that indicates whether to enable Performance Insights for the DB
     * instance. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">Using
     * Amazon Performance Insights</a> in the <i>Amazon Relational Database Service
     * User Guide</i>. </p>
     */
    inline bool EnablePerformanceInsightsHasBeenSet() const { return m_enablePerformanceInsightsHasBeenSet; }

    /**
     * <p>A value that indicates whether to enable Performance Insights for the DB
     * instance. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">Using
     * Amazon Performance Insights</a> in the <i>Amazon Relational Database Service
     * User Guide</i>. </p>
     */
    inline void SetEnablePerformanceInsights(bool value) { m_enablePerformanceInsightsHasBeenSet = true; m_enablePerformanceInsights = value; }

    /**
     * <p>A value that indicates whether to enable Performance Insights for the DB
     * instance. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">Using
     * Amazon Performance Insights</a> in the <i>Amazon Relational Database Service
     * User Guide</i>. </p>
     */
    inline RestoreDBInstanceFromS3Request& WithEnablePerformanceInsights(bool value) { SetEnablePerformanceInsights(value); return *this;}


    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), the KMS key identifier, or the KMS
     * key alias for the KMS encryption key. </p> <p>If you do not specify a value for
     * <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS Region.</p>
     */
    inline const Aws::String& GetPerformanceInsightsKMSKeyId() const{ return m_performanceInsightsKMSKeyId; }

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), the KMS key identifier, or the KMS
     * key alias for the KMS encryption key. </p> <p>If you do not specify a value for
     * <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS Region.</p>
     */
    inline bool PerformanceInsightsKMSKeyIdHasBeenSet() const { return m_performanceInsightsKMSKeyIdHasBeenSet; }

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), the KMS key identifier, or the KMS
     * key alias for the KMS encryption key. </p> <p>If you do not specify a value for
     * <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS Region.</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(const Aws::String& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = value; }

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), the KMS key identifier, or the KMS
     * key alias for the KMS encryption key. </p> <p>If you do not specify a value for
     * <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS Region.</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(Aws::String&& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = std::move(value); }

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), the KMS key identifier, or the KMS
     * key alias for the KMS encryption key. </p> <p>If you do not specify a value for
     * <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS Region.</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(const char* value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId.assign(value); }

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), the KMS key identifier, or the KMS
     * key alias for the KMS encryption key. </p> <p>If you do not specify a value for
     * <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS Region.</p>
     */
    inline RestoreDBInstanceFromS3Request& WithPerformanceInsightsKMSKeyId(const Aws::String& value) { SetPerformanceInsightsKMSKeyId(value); return *this;}

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), the KMS key identifier, or the KMS
     * key alias for the KMS encryption key. </p> <p>If you do not specify a value for
     * <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS Region.</p>
     */
    inline RestoreDBInstanceFromS3Request& WithPerformanceInsightsKMSKeyId(Aws::String&& value) { SetPerformanceInsightsKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), the KMS key identifier, or the KMS
     * key alias for the KMS encryption key. </p> <p>If you do not specify a value for
     * <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS Region.</p>
     */
    inline RestoreDBInstanceFromS3Request& WithPerformanceInsightsKMSKeyId(const char* value) { SetPerformanceInsightsKMSKeyId(value); return *this;}


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
    inline RestoreDBInstanceFromS3Request& WithPerformanceInsightsRetentionPeriod(int value) { SetPerformanceInsightsRetentionPeriod(value); return *this;}


    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnableCloudwatchLogsExports() const{ return m_enableCloudwatchLogsExports; }

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline bool EnableCloudwatchLogsExportsHasBeenSet() const { return m_enableCloudwatchLogsExportsHasBeenSet; }

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline void SetEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = value; }

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline void SetEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = std::move(value); }

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline RestoreDBInstanceFromS3Request& WithEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnableCloudwatchLogsExports(value); return *this;}

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline RestoreDBInstanceFromS3Request& WithEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnableCloudwatchLogsExports(std::move(value)); return *this;}

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline RestoreDBInstanceFromS3Request& AddEnableCloudwatchLogsExports(const Aws::String& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline RestoreDBInstanceFromS3Request& AddEnableCloudwatchLogsExports(Aws::String&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p>
     */
    inline RestoreDBInstanceFromS3Request& AddEnableCloudwatchLogsExports(const char* value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }


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
    inline RestoreDBInstanceFromS3Request& WithProcessorFeatures(const Aws::Vector<ProcessorFeature>& value) { SetProcessorFeatures(value); return *this;}

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline RestoreDBInstanceFromS3Request& WithProcessorFeatures(Aws::Vector<ProcessorFeature>&& value) { SetProcessorFeatures(std::move(value)); return *this;}

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline RestoreDBInstanceFromS3Request& AddProcessorFeatures(const ProcessorFeature& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(value); return *this; }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline RestoreDBInstanceFromS3Request& AddProcessorFeatures(ProcessorFeature&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(std::move(value)); return *this; }


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
    inline RestoreDBInstanceFromS3Request& WithUseDefaultProcessorFeatures(bool value) { SetUseDefaultProcessorFeatures(value); return *this;}


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
    inline RestoreDBInstanceFromS3Request& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}

  private:

    Aws::String m_dBName;
    bool m_dBNameHasBeenSet;

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet;

    Aws::String m_engine;
    bool m_engineHasBeenSet;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet;

    Aws::Vector<Aws::String> m_dBSecurityGroups;
    bool m_dBSecurityGroupsHasBeenSet;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet;

    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet;

    int m_iops;
    bool m_iopsHasBeenSet;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet;

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet;

    int m_monitoringInterval;
    bool m_monitoringIntervalHasBeenSet;

    Aws::String m_monitoringRoleArn;
    bool m_monitoringRoleArnHasBeenSet;

    bool m_enableIAMDatabaseAuthentication;
    bool m_enableIAMDatabaseAuthenticationHasBeenSet;

    Aws::String m_sourceEngine;
    bool m_sourceEngineHasBeenSet;

    Aws::String m_sourceEngineVersion;
    bool m_sourceEngineVersionHasBeenSet;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet;

    Aws::String m_s3Prefix;
    bool m_s3PrefixHasBeenSet;

    Aws::String m_s3IngestionRoleArn;
    bool m_s3IngestionRoleArnHasBeenSet;

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
