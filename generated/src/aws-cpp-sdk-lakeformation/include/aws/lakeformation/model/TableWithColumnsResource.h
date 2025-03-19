/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A structure for a table with columns object. This object is only used when
   * granting a SELECT permission.</p> <p>This object must take a value for at least
   * one of <code>ColumnsNames</code>, <code>ColumnsIndexes</code>, or
   * <code>ColumnsWildcard</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/TableWithColumnsResource">AWS
   * API Reference</a></p>
   */
  class TableWithColumnsResource
  {
  public:
    AWS_LAKEFORMATION_API TableWithColumnsResource() = default;
    AWS_LAKEFORMATION_API TableWithColumnsResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API TableWithColumnsResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the Data Catalog. By default, it is the account ID of the
     * caller.</p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    TableWithColumnsResource& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database for the table with columns resource. Unique to the
     * Data Catalog. A database is a set of associated table definitions organized into
     * a logical group. You can Grant and Revoke database privileges to a principal.
     * </p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    TableWithColumnsResource& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table resource. A table is a metadata definition that
     * represents your data. You can Grant and Revoke table privileges to a principal.
     * </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TableWithColumnsResource& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of column names for the table. At least one of
     * <code>ColumnNames</code> or <code>ColumnWildcard</code> is required.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnNames() const { return m_columnNames; }
    inline bool ColumnNamesHasBeenSet() const { return m_columnNamesHasBeenSet; }
    template<typename ColumnNamesT = Aws::Vector<Aws::String>>
    void SetColumnNames(ColumnNamesT&& value) { m_columnNamesHasBeenSet = true; m_columnNames = std::forward<ColumnNamesT>(value); }
    template<typename ColumnNamesT = Aws::Vector<Aws::String>>
    TableWithColumnsResource& WithColumnNames(ColumnNamesT&& value) { SetColumnNames(std::forward<ColumnNamesT>(value)); return *this;}
    template<typename ColumnNamesT = Aws::String>
    TableWithColumnsResource& AddColumnNames(ColumnNamesT&& value) { m_columnNamesHasBeenSet = true; m_columnNames.emplace_back(std::forward<ColumnNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A wildcard specified by a <code>ColumnWildcard</code> object. At least one of
     * <code>ColumnNames</code> or <code>ColumnWildcard</code> is required.</p>
     */
    inline const ColumnWildcard& GetColumnWildcard() const { return m_columnWildcard; }
    inline bool ColumnWildcardHasBeenSet() const { return m_columnWildcardHasBeenSet; }
    template<typename ColumnWildcardT = ColumnWildcard>
    void SetColumnWildcard(ColumnWildcardT&& value) { m_columnWildcardHasBeenSet = true; m_columnWildcard = std::forward<ColumnWildcardT>(value); }
    template<typename ColumnWildcardT = ColumnWildcard>
    TableWithColumnsResource& WithColumnWildcard(ColumnWildcardT&& value) { SetColumnWildcard(std::forward<ColumnWildcardT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_columnNames;
    bool m_columnNamesHasBeenSet = false;

    ColumnWildcard m_columnWildcard;
    bool m_columnWildcardHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
