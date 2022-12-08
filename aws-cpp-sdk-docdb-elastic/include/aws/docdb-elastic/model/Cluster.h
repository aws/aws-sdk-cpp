/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/docdb-elastic/model/Auth.h>
#include <aws/docdb-elastic/model/Status.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Returns information about a specific Elastic DocumentDB
   * cluster.</p><p><h3>See Also:</h3>   <a
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


    /**
     * <p>The name of the Elastic DocumentDB cluster administrator.</p>
     */
    inline const Aws::String& GetAdminUserName() const{ return m_adminUserName; }

    /**
     * <p>The name of the Elastic DocumentDB cluster administrator.</p>
     */
    inline bool AdminUserNameHasBeenSet() const { return m_adminUserNameHasBeenSet; }

    /**
     * <p>The name of the Elastic DocumentDB cluster administrator.</p>
     */
    inline void SetAdminUserName(const Aws::String& value) { m_adminUserNameHasBeenSet = true; m_adminUserName = value; }

    /**
     * <p>The name of the Elastic DocumentDB cluster administrator.</p>
     */
    inline void SetAdminUserName(Aws::String&& value) { m_adminUserNameHasBeenSet = true; m_adminUserName = std::move(value); }

    /**
     * <p>The name of the Elastic DocumentDB cluster administrator.</p>
     */
    inline void SetAdminUserName(const char* value) { m_adminUserNameHasBeenSet = true; m_adminUserName.assign(value); }

    /**
     * <p>The name of the Elastic DocumentDB cluster administrator.</p>
     */
    inline Cluster& WithAdminUserName(const Aws::String& value) { SetAdminUserName(value); return *this;}

    /**
     * <p>The name of the Elastic DocumentDB cluster administrator.</p>
     */
    inline Cluster& WithAdminUserName(Aws::String&& value) { SetAdminUserName(std::move(value)); return *this;}

    /**
     * <p>The name of the Elastic DocumentDB cluster administrator.</p>
     */
    inline Cluster& WithAdminUserName(const char* value) { SetAdminUserName(value); return *this;}


    /**
     * <p>The authentication type for the Elastic DocumentDB cluster.</p>
     */
    inline const Auth& GetAuthType() const{ return m_authType; }

    /**
     * <p>The authentication type for the Elastic DocumentDB cluster.</p>
     */
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }

    /**
     * <p>The authentication type for the Elastic DocumentDB cluster.</p>
     */
    inline void SetAuthType(const Auth& value) { m_authTypeHasBeenSet = true; m_authType = value; }

    /**
     * <p>The authentication type for the Elastic DocumentDB cluster.</p>
     */
    inline void SetAuthType(Auth&& value) { m_authTypeHasBeenSet = true; m_authType = std::move(value); }

    /**
     * <p>The authentication type for the Elastic DocumentDB cluster.</p>
     */
    inline Cluster& WithAuthType(const Auth& value) { SetAuthType(value); return *this;}

    /**
     * <p>The authentication type for the Elastic DocumentDB cluster.</p>
     */
    inline Cluster& WithAuthType(Auth&& value) { SetAuthType(std::move(value)); return *this;}


    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }

    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline Cluster& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline Cluster& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline Cluster& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * <p>The URL used to connect to the Elastic DocumentDB cluster.</p>
     */
    inline const Aws::String& GetClusterEndpoint() const{ return m_clusterEndpoint; }

    /**
     * <p>The URL used to connect to the Elastic DocumentDB cluster.</p>
     */
    inline bool ClusterEndpointHasBeenSet() const { return m_clusterEndpointHasBeenSet; }

    /**
     * <p>The URL used to connect to the Elastic DocumentDB cluster.</p>
     */
    inline void SetClusterEndpoint(const Aws::String& value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint = value; }

    /**
     * <p>The URL used to connect to the Elastic DocumentDB cluster.</p>
     */
    inline void SetClusterEndpoint(Aws::String&& value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint = std::move(value); }

    /**
     * <p>The URL used to connect to the Elastic DocumentDB cluster.</p>
     */
    inline void SetClusterEndpoint(const char* value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint.assign(value); }

    /**
     * <p>The URL used to connect to the Elastic DocumentDB cluster.</p>
     */
    inline Cluster& WithClusterEndpoint(const Aws::String& value) { SetClusterEndpoint(value); return *this;}

    /**
     * <p>The URL used to connect to the Elastic DocumentDB cluster.</p>
     */
    inline Cluster& WithClusterEndpoint(Aws::String&& value) { SetClusterEndpoint(std::move(value)); return *this;}

    /**
     * <p>The URL used to connect to the Elastic DocumentDB cluster.</p>
     */
    inline Cluster& WithClusterEndpoint(const char* value) { SetClusterEndpoint(value); return *this;}


    /**
     * <p>The name of the Elastic DocumentDB cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the Elastic DocumentDB cluster.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the Elastic DocumentDB cluster.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the Elastic DocumentDB cluster.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the Elastic DocumentDB cluster.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the Elastic DocumentDB cluster.</p>
     */
    inline Cluster& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the Elastic DocumentDB cluster.</p>
     */
    inline Cluster& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the Elastic DocumentDB cluster.</p>
     */
    inline Cluster& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The time when the Elastic DocumentDB cluster was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline const Aws::String& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time when the Elastic DocumentDB cluster was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time when the Elastic DocumentDB cluster was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline void SetCreateTime(const Aws::String& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time when the Elastic DocumentDB cluster was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline void SetCreateTime(Aws::String&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time when the Elastic DocumentDB cluster was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline void SetCreateTime(const char* value) { m_createTimeHasBeenSet = true; m_createTime.assign(value); }

    /**
     * <p>The time when the Elastic DocumentDB cluster was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline Cluster& WithCreateTime(const Aws::String& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time when the Elastic DocumentDB cluster was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline Cluster& WithCreateTime(Aws::String&& value) { SetCreateTime(std::move(value)); return *this;}

    /**
     * <p>The time when the Elastic DocumentDB cluster was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline Cluster& WithCreateTime(const char* value) { SetCreateTime(value); return *this;}


    /**
     * <p>The KMS key identifier to use to encrypt the Elastic DocumentDB cluster.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The KMS key identifier to use to encrypt the Elastic DocumentDB cluster.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The KMS key identifier to use to encrypt the Elastic DocumentDB cluster.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The KMS key identifier to use to encrypt the Elastic DocumentDB cluster.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The KMS key identifier to use to encrypt the Elastic DocumentDB cluster.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The KMS key identifier to use to encrypt the Elastic DocumentDB cluster.</p>
     */
    inline Cluster& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key identifier to use to encrypt the Elastic DocumentDB cluster.</p>
     */
    inline Cluster& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key identifier to use to encrypt the Elastic DocumentDB cluster.</p>
     */
    inline Cluster& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> <i>Format</i>:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> <i>Format</i>:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> <i>Format</i>:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> <i>Format</i>:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> <i>Format</i>:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> <i>Format</i>:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     */
    inline Cluster& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> <i>Format</i>:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     */
    inline Cluster& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> <i>Format</i>:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     */
    inline Cluster& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>The capacity of each shard in the Elastic DocumentDB cluster.</p>
     */
    inline int GetShardCapacity() const{ return m_shardCapacity; }

    /**
     * <p>The capacity of each shard in the Elastic DocumentDB cluster.</p>
     */
    inline bool ShardCapacityHasBeenSet() const { return m_shardCapacityHasBeenSet; }

    /**
     * <p>The capacity of each shard in the Elastic DocumentDB cluster.</p>
     */
    inline void SetShardCapacity(int value) { m_shardCapacityHasBeenSet = true; m_shardCapacity = value; }

    /**
     * <p>The capacity of each shard in the Elastic DocumentDB cluster.</p>
     */
    inline Cluster& WithShardCapacity(int value) { SetShardCapacity(value); return *this;}


    /**
     * <p>The number of shards in the Elastic DocumentDB cluster.</p>
     */
    inline int GetShardCount() const{ return m_shardCount; }

    /**
     * <p>The number of shards in the Elastic DocumentDB cluster.</p>
     */
    inline bool ShardCountHasBeenSet() const { return m_shardCountHasBeenSet; }

    /**
     * <p>The number of shards in the Elastic DocumentDB cluster.</p>
     */
    inline void SetShardCount(int value) { m_shardCountHasBeenSet = true; m_shardCount = value; }

    /**
     * <p>The number of shards in the Elastic DocumentDB cluster.</p>
     */
    inline Cluster& WithShardCount(int value) { SetShardCount(value); return *this;}


    /**
     * <p>The status of the Elastic DocumentDB cluster.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Elastic DocumentDB cluster.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the Elastic DocumentDB cluster.</p>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the Elastic DocumentDB cluster.</p>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the Elastic DocumentDB cluster.</p>
     */
    inline Cluster& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Elastic DocumentDB cluster.</p>
     */
    inline Cluster& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The Amazon EC2 subnet IDs for the Elastic DocumentDB cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The Amazon EC2 subnet IDs for the Elastic DocumentDB cluster.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The Amazon EC2 subnet IDs for the Elastic DocumentDB cluster.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The Amazon EC2 subnet IDs for the Elastic DocumentDB cluster.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The Amazon EC2 subnet IDs for the Elastic DocumentDB cluster.</p>
     */
    inline Cluster& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The Amazon EC2 subnet IDs for the Elastic DocumentDB cluster.</p>
     */
    inline Cluster& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 subnet IDs for the Elastic DocumentDB cluster.</p>
     */
    inline Cluster& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The Amazon EC2 subnet IDs for the Elastic DocumentDB cluster.</p>
     */
    inline Cluster& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon EC2 subnet IDs for the Elastic DocumentDB cluster.</p>
     */
    inline Cluster& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>A list of EC2 VPC security groups associated with this cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>A list of EC2 VPC security groups associated with this cluster.</p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>A list of EC2 VPC security groups associated with this cluster.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of EC2 VPC security groups associated with this cluster.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>A list of EC2 VPC security groups associated with this cluster.</p>
     */
    inline Cluster& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of EC2 VPC security groups associated with this cluster.</p>
     */
    inline Cluster& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of EC2 VPC security groups associated with this cluster.</p>
     */
    inline Cluster& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of EC2 VPC security groups associated with this cluster.</p>
     */
    inline Cluster& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of EC2 VPC security groups associated with this cluster.</p>
     */
    inline Cluster& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

  private:

    Aws::String m_adminUserName;
    bool m_adminUserNameHasBeenSet = false;

    Auth m_authType;
    bool m_authTypeHasBeenSet = false;

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

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    int m_shardCapacity;
    bool m_shardCapacityHasBeenSet = false;

    int m_shardCount;
    bool m_shardCountHasBeenSet = false;

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
