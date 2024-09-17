/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/docdb-elastic/model/Auth.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb-elastic/model/Status.h>
#include <aws/docdb-elastic/model/Shard.h>
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
namespace DocDBElastic
{
namespace Model
{

  /**
   * <p>Returns information about a specific elastic cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-elastic-2022-11-28/Cluster">AWS
   * API Reference</a></p>
   */
  class Cluster
  {
  public:
    AWS_DOCDBELASTIC_API Cluster();
    AWS_DOCDBELASTIC_API Cluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_DOCDBELASTIC_API Cluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DOCDBELASTIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the elastic cluster administrator.</p>
     */
    inline const Aws::String& GetAdminUserName() const{ return m_adminUserName; }
    inline bool AdminUserNameHasBeenSet() const { return m_adminUserNameHasBeenSet; }
    inline void SetAdminUserName(const Aws::String& value) { m_adminUserNameHasBeenSet = true; m_adminUserName = value; }
    inline void SetAdminUserName(Aws::String&& value) { m_adminUserNameHasBeenSet = true; m_adminUserName = std::move(value); }
    inline void SetAdminUserName(const char* value) { m_adminUserNameHasBeenSet = true; m_adminUserName.assign(value); }
    inline Cluster& WithAdminUserName(const Aws::String& value) { SetAdminUserName(value); return *this;}
    inline Cluster& WithAdminUserName(Aws::String&& value) { SetAdminUserName(std::move(value)); return *this;}
    inline Cluster& WithAdminUserName(const char* value) { SetAdminUserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication type for the elastic cluster.</p>
     */
    inline const Auth& GetAuthType() const{ return m_authType; }
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }
    inline void SetAuthType(const Auth& value) { m_authTypeHasBeenSet = true; m_authType = value; }
    inline void SetAuthType(Auth&& value) { m_authTypeHasBeenSet = true; m_authType = std::move(value); }
    inline Cluster& WithAuthType(const Auth& value) { SetAuthType(value); return *this;}
    inline Cluster& WithAuthType(Auth&& value) { SetAuthType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days for which automatic snapshots are retained.</p>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }
    inline Cluster& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN identifier of the elastic cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }
    inline Cluster& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline Cluster& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline Cluster& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL used to connect to the elastic cluster.</p>
     */
    inline const Aws::String& GetClusterEndpoint() const{ return m_clusterEndpoint; }
    inline bool ClusterEndpointHasBeenSet() const { return m_clusterEndpointHasBeenSet; }
    inline void SetClusterEndpoint(const Aws::String& value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint = value; }
    inline void SetClusterEndpoint(Aws::String&& value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint = std::move(value); }
    inline void SetClusterEndpoint(const char* value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint.assign(value); }
    inline Cluster& WithClusterEndpoint(const Aws::String& value) { SetClusterEndpoint(value); return *this;}
    inline Cluster& WithClusterEndpoint(Aws::String&& value) { SetClusterEndpoint(std::move(value)); return *this;}
    inline Cluster& WithClusterEndpoint(const char* value) { SetClusterEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the elastic cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline Cluster& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline Cluster& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline Cluster& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the elastic cluster was created in Universal Coordinated Time
     * (UTC).</p>
     */
    inline const Aws::String& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::String& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::String&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline void SetCreateTime(const char* value) { m_createTimeHasBeenSet = true; m_createTime.assign(value); }
    inline Cluster& WithCreateTime(const Aws::String& value) { SetCreateTime(value); return *this;}
    inline Cluster& WithCreateTime(Aws::String&& value) { SetCreateTime(std::move(value)); return *this;}
    inline Cluster& WithCreateTime(const char* value) { SetCreateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key identifier to use to encrypt the elastic cluster.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline Cluster& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline Cluster& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline Cluster& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled, as determined by <code>backupRetentionPeriod</code>.</p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }
    inline Cluster& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}
    inline Cluster& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}
    inline Cluster& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> <i>Format</i>:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }
    inline Cluster& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}
    inline Cluster& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}
    inline Cluster& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of vCPUs assigned to each elastic cluster shard. Maximum is 64.
     * Allowed values are 2, 4, 8, 16, 32, 64.</p>
     */
    inline int GetShardCapacity() const{ return m_shardCapacity; }
    inline bool ShardCapacityHasBeenSet() const { return m_shardCapacityHasBeenSet; }
    inline void SetShardCapacity(int value) { m_shardCapacityHasBeenSet = true; m_shardCapacity = value; }
    inline Cluster& WithShardCapacity(int value) { SetShardCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of shards assigned to the elastic cluster. Maximum is 32.</p>
     */
    inline int GetShardCount() const{ return m_shardCount; }
    inline bool ShardCountHasBeenSet() const { return m_shardCountHasBeenSet; }
    inline void SetShardCount(int value) { m_shardCountHasBeenSet = true; m_shardCount = value; }
    inline Cluster& WithShardCount(int value) { SetShardCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of replica instances applying to all shards in the cluster. A
     * <code>shardInstanceCount</code> value of 1 means there is one writer instance,
     * and any additional instances are replicas that can be used for reads and to
     * improve availability.</p>
     */
    inline int GetShardInstanceCount() const{ return m_shardInstanceCount; }
    inline bool ShardInstanceCountHasBeenSet() const { return m_shardInstanceCountHasBeenSet; }
    inline void SetShardInstanceCount(int value) { m_shardInstanceCountHasBeenSet = true; m_shardInstanceCount = value; }
    inline Cluster& WithShardInstanceCount(int value) { SetShardInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of shards in the cluster.</p>
     */
    inline const Aws::Vector<Shard>& GetShards() const{ return m_shards; }
    inline bool ShardsHasBeenSet() const { return m_shardsHasBeenSet; }
    inline void SetShards(const Aws::Vector<Shard>& value) { m_shardsHasBeenSet = true; m_shards = value; }
    inline void SetShards(Aws::Vector<Shard>&& value) { m_shardsHasBeenSet = true; m_shards = std::move(value); }
    inline Cluster& WithShards(const Aws::Vector<Shard>& value) { SetShards(value); return *this;}
    inline Cluster& WithShards(Aws::Vector<Shard>&& value) { SetShards(std::move(value)); return *this;}
    inline Cluster& AddShards(const Shard& value) { m_shardsHasBeenSet = true; m_shards.push_back(value); return *this; }
    inline Cluster& AddShards(Shard&& value) { m_shardsHasBeenSet = true; m_shards.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the elastic cluster.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Cluster& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline Cluster& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 subnet IDs for the elastic cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline Cluster& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline Cluster& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline Cluster& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline Cluster& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline Cluster& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of EC2 VPC security groups associated with thie elastic cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }
    inline Cluster& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}
    inline Cluster& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}
    inline Cluster& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    inline Cluster& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }
    inline Cluster& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_adminUserName;
    bool m_adminUserNameHasBeenSet = false;

    Auth m_authType;
    bool m_authTypeHasBeenSet = false;

    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_clusterEndpoint;
    bool m_clusterEndpointHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    int m_shardCapacity;
    bool m_shardCapacityHasBeenSet = false;

    int m_shardCount;
    bool m_shardCountHasBeenSet = false;

    int m_shardInstanceCount;
    bool m_shardInstanceCountHasBeenSet = false;

    Aws::Vector<Shard> m_shards;
    bool m_shardsHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
