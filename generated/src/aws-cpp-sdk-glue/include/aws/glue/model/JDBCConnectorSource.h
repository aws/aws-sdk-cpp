/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/JDBCConnectorOptions.h>
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
   * <p>Specifies a connector to a JDBC data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/JDBCConnectorSource">AWS
   * API Reference</a></p>
   */
  class JDBCConnectorSource
  {
  public:
    AWS_GLUE_API JDBCConnectorSource();
    AWS_GLUE_API JDBCConnectorSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API JDBCConnectorSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline JDBCConnectorSource& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline JDBCConnectorSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline JDBCConnectorSource& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connection that is associated with the connector.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }
    inline JDBCConnectorSource& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}
    inline JDBCConnectorSource& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}
    inline JDBCConnectorSource& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a connector that assists with accessing the data store in Glue
     * Studio.</p>
     */
    inline const Aws::String& GetConnectorName() const{ return m_connectorName; }
    inline bool ConnectorNameHasBeenSet() const { return m_connectorNameHasBeenSet; }
    inline void SetConnectorName(const Aws::String& value) { m_connectorNameHasBeenSet = true; m_connectorName = value; }
    inline void SetConnectorName(Aws::String&& value) { m_connectorNameHasBeenSet = true; m_connectorName = std::move(value); }
    inline void SetConnectorName(const char* value) { m_connectorNameHasBeenSet = true; m_connectorName.assign(value); }
    inline JDBCConnectorSource& WithConnectorName(const Aws::String& value) { SetConnectorName(value); return *this;}
    inline JDBCConnectorSource& WithConnectorName(Aws::String&& value) { SetConnectorName(std::move(value)); return *this;}
    inline JDBCConnectorSource& WithConnectorName(const char* value) { SetConnectorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of connection, such as marketplace.jdbc or custom.jdbc, designating
     * a connection to a JDBC data store.</p>
     */
    inline const Aws::String& GetConnectionType() const{ return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    inline void SetConnectionType(const Aws::String& value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }
    inline void SetConnectionType(Aws::String&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::move(value); }
    inline void SetConnectionType(const char* value) { m_connectionTypeHasBeenSet = true; m_connectionType.assign(value); }
    inline JDBCConnectorSource& WithConnectionType(const Aws::String& value) { SetConnectionType(value); return *this;}
    inline JDBCConnectorSource& WithConnectionType(Aws::String&& value) { SetConnectionType(std::move(value)); return *this;}
    inline JDBCConnectorSource& WithConnectionType(const char* value) { SetConnectionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional connection options for the connector.</p>
     */
    inline const JDBCConnectorOptions& GetAdditionalOptions() const{ return m_additionalOptions; }
    inline bool AdditionalOptionsHasBeenSet() const { return m_additionalOptionsHasBeenSet; }
    inline void SetAdditionalOptions(const JDBCConnectorOptions& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = value; }
    inline void SetAdditionalOptions(JDBCConnectorOptions&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = std::move(value); }
    inline JDBCConnectorSource& WithAdditionalOptions(const JDBCConnectorOptions& value) { SetAdditionalOptions(value); return *this;}
    inline JDBCConnectorSource& WithAdditionalOptions(JDBCConnectorOptions&& value) { SetAdditionalOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table in the data source.</p>
     */
    inline const Aws::String& GetConnectionTable() const{ return m_connectionTable; }
    inline bool ConnectionTableHasBeenSet() const { return m_connectionTableHasBeenSet; }
    inline void SetConnectionTable(const Aws::String& value) { m_connectionTableHasBeenSet = true; m_connectionTable = value; }
    inline void SetConnectionTable(Aws::String&& value) { m_connectionTableHasBeenSet = true; m_connectionTable = std::move(value); }
    inline void SetConnectionTable(const char* value) { m_connectionTableHasBeenSet = true; m_connectionTable.assign(value); }
    inline JDBCConnectorSource& WithConnectionTable(const Aws::String& value) { SetConnectionTable(value); return *this;}
    inline JDBCConnectorSource& WithConnectionTable(Aws::String&& value) { SetConnectionTable(std::move(value)); return *this;}
    inline JDBCConnectorSource& WithConnectionTable(const char* value) { SetConnectionTable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table or SQL query to get the data from. You can specify either
     * <code>ConnectionTable</code> or <code>query</code>, but not both.</p>
     */
    inline const Aws::String& GetQuery() const{ return m_query; }
    inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }
    inline void SetQuery(const Aws::String& value) { m_queryHasBeenSet = true; m_query = value; }
    inline void SetQuery(Aws::String&& value) { m_queryHasBeenSet = true; m_query = std::move(value); }
    inline void SetQuery(const char* value) { m_queryHasBeenSet = true; m_query.assign(value); }
    inline JDBCConnectorSource& WithQuery(const Aws::String& value) { SetQuery(value); return *this;}
    inline JDBCConnectorSource& WithQuery(Aws::String&& value) { SetQuery(std::move(value)); return *this;}
    inline JDBCConnectorSource& WithQuery(const char* value) { SetQuery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the data schema for the custom JDBC source.</p>
     */
    inline const Aws::Vector<GlueSchema>& GetOutputSchemas() const{ return m_outputSchemas; }
    inline bool OutputSchemasHasBeenSet() const { return m_outputSchemasHasBeenSet; }
    inline void SetOutputSchemas(const Aws::Vector<GlueSchema>& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = value; }
    inline void SetOutputSchemas(Aws::Vector<GlueSchema>&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = std::move(value); }
    inline JDBCConnectorSource& WithOutputSchemas(const Aws::Vector<GlueSchema>& value) { SetOutputSchemas(value); return *this;}
    inline JDBCConnectorSource& WithOutputSchemas(Aws::Vector<GlueSchema>&& value) { SetOutputSchemas(std::move(value)); return *this;}
    inline JDBCConnectorSource& AddOutputSchemas(const GlueSchema& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.push_back(value); return *this; }
    inline JDBCConnectorSource& AddOutputSchemas(GlueSchema&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    Aws::String m_connectorName;
    bool m_connectorNameHasBeenSet = false;

    Aws::String m_connectionType;
    bool m_connectionTypeHasBeenSet = false;

    JDBCConnectorOptions m_additionalOptions;
    bool m_additionalOptionsHasBeenSet = false;

    Aws::String m_connectionTable;
    bool m_connectionTableHasBeenSet = false;

    Aws::String m_query;
    bool m_queryHasBeenSet = false;

    Aws::Vector<GlueSchema> m_outputSchemas;
    bool m_outputSchemasHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
