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
    AWS_KEYSPACES_API SchemaDefinition() = default;
    AWS_KEYSPACES_API SchemaDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API SchemaDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The regular columns of the table.</p>
     */
    inline const Aws::Vector<ColumnDefinition>& GetAllColumns() const { return m_allColumns; }
    inline bool AllColumnsHasBeenSet() const { return m_allColumnsHasBeenSet; }
    template<typename AllColumnsT = Aws::Vector<ColumnDefinition>>
    void SetAllColumns(AllColumnsT&& value) { m_allColumnsHasBeenSet = true; m_allColumns = std::forward<AllColumnsT>(value); }
    template<typename AllColumnsT = Aws::Vector<ColumnDefinition>>
    SchemaDefinition& WithAllColumns(AllColumnsT&& value) { SetAllColumns(std::forward<AllColumnsT>(value)); return *this;}
    template<typename AllColumnsT = ColumnDefinition>
    SchemaDefinition& AddAllColumns(AllColumnsT&& value) { m_allColumnsHasBeenSet = true; m_allColumns.emplace_back(std::forward<AllColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The columns that are part of the partition key of the table .</p>
     */
    inline const Aws::Vector<PartitionKey>& GetPartitionKeys() const { return m_partitionKeys; }
    inline bool PartitionKeysHasBeenSet() const { return m_partitionKeysHasBeenSet; }
    template<typename PartitionKeysT = Aws::Vector<PartitionKey>>
    void SetPartitionKeys(PartitionKeysT&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys = std::forward<PartitionKeysT>(value); }
    template<typename PartitionKeysT = Aws::Vector<PartitionKey>>
    SchemaDefinition& WithPartitionKeys(PartitionKeysT&& value) { SetPartitionKeys(std::forward<PartitionKeysT>(value)); return *this;}
    template<typename PartitionKeysT = PartitionKey>
    SchemaDefinition& AddPartitionKeys(PartitionKeysT&& value) { m_partitionKeysHasBeenSet = true; m_partitionKeys.emplace_back(std::forward<PartitionKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The columns that are part of the clustering key of the table.</p>
     */
    inline const Aws::Vector<ClusteringKey>& GetClusteringKeys() const { return m_clusteringKeys; }
    inline bool ClusteringKeysHasBeenSet() const { return m_clusteringKeysHasBeenSet; }
    template<typename ClusteringKeysT = Aws::Vector<ClusteringKey>>
    void SetClusteringKeys(ClusteringKeysT&& value) { m_clusteringKeysHasBeenSet = true; m_clusteringKeys = std::forward<ClusteringKeysT>(value); }
    template<typename ClusteringKeysT = Aws::Vector<ClusteringKey>>
    SchemaDefinition& WithClusteringKeys(ClusteringKeysT&& value) { SetClusteringKeys(std::forward<ClusteringKeysT>(value)); return *this;}
    template<typename ClusteringKeysT = ClusteringKey>
    SchemaDefinition& AddClusteringKeys(ClusteringKeysT&& value) { m_clusteringKeysHasBeenSet = true; m_clusteringKeys.emplace_back(std::forward<ClusteringKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The columns that have been defined as <code>STATIC</code>. Static columns
     * store values that are shared by all rows in the same partition.</p>
     */
    inline const Aws::Vector<StaticColumn>& GetStaticColumns() const { return m_staticColumns; }
    inline bool StaticColumnsHasBeenSet() const { return m_staticColumnsHasBeenSet; }
    template<typename StaticColumnsT = Aws::Vector<StaticColumn>>
    void SetStaticColumns(StaticColumnsT&& value) { m_staticColumnsHasBeenSet = true; m_staticColumns = std::forward<StaticColumnsT>(value); }
    template<typename StaticColumnsT = Aws::Vector<StaticColumn>>
    SchemaDefinition& WithStaticColumns(StaticColumnsT&& value) { SetStaticColumns(std::forward<StaticColumnsT>(value)); return *this;}
    template<typename StaticColumnsT = StaticColumn>
    SchemaDefinition& AddStaticColumns(StaticColumnsT&& value) { m_staticColumnsHasBeenSet = true; m_staticColumns.emplace_back(std::forward<StaticColumnsT>(value)); return *this; }
    ///@}
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
