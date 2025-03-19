/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/docdb-elastic/model/SnapshotType.h>
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
   * <p>Returns information about a specific elastic cluster snapshot.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-elastic-2022-11-28/ClusterSnapshot">AWS
   * API Reference</a></p>
   */
  class ClusterSnapshot
  {
  public:
    AWS_DOCDBELASTIC_API ClusterSnapshot() = default;
    AWS_DOCDBELASTIC_API ClusterSnapshot(Aws::Utils::Json::JsonView jsonValue);
    AWS_DOCDBELASTIC_API ClusterSnapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DOCDBELASTIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the elastic cluster administrator.</p>
     */
    inline const Aws::String& GetAdminUserName() const { return m_adminUserName; }
    inline bool AdminUserNameHasBeenSet() const { return m_adminUserNameHasBeenSet; }
    template<typename AdminUserNameT = Aws::String>
    void SetAdminUserName(AdminUserNameT&& value) { m_adminUserNameHasBeenSet = true; m_adminUserName = std::forward<AdminUserNameT>(value); }
    template<typename AdminUserNameT = Aws::String>
    ClusterSnapshot& WithAdminUserName(AdminUserNameT&& value) { SetAdminUserName(std::forward<AdminUserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN identifier of the elastic cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    ClusterSnapshot& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the elastic cluster was created in Universal Coordinated Time
     * (UTC).</p>
     */
    inline const Aws::String& GetClusterCreationTime() const { return m_clusterCreationTime; }
    inline bool ClusterCreationTimeHasBeenSet() const { return m_clusterCreationTimeHasBeenSet; }
    template<typename ClusterCreationTimeT = Aws::String>
    void SetClusterCreationTime(ClusterCreationTimeT&& value) { m_clusterCreationTimeHasBeenSet = true; m_clusterCreationTime = std::forward<ClusterCreationTimeT>(value); }
    template<typename ClusterCreationTimeT = Aws::String>
    ClusterSnapshot& WithClusterCreationTime(ClusterCreationTimeT&& value) { SetClusterCreationTime(std::forward<ClusterCreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key identifier is the Amazon Resource Name (ARN) for the KMS
     * encryption key. If you are creating a cluster using the same Amazon account that
     * owns this KMS encryption key, you can use the KMS key alias instead of the ARN
     * as the KMS encryption key. If an encryption key is not specified here, Amazon
     * DocumentDB uses the default encryption key that KMS creates for your account.
     * Your account has a different default encryption key for each Amazon Region. </p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    ClusterSnapshot& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN identifier of the elastic cluster snapshot.</p>
     */
    inline const Aws::String& GetSnapshotArn() const { return m_snapshotArn; }
    inline bool SnapshotArnHasBeenSet() const { return m_snapshotArnHasBeenSet; }
    template<typename SnapshotArnT = Aws::String>
    void SetSnapshotArn(SnapshotArnT&& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = std::forward<SnapshotArnT>(value); }
    template<typename SnapshotArnT = Aws::String>
    ClusterSnapshot& WithSnapshotArn(SnapshotArnT&& value) { SetSnapshotArn(std::forward<SnapshotArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the elastic cluster snapshot was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline const Aws::String& GetSnapshotCreationTime() const { return m_snapshotCreationTime; }
    inline bool SnapshotCreationTimeHasBeenSet() const { return m_snapshotCreationTimeHasBeenSet; }
    template<typename SnapshotCreationTimeT = Aws::String>
    void SetSnapshotCreationTime(SnapshotCreationTimeT&& value) { m_snapshotCreationTimeHasBeenSet = true; m_snapshotCreationTime = std::forward<SnapshotCreationTimeT>(value); }
    template<typename SnapshotCreationTimeT = Aws::String>
    ClusterSnapshot& WithSnapshotCreationTime(SnapshotCreationTimeT&& value) { SetSnapshotCreationTime(std::forward<SnapshotCreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the elastic cluster snapshot.</p>
     */
    inline const Aws::String& GetSnapshotName() const { return m_snapshotName; }
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }
    template<typename SnapshotNameT = Aws::String>
    void SetSnapshotName(SnapshotNameT&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::forward<SnapshotNameT>(value); }
    template<typename SnapshotNameT = Aws::String>
    ClusterSnapshot& WithSnapshotName(SnapshotNameT&& value) { SetSnapshotName(std::forward<SnapshotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of cluster snapshots to be returned. You can specify one of the
     * following values:</p> <ul> <li> <p> <code>automated</code> - Return all cluster
     * snapshots that Amazon DocumentDB has automatically created for your Amazon Web
     * Services account.</p> </li> <li> <p> <code>manual</code> - Return all cluster
     * snapshots that you have manually created for your Amazon Web Services
     * account.</p> </li> </ul>
     */
    inline SnapshotType GetSnapshotType() const { return m_snapshotType; }
    inline bool SnapshotTypeHasBeenSet() const { return m_snapshotTypeHasBeenSet; }
    inline void SetSnapshotType(SnapshotType value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }
    inline ClusterSnapshot& WithSnapshotType(SnapshotType value) { SetSnapshotType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the elastic cluster snapshot.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline ClusterSnapshot& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 subnet IDs for the elastic cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    ClusterSnapshot& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    ClusterSnapshot& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of EC2 VPC security groups to associate with the elastic cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const { return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::forward<VpcSecurityGroupIdsT>(value); }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    ClusterSnapshot& WithVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { SetVpcSecurityGroupIds(std::forward<VpcSecurityGroupIdsT>(value)); return *this;}
    template<typename VpcSecurityGroupIdsT = Aws::String>
    ClusterSnapshot& AddVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.emplace_back(std::forward<VpcSecurityGroupIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_adminUserName;
    bool m_adminUserNameHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_clusterCreationTime;
    bool m_clusterCreationTimeHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_snapshotArn;
    bool m_snapshotArnHasBeenSet = false;

    Aws::String m_snapshotCreationTime;
    bool m_snapshotCreationTimeHasBeenSet = false;

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet = false;

    SnapshotType m_snapshotType{SnapshotType::NOT_SET};
    bool m_snapshotTypeHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
