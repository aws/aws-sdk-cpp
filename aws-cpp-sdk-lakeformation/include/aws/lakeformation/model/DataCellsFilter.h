/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/RowFilter.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/ColumnWildcard.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>A structure that describes certain columns on certain rows.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DataCellsFilter">AWS
   * API Reference</a></p>
   */
  class DataCellsFilter
  {
  public:
    AWS_LAKEFORMATION_API DataCellsFilter();
    AWS_LAKEFORMATION_API DataCellsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API DataCellsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the catalog to which the table belongs.</p>
     */
    inline const Aws::String& GetTableCatalogId() const{ return m_tableCatalogId; }

    /**
     * <p>The ID of the catalog to which the table belongs.</p>
     */
    inline bool TableCatalogIdHasBeenSet() const { return m_tableCatalogIdHasBeenSet; }

    /**
     * <p>The ID of the catalog to which the table belongs.</p>
     */
    inline void SetTableCatalogId(const Aws::String& value) { m_tableCatalogIdHasBeenSet = true; m_tableCatalogId = value; }

    /**
     * <p>The ID of the catalog to which the table belongs.</p>
     */
    inline void SetTableCatalogId(Aws::String&& value) { m_tableCatalogIdHasBeenSet = true; m_tableCatalogId = std::move(value); }

    /**
     * <p>The ID of the catalog to which the table belongs.</p>
     */
    inline void SetTableCatalogId(const char* value) { m_tableCatalogIdHasBeenSet = true; m_tableCatalogId.assign(value); }

    /**
     * <p>The ID of the catalog to which the table belongs.</p>
     */
    inline DataCellsFilter& WithTableCatalogId(const Aws::String& value) { SetTableCatalogId(value); return *this;}

    /**
     * <p>The ID of the catalog to which the table belongs.</p>
     */
    inline DataCellsFilter& WithTableCatalogId(Aws::String&& value) { SetTableCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the catalog to which the table belongs.</p>
     */
    inline DataCellsFilter& WithTableCatalogId(const char* value) { SetTableCatalogId(value); return *this;}


    /**
     * <p>A database in the Glue Data Catalog.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>A database in the Glue Data Catalog.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>A database in the Glue Data Catalog.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>A database in the Glue Data Catalog.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>A database in the Glue Data Catalog.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>A database in the Glue Data Catalog.</p>
     */
    inline DataCellsFilter& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>A database in the Glue Data Catalog.</p>
     */
    inline DataCellsFilter& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>A database in the Glue Data Catalog.</p>
     */
    inline DataCellsFilter& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>A table in the database.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>A table in the database.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>A table in the database.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>A table in the database.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>A table in the database.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>A table in the database.</p>
     */
    inline DataCellsFilter& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>A table in the database.</p>
     */
    inline DataCellsFilter& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>A table in the database.</p>
     */
    inline DataCellsFilter& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The name given by the user to the data filter cell.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name given by the user to the data filter cell.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name given by the user to the data filter cell.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name given by the user to the data filter cell.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name given by the user to the data filter cell.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name given by the user to the data filter cell.</p>
     */
    inline DataCellsFilter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name given by the user to the data filter cell.</p>
     */
    inline DataCellsFilter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name given by the user to the data filter cell.</p>
     */
    inline DataCellsFilter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A PartiQL predicate.</p>
     */
    inline const RowFilter& GetRowFilter() const{ return m_rowFilter; }

    /**
     * <p>A PartiQL predicate.</p>
     */
    inline bool RowFilterHasBeenSet() const { return m_rowFilterHasBeenSet; }

    /**
     * <p>A PartiQL predicate.</p>
     */
    inline void SetRowFilter(const RowFilter& value) { m_rowFilterHasBeenSet = true; m_rowFilter = value; }

    /**
     * <p>A PartiQL predicate.</p>
     */
    inline void SetRowFilter(RowFilter&& value) { m_rowFilterHasBeenSet = true; m_rowFilter = std::move(value); }

    /**
     * <p>A PartiQL predicate.</p>
     */
    inline DataCellsFilter& WithRowFilter(const RowFilter& value) { SetRowFilter(value); return *this;}

    /**
     * <p>A PartiQL predicate.</p>
     */
    inline DataCellsFilter& WithRowFilter(RowFilter&& value) { SetRowFilter(std::move(value)); return *this;}


    /**
     * <p>A list of column names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnNames() const{ return m_columnNames; }

    /**
     * <p>A list of column names.</p>
     */
    inline bool ColumnNamesHasBeenSet() const { return m_columnNamesHasBeenSet; }

    /**
     * <p>A list of column names.</p>
     */
    inline void SetColumnNames(const Aws::Vector<Aws::String>& value) { m_columnNamesHasBeenSet = true; m_columnNames = value; }

    /**
     * <p>A list of column names.</p>
     */
    inline void SetColumnNames(Aws::Vector<Aws::String>&& value) { m_columnNamesHasBeenSet = true; m_columnNames = std::move(value); }

    /**
     * <p>A list of column names.</p>
     */
    inline DataCellsFilter& WithColumnNames(const Aws::Vector<Aws::String>& value) { SetColumnNames(value); return *this;}

    /**
     * <p>A list of column names.</p>
     */
    inline DataCellsFilter& WithColumnNames(Aws::Vector<Aws::String>&& value) { SetColumnNames(std::move(value)); return *this;}

    /**
     * <p>A list of column names.</p>
     */
    inline DataCellsFilter& AddColumnNames(const Aws::String& value) { m_columnNamesHasBeenSet = true; m_columnNames.push_back(value); return *this; }

    /**
     * <p>A list of column names.</p>
     */
    inline DataCellsFilter& AddColumnNames(Aws::String&& value) { m_columnNamesHasBeenSet = true; m_columnNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of column names.</p>
     */
    inline DataCellsFilter& AddColumnNames(const char* value) { m_columnNamesHasBeenSet = true; m_columnNames.push_back(value); return *this; }


    /**
     * <p>A wildcard with exclusions.</p> <p>You must specify either a
     * <code>ColumnNames</code> list or the <code>ColumnWildCard</code>. </p>
     */
    inline const ColumnWildcard& GetColumnWildcard() const{ return m_columnWildcard; }

    /**
     * <p>A wildcard with exclusions.</p> <p>You must specify either a
     * <code>ColumnNames</code> list or the <code>ColumnWildCard</code>. </p>
     */
    inline bool ColumnWildcardHasBeenSet() const { return m_columnWildcardHasBeenSet; }

    /**
     * <p>A wildcard with exclusions.</p> <p>You must specify either a
     * <code>ColumnNames</code> list or the <code>ColumnWildCard</code>. </p>
     */
    inline void SetColumnWildcard(const ColumnWildcard& value) { m_columnWildcardHasBeenSet = true; m_columnWildcard = value; }

    /**
     * <p>A wildcard with exclusions.</p> <p>You must specify either a
     * <code>ColumnNames</code> list or the <code>ColumnWildCard</code>. </p>
     */
    inline void SetColumnWildcard(ColumnWildcard&& value) { m_columnWildcardHasBeenSet = true; m_columnWildcard = std::move(value); }

    /**
     * <p>A wildcard with exclusions.</p> <p>You must specify either a
     * <code>ColumnNames</code> list or the <code>ColumnWildCard</code>. </p>
     */
    inline DataCellsFilter& WithColumnWildcard(const ColumnWildcard& value) { SetColumnWildcard(value); return *this;}

    /**
     * <p>A wildcard with exclusions.</p> <p>You must specify either a
     * <code>ColumnNames</code> list or the <code>ColumnWildCard</code>. </p>
     */
    inline DataCellsFilter& WithColumnWildcard(ColumnWildcard&& value) { SetColumnWildcard(std::move(value)); return *this;}

  private:

    Aws::String m_tableCatalogId;
    bool m_tableCatalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RowFilter m_rowFilter;
    bool m_rowFilterHasBeenSet = false;

    Aws::Vector<Aws::String> m_columnNames;
    bool m_columnNamesHasBeenSet = false;

    ColumnWildcard m_columnWildcard;
    bool m_columnWildcardHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
