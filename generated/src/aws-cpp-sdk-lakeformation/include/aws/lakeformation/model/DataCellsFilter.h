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
    AWS_LAKEFORMATION_API DataCellsFilter() = default;
    AWS_LAKEFORMATION_API DataCellsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API DataCellsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the catalog to which the table belongs.</p>
     */
    inline const Aws::String& GetTableCatalogId() const { return m_tableCatalogId; }
    inline bool TableCatalogIdHasBeenSet() const { return m_tableCatalogIdHasBeenSet; }
    template<typename TableCatalogIdT = Aws::String>
    void SetTableCatalogId(TableCatalogIdT&& value) { m_tableCatalogIdHasBeenSet = true; m_tableCatalogId = std::forward<TableCatalogIdT>(value); }
    template<typename TableCatalogIdT = Aws::String>
    DataCellsFilter& WithTableCatalogId(TableCatalogIdT&& value) { SetTableCatalogId(std::forward<TableCatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A database in the Glue Data Catalog.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    DataCellsFilter& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A table in the database.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    DataCellsFilter& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name given by the user to the data filter cell.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DataCellsFilter& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A PartiQL predicate.</p>
     */
    inline const RowFilter& GetRowFilter() const { return m_rowFilter; }
    inline bool RowFilterHasBeenSet() const { return m_rowFilterHasBeenSet; }
    template<typename RowFilterT = RowFilter>
    void SetRowFilter(RowFilterT&& value) { m_rowFilterHasBeenSet = true; m_rowFilter = std::forward<RowFilterT>(value); }
    template<typename RowFilterT = RowFilter>
    DataCellsFilter& WithRowFilter(RowFilterT&& value) { SetRowFilter(std::forward<RowFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of column names and/or nested column attributes. When specifying
     * nested attributes, use a qualified dot (.) delimited format such as
     * "address"."zip". Nested attributes within this list may not exceed a depth of
     * 5.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnNames() const { return m_columnNames; }
    inline bool ColumnNamesHasBeenSet() const { return m_columnNamesHasBeenSet; }
    template<typename ColumnNamesT = Aws::Vector<Aws::String>>
    void SetColumnNames(ColumnNamesT&& value) { m_columnNamesHasBeenSet = true; m_columnNames = std::forward<ColumnNamesT>(value); }
    template<typename ColumnNamesT = Aws::Vector<Aws::String>>
    DataCellsFilter& WithColumnNames(ColumnNamesT&& value) { SetColumnNames(std::forward<ColumnNamesT>(value)); return *this;}
    template<typename ColumnNamesT = Aws::String>
    DataCellsFilter& AddColumnNames(ColumnNamesT&& value) { m_columnNamesHasBeenSet = true; m_columnNames.emplace_back(std::forward<ColumnNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A wildcard with exclusions.</p> <p>You must specify either a
     * <code>ColumnNames</code> list or the <code>ColumnWildCard</code>. </p>
     */
    inline const ColumnWildcard& GetColumnWildcard() const { return m_columnWildcard; }
    inline bool ColumnWildcardHasBeenSet() const { return m_columnWildcardHasBeenSet; }
    template<typename ColumnWildcardT = ColumnWildcard>
    void SetColumnWildcard(ColumnWildcardT&& value) { m_columnWildcardHasBeenSet = true; m_columnWildcard = std::forward<ColumnWildcardT>(value); }
    template<typename ColumnWildcardT = ColumnWildcard>
    DataCellsFilter& WithColumnWildcard(ColumnWildcardT&& value) { SetColumnWildcard(std::forward<ColumnWildcardT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data cells filter version.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    DataCellsFilter& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
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
