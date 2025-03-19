/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/AutoScalingSettingsUpdate.h>
#include <aws/dynamodb/model/GlobalSecondaryIndexAutoScalingUpdate.h>
#include <aws/dynamodb/model/ReplicaAutoScalingUpdate.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class UpdateTableReplicaAutoScalingRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API UpdateTableReplicaAutoScalingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTableReplicaAutoScaling"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>Represents the auto scaling settings of the global secondary indexes of the
     * replica to be updated.</p>
     */
    inline const Aws::Vector<GlobalSecondaryIndexAutoScalingUpdate>& GetGlobalSecondaryIndexUpdates() const { return m_globalSecondaryIndexUpdates; }
    inline bool GlobalSecondaryIndexUpdatesHasBeenSet() const { return m_globalSecondaryIndexUpdatesHasBeenSet; }
    template<typename GlobalSecondaryIndexUpdatesT = Aws::Vector<GlobalSecondaryIndexAutoScalingUpdate>>
    void SetGlobalSecondaryIndexUpdates(GlobalSecondaryIndexUpdatesT&& value) { m_globalSecondaryIndexUpdatesHasBeenSet = true; m_globalSecondaryIndexUpdates = std::forward<GlobalSecondaryIndexUpdatesT>(value); }
    template<typename GlobalSecondaryIndexUpdatesT = Aws::Vector<GlobalSecondaryIndexAutoScalingUpdate>>
    UpdateTableReplicaAutoScalingRequest& WithGlobalSecondaryIndexUpdates(GlobalSecondaryIndexUpdatesT&& value) { SetGlobalSecondaryIndexUpdates(std::forward<GlobalSecondaryIndexUpdatesT>(value)); return *this;}
    template<typename GlobalSecondaryIndexUpdatesT = GlobalSecondaryIndexAutoScalingUpdate>
    UpdateTableReplicaAutoScalingRequest& AddGlobalSecondaryIndexUpdates(GlobalSecondaryIndexUpdatesT&& value) { m_globalSecondaryIndexUpdatesHasBeenSet = true; m_globalSecondaryIndexUpdates.emplace_back(std::forward<GlobalSecondaryIndexUpdatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the global table to be updated. You can also provide the Amazon
     * Resource Name (ARN) of the table in this parameter.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    UpdateTableReplicaAutoScalingRequest& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AutoScalingSettingsUpdate& GetProvisionedWriteCapacityAutoScalingUpdate() const { return m_provisionedWriteCapacityAutoScalingUpdate; }
    inline bool ProvisionedWriteCapacityAutoScalingUpdateHasBeenSet() const { return m_provisionedWriteCapacityAutoScalingUpdateHasBeenSet; }
    template<typename ProvisionedWriteCapacityAutoScalingUpdateT = AutoScalingSettingsUpdate>
    void SetProvisionedWriteCapacityAutoScalingUpdate(ProvisionedWriteCapacityAutoScalingUpdateT&& value) { m_provisionedWriteCapacityAutoScalingUpdateHasBeenSet = true; m_provisionedWriteCapacityAutoScalingUpdate = std::forward<ProvisionedWriteCapacityAutoScalingUpdateT>(value); }
    template<typename ProvisionedWriteCapacityAutoScalingUpdateT = AutoScalingSettingsUpdate>
    UpdateTableReplicaAutoScalingRequest& WithProvisionedWriteCapacityAutoScalingUpdate(ProvisionedWriteCapacityAutoScalingUpdateT&& value) { SetProvisionedWriteCapacityAutoScalingUpdate(std::forward<ProvisionedWriteCapacityAutoScalingUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the auto scaling settings of replicas of the table that will be
     * modified.</p>
     */
    inline const Aws::Vector<ReplicaAutoScalingUpdate>& GetReplicaUpdates() const { return m_replicaUpdates; }
    inline bool ReplicaUpdatesHasBeenSet() const { return m_replicaUpdatesHasBeenSet; }
    template<typename ReplicaUpdatesT = Aws::Vector<ReplicaAutoScalingUpdate>>
    void SetReplicaUpdates(ReplicaUpdatesT&& value) { m_replicaUpdatesHasBeenSet = true; m_replicaUpdates = std::forward<ReplicaUpdatesT>(value); }
    template<typename ReplicaUpdatesT = Aws::Vector<ReplicaAutoScalingUpdate>>
    UpdateTableReplicaAutoScalingRequest& WithReplicaUpdates(ReplicaUpdatesT&& value) { SetReplicaUpdates(std::forward<ReplicaUpdatesT>(value)); return *this;}
    template<typename ReplicaUpdatesT = ReplicaAutoScalingUpdate>
    UpdateTableReplicaAutoScalingRequest& AddReplicaUpdates(ReplicaUpdatesT&& value) { m_replicaUpdatesHasBeenSet = true; m_replicaUpdates.emplace_back(std::forward<ReplicaUpdatesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GlobalSecondaryIndexAutoScalingUpdate> m_globalSecondaryIndexUpdates;
    bool m_globalSecondaryIndexUpdatesHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    AutoScalingSettingsUpdate m_provisionedWriteCapacityAutoScalingUpdate;
    bool m_provisionedWriteCapacityAutoScalingUpdateHasBeenSet = false;

    Aws::Vector<ReplicaAutoScalingUpdate> m_replicaUpdates;
    bool m_replicaUpdatesHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
