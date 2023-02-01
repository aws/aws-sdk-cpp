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
    AWS_DYNAMODB_API UpdateTableReplicaAutoScalingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTableReplicaAutoScaling"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Represents the auto scaling settings of the global secondary indexes of the
     * replica to be updated.</p>
     */
    inline const Aws::Vector<GlobalSecondaryIndexAutoScalingUpdate>& GetGlobalSecondaryIndexUpdates() const{ return m_globalSecondaryIndexUpdates; }

    /**
     * <p>Represents the auto scaling settings of the global secondary indexes of the
     * replica to be updated.</p>
     */
    inline bool GlobalSecondaryIndexUpdatesHasBeenSet() const { return m_globalSecondaryIndexUpdatesHasBeenSet; }

    /**
     * <p>Represents the auto scaling settings of the global secondary indexes of the
     * replica to be updated.</p>
     */
    inline void SetGlobalSecondaryIndexUpdates(const Aws::Vector<GlobalSecondaryIndexAutoScalingUpdate>& value) { m_globalSecondaryIndexUpdatesHasBeenSet = true; m_globalSecondaryIndexUpdates = value; }

    /**
     * <p>Represents the auto scaling settings of the global secondary indexes of the
     * replica to be updated.</p>
     */
    inline void SetGlobalSecondaryIndexUpdates(Aws::Vector<GlobalSecondaryIndexAutoScalingUpdate>&& value) { m_globalSecondaryIndexUpdatesHasBeenSet = true; m_globalSecondaryIndexUpdates = std::move(value); }

    /**
     * <p>Represents the auto scaling settings of the global secondary indexes of the
     * replica to be updated.</p>
     */
    inline UpdateTableReplicaAutoScalingRequest& WithGlobalSecondaryIndexUpdates(const Aws::Vector<GlobalSecondaryIndexAutoScalingUpdate>& value) { SetGlobalSecondaryIndexUpdates(value); return *this;}

    /**
     * <p>Represents the auto scaling settings of the global secondary indexes of the
     * replica to be updated.</p>
     */
    inline UpdateTableReplicaAutoScalingRequest& WithGlobalSecondaryIndexUpdates(Aws::Vector<GlobalSecondaryIndexAutoScalingUpdate>&& value) { SetGlobalSecondaryIndexUpdates(std::move(value)); return *this;}

    /**
     * <p>Represents the auto scaling settings of the global secondary indexes of the
     * replica to be updated.</p>
     */
    inline UpdateTableReplicaAutoScalingRequest& AddGlobalSecondaryIndexUpdates(const GlobalSecondaryIndexAutoScalingUpdate& value) { m_globalSecondaryIndexUpdatesHasBeenSet = true; m_globalSecondaryIndexUpdates.push_back(value); return *this; }

    /**
     * <p>Represents the auto scaling settings of the global secondary indexes of the
     * replica to be updated.</p>
     */
    inline UpdateTableReplicaAutoScalingRequest& AddGlobalSecondaryIndexUpdates(GlobalSecondaryIndexAutoScalingUpdate&& value) { m_globalSecondaryIndexUpdatesHasBeenSet = true; m_globalSecondaryIndexUpdates.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the global table to be updated.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the global table to be updated.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the global table to be updated.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the global table to be updated.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the global table to be updated.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the global table to be updated.</p>
     */
    inline UpdateTableReplicaAutoScalingRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the global table to be updated.</p>
     */
    inline UpdateTableReplicaAutoScalingRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the global table to be updated.</p>
     */
    inline UpdateTableReplicaAutoScalingRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    
    inline const AutoScalingSettingsUpdate& GetProvisionedWriteCapacityAutoScalingUpdate() const{ return m_provisionedWriteCapacityAutoScalingUpdate; }

    
    inline bool ProvisionedWriteCapacityAutoScalingUpdateHasBeenSet() const { return m_provisionedWriteCapacityAutoScalingUpdateHasBeenSet; }

    
    inline void SetProvisionedWriteCapacityAutoScalingUpdate(const AutoScalingSettingsUpdate& value) { m_provisionedWriteCapacityAutoScalingUpdateHasBeenSet = true; m_provisionedWriteCapacityAutoScalingUpdate = value; }

    
    inline void SetProvisionedWriteCapacityAutoScalingUpdate(AutoScalingSettingsUpdate&& value) { m_provisionedWriteCapacityAutoScalingUpdateHasBeenSet = true; m_provisionedWriteCapacityAutoScalingUpdate = std::move(value); }

    
    inline UpdateTableReplicaAutoScalingRequest& WithProvisionedWriteCapacityAutoScalingUpdate(const AutoScalingSettingsUpdate& value) { SetProvisionedWriteCapacityAutoScalingUpdate(value); return *this;}

    
    inline UpdateTableReplicaAutoScalingRequest& WithProvisionedWriteCapacityAutoScalingUpdate(AutoScalingSettingsUpdate&& value) { SetProvisionedWriteCapacityAutoScalingUpdate(std::move(value)); return *this;}


    /**
     * <p>Represents the auto scaling settings of replicas of the table that will be
     * modified.</p>
     */
    inline const Aws::Vector<ReplicaAutoScalingUpdate>& GetReplicaUpdates() const{ return m_replicaUpdates; }

    /**
     * <p>Represents the auto scaling settings of replicas of the table that will be
     * modified.</p>
     */
    inline bool ReplicaUpdatesHasBeenSet() const { return m_replicaUpdatesHasBeenSet; }

    /**
     * <p>Represents the auto scaling settings of replicas of the table that will be
     * modified.</p>
     */
    inline void SetReplicaUpdates(const Aws::Vector<ReplicaAutoScalingUpdate>& value) { m_replicaUpdatesHasBeenSet = true; m_replicaUpdates = value; }

    /**
     * <p>Represents the auto scaling settings of replicas of the table that will be
     * modified.</p>
     */
    inline void SetReplicaUpdates(Aws::Vector<ReplicaAutoScalingUpdate>&& value) { m_replicaUpdatesHasBeenSet = true; m_replicaUpdates = std::move(value); }

    /**
     * <p>Represents the auto scaling settings of replicas of the table that will be
     * modified.</p>
     */
    inline UpdateTableReplicaAutoScalingRequest& WithReplicaUpdates(const Aws::Vector<ReplicaAutoScalingUpdate>& value) { SetReplicaUpdates(value); return *this;}

    /**
     * <p>Represents the auto scaling settings of replicas of the table that will be
     * modified.</p>
     */
    inline UpdateTableReplicaAutoScalingRequest& WithReplicaUpdates(Aws::Vector<ReplicaAutoScalingUpdate>&& value) { SetReplicaUpdates(std::move(value)); return *this;}

    /**
     * <p>Represents the auto scaling settings of replicas of the table that will be
     * modified.</p>
     */
    inline UpdateTableReplicaAutoScalingRequest& AddReplicaUpdates(const ReplicaAutoScalingUpdate& value) { m_replicaUpdatesHasBeenSet = true; m_replicaUpdates.push_back(value); return *this; }

    /**
     * <p>Represents the auto scaling settings of replicas of the table that will be
     * modified.</p>
     */
    inline UpdateTableReplicaAutoScalingRequest& AddReplicaUpdates(ReplicaAutoScalingUpdate&& value) { m_replicaUpdatesHasBeenSet = true; m_replicaUpdates.push_back(std::move(value)); return *this; }

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
