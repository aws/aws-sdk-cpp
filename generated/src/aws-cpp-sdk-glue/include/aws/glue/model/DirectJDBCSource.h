/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/JDBCConnectionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/GlueSchema.h>
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
    AWS_GLUE_API DirectJDBCSource() = default;
    AWS_GLUE_API DirectJDBCSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DirectJDBCSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the JDBC source connection.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DirectJDBCSource& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database of the JDBC source connection.</p>
     */
    inline const Aws::String& GetDatabase() const { return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    template<typename DatabaseT = Aws::String>
    void SetDatabase(DatabaseT&& value) { m_databaseHasBeenSet = true; m_database = std::forward<DatabaseT>(value); }
    template<typename DatabaseT = Aws::String>
    DirectJDBCSource& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table of the JDBC source connection.</p>
     */
    inline const Aws::String& GetTable() const { return m_table; }
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
    template<typename TableT = Aws::String>
    void SetTable(TableT&& value) { m_tableHasBeenSet = true; m_table = std::forward<TableT>(value); }
    template<typename TableT = Aws::String>
    DirectJDBCSource& WithTable(TableT&& value) { SetTable(std::forward<TableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection name of the JDBC source.</p>
     */
    inline const Aws::String& GetConnectionName() const { return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    template<typename ConnectionNameT = Aws::String>
    void SetConnectionName(ConnectionNameT&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::forward<ConnectionNameT>(value); }
    template<typename ConnectionNameT = Aws::String>
    DirectJDBCSource& WithConnectionName(ConnectionNameT&& value) { SetConnectionName(std::forward<ConnectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection type of the JDBC source.</p>
     */
    inline JDBCConnectionType GetConnectionType() const { return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    inline void SetConnectionType(JDBCConnectionType value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }
    inline DirectJDBCSource& WithConnectionType(JDBCConnectionType value) { SetConnectionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The temp directory of the JDBC Redshift source.</p>
     */
    inline const Aws::String& GetRedshiftTmpDir() const { return m_redshiftTmpDir; }
    inline bool RedshiftTmpDirHasBeenSet() const { return m_redshiftTmpDirHasBeenSet; }
    template<typename RedshiftTmpDirT = Aws::String>
    void SetRedshiftTmpDir(RedshiftTmpDirT&& value) { m_redshiftTmpDirHasBeenSet = true; m_redshiftTmpDir = std::forward<RedshiftTmpDirT>(value); }
    template<typename RedshiftTmpDirT = Aws::String>
    DirectJDBCSource& WithRedshiftTmpDir(RedshiftTmpDirT&& value) { SetRedshiftTmpDir(std::forward<RedshiftTmpDirT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the data schema for the direct JDBC source.</p>
     */
    inline const Aws::Vector<GlueSchema>& GetOutputSchemas() const { return m_outputSchemas; }
    inline bool OutputSchemasHasBeenSet() const { return m_outputSchemasHasBeenSet; }
    template<typename OutputSchemasT = Aws::Vector<GlueSchema>>
    void SetOutputSchemas(OutputSchemasT&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = std::forward<OutputSchemasT>(value); }
    template<typename OutputSchemasT = Aws::Vector<GlueSchema>>
    DirectJDBCSource& WithOutputSchemas(OutputSchemasT&& value) { SetOutputSchemas(std::forward<OutputSchemasT>(value)); return *this;}
    template<typename OutputSchemasT = GlueSchema>
    DirectJDBCSource& AddOutputSchemas(OutputSchemasT&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.emplace_back(std::forward<OutputSchemasT>(value)); return *this; }
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

    JDBCConnectionType m_connectionType{JDBCConnectionType::NOT_SET};
    bool m_connectionTypeHasBeenSet = false;

    Aws::String m_redshiftTmpDir;
    bool m_redshiftTmpDirHasBeenSet = false;

    Aws::Vector<GlueSchema> m_outputSchemas;
    bool m_outputSchemasHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
