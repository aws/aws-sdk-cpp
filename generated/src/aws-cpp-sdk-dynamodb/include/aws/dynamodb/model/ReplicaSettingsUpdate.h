/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/AutoScalingSettingsUpdate.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/TableClass.h>
#include <aws/dynamodb/model/ReplicaGlobalSecondaryIndexSettingsUpdate.h>
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
   * <p>Represents the settings for a global table in a Region that will be
   * modified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ReplicaSettingsUpdate">AWS
   * API Reference</a></p>
   */
  class ReplicaSettingsUpdate
  {
  public:
    AWS_DYNAMODB_API ReplicaSettingsUpdate() = default;
    AWS_DYNAMODB_API ReplicaSettingsUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ReplicaSettingsUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Region of the replica to be added.</p>
     */
    inline const Aws::String& GetRegionName() const { return m_regionName; }
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
    template<typename RegionNameT = Aws::String>
    void SetRegionName(RegionNameT&& value) { m_regionNameHasBeenSet = true; m_regionName = std::forward<RegionNameT>(value); }
    template<typename RegionNameT = Aws::String>
    ReplicaSettingsUpdate& WithRegionName(RegionNameT&& value) { SetRegionName(std::forward<RegionNameT>(value)); return *this;}
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
    inline ReplicaSettingsUpdate& WithReplicaProvisionedReadCapacityUnits(long long value) { SetReplicaProvisionedReadCapacityUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Auto scaling settings for managing a global table replica's read capacity
     * units.</p>
     */
    inline const AutoScalingSettingsUpdate& GetReplicaProvisionedReadCapacityAutoScalingSettingsUpdate() const { return m_replicaProvisionedReadCapacityAutoScalingSettingsUpdate; }
    inline bool ReplicaProvisionedReadCapacityAutoScalingSettingsUpdateHasBeenSet() const { return m_replicaProvisionedReadCapacityAutoScalingSettingsUpdateHasBeenSet; }
    template<typename ReplicaProvisionedReadCapacityAutoScalingSettingsUpdateT = AutoScalingSettingsUpdate>
    void SetReplicaProvisionedReadCapacityAutoScalingSettingsUpdate(ReplicaProvisionedReadCapacityAutoScalingSettingsUpdateT&& value) { m_replicaProvisionedReadCapacityAutoScalingSettingsUpdateHasBeenSet = true; m_replicaProvisionedReadCapacityAutoScalingSettingsUpdate = std::forward<ReplicaProvisionedReadCapacityAutoScalingSettingsUpdateT>(value); }
    template<typename ReplicaProvisionedReadCapacityAutoScalingSettingsUpdateT = AutoScalingSettingsUpdate>
    ReplicaSettingsUpdate& WithReplicaProvisionedReadCapacityAutoScalingSettingsUpdate(ReplicaProvisionedReadCapacityAutoScalingSettingsUpdateT&& value) { SetReplicaProvisionedReadCapacityAutoScalingSettingsUpdate(std::forward<ReplicaProvisionedReadCapacityAutoScalingSettingsUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the settings of a global secondary index for a global table that
     * will be modified.</p>
     */
    inline const Aws::Vector<ReplicaGlobalSecondaryIndexSettingsUpdate>& GetReplicaGlobalSecondaryIndexSettingsUpdate() const { return m_replicaGlobalSecondaryIndexSettingsUpdate; }
    inline bool ReplicaGlobalSecondaryIndexSettingsUpdateHasBeenSet() const { return m_replicaGlobalSecondaryIndexSettingsUpdateHasBeenSet; }
    template<typename ReplicaGlobalSecondaryIndexSettingsUpdateT = Aws::Vector<ReplicaGlobalSecondaryIndexSettingsUpdate>>
    void SetReplicaGlobalSecondaryIndexSettingsUpdate(ReplicaGlobalSecondaryIndexSettingsUpdateT&& value) { m_replicaGlobalSecondaryIndexSettingsUpdateHasBeenSet = true; m_replicaGlobalSecondaryIndexSettingsUpdate = std::forward<ReplicaGlobalSecondaryIndexSettingsUpdateT>(value); }
    template<typename ReplicaGlobalSecondaryIndexSettingsUpdateT = Aws::Vector<ReplicaGlobalSecondaryIndexSettingsUpdate>>
    ReplicaSettingsUpdate& WithReplicaGlobalSecondaryIndexSettingsUpdate(ReplicaGlobalSecondaryIndexSettingsUpdateT&& value) { SetReplicaGlobalSecondaryIndexSettingsUpdate(std::forward<ReplicaGlobalSecondaryIndexSettingsUpdateT>(value)); return *this;}
    template<typename ReplicaGlobalSecondaryIndexSettingsUpdateT = ReplicaGlobalSecondaryIndexSettingsUpdate>
    ReplicaSettingsUpdate& AddReplicaGlobalSecondaryIndexSettingsUpdate(ReplicaGlobalSecondaryIndexSettingsUpdateT&& value) { m_replicaGlobalSecondaryIndexSettingsUpdateHasBeenSet = true; m_replicaGlobalSecondaryIndexSettingsUpdate.emplace_back(std::forward<ReplicaGlobalSecondaryIndexSettingsUpdateT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Replica-specific table class. If not specified, uses the source table's table
     * class.</p>
     */
    inline TableClass GetReplicaTableClass() const { return m_replicaTableClass; }
    inline bool ReplicaTableClassHasBeenSet() const { return m_replicaTableClassHasBeenSet; }
    inline void SetReplicaTableClass(TableClass value) { m_replicaTableClassHasBeenSet = true; m_replicaTableClass = value; }
    inline ReplicaSettingsUpdate& WithReplicaTableClass(TableClass value) { SetReplicaTableClass(value); return *this;}
    ///@}
  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    long long m_replicaProvisionedReadCapacityUnits{0};
    bool m_replicaProvisionedReadCapacityUnitsHasBeenSet = false;

    AutoScalingSettingsUpdate m_replicaProvisionedReadCapacityAutoScalingSettingsUpdate;
    bool m_replicaProvisionedReadCapacityAutoScalingSettingsUpdateHasBeenSet = false;

    Aws::Vector<ReplicaGlobalSecondaryIndexSettingsUpdate> m_replicaGlobalSecondaryIndexSettingsUpdate;
    bool m_replicaGlobalSecondaryIndexSettingsUpdateHasBeenSet = false;

    TableClass m_replicaTableClass{TableClass::NOT_SET};
    bool m_replicaTableClassHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
