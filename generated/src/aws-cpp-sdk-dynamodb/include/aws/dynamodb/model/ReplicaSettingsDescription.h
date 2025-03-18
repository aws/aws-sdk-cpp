/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ReplicaStatus.h>
#include <aws/dynamodb/model/BillingModeSummary.h>
#include <aws/dynamodb/model/AutoScalingSettingsDescription.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/TableClassSummary.h>
#include <aws/dynamodb/model/ReplicaGlobalSecondaryIndexSettingsDescription.h>
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
   * <p>Represents the properties of a replica.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ReplicaSettingsDescription">AWS
   * API Reference</a></p>
   */
  class ReplicaSettingsDescription
  {
  public:
    AWS_DYNAMODB_API ReplicaSettingsDescription() = default;
    AWS_DYNAMODB_API ReplicaSettingsDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ReplicaSettingsDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Region name of the replica.</p>
     */
    inline const Aws::String& GetRegionName() const { return m_regionName; }
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
    template<typename RegionNameT = Aws::String>
    void SetRegionName(RegionNameT&& value) { m_regionNameHasBeenSet = true; m_regionName = std::forward<RegionNameT>(value); }
    template<typename RegionNameT = Aws::String>
    ReplicaSettingsDescription& WithRegionName(RegionNameT&& value) { SetRegionName(std::forward<RegionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the Region:</p> <ul> <li> <p> <code>CREATING</code> -
     * The Region is being created.</p> </li> <li> <p> <code>UPDATING</code> - The
     * Region is being updated.</p> </li> <li> <p> <code>DELETING</code> - The Region
     * is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The Region is ready
     * for use.</p> </li> </ul>
     */
    inline ReplicaStatus GetReplicaStatus() const { return m_replicaStatus; }
    inline bool ReplicaStatusHasBeenSet() const { return m_replicaStatusHasBeenSet; }
    inline void SetReplicaStatus(ReplicaStatus value) { m_replicaStatusHasBeenSet = true; m_replicaStatus = value; }
    inline ReplicaSettingsDescription& WithReplicaStatus(ReplicaStatus value) { SetReplicaStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read/write capacity mode of the replica.</p>
     */
    inline const BillingModeSummary& GetReplicaBillingModeSummary() const { return m_replicaBillingModeSummary; }
    inline bool ReplicaBillingModeSummaryHasBeenSet() const { return m_replicaBillingModeSummaryHasBeenSet; }
    template<typename ReplicaBillingModeSummaryT = BillingModeSummary>
    void SetReplicaBillingModeSummary(ReplicaBillingModeSummaryT&& value) { m_replicaBillingModeSummaryHasBeenSet = true; m_replicaBillingModeSummary = std::forward<ReplicaBillingModeSummaryT>(value); }
    template<typename ReplicaBillingModeSummaryT = BillingModeSummary>
    ReplicaSettingsDescription& WithReplicaBillingModeSummary(ReplicaBillingModeSummaryT&& value) { SetReplicaBillingModeSummary(std::forward<ReplicaBillingModeSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#ProvisionedThroughput">Specifying
     * Read and Write Requirements</a> in the <i>Amazon DynamoDB Developer Guide</i>.
     * </p>
     */
    inline long long GetReplicaProvisionedReadCapacityUnits() const { return m_replicaProvisionedReadCapacityUnits; }
    inline bool ReplicaProvisionedReadCapacityUnitsHasBeenSet() const { return m_replicaProvisionedReadCapacityUnitsHasBeenSet; }
    inline void SetReplicaProvisionedReadCapacityUnits(long long value) { m_replicaProvisionedReadCapacityUnitsHasBeenSet = true; m_replicaProvisionedReadCapacityUnits = value; }
    inline ReplicaSettingsDescription& WithReplicaProvisionedReadCapacityUnits(long long value) { SetReplicaProvisionedReadCapacityUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Auto scaling settings for a global table replica's read capacity units.</p>
     */
    inline const AutoScalingSettingsDescription& GetReplicaProvisionedReadCapacityAutoScalingSettings() const { return m_replicaProvisionedReadCapacityAutoScalingSettings; }
    inline bool ReplicaProvisionedReadCapacityAutoScalingSettingsHasBeenSet() const { return m_replicaProvisionedReadCapacityAutoScalingSettingsHasBeenSet; }
    template<typename ReplicaProvisionedReadCapacityAutoScalingSettingsT = AutoScalingSettingsDescription>
    void SetReplicaProvisionedReadCapacityAutoScalingSettings(ReplicaProvisionedReadCapacityAutoScalingSettingsT&& value) { m_replicaProvisionedReadCapacityAutoScalingSettingsHasBeenSet = true; m_replicaProvisionedReadCapacityAutoScalingSettings = std::forward<ReplicaProvisionedReadCapacityAutoScalingSettingsT>(value); }
    template<typename ReplicaProvisionedReadCapacityAutoScalingSettingsT = AutoScalingSettingsDescription>
    ReplicaSettingsDescription& WithReplicaProvisionedReadCapacityAutoScalingSettings(ReplicaProvisionedReadCapacityAutoScalingSettingsT&& value) { SetReplicaProvisionedReadCapacityAutoScalingSettings(std::forward<ReplicaProvisionedReadCapacityAutoScalingSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of writes consumed per second before DynamoDB returns a
     * <code>ThrottlingException</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#ProvisionedThroughput">Specifying
     * Read and Write Requirements</a> in the <i>Amazon DynamoDB Developer
     * Guide</i>.</p>
     */
    inline long long GetReplicaProvisionedWriteCapacityUnits() const { return m_replicaProvisionedWriteCapacityUnits; }
    inline bool ReplicaProvisionedWriteCapacityUnitsHasBeenSet() const { return m_replicaProvisionedWriteCapacityUnitsHasBeenSet; }
    inline void SetReplicaProvisionedWriteCapacityUnits(long long value) { m_replicaProvisionedWriteCapacityUnitsHasBeenSet = true; m_replicaProvisionedWriteCapacityUnits = value; }
    inline ReplicaSettingsDescription& WithReplicaProvisionedWriteCapacityUnits(long long value) { SetReplicaProvisionedWriteCapacityUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Auto scaling settings for a global table replica's write capacity units.</p>
     */
    inline const AutoScalingSettingsDescription& GetReplicaProvisionedWriteCapacityAutoScalingSettings() const { return m_replicaProvisionedWriteCapacityAutoScalingSettings; }
    inline bool ReplicaProvisionedWriteCapacityAutoScalingSettingsHasBeenSet() const { return m_replicaProvisionedWriteCapacityAutoScalingSettingsHasBeenSet; }
    template<typename ReplicaProvisionedWriteCapacityAutoScalingSettingsT = AutoScalingSettingsDescription>
    void SetReplicaProvisionedWriteCapacityAutoScalingSettings(ReplicaProvisionedWriteCapacityAutoScalingSettingsT&& value) { m_replicaProvisionedWriteCapacityAutoScalingSettingsHasBeenSet = true; m_replicaProvisionedWriteCapacityAutoScalingSettings = std::forward<ReplicaProvisionedWriteCapacityAutoScalingSettingsT>(value); }
    template<typename ReplicaProvisionedWriteCapacityAutoScalingSettingsT = AutoScalingSettingsDescription>
    ReplicaSettingsDescription& WithReplicaProvisionedWriteCapacityAutoScalingSettings(ReplicaProvisionedWriteCapacityAutoScalingSettingsT&& value) { SetReplicaProvisionedWriteCapacityAutoScalingSettings(std::forward<ReplicaProvisionedWriteCapacityAutoScalingSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replica global secondary index settings for the global table.</p>
     */
    inline const Aws::Vector<ReplicaGlobalSecondaryIndexSettingsDescription>& GetReplicaGlobalSecondaryIndexSettings() const { return m_replicaGlobalSecondaryIndexSettings; }
    inline bool ReplicaGlobalSecondaryIndexSettingsHasBeenSet() const { return m_replicaGlobalSecondaryIndexSettingsHasBeenSet; }
    template<typename ReplicaGlobalSecondaryIndexSettingsT = Aws::Vector<ReplicaGlobalSecondaryIndexSettingsDescription>>
    void SetReplicaGlobalSecondaryIndexSettings(ReplicaGlobalSecondaryIndexSettingsT&& value) { m_replicaGlobalSecondaryIndexSettingsHasBeenSet = true; m_replicaGlobalSecondaryIndexSettings = std::forward<ReplicaGlobalSecondaryIndexSettingsT>(value); }
    template<typename ReplicaGlobalSecondaryIndexSettingsT = Aws::Vector<ReplicaGlobalSecondaryIndexSettingsDescription>>
    ReplicaSettingsDescription& WithReplicaGlobalSecondaryIndexSettings(ReplicaGlobalSecondaryIndexSettingsT&& value) { SetReplicaGlobalSecondaryIndexSettings(std::forward<ReplicaGlobalSecondaryIndexSettingsT>(value)); return *this;}
    template<typename ReplicaGlobalSecondaryIndexSettingsT = ReplicaGlobalSecondaryIndexSettingsDescription>
    ReplicaSettingsDescription& AddReplicaGlobalSecondaryIndexSettings(ReplicaGlobalSecondaryIndexSettingsT&& value) { m_replicaGlobalSecondaryIndexSettingsHasBeenSet = true; m_replicaGlobalSecondaryIndexSettings.emplace_back(std::forward<ReplicaGlobalSecondaryIndexSettingsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const TableClassSummary& GetReplicaTableClassSummary() const { return m_replicaTableClassSummary; }
    inline bool ReplicaTableClassSummaryHasBeenSet() const { return m_replicaTableClassSummaryHasBeenSet; }
    template<typename ReplicaTableClassSummaryT = TableClassSummary>
    void SetReplicaTableClassSummary(ReplicaTableClassSummaryT&& value) { m_replicaTableClassSummaryHasBeenSet = true; m_replicaTableClassSummary = std::forward<ReplicaTableClassSummaryT>(value); }
    template<typename ReplicaTableClassSummaryT = TableClassSummary>
    ReplicaSettingsDescription& WithReplicaTableClassSummary(ReplicaTableClassSummaryT&& value) { SetReplicaTableClassSummary(std::forward<ReplicaTableClassSummaryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    ReplicaStatus m_replicaStatus{ReplicaStatus::NOT_SET};
    bool m_replicaStatusHasBeenSet = false;

    BillingModeSummary m_replicaBillingModeSummary;
    bool m_replicaBillingModeSummaryHasBeenSet = false;

    long long m_replicaProvisionedReadCapacityUnits{0};
    bool m_replicaProvisionedReadCapacityUnitsHasBeenSet = false;

    AutoScalingSettingsDescription m_replicaProvisionedReadCapacityAutoScalingSettings;
    bool m_replicaProvisionedReadCapacityAutoScalingSettingsHasBeenSet = false;

    long long m_replicaProvisionedWriteCapacityUnits{0};
    bool m_replicaProvisionedWriteCapacityUnitsHasBeenSet = false;

    AutoScalingSettingsDescription m_replicaProvisionedWriteCapacityAutoScalingSettings;
    bool m_replicaProvisionedWriteCapacityAutoScalingSettingsHasBeenSet = false;

    Aws::Vector<ReplicaGlobalSecondaryIndexSettingsDescription> m_replicaGlobalSecondaryIndexSettings;
    bool m_replicaGlobalSecondaryIndexSettingsHasBeenSet = false;

    TableClassSummary m_replicaTableClassSummary;
    bool m_replicaTableClassSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
