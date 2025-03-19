/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Specifies a data target that writes to Amazon S3 in Apache Parquet columnar
   * storage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/JDBCConnectorTarget">AWS
   * API Reference</a></p>
   */
  class JDBCConnectorTarget
  {
  public:
    AWS_GLUE_API JDBCConnectorTarget() = default;
    AWS_GLUE_API JDBCConnectorTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API JDBCConnectorTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data target.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    JDBCConnectorTarget& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::Vector<Aws::String>>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::Vector<Aws::String>>
    JDBCConnectorTarget& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = Aws::String>
    JDBCConnectorTarget& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the connection that is associated with the connector.</p>
     */
    inline const Aws::String& GetConnectionName() const { return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    template<typename ConnectionNameT = Aws::String>
    void SetConnectionName(ConnectionNameT&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::forward<ConnectionNameT>(value); }
    template<typename ConnectionNameT = Aws::String>
    JDBCConnectorTarget& WithConnectionName(ConnectionNameT&& value) { SetConnectionName(std::forward<ConnectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table in the data target.</p>
     */
    inline const Aws::String& GetConnectionTable() const { return m_connectionTable; }
    inline bool ConnectionTableHasBeenSet() const { return m_connectionTableHasBeenSet; }
    template<typename ConnectionTableT = Aws::String>
    void SetConnectionTable(ConnectionTableT&& value) { m_connectionTableHasBeenSet = true; m_connectionTable = std::forward<ConnectionTableT>(value); }
    template<typename ConnectionTableT = Aws::String>
    JDBCConnectorTarget& WithConnectionTable(ConnectionTableT&& value) { SetConnectionTable(std::forward<ConnectionTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a connector that will be used.</p>
     */
    inline const Aws::String& GetConnectorName() const { return m_connectorName; }
    inline bool ConnectorNameHasBeenSet() const { return m_connectorNameHasBeenSet; }
    template<typename ConnectorNameT = Aws::String>
    void SetConnectorName(ConnectorNameT&& value) { m_connectorNameHasBeenSet = true; m_connectorName = std::forward<ConnectorNameT>(value); }
    template<typename ConnectorNameT = Aws::String>
    JDBCConnectorTarget& WithConnectorName(ConnectorNameT&& value) { SetConnectorName(std::forward<ConnectorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of connection, such as marketplace.jdbc or custom.jdbc, designating
     * a connection to a JDBC data target.</p>
     */
    inline const Aws::String& GetConnectionType() const { return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    template<typename ConnectionTypeT = Aws::String>
    void SetConnectionType(ConnectionTypeT&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::forward<ConnectionTypeT>(value); }
    template<typename ConnectionTypeT = Aws::String>
    JDBCConnectorTarget& WithConnectionType(ConnectionTypeT&& value) { SetConnectionType(std::forward<ConnectionTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional connection options for the connector.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalOptions() const { return m_additionalOptions; }
    inline bool AdditionalOptionsHasBeenSet() const { return m_additionalOptionsHasBeenSet; }
    template<typename AdditionalOptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetAdditionalOptions(AdditionalOptionsT&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = std::forward<AdditionalOptionsT>(value); }
    template<typename AdditionalOptionsT = Aws::Map<Aws::String, Aws::String>>
    JDBCConnectorTarget& WithAdditionalOptions(AdditionalOptionsT&& value) { SetAdditionalOptions(std::forward<AdditionalOptionsT>(value)); return *this;}
    template<typename AdditionalOptionsKeyT = Aws::String, typename AdditionalOptionsValueT = Aws::String>
    JDBCConnectorTarget& AddAdditionalOptions(AdditionalOptionsKeyT&& key, AdditionalOptionsValueT&& value) {
      m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(std::forward<AdditionalOptionsKeyT>(key), std::forward<AdditionalOptionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies the data schema for the JDBC target.</p>
     */
    inline const Aws::Vector<GlueSchema>& GetOutputSchemas() const { return m_outputSchemas; }
    inline bool OutputSchemasHasBeenSet() const { return m_outputSchemasHasBeenSet; }
    template<typename OutputSchemasT = Aws::Vector<GlueSchema>>
    void SetOutputSchemas(OutputSchemasT&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = std::forward<OutputSchemasT>(value); }
    template<typename OutputSchemasT = Aws::Vector<GlueSchema>>
    JDBCConnectorTarget& WithOutputSchemas(OutputSchemasT&& value) { SetOutputSchemas(std::forward<OutputSchemasT>(value)); return *this;}
    template<typename OutputSchemasT = GlueSchema>
    JDBCConnectorTarget& AddOutputSchemas(OutputSchemasT&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.emplace_back(std::forward<OutputSchemasT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    Aws::String m_connectionTable;
    bool m_connectionTableHasBeenSet = false;

    Aws::String m_connectorName;
    bool m_connectorNameHasBeenSet = false;

    Aws::String m_connectionType;
    bool m_connectionTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalOptions;
    bool m_additionalOptionsHasBeenSet = false;

    Aws::Vector<GlueSchema> m_outputSchemas;
    bool m_outputSchemasHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
