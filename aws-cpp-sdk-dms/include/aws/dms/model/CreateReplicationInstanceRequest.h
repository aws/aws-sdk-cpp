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
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/Tag.h>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationInstanceRequest : public DatabaseMigrationServiceRequest
  {
  public:
    CreateReplicationInstanceRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens.</p> </li> </ul> <p>Example: <code>myrepinstance</code> </p>
     */
    inline const Aws::String& GetReplicationInstanceIdentifier() const{ return m_replicationInstanceIdentifier; }

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens.</p> </li> </ul> <p>Example: <code>myrepinstance</code> </p>
     */
    inline void SetReplicationInstanceIdentifier(const Aws::String& value) { m_replicationInstanceIdentifierHasBeenSet = true; m_replicationInstanceIdentifier = value; }

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens.</p> </li> </ul> <p>Example: <code>myrepinstance</code> </p>
     */
    inline void SetReplicationInstanceIdentifier(Aws::String&& value) { m_replicationInstanceIdentifierHasBeenSet = true; m_replicationInstanceIdentifier = value; }

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens.</p> </li> </ul> <p>Example: <code>myrepinstance</code> </p>
     */
    inline void SetReplicationInstanceIdentifier(const char* value) { m_replicationInstanceIdentifierHasBeenSet = true; m_replicationInstanceIdentifier.assign(value); }

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens.</p> </li> </ul> <p>Example: <code>myrepinstance</code> </p>
     */
    inline CreateReplicationInstanceRequest& WithReplicationInstanceIdentifier(const Aws::String& value) { SetReplicationInstanceIdentifier(value); return *this;}

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens.</p> </li> </ul> <p>Example: <code>myrepinstance</code> </p>
     */
    inline CreateReplicationInstanceRequest& WithReplicationInstanceIdentifier(Aws::String&& value) { SetReplicationInstanceIdentifier(value); return *this;}

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens.</p> </li> <li> <p>First character must be a
     * letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens.</p> </li> </ul> <p>Example: <code>myrepinstance</code> </p>
     */
    inline CreateReplicationInstanceRequest& WithReplicationInstanceIdentifier(const char* value) { SetReplicationInstanceIdentifier(value); return *this;}

    /**
     * <p>The amount of storage (in gigabytes) to be initially allocated for the
     * replication instance.</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p>The amount of storage (in gigabytes) to be initially allocated for the
     * replication instance.</p>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p>The amount of storage (in gigabytes) to be initially allocated for the
     * replication instance.</p>
     */
    inline CreateReplicationInstanceRequest& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}

    /**
     * <p>The compute and memory capacity of the replication instance as specified by
     * the replication instance class.</p> <p> Valid Values: <code>dms.t2.micro |
     * dms.t2.small | dms.t2.medium | dms.t2.large | dms.c4.large | dms.c4.xlarge |
     * dms.c4.2xlarge | dms.c4.4xlarge </code> </p>
     */
    inline const Aws::String& GetReplicationInstanceClass() const{ return m_replicationInstanceClass; }

    /**
     * <p>The compute and memory capacity of the replication instance as specified by
     * the replication instance class.</p> <p> Valid Values: <code>dms.t2.micro |
     * dms.t2.small | dms.t2.medium | dms.t2.large | dms.c4.large | dms.c4.xlarge |
     * dms.c4.2xlarge | dms.c4.4xlarge </code> </p>
     */
    inline void SetReplicationInstanceClass(const Aws::String& value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass = value; }

    /**
     * <p>The compute and memory capacity of the replication instance as specified by
     * the replication instance class.</p> <p> Valid Values: <code>dms.t2.micro |
     * dms.t2.small | dms.t2.medium | dms.t2.large | dms.c4.large | dms.c4.xlarge |
     * dms.c4.2xlarge | dms.c4.4xlarge </code> </p>
     */
    inline void SetReplicationInstanceClass(Aws::String&& value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass = value; }

    /**
     * <p>The compute and memory capacity of the replication instance as specified by
     * the replication instance class.</p> <p> Valid Values: <code>dms.t2.micro |
     * dms.t2.small | dms.t2.medium | dms.t2.large | dms.c4.large | dms.c4.xlarge |
     * dms.c4.2xlarge | dms.c4.4xlarge </code> </p>
     */
    inline void SetReplicationInstanceClass(const char* value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass.assign(value); }

    /**
     * <p>The compute and memory capacity of the replication instance as specified by
     * the replication instance class.</p> <p> Valid Values: <code>dms.t2.micro |
     * dms.t2.small | dms.t2.medium | dms.t2.large | dms.c4.large | dms.c4.xlarge |
     * dms.c4.2xlarge | dms.c4.4xlarge </code> </p>
     */
    inline CreateReplicationInstanceRequest& WithReplicationInstanceClass(const Aws::String& value) { SetReplicationInstanceClass(value); return *this;}

    /**
     * <p>The compute and memory capacity of the replication instance as specified by
     * the replication instance class.</p> <p> Valid Values: <code>dms.t2.micro |
     * dms.t2.small | dms.t2.medium | dms.t2.large | dms.c4.large | dms.c4.xlarge |
     * dms.c4.2xlarge | dms.c4.4xlarge </code> </p>
     */
    inline CreateReplicationInstanceRequest& WithReplicationInstanceClass(Aws::String&& value) { SetReplicationInstanceClass(value); return *this;}

    /**
     * <p>The compute and memory capacity of the replication instance as specified by
     * the replication instance class.</p> <p> Valid Values: <code>dms.t2.micro |
     * dms.t2.small | dms.t2.medium | dms.t2.large | dms.c4.large | dms.c4.xlarge |
     * dms.c4.2xlarge | dms.c4.4xlarge </code> </p>
     */
    inline CreateReplicationInstanceRequest& WithReplicationInstanceClass(const char* value) { SetReplicationInstanceClass(value); return *this;}

    /**
     * <p> Specifies the VPC security group to be used with the replication instance.
     * The VPC security group must work with the VPC containing the replication
     * instance. </p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p> Specifies the VPC security group to be used with the replication instance.
     * The VPC security group must work with the VPC containing the replication
     * instance. </p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p> Specifies the VPC security group to be used with the replication instance.
     * The VPC security group must work with the VPC containing the replication
     * instance. </p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p> Specifies the VPC security group to be used with the replication instance.
     * The VPC security group must work with the VPC containing the replication
     * instance. </p>
     */
    inline CreateReplicationInstanceRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p> Specifies the VPC security group to be used with the replication instance.
     * The VPC security group must work with the VPC containing the replication
     * instance. </p>
     */
    inline CreateReplicationInstanceRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p> Specifies the VPC security group to be used with the replication instance.
     * The VPC security group must work with the VPC containing the replication
     * instance. </p>
     */
    inline CreateReplicationInstanceRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p> Specifies the VPC security group to be used with the replication instance.
     * The VPC security group must work with the VPC containing the replication
     * instance. </p>
     */
    inline CreateReplicationInstanceRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p> Specifies the VPC security group to be used with the replication instance.
     * The VPC security group must work with the VPC containing the replication
     * instance. </p>
     */
    inline CreateReplicationInstanceRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>The EC2 Availability Zone that the replication instance will be created
     * in.</p> <p>Default: A random, system-chosen Availability Zone in the endpoint's
     * region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The EC2 Availability Zone that the replication instance will be created
     * in.</p> <p>Default: A random, system-chosen Availability Zone in the endpoint's
     * region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The EC2 Availability Zone that the replication instance will be created
     * in.</p> <p>Default: A random, system-chosen Availability Zone in the endpoint's
     * region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The EC2 Availability Zone that the replication instance will be created
     * in.</p> <p>Default: A random, system-chosen Availability Zone in the endpoint's
     * region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The EC2 Availability Zone that the replication instance will be created
     * in.</p> <p>Default: A random, system-chosen Availability Zone in the endpoint's
     * region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline CreateReplicationInstanceRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The EC2 Availability Zone that the replication instance will be created
     * in.</p> <p>Default: A random, system-chosen Availability Zone in the endpoint's
     * region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline CreateReplicationInstanceRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The EC2 Availability Zone that the replication instance will be created
     * in.</p> <p>Default: A random, system-chosen Availability Zone in the endpoint's
     * region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline CreateReplicationInstanceRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>A subnet group to associate with the replication instance.</p>
     */
    inline const Aws::String& GetReplicationSubnetGroupIdentifier() const{ return m_replicationSubnetGroupIdentifier; }

    /**
     * <p>A subnet group to associate with the replication instance.</p>
     */
    inline void SetReplicationSubnetGroupIdentifier(const Aws::String& value) { m_replicationSubnetGroupIdentifierHasBeenSet = true; m_replicationSubnetGroupIdentifier = value; }

    /**
     * <p>A subnet group to associate with the replication instance.</p>
     */
    inline void SetReplicationSubnetGroupIdentifier(Aws::String&& value) { m_replicationSubnetGroupIdentifierHasBeenSet = true; m_replicationSubnetGroupIdentifier = value; }

    /**
     * <p>A subnet group to associate with the replication instance.</p>
     */
    inline void SetReplicationSubnetGroupIdentifier(const char* value) { m_replicationSubnetGroupIdentifierHasBeenSet = true; m_replicationSubnetGroupIdentifier.assign(value); }

    /**
     * <p>A subnet group to associate with the replication instance.</p>
     */
    inline CreateReplicationInstanceRequest& WithReplicationSubnetGroupIdentifier(const Aws::String& value) { SetReplicationSubnetGroupIdentifier(value); return *this;}

    /**
     * <p>A subnet group to associate with the replication instance.</p>
     */
    inline CreateReplicationInstanceRequest& WithReplicationSubnetGroupIdentifier(Aws::String&& value) { SetReplicationSubnetGroupIdentifier(value); return *this;}

    /**
     * <p>A subnet group to associate with the replication instance.</p>
     */
    inline CreateReplicationInstanceRequest& WithReplicationSubnetGroupIdentifier(const char* value) { SetReplicationSubnetGroupIdentifier(value); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p>Default: A 30-minute window selected at random from an 8-hour block of
     * time per region, occurring on a random day of the week.</p> <p>Valid Days: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p>Default: A 30-minute window selected at random from an 8-hour block of
     * time per region, occurring on a random day of the week.</p> <p>Valid Days: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p>Default: A 30-minute window selected at random from an 8-hour block of
     * time per region, occurring on a random day of the week.</p> <p>Valid Days: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p>Default: A 30-minute window selected at random from an 8-hour block of
     * time per region, occurring on a random day of the week.</p> <p>Valid Days: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p>Default: A 30-minute window selected at random from an 8-hour block of
     * time per region, occurring on a random day of the week.</p> <p>Valid Days: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline CreateReplicationInstanceRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p>Default: A 30-minute window selected at random from an 8-hour block of
     * time per region, occurring on a random day of the week.</p> <p>Valid Days: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline CreateReplicationInstanceRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p>Default: A 30-minute window selected at random from an 8-hour block of
     * time per region, occurring on a random day of the week.</p> <p>Valid Days: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline CreateReplicationInstanceRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p> Specifies if the replication instance is a Multi-AZ deployment. You cannot
     * set the <code>AvailabilityZone</code> parameter if the Multi-AZ parameter is set
     * to <code>true</code>. </p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p> Specifies if the replication instance is a Multi-AZ deployment. You cannot
     * set the <code>AvailabilityZone</code> parameter if the Multi-AZ parameter is set
     * to <code>true</code>. </p>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p> Specifies if the replication instance is a Multi-AZ deployment. You cannot
     * set the <code>AvailabilityZone</code> parameter if the Multi-AZ parameter is set
     * to <code>true</code>. </p>
     */
    inline CreateReplicationInstanceRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}

    /**
     * <p>The engine version number of the replication instance.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The engine version number of the replication instance.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The engine version number of the replication instance.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The engine version number of the replication instance.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The engine version number of the replication instance.</p>
     */
    inline CreateReplicationInstanceRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The engine version number of the replication instance.</p>
     */
    inline CreateReplicationInstanceRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The engine version number of the replication instance.</p>
     */
    inline CreateReplicationInstanceRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}

    /**
     * <p>Indicates that minor engine upgrades will be applied automatically to the
     * replication instance during the maintenance window.</p> <p>Default:
     * <code>true</code> </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>Indicates that minor engine upgrades will be applied automatically to the
     * replication instance during the maintenance window.</p> <p>Default:
     * <code>true</code> </p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p>Indicates that minor engine upgrades will be applied automatically to the
     * replication instance during the maintenance window.</p> <p>Default:
     * <code>true</code> </p>
     */
    inline CreateReplicationInstanceRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}

    /**
     * <p>Tags to be associated with the replication instance.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to be associated with the replication instance.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to be associated with the replication instance.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to be associated with the replication instance.</p>
     */
    inline CreateReplicationInstanceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to be associated with the replication instance.</p>
     */
    inline CreateReplicationInstanceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to be associated with the replication instance.</p>
     */
    inline CreateReplicationInstanceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags to be associated with the replication instance.</p>
     */
    inline CreateReplicationInstanceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The KMS key identifier that will be used to encrypt the content on the
     * replication instance. If you do not specify a value for the KmsKeyId parameter,
     * then AWS DMS will use your default encryption key. AWS KMS creates the default
     * encryption key for your AWS account. Your AWS account has a different default
     * encryption key for each AWS region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The KMS key identifier that will be used to encrypt the content on the
     * replication instance. If you do not specify a value for the KmsKeyId parameter,
     * then AWS DMS will use your default encryption key. AWS KMS creates the default
     * encryption key for your AWS account. Your AWS account has a different default
     * encryption key for each AWS region.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The KMS key identifier that will be used to encrypt the content on the
     * replication instance. If you do not specify a value for the KmsKeyId parameter,
     * then AWS DMS will use your default encryption key. AWS KMS creates the default
     * encryption key for your AWS account. Your AWS account has a different default
     * encryption key for each AWS region.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The KMS key identifier that will be used to encrypt the content on the
     * replication instance. If you do not specify a value for the KmsKeyId parameter,
     * then AWS DMS will use your default encryption key. AWS KMS creates the default
     * encryption key for your AWS account. Your AWS account has a different default
     * encryption key for each AWS region.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The KMS key identifier that will be used to encrypt the content on the
     * replication instance. If you do not specify a value for the KmsKeyId parameter,
     * then AWS DMS will use your default encryption key. AWS KMS creates the default
     * encryption key for your AWS account. Your AWS account has a different default
     * encryption key for each AWS region.</p>
     */
    inline CreateReplicationInstanceRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key identifier that will be used to encrypt the content on the
     * replication instance. If you do not specify a value for the KmsKeyId parameter,
     * then AWS DMS will use your default encryption key. AWS KMS creates the default
     * encryption key for your AWS account. Your AWS account has a different default
     * encryption key for each AWS region.</p>
     */
    inline CreateReplicationInstanceRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key identifier that will be used to encrypt the content on the
     * replication instance. If you do not specify a value for the KmsKeyId parameter,
     * then AWS DMS will use your default encryption key. AWS KMS creates the default
     * encryption key for your AWS account. Your AWS account has a different default
     * encryption key for each AWS region.</p>
     */
    inline CreateReplicationInstanceRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

    /**
     * <p> Specifies the accessibility options for the replication instance. A value of
     * <code>true</code> represents an instance with a public IP address. A value of
     * <code>false</code> represents an instance with a private IP address. The default
     * value is <code>true</code>. </p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p> Specifies the accessibility options for the replication instance. A value of
     * <code>true</code> represents an instance with a public IP address. A value of
     * <code>false</code> represents an instance with a private IP address. The default
     * value is <code>true</code>. </p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p> Specifies the accessibility options for the replication instance. A value of
     * <code>true</code> represents an instance with a public IP address. A value of
     * <code>false</code> represents an instance with a private IP address. The default
     * value is <code>true</code>. </p>
     */
    inline CreateReplicationInstanceRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}

  private:
    Aws::String m_replicationInstanceIdentifier;
    bool m_replicationInstanceIdentifierHasBeenSet;
    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet;
    Aws::String m_replicationInstanceClass;
    bool m_replicationInstanceClassHasBeenSet;
    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet;
    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;
    Aws::String m_replicationSubnetGroupIdentifier;
    bool m_replicationSubnetGroupIdentifierHasBeenSet;
    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;
    bool m_multiAZ;
    bool m_multiAZHasBeenSet;
    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;
    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;
    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
