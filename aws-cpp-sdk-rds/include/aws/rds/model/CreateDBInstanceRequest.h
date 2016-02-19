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
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p> </p>
   */
  class AWS_RDS_API CreateDBInstanceRequest : public RDSRequest
  {
  public:
    CreateDBInstanceRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p><b>MySQL</b></p> <p>The name of the database to create when the DB
     * Instance is created. If this parameter is not specified, no database is created
     * in the DB Instance. </p> <p>Constraints:</p> <ul> <li>Must contain 1 to 64
     * alphanumeric characters</li> <li>Cannot be a word reserved by the specified
     * database engine</li> </ul> <p>Type: String</p> <p><b>Oracle</b></p> <p> The
     * Oracle System ID (SID) of the created DB Instance. </p> <p>Default:
     * <code>ORCL</code></p> <p>Constraints:</p> <ul> <li>Cannot be longer than 8
     * characters</li> </ul> <p><b>SQL Server</b></p> <p>Not applicable. Must be
     * null.</p>
     */
    inline const Aws::String& GetDBName() const{ return m_dBName; }

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p><b>MySQL</b></p> <p>The name of the database to create when the DB
     * Instance is created. If this parameter is not specified, no database is created
     * in the DB Instance. </p> <p>Constraints:</p> <ul> <li>Must contain 1 to 64
     * alphanumeric characters</li> <li>Cannot be a word reserved by the specified
     * database engine</li> </ul> <p>Type: String</p> <p><b>Oracle</b></p> <p> The
     * Oracle System ID (SID) of the created DB Instance. </p> <p>Default:
     * <code>ORCL</code></p> <p>Constraints:</p> <ul> <li>Cannot be longer than 8
     * characters</li> </ul> <p><b>SQL Server</b></p> <p>Not applicable. Must be
     * null.</p>
     */
    inline void SetDBName(const Aws::String& value) { m_dBNameHasBeenSet = true; m_dBName = value; }

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p><b>MySQL</b></p> <p>The name of the database to create when the DB
     * Instance is created. If this parameter is not specified, no database is created
     * in the DB Instance. </p> <p>Constraints:</p> <ul> <li>Must contain 1 to 64
     * alphanumeric characters</li> <li>Cannot be a word reserved by the specified
     * database engine</li> </ul> <p>Type: String</p> <p><b>Oracle</b></p> <p> The
     * Oracle System ID (SID) of the created DB Instance. </p> <p>Default:
     * <code>ORCL</code></p> <p>Constraints:</p> <ul> <li>Cannot be longer than 8
     * characters</li> </ul> <p><b>SQL Server</b></p> <p>Not applicable. Must be
     * null.</p>
     */
    inline void SetDBName(Aws::String&& value) { m_dBNameHasBeenSet = true; m_dBName = value; }

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p><b>MySQL</b></p> <p>The name of the database to create when the DB
     * Instance is created. If this parameter is not specified, no database is created
     * in the DB Instance. </p> <p>Constraints:</p> <ul> <li>Must contain 1 to 64
     * alphanumeric characters</li> <li>Cannot be a word reserved by the specified
     * database engine</li> </ul> <p>Type: String</p> <p><b>Oracle</b></p> <p> The
     * Oracle System ID (SID) of the created DB Instance. </p> <p>Default:
     * <code>ORCL</code></p> <p>Constraints:</p> <ul> <li>Cannot be longer than 8
     * characters</li> </ul> <p><b>SQL Server</b></p> <p>Not applicable. Must be
     * null.</p>
     */
    inline void SetDBName(const char* value) { m_dBNameHasBeenSet = true; m_dBName.assign(value); }

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p><b>MySQL</b></p> <p>The name of the database to create when the DB
     * Instance is created. If this parameter is not specified, no database is created
     * in the DB Instance. </p> <p>Constraints:</p> <ul> <li>Must contain 1 to 64
     * alphanumeric characters</li> <li>Cannot be a word reserved by the specified
     * database engine</li> </ul> <p>Type: String</p> <p><b>Oracle</b></p> <p> The
     * Oracle System ID (SID) of the created DB Instance. </p> <p>Default:
     * <code>ORCL</code></p> <p>Constraints:</p> <ul> <li>Cannot be longer than 8
     * characters</li> </ul> <p><b>SQL Server</b></p> <p>Not applicable. Must be
     * null.</p>
     */
    inline CreateDBInstanceRequest& WithDBName(const Aws::String& value) { SetDBName(value); return *this;}

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p><b>MySQL</b></p> <p>The name of the database to create when the DB
     * Instance is created. If this parameter is not specified, no database is created
     * in the DB Instance. </p> <p>Constraints:</p> <ul> <li>Must contain 1 to 64
     * alphanumeric characters</li> <li>Cannot be a word reserved by the specified
     * database engine</li> </ul> <p>Type: String</p> <p><b>Oracle</b></p> <p> The
     * Oracle System ID (SID) of the created DB Instance. </p> <p>Default:
     * <code>ORCL</code></p> <p>Constraints:</p> <ul> <li>Cannot be longer than 8
     * characters</li> </ul> <p><b>SQL Server</b></p> <p>Not applicable. Must be
     * null.</p>
     */
    inline CreateDBInstanceRequest& WithDBName(Aws::String&& value) { SetDBName(value); return *this;}

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p><b>MySQL</b></p> <p>The name of the database to create when the DB
     * Instance is created. If this parameter is not specified, no database is created
     * in the DB Instance. </p> <p>Constraints:</p> <ul> <li>Must contain 1 to 64
     * alphanumeric characters</li> <li>Cannot be a word reserved by the specified
     * database engine</li> </ul> <p>Type: String</p> <p><b>Oracle</b></p> <p> The
     * Oracle System ID (SID) of the created DB Instance. </p> <p>Default:
     * <code>ORCL</code></p> <p>Constraints:</p> <ul> <li>Cannot be longer than 8
     * characters</li> </ul> <p><b>SQL Server</b></p> <p>Not applicable. Must be
     * null.</p>
     */
    inline CreateDBInstanceRequest& WithDBName(const char* value) { SetDBName(value); return *this;}

    /**
     * <p> The DB Instance identifier. This parameter is stored as a lowercase string.
     * </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric
     * characters or hyphens (1 to 15 for SQL Server).</li> <li>First character must be
     * a letter.</li> <li>Cannot end with a hyphen or contain two consecutive
     * hyphens.</li> </ul> <p>Example: <code>mydbinstance</code></p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p> The DB Instance identifier. This parameter is stored as a lowercase string.
     * </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric
     * characters or hyphens (1 to 15 for SQL Server).</li> <li>First character must be
     * a letter.</li> <li>Cannot end with a hyphen or contain two consecutive
     * hyphens.</li> </ul> <p>Example: <code>mydbinstance</code></p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p> The DB Instance identifier. This parameter is stored as a lowercase string.
     * </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric
     * characters or hyphens (1 to 15 for SQL Server).</li> <li>First character must be
     * a letter.</li> <li>Cannot end with a hyphen or contain two consecutive
     * hyphens.</li> </ul> <p>Example: <code>mydbinstance</code></p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p> The DB Instance identifier. This parameter is stored as a lowercase string.
     * </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric
     * characters or hyphens (1 to 15 for SQL Server).</li> <li>First character must be
     * a letter.</li> <li>Cannot end with a hyphen or contain two consecutive
     * hyphens.</li> </ul> <p>Example: <code>mydbinstance</code></p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p> The DB Instance identifier. This parameter is stored as a lowercase string.
     * </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric
     * characters or hyphens (1 to 15 for SQL Server).</li> <li>First character must be
     * a letter.</li> <li>Cannot end with a hyphen or contain two consecutive
     * hyphens.</li> </ul> <p>Example: <code>mydbinstance</code></p>
     */
    inline CreateDBInstanceRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p> The DB Instance identifier. This parameter is stored as a lowercase string.
     * </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric
     * characters or hyphens (1 to 15 for SQL Server).</li> <li>First character must be
     * a letter.</li> <li>Cannot end with a hyphen or contain two consecutive
     * hyphens.</li> </ul> <p>Example: <code>mydbinstance</code></p>
     */
    inline CreateDBInstanceRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p> The DB Instance identifier. This parameter is stored as a lowercase string.
     * </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 63 alphanumeric
     * characters or hyphens (1 to 15 for SQL Server).</li> <li>First character must be
     * a letter.</li> <li>Cannot end with a hyphen or contain two consecutive
     * hyphens.</li> </ul> <p>Example: <code>mydbinstance</code></p>
     */
    inline CreateDBInstanceRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p> The amount of storage (in gigabytes) to be initially allocated for the
     * database instance. </p> <p><b>MySQL</b></p> <p> Constraints: Must be an integer
     * from 5 to 1024.</p> <p> Type: Integer</p> <p><b>Oracle</b></p> <p> Constraints:
     * Must be an integer from 10 to 1024.</p> <p><b>SQL Server</b></p> <p>
     * Constraints: Must be an integer from 200 to 1024 (Standard Edition and
     * Enterprise Edition) or from 30 to 1024 (Express Edition and Web Edition)</p>
     */
    inline long GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p> The amount of storage (in gigabytes) to be initially allocated for the
     * database instance. </p> <p><b>MySQL</b></p> <p> Constraints: Must be an integer
     * from 5 to 1024.</p> <p> Type: Integer</p> <p><b>Oracle</b></p> <p> Constraints:
     * Must be an integer from 10 to 1024.</p> <p><b>SQL Server</b></p> <p>
     * Constraints: Must be an integer from 200 to 1024 (Standard Edition and
     * Enterprise Edition) or from 30 to 1024 (Express Edition and Web Edition)</p>
     */
    inline void SetAllocatedStorage(long value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p> The amount of storage (in gigabytes) to be initially allocated for the
     * database instance. </p> <p><b>MySQL</b></p> <p> Constraints: Must be an integer
     * from 5 to 1024.</p> <p> Type: Integer</p> <p><b>Oracle</b></p> <p> Constraints:
     * Must be an integer from 10 to 1024.</p> <p><b>SQL Server</b></p> <p>
     * Constraints: Must be an integer from 200 to 1024 (Standard Edition and
     * Enterprise Edition) or from 30 to 1024 (Express Edition and Web Edition)</p>
     */
    inline CreateDBInstanceRequest& WithAllocatedStorage(long value) { SetAllocatedStorage(value); return *this;}

    /**
     * <p> The compute and memory capacity of the DB Instance. </p> <p> Valid Values:
     * <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge |
     * db.m2.xlarge |db.m2.2xlarge | db.m2.4xlarge</code> </p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p> The compute and memory capacity of the DB Instance. </p> <p> Valid Values:
     * <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge |
     * db.m2.xlarge |db.m2.2xlarge | db.m2.4xlarge</code> </p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p> The compute and memory capacity of the DB Instance. </p> <p> Valid Values:
     * <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge |
     * db.m2.xlarge |db.m2.2xlarge | db.m2.4xlarge</code> </p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p> The compute and memory capacity of the DB Instance. </p> <p> Valid Values:
     * <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge |
     * db.m2.xlarge |db.m2.2xlarge | db.m2.4xlarge</code> </p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p> The compute and memory capacity of the DB Instance. </p> <p> Valid Values:
     * <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge |
     * db.m2.xlarge |db.m2.2xlarge | db.m2.4xlarge</code> </p>
     */
    inline CreateDBInstanceRequest& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p> The compute and memory capacity of the DB Instance. </p> <p> Valid Values:
     * <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge |
     * db.m2.xlarge |db.m2.2xlarge | db.m2.4xlarge</code> </p>
     */
    inline CreateDBInstanceRequest& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p> The compute and memory capacity of the DB Instance. </p> <p> Valid Values:
     * <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge |
     * db.m2.xlarge |db.m2.2xlarge | db.m2.4xlarge</code> </p>
     */
    inline CreateDBInstanceRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p> The name of the database engine to be used for this instance. </p> <p> Valid
     * Values: <code>MySQL</code> | <code>oracle-se1</code> | <code>oracle-se</code> |
     * <code>oracle-ee</code> | <code>sqlserver-ee</code> | <code>sqlserver-se</code> |
     * <code>sqlserver-ex</code> | <code>sqlserver-web</code> </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p> The name of the database engine to be used for this instance. </p> <p> Valid
     * Values: <code>MySQL</code> | <code>oracle-se1</code> | <code>oracle-se</code> |
     * <code>oracle-ee</code> | <code>sqlserver-ee</code> | <code>sqlserver-se</code> |
     * <code>sqlserver-ex</code> | <code>sqlserver-web</code> </p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p> The name of the database engine to be used for this instance. </p> <p> Valid
     * Values: <code>MySQL</code> | <code>oracle-se1</code> | <code>oracle-se</code> |
     * <code>oracle-ee</code> | <code>sqlserver-ee</code> | <code>sqlserver-se</code> |
     * <code>sqlserver-ex</code> | <code>sqlserver-web</code> </p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p> The name of the database engine to be used for this instance. </p> <p> Valid
     * Values: <code>MySQL</code> | <code>oracle-se1</code> | <code>oracle-se</code> |
     * <code>oracle-ee</code> | <code>sqlserver-ee</code> | <code>sqlserver-se</code> |
     * <code>sqlserver-ex</code> | <code>sqlserver-web</code> </p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p> The name of the database engine to be used for this instance. </p> <p> Valid
     * Values: <code>MySQL</code> | <code>oracle-se1</code> | <code>oracle-se</code> |
     * <code>oracle-ee</code> | <code>sqlserver-ee</code> | <code>sqlserver-se</code> |
     * <code>sqlserver-ex</code> | <code>sqlserver-web</code> </p>
     */
    inline CreateDBInstanceRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p> The name of the database engine to be used for this instance. </p> <p> Valid
     * Values: <code>MySQL</code> | <code>oracle-se1</code> | <code>oracle-se</code> |
     * <code>oracle-ee</code> | <code>sqlserver-ee</code> | <code>sqlserver-se</code> |
     * <code>sqlserver-ex</code> | <code>sqlserver-web</code> </p>
     */
    inline CreateDBInstanceRequest& WithEngine(Aws::String&& value) { SetEngine(value); return *this;}

    /**
     * <p> The name of the database engine to be used for this instance. </p> <p> Valid
     * Values: <code>MySQL</code> | <code>oracle-se1</code> | <code>oracle-se</code> |
     * <code>oracle-ee</code> | <code>sqlserver-ee</code> | <code>sqlserver-se</code> |
     * <code>sqlserver-ex</code> | <code>sqlserver-web</code> </p>
     */
    inline CreateDBInstanceRequest& WithEngine(const char* value) { SetEngine(value); return *this;}

    /**
     * <p> The name of master user for the client DB Instance. </p> <p><b>MySQL</b></p>
     * <p>Constraints:</p> <ul> <li>Must be 1 to 16 alphanumeric characters.</li>
     * <li>First character must be a letter.</li> <li>Cannot be a reserved word for the
     * chosen database engine.</li> </ul> <p>Type: String</p> <p><b>Oracle</b></p>
     * <p>Constraints:</p> <ul> <li>Must be 1 to 30 alphanumeric characters.</li>
     * <li>First character must be a letter.</li> <li>Cannot be a reserved word for the
     * chosen database engine.</li> </ul> <p><b>SQL Server</b></p> <p>Constraints:</p>
     * <ul> <li>Must be 1 to 128 alphanumeric characters.</li> <li>First character must
     * be a letter.</li> <li>Cannot be a reserved word for the chosen database
     * engine.</li> </ul>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /**
     * <p> The name of master user for the client DB Instance. </p> <p><b>MySQL</b></p>
     * <p>Constraints:</p> <ul> <li>Must be 1 to 16 alphanumeric characters.</li>
     * <li>First character must be a letter.</li> <li>Cannot be a reserved word for the
     * chosen database engine.</li> </ul> <p>Type: String</p> <p><b>Oracle</b></p>
     * <p>Constraints:</p> <ul> <li>Must be 1 to 30 alphanumeric characters.</li>
     * <li>First character must be a letter.</li> <li>Cannot be a reserved word for the
     * chosen database engine.</li> </ul> <p><b>SQL Server</b></p> <p>Constraints:</p>
     * <ul> <li>Must be 1 to 128 alphanumeric characters.</li> <li>First character must
     * be a letter.</li> <li>Cannot be a reserved word for the chosen database
     * engine.</li> </ul>
     */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p> The name of master user for the client DB Instance. </p> <p><b>MySQL</b></p>
     * <p>Constraints:</p> <ul> <li>Must be 1 to 16 alphanumeric characters.</li>
     * <li>First character must be a letter.</li> <li>Cannot be a reserved word for the
     * chosen database engine.</li> </ul> <p>Type: String</p> <p><b>Oracle</b></p>
     * <p>Constraints:</p> <ul> <li>Must be 1 to 30 alphanumeric characters.</li>
     * <li>First character must be a letter.</li> <li>Cannot be a reserved word for the
     * chosen database engine.</li> </ul> <p><b>SQL Server</b></p> <p>Constraints:</p>
     * <ul> <li>Must be 1 to 128 alphanumeric characters.</li> <li>First character must
     * be a letter.</li> <li>Cannot be a reserved word for the chosen database
     * engine.</li> </ul>
     */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p> The name of master user for the client DB Instance. </p> <p><b>MySQL</b></p>
     * <p>Constraints:</p> <ul> <li>Must be 1 to 16 alphanumeric characters.</li>
     * <li>First character must be a letter.</li> <li>Cannot be a reserved word for the
     * chosen database engine.</li> </ul> <p>Type: String</p> <p><b>Oracle</b></p>
     * <p>Constraints:</p> <ul> <li>Must be 1 to 30 alphanumeric characters.</li>
     * <li>First character must be a letter.</li> <li>Cannot be a reserved word for the
     * chosen database engine.</li> </ul> <p><b>SQL Server</b></p> <p>Constraints:</p>
     * <ul> <li>Must be 1 to 128 alphanumeric characters.</li> <li>First character must
     * be a letter.</li> <li>Cannot be a reserved word for the chosen database
     * engine.</li> </ul>
     */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /**
     * <p> The name of master user for the client DB Instance. </p> <p><b>MySQL</b></p>
     * <p>Constraints:</p> <ul> <li>Must be 1 to 16 alphanumeric characters.</li>
     * <li>First character must be a letter.</li> <li>Cannot be a reserved word for the
     * chosen database engine.</li> </ul> <p>Type: String</p> <p><b>Oracle</b></p>
     * <p>Constraints:</p> <ul> <li>Must be 1 to 30 alphanumeric characters.</li>
     * <li>First character must be a letter.</li> <li>Cannot be a reserved word for the
     * chosen database engine.</li> </ul> <p><b>SQL Server</b></p> <p>Constraints:</p>
     * <ul> <li>Must be 1 to 128 alphanumeric characters.</li> <li>First character must
     * be a letter.</li> <li>Cannot be a reserved word for the chosen database
     * engine.</li> </ul>
     */
    inline CreateDBInstanceRequest& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /**
     * <p> The name of master user for the client DB Instance. </p> <p><b>MySQL</b></p>
     * <p>Constraints:</p> <ul> <li>Must be 1 to 16 alphanumeric characters.</li>
     * <li>First character must be a letter.</li> <li>Cannot be a reserved word for the
     * chosen database engine.</li> </ul> <p>Type: String</p> <p><b>Oracle</b></p>
     * <p>Constraints:</p> <ul> <li>Must be 1 to 30 alphanumeric characters.</li>
     * <li>First character must be a letter.</li> <li>Cannot be a reserved word for the
     * chosen database engine.</li> </ul> <p><b>SQL Server</b></p> <p>Constraints:</p>
     * <ul> <li>Must be 1 to 128 alphanumeric characters.</li> <li>First character must
     * be a letter.</li> <li>Cannot be a reserved word for the chosen database
     * engine.</li> </ul>
     */
    inline CreateDBInstanceRequest& WithMasterUsername(Aws::String&& value) { SetMasterUsername(value); return *this;}

    /**
     * <p> The name of master user for the client DB Instance. </p> <p><b>MySQL</b></p>
     * <p>Constraints:</p> <ul> <li>Must be 1 to 16 alphanumeric characters.</li>
     * <li>First character must be a letter.</li> <li>Cannot be a reserved word for the
     * chosen database engine.</li> </ul> <p>Type: String</p> <p><b>Oracle</b></p>
     * <p>Constraints:</p> <ul> <li>Must be 1 to 30 alphanumeric characters.</li>
     * <li>First character must be a letter.</li> <li>Cannot be a reserved word for the
     * chosen database engine.</li> </ul> <p><b>SQL Server</b></p> <p>Constraints:</p>
     * <ul> <li>Must be 1 to 128 alphanumeric characters.</li> <li>First character must
     * be a letter.</li> <li>Cannot be a reserved word for the chosen database
     * engine.</li> </ul>
     */
    inline CreateDBInstanceRequest& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}

    /**
     * <p> The password for the master database user. Can be any printable ASCII
     * character except "/", "\", or "@". </p> <p>Type: String</p> <p><b>MySQL</b></p>
     * <p> Constraints: Must contain from 8 to 41 alphanumeric characters. </p>
     * <p><b>Oracle</b></p> <p> Constraints: Must contain from 8 to 30 alphanumeric
     * characters. </p> <p><b>SQL Server</b></p> <p> Constraints: Must contain from 8
     * to 128 alphanumeric characters. </p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p> The password for the master database user. Can be any printable ASCII
     * character except "/", "\", or "@". </p> <p>Type: String</p> <p><b>MySQL</b></p>
     * <p> Constraints: Must contain from 8 to 41 alphanumeric characters. </p>
     * <p><b>Oracle</b></p> <p> Constraints: Must contain from 8 to 30 alphanumeric
     * characters. </p> <p><b>SQL Server</b></p> <p> Constraints: Must contain from 8
     * to 128 alphanumeric characters. </p>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p> The password for the master database user. Can be any printable ASCII
     * character except "/", "\", or "@". </p> <p>Type: String</p> <p><b>MySQL</b></p>
     * <p> Constraints: Must contain from 8 to 41 alphanumeric characters. </p>
     * <p><b>Oracle</b></p> <p> Constraints: Must contain from 8 to 30 alphanumeric
     * characters. </p> <p><b>SQL Server</b></p> <p> Constraints: Must contain from 8
     * to 128 alphanumeric characters. </p>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p> The password for the master database user. Can be any printable ASCII
     * character except "/", "\", or "@". </p> <p>Type: String</p> <p><b>MySQL</b></p>
     * <p> Constraints: Must contain from 8 to 41 alphanumeric characters. </p>
     * <p><b>Oracle</b></p> <p> Constraints: Must contain from 8 to 30 alphanumeric
     * characters. </p> <p><b>SQL Server</b></p> <p> Constraints: Must contain from 8
     * to 128 alphanumeric characters. </p>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p> The password for the master database user. Can be any printable ASCII
     * character except "/", "\", or "@". </p> <p>Type: String</p> <p><b>MySQL</b></p>
     * <p> Constraints: Must contain from 8 to 41 alphanumeric characters. </p>
     * <p><b>Oracle</b></p> <p> Constraints: Must contain from 8 to 30 alphanumeric
     * characters. </p> <p><b>SQL Server</b></p> <p> Constraints: Must contain from 8
     * to 128 alphanumeric characters. </p>
     */
    inline CreateDBInstanceRequest& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p> The password for the master database user. Can be any printable ASCII
     * character except "/", "\", or "@". </p> <p>Type: String</p> <p><b>MySQL</b></p>
     * <p> Constraints: Must contain from 8 to 41 alphanumeric characters. </p>
     * <p><b>Oracle</b></p> <p> Constraints: Must contain from 8 to 30 alphanumeric
     * characters. </p> <p><b>SQL Server</b></p> <p> Constraints: Must contain from 8
     * to 128 alphanumeric characters. </p>
     */
    inline CreateDBInstanceRequest& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p> The password for the master database user. Can be any printable ASCII
     * character except "/", "\", or "@". </p> <p>Type: String</p> <p><b>MySQL</b></p>
     * <p> Constraints: Must contain from 8 to 41 alphanumeric characters. </p>
     * <p><b>Oracle</b></p> <p> Constraints: Must contain from 8 to 30 alphanumeric
     * characters. </p> <p><b>SQL Server</b></p> <p> Constraints: Must contain from 8
     * to 128 alphanumeric characters. </p>
     */
    inline CreateDBInstanceRequest& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p> A list of DB Security Groups to associate with this DB Instance. </p> <p>
     * Default: The default DB Security Group for the database engine. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDBSecurityGroups() const{ return m_dBSecurityGroups; }

    /**
     * <p> A list of DB Security Groups to associate with this DB Instance. </p> <p>
     * Default: The default DB Security Group for the database engine. </p>
     */
    inline void SetDBSecurityGroups(const Aws::Vector<Aws::String>& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = value; }

    /**
     * <p> A list of DB Security Groups to associate with this DB Instance. </p> <p>
     * Default: The default DB Security Group for the database engine. </p>
     */
    inline void SetDBSecurityGroups(Aws::Vector<Aws::String>&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = value; }

    /**
     * <p> A list of DB Security Groups to associate with this DB Instance. </p> <p>
     * Default: The default DB Security Group for the database engine. </p>
     */
    inline CreateDBInstanceRequest& WithDBSecurityGroups(const Aws::Vector<Aws::String>& value) { SetDBSecurityGroups(value); return *this;}

    /**
     * <p> A list of DB Security Groups to associate with this DB Instance. </p> <p>
     * Default: The default DB Security Group for the database engine. </p>
     */
    inline CreateDBInstanceRequest& WithDBSecurityGroups(Aws::Vector<Aws::String>&& value) { SetDBSecurityGroups(value); return *this;}

    /**
     * <p> A list of DB Security Groups to associate with this DB Instance. </p> <p>
     * Default: The default DB Security Group for the database engine. </p>
     */
    inline CreateDBInstanceRequest& AddDBSecurityGroups(const Aws::String& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }

    /**
     * <p> A list of DB Security Groups to associate with this DB Instance. </p> <p>
     * Default: The default DB Security Group for the database engine. </p>
     */
    inline CreateDBInstanceRequest& AddDBSecurityGroups(Aws::String&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }

    /**
     * <p> A list of DB Security Groups to associate with this DB Instance. </p> <p>
     * Default: The default DB Security Group for the database engine. </p>
     */
    inline CreateDBInstanceRequest& AddDBSecurityGroups(const char* value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }

    /**
     * <p> A list of EC2 VPC Security Groups to associate with this DB Instance. </p>
     * <p> Default: The default EC2 VPC Security Group for the DB Subnet group's VPC.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p> A list of EC2 VPC Security Groups to associate with this DB Instance. </p>
     * <p> Default: The default EC2 VPC Security Group for the DB Subnet group's VPC.
     * </p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p> A list of EC2 VPC Security Groups to associate with this DB Instance. </p>
     * <p> Default: The default EC2 VPC Security Group for the DB Subnet group's VPC.
     * </p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p> A list of EC2 VPC Security Groups to associate with this DB Instance. </p>
     * <p> Default: The default EC2 VPC Security Group for the DB Subnet group's VPC.
     * </p>
     */
    inline CreateDBInstanceRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p> A list of EC2 VPC Security Groups to associate with this DB Instance. </p>
     * <p> Default: The default EC2 VPC Security Group for the DB Subnet group's VPC.
     * </p>
     */
    inline CreateDBInstanceRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p> A list of EC2 VPC Security Groups to associate with this DB Instance. </p>
     * <p> Default: The default EC2 VPC Security Group for the DB Subnet group's VPC.
     * </p>
     */
    inline CreateDBInstanceRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p> A list of EC2 VPC Security Groups to associate with this DB Instance. </p>
     * <p> Default: The default EC2 VPC Security Group for the DB Subnet group's VPC.
     * </p>
     */
    inline CreateDBInstanceRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p> A list of EC2 VPC Security Groups to associate with this DB Instance. </p>
     * <p> Default: The default EC2 VPC Security Group for the DB Subnet group's VPC.
     * </p>
     */
    inline CreateDBInstanceRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p> The EC2 Availability Zone that the database instance will be created in.
     * </p> <p> Default: A random, system-chosen Availability Zone in the endpoint's
     * region. </p> <p> Example: <code>us-east-1d</code> </p> <p> Constraint: The
     * AvailabilityZone parameter cannot be specified if the MultiAZ parameter is set
     * to <code>true</code>. The specified Availability Zone must be in the same region
     * as the current endpoint. </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p> The EC2 Availability Zone that the database instance will be created in.
     * </p> <p> Default: A random, system-chosen Availability Zone in the endpoint's
     * region. </p> <p> Example: <code>us-east-1d</code> </p> <p> Constraint: The
     * AvailabilityZone parameter cannot be specified if the MultiAZ parameter is set
     * to <code>true</code>. The specified Availability Zone must be in the same region
     * as the current endpoint. </p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p> The EC2 Availability Zone that the database instance will be created in.
     * </p> <p> Default: A random, system-chosen Availability Zone in the endpoint's
     * region. </p> <p> Example: <code>us-east-1d</code> </p> <p> Constraint: The
     * AvailabilityZone parameter cannot be specified if the MultiAZ parameter is set
     * to <code>true</code>. The specified Availability Zone must be in the same region
     * as the current endpoint. </p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p> The EC2 Availability Zone that the database instance will be created in.
     * </p> <p> Default: A random, system-chosen Availability Zone in the endpoint's
     * region. </p> <p> Example: <code>us-east-1d</code> </p> <p> Constraint: The
     * AvailabilityZone parameter cannot be specified if the MultiAZ parameter is set
     * to <code>true</code>. The specified Availability Zone must be in the same region
     * as the current endpoint. </p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p> The EC2 Availability Zone that the database instance will be created in.
     * </p> <p> Default: A random, system-chosen Availability Zone in the endpoint's
     * region. </p> <p> Example: <code>us-east-1d</code> </p> <p> Constraint: The
     * AvailabilityZone parameter cannot be specified if the MultiAZ parameter is set
     * to <code>true</code>. The specified Availability Zone must be in the same region
     * as the current endpoint. </p>
     */
    inline CreateDBInstanceRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p> The EC2 Availability Zone that the database instance will be created in.
     * </p> <p> Default: A random, system-chosen Availability Zone in the endpoint's
     * region. </p> <p> Example: <code>us-east-1d</code> </p> <p> Constraint: The
     * AvailabilityZone parameter cannot be specified if the MultiAZ parameter is set
     * to <code>true</code>. The specified Availability Zone must be in the same region
     * as the current endpoint. </p>
     */
    inline CreateDBInstanceRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p> The EC2 Availability Zone that the database instance will be created in.
     * </p> <p> Default: A random, system-chosen Availability Zone in the endpoint's
     * region. </p> <p> Example: <code>us-east-1d</code> </p> <p> Constraint: The
     * AvailabilityZone parameter cannot be specified if the MultiAZ parameter is set
     * to <code>true</code>. The specified Availability Zone must be in the same region
     * as the current endpoint. </p>
     */
    inline CreateDBInstanceRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p> A DB Subnet Group to associate with this DB Instance. </p> <p> If there is
     * no DB Subnet Group, then it is a non-VPC DB instance. </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p> A DB Subnet Group to associate with this DB Instance. </p> <p> If there is
     * no DB Subnet Group, then it is a non-VPC DB instance. </p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p> A DB Subnet Group to associate with this DB Instance. </p> <p> If there is
     * no DB Subnet Group, then it is a non-VPC DB instance. </p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p> A DB Subnet Group to associate with this DB Instance. </p> <p> If there is
     * no DB Subnet Group, then it is a non-VPC DB instance. </p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p> A DB Subnet Group to associate with this DB Instance. </p> <p> If there is
     * no DB Subnet Group, then it is a non-VPC DB instance. </p>
     */
    inline CreateDBInstanceRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p> A DB Subnet Group to associate with this DB Instance. </p> <p> If there is
     * no DB Subnet Group, then it is a non-VPC DB instance. </p>
     */
    inline CreateDBInstanceRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p> A DB Subnet Group to associate with this DB Instance. </p> <p> If there is
     * no DB Subnet Group, then it is a non-VPC DB instance. </p>
     */
    inline CreateDBInstanceRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p> The weekly time range (in UTC) during which system maintenance can occur.
     * </p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> Default: A
     * 30-minute window selected at random from an 8-hour block of time per region,
     * occurring on a random day of the week. The following list shows the time blocks
     * for each region from which the default maintenance windows are assigned. </p>
     * <ul> <li> <b>US-East (Northern Virginia) Region:</b> 03:00-11:00 UTC</li> <li>
     * <b>US-West (Northern California) Region:</b> 06:00-14:00 UTC</li> <li> <b>EU
     * (Ireland) Region:</b> 22:00-06:00 UTC</li> <li> <b>Asia Pacific (Singapore)
     * Region:</b> 14:00-22:00 UTC</li> <li> <b>Asia Pacific (Tokyo) Region: </b>
     * 17:00-03:00 UTC</li> </ul> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p> The weekly time range (in UTC) during which system maintenance can occur.
     * </p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> Default: A
     * 30-minute window selected at random from an 8-hour block of time per region,
     * occurring on a random day of the week. The following list shows the time blocks
     * for each region from which the default maintenance windows are assigned. </p>
     * <ul> <li> <b>US-East (Northern Virginia) Region:</b> 03:00-11:00 UTC</li> <li>
     * <b>US-West (Northern California) Region:</b> 06:00-14:00 UTC</li> <li> <b>EU
     * (Ireland) Region:</b> 22:00-06:00 UTC</li> <li> <b>Asia Pacific (Singapore)
     * Region:</b> 14:00-22:00 UTC</li> <li> <b>Asia Pacific (Tokyo) Region: </b>
     * 17:00-03:00 UTC</li> </ul> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p> The weekly time range (in UTC) during which system maintenance can occur.
     * </p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> Default: A
     * 30-minute window selected at random from an 8-hour block of time per region,
     * occurring on a random day of the week. The following list shows the time blocks
     * for each region from which the default maintenance windows are assigned. </p>
     * <ul> <li> <b>US-East (Northern Virginia) Region:</b> 03:00-11:00 UTC</li> <li>
     * <b>US-West (Northern California) Region:</b> 06:00-14:00 UTC</li> <li> <b>EU
     * (Ireland) Region:</b> 22:00-06:00 UTC</li> <li> <b>Asia Pacific (Singapore)
     * Region:</b> 14:00-22:00 UTC</li> <li> <b>Asia Pacific (Tokyo) Region: </b>
     * 17:00-03:00 UTC</li> </ul> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p> The weekly time range (in UTC) during which system maintenance can occur.
     * </p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> Default: A
     * 30-minute window selected at random from an 8-hour block of time per region,
     * occurring on a random day of the week. The following list shows the time blocks
     * for each region from which the default maintenance windows are assigned. </p>
     * <ul> <li> <b>US-East (Northern Virginia) Region:</b> 03:00-11:00 UTC</li> <li>
     * <b>US-West (Northern California) Region:</b> 06:00-14:00 UTC</li> <li> <b>EU
     * (Ireland) Region:</b> 22:00-06:00 UTC</li> <li> <b>Asia Pacific (Singapore)
     * Region:</b> 14:00-22:00 UTC</li> <li> <b>Asia Pacific (Tokyo) Region: </b>
     * 17:00-03:00 UTC</li> </ul> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p> The weekly time range (in UTC) during which system maintenance can occur.
     * </p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> Default: A
     * 30-minute window selected at random from an 8-hour block of time per region,
     * occurring on a random day of the week. The following list shows the time blocks
     * for each region from which the default maintenance windows are assigned. </p>
     * <ul> <li> <b>US-East (Northern Virginia) Region:</b> 03:00-11:00 UTC</li> <li>
     * <b>US-West (Northern California) Region:</b> 06:00-14:00 UTC</li> <li> <b>EU
     * (Ireland) Region:</b> 22:00-06:00 UTC</li> <li> <b>Asia Pacific (Singapore)
     * Region:</b> 14:00-22:00 UTC</li> <li> <b>Asia Pacific (Tokyo) Region: </b>
     * 17:00-03:00 UTC</li> </ul> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline CreateDBInstanceRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p> The weekly time range (in UTC) during which system maintenance can occur.
     * </p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> Default: A
     * 30-minute window selected at random from an 8-hour block of time per region,
     * occurring on a random day of the week. The following list shows the time blocks
     * for each region from which the default maintenance windows are assigned. </p>
     * <ul> <li> <b>US-East (Northern Virginia) Region:</b> 03:00-11:00 UTC</li> <li>
     * <b>US-West (Northern California) Region:</b> 06:00-14:00 UTC</li> <li> <b>EU
     * (Ireland) Region:</b> 22:00-06:00 UTC</li> <li> <b>Asia Pacific (Singapore)
     * Region:</b> 14:00-22:00 UTC</li> <li> <b>Asia Pacific (Tokyo) Region: </b>
     * 17:00-03:00 UTC</li> </ul> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline CreateDBInstanceRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p> The weekly time range (in UTC) during which system maintenance can occur.
     * </p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> Default: A
     * 30-minute window selected at random from an 8-hour block of time per region,
     * occurring on a random day of the week. The following list shows the time blocks
     * for each region from which the default maintenance windows are assigned. </p>
     * <ul> <li> <b>US-East (Northern Virginia) Region:</b> 03:00-11:00 UTC</li> <li>
     * <b>US-West (Northern California) Region:</b> 06:00-14:00 UTC</li> <li> <b>EU
     * (Ireland) Region:</b> 22:00-06:00 UTC</li> <li> <b>Asia Pacific (Singapore)
     * Region:</b> 14:00-22:00 UTC</li> <li> <b>Asia Pacific (Tokyo) Region: </b>
     * 17:00-03:00 UTC</li> </ul> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline CreateDBInstanceRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p> The name of the DB Parameter Group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * will be used. </p> <p> Constraints: </p> <ul> <li>Must be 1 to 255 alphanumeric
     * characters</li> <li>First character must be a letter</li> <li>Cannot end with a
     * hyphen or contain two consecutive hyphens</li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }

    /**
     * <p> The name of the DB Parameter Group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * will be used. </p> <p> Constraints: </p> <ul> <li>Must be 1 to 255 alphanumeric
     * characters</li> <li>First character must be a letter</li> <li>Cannot end with a
     * hyphen or contain two consecutive hyphens</li> </ul>
     */
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }

    /**
     * <p> The name of the DB Parameter Group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * will be used. </p> <p> Constraints: </p> <ul> <li>Must be 1 to 255 alphanumeric
     * characters</li> <li>First character must be a letter</li> <li>Cannot end with a
     * hyphen or contain two consecutive hyphens</li> </ul>
     */
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }

    /**
     * <p> The name of the DB Parameter Group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * will be used. </p> <p> Constraints: </p> <ul> <li>Must be 1 to 255 alphanumeric
     * characters</li> <li>First character must be a letter</li> <li>Cannot end with a
     * hyphen or contain two consecutive hyphens</li> </ul>
     */
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }

    /**
     * <p> The name of the DB Parameter Group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * will be used. </p> <p> Constraints: </p> <ul> <li>Must be 1 to 255 alphanumeric
     * characters</li> <li>First character must be a letter</li> <li>Cannot end with a
     * hyphen or contain two consecutive hyphens</li> </ul>
     */
    inline CreateDBInstanceRequest& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}

    /**
     * <p> The name of the DB Parameter Group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * will be used. </p> <p> Constraints: </p> <ul> <li>Must be 1 to 255 alphanumeric
     * characters</li> <li>First character must be a letter</li> <li>Cannot end with a
     * hyphen or contain two consecutive hyphens</li> </ul>
     */
    inline CreateDBInstanceRequest& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(value); return *this;}

    /**
     * <p> The name of the DB Parameter Group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * will be used. </p> <p> Constraints: </p> <ul> <li>Must be 1 to 255 alphanumeric
     * characters</li> <li>First character must be a letter</li> <li>Cannot end with a
     * hyphen or contain two consecutive hyphens</li> </ul>
     */
    inline CreateDBInstanceRequest& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}

    /**
     * <p> The number of days for which automated backups are retained. Setting this
     * parameter to a positive number enables backups. Setting this parameter to 0
     * disables automated backups. </p> <p> Default: 1 </p> <p>Constraints:</p> <ul>
     * <li>Must be a value from 0 to 8</li> <li>Cannot be set to 0 if the DB Instance
     * is a master instance with read replicas</li> </ul>
     */
    inline long GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }

    /**
     * <p> The number of days for which automated backups are retained. Setting this
     * parameter to a positive number enables backups. Setting this parameter to 0
     * disables automated backups. </p> <p> Default: 1 </p> <p>Constraints:</p> <ul>
     * <li>Must be a value from 0 to 8</li> <li>Cannot be set to 0 if the DB Instance
     * is a master instance with read replicas</li> </ul>
     */
    inline void SetBackupRetentionPeriod(long value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /**
     * <p> The number of days for which automated backups are retained. Setting this
     * parameter to a positive number enables backups. Setting this parameter to 0
     * disables automated backups. </p> <p> Default: 1 </p> <p>Constraints:</p> <ul>
     * <li>Must be a value from 0 to 8</li> <li>Cannot be set to 0 if the DB Instance
     * is a master instance with read replicas</li> </ul>
     */
    inline CreateDBInstanceRequest& WithBackupRetentionPeriod(long value) { SetBackupRetentionPeriod(value); return *this;}

    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter.
     * </p> <p> Default: A 30-minute window selected at random from an 8-hour block of
     * time per region. The following list shows the time blocks for each region from
     * which the default backup windows are assigned. </p> <ul> <li> <b>US-East
     * (Northern Virginia) Region:</b> 03:00-11:00 UTC</li> <li> <b>US-West (Northern
     * California) Region:</b> 06:00-14:00 UTC</li> <li> <b>EU (Ireland) Region:</b>
     * 22:00-06:00 UTC</li> <li> <b>Asia Pacific (Singapore) Region:</b> 14:00-22:00
     * UTC</li> <li> <b>Asia Pacific (Tokyo) Region: </b> 17:00-03:00 UTC</li> </ul>
     * <p> Constraints: Must be in the format <code>hh24:mi-hh24:mi</code>. Times
     * should be Universal Time Coordinated (UTC). Must not conflict with the preferred
     * maintenance window. Must be at least 30 minutes. </p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter.
     * </p> <p> Default: A 30-minute window selected at random from an 8-hour block of
     * time per region. The following list shows the time blocks for each region from
     * which the default backup windows are assigned. </p> <ul> <li> <b>US-East
     * (Northern Virginia) Region:</b> 03:00-11:00 UTC</li> <li> <b>US-West (Northern
     * California) Region:</b> 06:00-14:00 UTC</li> <li> <b>EU (Ireland) Region:</b>
     * 22:00-06:00 UTC</li> <li> <b>Asia Pacific (Singapore) Region:</b> 14:00-22:00
     * UTC</li> <li> <b>Asia Pacific (Tokyo) Region: </b> 17:00-03:00 UTC</li> </ul>
     * <p> Constraints: Must be in the format <code>hh24:mi-hh24:mi</code>. Times
     * should be Universal Time Coordinated (UTC). Must not conflict with the preferred
     * maintenance window. Must be at least 30 minutes. </p>
     */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter.
     * </p> <p> Default: A 30-minute window selected at random from an 8-hour block of
     * time per region. The following list shows the time blocks for each region from
     * which the default backup windows are assigned. </p> <ul> <li> <b>US-East
     * (Northern Virginia) Region:</b> 03:00-11:00 UTC</li> <li> <b>US-West (Northern
     * California) Region:</b> 06:00-14:00 UTC</li> <li> <b>EU (Ireland) Region:</b>
     * 22:00-06:00 UTC</li> <li> <b>Asia Pacific (Singapore) Region:</b> 14:00-22:00
     * UTC</li> <li> <b>Asia Pacific (Tokyo) Region: </b> 17:00-03:00 UTC</li> </ul>
     * <p> Constraints: Must be in the format <code>hh24:mi-hh24:mi</code>. Times
     * should be Universal Time Coordinated (UTC). Must not conflict with the preferred
     * maintenance window. Must be at least 30 minutes. </p>
     */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter.
     * </p> <p> Default: A 30-minute window selected at random from an 8-hour block of
     * time per region. The following list shows the time blocks for each region from
     * which the default backup windows are assigned. </p> <ul> <li> <b>US-East
     * (Northern Virginia) Region:</b> 03:00-11:00 UTC</li> <li> <b>US-West (Northern
     * California) Region:</b> 06:00-14:00 UTC</li> <li> <b>EU (Ireland) Region:</b>
     * 22:00-06:00 UTC</li> <li> <b>Asia Pacific (Singapore) Region:</b> 14:00-22:00
     * UTC</li> <li> <b>Asia Pacific (Tokyo) Region: </b> 17:00-03:00 UTC</li> </ul>
     * <p> Constraints: Must be in the format <code>hh24:mi-hh24:mi</code>. Times
     * should be Universal Time Coordinated (UTC). Must not conflict with the preferred
     * maintenance window. Must be at least 30 minutes. </p>
     */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter.
     * </p> <p> Default: A 30-minute window selected at random from an 8-hour block of
     * time per region. The following list shows the time blocks for each region from
     * which the default backup windows are assigned. </p> <ul> <li> <b>US-East
     * (Northern Virginia) Region:</b> 03:00-11:00 UTC</li> <li> <b>US-West (Northern
     * California) Region:</b> 06:00-14:00 UTC</li> <li> <b>EU (Ireland) Region:</b>
     * 22:00-06:00 UTC</li> <li> <b>Asia Pacific (Singapore) Region:</b> 14:00-22:00
     * UTC</li> <li> <b>Asia Pacific (Tokyo) Region: </b> 17:00-03:00 UTC</li> </ul>
     * <p> Constraints: Must be in the format <code>hh24:mi-hh24:mi</code>. Times
     * should be Universal Time Coordinated (UTC). Must not conflict with the preferred
     * maintenance window. Must be at least 30 minutes. </p>
     */
    inline CreateDBInstanceRequest& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter.
     * </p> <p> Default: A 30-minute window selected at random from an 8-hour block of
     * time per region. The following list shows the time blocks for each region from
     * which the default backup windows are assigned. </p> <ul> <li> <b>US-East
     * (Northern Virginia) Region:</b> 03:00-11:00 UTC</li> <li> <b>US-West (Northern
     * California) Region:</b> 06:00-14:00 UTC</li> <li> <b>EU (Ireland) Region:</b>
     * 22:00-06:00 UTC</li> <li> <b>Asia Pacific (Singapore) Region:</b> 14:00-22:00
     * UTC</li> <li> <b>Asia Pacific (Tokyo) Region: </b> 17:00-03:00 UTC</li> </ul>
     * <p> Constraints: Must be in the format <code>hh24:mi-hh24:mi</code>. Times
     * should be Universal Time Coordinated (UTC). Must not conflict with the preferred
     * maintenance window. Must be at least 30 minutes. </p>
     */
    inline CreateDBInstanceRequest& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter.
     * </p> <p> Default: A 30-minute window selected at random from an 8-hour block of
     * time per region. The following list shows the time blocks for each region from
     * which the default backup windows are assigned. </p> <ul> <li> <b>US-East
     * (Northern Virginia) Region:</b> 03:00-11:00 UTC</li> <li> <b>US-West (Northern
     * California) Region:</b> 06:00-14:00 UTC</li> <li> <b>EU (Ireland) Region:</b>
     * 22:00-06:00 UTC</li> <li> <b>Asia Pacific (Singapore) Region:</b> 14:00-22:00
     * UTC</li> <li> <b>Asia Pacific (Tokyo) Region: </b> 17:00-03:00 UTC</li> </ul>
     * <p> Constraints: Must be in the format <code>hh24:mi-hh24:mi</code>. Times
     * should be Universal Time Coordinated (UTC). Must not conflict with the preferred
     * maintenance window. Must be at least 30 minutes. </p>
     */
    inline CreateDBInstanceRequest& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p> The port number on which the database accepts connections. </p>
     * <p><b>MySQL</b></p> <p> Default: <code>3306</code> </p> <p> Valid Values:
     * <code>1150-65535</code> </p> <p>Type: Integer </p> <p><b>Oracle</b></p> <p>
     * Default: <code>1521</code> </p> <p> Valid Values: <code>1150-65535</code> </p>
     * <p><b>SQL Server</b></p> <p> Default: <code>1433</code> </p> <p> Valid Values:
     * <code>1150-65535</code> except for <code>1434</code> and <code>3389</code>. </p>
     */
    inline long GetPort() const{ return m_port; }

    /**
     * <p> The port number on which the database accepts connections. </p>
     * <p><b>MySQL</b></p> <p> Default: <code>3306</code> </p> <p> Valid Values:
     * <code>1150-65535</code> </p> <p>Type: Integer </p> <p><b>Oracle</b></p> <p>
     * Default: <code>1521</code> </p> <p> Valid Values: <code>1150-65535</code> </p>
     * <p><b>SQL Server</b></p> <p> Default: <code>1433</code> </p> <p> Valid Values:
     * <code>1150-65535</code> except for <code>1434</code> and <code>3389</code>. </p>
     */
    inline void SetPort(long value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p> The port number on which the database accepts connections. </p>
     * <p><b>MySQL</b></p> <p> Default: <code>3306</code> </p> <p> Valid Values:
     * <code>1150-65535</code> </p> <p>Type: Integer </p> <p><b>Oracle</b></p> <p>
     * Default: <code>1521</code> </p> <p> Valid Values: <code>1150-65535</code> </p>
     * <p><b>SQL Server</b></p> <p> Default: <code>1433</code> </p> <p> Valid Values:
     * <code>1150-65535</code> except for <code>1434</code> and <code>3389</code>. </p>
     */
    inline CreateDBInstanceRequest& WithPort(long value) { SetPort(value); return *this;}

    /**
     * <p> Specifies if the DB Instance is a Multi-AZ deployment. You cannot set the
     * AvailabilityZone parameter if the MultiAZ parameter is set to true. </p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p> Specifies if the DB Instance is a Multi-AZ deployment. You cannot set the
     * AvailabilityZone parameter if the MultiAZ parameter is set to true. </p>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p> Specifies if the DB Instance is a Multi-AZ deployment. You cannot set the
     * AvailabilityZone parameter if the MultiAZ parameter is set to true. </p>
     */
    inline CreateDBInstanceRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}

    /**
     * <p> The version number of the database engine to use. </p> <p><b>MySQL</b></p>
     * <p>Example: <code>5.1.42</code></p> <p>Type: String</p> <p><b>Oracle</b></p>
     * <p>Example: <code>11.2.0.2.v2</code></p> <p>Type: String</p> <p><b>SQL
     * Server</b></p> <p>Example: <code>10.50.2789.0.v1</code></p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p> The version number of the database engine to use. </p> <p><b>MySQL</b></p>
     * <p>Example: <code>5.1.42</code></p> <p>Type: String</p> <p><b>Oracle</b></p>
     * <p>Example: <code>11.2.0.2.v2</code></p> <p>Type: String</p> <p><b>SQL
     * Server</b></p> <p>Example: <code>10.50.2789.0.v1</code></p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p> The version number of the database engine to use. </p> <p><b>MySQL</b></p>
     * <p>Example: <code>5.1.42</code></p> <p>Type: String</p> <p><b>Oracle</b></p>
     * <p>Example: <code>11.2.0.2.v2</code></p> <p>Type: String</p> <p><b>SQL
     * Server</b></p> <p>Example: <code>10.50.2789.0.v1</code></p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p> The version number of the database engine to use. </p> <p><b>MySQL</b></p>
     * <p>Example: <code>5.1.42</code></p> <p>Type: String</p> <p><b>Oracle</b></p>
     * <p>Example: <code>11.2.0.2.v2</code></p> <p>Type: String</p> <p><b>SQL
     * Server</b></p> <p>Example: <code>10.50.2789.0.v1</code></p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p> The version number of the database engine to use. </p> <p><b>MySQL</b></p>
     * <p>Example: <code>5.1.42</code></p> <p>Type: String</p> <p><b>Oracle</b></p>
     * <p>Example: <code>11.2.0.2.v2</code></p> <p>Type: String</p> <p><b>SQL
     * Server</b></p> <p>Example: <code>10.50.2789.0.v1</code></p>
     */
    inline CreateDBInstanceRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p> The version number of the database engine to use. </p> <p><b>MySQL</b></p>
     * <p>Example: <code>5.1.42</code></p> <p>Type: String</p> <p><b>Oracle</b></p>
     * <p>Example: <code>11.2.0.2.v2</code></p> <p>Type: String</p> <p><b>SQL
     * Server</b></p> <p>Example: <code>10.50.2789.0.v1</code></p>
     */
    inline CreateDBInstanceRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(value); return *this;}

    /**
     * <p> The version number of the database engine to use. </p> <p><b>MySQL</b></p>
     * <p>Example: <code>5.1.42</code></p> <p>Type: String</p> <p><b>Oracle</b></p>
     * <p>Example: <code>11.2.0.2.v2</code></p> <p>Type: String</p> <p><b>SQL
     * Server</b></p> <p>Example: <code>10.50.2789.0.v1</code></p>
     */
    inline CreateDBInstanceRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}

    /**
     * <p> Indicates that minor engine upgrades will be applied automatically to the DB
     * Instance during the maintenance window. </p> <p>Default: <code>true</code></p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p> Indicates that minor engine upgrades will be applied automatically to the DB
     * Instance during the maintenance window. </p> <p>Default: <code>true</code></p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p> Indicates that minor engine upgrades will be applied automatically to the DB
     * Instance during the maintenance window. </p> <p>Default: <code>true</code></p>
     */
    inline CreateDBInstanceRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}

    /**
     * <p> License model information for this DB Instance. </p> <p> Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }

    /**
     * <p> License model information for this DB Instance. </p> <p> Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p> License model information for this DB Instance. </p> <p> Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p> License model information for this DB Instance. </p> <p> Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }

    /**
     * <p> License model information for this DB Instance. </p> <p> Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline CreateDBInstanceRequest& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /**
     * <p> License model information for this DB Instance. </p> <p> Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline CreateDBInstanceRequest& WithLicenseModel(Aws::String&& value) { SetLicenseModel(value); return *this;}

    /**
     * <p> License model information for this DB Instance. </p> <p> Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline CreateDBInstanceRequest& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}

    /**
     * <p> The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB Instance. </p> <p> Constraints: Must be an
     * integer greater than 1000.</p>
     */
    inline long GetIops() const{ return m_iops; }

    /**
     * <p> The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB Instance. </p> <p> Constraints: Must be an
     * integer greater than 1000.</p>
     */
    inline void SetIops(long value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p> The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB Instance. </p> <p> Constraints: Must be an
     * integer greater than 1000.</p>
     */
    inline CreateDBInstanceRequest& WithIops(long value) { SetIops(value); return *this;}

    /**
     * <p> Indicates that the DB Instance should be associated with the specified
     * option group. </p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p> Indicates that the DB Instance should be associated with the specified
     * option group. </p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p> Indicates that the DB Instance should be associated with the specified
     * option group. </p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p> Indicates that the DB Instance should be associated with the specified
     * option group. </p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p> Indicates that the DB Instance should be associated with the specified
     * option group. </p>
     */
    inline CreateDBInstanceRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p> Indicates that the DB Instance should be associated with the specified
     * option group. </p>
     */
    inline CreateDBInstanceRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p> Indicates that the DB Instance should be associated with the specified
     * option group. </p>
     */
    inline CreateDBInstanceRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}

    /**
     * <p> For supported engines, indicates that the DB Instance should be associated
     * with the specified CharacterSet. </p>
     */
    inline const Aws::String& GetCharacterSetName() const{ return m_characterSetName; }

    /**
     * <p> For supported engines, indicates that the DB Instance should be associated
     * with the specified CharacterSet. </p>
     */
    inline void SetCharacterSetName(const Aws::String& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = value; }

    /**
     * <p> For supported engines, indicates that the DB Instance should be associated
     * with the specified CharacterSet. </p>
     */
    inline void SetCharacterSetName(Aws::String&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = value; }

    /**
     * <p> For supported engines, indicates that the DB Instance should be associated
     * with the specified CharacterSet. </p>
     */
    inline void SetCharacterSetName(const char* value) { m_characterSetNameHasBeenSet = true; m_characterSetName.assign(value); }

    /**
     * <p> For supported engines, indicates that the DB Instance should be associated
     * with the specified CharacterSet. </p>
     */
    inline CreateDBInstanceRequest& WithCharacterSetName(const Aws::String& value) { SetCharacterSetName(value); return *this;}

    /**
     * <p> For supported engines, indicates that the DB Instance should be associated
     * with the specified CharacterSet. </p>
     */
    inline CreateDBInstanceRequest& WithCharacterSetName(Aws::String&& value) { SetCharacterSetName(value); return *this;}

    /**
     * <p> For supported engines, indicates that the DB Instance should be associated
     * with the specified CharacterSet. </p>
     */
    inline CreateDBInstanceRequest& WithCharacterSetName(const char* value) { SetCharacterSetName(value); return *this;}

    
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    
    inline CreateDBInstanceRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}

  private:
    Aws::String m_dBName;
    bool m_dBNameHasBeenSet;
    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;
    long m_allocatedStorage;
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
    long m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet;
    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet;
    long m_port;
    bool m_portHasBeenSet;
    bool m_multiAZ;
    bool m_multiAZHasBeenSet;
    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;
    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;
    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet;
    long m_iops;
    bool m_iopsHasBeenSet;
    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;
    Aws::String m_characterSetName;
    bool m_characterSetNameHasBeenSet;
    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
