/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * snapshot.</p><p><h3>See Also:</h3>   <a
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
    inline ClusterSnapshot& WithAdminUserName(const Aws::String& value) { SetAdminUserName(value); return *this;}

    /**
     * <p>The name of the Elastic DocumentDB cluster administrator.</p>
     */
    inline ClusterSnapshot& WithAdminUserName(Aws::String&& value) { SetAdminUserName(std::move(value)); return *this;}

    /**
     * <p>The name of the Elastic DocumentDB cluster administrator.</p>
     */
    inline ClusterSnapshot& WithAdminUserName(const char* value) { SetAdminUserName(value); return *this;}


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
    inline ClusterSnapshot& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline ClusterSnapshot& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * <p>The arn of the Elastic DocumentDB cluster.</p>
     */
    inline ClusterSnapshot& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * <p>The time when the Elastic DocumentDB cluster was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline const Aws::String& GetClusterCreationTime() const{ return m_clusterCreationTime; }

    /**
     * <p>The time when the Elastic DocumentDB cluster was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline bool ClusterCreationTimeHasBeenSet() const { return m_clusterCreationTimeHasBeenSet; }

    /**
     * <p>The time when the Elastic DocumentDB cluster was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline void SetClusterCreationTime(const Aws::String& value) { m_clusterCreationTimeHasBeenSet = true; m_clusterCreationTime = value; }

    /**
     * <p>The time when the Elastic DocumentDB cluster was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline void SetClusterCreationTime(Aws::String&& value) { m_clusterCreationTimeHasBeenSet = true; m_clusterCreationTime = std::move(value); }

    /**
     * <p>The time when the Elastic DocumentDB cluster was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline void SetClusterCreationTime(const char* value) { m_clusterCreationTimeHasBeenSet = true; m_clusterCreationTime.assign(value); }

    /**
     * <p>The time when the Elastic DocumentDB cluster was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline ClusterSnapshot& WithClusterCreationTime(const Aws::String& value) { SetClusterCreationTime(value); return *this;}

    /**
     * <p>The time when the Elastic DocumentDB cluster was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline ClusterSnapshot& WithClusterCreationTime(Aws::String&& value) { SetClusterCreationTime(std::move(value)); return *this;}

    /**
     * <p>The time when the Elastic DocumentDB cluster was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline ClusterSnapshot& WithClusterCreationTime(const char* value) { SetClusterCreationTime(value); return *this;}


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
    inline ClusterSnapshot& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key identifier to use to encrypt the Elastic DocumentDB cluster.</p>
     */
    inline ClusterSnapshot& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key identifier to use to encrypt the Elastic DocumentDB cluster.</p>
     */
    inline ClusterSnapshot& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The arn of the Elastic DocumentDB snapshot</p>
     */
    inline const Aws::String& GetSnapshotArn() const{ return m_snapshotArn; }

    /**
     * <p>The arn of the Elastic DocumentDB snapshot</p>
     */
    inline bool SnapshotArnHasBeenSet() const { return m_snapshotArnHasBeenSet; }

    /**
     * <p>The arn of the Elastic DocumentDB snapshot</p>
     */
    inline void SetSnapshotArn(const Aws::String& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = value; }

    /**
     * <p>The arn of the Elastic DocumentDB snapshot</p>
     */
    inline void SetSnapshotArn(Aws::String&& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = std::move(value); }

    /**
     * <p>The arn of the Elastic DocumentDB snapshot</p>
     */
    inline void SetSnapshotArn(const char* value) { m_snapshotArnHasBeenSet = true; m_snapshotArn.assign(value); }

    /**
     * <p>The arn of the Elastic DocumentDB snapshot</p>
     */
    inline ClusterSnapshot& WithSnapshotArn(const Aws::String& value) { SetSnapshotArn(value); return *this;}

    /**
     * <p>The arn of the Elastic DocumentDB snapshot</p>
     */
    inline ClusterSnapshot& WithSnapshotArn(Aws::String&& value) { SetSnapshotArn(std::move(value)); return *this;}

    /**
     * <p>The arn of the Elastic DocumentDB snapshot</p>
     */
    inline ClusterSnapshot& WithSnapshotArn(const char* value) { SetSnapshotArn(value); return *this;}


    /**
     * <p>The time when the Elastic DocumentDB snapshot was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline const Aws::String& GetSnapshotCreationTime() const{ return m_snapshotCreationTime; }

    /**
     * <p>The time when the Elastic DocumentDB snapshot was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline bool SnapshotCreationTimeHasBeenSet() const { return m_snapshotCreationTimeHasBeenSet; }

    /**
     * <p>The time when the Elastic DocumentDB snapshot was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline void SetSnapshotCreationTime(const Aws::String& value) { m_snapshotCreationTimeHasBeenSet = true; m_snapshotCreationTime = value; }

    /**
     * <p>The time when the Elastic DocumentDB snapshot was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline void SetSnapshotCreationTime(Aws::String&& value) { m_snapshotCreationTimeHasBeenSet = true; m_snapshotCreationTime = std::move(value); }

    /**
     * <p>The time when the Elastic DocumentDB snapshot was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline void SetSnapshotCreationTime(const char* value) { m_snapshotCreationTimeHasBeenSet = true; m_snapshotCreationTime.assign(value); }

    /**
     * <p>The time when the Elastic DocumentDB snapshot was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline ClusterSnapshot& WithSnapshotCreationTime(const Aws::String& value) { SetSnapshotCreationTime(value); return *this;}

    /**
     * <p>The time when the Elastic DocumentDB snapshot was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline ClusterSnapshot& WithSnapshotCreationTime(Aws::String&& value) { SetSnapshotCreationTime(std::move(value)); return *this;}

    /**
     * <p>The time when the Elastic DocumentDB snapshot was created in Universal
     * Coordinated Time (UTC).</p>
     */
    inline ClusterSnapshot& WithSnapshotCreationTime(const char* value) { SetSnapshotCreationTime(value); return *this;}


    /**
     * <p>The name of the Elastic DocumentDB snapshot.</p>
     */
    inline const Aws::String& GetSnapshotName() const{ return m_snapshotName; }

    /**
     * <p>The name of the Elastic DocumentDB snapshot.</p>
     */
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }

    /**
     * <p>The name of the Elastic DocumentDB snapshot.</p>
     */
    inline void SetSnapshotName(const Aws::String& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }

    /**
     * <p>The name of the Elastic DocumentDB snapshot.</p>
     */
    inline void SetSnapshotName(Aws::String&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::move(value); }

    /**
     * <p>The name of the Elastic DocumentDB snapshot.</p>
     */
    inline void SetSnapshotName(const char* value) { m_snapshotNameHasBeenSet = true; m_snapshotName.assign(value); }

    /**
     * <p>The name of the Elastic DocumentDB snapshot.</p>
     */
    inline ClusterSnapshot& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}

    /**
     * <p>The name of the Elastic DocumentDB snapshot.</p>
     */
    inline ClusterSnapshot& WithSnapshotName(Aws::String&& value) { SetSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The name of the Elastic DocumentDB snapshot.</p>
     */
    inline ClusterSnapshot& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}


    /**
     * <p>The status of the Elastic DocumentDB snapshot.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Elastic DocumentDB snapshot.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the Elastic DocumentDB snapshot.</p>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the Elastic DocumentDB snapshot.</p>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the Elastic DocumentDB snapshot.</p>
     */
    inline ClusterSnapshot& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Elastic DocumentDB snapshot.</p>
     */
    inline ClusterSnapshot& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A list of the IDs of subnets associated with the DB cluster snapshot.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>A list of the IDs of subnets associated with the DB cluster snapshot.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>A list of the IDs of subnets associated with the DB cluster snapshot.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>A list of the IDs of subnets associated with the DB cluster snapshot.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>A list of the IDs of subnets associated with the DB cluster snapshot.</p>
     */
    inline ClusterSnapshot& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>A list of the IDs of subnets associated with the DB cluster snapshot.</p>
     */
    inline ClusterSnapshot& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>A list of the IDs of subnets associated with the DB cluster snapshot.</p>
     */
    inline ClusterSnapshot& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>A list of the IDs of subnets associated with the DB cluster snapshot.</p>
     */
    inline ClusterSnapshot& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the IDs of subnets associated with the DB cluster snapshot.</p>
     */
    inline ClusterSnapshot& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>A list of the IDs of the VPC security groups associated with the cluster
     * snapshot.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>A list of the IDs of the VPC security groups associated with the cluster
     * snapshot.</p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>A list of the IDs of the VPC security groups associated with the cluster
     * snapshot.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of the IDs of the VPC security groups associated with the cluster
     * snapshot.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>A list of the IDs of the VPC security groups associated with the cluster
     * snapshot.</p>
     */
    inline ClusterSnapshot& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of the IDs of the VPC security groups associated with the cluster
     * snapshot.</p>
     */
    inline ClusterSnapshot& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of the IDs of the VPC security groups associated with the cluster
     * snapshot.</p>
     */
    inline ClusterSnapshot& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of the IDs of the VPC security groups associated with the cluster
     * snapshot.</p>
     */
    inline ClusterSnapshot& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the IDs of the VPC security groups associated with the cluster
     * snapshot.</p>
     */
    inline ClusterSnapshot& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

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
