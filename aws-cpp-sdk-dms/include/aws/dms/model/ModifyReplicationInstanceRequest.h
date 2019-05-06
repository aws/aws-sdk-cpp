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
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyReplicationInstanceMessage">AWS
   * API Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API ModifyReplicationInstanceRequest : public DatabaseMigrationServiceRequest
  {
  public:
    ModifyReplicationInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyReplicationInstance"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline const Aws::String& GetReplicationInstanceArn() const{ return m_replicationInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline bool ReplicationInstanceArnHasBeenSet() const { return m_replicationInstanceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline void SetReplicationInstanceArn(const Aws::String& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline void SetReplicationInstanceArn(Aws::String&& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline void SetReplicationInstanceArn(const char* value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline ModifyReplicationInstanceRequest& WithReplicationInstanceArn(const Aws::String& value) { SetReplicationInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline ModifyReplicationInstanceRequest& WithReplicationInstanceArn(Aws::String&& value) { SetReplicationInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline ModifyReplicationInstanceRequest& WithReplicationInstanceArn(const char* value) { SetReplicationInstanceArn(value); return *this;}


    /**
     * <p>The amount of storage (in gigabytes) to be allocated for the replication
     * instance.</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p>The amount of storage (in gigabytes) to be allocated for the replication
     * instance.</p>
     */
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }

    /**
     * <p>The amount of storage (in gigabytes) to be allocated for the replication
     * instance.</p>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p>The amount of storage (in gigabytes) to be allocated for the replication
     * instance.</p>
     */
    inline ModifyReplicationInstanceRequest& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}


    /**
     * <p>Indicates whether the changes should be applied immediately or during the
     * next maintenance window.</p>
     */
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }

    /**
     * <p>Indicates whether the changes should be applied immediately or during the
     * next maintenance window.</p>
     */
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }

    /**
     * <p>Indicates whether the changes should be applied immediately or during the
     * next maintenance window.</p>
     */
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }

    /**
     * <p>Indicates whether the changes should be applied immediately or during the
     * next maintenance window.</p>
     */
    inline ModifyReplicationInstanceRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}


    /**
     * <p>The compute and memory capacity of the replication instance.</p> <p> Valid
     * Values: <code>dms.t2.micro | dms.t2.small | dms.t2.medium | dms.t2.large |
     * dms.c4.large | dms.c4.xlarge | dms.c4.2xlarge | dms.c4.4xlarge </code> </p>
     */
    inline const Aws::String& GetReplicationInstanceClass() const{ return m_replicationInstanceClass; }

    /**
     * <p>The compute and memory capacity of the replication instance.</p> <p> Valid
     * Values: <code>dms.t2.micro | dms.t2.small | dms.t2.medium | dms.t2.large |
     * dms.c4.large | dms.c4.xlarge | dms.c4.2xlarge | dms.c4.4xlarge </code> </p>
     */
    inline bool ReplicationInstanceClassHasBeenSet() const { return m_replicationInstanceClassHasBeenSet; }

    /**
     * <p>The compute and memory capacity of the replication instance.</p> <p> Valid
     * Values: <code>dms.t2.micro | dms.t2.small | dms.t2.medium | dms.t2.large |
     * dms.c4.large | dms.c4.xlarge | dms.c4.2xlarge | dms.c4.4xlarge </code> </p>
     */
    inline void SetReplicationInstanceClass(const Aws::String& value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass = value; }

    /**
     * <p>The compute and memory capacity of the replication instance.</p> <p> Valid
     * Values: <code>dms.t2.micro | dms.t2.small | dms.t2.medium | dms.t2.large |
     * dms.c4.large | dms.c4.xlarge | dms.c4.2xlarge | dms.c4.4xlarge </code> </p>
     */
    inline void SetReplicationInstanceClass(Aws::String&& value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass = std::move(value); }

    /**
     * <p>The compute and memory capacity of the replication instance.</p> <p> Valid
     * Values: <code>dms.t2.micro | dms.t2.small | dms.t2.medium | dms.t2.large |
     * dms.c4.large | dms.c4.xlarge | dms.c4.2xlarge | dms.c4.4xlarge </code> </p>
     */
    inline void SetReplicationInstanceClass(const char* value) { m_replicationInstanceClassHasBeenSet = true; m_replicationInstanceClass.assign(value); }

    /**
     * <p>The compute and memory capacity of the replication instance.</p> <p> Valid
     * Values: <code>dms.t2.micro | dms.t2.small | dms.t2.medium | dms.t2.large |
     * dms.c4.large | dms.c4.xlarge | dms.c4.2xlarge | dms.c4.4xlarge </code> </p>
     */
    inline ModifyReplicationInstanceRequest& WithReplicationInstanceClass(const Aws::String& value) { SetReplicationInstanceClass(value); return *this;}

    /**
     * <p>The compute and memory capacity of the replication instance.</p> <p> Valid
     * Values: <code>dms.t2.micro | dms.t2.small | dms.t2.medium | dms.t2.large |
     * dms.c4.large | dms.c4.xlarge | dms.c4.2xlarge | dms.c4.4xlarge </code> </p>
     */
    inline ModifyReplicationInstanceRequest& WithReplicationInstanceClass(Aws::String&& value) { SetReplicationInstanceClass(std::move(value)); return *this;}

    /**
     * <p>The compute and memory capacity of the replication instance.</p> <p> Valid
     * Values: <code>dms.t2.micro | dms.t2.small | dms.t2.medium | dms.t2.large |
     * dms.c4.large | dms.c4.xlarge | dms.c4.2xlarge | dms.c4.4xlarge </code> </p>
     */
    inline ModifyReplicationInstanceRequest& WithReplicationInstanceClass(const char* value) { SetReplicationInstanceClass(value); return *this;}


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
    inline ModifyReplicationInstanceRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p> Specifies the VPC security group to be used with the replication instance.
     * The VPC security group must work with the VPC containing the replication
     * instance. </p>
     */
    inline ModifyReplicationInstanceRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p> Specifies the VPC security group to be used with the replication instance.
     * The VPC security group must work with the VPC containing the replication
     * instance. </p>
     */
    inline ModifyReplicationInstanceRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p> Specifies the VPC security group to be used with the replication instance.
     * The VPC security group must work with the VPC containing the replication
     * instance. </p>
     */
    inline ModifyReplicationInstanceRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p> Specifies the VPC security group to be used with the replication instance.
     * The VPC security group must work with the VPC containing the replication
     * instance. </p>
     */
    inline ModifyReplicationInstanceRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur,
     * which might result in an outage. Changing this parameter does not result in an
     * outage, except in the following situation, and the change is asynchronously
     * applied as soon as possible. If moving this window to the current time, there
     * must be at least 30 minutes between the current time and end of the window to
     * ensure pending changes are applied.</p> <p>Default: Uses existing setting</p>
     * <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon | Tue | Wed | Thu |
     * Fri | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur,
     * which might result in an outage. Changing this parameter does not result in an
     * outage, except in the following situation, and the change is asynchronously
     * applied as soon as possible. If moving this window to the current time, there
     * must be at least 30 minutes between the current time and end of the window to
     * ensure pending changes are applied.</p> <p>Default: Uses existing setting</p>
     * <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon | Tue | Wed | Thu |
     * Fri | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes</p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur,
     * which might result in an outage. Changing this parameter does not result in an
     * outage, except in the following situation, and the change is asynchronously
     * applied as soon as possible. If moving this window to the current time, there
     * must be at least 30 minutes between the current time and end of the window to
     * ensure pending changes are applied.</p> <p>Default: Uses existing setting</p>
     * <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon | Tue | Wed | Thu |
     * Fri | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur,
     * which might result in an outage. Changing this parameter does not result in an
     * outage, except in the following situation, and the change is asynchronously
     * applied as soon as possible. If moving this window to the current time, there
     * must be at least 30 minutes between the current time and end of the window to
     * ensure pending changes are applied.</p> <p>Default: Uses existing setting</p>
     * <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon | Tue | Wed | Thu |
     * Fri | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur,
     * which might result in an outage. Changing this parameter does not result in an
     * outage, except in the following situation, and the change is asynchronously
     * applied as soon as possible. If moving this window to the current time, there
     * must be at least 30 minutes between the current time and end of the window to
     * ensure pending changes are applied.</p> <p>Default: Uses existing setting</p>
     * <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon | Tue | Wed | Thu |
     * Fri | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur,
     * which might result in an outage. Changing this parameter does not result in an
     * outage, except in the following situation, and the change is asynchronously
     * applied as soon as possible. If moving this window to the current time, there
     * must be at least 30 minutes between the current time and end of the window to
     * ensure pending changes are applied.</p> <p>Default: Uses existing setting</p>
     * <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon | Tue | Wed | Thu |
     * Fri | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes</p>
     */
    inline ModifyReplicationInstanceRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur,
     * which might result in an outage. Changing this parameter does not result in an
     * outage, except in the following situation, and the change is asynchronously
     * applied as soon as possible. If moving this window to the current time, there
     * must be at least 30 minutes between the current time and end of the window to
     * ensure pending changes are applied.</p> <p>Default: Uses existing setting</p>
     * <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon | Tue | Wed | Thu |
     * Fri | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes</p>
     */
    inline ModifyReplicationInstanceRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur,
     * which might result in an outage. Changing this parameter does not result in an
     * outage, except in the following situation, and the change is asynchronously
     * applied as soon as possible. If moving this window to the current time, there
     * must be at least 30 minutes between the current time and end of the window to
     * ensure pending changes are applied.</p> <p>Default: Uses existing setting</p>
     * <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon | Tue | Wed | Thu |
     * Fri | Sat | Sun</p> <p>Constraints: Must be at least 30 minutes</p>
     */
    inline ModifyReplicationInstanceRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


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
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }

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
    inline ModifyReplicationInstanceRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}


    /**
     * <p>The engine version number of the replication instance.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The engine version number of the replication instance.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The engine version number of the replication instance.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The engine version number of the replication instance.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The engine version number of the replication instance.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The engine version number of the replication instance.</p>
     */
    inline ModifyReplicationInstanceRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The engine version number of the replication instance.</p>
     */
    inline ModifyReplicationInstanceRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The engine version number of the replication instance.</p>
     */
    inline ModifyReplicationInstanceRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>Indicates that major version upgrades are allowed. Changing this parameter
     * does not result in an outage and the change is asynchronously applied as soon as
     * possible.</p> <p>Constraints: This parameter must be set to true when specifying
     * a value for the <code>EngineVersion</code> parameter that is a different major
     * version than the replication instance's current version.</p>
     */
    inline bool GetAllowMajorVersionUpgrade() const{ return m_allowMajorVersionUpgrade; }

    /**
     * <p>Indicates that major version upgrades are allowed. Changing this parameter
     * does not result in an outage and the change is asynchronously applied as soon as
     * possible.</p> <p>Constraints: This parameter must be set to true when specifying
     * a value for the <code>EngineVersion</code> parameter that is a different major
     * version than the replication instance's current version.</p>
     */
    inline bool AllowMajorVersionUpgradeHasBeenSet() const { return m_allowMajorVersionUpgradeHasBeenSet; }

    /**
     * <p>Indicates that major version upgrades are allowed. Changing this parameter
     * does not result in an outage and the change is asynchronously applied as soon as
     * possible.</p> <p>Constraints: This parameter must be set to true when specifying
     * a value for the <code>EngineVersion</code> parameter that is a different major
     * version than the replication instance's current version.</p>
     */
    inline void SetAllowMajorVersionUpgrade(bool value) { m_allowMajorVersionUpgradeHasBeenSet = true; m_allowMajorVersionUpgrade = value; }

    /**
     * <p>Indicates that major version upgrades are allowed. Changing this parameter
     * does not result in an outage and the change is asynchronously applied as soon as
     * possible.</p> <p>Constraints: This parameter must be set to true when specifying
     * a value for the <code>EngineVersion</code> parameter that is a different major
     * version than the replication instance's current version.</p>
     */
    inline ModifyReplicationInstanceRequest& WithAllowMajorVersionUpgrade(bool value) { SetAllowMajorVersionUpgrade(value); return *this;}


    /**
     * <p> Indicates that minor version upgrades will be applied automatically to the
     * replication instance during the maintenance window. Changing this parameter does
     * not result in an outage except in the following case and the change is
     * asynchronously applied as soon as possible. An outage will result if this
     * parameter is set to <code>true</code> during the maintenance window, and a newer
     * minor version is available, and AWS DMS has enabled auto patching for that
     * engine version. </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p> Indicates that minor version upgrades will be applied automatically to the
     * replication instance during the maintenance window. Changing this parameter does
     * not result in an outage except in the following case and the change is
     * asynchronously applied as soon as possible. An outage will result if this
     * parameter is set to <code>true</code> during the maintenance window, and a newer
     * minor version is available, and AWS DMS has enabled auto patching for that
     * engine version. </p>
     */
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }

    /**
     * <p> Indicates that minor version upgrades will be applied automatically to the
     * replication instance during the maintenance window. Changing this parameter does
     * not result in an outage except in the following case and the change is
     * asynchronously applied as soon as possible. An outage will result if this
     * parameter is set to <code>true</code> during the maintenance window, and a newer
     * minor version is available, and AWS DMS has enabled auto patching for that
     * engine version. </p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p> Indicates that minor version upgrades will be applied automatically to the
     * replication instance during the maintenance window. Changing this parameter does
     * not result in an outage except in the following case and the change is
     * asynchronously applied as soon as possible. An outage will result if this
     * parameter is set to <code>true</code> during the maintenance window, and a newer
     * minor version is available, and AWS DMS has enabled auto patching for that
     * engine version. </p>
     */
    inline ModifyReplicationInstanceRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p>
     */
    inline const Aws::String& GetReplicationInstanceIdentifier() const{ return m_replicationInstanceIdentifier; }

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p>
     */
    inline bool ReplicationInstanceIdentifierHasBeenSet() const { return m_replicationInstanceIdentifierHasBeenSet; }

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p>
     */
    inline void SetReplicationInstanceIdentifier(const Aws::String& value) { m_replicationInstanceIdentifierHasBeenSet = true; m_replicationInstanceIdentifier = value; }

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p>
     */
    inline void SetReplicationInstanceIdentifier(Aws::String&& value) { m_replicationInstanceIdentifierHasBeenSet = true; m_replicationInstanceIdentifier = std::move(value); }

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p>
     */
    inline void SetReplicationInstanceIdentifier(const char* value) { m_replicationInstanceIdentifierHasBeenSet = true; m_replicationInstanceIdentifier.assign(value); }

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p>
     */
    inline ModifyReplicationInstanceRequest& WithReplicationInstanceIdentifier(const Aws::String& value) { SetReplicationInstanceIdentifier(value); return *this;}

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p>
     */
    inline ModifyReplicationInstanceRequest& WithReplicationInstanceIdentifier(Aws::String&& value) { SetReplicationInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p>
     */
    inline ModifyReplicationInstanceRequest& WithReplicationInstanceIdentifier(const char* value) { SetReplicationInstanceIdentifier(value); return *this;}

  private:

    Aws::String m_replicationInstanceArn;
    bool m_replicationInstanceArnHasBeenSet;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet;

    bool m_applyImmediately;
    bool m_applyImmediatelyHasBeenSet;

    Aws::String m_replicationInstanceClass;
    bool m_replicationInstanceClassHasBeenSet;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    bool m_allowMajorVersionUpgrade;
    bool m_allowMajorVersionUpgradeHasBeenSet;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;

    Aws::String m_replicationInstanceIdentifier;
    bool m_replicationInstanceIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
