﻿/**
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
  class CreateTableOptimizerRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CreateTableOptimizerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTableOptimizer"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Catalog ID of the table.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline CreateTableOptimizerRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline CreateTableOptimizerRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline CreateTableOptimizerRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database in the catalog in which the table resides.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline CreateTableOptimizerRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline CreateTableOptimizerRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline CreateTableOptimizerRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline CreateTableOptimizerRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline CreateTableOptimizerRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline CreateTableOptimizerRequest& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of table optimizer.</p>
     */
    inline const TableOptimizerType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const TableOptimizerType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(TableOptimizerType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateTableOptimizerRequest& WithType(const TableOptimizerType& value) { SetType(value); return *this;}
    inline CreateTableOptimizerRequest& WithType(TableOptimizerType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>TableOptimizerConfiguration</code> object representing the
     * configuration of a table optimizer.</p>
     */
    inline const TableOptimizerConfiguration& GetTableOptimizerConfiguration() const{ return m_tableOptimizerConfiguration; }
    inline bool TableOptimizerConfigurationHasBeenSet() const { return m_tableOptimizerConfigurationHasBeenSet; }
    inline void SetTableOptimizerConfiguration(const TableOptimizerConfiguration& value) { m_tableOptimizerConfigurationHasBeenSet = true; m_tableOptimizerConfiguration = value; }
    inline void SetTableOptimizerConfiguration(TableOptimizerConfiguration&& value) { m_tableOptimizerConfigurationHasBeenSet = true; m_tableOptimizerConfiguration = std::move(value); }
    inline CreateTableOptimizerRequest& WithTableOptimizerConfiguration(const TableOptimizerConfiguration& value) { SetTableOptimizerConfiguration(value); return *this;}
    inline CreateTableOptimizerRequest& WithTableOptimizerConfiguration(TableOptimizerConfiguration&& value) { SetTableOptimizerConfiguration(std::move(value)); return *this;}
    ///@}
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
