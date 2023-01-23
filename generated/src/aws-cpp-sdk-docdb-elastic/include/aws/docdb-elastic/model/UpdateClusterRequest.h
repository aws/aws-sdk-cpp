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
  class UpdateClusterRequest : public DocDBElasticRequest
  {
  public:
    AWS_DOCDBELASTIC_API UpdateClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCluster"; }

    AWS_DOCDBELASTIC_API Aws::String SerializePayload() const override;


    /**
     * <p>The password for the Elastic DocumentDB cluster administrator. This password
     * can contain any printable ASCII character except forward slash (/), double quote
     * ("), or the "at" symbol (@).</p> <p> <i>Constraints</i>: Must contain from 8 to
     * 100 characters.</p>
     */
    inline const Aws::String& GetAdminUserPassword() const{ return m_adminUserPassword; }

    /**
     * <p>The password for the Elastic DocumentDB cluster administrator. This password
     * can contain any printable ASCII character except forward slash (/), double quote
     * ("), or the "at" symbol (@).</p> <p> <i>Constraints</i>: Must contain from 8 to
     * 100 characters.</p>
     */
    inline bool AdminUserPasswordHasBeenSet() const { return m_adminUserPasswordHasBeenSet; }

    /**
     * <p>The password for the Elastic DocumentDB cluster administrator. This password
     * can contain any printable ASCII character except forward slash (/), double quote
     * ("), or the "at" symbol (@).</p> <p> <i>Constraints</i>: Must contain from 8 to
     * 100 characters.</p>
     */
    inline void SetAdminUserPassword(const Aws::String& value) { m_adminUserPasswordHasBeenSet = true; m_adminUserPassword = value; }

    /**
     * <p>The password for the Elastic DocumentDB cluster administrator. This password
     * can contain any printable ASCII character except forward slash (/), double quote
     * ("), or the "at" symbol (@).</p> <p> <i>Constraints</i>: Must contain from 8 to
     * 100 characters.</p>
     */
    inline void SetAdminUserPassword(Aws::String&& value) { m_adminUserPasswordHasBeenSet = true; m_adminUserPassword = std::move(value); }

    /**
     * <p>The password for the Elastic DocumentDB cluster administrator. This password
     * can contain any printable ASCII character except forward slash (/), double quote
     * ("), or the "at" symbol (@).</p> <p> <i>Constraints</i>: Must contain from 8 to
     * 100 characters.</p>
     */
    inline void SetAdminUserPassword(const char* value) { m_adminUserPasswordHasBeenSet = true; m_adminUserPassword.assign(value); }

    /**
     * <p>The password for the Elastic DocumentDB cluster administrator. This password
     * can contain any printable ASCII character except forward slash (/), double quote
     * ("), or the "at" symbol (@).</p> <p> <i>Constraints</i>: Must contain from 8 to
     * 100 characters.</p>
     */
    inline UpdateClusterRequest& WithAdminUserPassword(const Aws::String& value) { SetAdminUserPassword(value); return *this;}

    /**
     * <p>The password for the Elastic DocumentDB cluster administrator. This password
     * can contain any printable ASCII character except forward slash (/), double quote
     * ("), or the "at" symbol (@).</p> <p> <i>Constraints</i>: Must contain from 8 to
     * 100 characters.</p>
     */
    inline UpdateClusterRequest& WithAdminUserPassword(Aws::String&& value) { SetAdminUserPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the Elastic DocumentDB cluster administrator. This password
     * can contain any printable ASCII character except forward slash (/), double quote
     * ("), or the "at" symbol (@).</p> <p> <i>Constraints</i>: Must contain from 8 to
     * 100 characters.</p>
     */
    inline UpdateClusterRequest& WithAdminUserPassword(const char* value) { SetAdminUserPassword(value); return *this;}


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
    inline UpdateClusterRequest& WithAuthType(const Auth& value) { SetAuthType(value); return *this;}

    /**
     * <p>The authentication type for the Elastic DocumentDB cluster.</p>
     */
    inline UpdateClusterRequest& WithAuthType(Auth&& value) { SetAuthType(std::move(value)); return *this;}


    /**
     * <p>The client token for the Elastic DocumentDB cluster.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The client token for the Elastic DocumentDB cluster.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The client token for the Elastic DocumentDB cluster.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The client token for the Elastic DocumentDB cluster.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The client token for the Elastic DocumentDB cluster.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The client token for the Elastic DocumentDB cluster.</p>
     */
    inline UpdateClusterRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The client token for the Elastic DocumentDB cluster.</p>
     */
    inline UpdateClusterRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The client token for the Elastic DocumentDB cluster.</p>
     */
    inline UpdateClusterRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


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
    inline UpdateClusterRequest& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline UpdateClusterRequest& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline UpdateClusterRequest& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


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

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> <i>Format</i>:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> <i>Default</i>: a 30-minute window
     * selected at random from an 8-hour block of time for each Amazon Web Services
     * Region, occurring on a random day of the week.</p> <p> <i>Valid days</i>: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun</p> <p> <i>Constraints</i>: Minimum 30-minute
     * window.</p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> <i>Format</i>:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> <i>Default</i>: a 30-minute window
     * selected at random from an 8-hour block of time for each Amazon Web Services
     * Region, occurring on a random day of the week.</p> <p> <i>Valid days</i>: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun</p> <p> <i>Constraints</i>: Minimum 30-minute
     * window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> <i>Format</i>:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> <i>Default</i>: a 30-minute window
     * selected at random from an 8-hour block of time for each Amazon Web Services
     * Region, occurring on a random day of the week.</p> <p> <i>Valid days</i>: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun</p> <p> <i>Constraints</i>: Minimum 30-minute
     * window.</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> <i>Format</i>:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> <i>Default</i>: a 30-minute window
     * selected at random from an 8-hour block of time for each Amazon Web Services
     * Region, occurring on a random day of the week.</p> <p> <i>Valid days</i>: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun</p> <p> <i>Constraints</i>: Minimum 30-minute
     * window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> <i>Format</i>:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> <i>Default</i>: a 30-minute window
     * selected at random from an 8-hour block of time for each Amazon Web Services
     * Region, occurring on a random day of the week.</p> <p> <i>Valid days</i>: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun</p> <p> <i>Constraints</i>: Minimum 30-minute
     * window.</p>
     */
    inline UpdateClusterRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> <i>Format</i>:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> <i>Default</i>: a 30-minute window
     * selected at random from an 8-hour block of time for each Amazon Web Services
     * Region, occurring on a random day of the week.</p> <p> <i>Valid days</i>: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun</p> <p> <i>Constraints</i>: Minimum 30-minute
     * window.</p>
     */
    inline UpdateClusterRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> <i>Format</i>:
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> </p> <p> <i>Default</i>: a 30-minute window
     * selected at random from an 8-hour block of time for each Amazon Web Services
     * Region, occurring on a random day of the week.</p> <p> <i>Valid days</i>: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun</p> <p> <i>Constraints</i>: Minimum 30-minute
     * window.</p>
     */
    inline UpdateClusterRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


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
    inline UpdateClusterRequest& WithShardCapacity(int value) { SetShardCapacity(value); return *this;}


    /**
     * <p>The number of shards to create in the Elastic DocumentDB cluster.</p>
     */
    inline int GetShardCount() const{ return m_shardCount; }

    /**
     * <p>The number of shards to create in the Elastic DocumentDB cluster.</p>
     */
    inline bool ShardCountHasBeenSet() const { return m_shardCountHasBeenSet; }

    /**
     * <p>The number of shards to create in the Elastic DocumentDB cluster.</p>
     */
    inline void SetShardCount(int value) { m_shardCountHasBeenSet = true; m_shardCount = value; }

    /**
     * <p>The number of shards to create in the Elastic DocumentDB cluster.</p>
     */
    inline UpdateClusterRequest& WithShardCount(int value) { SetShardCount(value); return *this;}


    /**
     * <p>The number of shards to create in the Elastic DocumentDB cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The number of shards to create in the Elastic DocumentDB cluster.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The number of shards to create in the Elastic DocumentDB cluster.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The number of shards to create in the Elastic DocumentDB cluster.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The number of shards to create in the Elastic DocumentDB cluster.</p>
     */
    inline UpdateClusterRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The number of shards to create in the Elastic DocumentDB cluster.</p>
     */
    inline UpdateClusterRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The number of shards to create in the Elastic DocumentDB cluster.</p>
     */
    inline UpdateClusterRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The number of shards to create in the Elastic DocumentDB cluster.</p>
     */
    inline UpdateClusterRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The number of shards to create in the Elastic DocumentDB cluster.</p>
     */
    inline UpdateClusterRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>A list of EC2 VPC security groups to associate with the new Elastic
     * DocumentDB cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>A list of EC2 VPC security groups to associate with the new Elastic
     * DocumentDB cluster.</p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>A list of EC2 VPC security groups to associate with the new Elastic
     * DocumentDB cluster.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of EC2 VPC security groups to associate with the new Elastic
     * DocumentDB cluster.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>A list of EC2 VPC security groups to associate with the new Elastic
     * DocumentDB cluster.</p>
     */
    inline UpdateClusterRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of EC2 VPC security groups to associate with the new Elastic
     * DocumentDB cluster.</p>
     */
    inline UpdateClusterRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of EC2 VPC security groups to associate with the new Elastic
     * DocumentDB cluster.</p>
     */
    inline UpdateClusterRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of EC2 VPC security groups to associate with the new Elastic
     * DocumentDB cluster.</p>
     */
    inline UpdateClusterRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of EC2 VPC security groups to associate with the new Elastic
     * DocumentDB cluster.</p>
     */
    inline UpdateClusterRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

  private:

    Aws::String m_adminUserPassword;
    bool m_adminUserPasswordHasBeenSet = false;

    Auth m_authType;
    bool m_authTypeHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    int m_shardCapacity;
    bool m_shardCapacityHasBeenSet = false;

    int m_shardCount;
    bool m_shardCountHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
