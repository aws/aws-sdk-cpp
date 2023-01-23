/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides the name of the schema and table to be reloaded.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/TableToReload">AWS
   * API Reference</a></p>
   */
  class TableToReload
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API TableToReload();
    AWS_DATABASEMIGRATIONSERVICE_API TableToReload(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API TableToReload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The schema name of the table to be reloaded.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }

    /**
     * <p>The schema name of the table to be reloaded.</p>
     */
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }

    /**
     * <p>The schema name of the table to be reloaded.</p>
     */
    inline void SetSchemaName(const Aws::String& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }

    /**
     * <p>The schema name of the table to be reloaded.</p>
     */
    inline void SetSchemaName(Aws::String&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::move(value); }

    /**
     * <p>The schema name of the table to be reloaded.</p>
     */
    inline void SetSchemaName(const char* value) { m_schemaNameHasBeenSet = true; m_schemaName.assign(value); }

    /**
     * <p>The schema name of the table to be reloaded.</p>
     */
    inline TableToReload& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}

    /**
     * <p>The schema name of the table to be reloaded.</p>
     */
    inline TableToReload& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}

    /**
     * <p>The schema name of the table to be reloaded.</p>
     */
    inline TableToReload& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}


    /**
     * <p>The table name of the table to be reloaded.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The table name of the table to be reloaded.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The table name of the table to be reloaded.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The table name of the table to be reloaded.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The table name of the table to be reloaded.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The table name of the table to be reloaded.</p>
     */
    inline TableToReload& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The table name of the table to be reloaded.</p>
     */
    inline TableToReload& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The table name of the table to be reloaded.</p>
     */
    inline TableToReload& WithTableName(const char* value) { SetTableName(value); return *this;}

  private:

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
