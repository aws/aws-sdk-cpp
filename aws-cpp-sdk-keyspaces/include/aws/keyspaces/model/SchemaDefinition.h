/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/keyspaces/model/ColumnDefinition.h>
#include <aws/keyspaces/model/PartitionKey.h>
#include <aws/keyspaces/model/ClusteringKey.h>
#include <aws/keyspaces/model/StaticColumn.h>
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
namespace Keyspaces
{
namespace Model
{

  /**
   * <p>Describes the schema of the table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/SchemaDefinition">AWS
   * API Reference</a></p>
   */
  class SchemaDefinition
  {
  public:
    AWS_KEYSPACES_API SchemaDefinition();
    AWS_KEYSPACES_API SchemaDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API SchemaDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The regular columns of the table.</p>
     */
    inline const Aws::Vector<ColumnDefinition>& GetAllColumns() const{ return m_allColumns; }

    /**
     * <p>The regular columns of the table.</p>
     */
    inline bool AllColumnsHasBeenSet() const { return m_allColumnsHasBeenSet; }

    /**
     * <p>The regular columns of the table.</p>
     */
    inline void SetAllColumns(const Aws::Vector<ColumnDefinition>& value) { m_allColumnsHasBeenSet = true; m_allColumns = value; }

    /**
     * <p>The regular columns of the table.</p>
     */
    inline void SetAllColumns(Aws::Vector<ColumnDefinition>&& value) { m_allColumnsHasBeenSet = true; m_allColumns = std::move(value); }

    /**
     * <p>The regular columns of the table.</p>
     */
    inline SchemaDefinition& WithAllColumns(const Aws::Vector<ColumnDefinition>& value) { SetAllColumns(value); return *this;}

    /**
     * <p>The regular columns of the table.</p>
     */
    inline SchemaDefinition& WithAllColumns(Aws::Vector<ColumnDefinition>&& value) { SetAllColumns(std::move(value)); return *this;}

    /**
     * <p>The regular columns of the table.</p>
     */
    inline SchemaDefinition& AddAllColumns(const ColumnDefinition& value) { m_allColumnsHasBeenSet = true; m_allColumns.push_back(value); return *this; }

    /**
     * <p>The regular columns of the table.</p>
     */
    inline SchemaDefinition& AddAllColumns(ColumnDefinition&& value) { m_allColumnsHasBeenSet = true; m_allColumns.push_back(std::move(value)); return *this; }


    /**
     * <p>The columns that are part of the partition key of the table .</p>
     */
    inline const Aws::Vector<PartitionKey>& GetPartitionKeys() const{ return m_partitionKeys; }

    /**
     * <p>The columns that are part of the partition key of the table .</p>
     */
    inline bool PartitionKeysHasBeenSet() const { return m_partitionKeysHasBeenSet; }

    /**
     * <p>The columns that are part of the partition key of the table .</p>
     */
    inline void SetPartitionKeys(const Aws::Vector<PartitionKey>& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys = value; }

    /**
     * <p>The columns that are part of the partition key of the table .</p>
     */
    inline void SetPartitionKeys(Aws::Vector<PartitionKey>&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys = std::move(value); }

    /**
     * <p>The columns that are part of the partition key of the table .</p>
     */
    inline SchemaDefinition& WithPartitionKeys(const Aws::Vector<PartitionKey>& value) { SetPartitionKeys(value); return *this;}

    /**
     * <p>The columns that are part of the partition key of the table .</p>
     */
    inline SchemaDefinition& WithPartitionKeys(Aws::Vector<PartitionKey>&& value) { SetPartitionKeys(std::move(value)); return *this;}

    /**
     * <p>The columns that are part of the partition key of the table .</p>
     */
    inline SchemaDefinition& AddPartitionKeys(const PartitionKey& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.push_back(value); return *this; }

    /**
     * <p>The columns that are part of the partition key of the table .</p>
     */
    inline SchemaDefinition& AddPartitionKeys(PartitionKey&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.push_back(std::move(value)); return *this; }


    /**
     * <p>The columns that are part of the clustering key of the table.</p>
     */
    inline const Aws::Vector<ClusteringKey>& GetClusteringKeys() const{ return m_clusteringKeys; }

    /**
     * <p>The columns that are part of the clustering key of the table.</p>
     */
    inline bool ClusteringKeysHasBeenSet() const { return m_clusteringKeysHasBeenSet; }

