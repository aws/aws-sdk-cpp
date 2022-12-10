/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/ReplicaUpdate.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class UpdateGlobalTableRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API UpdateGlobalTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGlobalTable"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The global table name.</p>
     */
    inline const Aws::String& GetGlobalTableName() const{ return m_globalTableName; }

    /**
     * <p>The global table name.</p>
     */
    inline bool GlobalTableNameHasBeenSet() const { return m_globalTableNameHasBeenSet; }

    /**
     * <p>The global table name.</p>
     */
    inline void SetGlobalTableName(const Aws::String& value) { m_globalTableNameHasBeenSet = true; m_globalTableName = value; }

    /**
     * <p>The global table name.</p>
     */
    inline void SetGlobalTableName(Aws::String&& value) { m_globalTableNameHasBeenSet = true; m_globalTableName = std::move(value); }

    /**
     * <p>The global table name.</p>
     */
    inline void SetGlobalTableName(const char* value) { m_globalTableNameHasBeenSet = true; m_globalTableName.assign(value); }

    /**
     * <p>The global table name.</p>
     */
    inline UpdateGlobalTableRequest& WithGlobalTableName(const Aws::String& value) { SetGlobalTableName(value); return *this;}

    /**
     * <p>The global table name.</p>
     */
    inline UpdateGlobalTableRequest& WithGlobalTableName(Aws::String&& value) { SetGlobalTableName(std::move(value)); return *this;}

    /**
     * <p>The global table name.</p>
     */
    inline UpdateGlobalTableRequest& WithGlobalTableName(const char* value) { SetGlobalTableName(value); return *this;}


    /**
     * <p>A list of Regions that should be added or removed from the global table.</p>
     */
    inline const Aws::Vector<ReplicaUpdate>& GetReplicaUpdates() const{ return m_replicaUpdates; }

    /**
     * <p>A list of Regions that should be added or removed from the global table.</p>
     */
    inline bool ReplicaUpdatesHasBeenSet() const { return m_replicaUpdatesHasBeenSet; }

    /**
     * <p>A list of Regions that should be added or removed from the global table.</p>
     */
    inline void SetReplicaUpdates(const Aws::Vector<ReplicaUpdate>& value) { m_replicaUpdatesHasBeenSet = true; m_replicaUpdates = value; }

    /**
     * <p>A list of Regions that should be added or removed from the global table.</p>
     */
    inline void SetReplicaUpdates(Aws::Vector<ReplicaUpdate>&& value) { m_replicaUpdatesHasBeenSet = true; m_replicaUpdates = std::move(value); }

    /**
     * <p>A list of Regions that should be added or removed from the global table.</p>
     */
    inline UpdateGlobalTableRequest& WithReplicaUpdates(const Aws::Vector<ReplicaUpdate>& value) { SetReplicaUpdates(value); return *this;}

    /**
     * <p>A list of Regions that should be added or removed from the global table.</p>
     */
    inline UpdateGlobalTableRequest& WithReplicaUpdates(Aws::Vector<ReplicaUpdate>&& value) { SetReplicaUpdates(std::move(value)); return *this;}

    /**
     * <p>A list of Regions that should be added or removed from the global table.</p>
     */
    inline UpdateGlobalTableRequest& AddReplicaUpdates(const ReplicaUpdate& value) { m_replicaUpdatesHasBeenSet = true; m_replicaUpdates.push_back(value); return *this; }

    /**
     * <p>A list of Regions that should be added or removed from the global table.</p>
     */
    inline UpdateGlobalTableRequest& AddReplicaUpdates(ReplicaUpdate&& value) { m_replicaUpdatesHasBeenSet = true; m_replicaUpdates.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_globalTableName;
    bool m_globalTableNameHasBeenSet = false;

    Aws::Vector<ReplicaUpdate> m_replicaUpdates;
    bool m_replicaUpdatesHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
