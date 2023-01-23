﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/Replica.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class CreateGlobalTableRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API CreateGlobalTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGlobalTable"; }

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
    inline CreateGlobalTableRequest& WithGlobalTableName(const Aws::String& value) { SetGlobalTableName(value); return *this;}

    /**
     * <p>The global table name.</p>
     */
    inline CreateGlobalTableRequest& WithGlobalTableName(Aws::String&& value) { SetGlobalTableName(std::move(value)); return *this;}

    /**
     * <p>The global table name.</p>
     */
    inline CreateGlobalTableRequest& WithGlobalTableName(const char* value) { SetGlobalTableName(value); return *this;}


    /**
     * <p>The Regions where the global table needs to be created.</p>
     */
    inline const Aws::Vector<Replica>& GetReplicationGroup() const{ return m_replicationGroup; }

    /**
     * <p>The Regions where the global table needs to be created.</p>
     */
    inline bool ReplicationGroupHasBeenSet() const { return m_replicationGroupHasBeenSet; }

    /**
     * <p>The Regions where the global table needs to be created.</p>
     */
    inline void SetReplicationGroup(const Aws::Vector<Replica>& value) { m_replicationGroupHasBeenSet = true; m_replicationGroup = value; }

    /**
     * <p>The Regions where the global table needs to be created.</p>
     */
    inline void SetReplicationGroup(Aws::Vector<Replica>&& value) { m_replicationGroupHasBeenSet = true; m_replicationGroup = std::move(value); }

    /**
     * <p>The Regions where the global table needs to be created.</p>
     */
    inline CreateGlobalTableRequest& WithReplicationGroup(const Aws::Vector<Replica>& value) { SetReplicationGroup(value); return *this;}

    /**
     * <p>The Regions where the global table needs to be created.</p>
     */
    inline CreateGlobalTableRequest& WithReplicationGroup(Aws::Vector<Replica>&& value) { SetReplicationGroup(std::move(value)); return *this;}

    /**
     * <p>The Regions where the global table needs to be created.</p>
     */
    inline CreateGlobalTableRequest& AddReplicationGroup(const Replica& value) { m_replicationGroupHasBeenSet = true; m_replicationGroup.push_back(value); return *this; }

    /**
     * <p>The Regions where the global table needs to be created.</p>
     */
    inline CreateGlobalTableRequest& AddReplicationGroup(Replica&& value) { m_replicationGroupHasBeenSet = true; m_replicationGroup.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_globalTableName;
    bool m_globalTableNameHasBeenSet = false;

    Aws::Vector<Replica> m_replicationGroup;
    bool m_replicationGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
