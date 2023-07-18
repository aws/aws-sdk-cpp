﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The database and table in the Glue Data Catalog that is used for input or
   * output data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GlueTable">AWS API
   * Reference</a></p>
   */
  class AWS_GLUE_API GlueTable
  {
  public:
    GlueTable();
    GlueTable(Aws::Utils::Json::JsonView jsonValue);
    GlueTable& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A database name in the Glue Data Catalog.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>A database name in the Glue Data Catalog.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>A database name in the Glue Data Catalog.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>A database name in the Glue Data Catalog.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>A database name in the Glue Data Catalog.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>A database name in the Glue Data Catalog.</p>
     */
    inline GlueTable& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>A database name in the Glue Data Catalog.</p>
     */
    inline GlueTable& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>A database name in the Glue Data Catalog.</p>
     */
    inline GlueTable& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>A table name in the Glue Data Catalog.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>A table name in the Glue Data Catalog.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>A table name in the Glue Data Catalog.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>A table name in the Glue Data Catalog.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>A table name in the Glue Data Catalog.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>A table name in the Glue Data Catalog.</p>
     */
    inline GlueTable& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>A table name in the Glue Data Catalog.</p>
     */
    inline GlueTable& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>A table name in the Glue Data Catalog.</p>
     */
    inline GlueTable& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>A unique identifier for the Glue Data Catalog.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>A unique identifier for the Glue Data Catalog.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>A unique identifier for the Glue Data Catalog.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>A unique identifier for the Glue Data Catalog.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>A unique identifier for the Glue Data Catalog.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>A unique identifier for the Glue Data Catalog.</p>
     */
    inline GlueTable& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>A unique identifier for the Glue Data Catalog.</p>
     */
    inline GlueTable& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the Glue Data Catalog.</p>
     */
    inline GlueTable& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The name of the connection to the Glue Data Catalog.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }

    /**
     * <p>The name of the connection to the Glue Data Catalog.</p>
     */
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }

    /**
     * <p>The name of the connection to the Glue Data Catalog.</p>
     */
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }

    /**
     * <p>The name of the connection to the Glue Data Catalog.</p>
     */
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }

    /**
     * <p>The name of the connection to the Glue Data Catalog.</p>
     */
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }

    /**
     * <p>The name of the connection to the Glue Data Catalog.</p>
     */
    inline GlueTable& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}

    /**
     * <p>The name of the connection to the Glue Data Catalog.</p>
     */
    inline GlueTable& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}

    /**
     * <p>The name of the connection to the Glue Data Catalog.</p>
     */
    inline GlueTable& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}

  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet;

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
