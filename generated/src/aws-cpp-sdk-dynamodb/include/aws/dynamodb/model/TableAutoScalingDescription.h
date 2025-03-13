/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/TableStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/ReplicaAutoScalingDescription.h>
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
   * <p>Represents the auto scaling configuration for a global table.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/TableAutoScalingDescription">AWS
   * API Reference</a></p>
   */
  class TableAutoScalingDescription
  {
  public:
    AWS_DYNAMODB_API TableAutoScalingDescription() = default;
    AWS_DYNAMODB_API TableAutoScalingDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API TableAutoScalingDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    TableAutoScalingDescription& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the table:</p> <ul> <li> <p> <code>CREATING</code> - The
     * table is being created.</p> </li> <li> <p> <code>UPDATING</code> - The table is
     * being updated.</p> </li> <li> <p> <code>DELETING</code> - The table is being
     * deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The table is ready for
     * use.</p> </li> </ul>
     */
    inline TableStatus GetTableStatus() const { return m_tableStatus; }
    inline bool TableStatusHasBeenSet() const { return m_tableStatusHasBeenSet; }
    inline void SetTableStatus(TableStatus value) { m_tableStatusHasBeenSet = true; m_tableStatus = value; }
    inline TableAutoScalingDescription& WithTableStatus(TableStatus value) { SetTableStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents replicas of the global table.</p>
     */
    inline const Aws::Vector<ReplicaAutoScalingDescription>& GetReplicas() const { return m_replicas; }
    inline bool ReplicasHasBeenSet() const { return m_replicasHasBeenSet; }
    template<typename ReplicasT = Aws::Vector<ReplicaAutoScalingDescription>>
    void SetReplicas(ReplicasT&& value) { m_replicasHasBeenSet = true; m_replicas = std::forward<ReplicasT>(value); }
    template<typename ReplicasT = Aws::Vector<ReplicaAutoScalingDescription>>
    TableAutoScalingDescription& WithReplicas(ReplicasT&& value) { SetReplicas(std::forward<ReplicasT>(value)); return *this;}
    template<typename ReplicasT = ReplicaAutoScalingDescription>
    TableAutoScalingDescription& AddReplicas(ReplicasT&& value) { m_replicasHasBeenSet = true; m_replicas.emplace_back(std::forward<ReplicasT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    TableStatus m_tableStatus{TableStatus::NOT_SET};
    bool m_tableStatusHasBeenSet = false;

    Aws::Vector<ReplicaAutoScalingDescription> m_replicas;
    bool m_replicasHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
