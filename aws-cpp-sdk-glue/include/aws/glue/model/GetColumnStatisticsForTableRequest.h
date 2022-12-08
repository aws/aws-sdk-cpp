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
  class GetColumnStatisticsForTableRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetColumnStatisticsForTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetColumnStatisticsForTable"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is supplied, the Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is supplied, the Amazon Web Services account ID is used by default.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is supplied, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is supplied, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is supplied, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is supplied, the Amazon Web Services account ID is used by default.</p>
     */
    inline GetColumnStatisticsForTableRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is supplied, the Amazon Web Services account ID is used by default.</p>
     */
    inline GetColumnStatisticsForTableRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog where the partitions in question reside. If none
     * is supplied, the Amazon Web Services account ID is used by default.</p>
     */
    inline GetColumnStatisticsForTableRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline GetColumnStatisticsForTableRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline GetColumnStatisticsForTableRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the catalog database where the partitions reside.</p>
     */
    inline GetColumnStatisticsForTableRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the partitions' table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the partitions' table.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the partitions' table.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the partitions' table.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the partitions' table.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the partitions' table.</p>
     */
    inline GetColumnStatisticsForTableRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the partitions' table.</p>
     */
    inline GetColumnStatisticsForTableRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the partitions' table.</p>
     */
    inline GetColumnStatisticsForTableRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>A list of the column names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnNames() const{ return m_columnNames; }

    /**
     * <p>A list of the column names.</p>
     */
    inline bool ColumnNamesHasBeenSet() const { return m_columnNamesHasBeenSet; }

    /**
     * <p>A list of the column names.</p>
     */
    inline void SetColumnNames(const Aws::Vector<Aws::String>& value) { m_columnNamesHasBeenSet = true; m_columnNames = value; }

    /**
     * <p>A list of the column names.</p>
     */
    inline void SetColumnNames(Aws::Vector<Aws::String>&& value) { m_columnNamesHasBeenSet = true; m_columnNames = std::move(value); }

    /**
     * <p>A list of the column names.</p>
     */
    inline GetColumnStatisticsForTableRequest& WithColumnNames(const Aws::Vector<Aws::String>& value) { SetColumnNames(value); return *this;}

    /**
     * <p>A list of the column names.</p>
     */
    inline GetColumnStatisticsForTableRequest& WithColumnNames(Aws::Vector<Aws::String>&& value) { SetColumnNames(std::move(value)); return *this;}

    /**
     * <p>A list of the column names.</p>
     */
    inline GetColumnStatisticsForTableRequest& AddColumnNames(const Aws::String& value) { m_columnNamesHasBeenSet = true; m_columnNames.push_back(value); return *this; }

    /**
     * <p>A list of the column names.</p>
     */
    inline GetColumnStatisticsForTableRequest& AddColumnNames(Aws::String&& value) { m_columnNamesHasBeenSet = true; m_columnNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the column names.</p>
     */
    inline GetColumnStatisticsForTableRequest& AddColumnNames(const char* value) { m_columnNamesHasBeenSet = true; m_columnNames.push_back(value); return *this; }

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_columnNames;
    bool m_columnNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
