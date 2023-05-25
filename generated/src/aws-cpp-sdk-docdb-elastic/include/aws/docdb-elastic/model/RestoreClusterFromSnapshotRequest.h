/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/docdb-elastic/DocDBElasticRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace DocDBElastic
{
namespace Model
{

  /**
   */
  class RestoreClusterFromSnapshotRequest : public DocDBElasticRequest
  {
  public:
    AWS_DOCDBELASTIC_API RestoreClusterFromSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreClusterFromSnapshot"; }

    AWS_DOCDBELASTIC_API Aws::String SerializePayload() const override;


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
    inline RestoreClusterFromSnapshotRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the Elastic DocumentDB cluster.</p>
     */
    inline RestoreClusterFromSnapshotRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the Elastic DocumentDB cluster.</p>
     */
    inline RestoreClusterFromSnapshotRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The KMS key identifier to use to encrypt the new Elastic DocumentDB
     * cluster.</p> <p>The KMS key identifier is the Amazon Resource Name (ARN) for the
     * KMS encryption key. If you are creating a cluster using the same Amazon account
     * that owns this KMS encryption key, you can use the KMS key alias instead of the
     * ARN as the KMS encryption key.</p> <p>If an encryption key is not specified
     * here, Elastic DocumentDB uses the default encryption key that KMS creates for
     * your account. Your account has a different default encryption key for each
     * Amazon Region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The KMS key identifier to use to encrypt the new Elastic DocumentDB
     * cluster.</p> <p>The KMS key identifier is the Amazon Resource Name (ARN) for the
     * KMS encryption key. If you are creating a cluster using the same Amazon account
     * that owns this KMS encryption key, you can use the KMS key alias instead of the
     * ARN as the KMS encryption key.</p> <p>If an encryption key is not specified
     * here, Elastic DocumentDB uses the default encryption key that KMS creates for
     * your account. Your account has a different default encryption key for each
     * Amazon Region.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The KMS key identifier to use to encrypt the new Elastic DocumentDB
     * cluster.</p> <p>The KMS key identifier is the Amazon Resource Name (ARN) for the
     * KMS encryption key. If you are creating a cluster using the same Amazon account
     * that owns this KMS encryption key, you can use the KMS key alias instead of the
     * ARN as the KMS encryption key.</p> <p>If an encryption key is not specified
     * here, Elastic DocumentDB uses the default encryption key that KMS creates for
     * your account. Your account has a different default encryption key for each
     * Amazon Region.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The KMS key identifier to use to encrypt the new Elastic DocumentDB
     * cluster.</p> <p>The KMS key identifier is the Amazon Resource Name (ARN) for the
     * KMS encryption key. If you are creating a cluster using the same Amazon account
     * that owns this KMS encryption key, you can use the KMS key alias instead of the
     * ARN as the KMS encryption key.</p> <p>If an encryption key is not specified
     * here, Elastic DocumentDB uses the default encryption key that KMS creates for
     * your account. Your account has a different default encryption key for each
     * Amazon Region.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The KMS key identifier to use to encrypt the new Elastic DocumentDB
     * cluster.</p> <p>The KMS key identifier is the Amazon Resource Name (ARN) for the
     * KMS encryption key. If you are creating a cluster using the same Amazon account
     * that owns this KMS encryption key, you can use the KMS key alias instead of the
     * ARN as the KMS encryption key.</p> <p>If an encryption key is not specified
     * here, Elastic DocumentDB uses the default encryption key that KMS creates for
     * your account. Your account has a different default encryption key for each
     * Amazon Region.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The KMS key identifier to use to encrypt the new Elastic DocumentDB
     * cluster.</p> <p>The KMS key identifier is the Amazon Resource Name (ARN) for the
     * KMS encryption key. If you are creating a cluster using the same Amazon account
     * that owns this KMS encryption key, you can use the KMS key alias instead of the
     * ARN as the KMS encryption key.</p> <p>If an encryption key is not specified
     * here, Elastic DocumentDB uses the default encryption key that KMS creates for
     * your account. Your account has a different default encryption key for each
     * Amazon Region.</p>
     */
    inline RestoreClusterFromSnapshotRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key identifier to use to encrypt the new Elastic DocumentDB
     * cluster.</p> <p>The KMS key identifier is the Amazon Resource Name (ARN) for the
     * KMS encryption key. If you are creating a cluster using the same Amazon account
     * that owns this KMS encryption key, you can use the KMS key alias instead of the
     * ARN as the KMS encryption key.</p> <p>If an encryption key is not specified
     * here, Elastic DocumentDB uses the default encryption key that KMS creates for
     * your account. Your account has a different default encryption key for each
     * Amazon Region.</p>
     */
    inline RestoreClusterFromSnapshotRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key identifier to use to encrypt the new Elastic DocumentDB
     * cluster.</p> <p>The KMS key identifier is the Amazon Resource Name (ARN) for the
     * KMS encryption key. If you are creating a cluster using the same Amazon account
     * that owns this KMS encryption key, you can use the KMS key alias instead of the
     * ARN as the KMS encryption key.</p> <p>If an encryption key is not specified
     * here, Elastic DocumentDB uses the default encryption key that KMS creates for
     * your account. Your account has a different default encryption key for each
     * Amazon Region.</p>
     */
    inline RestoreClusterFromSnapshotRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The arn of the Elastic DocumentDB snapshot.</p>
     */
    inline const Aws::String& GetSnapshotArn() const{ return m_snapshotArn; }

    /**
     * <p>The arn of the Elastic DocumentDB snapshot.</p>
     */
    inline bool SnapshotArnHasBeenSet() const { return m_snapshotArnHasBeenSet; }

    /**
     * <p>The arn of the Elastic DocumentDB snapshot.</p>
     */
    inline void SetSnapshotArn(const Aws::String& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = value; }

    /**
     * <p>The arn of the Elastic DocumentDB snapshot.</p>
     */
    inline void SetSnapshotArn(Aws::String&& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = std::move(value); }

    /**
     * <p>The arn of the Elastic DocumentDB snapshot.</p>
     */
    inline void SetSnapshotArn(const char* value) { m_snapshotArnHasBeenSet = true; m_snapshotArn.assign(value); }

    /**
     * <p>The arn of the Elastic DocumentDB snapshot.</p>
     */
    inline RestoreClusterFromSnapshotRequest& WithSnapshotArn(const Aws::String& value) { SetSnapshotArn(value); return *this;}

    /**
     * <p>The arn of the Elastic DocumentDB snapshot.</p>
     */
    inline RestoreClusterFromSnapshotRequest& WithSnapshotArn(Aws::String&& value) { SetSnapshotArn(std::move(value)); return *this;}

    /**
     * <p>The arn of the Elastic DocumentDB snapshot.</p>
     */
    inline RestoreClusterFromSnapshotRequest& WithSnapshotArn(const char* value) { SetSnapshotArn(value); return *this;}


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
    inline RestoreClusterFromSnapshotRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The Amazon EC2 subnet IDs for the Elastic DocumentDB cluster.</p>
     */
    inline RestoreClusterFromSnapshotRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 subnet IDs for the Elastic DocumentDB cluster.</p>
     */
    inline RestoreClusterFromSnapshotRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The Amazon EC2 subnet IDs for the Elastic DocumentDB cluster.</p>
     */
    inline RestoreClusterFromSnapshotRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon EC2 subnet IDs for the Elastic DocumentDB cluster.</p>
     */
    inline RestoreClusterFromSnapshotRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>A list of the tag names to be assigned to the restored DB cluster, in the
     * form of an array of key-value pairs in which the key is the tag name and the
     * value is the key value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of the tag names to be assigned to the restored DB cluster, in the
     * form of an array of key-value pairs in which the key is the tag name and the
     * value is the key value.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of the tag names to be assigned to the restored DB cluster, in the
     * form of an array of key-value pairs in which the key is the tag name and the
     * value is the key value.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of the tag names to be assigned to the restored DB cluster, in the
     * form of an array of key-value pairs in which the key is the tag name and the
     * value is the key value.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of the tag names to be assigned to the restored DB cluster, in the
     * form of an array of key-value pairs in which the key is the tag name and the
     * value is the key value.</p>
     */
    inline RestoreClusterFromSnapshotRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of the tag names to be assigned to the restored DB cluster, in the
     * form of an array of key-value pairs in which the key is the tag name and the
     * value is the key value.</p>
     */
    inline RestoreClusterFromSnapshotRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of the tag names to be assigned to the restored DB cluster, in the
     * form of an array of key-value pairs in which the key is the tag name and the
     * value is the key value.</p>
     */
    inline RestoreClusterFromSnapshotRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of the tag names to be assigned to the restored DB cluster, in the
     * form of an array of key-value pairs in which the key is the tag name and the
     * value is the key value.</p>
     */
    inline RestoreClusterFromSnapshotRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of the tag names to be assigned to the restored DB cluster, in the
     * form of an array of key-value pairs in which the key is the tag name and the
     * value is the key value.</p>
     */
    inline RestoreClusterFromSnapshotRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of the tag names to be assigned to the restored DB cluster, in the
     * form of an array of key-value pairs in which the key is the tag name and the
     * value is the key value.</p>
     */
    inline RestoreClusterFromSnapshotRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of the tag names to be assigned to the restored DB cluster, in the
     * form of an array of key-value pairs in which the key is the tag name and the
     * value is the key value.</p>
     */
    inline RestoreClusterFromSnapshotRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of the tag names to be assigned to the restored DB cluster, in the
     * form of an array of key-value pairs in which the key is the tag name and the
     * value is the key value.</p>
     */
    inline RestoreClusterFromSnapshotRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of the tag names to be assigned to the restored DB cluster, in the
     * form of an array of key-value pairs in which the key is the tag name and the
     * value is the key value.</p>
     */
    inline RestoreClusterFromSnapshotRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>A list of EC2 VPC security groups to associate with the Elastic DocumentDB
     * cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>A list of EC2 VPC security groups to associate with the Elastic DocumentDB
     * cluster.</p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>A list of EC2 VPC security groups to associate with the Elastic DocumentDB
     * cluster.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of EC2 VPC security groups to associate with the Elastic DocumentDB
     * cluster.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>A list of EC2 VPC security groups to associate with the Elastic DocumentDB
     * cluster.</p>
     */
    inline RestoreClusterFromSnapshotRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of EC2 VPC security groups to associate with the Elastic DocumentDB
     * cluster.</p>
     */
    inline RestoreClusterFromSnapshotRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of EC2 VPC security groups to associate with the Elastic DocumentDB
     * cluster.</p>
     */
    inline RestoreClusterFromSnapshotRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of EC2 VPC security groups to associate with the Elastic DocumentDB
     * cluster.</p>
     */
    inline RestoreClusterFromSnapshotRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of EC2 VPC security groups to associate with the Elastic DocumentDB
     * cluster.</p>
     */
    inline RestoreClusterFromSnapshotRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_snapshotArn;
    bool m_snapshotArnHasBeenSet = false;

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
