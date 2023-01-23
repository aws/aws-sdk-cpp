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
    AWS_LAKEFORMATION_API TableWithColumnsResource();
    AWS_LAKEFORMATION_API TableWithColumnsResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API TableWithColumnsResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the Data Catalog. By default, it is the account ID of the
     * caller.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The identifier for the Data Catalog. By default, it is the account ID of the
     * caller.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The identifier for the Data Catalog. By default, it is the account ID of the
     * caller.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The identifier for the Data Catalog. By default, it is the account ID of the
     * caller.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The identifier for the Data Catalog. By default, it is the account ID of the
     * caller.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The identifier for the Data Catalog. By default, it is the account ID of the
     * caller.</p>
     */
    inline TableWithColumnsResource& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, it is the account ID of the
     * caller.</p>
     */
    inline TableWithColumnsResource& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, it is the account ID of the
     * caller.</p>
     */
    inline TableWithColumnsResource& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The name of the database for the table with columns resource. Unique to the
     * Data Catalog. A database is a set of associated table definitions organized into
     * a logical group. You can Grant and Revoke database privileges to a principal.
     * </p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the database for the table with columns resource. Unique to the
     * Data Catalog. A database is a set of associated table definitions organized into
     * a logical group. You can Grant and Revoke database privileges to a principal.
     * </p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the database for the table with columns resource. Unique to the
     * Data Catalog. A database is a set of associated table definitions organized into
     * a logical group. You can Grant and Revoke database privileges to a principal.
     * </p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the database for the table with columns resource. Unique to the
     * Data Catalog. A database is a set of associated table definitions organized into
     * a logical group. You can Grant and Revoke database privileges to a principal.
     * </p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the database for the table with columns resource. Unique to the
     * Data Catalog. A database is a set of associated table definitions organized into
     * a logical group. You can Grant and Revoke database privileges to a principal.
     * </p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the database for the table with columns resource. Unique to the
     * Data Catalog. A database is a set of associated table definitions organized into
     * a logical group. You can Grant and Revoke database privileges to a principal.
     * </p>
     */
    inline TableWithColumnsResource& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database for the table with columns resource. Unique to the
     * Data Catalog. A database is a set of associated table definitions organized into
     * a logical group. You can Grant and Revoke database privileges to a principal.
     * </p>
     */
    inline TableWithColumnsResource& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database for the table with columns resource. Unique to the
     * Data Catalog. A database is a set of associated table definitions organized into
     * a logical group. You can Grant and Revoke database privileges to a principal.
     * </p>
     */
    inline TableWithColumnsResource& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the table resource. A table is a metadata definition that
     * represents your data. You can Grant and Revoke table privileges to a principal.
     * </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the table resource. A table is a metadata definition that
     * represents your data. You can Grant and Revoke table privileges to a principal.
     * </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the table resource. A table is a metadata definition that
     * represents your data. You can Grant and Revoke table privileges to a principal.
     * </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the table resource. A table is a metadata definition that
     * represents your data. You can Grant and Revoke table privileges to a principal.
     * </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the table resource. A table is a metadata definition that
     * represents your data. You can Grant and Revoke table privileges to a principal.
     * </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the table resource. A table is a metadata definition that
     * represents your data. You can Grant and Revoke table privileges to a principal.
     * </p>
     */
    inline TableWithColumnsResource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the table resource. A table is a metadata definition that
     * represents your data. You can Grant and Revoke table privileges to a principal.
     * </p>
     */
    inline TableWithColumnsResource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the table resource. A table is a metadata definition that
     * represents your data. You can Grant and Revoke table privileges to a principal.
     * </p>
     */
    inline TableWithColumnsResource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The list of column names for the table. At least one of
     * <code>ColumnNames</code> or <code>ColumnWildcard</code> is required.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnNames() const{ return m_columnNames; }

    /**
     * <p>The list of column names for the table. At least one of
     * <code>ColumnNames</code> or <code>ColumnWildcard</code> is required.</p>
     */
    inline bool ColumnNamesHasBeenSet() const { return m_columnNamesHasBeenSet; }

    /**
     * <p>The list of column names for the table. At least one of
     * <code>ColumnNames</code> or <code>ColumnWildcard</code> is required.</p>
     */
    inline void SetColumnNames(const Aws::Vector<Aws::String>& value) { m_columnNamesHasBeenSet = true; m_columnNames = value; }

    /**
     * <p>The list of column names for the table. At least one of
     * <code>ColumnNames</code> or <code>ColumnWildcard</code> is required.</p>
     */
    inline void SetColumnNames(Aws::Vector<Aws::String>&& value) { m_columnNamesHasBeenSet = true; m_columnNames = std::move(value); }

    /**
     * <p>The list of column names for the table. At least one of
     * <code>ColumnNames</code> or <code>ColumnWildcard</code> is required.</p>
     */
    inline TableWithColumnsResource& WithColumnNames(const Aws::Vector<Aws::String>& value) { SetColumnNames(value); return *this;}

    /**
     * <p>The list of column names for the table. At least one of
     * <code>ColumnNames</code> or <code>ColumnWildcard</code> is required.</p>
     */
    inline TableWithColumnsResource& WithColumnNames(Aws::Vector<Aws::String>&& value) { SetColumnNames(std::move(value)); return *this;}

    /**
     * <p>The list of column names for the table. At least one of
     * <code>ColumnNames</code> or <code>ColumnWildcard</code> is required.</p>
     */
    inline TableWithColumnsResource& AddColumnNames(const Aws::String& value) { m_columnNamesHasBeenSet = true; m_columnNames.push_back(value); return *this; }

    /**
     * <p>The list of column names for the table. At least one of
     * <code>ColumnNames</code> or <code>ColumnWildcard</code> is required.</p>
     */
    inline TableWithColumnsResource& AddColumnNames(Aws::String&& value) { m_columnNamesHasBeenSet = true; m_columnNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of column names for the table. At least one of
     * <code>ColumnNames</code> or <code>ColumnWildcard</code> is required.</p>
     */
    inline TableWithColumnsResource& AddColumnNames(const char* value) { m_columnNamesHasBeenSet = true; m_columnNames.push_back(value); return *this; }


    /**
     * <p>A wildcard specified by a <code>ColumnWildcard</code> object. At least one of
     * <code>ColumnNames</code> or <code>ColumnWildcard</code> is required.</p>
     */
    inline const ColumnWildcard& GetColumnWildcard() const{ return m_columnWildcard; }

    /**
     * <p>A wildcard specified by a <code>ColumnWildcard</code> object. At least one of
     * <code>ColumnNames</code> or <code>ColumnWildcard</code> is required.</p>
     */
    inline bool ColumnWildcardHasBeenSet() const { return m_columnWildcardHasBeenSet; }

    /**
     * <p>A wildcard specified by a <code>ColumnWildcard</code> object. At least one of
     * <code>ColumnNames</code> or <code>ColumnWildcard</code> is required.</p>
     */
    inline void SetColumnWildcard(const ColumnWildcard& value) { m_columnWildcardHasBeenSet = true; m_columnWildcard = value; }

    /**
     * <p>A wildcard specified by a <code>ColumnWildcard</code> object. At least one of
     * <code>ColumnNames</code> or <code>ColumnWildcard</code> is required.</p>
     */
    inline void SetColumnWildcard(ColumnWildcard&& value) { m_columnWildcardHasBeenSet = true; m_columnWildcard = std::move(value); }

    /**
     * <p>A wildcard specified by a <code>ColumnWildcard</code> object. At least one of
     * <code>ColumnNames</code> or <code>ColumnWildcard</code> is required.</p>
     */
    inline TableWithColumnsResource& WithColumnWildcard(const ColumnWildcard& value) { SetColumnWildcard(value); return *this;}

    /**
     * <p>A wildcard specified by a <code>ColumnWildcard</code> object. At least one of
     * <code>ColumnNames</code> or <code>ColumnWildcard</code> is required.</p>
     */
    inline TableWithColumnsResource& WithColumnWildcard(ColumnWildcard&& value) { SetColumnWildcard(std::move(value)); return *this;}

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
