/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/CloudHSMV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudhsmv2/model/BackupRetentionPolicy.h>
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
    AWS_CLOUDHSMV2_API ModifyClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyCluster"; }

    AWS_CLOUDHSMV2_API Aws::String SerializePayload() const override;

    AWS_CLOUDHSMV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The desired HSM type of the cluster.</p>
     */
    inline const Aws::String& GetHsmType() const { return m_hsmType; }
    inline bool HsmTypeHasBeenSet() const { return m_hsmTypeHasBeenSet; }
    template<typename HsmTypeT = Aws::String>
    void SetHsmType(HsmTypeT&& value) { m_hsmTypeHasBeenSet = true; m_hsmType = std::forward<HsmTypeT>(value); }
    template<typename HsmTypeT = Aws::String>
    ModifyClusterRequest& WithHsmType(HsmTypeT&& value) { SetHsmType(std::forward<HsmTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A policy that defines how the service retains backups.</p>
     */
    inline const BackupRetentionPolicy& GetBackupRetentionPolicy() const { return m_backupRetentionPolicy; }
    inline bool BackupRetentionPolicyHasBeenSet() const { return m_backupRetentionPolicyHasBeenSet; }
    template<typename BackupRetentionPolicyT = BackupRetentionPolicy>
    void SetBackupRetentionPolicy(BackupRetentionPolicyT&& value) { m_backupRetentionPolicyHasBeenSet = true; m_backupRetentionPolicy = std::forward<BackupRetentionPolicyT>(value); }
    template<typename BackupRetentionPolicyT = BackupRetentionPolicy>
    ModifyClusterRequest& WithBackupRetentionPolicy(BackupRetentionPolicyT&& value) { SetBackupRetentionPolicy(std::forward<BackupRetentionPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (ID) of the cluster that you want to modify. To find the
     * cluster ID, use <a>DescribeClusters</a>.</p>
     */
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    ModifyClusterRequest& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hsmType;
    bool m_hsmTypeHasBeenSet = false;

    BackupRetentionPolicy m_backupRetentionPolicy;
    bool m_backupRetentionPolicyHasBeenSet = false;

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
