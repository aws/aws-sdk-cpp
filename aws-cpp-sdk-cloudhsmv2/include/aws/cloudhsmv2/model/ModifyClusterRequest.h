/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/CloudHSMV2Request.h>
#include <aws/cloudhsmv2/model/BackupRetentionPolicy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{

  /**
   */
  class ModifyClusterRequest : public CloudHSMV2Request
  {
  public:
    AWS_CLOUDHSMV2_API ModifyClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyCluster"; }

    AWS_CLOUDHSMV2_API Aws::String SerializePayload() const override;

    AWS_CLOUDHSMV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A policy that defines how the service retains backups.</p>
     */
    inline const BackupRetentionPolicy& GetBackupRetentionPolicy() const{ return m_backupRetentionPolicy; }

    /**
     * <p>A policy that defines how the service retains backups.</p>
     */
    inline bool BackupRetentionPolicyHasBeenSet() const { return m_backupRetentionPolicyHasBeenSet; }

    /**
     * <p>A policy that defines how the service retains backups.</p>
     */
    inline void SetBackupRetentionPolicy(const BackupRetentionPolicy& value) { m_backupRetentionPolicyHasBeenSet = true; m_backupRetentionPolicy = value; }

    /**
     * <p>A policy that defines how the service retains backups.</p>
     */
    inline void SetBackupRetentionPolicy(BackupRetentionPolicy&& value) { m_backupRetentionPolicyHasBeenSet = true; m_backupRetentionPolicy = std::move(value); }

    /**
     * <p>A policy that defines how the service retains backups.</p>
     */
    inline ModifyClusterRequest& WithBackupRetentionPolicy(const BackupRetentionPolicy& value) { SetBackupRetentionPolicy(value); return *this;}

    /**
     * <p>A policy that defines how the service retains backups.</p>
     */
    inline ModifyClusterRequest& WithBackupRetentionPolicy(BackupRetentionPolicy&& value) { SetBackupRetentionPolicy(std::move(value)); return *this;}


    /**
     * <p>The identifier (ID) of the cluster that you want to modify. To find the
     * cluster ID, use <a>DescribeClusters</a>.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The identifier (ID) of the cluster that you want to modify. To find the
     * cluster ID, use <a>DescribeClusters</a>.</p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>The identifier (ID) of the cluster that you want to modify. To find the
     * cluster ID, use <a>DescribeClusters</a>.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The identifier (ID) of the cluster that you want to modify. To find the
     * cluster ID, use <a>DescribeClusters</a>.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>The identifier (ID) of the cluster that you want to modify. To find the
     * cluster ID, use <a>DescribeClusters</a>.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The identifier (ID) of the cluster that you want to modify. To find the
     * cluster ID, use <a>DescribeClusters</a>.</p>
     */
    inline ModifyClusterRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The identifier (ID) of the cluster that you want to modify. To find the
     * cluster ID, use <a>DescribeClusters</a>.</p>
     */
    inline ModifyClusterRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The identifier (ID) of the cluster that you want to modify. To find the
     * cluster ID, use <a>DescribeClusters</a>.</p>
     */
    inline ModifyClusterRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}

  private:

    BackupRetentionPolicy m_backupRetentionPolicy;
    bool m_backupRetentionPolicyHasBeenSet = false;

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
