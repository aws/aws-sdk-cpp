/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/JDBCConnectionType.h>
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
   * <p>Specifies the direct JDBC source connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DirectJDBCSource">AWS
   * API Reference</a></p>
   */
  class DirectJDBCSource
  {
  public:
    AWS_GLUE_API DirectJDBCSource();
    AWS_GLUE_API DirectJDBCSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DirectJDBCSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the JDBC source connection.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the JDBC source connection.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the JDBC source connection.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the JDBC source connection.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the JDBC source connection.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the JDBC source connection.</p>
     */
    inline DirectJDBCSource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the JDBC source connection.</p>
     */
    inline DirectJDBCSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the JDBC source connection.</p>
     */
    inline DirectJDBCSource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The database of the JDBC source connection.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }

    /**
     * <p>The database of the JDBC source connection.</p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>The database of the JDBC source connection.</p>
     */
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>The database of the JDBC source connection.</p>
     */
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>The database of the JDBC source connection.</p>
     */
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }

    /**
     * <p>The database of the JDBC source connection.</p>
     */
    inline DirectJDBCSource& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>The database of the JDBC source connection.</p>
     */
    inline DirectJDBCSource& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>The database of the JDBC source connection.</p>
     */
    inline DirectJDBCSource& WithDatabase(const char* value) { SetDatabase(value); return *this;}


    /**
     * <p>The table of the JDBC source connection.</p>
     */
    inline const Aws::String& GetTable() const{ return m_table; }

    /**
     * <p>The table of the JDBC source connection.</p>
     */
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }

    /**
     * <p>The table of the JDBC source connection.</p>
     */
    inline void SetTable(const Aws::String& value) { m_tableHasBeenSet = true; m_table = value; }

    /**
     * <p>The table of the JDBC source connection.</p>
     */
    inline void SetTable(Aws::String&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }

    /**
     * <p>The table of the JDBC source connection.</p>
     */
    inline void SetTable(const char* value) { m_tableHasBeenSet = true; m_table.assign(value); }

    /**
     * <p>The table of the JDBC source connection.</p>
     */
    inline DirectJDBCSource& WithTable(const Aws::String& value) { SetTable(value); return *this;}

    /**
     * <p>The table of the JDBC source connection.</p>
     */
    inline DirectJDBCSource& WithTable(Aws::String&& value) { SetTable(std::move(value)); return *this;}

    /**
     * <p>The table of the JDBC source connection.</p>
     */
    inline DirectJDBCSource& WithTable(const char* value) { SetTable(value); return *this;}


    /**
     * <p>The connection name of the JDBC source.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }

    /**
     * <p>The connection name of the JDBC source.</p>
     */
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }

    /**
     * <p>The connection name of the JDBC source.</p>
     */
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }

    /**
     * <p>The connection name of the JDBC source.</p>
     */
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }

    /**
     * <p>The connection name of the JDBC source.</p>
     */
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }

    /**
     * <p>The connection name of the JDBC source.</p>
     */
    inline DirectJDBCSource& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}

    /**
     * <p>The connection name of the JDBC source.</p>
     */
    inline DirectJDBCSource& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}

    /**
     * <p>The connection name of the JDBC source.</p>
     */
    inline DirectJDBCSource& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}


    /**
     * <p>The connection type of the JDBC source.</p>
     */
    inline const JDBCConnectionType& GetConnectionType() const{ return m_connectionType; }

    /**
     * <p>The connection type of the JDBC source.</p>
     */
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }

    /**
     * <p>The connection type of the JDBC source.</p>
     */
    inline void SetConnectionType(const JDBCConnectionType& value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }

    /**
     * <p>The connection type of the JDBC source.</p>
     */
    inline void SetConnectionType(JDBCConnectionType&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::move(value); }

    /**
     * <p>The connection type of the JDBC source.</p>
     */
    inline DirectJDBCSource& WithConnectionType(const JDBCConnectionType& value) { SetConnectionType(value); return *this;}

    /**
     * <p>The connection type of the JDBC source.</p>
     */
    inline DirectJDBCSource& WithConnectionType(JDBCConnectionType&& value) { SetConnectionType(std::move(value)); return *this;}


    /**
     * <p>The temp directory of the JDBC Redshift source.</p>
     */
    inline const Aws::String& GetRedshiftTmpDir() const{ return m_redshiftTmpDir; }

    /**
     * <p>The temp directory of the JDBC Redshift source.</p>
     */
    inline bool RedshiftTmpDirHasBeenSet() const { return m_redshiftTmpDirHasBeenSet; }

    /**
     * <p>The temp directory of the JDBC Redshift source.</p>
     */
    inline void SetRedshiftTmpDir(const Aws::String& value) { m_redshiftTmpDirHasBeenSet = true; m_redshiftTmpDir = value; }

    /**
     * <p>The temp directory of the JDBC Redshift source.</p>
     */
    inline void SetRedshiftTmpDir(Aws::String&& value) { m_redshiftTmpDirHasBeenSet = true; m_redshiftTmpDir = std::move(value); }

    /**
     * <p>The temp directory of the JDBC Redshift source.</p>
     */
    inline void SetRedshiftTmpDir(const char* value) { m_redshiftTmpDirHasBeenSet = true; m_redshiftTmpDir.assign(value); }

    /**
     * <p>The temp directory of the JDBC Redshift source.</p>
     */
    inline DirectJDBCSource& WithRedshiftTmpDir(const Aws::String& value) { SetRedshiftTmpDir(value); return *this;}

    /**
     * <p>The temp directory of the JDBC Redshift source.</p>
     */
    inline DirectJDBCSource& WithRedshiftTmpDir(Aws::String&& value) { SetRedshiftTmpDir(std::move(value)); return *this;}

    /**
     * <p>The temp directory of the JDBC Redshift source.</p>
     */
    inline DirectJDBCSource& WithRedshiftTmpDir(const char* value) { SetRedshiftTmpDir(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    Aws::String m_table;
    bool m_tableHasBeenSet = false;

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    JDBCConnectionType m_connectionType;
    bool m_connectionTypeHasBeenSet = false;

    Aws::String m_redshiftTmpDir;
    bool m_redshiftTmpDirHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
