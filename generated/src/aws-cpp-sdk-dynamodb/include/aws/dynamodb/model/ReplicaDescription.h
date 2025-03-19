/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ReplicaStatus.h>
#include <aws/dynamodb/model/ProvisionedThroughputOverride.h>
#include <aws/dynamodb/model/OnDemandThroughputOverride.h>
#include <aws/dynamodb/model/TableWarmThroughputDescription.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dynamodb/model/TableClassSummary.h>
#include <aws/dynamodb/model/ReplicaGlobalSecondaryIndexDescription.h>
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
   * <p>Contains the details of the replica.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ReplicaDescription">AWS
   * API Reference</a></p>
   */
  class ReplicaDescription
  {
  public:
    AWS_DYNAMODB_API ReplicaDescription() = default;
    AWS_DYNAMODB_API ReplicaDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ReplicaDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Region.</p>
     */
    inline const Aws::String& GetRegionName() const { return m_regionName; }
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
    template<typename RegionNameT = Aws::String>
    void SetRegionName(RegionNameT&& value) { m_regionNameHasBeenSet = true; m_regionName = std::forward<RegionNameT>(value); }
    template<typename RegionNameT = Aws::String>
    ReplicaDescription& WithRegionName(RegionNameT&& value) { SetRegionName(std::forward<RegionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the replica:</p> <ul> <li> <p> <code>CREATING</code> -
     * The replica is being created.</p> </li> <li> <p> <code>UPDATING</code> - The
     * replica is being updated.</p> </li> <li> <p> <code>DELETING</code> - The replica
     * is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The replica is ready
     * for use.</p> </li> <li> <p> <code>REGION_DISABLED</code> - The replica is
     * inaccessible because the Amazon Web Services Region has been disabled.</p>
     *  <p>If the Amazon Web Services Region remains inaccessible for more than
     * 20 hours, DynamoDB will remove this replica from the replication group. The
     * replica will not be deleted and replication will stop from and to this
     * region.</p>  </li> <li> <p> <code>INACCESSIBLE_ENCRYPTION_CREDENTIALS
     * </code> - The KMS key used to encrypt the table is inaccessible.</p> 
     * <p>If the KMS key remains inaccessible for more than 20 hours, DynamoDB will
     * remove this replica from the replication group. The replica will not be deleted
     * and replication will stop from and to this region.</p>  </li> </ul>
     */
    inline ReplicaStatus GetReplicaStatus() const { return m_replicaStatus; }
    inline bool ReplicaStatusHasBeenSet() const { return m_replicaStatusHasBeenSet; }
    inline void SetReplicaStatus(ReplicaStatus value) { m_replicaStatusHasBeenSet = true; m_replicaStatus = value; }
    inline ReplicaDescription& WithReplicaStatus(ReplicaStatus value) { SetReplicaStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the replica status.</p>
     */
    inline const Aws::String& GetReplicaStatusDescription() const { return m_replicaStatusDescription; }
    inline bool ReplicaStatusDescriptionHasBeenSet() const { return m_replicaStatusDescriptionHasBeenSet; }
    template<typename ReplicaStatusDescriptionT = Aws::String>
    void SetReplicaStatusDescription(ReplicaStatusDescriptionT&& value) { m_replicaStatusDescriptionHasBeenSet = true; m_replicaStatusDescription = std::forward<ReplicaStatusDescriptionT>(value); }
    template<typename ReplicaStatusDescriptionT = Aws::String>
    ReplicaDescription& WithReplicaStatusDescription(ReplicaStatusDescriptionT&& value) { SetReplicaStatusDescription(std::forward<ReplicaStatusDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the progress of a Create, Update, or Delete action on the replica
     * as a percentage.</p>
     */
    inline const Aws::String& GetReplicaStatusPercentProgress() const { return m_replicaStatusPercentProgress; }
    inline bool ReplicaStatusPercentProgressHasBeenSet() const { return m_replicaStatusPercentProgressHasBeenSet; }
    template<typename ReplicaStatusPercentProgressT = Aws::String>
    void SetReplicaStatusPercentProgress(ReplicaStatusPercentProgressT&& value) { m_replicaStatusPercentProgressHasBeenSet = true; m_replicaStatusPercentProgress = std::forward<ReplicaStatusPercentProgressT>(value); }
    template<typename ReplicaStatusPercentProgressT = Aws::String>
    ReplicaDescription& WithReplicaStatusPercentProgress(ReplicaStatusPercentProgressT&& value) { SetReplicaStatusPercentProgress(std::forward<ReplicaStatusPercentProgressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key of the replica that will be used for KMS encryption.</p>
     */
    inline const Aws::String& GetKMSMasterKeyId() const { return m_kMSMasterKeyId; }
    inline bool KMSMasterKeyIdHasBeenSet() const { return m_kMSMasterKeyIdHasBeenSet; }
    template<typename KMSMasterKeyIdT = Aws::String>
    void SetKMSMasterKeyId(KMSMasterKeyIdT&& value) { m_kMSMasterKeyIdHasBeenSet = true; m_kMSMasterKeyId = std::forward<KMSMasterKeyIdT>(value); }
    template<typename KMSMasterKeyIdT = Aws::String>
    ReplicaDescription& WithKMSMasterKeyId(KMSMasterKeyIdT&& value) { SetKMSMasterKeyId(std::forward<KMSMasterKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replica-specific provisioned throughput. If not described, uses the source
     * table's provisioned throughput settings.</p>
     */
    inline const ProvisionedThroughputOverride& GetProvisionedThroughputOverride() const { return m_provisionedThroughputOverride; }
    inline bool ProvisionedThroughputOverrideHasBeenSet() const { return m_provisionedThroughputOverrideHasBeenSet; }
    template<typename ProvisionedThroughputOverrideT = ProvisionedThroughputOverride>
    void SetProvisionedThroughputOverride(ProvisionedThroughputOverrideT&& value) { m_provisionedThroughputOverrideHasBeenSet = true; m_provisionedThroughputOverride = std::forward<ProvisionedThroughputOverrideT>(value); }
    template<typename ProvisionedThroughputOverrideT = ProvisionedThroughputOverride>
    ReplicaDescription& WithProvisionedThroughputOverride(ProvisionedThroughputOverrideT&& value) { SetProvisionedThroughputOverride(std::forward<ProvisionedThroughputOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Overrides the maximum on-demand throughput settings for the specified replica
     * table.</p>
     */
    inline const OnDemandThroughputOverride& GetOnDemandThroughputOverride() const { return m_onDemandThroughputOverride; }
    inline bool OnDemandThroughputOverrideHasBeenSet() const { return m_onDemandThroughputOverrideHasBeenSet; }
    template<typename OnDemandThroughputOverrideT = OnDemandThroughputOverride>
    void SetOnDemandThroughputOverride(OnDemandThroughputOverrideT&& value) { m_onDemandThroughputOverrideHasBeenSet = true; m_onDemandThroughputOverride = std::forward<OnDemandThroughputOverrideT>(value); }
    template<typename OnDemandThroughputOverrideT = OnDemandThroughputOverride>
    ReplicaDescription& WithOnDemandThroughputOverride(OnDemandThroughputOverrideT&& value) { SetOnDemandThroughputOverride(std::forward<OnDemandThroughputOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the warm throughput value for this replica.</p>
     */
    inline const TableWarmThroughputDescription& GetWarmThroughput() const { return m_warmThroughput; }
    inline bool WarmThroughputHasBeenSet() const { return m_warmThroughputHasBeenSet; }
    template<typename WarmThroughputT = TableWarmThroughputDescription>
    void SetWarmThroughput(WarmThroughputT&& value) { m_warmThroughputHasBeenSet = true; m_warmThroughput = std::forward<WarmThroughputT>(value); }
    template<typename WarmThroughputT = TableWarmThroughputDescription>
    ReplicaDescription& WithWarmThroughput(WarmThroughputT&& value) { SetWarmThroughput(std::forward<WarmThroughputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replica-specific global secondary index settings.</p>
     */
    inline const Aws::Vector<ReplicaGlobalSecondaryIndexDescription>& GetGlobalSecondaryIndexes() const { return m_globalSecondaryIndexes; }
    inline bool GlobalSecondaryIndexesHasBeenSet() const { return m_globalSecondaryIndexesHasBeenSet; }
    template<typename GlobalSecondaryIndexesT = Aws::Vector<ReplicaGlobalSecondaryIndexDescription>>
    void SetGlobalSecondaryIndexes(GlobalSecondaryIndexesT&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = std::forward<GlobalSecondaryIndexesT>(value); }
    template<typename GlobalSecondaryIndexesT = Aws::Vector<ReplicaGlobalSecondaryIndexDescription>>
    ReplicaDescription& WithGlobalSecondaryIndexes(GlobalSecondaryIndexesT&& value) { SetGlobalSecondaryIndexes(std::forward<GlobalSecondaryIndexesT>(value)); return *this;}
    template<typename GlobalSecondaryIndexesT = ReplicaGlobalSecondaryIndexDescription>
    ReplicaDescription& AddGlobalSecondaryIndexes(GlobalSecondaryIndexesT&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.emplace_back(std::forward<GlobalSecondaryIndexesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time at which the replica was first detected as inaccessible. To
     * determine cause of inaccessibility check the <code>ReplicaStatus</code>
     * property.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicaInaccessibleDateTime() const { return m_replicaInaccessibleDateTime; }
    inline bool ReplicaInaccessibleDateTimeHasBeenSet() const { return m_replicaInaccessibleDateTimeHasBeenSet; }
    template<typename ReplicaInaccessibleDateTimeT = Aws::Utils::DateTime>
    void SetReplicaInaccessibleDateTime(ReplicaInaccessibleDateTimeT&& value) { m_replicaInaccessibleDateTimeHasBeenSet = true; m_replicaInaccessibleDateTime = std::forward<ReplicaInaccessibleDateTimeT>(value); }
    template<typename ReplicaInaccessibleDateTimeT = Aws::Utils::DateTime>
    ReplicaDescription& WithReplicaInaccessibleDateTime(ReplicaInaccessibleDateTimeT&& value) { SetReplicaInaccessibleDateTime(std::forward<ReplicaInaccessibleDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TableClassSummary& GetReplicaTableClassSummary() const { return m_replicaTableClassSummary; }
    inline bool ReplicaTableClassSummaryHasBeenSet() const { return m_replicaTableClassSummaryHasBeenSet; }
    template<typename ReplicaTableClassSummaryT = TableClassSummary>
    void SetReplicaTableClassSummary(ReplicaTableClassSummaryT&& value) { m_replicaTableClassSummaryHasBeenSet = true; m_replicaTableClassSummary = std::forward<ReplicaTableClassSummaryT>(value); }
    template<typename ReplicaTableClassSummaryT = TableClassSummary>
    ReplicaDescription& WithReplicaTableClassSummary(ReplicaTableClassSummaryT&& value) { SetReplicaTableClassSummary(std::forward<ReplicaTableClassSummaryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    ReplicaStatus m_replicaStatus{ReplicaStatus::NOT_SET};
    bool m_replicaStatusHasBeenSet = false;

    Aws::String m_replicaStatusDescription;
    bool m_replicaStatusDescriptionHasBeenSet = false;

    Aws::String m_replicaStatusPercentProgress;
    bool m_replicaStatusPercentProgressHasBeenSet = false;

    Aws::String m_kMSMasterKeyId;
    bool m_kMSMasterKeyIdHasBeenSet = false;

    ProvisionedThroughputOverride m_provisionedThroughputOverride;
    bool m_provisionedThroughputOverrideHasBeenSet = false;

    OnDemandThroughputOverride m_onDemandThroughputOverride;
    bool m_onDemandThroughputOverrideHasBeenSet = false;

    TableWarmThroughputDescription m_warmThroughput;
    bool m_warmThroughputHasBeenSet = false;

    Aws::Vector<ReplicaGlobalSecondaryIndexDescription> m_globalSecondaryIndexes;
    bool m_globalSecondaryIndexesHasBeenSet = false;

    Aws::Utils::DateTime m_replicaInaccessibleDateTime{};
    bool m_replicaInaccessibleDateTimeHasBeenSet = false;

    TableClassSummary m_replicaTableClassSummary;
    bool m_replicaTableClassSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
