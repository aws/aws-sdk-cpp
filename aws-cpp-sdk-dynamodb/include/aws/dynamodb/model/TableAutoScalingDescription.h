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
    AWS_DYNAMODB_API TableAutoScalingDescription();
    AWS_DYNAMODB_API TableAutoScalingDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API TableAutoScalingDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline TableAutoScalingDescription& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline TableAutoScalingDescription& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline TableAutoScalingDescription& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The current state of the table:</p> <ul> <li> <p> <code>CREATING</code> - The
     * table is being created.</p> </li> <li> <p> <code>UPDATING</code> - The table is
     * being updated.</p> </li> <li> <p> <code>DELETING</code> - The table is being
     * deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The table is ready for
     * use.</p> </li> </ul>
     */
    inline const TableStatus& GetTableStatus() const{ return m_tableStatus; }

    /**
     * <p>The current state of the table:</p> <ul> <li> <p> <code>CREATING</code> - The
     * table is being created.</p> </li> <li> <p> <code>UPDATING</code> - The table is
     * being updated.</p> </li> <li> <p> <code>DELETING</code> - The table is being
     * deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The table is ready for
     * use.</p> </li> </ul>
     */
    inline bool TableStatusHasBeenSet() const { return m_tableStatusHasBeenSet; }

    /**
     * <p>The current state of the table:</p> <ul> <li> <p> <code>CREATING</code> - The
     * table is being created.</p> </li> <li> <p> <code>UPDATING</code> - The table is
     * being updated.</p> </li> <li> <p> <code>DELETING</code> - The table is being
     * deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The table is ready for
     * use.</p> </li> </ul>
     */
    inline void SetTableStatus(const TableStatus& value) { m_tableStatusHasBeenSet = true; m_tableStatus = value; }

    /**
     * <p>The current state of the table:</p> <ul> <li> <p> <code>CREATING</code> - The
     * table is being created.</p> </li> <li> <p> <code>UPDATING</code> - The table is
     * being updated.</p> </li> <li> <p> <code>DELETING</code> - The table is being
     * deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The table is ready for
     * use.</p> </li> </ul>
     */
    inline void SetTableStatus(TableStatus&& value) { m_tableStatusHasBeenSet = true; m_tableStatus = std::move(value); }

    /**
     * <p>The current state of the table:</p> <ul> <li> <p> <code>CREATING</code> - The
     * table is being created.</p> </li> <li> <p> <code>UPDATING</code> - The table is
     * being updated.</p> </li> <li> <p> <code>DELETING</code> - The table is being
     * deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The table is ready for
     * use.</p> </li> </ul>
     */
    inline TableAutoScalingDescription& WithTableStatus(const TableStatus& value) { SetTableStatus(value); return *this;}

    /**
     * <p>The current state of the table:</p> <ul> <li> <p> <code>CREATING</code> - The
     * table is being created.</p> </li> <li> <p> <code>UPDATING</code> - The table is
     * being updated.</p> </li> <li> <p> <code>DELETING</code> - The table is being
     * deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The table is ready for
     * use.</p> </li> </ul>
     */
    inline TableAutoScalingDescription& WithTableStatus(TableStatus&& value) { SetTableStatus(std::move(value)); return *this;}


    /**
     * <p>Represents replicas of the global table.</p>
     */
    inline const Aws::Vector<ReplicaAutoScalingDescription>& GetReplicas() const{ return m_replicas; }

    /**
     * <p>Represents replicas of the global table.</p>
     */
    inline bool ReplicasHasBeenSet() const { return m_replicasHasBeenSet; }

    /**
     * <p>Represents replicas of the global table.</p>
     */
    inline void SetReplicas(const Aws::Vector<ReplicaAutoScalingDescription>& value) { m_replicasHasBeenSet = true; m_replicas = value; }

    /**
     * <p>Represents replicas of the global table.</p>
     */
    inline void SetReplicas(Aws::Vector<ReplicaAutoScalingDescription>&& value) { m_replicasHasBeenSet = true; m_replicas = std::move(value); }

    /**
     * <p>Represents replicas of the global table.</p>
     */
    inline TableAutoScalingDescription& WithReplicas(const Aws::Vector<ReplicaAutoScalingDescription>& value) { SetReplicas(value); return *this;}

    /**
     * <p>Represents replicas of the global table.</p>
     */
    inline TableAutoScalingDescription& WithReplicas(Aws::Vector<ReplicaAutoScalingDescription>&& value) { SetReplicas(std::move(value)); return *this;}

    /**
     * <p>Represents replicas of the global table.</p>
     */
    inline TableAutoScalingDescription& AddReplicas(const ReplicaAutoScalingDescription& value) { m_replicasHasBeenSet = true; m_replicas.push_back(value); return *this; }

    /**
     * <p>Represents replicas of the global table.</p>
     */
    inline TableAutoScalingDescription& AddReplicas(ReplicaAutoScalingDescription&& value) { m_replicasHasBeenSet = true; m_replicas.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    TableStatus m_tableStatus;
    bool m_tableStatusHasBeenSet = false;

    Aws::Vector<ReplicaAutoScalingDescription> m_replicas;
    bool m_replicasHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
