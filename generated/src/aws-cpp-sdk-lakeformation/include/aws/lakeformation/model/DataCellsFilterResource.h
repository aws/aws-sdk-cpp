/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A structure for a data cells filter resource. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DataCellsFilterResource">AWS
   * API Reference</a></p>
   */
  class DataCellsFilterResource
  {
  public:
    AWS_LAKEFORMATION_API DataCellsFilterResource();
    AWS_LAKEFORMATION_API DataCellsFilterResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API DataCellsFilterResource& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline DataCellsFilterResource& WithTableCatalogId(const Aws::String& value) { SetTableCatalogId(value); return *this;}

    /**
     * <p>The ID of the catalog to which the table belongs.</p>
     */
    inline DataCellsFilterResource& WithTableCatalogId(Aws::String&& value) { SetTableCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the catalog to which the table belongs.</p>
     */
    inline DataCellsFilterResource& WithTableCatalogId(const char* value) { SetTableCatalogId(value); return *this;}


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
    inline DataCellsFilterResource& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>A database in the Glue Data Catalog.</p>
     */
    inline DataCellsFilterResource& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>A database in the Glue Data Catalog.</p>
     */
    inline DataCellsFilterResource& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline DataCellsFilterResource& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline DataCellsFilterResource& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline DataCellsFilterResource& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The name of the data cells filter. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data cells filter. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data cells filter. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data cells filter. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data cells filter. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data cells filter. </p>
     */
    inline DataCellsFilterResource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data cells filter. </p>
     */
    inline DataCellsFilterResource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data cells filter. </p>
     */
    inline DataCellsFilterResource& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_tableCatalogId;
    bool m_tableCatalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
