/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ProvisionedThroughputOverride.h>
#include <aws/dynamodb/model/OnDemandThroughputOverride.h>
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
   * <p>Represents a replica to be modified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateReplicationGroupMemberAction">AWS
   * API Reference</a></p>
   */
  class UpdateReplicationGroupMemberAction
  {
  public:
    AWS_DYNAMODB_API UpdateReplicationGroupMemberAction() = default;
    AWS_DYNAMODB_API UpdateReplicationGroupMemberAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API UpdateReplicationGroupMemberAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Region where the replica exists.</p>
     */
    inline const Aws::String& GetRegionName() const { return m_regionName; }
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
    template<typename RegionNameT = Aws::String>
    void SetRegionName(RegionNameT&& value) { m_regionNameHasBeenSet = true; m_regionName = std::forward<RegionNameT>(value); }
    template<typename RegionNameT = Aws::String>
    UpdateReplicationGroupMemberAction& WithRegionName(RegionNameT&& value) { SetRegionName(std::forward<RegionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key of the replica that should be used for KMS encryption. To specify
     * a key, use its key ID, Amazon Resource Name (ARN), alias name, or alias ARN.
     * Note that you should only provide this parameter if the key is different from
     * the default DynamoDB KMS key <code>alias/aws/dynamodb</code>.</p>
     */
    inline const Aws::String& GetKMSMasterKeyId() const { return m_kMSMasterKeyId; }
    inline bool KMSMasterKeyIdHasBeenSet() const { return m_kMSMasterKeyIdHasBeenSet; }
    template<typename KMSMasterKeyIdT = Aws::String>
    void SetKMSMasterKeyId(KMSMasterKeyIdT&& value) { m_kMSMasterKeyIdHasBeenSet = true; m_kMSMasterKeyId = std::forward<KMSMasterKeyIdT>(value); }
    template<typename KMSMasterKeyIdT = Aws::String>
    UpdateReplicationGroupMemberAction& WithKMSMasterKeyId(KMSMasterKeyIdT&& value) { SetKMSMasterKeyId(std::forward<KMSMasterKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replica-specific provisioned throughput. If not specified, uses the source
     * table's provisioned throughput settings.</p>
     */
    inline const ProvisionedThroughputOverride& GetProvisionedThroughputOverride() const { return m_provisionedThroughputOverride; }
    inline bool ProvisionedThroughputOverrideHasBeenSet() const { return m_provisionedThroughputOverrideHasBeenSet; }
    template<typename ProvisionedThroughputOverrideT = ProvisionedThroughputOverride>
    void SetProvisionedThroughputOverride(ProvisionedThroughputOverrideT&& value) { m_provisionedThroughputOverrideHasBeenSet = true; m_provisionedThroughputOverride = std::forward<ProvisionedThroughputOverrideT>(value); }
    template<typename ProvisionedThroughputOverrideT = ProvisionedThroughputOverride>
    UpdateReplicationGroupMemberAction& WithProvisionedThroughputOverride(ProvisionedThroughputOverrideT&& value) { SetProvisionedThroughputOverride(std::forward<ProvisionedThroughputOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Overrides the maximum on-demand throughput for the replica table.</p>
     */
    inline const OnDemandThroughputOverride& GetOnDemandThroughputOverride() const { return m_onDemandThroughputOverride; }
    inline bool OnDemandThroughputOverrideHasBeenSet() const { return m_onDemandThroughputOverrideHasBeenSet; }
    template<typename OnDemandThroughputOverrideT = OnDemandThroughputOverride>
    void SetOnDemandThroughputOverride(OnDemandThroughputOverrideT&& value) { m_onDemandThroughputOverrideHasBeenSet = true; m_onDemandThroughputOverride = std::forward<OnDemandThroughputOverrideT>(value); }
    template<typename OnDemandThroughputOverrideT = OnDemandThroughputOverride>
    UpdateReplicationGroupMemberAction& WithOnDemandThroughputOverride(OnDemandThroughputOverrideT&& value) { SetOnDemandThroughputOverride(std::forward<OnDemandThroughputOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replica-specific global secondary index settings.</p>
     */
    inline const Aws::Vector<ReplicaGlobalSecondaryIndex>& GetGlobalSecondaryIndexes() const { return m_globalSecondaryIndexes; }
    inline bool GlobalSecondaryIndexesHasBeenSet() const { return m_globalSecondaryIndexesHasBeenSet; }
    template<typename GlobalSecondaryIndexesT = Aws::Vector<ReplicaGlobalSecondaryIndex>>
    void SetGlobalSecondaryIndexes(GlobalSecondaryIndexesT&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = std::forward<GlobalSecondaryIndexesT>(value); }
    template<typename GlobalSecondaryIndexesT = Aws::Vector<ReplicaGlobalSecondaryIndex>>
    UpdateReplicationGroupMemberAction& WithGlobalSecondaryIndexes(GlobalSecondaryIndexesT&& value) { SetGlobalSecondaryIndexes(std::forward<GlobalSecondaryIndexesT>(value)); return *this;}
    template<typename GlobalSecondaryIndexesT = ReplicaGlobalSecondaryIndex>
    UpdateReplicationGroupMemberAction& AddGlobalSecondaryIndexes(GlobalSecondaryIndexesT&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.emplace_back(std::forward<GlobalSecondaryIndexesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Replica-specific table class. If not specified, uses the source table's table
     * class.</p>
     */
    inline TableClass GetTableClassOverride() const { return m_tableClassOverride; }
    inline bool TableClassOverrideHasBeenSet() const { return m_tableClassOverrideHasBeenSet; }
    inline void SetTableClassOverride(TableClass value) { m_tableClassOverrideHasBeenSet = true; m_tableClassOverride = value; }
    inline UpdateReplicationGroupMemberAction& WithTableClassOverride(TableClass value) { SetTableClassOverride(value); return *this;}
    ///@}
  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    Aws::String m_kMSMasterKeyId;
    bool m_kMSMasterKeyIdHasBeenSet = false;

    ProvisionedThroughputOverride m_provisionedThroughputOverride;
    bool m_provisionedThroughputOverrideHasBeenSet = false;

    OnDemandThroughputOverride m_onDemandThroughputOverride;
    bool m_onDemandThroughputOverrideHasBeenSet = false;

    Aws::Vector<ReplicaGlobalSecondaryIndex> m_globalSecondaryIndexes;
    bool m_globalSecondaryIndexesHasBeenSet = false;

    TableClass m_tableClassOverride{TableClass::NOT_SET};
    bool m_tableClassOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
