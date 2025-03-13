/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class DeleteColumnStatisticsForPartitionRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API DeleteColumnStatisticsForPartitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteColumnStatisticsForPartition"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is supplied, the Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    DeleteColumnStatisticsForPartitionRequest& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    DeleteColumnStatisticsForPartitionRequest& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the partitions' table.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    DeleteColumnStatisticsForPartitionRequest& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of partition values identifying the partition.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPartitionValues() const { return m_partitionValues; }
    inline bool PartitionValuesHasBeenSet() const { return m_partitionValuesHasBeenSet; }
    template<typename PartitionValuesT = Aws::Vector<Aws::String>>
    void SetPartitionValues(PartitionValuesT&& value) { m_partitionValuesHasBeenSet = true; m_partitionValues = std::forward<PartitionValuesT>(value); }
    template<typename PartitionValuesT = Aws::Vector<Aws::String>>
    DeleteColumnStatisticsForPartitionRequest& WithPartitionValues(PartitionValuesT&& value) { SetPartitionValues(std::forward<PartitionValuesT>(value)); return *this;}
    template<typename PartitionValuesT = Aws::String>
    DeleteColumnStatisticsForPartitionRequest& AddPartitionValues(PartitionValuesT&& value) { m_partitionValuesHasBeenSet = true; m_partitionValues.emplace_back(std::forward<PartitionValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Name of the column.</p>
     */
    inline const Aws::String& GetColumnName() const { return m_columnName; }
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
    template<typename ColumnNameT = Aws::String>
    void SetColumnName(ColumnNameT&& value) { m_columnNameHasBeenSet = true; m_columnName = std::forward<ColumnNameT>(value); }
    template<typename ColumnNameT = Aws::String>
    DeleteColumnStatisticsForPartitionRequest& WithColumnName(ColumnNameT&& value) { SetColumnName(std::forward<ColumnNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_partitionValues;
    bool m_partitionValuesHasBeenSet = false;

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
