/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Specifies a target generated with standard connection options.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ConnectorDataTarget">AWS
   * API Reference</a></p>
   */
  class ConnectorDataTarget
  {
  public:
    AWS_GLUE_API ConnectorDataTarget() = default;
    AWS_GLUE_API ConnectorDataTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ConnectorDataTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of this target node.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ConnectorDataTarget& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>connectionType</code>, as provided to the underlying Glue library.
     * This node type supports the following connection types: </p> <ul> <li> <p>
     * <code>opensearch</code> </p> </li> <li> <p> <code>azuresql</code> </p> </li>
     * <li> <p> <code>azurecosmos</code> </p> </li> <li> <p> <code>bigquery</code> </p>
     * </li> <li> <p> <code>saphana</code> </p> </li> <li> <p> <code>teradata</code>
     * </p> </li> <li> <p> <code>vertica</code> </p> </li> </ul>
     */
    inline const Aws::String& GetConnectionType() const { return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    template<typename ConnectionTypeT = Aws::String>
    void SetConnectionType(ConnectionTypeT&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::forward<ConnectionTypeT>(value); }
    template<typename ConnectionTypeT = Aws::String>
    ConnectorDataTarget& WithConnectionType(ConnectionTypeT&& value) { SetConnectionType(std::forward<ConnectionTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map specifying connection options for the node. You can find standard
     * connection options for the corresponding connection type in the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-connect.html">
     * Connection parameters</a> section of the Glue documentation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = Aws::Map<Aws::String, Aws::String>>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = Aws::Map<Aws::String, Aws::String>>
    ConnectorDataTarget& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    template<typename DataKeyT = Aws::String, typename DataValueT = Aws::String>
    ConnectorDataTarget& AddData(DataKeyT&& key, DataValueT&& value) {
      m_dataHasBeenSet = true; m_data.emplace(std::forward<DataKeyT>(key), std::forward<DataValueT>(value)); return *this;
    }
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
    ConnectorDataTarget& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = Aws::String>
    ConnectorDataTarget& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_connectionType;
    bool m_connectionTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_data;
    bool m_dataHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
