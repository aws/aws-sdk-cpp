/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/Replica.h>
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
   * <p>Represents the properties of a global table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/GlobalTable">AWS
   * API Reference</a></p>
   */
  class GlobalTable
  {
  public:
    AWS_DYNAMODB_API GlobalTable() = default;
    AWS_DYNAMODB_API GlobalTable(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API GlobalTable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The global table name.</p>
     */
    inline const Aws::String& GetGlobalTableName() const { return m_globalTableName; }
    inline bool GlobalTableNameHasBeenSet() const { return m_globalTableNameHasBeenSet; }
    template<typename GlobalTableNameT = Aws::String>
    void SetGlobalTableName(GlobalTableNameT&& value) { m_globalTableNameHasBeenSet = true; m_globalTableName = std::forward<GlobalTableNameT>(value); }
    template<typename GlobalTableNameT = Aws::String>
    GlobalTable& WithGlobalTableName(GlobalTableNameT&& value) { SetGlobalTableName(std::forward<GlobalTableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Regions where the global table has replicas.</p>
     */
    inline const Aws::Vector<Replica>& GetReplicationGroup() const { return m_replicationGroup; }
    inline bool ReplicationGroupHasBeenSet() const { return m_replicationGroupHasBeenSet; }
    template<typename ReplicationGroupT = Aws::Vector<Replica>>
    void SetReplicationGroup(ReplicationGroupT&& value) { m_replicationGroupHasBeenSet = true; m_replicationGroup = std::forward<ReplicationGroupT>(value); }
    template<typename ReplicationGroupT = Aws::Vector<Replica>>
    GlobalTable& WithReplicationGroup(ReplicationGroupT&& value) { SetReplicationGroup(std::forward<ReplicationGroupT>(value)); return *this;}
    template<typename ReplicationGroupT = Replica>
    GlobalTable& AddReplicationGroup(ReplicationGroupT&& value) { m_replicationGroupHasBeenSet = true; m_replicationGroup.emplace_back(std::forward<ReplicationGroupT>(value)); return *this; }
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
