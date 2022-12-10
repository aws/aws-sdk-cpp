/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateReplicationInstanceMessage">AWS
   * API Reference</a></p>
   */
  class CreateReplicationInstanceRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReplicationInstance"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain 1-63 alphanumeric
     * characters or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>myrepinstance</code> </p>
     */
    inline const Aws::String& GetReplicationInstanceIdentifier() const{ return m_replicationInstanceIdentifier; }

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain 1-63 alphanumeric
     * characters or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>myrepinstance</code> </p>
     */
    inline bool ReplicationInstanceIdentifierHasBeenSet() const { return m_replicationInstanceIdentifierHasBeenSet; }

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain 1-63 alphanumeric
     * characters or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>myrepinstance</code> </p>
     */
    inline void SetReplicationInstanceIdentifier(const Aws::String& value) { m_replicationInstanceIdentifierHasBeenSet = true; m_replicationInstanceIdentifier = value; }

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain 1-63 alphanumeric
     * characters or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>myrepinstance</code> </p>
     */
    inline void SetReplicationInstanceIdentifier(Aws::String&& value) { m_replicationInstanceIdentifierHasBeenSet = true; m_replicationInstanceIdentifier = std::move(value); }

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain 1-63 alphanumeric
     * characters or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>myrepinstance</code> </p>
     */
    inline void SetReplicationInstanceIdentifier(const char* value) { m_replicationInstanceIdentifierHasBeenSet = true; m_replicationInstanceIdentifier.assign(value); }

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain 1-63 alphanumeric
     * characters or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>myrepinstance</code> </p>
     */
    inline CreateReplicationInstanceRequest& WithReplicationInstanceIdentifier(const Aws::String& value) { SetReplicationInstanceIdentifier(value); return *this;}

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain 1-63 alphanumeric
     * characters or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>myrepinstance</code> </p>
     */
    inline CreateReplicationInstanceRequest& WithReplicationInstanceIdentifier(Aws::String&& value) { SetReplicationInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain 1-63 alphanumeric
     * characters or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>myrepinstance</code> </p>
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
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }

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
     * <p>The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. For example to specify the instance
     * class dms.c4.large, set this parameter to <code>"dms.c4.large"</code>.</p>
     * <p>For more information on the settings and capacities for the available
     * replication instance classes, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_ReplicationInstance.html#CHAP_ReplicationInstance.InDepth">
     * Selecting the right DMS replication instance for your migration</a>. </p>
     */
    inline const Aws::String& GetReplicationInstanceClass() const{ return m_replicationInstanceClass; }

    /**
     * <p>The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. For example to specify the instance
     * class dms.c4.large, set this parameter to <code>"dms.c4.large"</code>.</p>
     * <p>For more information on the settings and capacities for the available
     * replication instance classes, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_ReplicationInstance.html#CHAP_ReplicationInstance.InDepth">
     * Selecting the right DMS replication instance for your migration</a>. </p>
     */
    inline bool ReplicationInstanceClassHasBeenSet() const { return m_replicationInstanceClassHasBeenSet; }

    /**
     * <p>The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. For example to specify the instance
     * class dms.c4.large, set this parameter to <code>"dms.c4.large"</code>.</p>
     * <p>For more information on the settings and capacities for the available
     * replication instance classes, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_ReplicationInstance.html#CHAP_ReplicationInstance.InDepth">
     * Selecting the right DMS replication instance for your migration</a>. </p>
     */
    inline void SetReplicationInstanceClass(const Aws::String& value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass = value; }

    /**
     * <p>The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. For example to specify the instance
     * class dms.c4.large, set this parameter to <code>"dms.c4.large"</code>.</p>
     * <p>For more information on the settings and capacities for the available
     * replication instance classes, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_ReplicationInstance.html#CHAP_ReplicationInstance.InDepth">
     * Selecting the right DMS replication instance for your migration</a>. </p>
     */
    inline void SetReplicationInstanceClass(Aws::String&& value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass = std::move(value); }

    /**
     * <p>The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. For example to specify the instance
     * class dms.c4.large, set this parameter to <code>"dms.c4.large"</code>.</p>
     * <p>For more information on the settings and capacities for the available
     * replication instance classes, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_ReplicationInstance.html#CHAP_ReplicationInstance.InDepth">
     * Selecting the right DMS replication instance for your migration</a>. </p>
     */
    inline void SetReplicationInstanceClass(const char* value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass.assign(value); }

    /**
     * <p>The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. For example to specify the instance
     * class dms.c4.large, set this parameter to <code>"dms.c4.large"</code>.</p>
     * <p>For more information on the settings and capacities for the available
     * replication instance classes, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_ReplicationInstance.html#CHAP_ReplicationInstance.InDepth">
     * Selecting the right DMS replication instance for your migration</a>. </p>
     */
    inline CreateReplicationInstanceRequest& WithReplicationInstanceClass(const Aws::String& value) { SetReplicationInstanceClass(value); return *this;}

    /**
     * <p>The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. For example to specify the instance
     * class dms.c4.large, set this parameter to <code>"dms.c4.large"</code>.</p>
     * <p>For more information on the settings and capacities for the available
     * replication instance classes, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_ReplicationInstance.html#CHAP_ReplicationInstance.InDepth">
     * Selecting the right DMS replication instance for your migration</a>. </p>
     */
    inline CreateReplicationInstanceRequest& WithReplicationInstanceClass(Aws::String&& value) { SetReplicationInstanceClass(std::move(value)); return *this;}

    /**
     * <p>The compute and memory capacity of the replication instance as defined for
     * the specified replication instance class. For example to specify the instance
     * class dms.c4.large, set this parameter to <code>"dms.c4.large"</code>.</p>
     * <p>For more information on the settings and capacities for the available
     * replication instance classes, see <a
     * href="https://docs.aws.amazon.com/dms/latest/userguide/CHAP_ReplicationInstance.html#CHAP_ReplicationInstance.InDepth">
     * Selecting the right DMS replication instance for your migration</a>. </p>
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
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

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
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

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
    inline CreateReplicationInstanceRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

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
    inline CreateReplicationInstanceRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p> Specifies the VPC security group to be used with the replication instance.
     * The VPC security group must work with the VPC containing the replication
     * instance. </p>
     */
    inline CreateReplicationInstanceRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>The Availability Zone where the replication instance will be created. The
     * default value is a random, system-chosen Availability Zone in the endpoint's
     * Amazon Web Services Region, for example: <code>us-east-1d</code> </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone where the replication instance will be created. The
     * default value is a random, system-chosen Availability Zone in the endpoint's
     * Amazon Web Services Region, for example: <code>us-east-1d</code> </p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone where the replication instance will be created. The
     * default value is a random, system-chosen Availability Zone in the endpoint's
     * Amazon Web Services Region, for example: <code>us-east-1d</code> </p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone where the replication instance will be created. The
     * default value is a random, system-chosen Availability Zone in the endpoint's
     * Amazon Web Services Region, for example: <code>us-east-1d</code> </p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone where the replication instance will be created. The
     * default value is a random, system-chosen Availability Zone in the endpoint's
     * Amazon Web Services Region, for example: <code>us-east-1d</code> </p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone where the replication instance will be created. The
     * default value is a random, system-chosen Availability Zone in the endpoint's
     * Amazon Web Services Region, for example: <code>us-east-1d</code> </p>
     */
    inline CreateReplicationInstanceRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone where the replication instance will be created. The
     * default value is a random, system-chosen Availability Zone in the endpoint's
     * Amazon Web Services Region, for example: <code>us-east-1d</code> </p>
     */
    inline CreateReplicationInstanceRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone where the replication instance will be created. The
     * default value is a random, system-chosen Availability Zone in the endpoint's
     * Amazon Web Services Region, for example: <code>us-east-1d</code> </p>
     */
    inline CreateReplicationInstanceRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>A subnet group to associate with the replication instance.</p>
     */
    inline const Aws::String& GetReplicationSubnetGroupIdentifier() const{ return m_replicationSubnetGroupIdentifier; }

    /**
     * <p>A subnet group to associate with the replication instance.</p>
     */
    inline bool ReplicationSubnetGroupIdentifierHasBeenSet() const { return m_replicationSubnetGroupIdentifierHasBeenSet; }

    /**
     * <p>A subnet group to associate with the replication instance.</p>
     */
    inline void SetReplicationSubnetGroupIdentifier(const Aws::String& value) { m_replicationSubnetGroupIdentifierHasBeenSet = true; m_replicationSubnetGroupIdentifier = value; }

    /**
     * <p>A subnet group to associate with the replication instance.</p>
     */
    inline void SetReplicationSubnetGroupIdentifier(Aws::String&& value) { m_replicationSubnetGroupIdentifierHasBeenSet = true; m_replicationSubnetGroupIdentifier = std::move(value); }

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
    inline CreateReplicationInstanceRequest& WithReplicationSubnetGroupIdentifier(Aws::String&& value) { SetReplicationSubnetGroupIdentifier(std::move(value)); return *this;}

    /**
     * <p>A subnet group to associate with the replication instance.</p>
     */
    inline CreateReplicationInstanceRequest& WithReplicationSubnetGroupIdentifier(const char* value) { SetReplicationSubnetGroupIdentifier(value); return *this;}


    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p>Default: A 30-minute window selected at random from an 8-hour block of
     * time per Amazon Web Services Region, occurring on a random day of the week.</p>
     * <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Minimum
     * 30-minute window.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p>Default: A 30-minute window selected at random from an 8-hour block of
     * time per Amazon Web Services Region, occurring on a random day of the week.</p>
     * <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Minimum
     * 30-minute window.</p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p>Default: A 30-minute window selected at random from an 8-hour block of
     * time per Amazon Web Services Region, occurring on a random day of the week.</p>
     * <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Minimum
     * 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p>Default: A 30-minute window selected at random from an 8-hour block of
     * time per Amazon Web Services Region, occurring on a random day of the week.</p>
     * <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Minimum
     * 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p>Default: A 30-minute window selected at random from an 8-hour block of
     * time per Amazon Web Services Region, occurring on a random day of the week.</p>
     * <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Minimum
     * 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p>Default: A 30-minute window selected at random from an 8-hour block of
     * time per Amazon Web Services Region, occurring on a random day of the week.</p>
     * <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Minimum
     * 30-minute window.</p>
     */
    inline CreateReplicationInstanceRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p>Default: A 30-minute window selected at random from an 8-hour block of
     * time per Amazon Web Services Region, occurring on a random day of the week.</p>
     * <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Minimum
     * 30-minute window.</p>
     */
    inline CreateReplicationInstanceRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p>Default: A 30-minute window selected at random from an 8-hour block of
     * time per Amazon Web Services Region, occurring on a random day of the week.</p>
     * <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Minimum
     * 30-minute window.</p>
     */
    inline CreateReplicationInstanceRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p> Specifies whether the replication instance is a Multi-AZ deployment. You
     * can't set the <code>AvailabilityZone</code> parameter if the Multi-AZ parameter
     * is set to <code>true</code>. </p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p> Specifies whether the replication instance is a Multi-AZ deployment. You
     * can't set the <code>AvailabilityZone</code> parameter if the Multi-AZ parameter
     * is set to <code>true</code>. </p>
     */
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }

    /**
     * <p> Specifies whether the replication instance is a Multi-AZ deployment. You
     * can't set the <code>AvailabilityZone</code> parameter if the Multi-AZ parameter
     * is set to <code>true</code>. </p>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p> Specifies whether the replication instance is a Multi-AZ deployment. You
     * can't set the <code>AvailabilityZone</code> parameter if the Multi-AZ parameter
     * is set to <code>true</code>. </p>
     */
    inline CreateReplicationInstanceRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}


    /**
     * <p>The engine version number of the replication instance.</p> <p>If an engine
     * version number is not specified when a replication instance is created, the
     * default is the latest engine version available.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The engine version number of the replication instance.</p> <p>If an engine
     * version number is not specified when a replication instance is created, the
     * default is the latest engine version available.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The engine version number of the replication instance.</p> <p>If an engine
     * version number is not specified when a replication instance is created, the
     * default is the latest engine version available.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The engine version number of the replication instance.</p> <p>If an engine
     * version number is not specified when a replication instance is created, the
     * default is the latest engine version available.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The engine version number of the replication instance.</p> <p>If an engine
     * version number is not specified when a replication instance is created, the
     * default is the latest engine version available.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The engine version number of the replication instance.</p> <p>If an engine
     * version number is not specified when a replication instance is created, the
     * default is the latest engine version available.</p>
     */
    inline CreateReplicationInstanceRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The engine version number of the replication instance.</p> <p>If an engine
     * version number is not specified when a replication instance is created, the
     * default is the latest engine version available.</p>
     */
    inline CreateReplicationInstanceRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The engine version number of the replication instance.</p> <p>If an engine
     * version number is not specified when a replication instance is created, the
     * default is the latest engine version available.</p>
     */
    inline CreateReplicationInstanceRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>A value that indicates whether minor engine upgrades are applied
     * automatically to the replication instance during the maintenance window. This
     * parameter defaults to <code>true</code>.</p> <p>Default: <code>true</code> </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>A value that indicates whether minor engine upgrades are applied
     * automatically to the replication instance during the maintenance window. This
     * parameter defaults to <code>true</code>.</p> <p>Default: <code>true</code> </p>
     */
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }

    /**
     * <p>A value that indicates whether minor engine upgrades are applied
     * automatically to the replication instance during the maintenance window. This
     * parameter defaults to <code>true</code>.</p> <p>Default: <code>true</code> </p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p>A value that indicates whether minor engine upgrades are applied
     * automatically to the replication instance during the maintenance window. This
     * parameter defaults to <code>true</code>.</p> <p>Default: <code>true</code> </p>
     */
    inline CreateReplicationInstanceRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * <p>One or more tags to be assigned to the replication instance.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more tags to be assigned to the replication instance.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>One or more tags to be assigned to the replication instance.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more tags to be assigned to the replication instance.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>One or more tags to be assigned to the replication instance.</p>
     */
    inline CreateReplicationInstanceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more tags to be assigned to the replication instance.</p>
     */
    inline CreateReplicationInstanceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more tags to be assigned to the replication instance.</p>
     */
    inline CreateReplicationInstanceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>One or more tags to be assigned to the replication instance.</p>
     */
    inline CreateReplicationInstanceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>An KMS key identifier that is used to encrypt the data on the replication
     * instance.</p> <p>If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then DMS uses your default encryption key.</p> <p>KMS creates the
     * default encryption key for your Amazon Web Services account. Your Amazon Web
     * Services account has a different default encryption key for each Amazon Web
     * Services Region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>An KMS key identifier that is used to encrypt the data on the replication
     * instance.</p> <p>If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then DMS uses your default encryption key.</p> <p>KMS creates the
     * default encryption key for your Amazon Web Services account. Your Amazon Web
     * Services account has a different default encryption key for each Amazon Web
     * Services Region.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>An KMS key identifier that is used to encrypt the data on the replication
     * instance.</p> <p>If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then DMS uses your default encryption key.</p> <p>KMS creates the
     * default encryption key for your Amazon Web Services account. Your Amazon Web
     * Services account has a different default encryption key for each Amazon Web
     * Services Region.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>An KMS key identifier that is used to encrypt the data on the replication
     * instance.</p> <p>If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then DMS uses your default encryption key.</p> <p>KMS creates the
     * default encryption key for your Amazon Web Services account. Your Amazon Web
     * Services account has a different default encryption key for each Amazon Web
     * Services Region.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>An KMS key identifier that is used to encrypt the data on the replication
     * instance.</p> <p>If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then DMS uses your default encryption key.</p> <p>KMS creates the
     * default encryption key for your Amazon Web Services account. Your Amazon Web
     * Services account has a different default encryption key for each Amazon Web
     * Services Region.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>An KMS key identifier that is used to encrypt the data on the replication
     * instance.</p> <p>If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then DMS uses your default encryption key.</p> <p>KMS creates the
     * default encryption key for your Amazon Web Services account. Your Amazon Web
     * Services account has a different default encryption key for each Amazon Web
     * Services Region.</p>
     */
    inline CreateReplicationInstanceRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>An KMS key identifier that is used to encrypt the data on the replication
     * instance.</p> <p>If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then DMS uses your default encryption key.</p> <p>KMS creates the
     * default encryption key for your Amazon Web Services account. Your Amazon Web
     * Services account has a different default encryption key for each Amazon Web
     * Services Region.</p>
     */
    inline CreateReplicationInstanceRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>An KMS key identifier that is used to encrypt the data on the replication
     * instance.</p> <p>If you don't specify a value for the <code>KmsKeyId</code>
     * parameter, then DMS uses your default encryption key.</p> <p>KMS creates the
     * default encryption key for your Amazon Web Services account. Your Amazon Web
     * Services account has a different default encryption key for each Amazon Web
     * Services Region.</p>
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
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

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


    /**
     * <p>A list of custom DNS name servers supported for the replication instance to
     * access your on-premise source or target database. This list overrides the
     * default name servers supported by the replication instance. You can specify a
     * comma-separated list of internet addresses for up to four on-premise DNS name
     * servers. For example: <code>"1.1.1.1,2.2.2.2,3.3.3.3,4.4.4.4"</code> </p>
     */
    inline const Aws::String& GetDnsNameServers() const{ return m_dnsNameServers; }

    /**
     * <p>A list of custom DNS name servers supported for the replication instance to
     * access your on-premise source or target database. This list overrides the
     * default name servers supported by the replication instance. You can specify a
     * comma-separated list of internet addresses for up to four on-premise DNS name
     * servers. For example: <code>"1.1.1.1,2.2.2.2,3.3.3.3,4.4.4.4"</code> </p>
     */
    inline bool DnsNameServersHasBeenSet() const { return m_dnsNameServersHasBeenSet; }

    /**
     * <p>A list of custom DNS name servers supported for the replication instance to
     * access your on-premise source or target database. This list overrides the
     * default name servers supported by the replication instance. You can specify a
     * comma-separated list of internet addresses for up to four on-premise DNS name
     * servers. For example: <code>"1.1.1.1,2.2.2.2,3.3.3.3,4.4.4.4"</code> </p>
     */
    inline void SetDnsNameServers(const Aws::String& value) { m_dnsNameServersHasBeenSet = true; m_dnsNameServers = value; }

    /**
     * <p>A list of custom DNS name servers supported for the replication instance to
     * access your on-premise source or target database. This list overrides the
     * default name servers supported by the replication instance. You can specify a
     * comma-separated list of internet addresses for up to four on-premise DNS name
     * servers. For example: <code>"1.1.1.1,2.2.2.2,3.3.3.3,4.4.4.4"</code> </p>
     */
    inline void SetDnsNameServers(Aws::String&& value) { m_dnsNameServersHasBeenSet = true; m_dnsNameServers = std::move(value); }

    /**
     * <p>A list of custom DNS name servers supported for the replication instance to
     * access your on-premise source or target database. This list overrides the
     * default name servers supported by the replication instance. You can specify a
     * comma-separated list of internet addresses for up to four on-premise DNS name
     * servers. For example: <code>"1.1.1.1,2.2.2.2,3.3.3.3,4.4.4.4"</code> </p>
     */
    inline void SetDnsNameServers(const char* value) { m_dnsNameServersHasBeenSet = true; m_dnsNameServers.assign(value); }

    /**
     * <p>A list of custom DNS name servers supported for the replication instance to
     * access your on-premise source or target database. This list overrides the
     * default name servers supported by the replication instance. You can specify a
     * comma-separated list of internet addresses for up to four on-premise DNS name
     * servers. For example: <code>"1.1.1.1,2.2.2.2,3.3.3.3,4.4.4.4"</code> </p>
     */
    inline CreateReplicationInstanceRequest& WithDnsNameServers(const Aws::String& value) { SetDnsNameServers(value); return *this;}

    /**
     * <p>A list of custom DNS name servers supported for the replication instance to
     * access your on-premise source or target database. This list overrides the
     * default name servers supported by the replication instance. You can specify a
     * comma-separated list of internet addresses for up to four on-premise DNS name
     * servers. For example: <code>"1.1.1.1,2.2.2.2,3.3.3.3,4.4.4.4"</code> </p>
     */
    inline CreateReplicationInstanceRequest& WithDnsNameServers(Aws::String&& value) { SetDnsNameServers(std::move(value)); return *this;}

    /**
     * <p>A list of custom DNS name servers supported for the replication instance to
     * access your on-premise source or target database. This list overrides the
     * default name servers supported by the replication instance. You can specify a
     * comma-separated list of internet addresses for up to four on-premise DNS name
     * servers. For example: <code>"1.1.1.1,2.2.2.2,3.3.3.3,4.4.4.4"</code> </p>
     */
    inline CreateReplicationInstanceRequest& WithDnsNameServers(const char* value) { SetDnsNameServers(value); return *this;}


    /**
     * <p>A friendly name for the resource identifier at the end of the
     * <code>EndpointArn</code> response parameter that is returned in the created
     * <code>Endpoint</code> object. The value for this parameter can have up to 31
     * characters. It can contain only ASCII letters, digits, and hyphen ('-'). Also,
     * it can't end with a hyphen or contain two consecutive hyphens, and can only
     * begin with a letter, such as <code>Example-App-ARN1</code>. For example, this
     * value might result in the <code>EndpointArn</code> value
     * <code>arn:aws:dms:eu-west-1:012345678901:rep:Example-App-ARN1</code>. If you
     * don't specify a <code>ResourceIdentifier</code> value, DMS generates a default
     * identifier value for the end of <code>EndpointArn</code>.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    /**
     * <p>A friendly name for the resource identifier at the end of the
     * <code>EndpointArn</code> response parameter that is returned in the created
     * <code>Endpoint</code> object. The value for this parameter can have up to 31
     * characters. It can contain only ASCII letters, digits, and hyphen ('-'). Also,
     * it can't end with a hyphen or contain two consecutive hyphens, and can only
     * begin with a letter, such as <code>Example-App-ARN1</code>. For example, this
     * value might result in the <code>EndpointArn</code> value
     * <code>arn:aws:dms:eu-west-1:012345678901:rep:Example-App-ARN1</code>. If you
     * don't specify a <code>ResourceIdentifier</code> value, DMS generates a default
     * identifier value for the end of <code>EndpointArn</code>.</p>
     */
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    /**
     * <p>A friendly name for the resource identifier at the end of the
     * <code>EndpointArn</code> response parameter that is returned in the created
     * <code>Endpoint</code> object. The value for this parameter can have up to 31
     * characters. It can contain only ASCII letters, digits, and hyphen ('-'). Also,
     * it can't end with a hyphen or contain two consecutive hyphens, and can only
     * begin with a letter, such as <code>Example-App-ARN1</code>. For example, this
     * value might result in the <code>EndpointArn</code> value
     * <code>arn:aws:dms:eu-west-1:012345678901:rep:Example-App-ARN1</code>. If you
     * don't specify a <code>ResourceIdentifier</code> value, DMS generates a default
     * identifier value for the end of <code>EndpointArn</code>.</p>
     */
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /**
     * <p>A friendly name for the resource identifier at the end of the
     * <code>EndpointArn</code> response parameter that is returned in the created
     * <code>Endpoint</code> object. The value for this parameter can have up to 31
     * characters. It can contain only ASCII letters, digits, and hyphen ('-'). Also,
     * it can't end with a hyphen or contain two consecutive hyphens, and can only
     * begin with a letter, such as <code>Example-App-ARN1</code>. For example, this
     * value might result in the <code>EndpointArn</code> value
     * <code>arn:aws:dms:eu-west-1:012345678901:rep:Example-App-ARN1</code>. If you
     * don't specify a <code>ResourceIdentifier</code> value, DMS generates a default
     * identifier value for the end of <code>EndpointArn</code>.</p>
     */
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    /**
     * <p>A friendly name for the resource identifier at the end of the
     * <code>EndpointArn</code> response parameter that is returned in the created
     * <code>Endpoint</code> object. The value for this parameter can have up to 31
     * characters. It can contain only ASCII letters, digits, and hyphen ('-'). Also,
     * it can't end with a hyphen or contain two consecutive hyphens, and can only
     * begin with a letter, such as <code>Example-App-ARN1</code>. For example, this
     * value might result in the <code>EndpointArn</code> value
     * <code>arn:aws:dms:eu-west-1:012345678901:rep:Example-App-ARN1</code>. If you
     * don't specify a <code>ResourceIdentifier</code> value, DMS generates a default
     * identifier value for the end of <code>EndpointArn</code>.</p>
     */
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }

    /**
     * <p>A friendly name for the resource identifier at the end of the
     * <code>EndpointArn</code> response parameter that is returned in the created
     * <code>Endpoint</code> object. The value for this parameter can have up to 31
     * characters. It can contain only ASCII letters, digits, and hyphen ('-'). Also,
     * it can't end with a hyphen or contain two consecutive hyphens, and can only
     * begin with a letter, such as <code>Example-App-ARN1</code>. For example, this
     * value might result in the <code>EndpointArn</code> value
     * <code>arn:aws:dms:eu-west-1:012345678901:rep:Example-App-ARN1</code>. If you
     * don't specify a <code>ResourceIdentifier</code> value, DMS generates a default
     * identifier value for the end of <code>EndpointArn</code>.</p>
     */
    inline CreateReplicationInstanceRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>A friendly name for the resource identifier at the end of the
     * <code>EndpointArn</code> response parameter that is returned in the created
     * <code>Endpoint</code> object. The value for this parameter can have up to 31
     * characters. It can contain only ASCII letters, digits, and hyphen ('-'). Also,
     * it can't end with a hyphen or contain two consecutive hyphens, and can only
     * begin with a letter, such as <code>Example-App-ARN1</code>. For example, this
     * value might result in the <code>EndpointArn</code> value
     * <code>arn:aws:dms:eu-west-1:012345678901:rep:Example-App-ARN1</code>. If you
     * don't specify a <code>ResourceIdentifier</code> value, DMS generates a default
     * identifier value for the end of <code>EndpointArn</code>.</p>
     */
    inline CreateReplicationInstanceRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>A friendly name for the resource identifier at the end of the
     * <code>EndpointArn</code> response parameter that is returned in the created
     * <code>Endpoint</code> object. The value for this parameter can have up to 31
     * characters. It can contain only ASCII letters, digits, and hyphen ('-'). Also,
     * it can't end with a hyphen or contain two consecutive hyphens, and can only
     * begin with a letter, such as <code>Example-App-ARN1</code>. For example, this
     * value might result in the <code>EndpointArn</code> value
     * <code>arn:aws:dms:eu-west-1:012345678901:rep:Example-App-ARN1</code>. If you
     * don't specify a <code>ResourceIdentifier</code> value, DMS generates a default
     * identifier value for the end of <code>EndpointArn</code>.</p>
     */
    inline CreateReplicationInstanceRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}


    /**
     * <p>The type of IP address protocol used by a replication instance, such as IPv4
     * only or Dual-stack that supports both IPv4 and IPv6 addressing. IPv6 only is not
     * yet supported.</p>
     */
    inline const Aws::String& GetNetworkType() const{ return m_networkType; }

    /**
     * <p>The type of IP address protocol used by a replication instance, such as IPv4
     * only or Dual-stack that supports both IPv4 and IPv6 addressing. IPv6 only is not
     * yet supported.</p>
     */
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }

    /**
     * <p>The type of IP address protocol used by a replication instance, such as IPv4
     * only or Dual-stack that supports both IPv4 and IPv6 addressing. IPv6 only is not
     * yet supported.</p>
     */
    inline void SetNetworkType(const Aws::String& value) { m_networkTypeHasBeenSet = true; m_networkType = value; }

    /**
     * <p>The type of IP address protocol used by a replication instance, such as IPv4
     * only or Dual-stack that supports both IPv4 and IPv6 addressing. IPv6 only is not
     * yet supported.</p>
     */
    inline void SetNetworkType(Aws::String&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::move(value); }

    /**
     * <p>The type of IP address protocol used by a replication instance, such as IPv4
     * only or Dual-stack that supports both IPv4 and IPv6 addressing. IPv6 only is not
     * yet supported.</p>
     */
    inline void SetNetworkType(const char* value) { m_networkTypeHasBeenSet = true; m_networkType.assign(value); }

    /**
     * <p>The type of IP address protocol used by a replication instance, such as IPv4
     * only or Dual-stack that supports both IPv4 and IPv6 addressing. IPv6 only is not
     * yet supported.</p>
     */
    inline CreateReplicationInstanceRequest& WithNetworkType(const Aws::String& value) { SetNetworkType(value); return *this;}

    /**
     * <p>The type of IP address protocol used by a replication instance, such as IPv4
     * only or Dual-stack that supports both IPv4 and IPv6 addressing. IPv6 only is not
     * yet supported.</p>
     */
    inline CreateReplicationInstanceRequest& WithNetworkType(Aws::String&& value) { SetNetworkType(std::move(value)); return *this;}

    /**
     * <p>The type of IP address protocol used by a replication instance, such as IPv4
     * only or Dual-stack that supports both IPv4 and IPv6 addressing. IPv6 only is not
     * yet supported.</p>
     */
    inline CreateReplicationInstanceRequest& WithNetworkType(const char* value) { SetNetworkType(value); return *this;}

  private:

    Aws::String m_replicationInstanceIdentifier;
    bool m_replicationInstanceIdentifierHasBeenSet = false;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    Aws::String m_replicationInstanceClass;
    bool m_replicationInstanceClassHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_replicationSubnetGroupIdentifier;
    bool m_replicationSubnetGroupIdentifierHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::String m_dnsNameServers;
    bool m_dnsNameServersHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::String m_networkType;
    bool m_networkTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
