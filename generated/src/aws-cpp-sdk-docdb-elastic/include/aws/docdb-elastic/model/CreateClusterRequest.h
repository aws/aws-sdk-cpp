/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/docdb-elastic/DocDBElasticRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/docdb-elastic/model/Auth.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DocDBElastic
{
namespace Model
{

  /**
   */
  class CreateClusterRequest : public DocDBElasticRequest
  {
  public:
    AWS_DOCDBELASTIC_API CreateClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCluster"; }

    AWS_DOCDBELASTIC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the Amazon DocumentDB elastic clusters administrator.</p> <p>
     * <i>Constraints</i>:</p> <ul> <li> <p>Must be from 1 to 63 letters or
     * numbers.</p> </li> <li> <p>The first character must be a letter.</p> </li> <li>
     * <p>Cannot be a reserved word.</p> </li> </ul>
     */
    inline const Aws::String& GetAdminUserName() const{ return m_adminUserName; }
    inline bool AdminUserNameHasBeenSet() const { return m_adminUserNameHasBeenSet; }
    inline void SetAdminUserName(const Aws::String& value) { m_adminUserNameHasBeenSet = true; m_adminUserName = value; }
    inline void SetAdminUserName(Aws::String&& value) { m_adminUserNameHasBeenSet = true; m_adminUserName = std::move(value); }
    inline void SetAdminUserName(const char* value) { m_adminUserNameHasBeenSet = true; m_adminUserName.assign(value); }
    inline CreateClusterRequest& WithAdminUserName(const Aws::String& value) { SetAdminUserName(value); return *this;}
    inline CreateClusterRequest& WithAdminUserName(Aws::String&& value) { SetAdminUserName(std::move(value)); return *this;}
    inline CreateClusterRequest& WithAdminUserName(const char* value) { SetAdminUserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password for the Amazon DocumentDB elastic clusters administrator. The
     * password can contain any printable ASCII characters.</p> <p>
     * <i>Constraints</i>:</p> <ul> <li> <p>Must contain from 8 to 100 characters.</p>
     * </li> <li> <p>Cannot contain a forward slash (/), double quote ("), or the "at"
     * symbol (@).</p> </li> </ul>
     */
    inline const Aws::String& GetAdminUserPassword() const{ return m_adminUserPassword; }
    inline bool AdminUserPasswordHasBeenSet() const { return m_adminUserPasswordHasBeenSet; }
    inline void SetAdminUserPassword(const Aws::String& value) { m_adminUserPasswordHasBeenSet = true; m_adminUserPassword = value; }
    inline void SetAdminUserPassword(Aws::String&& value) { m_adminUserPasswordHasBeenSet = true; m_adminUserPassword = std::move(value); }
    inline void SetAdminUserPassword(const char* value) { m_adminUserPasswordHasBeenSet = true; m_adminUserPassword.assign(value); }
    inline CreateClusterRequest& WithAdminUserPassword(const Aws::String& value) { SetAdminUserPassword(value); return *this;}
    inline CreateClusterRequest& WithAdminUserPassword(Aws::String&& value) { SetAdminUserPassword(std::move(value)); return *this;}
    inline CreateClusterRequest& WithAdminUserPassword(const char* value) { SetAdminUserPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication type used to determine where to fetch the password used
     * for accessing the elastic cluster. Valid types are <code>PLAIN_TEXT</code> or
     * <code>SECRET_ARN</code>.</p>
     */
    inline const Auth& GetAuthType() const{ return m_authType; }
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }
    inline void SetAuthType(const Auth& value) { m_authTypeHasBeenSet = true; m_authType = value; }
    inline void SetAuthType(Auth&& value) { m_authTypeHasBeenSet = true; m_authType = std::move(value); }
    inline CreateClusterRequest& WithAuthType(const Auth& value) { SetAuthType(value); return *this;}
    inline CreateClusterRequest& WithAuthType(Auth&& value) { SetAuthType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days for which automatic snapshots are retained.</p>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }
    inline CreateClusterRequest& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client token for the elastic cluster.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateClusterRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateClusterRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateClusterRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the new elastic cluster. This parameter is stored as a lowercase
     * string.</p> <p> <i>Constraints</i>:</p> <ul> <li> <p>Must contain from 1 to 63
     * letters, numbers, or hyphens.</p> </li> <li> <p>The first character must be a
     * letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two consecutive
     * hyphens.</p> </li> </ul> <p> <i>Example</i>: <code>my-cluster</code> </p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline CreateClusterRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline CreateClusterRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline CreateClusterRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key identifier to use to encrypt the new elastic cluster.</p> <p>The
     * KMS key identifier is the Amazon Resource Name (ARN) for the KMS encryption key.
     * If you are creating a cluster using the same Amazon account that owns this KMS
     * encryption key, you can use the KMS key alias instead of the ARN as the KMS
     * encryption key.</p> <p>If an encryption key is not specified, Amazon DocumentDB
     * uses the default encryption key that KMS creates for your account. Your account
     * has a different default encryption key for each Amazon Region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline CreateClusterRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline CreateClusterRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline CreateClusterRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled, as determined by the
     * <code>backupRetentionPeriod</code>.</p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }
    inline CreateClusterRequest& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}
    inline CreateClusterRequest& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}
    inline CreateClusterRequest& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> <i>Format</i>:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> <i>Default</i>: a 30-minute window
     * selected at random from an 8-hour block of time for each Amazon Web Services
     * Region, occurring on a random day of the week.</p> <p> <i>Valid days</i>: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun</p> <p> <i>Constraints</i>: Minimum 30-minute
     * window.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }
    inline CreateClusterRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}
    inline CreateClusterRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}
    inline CreateClusterRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of vCPUs assigned to each elastic cluster shard. Maximum is 64.
     * Allowed values are 2, 4, 8, 16, 32, 64.</p>
     */
    inline int GetShardCapacity() const{ return m_shardCapacity; }
    inline bool ShardCapacityHasBeenSet() const { return m_shardCapacityHasBeenSet; }
    inline void SetShardCapacity(int value) { m_shardCapacityHasBeenSet = true; m_shardCapacity = value; }
    inline CreateClusterRequest& WithShardCapacity(int value) { SetShardCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of shards assigned to the elastic cluster. Maximum is 32.</p>
     */
    inline int GetShardCount() const{ return m_shardCount; }
    inline bool ShardCountHasBeenSet() const { return m_shardCountHasBeenSet; }
    inline void SetShardCount(int value) { m_shardCountHasBeenSet = true; m_shardCount = value; }
    inline CreateClusterRequest& WithShardCount(int value) { SetShardCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of replica instances applying to all shards in the elastic
     * cluster. A <code>shardInstanceCount</code> value of 1 means there is one writer
     * instance, and any additional instances are replicas that can be used for reads
     * and to improve availability.</p>
     */
    inline int GetShardInstanceCount() const{ return m_shardInstanceCount; }
    inline bool ShardInstanceCountHasBeenSet() const { return m_shardInstanceCountHasBeenSet; }
    inline void SetShardInstanceCount(int value) { m_shardInstanceCountHasBeenSet = true; m_shardInstanceCount = value; }
    inline CreateClusterRequest& WithShardInstanceCount(int value) { SetShardInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 subnet IDs for the new elastic cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline CreateClusterRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline CreateClusterRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline CreateClusterRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline CreateClusterRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline CreateClusterRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to be assigned to the new elastic cluster.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateClusterRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateClusterRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateClusterRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateClusterRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateClusterRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateClusterRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateClusterRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateClusterRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateClusterRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of EC2 VPC security groups to associate with the new elastic
     * cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }
    inline CreateClusterRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}
    inline CreateClusterRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}
    inline CreateClusterRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    inline CreateClusterRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }
    inline CreateClusterRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_adminUserName;
    bool m_adminUserNameHasBeenSet = false;

    Aws::String m_adminUserPassword;
    bool m_adminUserPasswordHasBeenSet = false;

    Auth m_authType;
    bool m_authTypeHasBeenSet = false;

    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

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

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
