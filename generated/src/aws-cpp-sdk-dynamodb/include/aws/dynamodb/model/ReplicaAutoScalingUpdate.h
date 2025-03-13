/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/AutoScalingSettingsUpdate.h>
#include <aws/dynamodb/model/ReplicaGlobalSecondaryIndexAutoScalingUpdate.h>
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
   * <p>Represents the auto scaling settings of a replica that will be
   * modified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ReplicaAutoScalingUpdate">AWS
   * API Reference</a></p>
   */
  class ReplicaAutoScalingUpdate
  {
  public:
    AWS_DYNAMODB_API ReplicaAutoScalingUpdate() = default;
    AWS_DYNAMODB_API ReplicaAutoScalingUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ReplicaAutoScalingUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    ReplicaAutoScalingUpdate& WithRegionName(RegionNameT&& value) { SetRegionName(std::forward<RegionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the auto scaling settings of global secondary indexes that will be
     * modified.</p>
     */
    inline const Aws::Vector<ReplicaGlobalSecondaryIndexAutoScalingUpdate>& GetReplicaGlobalSecondaryIndexUpdates() const { return m_replicaGlobalSecondaryIndexUpdates; }
    inline bool ReplicaGlobalSecondaryIndexUpdatesHasBeenSet() const { return m_replicaGlobalSecondaryIndexUpdatesHasBeenSet; }
    template<typename ReplicaGlobalSecondaryIndexUpdatesT = Aws::Vector<ReplicaGlobalSecondaryIndexAutoScalingUpdate>>
    void SetReplicaGlobalSecondaryIndexUpdates(ReplicaGlobalSecondaryIndexUpdatesT&& value) { m_replicaGlobalSecondaryIndexUpdatesHasBeenSet = true; m_replicaGlobalSecondaryIndexUpdates = std::forward<ReplicaGlobalSecondaryIndexUpdatesT>(value); }
    template<typename ReplicaGlobalSecondaryIndexUpdatesT = Aws::Vector<ReplicaGlobalSecondaryIndexAutoScalingUpdate>>
    ReplicaAutoScalingUpdate& WithReplicaGlobalSecondaryIndexUpdates(ReplicaGlobalSecondaryIndexUpdatesT&& value) { SetReplicaGlobalSecondaryIndexUpdates(std::forward<ReplicaGlobalSecondaryIndexUpdatesT>(value)); return *this;}
    template<typename ReplicaGlobalSecondaryIndexUpdatesT = ReplicaGlobalSecondaryIndexAutoScalingUpdate>
    ReplicaAutoScalingUpdate& AddReplicaGlobalSecondaryIndexUpdates(ReplicaGlobalSecondaryIndexUpdatesT&& value) { m_replicaGlobalSecondaryIndexUpdatesHasBeenSet = true; m_replicaGlobalSecondaryIndexUpdates.emplace_back(std::forward<ReplicaGlobalSecondaryIndexUpdatesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const AutoScalingSettingsUpdate& GetReplicaProvisionedReadCapacityAutoScalingUpdate() const { return m_replicaProvisionedReadCapacityAutoScalingUpdate; }
    inline bool ReplicaProvisionedReadCapacityAutoScalingUpdateHasBeenSet() const { return m_replicaProvisionedReadCapacityAutoScalingUpdateHasBeenSet; }
    template<typename ReplicaProvisionedReadCapacityAutoScalingUpdateT = AutoScalingSettingsUpdate>
    void SetReplicaProvisionedReadCapacityAutoScalingUpdate(ReplicaProvisionedReadCapacityAutoScalingUpdateT&& value) { m_replicaProvisionedReadCapacityAutoScalingUpdateHasBeenSet = true; m_replicaProvisionedReadCapacityAutoScalingUpdate = std::forward<ReplicaProvisionedReadCapacityAutoScalingUpdateT>(value); }
    template<typename ReplicaProvisionedReadCapacityAutoScalingUpdateT = AutoScalingSettingsUpdate>
    ReplicaAutoScalingUpdate& WithReplicaProvisionedReadCapacityAutoScalingUpdate(ReplicaProvisionedReadCapacityAutoScalingUpdateT&& value) { SetReplicaProvisionedReadCapacityAutoScalingUpdate(std::forward<ReplicaProvisionedReadCapacityAutoScalingUpdateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    Aws::Vector<ReplicaGlobalSecondaryIndexAutoScalingUpdate> m_replicaGlobalSecondaryIndexUpdates;
    bool m_replicaGlobalSecondaryIndexUpdatesHasBeenSet = false;

    AutoScalingSettingsUpdate m_replicaProvisionedReadCapacityAutoScalingUpdate;
    bool m_replicaProvisionedReadCapacityAutoScalingUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
