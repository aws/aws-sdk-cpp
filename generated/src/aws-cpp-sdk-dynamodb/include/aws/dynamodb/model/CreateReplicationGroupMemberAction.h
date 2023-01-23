/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ProvisionedThroughputOverride.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/TableClass.h>
#include <aws/dynamodb/model/ReplicaGlobalSecondaryIndex.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents a replica to be created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/CreateReplicationGroupMemberAction">AWS
   * API Reference</a></p>
   */
  class CreateReplicationGroupMemberAction
  {
  public:
    AWS_DYNAMODB_API CreateReplicationGroupMemberAction();
    AWS_DYNAMODB_API CreateReplicationGroupMemberAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API CreateReplicationGroupMemberAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Region where the new replica will be created.</p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }

    /**
     * <p>The Region where the new replica will be created.</p>
     */
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }

    /**
     * <p>The Region where the new replica will be created.</p>
     */
    inline void SetRegionName(const Aws::String& value) { m_regionNameHasBeenSet = true; m_regionName = value; }

    /**
     * <p>The Region where the new replica will be created.</p>
     */
    inline void SetRegionName(Aws::String&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }

    /**
     * <p>The Region where the new replica will be created.</p>
     */
    inline void SetRegionName(const char* value) { m_regionNameHasBeenSet = true; m_regionName.assign(value); }

    /**
     * <p>The Region where the new replica will be created.</p>
     */
    inline CreateReplicationGroupMemberAction& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}

    /**
     * <p>The Region where the new replica will be created.</p>
     */
    inline CreateReplicationGroupMemberAction& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}

    /**
     * <p>The Region where the new replica will be created.</p>
     */
    inline CreateReplicationGroupMemberAction& WithRegionName(const char* value) { SetRegionName(value); return *this;}


    /**
     * <p>The KMS key that should be used for KMS encryption in the new replica. To
     * specify a key, use its key ID, Amazon Resource Name (ARN), alias name, or alias
     * ARN. Note that you should only provide this parameter if the key is different
     * from the default DynamoDB KMS key <code>alias/aws/dynamodb</code>.</p>
     */
    inline const Aws::String& GetKMSMasterKeyId() const{ return m_kMSMasterKeyId; }

    /**
     * <p>The KMS key that should be used for KMS encryption in the new replica. To
     * specify a key, use its key ID, Amazon Resource Name (ARN), alias name, or alias
     * ARN. Note that you should only provide this parameter if the key is different
     * from the default DynamoDB KMS key <code>alias/aws/dynamodb</code>.</p>
     */
    inline bool KMSMasterKeyIdHasBeenSet() const { return m_kMSMasterKeyIdHasBeenSet; }

    /**
     * <p>The KMS key that should be used for KMS encryption in the new replica. To
     * specify a key, use its key ID, Amazon Resource Name (ARN), alias name, or alias
     * ARN. Note that you should only provide this parameter if the key is different
     * from the default DynamoDB KMS key <code>alias/aws/dynamodb</code>.</p>
     */
    inline void SetKMSMasterKeyId(const Aws::String& value) { m_kMSMasterKeyIdHasBeenSet = true; m_kMSMasterKeyId = value; }

    /**
     * <p>The KMS key that should be used for KMS encryption in the new replica. To
     * specify a key, use its key ID, Amazon Resource Name (ARN), alias name, or alias
     * ARN. Note that you should only provide this parameter if the key is different
     * from the default DynamoDB KMS key <code>alias/aws/dynamodb</code>.</p>
     */
    inline void SetKMSMasterKeyId(Aws::String&& value) { m_kMSMasterKeyIdHasBeenSet = true; m_kMSMasterKeyId = std::move(value); }

    /**
     * <p>The KMS key that should be used for KMS encryption in the new replica. To
     * specify a key, use its key ID, Amazon Resource Name (ARN), alias name, or alias
     * ARN. Note that you should only provide this parameter if the key is different
     * from the default DynamoDB KMS key <code>alias/aws/dynamodb</code>.</p>
     */
    inline void SetKMSMasterKeyId(const char* value) { m_kMSMasterKeyIdHasBeenSet = true; m_kMSMasterKeyId.assign(value); }

    /**
     * <p>The KMS key that should be used for KMS encryption in the new replica. To
     * specify a key, use its key ID, Amazon Resource Name (ARN), alias name, or alias
     * ARN. Note that you should only provide this parameter if the key is different
     * from the default DynamoDB KMS key <code>alias/aws/dynamodb</code>.</p>
     */
    inline CreateReplicationGroupMemberAction& WithKMSMasterKeyId(const Aws::String& value) { SetKMSMasterKeyId(value); return *this;}

    /**
     * <p>The KMS key that should be used for KMS encryption in the new replica. To
     * specify a key, use its key ID, Amazon Resource Name (ARN), alias name, or alias
     * ARN. Note that you should only provide this parameter if the key is different
     * from the default DynamoDB KMS key <code>alias/aws/dynamodb</code>.</p>
     */
    inline CreateReplicationGroupMemberAction& WithKMSMasterKeyId(Aws::String&& value) { SetKMSMasterKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key that should be used for KMS encryption in the new replica. To
     * specify a key, use its key ID, Amazon Resource Name (ARN), alias name, or alias
     * ARN. Note that you should only provide this parameter if the key is different
     * from the default DynamoDB KMS key <code>alias/aws/dynamodb</code>.</p>
     */
    inline CreateReplicationGroupMemberAction& WithKMSMasterKeyId(const char* value) { SetKMSMasterKeyId(value); return *this;}


    /**
     * <p>Replica-specific provisioned throughput. If not specified, uses the source
     * table's provisioned throughput settings.</p>
     */
    inline const ProvisionedThroughputOverride& GetProvisionedThroughputOverride() const{ return m_provisionedThroughputOverride; }

    /**
     * <p>Replica-specific provisioned throughput. If not specified, uses the source
     * table's provisioned throughput settings.</p>
     */
    inline bool ProvisionedThroughputOverrideHasBeenSet() const { return m_provisionedThroughputOverrideHasBeenSet; }

    /**
     * <p>Replica-specific provisioned throughput. If not specified, uses the source
     * table's provisioned throughput settings.</p>
     */
    inline void SetProvisionedThroughputOverride(const ProvisionedThroughputOverride& value) { m_provisionedThroughputOverrideHasBeenSet = true; m_provisionedThroughputOverride = value; }

    /**
     * <p>Replica-specific provisioned throughput. If not specified, uses the source
     * table's provisioned throughput settings.</p>
     */
    inline void SetProvisionedThroughputOverride(ProvisionedThroughputOverride&& value) { m_provisionedThroughputOverrideHasBeenSet = true; m_provisionedThroughputOverride = std::move(value); }

    /**
     * <p>Replica-specific provisioned throughput. If not specified, uses the source
     * table's provisioned throughput settings.</p>
     */
    inline CreateReplicationGroupMemberAction& WithProvisionedThroughputOverride(const ProvisionedThroughputOverride& value) { SetProvisionedThroughputOverride(value); return *this;}

    /**
     * <p>Replica-specific provisioned throughput. If not specified, uses the source
     * table's provisioned throughput settings.</p>
     */
    inline CreateReplicationGroupMemberAction& WithProvisionedThroughputOverride(ProvisionedThroughputOverride&& value) { SetProvisionedThroughputOverride(std::move(value)); return *this;}


    /**
     * <p>Replica-specific global secondary index settings.</p>
     */
    inline const Aws::Vector<ReplicaGlobalSecondaryIndex>& GetGlobalSecondaryIndexes() const{ return m_globalSecondaryIndexes; }

    /**
     * <p>Replica-specific global secondary index settings.</p>
     */
    inline bool GlobalSecondaryIndexesHasBeenSet() const { return m_globalSecondaryIndexesHasBeenSet; }

    /**
     * <p>Replica-specific global secondary index settings.</p>
     */
    inline void SetGlobalSecondaryIndexes(const Aws::Vector<ReplicaGlobalSecondaryIndex>& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = value; }

    /**
     * <p>Replica-specific global secondary index settings.</p>
     */
    inline void SetGlobalSecondaryIndexes(Aws::Vector<ReplicaGlobalSecondaryIndex>&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = std::move(value); }

    /**
     * <p>Replica-specific global secondary index settings.</p>
     */
    inline CreateReplicationGroupMemberAction& WithGlobalSecondaryIndexes(const Aws::Vector<ReplicaGlobalSecondaryIndex>& value) { SetGlobalSecondaryIndexes(value); return *this;}

    /**
     * <p>Replica-specific global secondary index settings.</p>
     */
    inline CreateReplicationGroupMemberAction& WithGlobalSecondaryIndexes(Aws::Vector<ReplicaGlobalSecondaryIndex>&& value) { SetGlobalSecondaryIndexes(std::move(value)); return *this;}

    /**
     * <p>Replica-specific global secondary index settings.</p>
     */
    inline CreateReplicationGroupMemberAction& AddGlobalSecondaryIndexes(const ReplicaGlobalSecondaryIndex& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.push_back(value); return *this; }

    /**
     * <p>Replica-specific global secondary index settings.</p>
     */
    inline CreateReplicationGroupMemberAction& AddGlobalSecondaryIndexes(ReplicaGlobalSecondaryIndex&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.push_back(std::move(value)); return *this; }


    /**
     * <p>Replica-specific table class. If not specified, uses the source table's table
     * class.</p>
     */
    inline const TableClass& GetTableClassOverride() const{ return m_tableClassOverride; }

    /**
     * <p>Replica-specific table class. If not specified, uses the source table's table
     * class.</p>
     */
    inline bool TableClassOverrideHasBeenSet() const { return m_tableClassOverrideHasBeenSet; }

    /**
     * <p>Replica-specific table class. If not specified, uses the source table's table
     * class.</p>
     */
    inline void SetTableClassOverride(const TableClass& value) { m_tableClassOverrideHasBeenSet = true; m_tableClassOverride = value; }

    /**
     * <p>Replica-specific table class. If not specified, uses the source table's table
     * class.</p>
     */
    inline void SetTableClassOverride(TableClass&& value) { m_tableClassOverrideHasBeenSet = true; m_tableClassOverride = std::move(value); }

    /**
     * <p>Replica-specific table class. If not specified, uses the source table's table
     * class.</p>
     */
    inline CreateReplicationGroupMemberAction& WithTableClassOverride(const TableClass& value) { SetTableClassOverride(value); return *this;}

    /**
     * <p>Replica-specific table class. If not specified, uses the source table's table
     * class.</p>
     */
    inline CreateReplicationGroupMemberAction& WithTableClassOverride(TableClass&& value) { SetTableClassOverride(std::move(value)); return *this;}

  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    Aws::String m_kMSMasterKeyId;
    bool m_kMSMasterKeyIdHasBeenSet = false;

    ProvisionedThroughputOverride m_provisionedThroughputOverride;
    bool m_provisionedThroughputOverrideHasBeenSet = false;

    Aws::Vector<ReplicaGlobalSecondaryIndex> m_globalSecondaryIndexes;
    bool m_globalSecondaryIndexesHasBeenSet = false;

    TableClass m_tableClassOverride;
    bool m_tableClassOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
