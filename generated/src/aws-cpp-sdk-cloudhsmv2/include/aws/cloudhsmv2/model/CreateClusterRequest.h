/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/CloudHSMV2Request.h>
#include <aws/cloudhsmv2/model/BackupRetentionPolicy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudhsmv2/model/NetworkType.h>
#include <aws/cloudhsmv2/model/ClusterMode.h>
#include <aws/cloudhsmv2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{

  /**
   */
  class CreateClusterRequest : public CloudHSMV2Request
  {
  public:
    AWS_CLOUDHSMV2_API CreateClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCluster"; }

    AWS_CLOUDHSMV2_API Aws::String SerializePayload() const override;

    AWS_CLOUDHSMV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A policy that defines how the service retains backups.</p>
     */
    inline const BackupRetentionPolicy& GetBackupRetentionPolicy() const { return m_backupRetentionPolicy; }
    inline bool BackupRetentionPolicyHasBeenSet() const { return m_backupRetentionPolicyHasBeenSet; }
    template<typename BackupRetentionPolicyT = BackupRetentionPolicy>
    void SetBackupRetentionPolicy(BackupRetentionPolicyT&& value) { m_backupRetentionPolicyHasBeenSet = true; m_backupRetentionPolicy = std::forward<BackupRetentionPolicyT>(value); }
    template<typename BackupRetentionPolicyT = BackupRetentionPolicy>
    CreateClusterRequest& WithBackupRetentionPolicy(BackupRetentionPolicyT&& value) { SetBackupRetentionPolicy(std::forward<BackupRetentionPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of HSM to use in the cluster. The allowed values are
     * <code>hsm1.medium</code> and <code>hsm2m.medium</code>.</p>
     */
    inline const Aws::String& GetHsmType() const { return m_hsmType; }
    inline bool HsmTypeHasBeenSet() const { return m_hsmTypeHasBeenSet; }
    template<typename HsmTypeT = Aws::String>
    void SetHsmType(HsmTypeT&& value) { m_hsmTypeHasBeenSet = true; m_hsmType = std::forward<HsmTypeT>(value); }
    template<typename HsmTypeT = Aws::String>
    CreateClusterRequest& WithHsmType(HsmTypeT&& value) { SetHsmType(std::forward<HsmTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (ID) or the Amazon Resource Name (ARN) of the cluster backup
     * to restore. Use this value to restore the cluster from a backup instead of
     * creating a new cluster. To find the backup ID or ARN, use
     * <a>DescribeBackups</a>. <i>If using a backup in another account, the full ARN
     * must be supplied.</i> </p>
     */
    inline const Aws::String& GetSourceBackupId() const { return m_sourceBackupId; }
    inline bool SourceBackupIdHasBeenSet() const { return m_sourceBackupIdHasBeenSet; }
    template<typename SourceBackupIdT = Aws::String>
    void SetSourceBackupId(SourceBackupIdT&& value) { m_sourceBackupIdHasBeenSet = true; m_sourceBackupId = std::forward<SourceBackupIdT>(value); }
    template<typename SourceBackupIdT = Aws::String>
    CreateClusterRequest& WithSourceBackupId(SourceBackupIdT&& value) { SetSourceBackupId(std::forward<SourceBackupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers (IDs) of the subnets where you are creating the cluster. You
     * must specify at least one subnet. If you specify multiple subnets, they must
     * meet the following criteria:</p> <ul> <li> <p>All subnets must be in the same
     * virtual private cloud (VPC).</p> </li> <li> <p>You can specify only one subnet
     * per Availability Zone.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    CreateClusterRequest& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    CreateClusterRequest& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The NetworkType to create a cluster with. The allowed values are
     * <code>IPV4</code> and <code>DUALSTACK</code>. </p>
     */
    inline NetworkType GetNetworkType() const { return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(NetworkType value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline CreateClusterRequest& WithNetworkType(NetworkType value) { SetNetworkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to apply to the CloudHSM cluster during creation.</p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const { return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    template<typename TagListT = Aws::Vector<Tag>>
    void SetTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList = std::forward<TagListT>(value); }
    template<typename TagListT = Aws::Vector<Tag>>
    CreateClusterRequest& WithTagList(TagListT&& value) { SetTagList(std::forward<TagListT>(value)); return *this;}
    template<typename TagListT = Tag>
    CreateClusterRequest& AddTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList.emplace_back(std::forward<TagListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The mode to use in the cluster. The allowed values are <code>FIPS</code> and
     * <code>NON_FIPS</code>.</p>
     */
    inline ClusterMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(ClusterMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline CreateClusterRequest& WithMode(ClusterMode value) { SetMode(value); return *this;}
    ///@}
  private:

    BackupRetentionPolicy m_backupRetentionPolicy;
    bool m_backupRetentionPolicyHasBeenSet = false;

    Aws::String m_hsmType;
    bool m_hsmTypeHasBeenSet = false;

    Aws::String m_sourceBackupId;
    bool m_sourceBackupIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    NetworkType m_networkType{NetworkType::NOT_SET};
    bool m_networkTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;

    ClusterMode m_mode{ClusterMode::NOT_SET};
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