    /**
     * <p>The columns that are part of the clustering key of the table.</p>
     */
    inline void SetClusteringKeys(const Aws::Vector<ClusteringKey>& value) { m_clusteringKeysHasBeenSet = true; m_clusteringKeys = value; }

    /**
     * <p>The columns that are part of the clustering key of the table.</p>
     */
    inline void SetClusteringKeys(Aws::Vector<ClusteringKey>&& value) { m_clusteringKeysHasBeenSet = true; m_clusteringKeys = std::move(value); }

    /**
     * <p>The columns that are part of the clustering key of the table.</p>
     */
    inline SchemaDefinition& WithClusteringKeys(const Aws::Vector<ClusteringKey>& value) { SetClusteringKeys(value); return *this;}

    /**
     * <p>The columns that are part of the clustering key of the table.</p>
     */
    inline SchemaDefinition& WithClusteringKeys(Aws::Vector<ClusteringKey>&& value) { SetClusteringKeys(std::move(value)); return *this;}

    /**
     * <p>The columns that are part of the clustering key of the table.</p>
     */
    inline SchemaDefinition& AddClusteringKeys(const ClusteringKey& value) { m_clusteringKeysHasBeenSet = true; m_clusteringKeys.push_back(value); return *this; }

    /**
     * <p>The columns that are part of the clustering key of the table.</p>
     */
    inline SchemaDefinition& AddClusteringKeys(ClusteringKey&& value) { m_clusteringKeysHasBeenSet = true; m_clusteringKeys.push_back(std::move(value)); return *this; }


    /**
     * <p>The columns that have been defined as <code>STATIC</code>. Static columns
     * store values that are shared by all rows in the same partition.</p>
     */
    inline const Aws::Vector<StaticColumn>& GetStaticColumns() const{ return m_staticColumns; }

    /**
     * <p>The columns that have been defined as <code>STATIC</code>. Static columns
     * store values that are shared by all rows in the same partition.</p>
     */
    inline bool StaticColumnsHasBeenSet() const { return m_staticColumnsHasBeenSet; }

    /**
     * <p>The columns that have been defined as <code>STATIC</code>. Static columns
     * store values that are shared by all rows in the same partition.</p>
     */
    inline void SetStaticColumns(const Aws::Vector<StaticColumn>& value) { m_staticColumnsHasBeenSet = true; m_staticColumns = value; }

    /**
     * <p>The columns that have been defined as <code>STATIC</code>. Static columns
     * store values that are shared by all rows in the same partition.</p>
     */
    inline void SetStaticColumns(Aws::Vector<StaticColumn>&& value) { m_staticColumnsHasBeenSet = true; m_staticColumns = std::move(value); }

    /**
     * <p>The columns that have been defined as <code>STATIC</code>. Static columns
     * store values that are shared by all rows in the same partition.</p>
     */
    inline SchemaDefinition& WithStaticColumns(const Aws::Vector<StaticColumn>& value) { SetStaticColumns(value); return *this;}

    /**
     * <p>The columns that have been defined as <code>STATIC</code>. Static columns
     * store values that are shared by all rows in the same partition.</p>
     */
    inline SchemaDefinition& WithStaticColumns(Aws::Vector<StaticColumn>&& value) { SetStaticColumns(std::move(value)); return *this;}

    /**
     * <p>The columns that have been defined as <code>STATIC</code>. Static columns
     * store values that are shared by all rows in the same partition.</p>
     */
    inline SchemaDefinition& AddStaticColumns(const StaticColumn& value) { m_staticColumnsHasBeenSet = true; m_staticColumns.push_back(value); return *this; }

    /**
     * <p>The columns that have been defined as <code>STATIC</code>. Static columns
     * store values that are shared by all rows in the same partition.</p>
     */
    inline SchemaDefinition& AddStaticColumns(StaticColumn&& value) { m_staticColumnsHasBeenSet = true; m_staticColumns.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ColumnDefinition> m_allColumns;
    bool m_allColumnsHasBeenSet = false;

    Aws::Vector<PartitionKey> m_partitionKeys;
    bool m_partitionKeysHasBeenSet = false;

    Aws::Vector<ClusteringKey> m_clusteringKeys;
    bool m_clusteringKeysHasBeenSet = false;

    Aws::Vector<StaticColumn> m_staticColumns;
    bool m_staticColumnsHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
