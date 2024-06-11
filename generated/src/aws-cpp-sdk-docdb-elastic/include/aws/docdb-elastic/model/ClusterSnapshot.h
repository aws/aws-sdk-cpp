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
    AWS_DOCDBELASTIC_API ClusterSnapshot();
    AWS_DOCDBELASTIC_API ClusterSnapshot(Aws::Utils::Json::JsonView jsonValue);
    AWS_DOCDBELASTIC_API ClusterSnapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline ClusterSnapshot& WithAdminUserName(const Aws::String& value) { SetAdminUserName(value); return *this;}
    inline ClusterSnapshot& WithAdminUserName(Aws::String&& value) { SetAdminUserName(std::move(value)); return *this;}
    inline ClusterSnapshot& WithAdminUserName(const char* value) { SetAdminUserName(value); return *this;}
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
    inline ClusterSnapshot& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline ClusterSnapshot& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline ClusterSnapshot& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the elastic cluster was created in Universal Coordinated Time
     * (UTC).</p>
     */
    inline const Aws::String& GetClusterCreationTime() const{ return m_clusterCreationTime; }
    inline bool ClusterCreationTimeHasBeenSet() const { return m_clusterCreationTimeHasBeenSet; }
    inline void SetClusterCreationTime(const Aws::String& value) { m_clusterCreationTimeHasBeenSet = true; m_clusterCreationTime = value; }
    inline void SetClusterCreationTime(Aws::String&& value) { m_clusterCreationTimeHasBeenSet = true; m_clusterCreationTime = std::move(value); }
    inline void SetClusterCreationTime(const char* value) { m_clusterCreationTimeHasBeenSet = true; m_clusterCreationTime.assign(value); }
    inline ClusterSnapshot& WithClusterCreationTime(const Aws::String& value) { SetClusterCreationTime(value); return *this;}
    inline ClusterSnapshot& WithClusterCreationTime(Aws::String&& value) { SetClusterCreationTime(std::move(value)); return *this;}
    inline ClusterSnapshot& WithClusterCreationTime(const char* value) { SetClusterCreationTime(value); return *this;}
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
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline ClusterSnapshot& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline ClusterSnapshot& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline ClusterSnapshot& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN identifier of the elastic cluster snapshot.</p>
     */
    inline const Aws::String& GetSnapshotArn() const{ return m_snapshotArn; }
    inline bool SnapshotArnHasBeenSet() const { return m_snapshotArnHasBeenSet; }
    inline void SetSnapshotArn(const Aws::String& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = value; }
    inline void SetSnapshotArn(Aws::String&& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = std::move(value); }
    inline void SetSnapshotArn(const char* value) { m_snapshotArnHasBeenSet = true; m_snapshotArn.assign(value); }
    inline ClusterSnapshot& WithSnapshotArn(const Aws::String& value) { SetSnapshotArn(value); return *this;}
    inline ClusterSnapshot& WithSnapshotArn(Aws::String&& value) { SetSnapshotArn(std::move(value)); return *this;}
    inline ClusterSnapshot& WithSnapshotArn(const char* value) { SetSnapshotArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the elastic cluster snapshot was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline const Aws::String& GetSnapshotCreationTime() const{ return m_snapshotCreationTime; }
    inline bool SnapshotCreationTimeHasBeenSet() const { return m_snapshotCreationTimeHasBeenSet; }
    inline void SetSnapshotCreationTime(const Aws::String& value) { m_snapshotCreationTimeHasBeenSet = true; m_snapshotCreationTime = value; }
    inline void SetSnapshotCreationTime(Aws::String&& value) { m_snapshotCreationTimeHasBeenSet = true; m_snapshotCreationTime = std::move(value); }
    inline void SetSnapshotCreationTime(const char* value) { m_snapshotCreationTimeHasBeenSet = true; m_snapshotCreationTime.assign(value); }
    inline ClusterSnapshot& WithSnapshotCreationTime(const Aws::String& value) { SetSnapshotCreationTime(value); return *this;}
    inline ClusterSnapshot& WithSnapshotCreationTime(Aws::String&& value) { SetSnapshotCreationTime(std::move(value)); return *this;}
    inline ClusterSnapshot& WithSnapshotCreationTime(const char* value) { SetSnapshotCreationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the elastic cluster snapshot.</p>
     */
    inline const Aws::String& GetSnapshotName() const{ return m_snapshotName; }
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }
    inline void SetSnapshotName(const Aws::String& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }
    inline void SetSnapshotName(Aws::String&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::move(value); }
    inline void SetSnapshotName(const char* value) { m_snapshotNameHasBeenSet = true; m_snapshotName.assign(value); }
    inline ClusterSnapshot& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}
    inline ClusterSnapshot& WithSnapshotName(Aws::String&& value) { SetSnapshotName(std::move(value)); return *this;}
    inline ClusterSnapshot& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}
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
    inline const SnapshotType& GetSnapshotType() const{ return m_snapshotType; }
    inline bool SnapshotTypeHasBeenSet() const { return m_snapshotTypeHasBeenSet; }
    inline void SetSnapshotType(const SnapshotType& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }
    inline void SetSnapshotType(SnapshotType&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = std::move(value); }
    inline ClusterSnapshot& WithSnapshotType(const SnapshotType& value) { SetSnapshotType(value); return *this;}
    inline ClusterSnapshot& WithSnapshotType(SnapshotType&& value) { SetSnapshotType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the elastic cluster snapshot.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ClusterSnapshot& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline ClusterSnapshot& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 subnet IDs for the elastic cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline ClusterSnapshot& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline ClusterSnapshot& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline ClusterSnapshot& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline ClusterSnapshot& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline ClusterSnapshot& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of EC2 VPC security groups to associate with the elastic cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }
    inline ClusterSnapshot& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}
    inline ClusterSnapshot& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}
    inline ClusterSnapshot& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    inline ClusterSnapshot& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }
    inline ClusterSnapshot& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
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

    SnapshotType m_snapshotType;
    bool m_snapshotTypeHasBeenSet = false;

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
