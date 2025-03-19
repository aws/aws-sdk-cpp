/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/AutoScalingSettingsDescription.h>
#include <aws/dynamodb/model/ReplicaStatus.h>
#include <aws/dynamodb/model/ReplicaGlobalSecondaryIndexAutoScalingDescription.h>
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
   * <p>Represents the auto scaling settings of the replica.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ReplicaAutoScalingDescription">AWS
   * API Reference</a></p>
   */
  class ReplicaAutoScalingDescription
  {
  public:
    AWS_DYNAMODB_API ReplicaAutoScalingDescription() = default;
    AWS_DYNAMODB_API ReplicaAutoScalingDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ReplicaAutoScalingDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    ReplicaAutoScalingDescription& WithRegionName(RegionNameT&& value) { SetRegionName(std::forward<RegionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replica-specific global secondary index auto scaling settings.</p>
     */
    inline const Aws::Vector<ReplicaGlobalSecondaryIndexAutoScalingDescription>& GetGlobalSecondaryIndexes() const { return m_globalSecondaryIndexes; }
    inline bool GlobalSecondaryIndexesHasBeenSet() const { return m_globalSecondaryIndexesHasBeenSet; }
    template<typename GlobalSecondaryIndexesT = Aws::Vector<ReplicaGlobalSecondaryIndexAutoScalingDescription>>
    void SetGlobalSecondaryIndexes(GlobalSecondaryIndexesT&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = std::forward<GlobalSecondaryIndexesT>(value); }
    template<typename GlobalSecondaryIndexesT = Aws::Vector<ReplicaGlobalSecondaryIndexAutoScalingDescription>>
    ReplicaAutoScalingDescription& WithGlobalSecondaryIndexes(GlobalSecondaryIndexesT&& value) { SetGlobalSecondaryIndexes(std::forward<GlobalSecondaryIndexesT>(value)); return *this;}
    template<typename GlobalSecondaryIndexesT = ReplicaGlobalSecondaryIndexAutoScalingDescription>
    ReplicaAutoScalingDescription& AddGlobalSecondaryIndexes(GlobalSecondaryIndexesT&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.emplace_back(std::forward<GlobalSecondaryIndexesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const AutoScalingSettingsDescription& GetReplicaProvisionedReadCapacityAutoScalingSettings() const { return m_replicaProvisionedReadCapacityAutoScalingSettings; }
    inline bool ReplicaProvisionedReadCapacityAutoScalingSettingsHasBeenSet() const { return m_replicaProvisionedReadCapacityAutoScalingSettingsHasBeenSet; }
    template<typename ReplicaProvisionedReadCapacityAutoScalingSettingsT = AutoScalingSettingsDescription>
    void SetReplicaProvisionedReadCapacityAutoScalingSettings(ReplicaProvisionedReadCapacityAutoScalingSettingsT&& value) { m_replicaProvisionedReadCapacityAutoScalingSettingsHasBeenSet = true; m_replicaProvisionedReadCapacityAutoScalingSettings = std::forward<ReplicaProvisionedReadCapacityAutoScalingSettingsT>(value); }
    template<typename ReplicaProvisionedReadCapacityAutoScalingSettingsT = AutoScalingSettingsDescription>
    ReplicaAutoScalingDescription& WithReplicaProvisionedReadCapacityAutoScalingSettings(ReplicaProvisionedReadCapacityAutoScalingSettingsT&& value) { SetReplicaProvisionedReadCapacityAutoScalingSettings(std::forward<ReplicaProvisionedReadCapacityAutoScalingSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AutoScalingSettingsDescription& GetReplicaProvisionedWriteCapacityAutoScalingSettings() const { return m_replicaProvisionedWriteCapacityAutoScalingSettings; }
    inline bool ReplicaProvisionedWriteCapacityAutoScalingSettingsHasBeenSet() const { return m_replicaProvisionedWriteCapacityAutoScalingSettingsHasBeenSet; }
    template<typename ReplicaProvisionedWriteCapacityAutoScalingSettingsT = AutoScalingSettingsDescription>
    void SetReplicaProvisionedWriteCapacityAutoScalingSettings(ReplicaProvisionedWriteCapacityAutoScalingSettingsT&& value) { m_replicaProvisionedWriteCapacityAutoScalingSettingsHasBeenSet = true; m_replicaProvisionedWriteCapacityAutoScalingSettings = std::forward<ReplicaProvisionedWriteCapacityAutoScalingSettingsT>(value); }
    template<typename ReplicaProvisionedWriteCapacityAutoScalingSettingsT = AutoScalingSettingsDescription>
    ReplicaAutoScalingDescription& WithReplicaProvisionedWriteCapacityAutoScalingSettings(ReplicaProvisionedWriteCapacityAutoScalingSettingsT&& value) { SetReplicaProvisionedWriteCapacityAutoScalingSettings(std::forward<ReplicaProvisionedWriteCapacityAutoScalingSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the replica:</p> <ul> <li> <p> <code>CREATING</code> -
     * The replica is being created.</p> </li> <li> <p> <code>UPDATING</code> - The
     * replica is being updated.</p> </li> <li> <p> <code>DELETING</code> - The replica
     * is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The replica is ready
     * for use.</p> </li> </ul>
     */
    inline ReplicaStatus GetReplicaStatus() const { return m_replicaStatus; }
    inline bool ReplicaStatusHasBeenSet() const { return m_replicaStatusHasBeenSet; }
    inline void SetReplicaStatus(ReplicaStatus value) { m_replicaStatusHasBeenSet = true; m_replicaStatus = value; }
    inline ReplicaAutoScalingDescription& WithReplicaStatus(ReplicaStatus value) { SetReplicaStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    Aws::Vector<ReplicaGlobalSecondaryIndexAutoScalingDescription> m_globalSecondaryIndexes;
    bool m_globalSecondaryIndexesHasBeenSet = false;

    AutoScalingSettingsDescription m_replicaProvisionedReadCapacityAutoScalingSettings;
    bool m_replicaProvisionedReadCapacityAutoScalingSettingsHasBeenSet = false;

    AutoScalingSettingsDescription m_replicaProvisionedWriteCapacityAutoScalingSettings;
    bool m_replicaProvisionedWriteCapacityAutoScalingSettingsHasBeenSet = false;

    ReplicaStatus m_replicaStatus{ReplicaStatus::NOT_SET};
    bool m_replicaStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
