/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/BillingMode.h>
#include <aws/dynamodb/model/AutoScalingSettingsUpdate.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/GlobalTableGlobalSecondaryIndexSettingsUpdate.h>
#include <aws/dynamodb/model/ReplicaSettingsUpdate.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class UpdateGlobalTableSettingsRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API UpdateGlobalTableSettingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGlobalTableSettings"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The name of the global table</p>
     */
    inline const Aws::String& GetGlobalTableName() const { return m_globalTableName; }
    inline bool GlobalTableNameHasBeenSet() const { return m_globalTableNameHasBeenSet; }
    template<typename GlobalTableNameT = Aws::String>
    void SetGlobalTableName(GlobalTableNameT&& value) { m_globalTableNameHasBeenSet = true; m_globalTableName = std::forward<GlobalTableNameT>(value); }
    template<typename GlobalTableNameT = Aws::String>
    UpdateGlobalTableSettingsRequest& WithGlobalTableName(GlobalTableNameT&& value) { SetGlobalTableName(std::forward<GlobalTableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The billing mode of the global table. If <code>GlobalTableBillingMode</code>
     * is not specified, the global table defaults to <code>PROVISIONED</code> capacity
     * billing mode.</p> <ul> <li> <p> <code>PROVISIONED</code> - We recommend using
     * <code>PROVISIONED</code> for predictable workloads. <code>PROVISIONED</code>
     * sets the billing mode to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/provisioned-capacity-mode.html">Provisioned
     * capacity mode</a>.</p> </li> <li> <p> <code>PAY_PER_REQUEST</code> - We
     * recommend using <code>PAY_PER_REQUEST</code> for unpredictable workloads.
     * <code>PAY_PER_REQUEST</code> sets the billing mode to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/on-demand-capacity-mode.html">On-demand
     * capacity mode</a>. </p> </li> </ul>
     */
    inline BillingMode GetGlobalTableBillingMode() const { return m_globalTableBillingMode; }
    inline bool GlobalTableBillingModeHasBeenSet() const { return m_globalTableBillingModeHasBeenSet; }
    inline void SetGlobalTableBillingMode(BillingMode value) { m_globalTableBillingModeHasBeenSet = true; m_globalTableBillingMode = value; }
    inline UpdateGlobalTableSettingsRequest& WithGlobalTableBillingMode(BillingMode value) { SetGlobalTableBillingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of writes consumed per second before DynamoDB returns a
     * <code>ThrottlingException.</code> </p>
     */
    inline long long GetGlobalTableProvisionedWriteCapacityUnits() const { return m_globalTableProvisionedWriteCapacityUnits; }
    inline bool GlobalTableProvisionedWriteCapacityUnitsHasBeenSet() const { return m_globalTableProvisionedWriteCapacityUnitsHasBeenSet; }
    inline void SetGlobalTableProvisionedWriteCapacityUnits(long long value) { m_globalTableProvisionedWriteCapacityUnitsHasBeenSet = true; m_globalTableProvisionedWriteCapacityUnits = value; }
    inline UpdateGlobalTableSettingsRequest& WithGlobalTableProvisionedWriteCapacityUnits(long long value) { SetGlobalTableProvisionedWriteCapacityUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Auto scaling settings for managing provisioned write capacity for the global
     * table.</p>
     */
    inline const AutoScalingSettingsUpdate& GetGlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate() const { return m_globalTableProvisionedWriteCapacityAutoScalingSettingsUpdate; }
    inline bool GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdateHasBeenSet() const { return m_globalTableProvisionedWriteCapacityAutoScalingSettingsUpdateHasBeenSet; }
    template<typename GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdateT = AutoScalingSettingsUpdate>
    void SetGlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate(GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdateT&& value) { m_globalTableProvisionedWriteCapacityAutoScalingSettingsUpdateHasBeenSet = true; m_globalTableProvisionedWriteCapacityAutoScalingSettingsUpdate = std::forward<GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdateT>(value); }
    template<typename GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdateT = AutoScalingSettingsUpdate>
    UpdateGlobalTableSettingsRequest& WithGlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate(GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdateT&& value) { SetGlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate(std::forward<GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the settings of a global secondary index for a global table that
     * will be modified.</p>
     */
    inline const Aws::Vector<GlobalTableGlobalSecondaryIndexSettingsUpdate>& GetGlobalTableGlobalSecondaryIndexSettingsUpdate() const { return m_globalTableGlobalSecondaryIndexSettingsUpdate; }
    inline bool GlobalTableGlobalSecondaryIndexSettingsUpdateHasBeenSet() const { return m_globalTableGlobalSecondaryIndexSettingsUpdateHasBeenSet; }
    template<typename GlobalTableGlobalSecondaryIndexSettingsUpdateT = Aws::Vector<GlobalTableGlobalSecondaryIndexSettingsUpdate>>
    void SetGlobalTableGlobalSecondaryIndexSettingsUpdate(GlobalTableGlobalSecondaryIndexSettingsUpdateT&& value) { m_globalTableGlobalSecondaryIndexSettingsUpdateHasBeenSet = true; m_globalTableGlobalSecondaryIndexSettingsUpdate = std::forward<GlobalTableGlobalSecondaryIndexSettingsUpdateT>(value); }
    template<typename GlobalTableGlobalSecondaryIndexSettingsUpdateT = Aws::Vector<GlobalTableGlobalSecondaryIndexSettingsUpdate>>
    UpdateGlobalTableSettingsRequest& WithGlobalTableGlobalSecondaryIndexSettingsUpdate(GlobalTableGlobalSecondaryIndexSettingsUpdateT&& value) { SetGlobalTableGlobalSecondaryIndexSettingsUpdate(std::forward<GlobalTableGlobalSecondaryIndexSettingsUpdateT>(value)); return *this;}
    template<typename GlobalTableGlobalSecondaryIndexSettingsUpdateT = GlobalTableGlobalSecondaryIndexSettingsUpdate>
    UpdateGlobalTableSettingsRequest& AddGlobalTableGlobalSecondaryIndexSettingsUpdate(GlobalTableGlobalSecondaryIndexSettingsUpdateT&& value) { m_globalTableGlobalSecondaryIndexSettingsUpdateHasBeenSet = true; m_globalTableGlobalSecondaryIndexSettingsUpdate.emplace_back(std::forward<GlobalTableGlobalSecondaryIndexSettingsUpdateT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents the settings for a global table in a Region that will be
     * modified.</p>
     */
    inline const Aws::Vector<ReplicaSettingsUpdate>& GetReplicaSettingsUpdate() const { return m_replicaSettingsUpdate; }
    inline bool ReplicaSettingsUpdateHasBeenSet() const { return m_replicaSettingsUpdateHasBeenSet; }
    template<typename ReplicaSettingsUpdateT = Aws::Vector<ReplicaSettingsUpdate>>
    void SetReplicaSettingsUpdate(ReplicaSettingsUpdateT&& value) { m_replicaSettingsUpdateHasBeenSet = true; m_replicaSettingsUpdate = std::forward<ReplicaSettingsUpdateT>(value); }
    template<typename ReplicaSettingsUpdateT = Aws::Vector<ReplicaSettingsUpdate>>
    UpdateGlobalTableSettingsRequest& WithReplicaSettingsUpdate(ReplicaSettingsUpdateT&& value) { SetReplicaSettingsUpdate(std::forward<ReplicaSettingsUpdateT>(value)); return *this;}
    template<typename ReplicaSettingsUpdateT = ReplicaSettingsUpdate>
    UpdateGlobalTableSettingsRequest& AddReplicaSettingsUpdate(ReplicaSettingsUpdateT&& value) { m_replicaSettingsUpdateHasBeenSet = true; m_replicaSettingsUpdate.emplace_back(std::forward<ReplicaSettingsUpdateT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_globalTableName;
    bool m_globalTableNameHasBeenSet = false;

    BillingMode m_globalTableBillingMode{BillingMode::NOT_SET};
    bool m_globalTableBillingModeHasBeenSet = false;

    long long m_globalTableProvisionedWriteCapacityUnits{0};
    bool m_globalTableProvisionedWriteCapacityUnitsHasBeenSet = false;

    AutoScalingSettingsUpdate m_globalTableProvisionedWriteCapacityAutoScalingSettingsUpdate;
    bool m_globalTableProvisionedWriteCapacityAutoScalingSettingsUpdateHasBeenSet = false;

    Aws::Vector<GlobalTableGlobalSecondaryIndexSettingsUpdate> m_globalTableGlobalSecondaryIndexSettingsUpdate;
    bool m_globalTableGlobalSecondaryIndexSettingsUpdateHasBeenSet = false;

    Aws::Vector<ReplicaSettingsUpdate> m_replicaSettingsUpdate;
    bool m_replicaSettingsUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
