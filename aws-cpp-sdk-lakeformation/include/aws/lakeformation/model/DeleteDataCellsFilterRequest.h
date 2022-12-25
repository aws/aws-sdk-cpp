/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class DeleteDataCellsFilterRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API DeleteDataCellsFilterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDataCellsFilter"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


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
    inline DeleteDataCellsFilterRequest& WithTableCatalogId(const Aws::String& value) { SetTableCatalogId(value); return *this;}

    /**
     * <p>The ID of the catalog to which the table belongs.</p>
     */
    inline DeleteDataCellsFilterRequest& WithTableCatalogId(Aws::String&& value) { SetTableCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the catalog to which the table belongs.</p>
     */
    inline DeleteDataCellsFilterRequest& WithTableCatalogId(const char* value) { SetTableCatalogId(value); return *this;}


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
    inline DeleteDataCellsFilterRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>A database in the Glue Data Catalog.</p>
     */
    inline DeleteDataCellsFilterRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>A database in the Glue Data Catalog.</p>
     */
    inline DeleteDataCellsFilterRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


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
    inline DeleteDataCellsFilterRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>A table in the database.</p>
     */
    inline DeleteDataCellsFilterRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>A table in the database.</p>
     */
    inline DeleteDataCellsFilterRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


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
    inline DeleteDataCellsFilterRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name given by the user to the data filter cell.</p>
     */
    inline DeleteDataCellsFilterRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name given by the user to the data filter cell.</p>
     */
    inline DeleteDataCellsFilterRequest& WithName(const char* value) { SetName(value); return *this;}

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
