/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_LAKEFORMATION_API TableWithColumnsResource
  {
  public:
    TableWithColumnsResource();
    TableWithColumnsResource(Aws::Utils::Json::JsonView jsonValue);
    TableWithColumnsResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Aws::String> m_columnNames;
    bool m_columnNamesHasBeenSet;

    ColumnWildcard m_columnWildcard;
    bool m_columnWildcardHasBeenSet;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
