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
    AWS_DYNAMODB_API ReplicaDescription();
    AWS_DYNAMODB_API ReplicaDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ReplicaDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Region.</p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
    inline void SetRegionName(const Aws::String& value) { m_regionNameHasBeenSet = true; m_regionName = value; }
    inline void SetRegionName(Aws::String&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }
    inline void SetRegionName(const char* value) { m_regionNameHasBeenSet = true; m_regionName.assign(value); }
    inline ReplicaDescription& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}
    inline ReplicaDescription& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}
    inline ReplicaDescription& WithRegionName(const char* value) { SetRegionName(value); return *this;}
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
    inline const ReplicaStatus& GetReplicaStatus() const{ return m_replicaStatus; }
    inline bool ReplicaStatusHasBeenSet() const { return m_replicaStatusHasBeenSet; }
    inline void SetReplicaStatus(const ReplicaStatus& value) { m_replicaStatusHasBeenSet = true; m_replicaStatus = value; }
    inline void SetReplicaStatus(ReplicaStatus&& value) { m_replicaStatusHasBeenSet = true; m_replicaStatus = std::move(value); }
    inline ReplicaDescription& WithReplicaStatus(const ReplicaStatus& value) { SetReplicaStatus(value); return *this;}
    inline ReplicaDescription& WithReplicaStatus(ReplicaStatus&& value) { SetReplicaStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the replica status.</p>
     */
    inline const Aws::String& GetReplicaStatusDescription() const{ return m_replicaStatusDescription; }
    inline bool ReplicaStatusDescriptionHasBeenSet() const { return m_replicaStatusDescriptionHasBeenSet; }
    inline void SetReplicaStatusDescription(const Aws::String& value) { m_replicaStatusDescriptionHasBeenSet = true; m_replicaStatusDescription = value; }
    inline void SetReplicaStatusDescription(Aws::String&& value) { m_replicaStatusDescriptionHasBeenSet = true; m_replicaStatusDescription = std::move(value); }
    inline void SetReplicaStatusDescription(const char* value) { m_replicaStatusDescriptionHasBeenSet = true; m_replicaStatusDescription.assign(value); }
    inline ReplicaDescription& WithReplicaStatusDescription(const Aws::String& value) { SetReplicaStatusDescription(value); return *this;}
    inline ReplicaDescription& WithReplicaStatusDescription(Aws::String&& value) { SetReplicaStatusDescription(std::move(value)); return *this;}
    inline ReplicaDescription& WithReplicaStatusDescription(const char* value) { SetReplicaStatusDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the progress of a Create, Update, or Delete action on the replica
     * as a percentage.</p>
     */
    inline const Aws::String& GetReplicaStatusPercentProgress() const{ return m_replicaStatusPercentProgress; }
    inline bool ReplicaStatusPercentProgressHasBeenSet() const { return m_replicaStatusPercentProgressHasBeenSet; }
    inline void SetReplicaStatusPercentProgress(const Aws::String& value) { m_replicaStatusPercentProgressHasBeenSet = true; m_replicaStatusPercentProgress = value; }
    inline void SetReplicaStatusPercentProgress(Aws::String&& value) { m_replicaStatusPercentProgressHasBeenSet = true; m_replicaStatusPercentProgress = std::move(value); }
    inline void SetReplicaStatusPercentProgress(const char* value) { m_replicaStatusPercentProgressHasBeenSet = true; m_replicaStatusPercentProgress.assign(value); }
    inline ReplicaDescription& WithReplicaStatusPercentProgress(const Aws::String& value) { SetReplicaStatusPercentProgress(value); return *this;}
    inline ReplicaDescription& WithReplicaStatusPercentProgress(Aws::String&& value) { SetReplicaStatusPercentProgress(std::move(value)); return *this;}
    inline ReplicaDescription& WithReplicaStatusPercentProgress(const char* value) { SetReplicaStatusPercentProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key of the replica that will be used for KMS encryption.</p>
     */
    inline const Aws::String& GetKMSMasterKeyId() const{ return m_kMSMasterKeyId; }
    inline bool KMSMasterKeyIdHasBeenSet() const { return m_kMSMasterKeyIdHasBeenSet; }
    inline void SetKMSMasterKeyId(const Aws::String& value) { m_kMSMasterKeyIdHasBeenSet = true; m_kMSMasterKeyId = value; }
    inline void SetKMSMasterKeyId(Aws::String&& value) { m_kMSMasterKeyIdHasBeenSet = true; m_kMSMasterKeyId = std::move(value); }
    inline void SetKMSMasterKeyId(const char* value) { m_kMSMasterKeyIdHasBeenSet = true; m_kMSMasterKeyId.assign(value); }
    inline ReplicaDescription& WithKMSMasterKeyId(const Aws::String& value) { SetKMSMasterKeyId(value); return *this;}
    inline ReplicaDescription& WithKMSMasterKeyId(Aws::String&& value) { SetKMSMasterKeyId(std::move(value)); return *this;}
    inline ReplicaDescription& WithKMSMasterKeyId(const char* value) { SetKMSMasterKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replica-specific provisioned throughput. If not described, uses the source
     * table's provisioned throughput settings.</p>
     */
    inline const ProvisionedThroughputOverride& GetProvisionedThroughputOverride() const{ return m_provisionedThroughputOverride; }
    inline bool ProvisionedThroughputOverrideHasBeenSet() const { return m_provisionedThroughputOverrideHasBeenSet; }
    inline void SetProvisionedThroughputOverride(const ProvisionedThroughputOverride& value) { m_provisionedThroughputOverrideHasBeenSet = true; m_provisionedThroughputOverride = value; }
    inline void SetProvisionedThroughputOverride(ProvisionedThroughputOverride&& value) { m_provisionedThroughputOverrideHasBeenSet = true; m_provisionedThroughputOverride = std::move(value); }
    inline ReplicaDescription& WithProvisionedThroughputOverride(const ProvisionedThroughputOverride& value) { SetProvisionedThroughputOverride(value); return *this;}
    inline ReplicaDescription& WithProvisionedThroughputOverride(ProvisionedThroughputOverride&& value) { SetProvisionedThroughputOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Overrides the maximum on-demand throughput settings for the specified replica
     * table.</p>
     */
    inline const OnDemandThroughputOverride& GetOnDemandThroughputOverride() const{ return m_onDemandThroughputOverride; }
    inline bool OnDemandThroughputOverrideHasBeenSet() const { return m_onDemandThroughputOverrideHasBeenSet; }
    inline void SetOnDemandThroughputOverride(const OnDemandThroughputOverride& value) { m_onDemandThroughputOverrideHasBeenSet = true; m_onDemandThroughputOverride = value; }
    inline void SetOnDemandThroughputOverride(OnDemandThroughputOverride&& value) { m_onDemandThroughputOverrideHasBeenSet = true; m_onDemandThroughputOverride = std::move(value); }
    inline ReplicaDescription& WithOnDemandThroughputOverride(const OnDemandThroughputOverride& value) { SetOnDemandThroughputOverride(value); return *this;}
    inline ReplicaDescription& WithOnDemandThroughputOverride(OnDemandThroughputOverride&& value) { SetOnDemandThroughputOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the warm throughput value for this replica.</p>
     */
    inline const TableWarmThroughputDescription& GetWarmThroughput() const{ return m_warmThroughput; }
    inline bool WarmThroughputHasBeenSet() const { return m_warmThroughputHasBeenSet; }
    inline void SetWarmThroughput(const TableWarmThroughputDescription& value) { m_warmThroughputHasBeenSet = true; m_warmThroughput = value; }
    inline void SetWarmThroughput(TableWarmThroughputDescription&& value) { m_warmThroughputHasBeenSet = true; m_warmThroughput = std::move(value); }
    inline ReplicaDescription& WithWarmThroughput(const TableWarmThroughputDescription& value) { SetWarmThroughput(value); return *this;}
    inline ReplicaDescription& WithWarmThroughput(TableWarmThroughputDescription&& value) { SetWarmThroughput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replica-specific global secondary index settings.</p>
     */
    inline const Aws::Vector<ReplicaGlobalSecondaryIndexDescription>& GetGlobalSecondaryIndexes() const{ return m_globalSecondaryIndexes; }
    inline bool GlobalSecondaryIndexesHasBeenSet() const { return m_globalSecondaryIndexesHasBeenSet; }
    inline void SetGlobalSecondaryIndexes(const Aws::Vector<ReplicaGlobalSecondaryIndexDescription>& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = value; }
    inline void SetGlobalSecondaryIndexes(Aws::Vector<ReplicaGlobalSecondaryIndexDescription>&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = std::move(value); }
    inline ReplicaDescription& WithGlobalSecondaryIndexes(const Aws::Vector<ReplicaGlobalSecondaryIndexDescription>& value) { SetGlobalSecondaryIndexes(value); return *this;}
    inline ReplicaDescription& WithGlobalSecondaryIndexes(Aws::Vector<ReplicaGlobalSecondaryIndexDescription>&& value) { SetGlobalSecondaryIndexes(std::move(value)); return *this;}
    inline ReplicaDescription& AddGlobalSecondaryIndexes(const ReplicaGlobalSecondaryIndexDescription& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.push_back(value); return *this; }
    inline ReplicaDescription& AddGlobalSecondaryIndexes(ReplicaGlobalSecondaryIndexDescription&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time at which the replica was first detected as inaccessible. To
     * determine cause of inaccessibility check the <code>ReplicaStatus</code>
     * property.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicaInaccessibleDateTime() const{ return m_replicaInaccessibleDateTime; }
    inline bool ReplicaInaccessibleDateTimeHasBeenSet() const { return m_replicaInaccessibleDateTimeHasBeenSet; }
    inline void SetReplicaInaccessibleDateTime(const Aws::Utils::DateTime& value) { m_replicaInaccessibleDateTimeHasBeenSet = true; m_replicaInaccessibleDateTime = value; }
    inline void SetReplicaInaccessibleDateTime(Aws::Utils::DateTime&& value) { m_replicaInaccessibleDateTimeHasBeenSet = true; m_replicaInaccessibleDateTime = std::move(value); }
    inline ReplicaDescription& WithReplicaInaccessibleDateTime(const Aws::Utils::DateTime& value) { SetReplicaInaccessibleDateTime(value); return *this;}
    inline ReplicaDescription& WithReplicaInaccessibleDateTime(Aws::Utils::DateTime&& value) { SetReplicaInaccessibleDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const TableClassSummary& GetReplicaTableClassSummary() const{ return m_replicaTableClassSummary; }
    inline bool ReplicaTableClassSummaryHasBeenSet() const { return m_replicaTableClassSummaryHasBeenSet; }
    inline void SetReplicaTableClassSummary(const TableClassSummary& value) { m_replicaTableClassSummaryHasBeenSet = true; m_replicaTableClassSummary = value; }
    inline void SetReplicaTableClassSummary(TableClassSummary&& value) { m_replicaTableClassSummaryHasBeenSet = true; m_replicaTableClassSummary = std::move(value); }
    inline ReplicaDescription& WithReplicaTableClassSummary(const TableClassSummary& value) { SetReplicaTableClassSummary(value); return *this;}
    inline ReplicaDescription& WithReplicaTableClassSummary(TableClassSummary&& value) { SetReplicaTableClassSummary(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    ReplicaStatus m_replicaStatus;
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

    Aws::Utils::DateTime m_replicaInaccessibleDateTime;
    bool m_replicaInaccessibleDateTimeHasBeenSet = false;

    TableClassSummary m_replicaTableClassSummary;
    bool m_replicaTableClassSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
