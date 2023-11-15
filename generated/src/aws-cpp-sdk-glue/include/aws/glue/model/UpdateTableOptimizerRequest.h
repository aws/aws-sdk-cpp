/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TableOptimizerType.h>
#include <aws/glue/model/TableOptimizerConfiguration.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class UpdateTableOptimizerRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API UpdateTableOptimizerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTableOptimizer"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline UpdateTableOptimizerRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline UpdateTableOptimizerRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline UpdateTableOptimizerRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The name of the database in the catalog in which the table resides.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the database in the catalog in which the table resides.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the database in the catalog in which the table resides.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the database in the catalog in which the table resides.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the database in the catalog in which the table resides.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the database in the catalog in which the table resides.</p>
     */
    inline UpdateTableOptimizerRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database in the catalog in which the table resides.</p>
     */
    inline UpdateTableOptimizerRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database in the catalog in which the table resides.</p>
     */
    inline UpdateTableOptimizerRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


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
    inline UpdateTableOptimizerRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline UpdateTableOptimizerRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline UpdateTableOptimizerRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The type of table optimizer. Currently, the only valid value is
     * <code>compaction</code>.</p>
     */
    inline const TableOptimizerType& GetType() const{ return m_type; }

    /**
     * <p>The type of table optimizer. Currently, the only valid value is
     * <code>compaction</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of table optimizer. Currently, the only valid value is
     * <code>compaction</code>.</p>
     */
    inline void SetType(const TableOptimizerType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of table optimizer. Currently, the only valid value is
     * <code>compaction</code>.</p>
     */
    inline void SetType(TableOptimizerType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of table optimizer. Currently, the only valid value is
     * <code>compaction</code>.</p>
     */
    inline UpdateTableOptimizerRequest& WithType(const TableOptimizerType& value) { SetType(value); return *this;}

    /**
     * <p>The type of table optimizer. Currently, the only valid value is
     * <code>compaction</code>.</p>
     */
    inline UpdateTableOptimizerRequest& WithType(TableOptimizerType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A <code>TableOptimizerConfiguration</code> object representing the
     * configuration of a table optimizer.</p>
     */
    inline const TableOptimizerConfiguration& GetTableOptimizerConfiguration() const{ return m_tableOptimizerConfiguration; }

    /**
     * <p>A <code>TableOptimizerConfiguration</code> object representing the
     * configuration of a table optimizer.</p>
     */
    inline bool TableOptimizerConfigurationHasBeenSet() const { return m_tableOptimizerConfigurationHasBeenSet; }

    /**
     * <p>A <code>TableOptimizerConfiguration</code> object representing the
     * configuration of a table optimizer.</p>
     */
    inline void SetTableOptimizerConfiguration(const TableOptimizerConfiguration& value) { m_tableOptimizerConfigurationHasBeenSet = true; m_tableOptimizerConfiguration = value; }

    /**
     * <p>A <code>TableOptimizerConfiguration</code> object representing the
     * configuration of a table optimizer.</p>
     */
    inline void SetTableOptimizerConfiguration(TableOptimizerConfiguration&& value) { m_tableOptimizerConfigurationHasBeenSet = true; m_tableOptimizerConfiguration = std::move(value); }

    /**
     * <p>A <code>TableOptimizerConfiguration</code> object representing the
     * configuration of a table optimizer.</p>
     */
    inline UpdateTableOptimizerRequest& WithTableOptimizerConfiguration(const TableOptimizerConfiguration& value) { SetTableOptimizerConfiguration(value); return *this;}

    /**
     * <p>A <code>TableOptimizerConfiguration</code> object representing the
     * configuration of a table optimizer.</p>
     */
    inline UpdateTableOptimizerRequest& WithTableOptimizerConfiguration(TableOptimizerConfiguration&& value) { SetTableOptimizerConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    TableOptimizerType m_type;
    bool m_typeHasBeenSet = false;

    TableOptimizerConfiguration m_tableOptimizerConfiguration;
    bool m_tableOptimizerConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
