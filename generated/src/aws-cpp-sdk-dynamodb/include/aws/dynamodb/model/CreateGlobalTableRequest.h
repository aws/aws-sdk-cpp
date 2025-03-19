/**
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
    AWS_DYNAMODB_API CreateGlobalTableRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGlobalTable"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The global table name.</p>
     */
    inline const Aws::String& GetGlobalTableName() const { return m_globalTableName; }
    inline bool GlobalTableNameHasBeenSet() const { return m_globalTableNameHasBeenSet; }
    template<typename GlobalTableNameT = Aws::String>
    void SetGlobalTableName(GlobalTableNameT&& value) { m_globalTableNameHasBeenSet = true; m_globalTableName = std::forward<GlobalTableNameT>(value); }
    template<typename GlobalTableNameT = Aws::String>
    CreateGlobalTableRequest& WithGlobalTableName(GlobalTableNameT&& value) { SetGlobalTableName(std::forward<GlobalTableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Regions where the global table needs to be created.</p>
     */
    inline const Aws::Vector<Replica>& GetReplicationGroup() const { return m_replicationGroup; }
    inline bool ReplicationGroupHasBeenSet() const { return m_replicationGroupHasBeenSet; }
    template<typename ReplicationGroupT = Aws::Vector<Replica>>
    void SetReplicationGroup(ReplicationGroupT&& value) { m_replicationGroupHasBeenSet = true; m_replicationGroup = std::forward<ReplicationGroupT>(value); }
    template<typename ReplicationGroupT = Aws::Vector<Replica>>
    CreateGlobalTableRequest& WithReplicationGroup(ReplicationGroupT&& value) { SetReplicationGroup(std::forward<ReplicationGroupT>(value)); return *this;}
    template<typename ReplicationGroupT = Replica>
    CreateGlobalTableRequest& AddReplicationGroup(ReplicationGroupT&& value) { m_replicationGroupHasBeenSet = true; m_replicationGroup.emplace_back(std::forward<ReplicationGroupT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_globalTableName;
    bool m_globalTableNameHasBeenSet = false;

    Aws::Vector<Replica> m_replicationGroup;
    bool m_replicationGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
