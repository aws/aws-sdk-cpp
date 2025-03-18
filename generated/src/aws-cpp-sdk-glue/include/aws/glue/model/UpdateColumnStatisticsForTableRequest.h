/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/ColumnStatistics.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class UpdateColumnStatisticsForTableRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API UpdateColumnStatisticsForTableRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateColumnStatisticsForTable"; }

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
    UpdateColumnStatisticsForTableRequest& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
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
    UpdateColumnStatisticsForTableRequest& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
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
    UpdateColumnStatisticsForTableRequest& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the column statistics.</p>
     */
    inline const Aws::Vector<ColumnStatistics>& GetColumnStatisticsList() const { return m_columnStatisticsList; }
    inline bool ColumnStatisticsListHasBeenSet() const { return m_columnStatisticsListHasBeenSet; }
    template<typename ColumnStatisticsListT = Aws::Vector<ColumnStatistics>>
    void SetColumnStatisticsList(ColumnStatisticsListT&& value) { m_columnStatisticsListHasBeenSet = true; m_columnStatisticsList = std::forward<ColumnStatisticsListT>(value); }
    template<typename ColumnStatisticsListT = Aws::Vector<ColumnStatistics>>
    UpdateColumnStatisticsForTableRequest& WithColumnStatisticsList(ColumnStatisticsListT&& value) { SetColumnStatisticsList(std::forward<ColumnStatisticsListT>(value)); return *this;}
    template<typename ColumnStatisticsListT = ColumnStatistics>
    UpdateColumnStatisticsForTableRequest& AddColumnStatisticsList(ColumnStatisticsListT&& value) { m_columnStatisticsListHasBeenSet = true; m_columnStatisticsList.emplace_back(std::forward<ColumnStatisticsListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Vector<ColumnStatistics> m_columnStatisticsList;
    bool m_columnStatisticsListHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
