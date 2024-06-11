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


    ///@{
    /**
     * <p>The ID of the catalog to which the table belongs.</p>
     */
    inline const Aws::String& GetTableCatalogId() const{ return m_tableCatalogId; }
    inline bool TableCatalogIdHasBeenSet() const { return m_tableCatalogIdHasBeenSet; }
    inline void SetTableCatalogId(const Aws::String& value) { m_tableCatalogIdHasBeenSet = true; m_tableCatalogId = value; }
    inline void SetTableCatalogId(Aws::String&& value) { m_tableCatalogIdHasBeenSet = true; m_tableCatalogId = std::move(value); }
    inline void SetTableCatalogId(const char* value) { m_tableCatalogIdHasBeenSet = true; m_tableCatalogId.assign(value); }
    inline DataCellsFilter& WithTableCatalogId(const Aws::String& value) { SetTableCatalogId(value); return *this;}
    inline DataCellsFilter& WithTableCatalogId(Aws::String&& value) { SetTableCatalogId(std::move(value)); return *this;}
    inline DataCellsFilter& WithTableCatalogId(const char* value) { SetTableCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A database in the Glue Data Catalog.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline DataCellsFilter& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline DataCellsFilter& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline DataCellsFilter& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A table in the database.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline DataCellsFilter& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline DataCellsFilter& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline DataCellsFilter& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name given by the user to the data filter cell.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DataCellsFilter& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DataCellsFilter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DataCellsFilter& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A PartiQL predicate.</p>
     */
    inline const RowFilter& GetRowFilter() const{ return m_rowFilter; }
    inline bool RowFilterHasBeenSet() const { return m_rowFilterHasBeenSet; }
    inline void SetRowFilter(const RowFilter& value) { m_rowFilterHasBeenSet = true; m_rowFilter = value; }
    inline void SetRowFilter(RowFilter&& value) { m_rowFilterHasBeenSet = true; m_rowFilter = std::move(value); }
    inline DataCellsFilter& WithRowFilter(const RowFilter& value) { SetRowFilter(value); return *this;}
    inline DataCellsFilter& WithRowFilter(RowFilter&& value) { SetRowFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of column names and/or nested column attributes. When specifying
     * nested attributes, use a qualified dot (.) delimited format such as
     * "address"."zip". Nested attributes within this list may not exceed a depth of
     * 5.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnNames() const{ return m_columnNames; }
    inline bool ColumnNamesHasBeenSet() const { return m_columnNamesHasBeenSet; }
    inline void SetColumnNames(const Aws::Vector<Aws::String>& value) { m_columnNamesHasBeenSet = true; m_columnNames = value; }
    inline void SetColumnNames(Aws::Vector<Aws::String>&& value) { m_columnNamesHasBeenSet = true; m_columnNames = std::move(value); }
    inline DataCellsFilter& WithColumnNames(const Aws::Vector<Aws::String>& value) { SetColumnNames(value); return *this;}
    inline DataCellsFilter& WithColumnNames(Aws::Vector<Aws::String>&& value) { SetColumnNames(std::move(value)); return *this;}
    inline DataCellsFilter& AddColumnNames(const Aws::String& value) { m_columnNamesHasBeenSet = true; m_columnNames.push_back(value); return *this; }
    inline DataCellsFilter& AddColumnNames(Aws::String&& value) { m_columnNamesHasBeenSet = true; m_columnNames.push_back(std::move(value)); return *this; }
    inline DataCellsFilter& AddColumnNames(const char* value) { m_columnNamesHasBeenSet = true; m_columnNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A wildcard with exclusions.</p> <p>You must specify either a
     * <code>ColumnNames</code> list or the <code>ColumnWildCard</code>. </p>
     */
    inline const ColumnWildcard& GetColumnWildcard() const{ return m_columnWildcard; }
    inline bool ColumnWildcardHasBeenSet() const { return m_columnWildcardHasBeenSet; }
    inline void SetColumnWildcard(const ColumnWildcard& value) { m_columnWildcardHasBeenSet = true; m_columnWildcard = value; }
    inline void SetColumnWildcard(ColumnWildcard&& value) { m_columnWildcardHasBeenSet = true; m_columnWildcard = std::move(value); }
    inline DataCellsFilter& WithColumnWildcard(const ColumnWildcard& value) { SetColumnWildcard(value); return *this;}
    inline DataCellsFilter& WithColumnWildcard(ColumnWildcard&& value) { SetColumnWildcard(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data cells filter version.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }
    inline DataCellsFilter& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline DataCellsFilter& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline DataCellsFilter& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}
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

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
