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


    ///@{
    /**
     * <p>The name of the JDBC source connection.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DirectJDBCSource& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DirectJDBCSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DirectJDBCSource& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database of the JDBC source connection.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }
    inline DirectJDBCSource& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}
    inline DirectJDBCSource& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}
    inline DirectJDBCSource& WithDatabase(const char* value) { SetDatabase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table of the JDBC source connection.</p>
     */
    inline const Aws::String& GetTable() const{ return m_table; }
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
    inline void SetTable(const Aws::String& value) { m_tableHasBeenSet = true; m_table = value; }
    inline void SetTable(Aws::String&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }
    inline void SetTable(const char* value) { m_tableHasBeenSet = true; m_table.assign(value); }
    inline DirectJDBCSource& WithTable(const Aws::String& value) { SetTable(value); return *this;}
    inline DirectJDBCSource& WithTable(Aws::String&& value) { SetTable(std::move(value)); return *this;}
    inline DirectJDBCSource& WithTable(const char* value) { SetTable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection name of the JDBC source.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }
    inline DirectJDBCSource& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}
    inline DirectJDBCSource& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}
    inline DirectJDBCSource& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection type of the JDBC source.</p>
     */
    inline const JDBCConnectionType& GetConnectionType() const{ return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    inline void SetConnectionType(const JDBCConnectionType& value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }
    inline void SetConnectionType(JDBCConnectionType&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::move(value); }
    inline DirectJDBCSource& WithConnectionType(const JDBCConnectionType& value) { SetConnectionType(value); return *this;}
    inline DirectJDBCSource& WithConnectionType(JDBCConnectionType&& value) { SetConnectionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The temp directory of the JDBC Redshift source.</p>
     */
    inline const Aws::String& GetRedshiftTmpDir() const{ return m_redshiftTmpDir; }
    inline bool RedshiftTmpDirHasBeenSet() const { return m_redshiftTmpDirHasBeenSet; }
    inline void SetRedshiftTmpDir(const Aws::String& value) { m_redshiftTmpDirHasBeenSet = true; m_redshiftTmpDir = value; }
    inline void SetRedshiftTmpDir(Aws::String&& value) { m_redshiftTmpDirHasBeenSet = true; m_redshiftTmpDir = std::move(value); }
    inline void SetRedshiftTmpDir(const char* value) { m_redshiftTmpDirHasBeenSet = true; m_redshiftTmpDir.assign(value); }
    inline DirectJDBCSource& WithRedshiftTmpDir(const Aws::String& value) { SetRedshiftTmpDir(value); return *this;}
    inline DirectJDBCSource& WithRedshiftTmpDir(Aws::String&& value) { SetRedshiftTmpDir(std::move(value)); return *this;}
    inline DirectJDBCSource& WithRedshiftTmpDir(const char* value) { SetRedshiftTmpDir(value); return *this;}
    ///@}
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
