/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Specifies a connector to an Amazon Athena data source.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/AthenaConnectorSource">AWS
   * API Reference</a></p>
   */
  class AthenaConnectorSource
  {
  public:
    AWS_GLUE_API AthenaConnectorSource();
    AWS_GLUE_API AthenaConnectorSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API AthenaConnectorSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the data source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data source.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data source.</p>
     */
    inline AthenaConnectorSource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data source.</p>
     */
    inline AthenaConnectorSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data source.</p>
     */
    inline AthenaConnectorSource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the connection that is associated with the connector.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }

    /**
     * <p>The name of the connection that is associated with the connector.</p>
     */
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }

    /**
     * <p>The name of the connection that is associated with the connector.</p>
     */
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }

    /**
     * <p>The name of the connection that is associated with the connector.</p>
     */
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }

    /**
     * <p>The name of the connection that is associated with the connector.</p>
     */
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }

    /**
     * <p>The name of the connection that is associated with the connector.</p>
     */
    inline AthenaConnectorSource& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}

    /**
     * <p>The name of the connection that is associated with the connector.</p>
     */
    inline AthenaConnectorSource& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}

    /**
     * <p>The name of the connection that is associated with the connector.</p>
     */
    inline AthenaConnectorSource& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}


    /**
     * <p>The name of a connector that assists with accessing the data store in Glue
     * Studio.</p>
     */
    inline const Aws::String& GetConnectorName() const{ return m_connectorName; }

    /**
     * <p>The name of a connector that assists with accessing the data store in Glue
     * Studio.</p>
     */
    inline bool ConnectorNameHasBeenSet() const { return m_connectorNameHasBeenSet; }

    /**
     * <p>The name of a connector that assists with accessing the data store in Glue
     * Studio.</p>
     */
    inline void SetConnectorName(const Aws::String& value) { m_connectorNameHasBeenSet = true; m_connectorName = value; }

    /**
     * <p>The name of a connector that assists with accessing the data store in Glue
     * Studio.</p>
     */
    inline void SetConnectorName(Aws::String&& value) { m_connectorNameHasBeenSet = true; m_connectorName = std::move(value); }

    /**
     * <p>The name of a connector that assists with accessing the data store in Glue
     * Studio.</p>
     */
    inline void SetConnectorName(const char* value) { m_connectorNameHasBeenSet = true; m_connectorName.assign(value); }

    /**
     * <p>The name of a connector that assists with accessing the data store in Glue
     * Studio.</p>
     */
    inline AthenaConnectorSource& WithConnectorName(const Aws::String& value) { SetConnectorName(value); return *this;}

    /**
     * <p>The name of a connector that assists with accessing the data store in Glue
     * Studio.</p>
     */
    inline AthenaConnectorSource& WithConnectorName(Aws::String&& value) { SetConnectorName(std::move(value)); return *this;}

    /**
     * <p>The name of a connector that assists with accessing the data store in Glue
     * Studio.</p>
     */
    inline AthenaConnectorSource& WithConnectorName(const char* value) { SetConnectorName(value); return *this;}


    /**
     * <p>The type of connection, such as marketplace.athena or custom.athena,
     * designating a connection to an Amazon Athena data store.</p>
     */
    inline const Aws::String& GetConnectionType() const{ return m_connectionType; }

    /**
     * <p>The type of connection, such as marketplace.athena or custom.athena,
     * designating a connection to an Amazon Athena data store.</p>
     */
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }

    /**
     * <p>The type of connection, such as marketplace.athena or custom.athena,
     * designating a connection to an Amazon Athena data store.</p>
     */
    inline void SetConnectionType(const Aws::String& value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }

    /**
     * <p>The type of connection, such as marketplace.athena or custom.athena,
     * designating a connection to an Amazon Athena data store.</p>
     */
    inline void SetConnectionType(Aws::String&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::move(value); }

    /**
     * <p>The type of connection, such as marketplace.athena or custom.athena,
     * designating a connection to an Amazon Athena data store.</p>
     */
    inline void SetConnectionType(const char* value) { m_connectionTypeHasBeenSet = true; m_connectionType.assign(value); }

    /**
     * <p>The type of connection, such as marketplace.athena or custom.athena,
     * designating a connection to an Amazon Athena data store.</p>
     */
    inline AthenaConnectorSource& WithConnectionType(const Aws::String& value) { SetConnectionType(value); return *this;}

    /**
     * <p>The type of connection, such as marketplace.athena or custom.athena,
     * designating a connection to an Amazon Athena data store.</p>
     */
    inline AthenaConnectorSource& WithConnectionType(Aws::String&& value) { SetConnectionType(std::move(value)); return *this;}

    /**
     * <p>The type of connection, such as marketplace.athena or custom.athena,
     * designating a connection to an Amazon Athena data store.</p>
     */
    inline AthenaConnectorSource& WithConnectionType(const char* value) { SetConnectionType(value); return *this;}


    /**
     * <p>The name of the table in the data source.</p>
     */
    inline const Aws::String& GetConnectionTable() const{ return m_connectionTable; }

    /**
     * <p>The name of the table in the data source.</p>
     */
    inline bool ConnectionTableHasBeenSet() const { return m_connectionTableHasBeenSet; }

    /**
     * <p>The name of the table in the data source.</p>
     */
    inline void SetConnectionTable(const Aws::String& value) { m_connectionTableHasBeenSet = true; m_connectionTable = value; }

    /**
     * <p>The name of the table in the data source.</p>
     */
    inline void SetConnectionTable(Aws::String&& value) { m_connectionTableHasBeenSet = true; m_connectionTable = std::move(value); }

    /**
     * <p>The name of the table in the data source.</p>
     */
    inline void SetConnectionTable(const char* value) { m_connectionTableHasBeenSet = true; m_connectionTable.assign(value); }

    /**
     * <p>The name of the table in the data source.</p>
     */
    inline AthenaConnectorSource& WithConnectionTable(const Aws::String& value) { SetConnectionTable(value); return *this;}

    /**
     * <p>The name of the table in the data source.</p>
     */
    inline AthenaConnectorSource& WithConnectionTable(Aws::String&& value) { SetConnectionTable(std::move(value)); return *this;}

    /**
     * <p>The name of the table in the data source.</p>
     */
    inline AthenaConnectorSource& WithConnectionTable(const char* value) { SetConnectionTable(value); return *this;}


    /**
     * <p>The name of the Cloudwatch log group to read from. For example,
     * <code>/aws-glue/jobs/output</code>.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }

    /**
     * <p>The name of the Cloudwatch log group to read from. For example,
     * <code>/aws-glue/jobs/output</code>.</p>
     */
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }

    /**
     * <p>The name of the Cloudwatch log group to read from. For example,
     * <code>/aws-glue/jobs/output</code>.</p>
     */
    inline void SetSchemaName(const Aws::String& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }

    /**
     * <p>The name of the Cloudwatch log group to read from. For example,
     * <code>/aws-glue/jobs/output</code>.</p>
     */
    inline void SetSchemaName(Aws::String&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::move(value); }

    /**
     * <p>The name of the Cloudwatch log group to read from. For example,
     * <code>/aws-glue/jobs/output</code>.</p>
     */
    inline void SetSchemaName(const char* value) { m_schemaNameHasBeenSet = true; m_schemaName.assign(value); }

    /**
     * <p>The name of the Cloudwatch log group to read from. For example,
     * <code>/aws-glue/jobs/output</code>.</p>
     */
    inline AthenaConnectorSource& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}

    /**
     * <p>The name of the Cloudwatch log group to read from. For example,
     * <code>/aws-glue/jobs/output</code>.</p>
     */
    inline AthenaConnectorSource& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}

    /**
     * <p>The name of the Cloudwatch log group to read from. For example,
     * <code>/aws-glue/jobs/output</code>.</p>
     */
    inline AthenaConnectorSource& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}


    /**
     * <p>Specifies the data schema for the custom Athena source.</p>
     */
    inline const Aws::Vector<GlueSchema>& GetOutputSchemas() const{ return m_outputSchemas; }

    /**
     * <p>Specifies the data schema for the custom Athena source.</p>
     */
    inline bool OutputSchemasHasBeenSet() const { return m_outputSchemasHasBeenSet; }

    /**
     * <p>Specifies the data schema for the custom Athena source.</p>
     */
    inline void SetOutputSchemas(const Aws::Vector<GlueSchema>& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = value; }

    /**
     * <p>Specifies the data schema for the custom Athena source.</p>
     */
    inline void SetOutputSchemas(Aws::Vector<GlueSchema>&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = std::move(value); }

    /**
     * <p>Specifies the data schema for the custom Athena source.</p>
     */
    inline AthenaConnectorSource& WithOutputSchemas(const Aws::Vector<GlueSchema>& value) { SetOutputSchemas(value); return *this;}

    /**
     * <p>Specifies the data schema for the custom Athena source.</p>
     */
    inline AthenaConnectorSource& WithOutputSchemas(Aws::Vector<GlueSchema>&& value) { SetOutputSchemas(std::move(value)); return *this;}

    /**
     * <p>Specifies the data schema for the custom Athena source.</p>
     */
    inline AthenaConnectorSource& AddOutputSchemas(const GlueSchema& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.push_back(value); return *this; }

    /**
     * <p>Specifies the data schema for the custom Athena source.</p>
     */
    inline AthenaConnectorSource& AddOutputSchemas(GlueSchema&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    Aws::String m_connectorName;
    bool m_connectorNameHasBeenSet = false;

    Aws::String m_connectionType;
    bool m_connectionTypeHasBeenSet = false;

    Aws::String m_connectionTable;
    bool m_connectionTableHasBeenSet = false;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    Aws::Vector<GlueSchema> m_outputSchemas;
    bool m_outputSchemasHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
