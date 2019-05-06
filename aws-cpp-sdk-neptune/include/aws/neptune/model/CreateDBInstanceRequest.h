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
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class AWS_NEPTUNE_API CreateDBInstanceRequest : public NeptuneRequest
  {
  public:
    CreateDBInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBInstance"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Not supported.</p>
     */
    inline const Aws::String& GetDBName() const{ return m_dBName; }

    /**
     * <p>Not supported.</p>
     */
    inline bool DBNameHasBeenSet() const { return m_dBNameHasBeenSet; }

    /**
     * <p>Not supported.</p>
     */
    inline void SetDBName(const Aws::String& value) { m_dBNameHasBeenSet = true; m_dBName = value; }

    /**
     * <p>Not supported.</p>
     */
    inline void SetDBName(Aws::String&& value) { m_dBNameHasBeenSet = true; m_dBName = std::move(value); }

    /**
     * <p>Not supported.</p>
     */
    inline void SetDBName(const char* value) { m_dBNameHasBeenSet = true; m_dBName.assign(value); }

    /**
     * <p>Not supported.</p>
     */
    inline CreateDBInstanceRequest& WithDBName(const Aws::String& value) { SetDBName(value); return *this;}

    /**
     * <p>Not supported.</p>
     */
    inline CreateDBInstanceRequest& WithDBName(Aws::String&& value) { SetDBName(std::move(value)); return *this;}

    /**
     * <p>Not supported.</p>
     */
    inline CreateDBInstanceRequest& WithDBName(const char* value) { SetDBName(value); return *this;}


    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline CreateDBInstanceRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline CreateDBInstanceRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline CreateDBInstanceRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>The amount of storage (in gibibytes) to allocate for the DB instance.</p>
     * <p>Type: Integer</p> <p>Not applicable. Neptune cluster volumes automatically
     * grow as the amount of data in your database increases, though you are only
     * charged for the space that you use in a Neptune cluster volume.</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p>The amount of storage (in gibibytes) to allocate for the DB instance.</p>
     * <p>Type: Integer</p> <p>Not applicable. Neptune cluster volumes automatically
     * grow as the amount of data in your database increases, though you are only
     * charged for the space that you use in a Neptune cluster volume.</p>
     */
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }

    /**
     * <p>The amount of storage (in gibibytes) to allocate for the DB instance.</p>
     * <p>Type: Integer</p> <p>Not applicable. Neptune cluster volumes automatically
     * grow as the amount of data in your database increases, though you are only
     * charged for the space that you use in a Neptune cluster volume.</p>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p>The amount of storage (in gibibytes) to allocate for the DB instance.</p>
     * <p>Type: Integer</p> <p>Not applicable. Neptune cluster volumes automatically
     * grow as the amount of data in your database increases, though you are only
     * charged for the space that you use in a Neptune cluster volume.</p>
     */
    inline CreateDBInstanceRequest& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}


    /**
     * <p>The compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p>The compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions.</p>
     */
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }

    /**
     * <p>The compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions.</p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>The compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions.</p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }

    /**
     * <p>The compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions.</p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p>The compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions.</p>
     */
    inline CreateDBInstanceRequest& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions.</p>
     */
    inline CreateDBInstanceRequest& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}

    /**
     * <p>The compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions.</p>
     */
    inline CreateDBInstanceRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}


    /**
     * <p>The name of the database engine to be used for this instance.</p> <p>Valid
     * Values: <code>neptune</code> </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the database engine to be used for this instance.</p> <p>Valid
     * Values: <code>neptune</code> </p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The name of the database engine to be used for this instance.</p> <p>Valid
     * Values: <code>neptune</code> </p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the database engine to be used for this instance.</p> <p>Valid
     * Values: <code>neptune</code> </p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The name of the database engine to be used for this instance.</p> <p>Valid
     * Values: <code>neptune</code> </p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The name of the database engine to be used for this instance.</p> <p>Valid
     * Values: <code>neptune</code> </p>
     */
    inline CreateDBInstanceRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the database engine to be used for this instance.</p> <p>Valid
     * Values: <code>neptune</code> </p>
     */
    inline CreateDBInstanceRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The name of the database engine to be used for this instance.</p> <p>Valid
     * Values: <code>neptune</code> </p>
     */
    inline CreateDBInstanceRequest& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The name for the master user. Not used.</p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /**
     * <p>The name for the master user. Not used.</p>
     */
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }

    /**
     * <p>The name for the master user. Not used.</p>
     */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>The name for the master user. Not used.</p>
     */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }

    /**
     * <p>The name for the master user. Not used.</p>
     */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /**
     * <p>The name for the master user. Not used.</p>
     */
    inline CreateDBInstanceRequest& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>The name for the master user. Not used.</p>
     */
    inline CreateDBInstanceRequest& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}

    /**
     * <p>The name for the master user. Not used.</p>
     */
    inline CreateDBInstanceRequest& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}


    /**
     * <p>The password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@".</p> <p> Not used.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p>The password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@".</p> <p> Not used.</p>
     */
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }

    /**
     * <p>The password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@".</p> <p> Not used.</p>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p>The password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@".</p> <p> Not used.</p>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }

    /**
     * <p>The password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@".</p> <p> Not used.</p>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p>The password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@".</p> <p> Not used.</p>
     */
    inline CreateDBInstanceRequest& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>The password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@".</p> <p> Not used.</p>
     */
    inline CreateDBInstanceRequest& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@".</p> <p> Not used.</p>
     */
    inline CreateDBInstanceRequest& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}


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
    inline CreateDBInstanceRequest& WithDBSecurityGroups(const Aws::Vector<Aws::String>& value) { SetDBSecurityGroups(value); return *this;}

    /**
     * <p>A list of DB security groups to associate with this DB instance.</p>
     * <p>Default: The default DB security group for the database engine.</p>
     */
    inline CreateDBInstanceRequest& WithDBSecurityGroups(Aws::Vector<Aws::String>&& value) { SetDBSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>A list of DB security groups to associate with this DB instance.</p>
     * <p>Default: The default DB security group for the database engine.</p>
     */
    inline CreateDBInstanceRequest& AddDBSecurityGroups(const Aws::String& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of DB security groups to associate with this DB instance.</p>
     * <p>Default: The default DB security group for the database engine.</p>
     */
    inline CreateDBInstanceRequest& AddDBSecurityGroups(Aws::String&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of DB security groups to associate with this DB instance.</p>
     * <p>Default: The default DB security group for the database engine.</p>
     */
    inline CreateDBInstanceRequest& AddDBSecurityGroups(const char* value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }


    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p>
     * <p>Not applicable. The associated list of EC2 VPC security groups is managed by
     * the DB cluster. For more information, see <a>CreateDBCluster</a>.</p>
     * <p>Default: The default EC2 VPC security group for the DB subnet group's
     * VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p>
     * <p>Not applicable. The associated list of EC2 VPC security groups is managed by
     * the DB cluster. For more information, see <a>CreateDBCluster</a>.</p>
     * <p>Default: The default EC2 VPC security group for the DB subnet group's
     * VPC.</p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p>
     * <p>Not applicable. The associated list of EC2 VPC security groups is managed by
     * the DB cluster. For more information, see <a>CreateDBCluster</a>.</p>
     * <p>Default: The default EC2 VPC security group for the DB subnet group's
     * VPC.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p>
     * <p>Not applicable. The associated list of EC2 VPC security groups is managed by
     * the DB cluster. For more information, see <a>CreateDBCluster</a>.</p>
     * <p>Default: The default EC2 VPC security group for the DB subnet group's
     * VPC.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p>
     * <p>Not applicable. The associated list of EC2 VPC security groups is managed by
     * the DB cluster. For more information, see <a>CreateDBCluster</a>.</p>
     * <p>Default: The default EC2 VPC security group for the DB subnet group's
     * VPC.</p>
     */
    inline CreateDBInstanceRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p>
     * <p>Not applicable. The associated list of EC2 VPC security groups is managed by
     * the DB cluster. For more information, see <a>CreateDBCluster</a>.</p>
     * <p>Default: The default EC2 VPC security group for the DB subnet group's
     * VPC.</p>
     */
    inline CreateDBInstanceRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p>
     * <p>Not applicable. The associated list of EC2 VPC security groups is managed by
     * the DB cluster. For more information, see <a>CreateDBCluster</a>.</p>
     * <p>Default: The default EC2 VPC security group for the DB subnet group's
     * VPC.</p>
     */
    inline CreateDBInstanceRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p>
     * <p>Not applicable. The associated list of EC2 VPC security groups is managed by
     * the DB cluster. For more information, see <a>CreateDBCluster</a>.</p>
     * <p>Default: The default EC2 VPC security group for the DB subnet group's
     * VPC.</p>
     */
    inline CreateDBInstanceRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p>
     * <p>Not applicable. The associated list of EC2 VPC security groups is managed by
     * the DB cluster. For more information, see <a>CreateDBCluster</a>.</p>
     * <p>Default: The default EC2 VPC security group for the DB subnet group's
     * VPC.</p>
     */
    inline CreateDBInstanceRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p> The EC2 Availability Zone that the DB instance is created in</p> <p>Default:
     * A random, system-chosen Availability Zone in the endpoint's AWS Region.</p> <p>
     * Example: <code>us-east-1d</code> </p> <p> Constraint: The AvailabilityZone
     * parameter can't be specified if the MultiAZ parameter is set to
     * <code>true</code>. The specified Availability Zone must be in the same AWS
     * Region as the current endpoint.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p> The EC2 Availability Zone that the DB instance is created in</p> <p>Default:
     * A random, system-chosen Availability Zone in the endpoint's AWS Region.</p> <p>
     * Example: <code>us-east-1d</code> </p> <p> Constraint: The AvailabilityZone
     * parameter can't be specified if the MultiAZ parameter is set to
     * <code>true</code>. The specified Availability Zone must be in the same AWS
     * Region as the current endpoint.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p> The EC2 Availability Zone that the DB instance is created in</p> <p>Default:
     * A random, system-chosen Availability Zone in the endpoint's AWS Region.</p> <p>
     * Example: <code>us-east-1d</code> </p> <p> Constraint: The AvailabilityZone
     * parameter can't be specified if the MultiAZ parameter is set to
     * <code>true</code>. The specified Availability Zone must be in the same AWS
     * Region as the current endpoint.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p> The EC2 Availability Zone that the DB instance is created in</p> <p>Default:
     * A random, system-chosen Availability Zone in the endpoint's AWS Region.</p> <p>
     * Example: <code>us-east-1d</code> </p> <p> Constraint: The AvailabilityZone
     * parameter can't be specified if the MultiAZ parameter is set to
     * <code>true</code>. The specified Availability Zone must be in the same AWS
     * Region as the current endpoint.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p> The EC2 Availability Zone that the DB instance is created in</p> <p>Default:
     * A random, system-chosen Availability Zone in the endpoint's AWS Region.</p> <p>
     * Example: <code>us-east-1d</code> </p> <p> Constraint: The AvailabilityZone
     * parameter can't be specified if the MultiAZ parameter is set to
     * <code>true</code>. The specified Availability Zone must be in the same AWS
     * Region as the current endpoint.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p> The EC2 Availability Zone that the DB instance is created in</p> <p>Default:
     * A random, system-chosen Availability Zone in the endpoint's AWS Region.</p> <p>
     * Example: <code>us-east-1d</code> </p> <p> Constraint: The AvailabilityZone
     * parameter can't be specified if the MultiAZ parameter is set to
     * <code>true</code>. The specified Availability Zone must be in the same AWS
     * Region as the current endpoint.</p>
     */
    inline CreateDBInstanceRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p> The EC2 Availability Zone that the DB instance is created in</p> <p>Default:
     * A random, system-chosen Availability Zone in the endpoint's AWS Region.</p> <p>
     * Example: <code>us-east-1d</code> </p> <p> Constraint: The AvailabilityZone
     * parameter can't be specified if the MultiAZ parameter is set to
     * <code>true</code>. The specified Availability Zone must be in the same AWS
     * Region as the current endpoint.</p>
     */
    inline CreateDBInstanceRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p> The EC2 Availability Zone that the DB instance is created in</p> <p>Default:
     * A random, system-chosen Availability Zone in the endpoint's AWS Region.</p> <p>
     * Example: <code>us-east-1d</code> </p> <p> Constraint: The AvailabilityZone
     * parameter can't be specified if the MultiAZ parameter is set to
     * <code>true</code>. The specified Availability Zone must be in the same AWS
     * Region as the current endpoint.</p>
     */
    inline CreateDBInstanceRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>A DB subnet group to associate with this DB instance.</p> <p>If there is no
     * DB subnet group, then it is a non-VPC DB instance.</p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>A DB subnet group to associate with this DB instance.</p> <p>If there is no
     * DB subnet group, then it is a non-VPC DB instance.</p>
     */
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }

    /**
     * <p>A DB subnet group to associate with this DB instance.</p> <p>If there is no
     * DB subnet group, then it is a non-VPC DB instance.</p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>A DB subnet group to associate with this DB instance.</p> <p>If there is no
     * DB subnet group, then it is a non-VPC DB instance.</p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }

    /**
     * <p>A DB subnet group to associate with this DB instance.</p> <p>If there is no
     * DB subnet group, then it is a non-VPC DB instance.</p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>A DB subnet group to associate with this DB instance.</p> <p>If there is no
     * DB subnet group, then it is a non-VPC DB instance.</p>
     */
    inline CreateDBInstanceRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>A DB subnet group to associate with this DB instance.</p> <p>If there is no
     * DB subnet group, then it is a non-VPC DB instance.</p>
     */
    inline CreateDBInstanceRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>A DB subnet group to associate with this DB instance.</p> <p>If there is no
     * DB subnet group, then it is a non-VPC DB instance.</p>
     */
    inline CreateDBInstanceRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}


    /**
     * <p>The time range each week during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p> <p> Format:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p>The default is a 30-minute window
     * selected at random from an 8-hour block of time for each AWS Region, occurring
     * on a random day of the week.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat,
     * Sun.</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The time range each week during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p> <p> Format:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p>The default is a 30-minute window
     * selected at random from an 8-hour block of time for each AWS Region, occurring
     * on a random day of the week.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat,
     * Sun.</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>The time range each week during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p> <p> Format:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p>The default is a 30-minute window
     * selected at random from an 8-hour block of time for each AWS Region, occurring
     * on a random day of the week.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat,
     * Sun.</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The time range each week during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p> <p> Format:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p>The default is a 30-minute window
     * selected at random from an 8-hour block of time for each AWS Region, occurring
     * on a random day of the week.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat,
     * Sun.</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>The time range each week during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p> <p> Format:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p>The default is a 30-minute window
     * selected at random from an 8-hour block of time for each AWS Region, occurring
     * on a random day of the week.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat,
     * Sun.</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The time range each week during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p> <p> Format:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p>The default is a 30-minute window
     * selected at random from an 8-hour block of time for each AWS Region, occurring
     * on a random day of the week.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat,
     * Sun.</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline CreateDBInstanceRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The time range each week during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p> <p> Format:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p>The default is a 30-minute window
     * selected at random from an 8-hour block of time for each AWS Region, occurring
     * on a random day of the week.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat,
     * Sun.</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline CreateDBInstanceRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>The time range each week during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p> <p> Format:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p>The default is a 30-minute window
     * selected at random from an 8-hour block of time for each AWS Region, occurring
     * on a random day of the week.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat,
     * Sun.</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline CreateDBInstanceRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * is used.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters, numbers,
     * or hyphens.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * is used.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters, numbers,
     * or hyphens.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * is used.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters, numbers,
     * or hyphens.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * is used.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters, numbers,
     * or hyphens.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * is used.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters, numbers,
     * or hyphens.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * is used.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters, numbers,
     * or hyphens.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline CreateDBInstanceRequest& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * is used.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters, numbers,
     * or hyphens.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline CreateDBInstanceRequest& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * is used.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters, numbers,
     * or hyphens.</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline CreateDBInstanceRequest& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}


    /**
     * <p>The number of days for which automated backups are retained.</p> <p>Not
     * applicable. The retention period for automated backups is managed by the DB
     * cluster. For more information, see <a>CreateDBCluster</a>.</p> <p>Default: 1</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be a value from 0 to 35</p> </li> <li>
     * <p>Cannot be set to 0 if the DB instance is a source to Read Replicas</p> </li>
     * </ul>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }

    /**
     * <p>The number of days for which automated backups are retained.</p> <p>Not
     * applicable. The retention period for automated backups is managed by the DB
     * cluster. For more information, see <a>CreateDBCluster</a>.</p> <p>Default: 1</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be a value from 0 to 35</p> </li> <li>
     * <p>Cannot be set to 0 if the DB instance is a source to Read Replicas</p> </li>
     * </ul>
     */
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days for which automated backups are retained.</p> <p>Not
     * applicable. The retention period for automated backups is managed by the DB
     * cluster. For more information, see <a>CreateDBCluster</a>.</p> <p>Default: 1</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be a value from 0 to 35</p> </li> <li>
     * <p>Cannot be set to 0 if the DB instance is a source to Read Replicas</p> </li>
     * </ul>
     */
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /**
     * <p>The number of days for which automated backups are retained.</p> <p>Not
     * applicable. The retention period for automated backups is managed by the DB
     * cluster. For more information, see <a>CreateDBCluster</a>.</p> <p>Default: 1</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be a value from 0 to 35</p> </li> <li>
     * <p>Cannot be set to 0 if the DB instance is a source to Read Replicas</p> </li>
     * </ul>
     */
    inline CreateDBInstanceRequest& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}


    /**
     * <p> The daily time range during which automated backups are created.</p> <p>Not
     * applicable. The daily time range for creating automated backups is managed by
     * the DB cluster. For more information, see <a>CreateDBCluster</a>.</p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    /**
     * <p> The daily time range during which automated backups are created.</p> <p>Not
     * applicable. The daily time range for creating automated backups is managed by
     * the DB cluster. For more information, see <a>CreateDBCluster</a>.</p>
     */
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }

    /**
     * <p> The daily time range during which automated backups are created.</p> <p>Not
     * applicable. The daily time range for creating automated backups is managed by
     * the DB cluster. For more information, see <a>CreateDBCluster</a>.</p>
     */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p> The daily time range during which automated backups are created.</p> <p>Not
     * applicable. The daily time range for creating automated backups is managed by
     * the DB cluster. For more information, see <a>CreateDBCluster</a>.</p>
     */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }

    /**
     * <p> The daily time range during which automated backups are created.</p> <p>Not
     * applicable. The daily time range for creating automated backups is managed by
     * the DB cluster. For more information, see <a>CreateDBCluster</a>.</p>
     */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /**
     * <p> The daily time range during which automated backups are created.</p> <p>Not
     * applicable. The daily time range for creating automated backups is managed by
     * the DB cluster. For more information, see <a>CreateDBCluster</a>.</p>
     */
    inline CreateDBInstanceRequest& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p> The daily time range during which automated backups are created.</p> <p>Not
     * applicable. The daily time range for creating automated backups is managed by
     * the DB cluster. For more information, see <a>CreateDBCluster</a>.</p>
     */
    inline CreateDBInstanceRequest& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}

    /**
     * <p> The daily time range during which automated backups are created.</p> <p>Not
     * applicable. The daily time range for creating automated backups is managed by
     * the DB cluster. For more information, see <a>CreateDBCluster</a>.</p>
     */
    inline CreateDBInstanceRequest& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}


    /**
     * <p>The port number on which the database accepts connections.</p> <p>Not
     * applicable. The port is managed by the DB cluster. For more information, see
     * <a>CreateDBCluster</a>.</p> <p> Default: <code>8182</code> </p> <p>Type:
     * Integer</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which the database accepts connections.</p> <p>Not
     * applicable. The port is managed by the DB cluster. For more information, see
     * <a>CreateDBCluster</a>.</p> <p> Default: <code>8182</code> </p> <p>Type:
     * Integer</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number on which the database accepts connections.</p> <p>Not
     * applicable. The port is managed by the DB cluster. For more information, see
     * <a>CreateDBCluster</a>.</p> <p> Default: <code>8182</code> </p> <p>Type:
     * Integer</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number on which the database accepts connections.</p> <p>Not
     * applicable. The port is managed by the DB cluster. For more information, see
     * <a>CreateDBCluster</a>.</p> <p> Default: <code>8182</code> </p> <p>Type:
     * Integer</p>
     */
    inline CreateDBInstanceRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>Specifies if the DB instance is a Multi-AZ deployment. You can't set the
     * AvailabilityZone parameter if the MultiAZ parameter is set to true.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p>Specifies if the DB instance is a Multi-AZ deployment. You can't set the
     * AvailabilityZone parameter if the MultiAZ parameter is set to true.</p>
     */
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }

    /**
     * <p>Specifies if the DB instance is a Multi-AZ deployment. You can't set the
     * AvailabilityZone parameter if the MultiAZ parameter is set to true.</p>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p>Specifies if the DB instance is a Multi-AZ deployment. You can't set the
     * AvailabilityZone parameter if the MultiAZ parameter is set to true.</p>
     */
    inline CreateDBInstanceRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}


    /**
     * <p>The version number of the database engine to use.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version number of the database engine to use.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version number of the database engine to use.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version number of the database engine to use.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version number of the database engine to use.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version number of the database engine to use.</p>
     */
    inline CreateDBInstanceRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version number of the database engine to use.</p>
     */
    inline CreateDBInstanceRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the database engine to use.</p>
     */
    inline CreateDBInstanceRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>Indicates that minor engine upgrades are applied automatically to the DB
     * instance during the maintenance window.</p> <p>Default: <code>true</code> </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>Indicates that minor engine upgrades are applied automatically to the DB
     * instance during the maintenance window.</p> <p>Default: <code>true</code> </p>
     */
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }

    /**
     * <p>Indicates that minor engine upgrades are applied automatically to the DB
     * instance during the maintenance window.</p> <p>Default: <code>true</code> </p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p>Indicates that minor engine upgrades are applied automatically to the DB
     * instance during the maintenance window.</p> <p>Default: <code>true</code> </p>
     */
    inline CreateDBInstanceRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * <p>License model information for this DB instance.</p> <p> Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }

    /**
     * <p>License model information for this DB instance.</p> <p> Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }

    /**
     * <p>License model information for this DB instance.</p> <p> Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p>License model information for this DB instance.</p> <p> Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }

    /**
     * <p>License model information for this DB instance.</p> <p> Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }

    /**
     * <p>License model information for this DB instance.</p> <p> Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline CreateDBInstanceRequest& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /**
     * <p>License model information for this DB instance.</p> <p> Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline CreateDBInstanceRequest& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}

    /**
     * <p>License model information for this DB instance.</p> <p> Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline CreateDBInstanceRequest& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}


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
    inline CreateDBInstanceRequest& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>Indicates that the DB instance should be associated with the specified option
     * group.</p> <p>Permanent options, such as the TDE option for Oracle Advanced
     * Security TDE, can't be removed from an option group, and that option group can't
     * be removed from a DB instance once it is associated with a DB instance</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>Indicates that the DB instance should be associated with the specified option
     * group.</p> <p>Permanent options, such as the TDE option for Oracle Advanced
     * Security TDE, can't be removed from an option group, and that option group can't
     * be removed from a DB instance once it is associated with a DB instance</p>
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p>Indicates that the DB instance should be associated with the specified option
     * group.</p> <p>Permanent options, such as the TDE option for Oracle Advanced
     * Security TDE, can't be removed from an option group, and that option group can't
     * be removed from a DB instance once it is associated with a DB instance</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>Indicates that the DB instance should be associated with the specified option
     * group.</p> <p>Permanent options, such as the TDE option for Oracle Advanced
     * Security TDE, can't be removed from an option group, and that option group can't
     * be removed from a DB instance once it is associated with a DB instance</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p>Indicates that the DB instance should be associated with the specified option
     * group.</p> <p>Permanent options, such as the TDE option for Oracle Advanced
     * Security TDE, can't be removed from an option group, and that option group can't
     * be removed from a DB instance once it is associated with a DB instance</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>Indicates that the DB instance should be associated with the specified option
     * group.</p> <p>Permanent options, such as the TDE option for Oracle Advanced
     * Security TDE, can't be removed from an option group, and that option group can't
     * be removed from a DB instance once it is associated with a DB instance</p>
     */
    inline CreateDBInstanceRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>Indicates that the DB instance should be associated with the specified option
     * group.</p> <p>Permanent options, such as the TDE option for Oracle Advanced
     * Security TDE, can't be removed from an option group, and that option group can't
     * be removed from a DB instance once it is associated with a DB instance</p>
     */
    inline CreateDBInstanceRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>Indicates that the DB instance should be associated with the specified option
     * group.</p> <p>Permanent options, such as the TDE option for Oracle Advanced
     * Security TDE, can't be removed from an option group, and that option group can't
     * be removed from a DB instance once it is associated with a DB instance</p>
     */
    inline CreateDBInstanceRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}


    /**
     * <p>Indicates that the DB instance should be associated with the specified
     * CharacterSet.</p> <p>Not applicable. The character set is managed by the DB
     * cluster. For more information, see <a>CreateDBCluster</a>.</p>
     */
    inline const Aws::String& GetCharacterSetName() const{ return m_characterSetName; }

    /**
     * <p>Indicates that the DB instance should be associated with the specified
     * CharacterSet.</p> <p>Not applicable. The character set is managed by the DB
     * cluster. For more information, see <a>CreateDBCluster</a>.</p>
     */
    inline bool CharacterSetNameHasBeenSet() const { return m_characterSetNameHasBeenSet; }

    /**
     * <p>Indicates that the DB instance should be associated with the specified
     * CharacterSet.</p> <p>Not applicable. The character set is managed by the DB
     * cluster. For more information, see <a>CreateDBCluster</a>.</p>
     */
    inline void SetCharacterSetName(const Aws::String& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = value; }

    /**
     * <p>Indicates that the DB instance should be associated with the specified
     * CharacterSet.</p> <p>Not applicable. The character set is managed by the DB
     * cluster. For more information, see <a>CreateDBCluster</a>.</p>
     */
    inline void SetCharacterSetName(Aws::String&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = std::move(value); }

    /**
     * <p>Indicates that the DB instance should be associated with the specified
     * CharacterSet.</p> <p>Not applicable. The character set is managed by the DB
     * cluster. For more information, see <a>CreateDBCluster</a>.</p>
     */
    inline void SetCharacterSetName(const char* value) { m_characterSetNameHasBeenSet = true; m_characterSetName.assign(value); }

    /**
     * <p>Indicates that the DB instance should be associated with the specified
     * CharacterSet.</p> <p>Not applicable. The character set is managed by the DB
     * cluster. For more information, see <a>CreateDBCluster</a>.</p>
     */
    inline CreateDBInstanceRequest& WithCharacterSetName(const Aws::String& value) { SetCharacterSetName(value); return *this;}

    /**
     * <p>Indicates that the DB instance should be associated with the specified
     * CharacterSet.</p> <p>Not applicable. The character set is managed by the DB
     * cluster. For more information, see <a>CreateDBCluster</a>.</p>
     */
    inline CreateDBInstanceRequest& WithCharacterSetName(Aws::String&& value) { SetCharacterSetName(std::move(value)); return *this;}

    /**
     * <p>Indicates that the DB instance should be associated with the specified
     * CharacterSet.</p> <p>Not applicable. The character set is managed by the DB
     * cluster. For more information, see <a>CreateDBCluster</a>.</p>
     */
    inline CreateDBInstanceRequest& WithCharacterSetName(const char* value) { SetCharacterSetName(value); return *this;}


    /**
     * <p>The tags to assign to the new instance.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to assign to the new instance.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to assign to the new instance.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to assign to the new instance.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to assign to the new instance.</p>
     */
    inline CreateDBInstanceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to assign to the new instance.</p>
     */
    inline CreateDBInstanceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the new instance.</p>
     */
    inline CreateDBInstanceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to assign to the new instance.</p>
     */
    inline CreateDBInstanceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The identifier of the DB cluster that the instance will belong to.</p> <p>For
     * information on creating a DB cluster, see <a>CreateDBCluster</a>.</p> <p>Type:
     * String</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The identifier of the DB cluster that the instance will belong to.</p> <p>For
     * information on creating a DB cluster, see <a>CreateDBCluster</a>.</p> <p>Type:
     * String</p>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the DB cluster that the instance will belong to.</p> <p>For
     * information on creating a DB cluster, see <a>CreateDBCluster</a>.</p> <p>Type:
     * String</p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The identifier of the DB cluster that the instance will belong to.</p> <p>For
     * information on creating a DB cluster, see <a>CreateDBCluster</a>.</p> <p>Type:
     * String</p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The identifier of the DB cluster that the instance will belong to.</p> <p>For
     * information on creating a DB cluster, see <a>CreateDBCluster</a>.</p> <p>Type:
     * String</p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The identifier of the DB cluster that the instance will belong to.</p> <p>For
     * information on creating a DB cluster, see <a>CreateDBCluster</a>.</p> <p>Type:
     * String</p>
     */
    inline CreateDBInstanceRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the DB cluster that the instance will belong to.</p> <p>For
     * information on creating a DB cluster, see <a>CreateDBCluster</a>.</p> <p>Type:
     * String</p>
     */
    inline CreateDBInstanceRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the DB cluster that the instance will belong to.</p> <p>For
     * information on creating a DB cluster, see <a>CreateDBCluster</a>.</p> <p>Type:
     * String</p>
     */
    inline CreateDBInstanceRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>Not
     * applicable. Storage is managed by the DB Cluster.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>Not
     * applicable. Storage is managed by the DB Cluster.</p>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>Not
     * applicable. Storage is managed by the DB Cluster.</p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>Not
     * applicable. Storage is managed by the DB Cluster.</p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>Not
     * applicable. Storage is managed by the DB Cluster.</p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>Not
     * applicable. Storage is managed by the DB Cluster.</p>
     */
    inline CreateDBInstanceRequest& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>Not
     * applicable. Storage is managed by the DB Cluster.</p>
     */
    inline CreateDBInstanceRequest& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>Not
     * applicable. Storage is managed by the DB Cluster.</p>
     */
    inline CreateDBInstanceRequest& WithStorageType(const char* value) { SetStorageType(value); return *this;}


    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline const Aws::String& GetTdeCredentialArn() const{ return m_tdeCredentialArn; }

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline bool TdeCredentialArnHasBeenSet() const { return m_tdeCredentialArnHasBeenSet; }

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline void SetTdeCredentialArn(const Aws::String& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = value; }

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline void SetTdeCredentialArn(Aws::String&& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = std::move(value); }

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline void SetTdeCredentialArn(const char* value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn.assign(value); }

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline CreateDBInstanceRequest& WithTdeCredentialArn(const Aws::String& value) { SetTdeCredentialArn(value); return *this;}

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline CreateDBInstanceRequest& WithTdeCredentialArn(Aws::String&& value) { SetTdeCredentialArn(std::move(value)); return *this;}

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline CreateDBInstanceRequest& WithTdeCredentialArn(const char* value) { SetTdeCredentialArn(value); return *this;}


    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline const Aws::String& GetTdeCredentialPassword() const{ return m_tdeCredentialPassword; }

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline bool TdeCredentialPasswordHasBeenSet() const { return m_tdeCredentialPasswordHasBeenSet; }

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline void SetTdeCredentialPassword(const Aws::String& value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword = value; }

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline void SetTdeCredentialPassword(Aws::String&& value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword = std::move(value); }

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline void SetTdeCredentialPassword(const char* value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword.assign(value); }

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline CreateDBInstanceRequest& WithTdeCredentialPassword(const Aws::String& value) { SetTdeCredentialPassword(value); return *this;}

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline CreateDBInstanceRequest& WithTdeCredentialPassword(Aws::String&& value) { SetTdeCredentialPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline CreateDBInstanceRequest& WithTdeCredentialPassword(const char* value) { SetTdeCredentialPassword(value); return *this;}


    /**
     * <p>Specifies whether the DB instance is encrypted.</p> <p>Not applicable. The
     * encryption for DB instances is managed by the DB cluster. For more information,
     * see <a>CreateDBCluster</a>.</p> <p>Default: false</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }

    /**
     * <p>Specifies whether the DB instance is encrypted.</p> <p>Not applicable. The
     * encryption for DB instances is managed by the DB cluster. For more information,
     * see <a>CreateDBCluster</a>.</p> <p>Default: false</p>
     */
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }

    /**
     * <p>Specifies whether the DB instance is encrypted.</p> <p>Not applicable. The
     * encryption for DB instances is managed by the DB cluster. For more information,
     * see <a>CreateDBCluster</a>.</p> <p>Default: false</p>
     */
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }

    /**
     * <p>Specifies whether the DB instance is encrypted.</p> <p>Not applicable. The
     * encryption for DB instances is managed by the DB cluster. For more information,
     * see <a>CreateDBCluster</a>.</p> <p>Default: false</p>
     */
    inline CreateDBInstanceRequest& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}


    /**
     * <p>The AWS KMS key identifier for an encrypted DB instance.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB instance with the same AWS account that owns the KMS
     * encryption key used to encrypt the new DB instance, then you can use the KMS key
     * alias instead of the ARN for the KM encryption key.</p> <p>Not applicable. The
     * KMS key identifier is managed by the DB cluster. For more information, see
     * <a>CreateDBCluster</a>.</p> <p>If the <code>StorageEncrypted</code> parameter is
     * true, and you do not specify a value for the <code>KmsKeyId</code> parameter,
     * then Amazon Neptune will use your default encryption key. AWS KMS creates the
     * default encryption key for your AWS account. Your AWS account has a different
     * default encryption key for each AWS Region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The AWS KMS key identifier for an encrypted DB instance.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB instance with the same AWS account that owns the KMS
     * encryption key used to encrypt the new DB instance, then you can use the KMS key
     * alias instead of the ARN for the KM encryption key.</p> <p>Not applicable. The
     * KMS key identifier is managed by the DB cluster. For more information, see
     * <a>CreateDBCluster</a>.</p> <p>If the <code>StorageEncrypted</code> parameter is
     * true, and you do not specify a value for the <code>KmsKeyId</code> parameter,
     * then Amazon Neptune will use your default encryption key. AWS KMS creates the
     * default encryption key for your AWS account. Your AWS account has a different
     * default encryption key for each AWS Region.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The AWS KMS key identifier for an encrypted DB instance.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB instance with the same AWS account that owns the KMS
     * encryption key used to encrypt the new DB instance, then you can use the KMS key
     * alias instead of the ARN for the KM encryption key.</p> <p>Not applicable. The
     * KMS key identifier is managed by the DB cluster. For more information, see
     * <a>CreateDBCluster</a>.</p> <p>If the <code>StorageEncrypted</code> parameter is
     * true, and you do not specify a value for the <code>KmsKeyId</code> parameter,
     * then Amazon Neptune will use your default encryption key. AWS KMS creates the
     * default encryption key for your AWS account. Your AWS account has a different
     * default encryption key for each AWS Region.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The AWS KMS key identifier for an encrypted DB instance.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB instance with the same AWS account that owns the KMS
     * encryption key used to encrypt the new DB instance, then you can use the KMS key
     * alias instead of the ARN for the KM encryption key.</p> <p>Not applicable. The
     * KMS key identifier is managed by the DB cluster. For more information, see
     * <a>CreateDBCluster</a>.</p> <p>If the <code>StorageEncrypted</code> parameter is
     * true, and you do not specify a value for the <code>KmsKeyId</code> parameter,
     * then Amazon Neptune will use your default encryption key. AWS KMS creates the
     * default encryption key for your AWS account. Your AWS account has a different
     * default encryption key for each AWS Region.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The AWS KMS key identifier for an encrypted DB instance.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB instance with the same AWS account that owns the KMS
     * encryption key used to encrypt the new DB instance, then you can use the KMS key
     * alias instead of the ARN for the KM encryption key.</p> <p>Not applicable. The
     * KMS key identifier is managed by the DB cluster. For more information, see
     * <a>CreateDBCluster</a>.</p> <p>If the <code>StorageEncrypted</code> parameter is
     * true, and you do not specify a value for the <code>KmsKeyId</code> parameter,
     * then Amazon Neptune will use your default encryption key. AWS KMS creates the
     * default encryption key for your AWS account. Your AWS account has a different
     * default encryption key for each AWS Region.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The AWS KMS key identifier for an encrypted DB instance.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB instance with the same AWS account that owns the KMS
     * encryption key used to encrypt the new DB instance, then you can use the KMS key
     * alias instead of the ARN for the KM encryption key.</p> <p>Not applicable. The
     * KMS key identifier is managed by the DB cluster. For more information, see
     * <a>CreateDBCluster</a>.</p> <p>If the <code>StorageEncrypted</code> parameter is
     * true, and you do not specify a value for the <code>KmsKeyId</code> parameter,
     * then Amazon Neptune will use your default encryption key. AWS KMS creates the
     * default encryption key for your AWS account. Your AWS account has a different
     * default encryption key for each AWS Region.</p>
     */
    inline CreateDBInstanceRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS KMS key identifier for an encrypted DB instance.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB instance with the same AWS account that owns the KMS
     * encryption key used to encrypt the new DB instance, then you can use the KMS key
     * alias instead of the ARN for the KM encryption key.</p> <p>Not applicable. The
     * KMS key identifier is managed by the DB cluster. For more information, see
     * <a>CreateDBCluster</a>.</p> <p>If the <code>StorageEncrypted</code> parameter is
     * true, and you do not specify a value for the <code>KmsKeyId</code> parameter,
     * then Amazon Neptune will use your default encryption key. AWS KMS creates the
     * default encryption key for your AWS account. Your AWS account has a different
     * default encryption key for each AWS Region.</p>
     */
    inline CreateDBInstanceRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS KMS key identifier for an encrypted DB instance.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB instance with the same AWS account that owns the KMS
     * encryption key used to encrypt the new DB instance, then you can use the KMS key
     * alias instead of the ARN for the KM encryption key.</p> <p>Not applicable. The
     * KMS key identifier is managed by the DB cluster. For more information, see
     * <a>CreateDBCluster</a>.</p> <p>If the <code>StorageEncrypted</code> parameter is
     * true, and you do not specify a value for the <code>KmsKeyId</code> parameter,
     * then Amazon Neptune will use your default encryption key. AWS KMS creates the
     * default encryption key for your AWS account. Your AWS account has a different
     * default encryption key for each AWS Region.</p>
     */
    inline CreateDBInstanceRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Specify the Active Directory Domain to create the instance in.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>Specify the Active Directory Domain to create the instance in.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>Specify the Active Directory Domain to create the instance in.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>Specify the Active Directory Domain to create the instance in.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>Specify the Active Directory Domain to create the instance in.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>Specify the Active Directory Domain to create the instance in.</p>
     */
    inline CreateDBInstanceRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>Specify the Active Directory Domain to create the instance in.</p>
     */
    inline CreateDBInstanceRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>Specify the Active Directory Domain to create the instance in.</p>
     */
    inline CreateDBInstanceRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>True to copy all tags from the DB instance to snapshots of the DB instance,
     * and otherwise false. The default is false.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }

    /**
     * <p>True to copy all tags from the DB instance to snapshots of the DB instance,
     * and otherwise false. The default is false.</p>
     */
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }

    /**
     * <p>True to copy all tags from the DB instance to snapshots of the DB instance,
     * and otherwise false. The default is false.</p>
     */
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }

    /**
     * <p>True to copy all tags from the DB instance to snapshots of the DB instance,
     * and otherwise false. The default is false.</p>
     */
    inline CreateDBInstanceRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}


    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB instance. To disable collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, then you must also set <code>MonitoringInterval</code> to a value
     * other than 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p>
     */
    inline int GetMonitoringInterval() const{ return m_monitoringInterval; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB instance. To disable collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, then you must also set <code>MonitoringInterval</code> to a value
     * other than 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p>
     */
    inline bool MonitoringIntervalHasBeenSet() const { return m_monitoringIntervalHasBeenSet; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB instance. To disable collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, then you must also set <code>MonitoringInterval</code> to a value
     * other than 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p>
     */
    inline void SetMonitoringInterval(int value) { m_monitoringIntervalHasBeenSet = true; m_monitoringInterval = value; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB instance. To disable collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, then you must also set <code>MonitoringInterval</code> to a value
     * other than 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p>
     */
    inline CreateDBInstanceRequest& WithMonitoringInterval(int value) { SetMonitoringInterval(value); return *this;}


    /**
     * <p>The ARN for the IAM role that permits Neptune to send enhanced monitoring
     * metrics to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline const Aws::String& GetMonitoringRoleArn() const{ return m_monitoringRoleArn; }

    /**
     * <p>The ARN for the IAM role that permits Neptune to send enhanced monitoring
     * metrics to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline bool MonitoringRoleArnHasBeenSet() const { return m_monitoringRoleArnHasBeenSet; }

    /**
     * <p>The ARN for the IAM role that permits Neptune to send enhanced monitoring
     * metrics to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline void SetMonitoringRoleArn(const Aws::String& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = value; }

    /**
     * <p>The ARN for the IAM role that permits Neptune to send enhanced monitoring
     * metrics to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline void SetMonitoringRoleArn(Aws::String&& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = std::move(value); }

    /**
     * <p>The ARN for the IAM role that permits Neptune to send enhanced monitoring
     * metrics to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline void SetMonitoringRoleArn(const char* value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn.assign(value); }

    /**
     * <p>The ARN for the IAM role that permits Neptune to send enhanced monitoring
     * metrics to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline CreateDBInstanceRequest& WithMonitoringRoleArn(const Aws::String& value) { SetMonitoringRoleArn(value); return *this;}

    /**
     * <p>The ARN for the IAM role that permits Neptune to send enhanced monitoring
     * metrics to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline CreateDBInstanceRequest& WithMonitoringRoleArn(Aws::String&& value) { SetMonitoringRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the IAM role that permits Neptune to send enhanced monitoring
     * metrics to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline CreateDBInstanceRequest& WithMonitoringRoleArn(const char* value) { SetMonitoringRoleArn(value); return *this;}


    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline const Aws::String& GetDomainIAMRoleName() const{ return m_domainIAMRoleName; }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline bool DomainIAMRoleNameHasBeenSet() const { return m_domainIAMRoleNameHasBeenSet; }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline void SetDomainIAMRoleName(const Aws::String& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = value; }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline void SetDomainIAMRoleName(Aws::String&& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = std::move(value); }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline void SetDomainIAMRoleName(const char* value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName.assign(value); }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline CreateDBInstanceRequest& WithDomainIAMRoleName(const Aws::String& value) { SetDomainIAMRoleName(value); return *this;}

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline CreateDBInstanceRequest& WithDomainIAMRoleName(Aws::String&& value) { SetDomainIAMRoleName(std::move(value)); return *this;}

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline CreateDBInstanceRequest& WithDomainIAMRoleName(const char* value) { SetDomainIAMRoleName(value); return *this;}


    /**
     * <p>A value that specifies the order in which an Read Replica is promoted to the
     * primary instance after a failure of the existing primary instance. </p>
     * <p>Default: 1</p> <p>Valid Values: 0 - 15</p>
     */
    inline int GetPromotionTier() const{ return m_promotionTier; }

    /**
     * <p>A value that specifies the order in which an Read Replica is promoted to the
     * primary instance after a failure of the existing primary instance. </p>
     * <p>Default: 1</p> <p>Valid Values: 0 - 15</p>
     */
    inline bool PromotionTierHasBeenSet() const { return m_promotionTierHasBeenSet; }

    /**
     * <p>A value that specifies the order in which an Read Replica is promoted to the
     * primary instance after a failure of the existing primary instance. </p>
     * <p>Default: 1</p> <p>Valid Values: 0 - 15</p>
     */
    inline void SetPromotionTier(int value) { m_promotionTierHasBeenSet = true; m_promotionTier = value; }

    /**
     * <p>A value that specifies the order in which an Read Replica is promoted to the
     * primary instance after a failure of the existing primary instance. </p>
     * <p>Default: 1</p> <p>Valid Values: 0 - 15</p>
     */
    inline CreateDBInstanceRequest& WithPromotionTier(int value) { SetPromotionTier(value); return *this;}


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
    inline CreateDBInstanceRequest& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * <p>The time zone of the DB instance.</p>
     */
    inline CreateDBInstanceRequest& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    /**
     * <p>The time zone of the DB instance.</p>
     */
    inline CreateDBInstanceRequest& WithTimezone(const char* value) { SetTimezone(value); return *this;}


    /**
     * <p>True to enable AWS Identity and Access Management (IAM) authentication for
     * Neptune.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const{ return m_enableIAMDatabaseAuthentication; }

    /**
     * <p>True to enable AWS Identity and Access Management (IAM) authentication for
     * Neptune.</p> <p>Default: <code>false</code> </p>
     */
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }

    /**
     * <p>True to enable AWS Identity and Access Management (IAM) authentication for
     * Neptune.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }

    /**
     * <p>True to enable AWS Identity and Access Management (IAM) authentication for
     * Neptune.</p> <p>Default: <code>false</code> </p>
     */
    inline CreateDBInstanceRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}


    /**
     * <p>True to enable Performance Insights for the DB instance, and otherwise
     * false.</p>
     */
    inline bool GetEnablePerformanceInsights() const{ return m_enablePerformanceInsights; }

    /**
     * <p>True to enable Performance Insights for the DB instance, and otherwise
     * false.</p>
     */
    inline bool EnablePerformanceInsightsHasBeenSet() const { return m_enablePerformanceInsightsHasBeenSet; }

    /**
     * <p>True to enable Performance Insights for the DB instance, and otherwise
     * false.</p>
     */
    inline void SetEnablePerformanceInsights(bool value) { m_enablePerformanceInsightsHasBeenSet = true; m_enablePerformanceInsights = value; }

    /**
     * <p>True to enable Performance Insights for the DB instance, and otherwise
     * false.</p>
     */
    inline CreateDBInstanceRequest& WithEnablePerformanceInsights(bool value) { SetEnablePerformanceInsights(value); return *this;}


    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p>
     */
    inline const Aws::String& GetPerformanceInsightsKMSKeyId() const{ return m_performanceInsightsKMSKeyId; }

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p>
     */
    inline bool PerformanceInsightsKMSKeyIdHasBeenSet() const { return m_performanceInsightsKMSKeyIdHasBeenSet; }

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(const Aws::String& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = value; }

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(Aws::String&& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = std::move(value); }

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(const char* value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId.assign(value); }

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p>
     */
    inline CreateDBInstanceRequest& WithPerformanceInsightsKMSKeyId(const Aws::String& value) { SetPerformanceInsightsKMSKeyId(value); return *this;}

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p>
     */
    inline CreateDBInstanceRequest& WithPerformanceInsightsKMSKeyId(Aws::String&& value) { SetPerformanceInsightsKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p>
     */
    inline CreateDBInstanceRequest& WithPerformanceInsightsKMSKeyId(const char* value) { SetPerformanceInsightsKMSKeyId(value); return *this;}


    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnableCloudwatchLogsExports() const{ return m_enableCloudwatchLogsExports; }

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs.</p>
     */
    inline bool EnableCloudwatchLogsExportsHasBeenSet() const { return m_enableCloudwatchLogsExportsHasBeenSet; }

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs.</p>
     */
    inline void SetEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = value; }

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs.</p>
     */
    inline void SetEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = std::move(value); }

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs.</p>
     */
    inline CreateDBInstanceRequest& WithEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnableCloudwatchLogsExports(value); return *this;}

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs.</p>
     */
    inline CreateDBInstanceRequest& WithEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnableCloudwatchLogsExports(std::move(value)); return *this;}

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs.</p>
     */
    inline CreateDBInstanceRequest& AddEnableCloudwatchLogsExports(const Aws::String& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs.</p>
     */
    inline CreateDBInstanceRequest& AddEnableCloudwatchLogsExports(Aws::String&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs.</p>
     */
    inline CreateDBInstanceRequest& AddEnableCloudwatchLogsExports(const char* value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }

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

    Aws::String m_characterSetName;
    bool m_characterSetNameHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet;

    Aws::String m_tdeCredentialArn;
    bool m_tdeCredentialArnHasBeenSet;

    Aws::String m_tdeCredentialPassword;
    bool m_tdeCredentialPasswordHasBeenSet;

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::String m_domain;
    bool m_domainHasBeenSet;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet;

    int m_monitoringInterval;
    bool m_monitoringIntervalHasBeenSet;

    Aws::String m_monitoringRoleArn;
    bool m_monitoringRoleArnHasBeenSet;

    Aws::String m_domainIAMRoleName;
    bool m_domainIAMRoleNameHasBeenSet;

    int m_promotionTier;
    bool m_promotionTierHasBeenSet;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet;

    bool m_enableIAMDatabaseAuthentication;
    bool m_enableIAMDatabaseAuthenticationHasBeenSet;

    bool m_enablePerformanceInsights;
    bool m_enablePerformanceInsightsHasBeenSet;

    Aws::String m_performanceInsightsKMSKeyId;
    bool m_performanceInsightsKMSKeyIdHasBeenSet;

    Aws::Vector<Aws::String> m_enableCloudwatchLogsExports;
    bool m_enableCloudwatchLogsExportsHasBeenSet;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
