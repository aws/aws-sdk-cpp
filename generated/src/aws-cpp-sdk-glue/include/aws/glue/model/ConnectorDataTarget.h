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
    AWS_GLUE_API ConnectorDataTarget();
    AWS_GLUE_API ConnectorDataTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ConnectorDataTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of this target node.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of this target node.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of this target node.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of this target node.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of this target node.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of this target node.</p>
     */
    inline ConnectorDataTarget& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of this target node.</p>
     */
    inline ConnectorDataTarget& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of this target node.</p>
     */
    inline ConnectorDataTarget& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The <code>connectionType</code>, as provided to the underlying Glue library.
     * This node type supports the following connection types: </p> <ul> <li> <p>
     * <code>opensearch</code> </p> </li> <li> <p> <code>azuresql</code> </p> </li>
     * <li> <p> <code>azurecosmos</code> </p> </li> <li> <p> <code>bigquery</code> </p>
     * </li> <li> <p> <code>saphana</code> </p> </li> <li> <p> <code>teradata</code>
     * </p> </li> <li> <p> <code>vertica</code> </p> </li> </ul>
     */
    inline const Aws::String& GetConnectionType() const{ return m_connectionType; }

    /**
     * <p>The <code>connectionType</code>, as provided to the underlying Glue library.
     * This node type supports the following connection types: </p> <ul> <li> <p>
     * <code>opensearch</code> </p> </li> <li> <p> <code>azuresql</code> </p> </li>
     * <li> <p> <code>azurecosmos</code> </p> </li> <li> <p> <code>bigquery</code> </p>
     * </li> <li> <p> <code>saphana</code> </p> </li> <li> <p> <code>teradata</code>
     * </p> </li> <li> <p> <code>vertica</code> </p> </li> </ul>
     */
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }

    /**
     * <p>The <code>connectionType</code>, as provided to the underlying Glue library.
     * This node type supports the following connection types: </p> <ul> <li> <p>
     * <code>opensearch</code> </p> </li> <li> <p> <code>azuresql</code> </p> </li>
     * <li> <p> <code>azurecosmos</code> </p> </li> <li> <p> <code>bigquery</code> </p>
     * </li> <li> <p> <code>saphana</code> </p> </li> <li> <p> <code>teradata</code>
     * </p> </li> <li> <p> <code>vertica</code> </p> </li> </ul>
     */
    inline void SetConnectionType(const Aws::String& value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }

    /**
     * <p>The <code>connectionType</code>, as provided to the underlying Glue library.
     * This node type supports the following connection types: </p> <ul> <li> <p>
     * <code>opensearch</code> </p> </li> <li> <p> <code>azuresql</code> </p> </li>
     * <li> <p> <code>azurecosmos</code> </p> </li> <li> <p> <code>bigquery</code> </p>
     * </li> <li> <p> <code>saphana</code> </p> </li> <li> <p> <code>teradata</code>
     * </p> </li> <li> <p> <code>vertica</code> </p> </li> </ul>
     */
    inline void SetConnectionType(Aws::String&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::move(value); }

    /**
     * <p>The <code>connectionType</code>, as provided to the underlying Glue library.
     * This node type supports the following connection types: </p> <ul> <li> <p>
     * <code>opensearch</code> </p> </li> <li> <p> <code>azuresql</code> </p> </li>
     * <li> <p> <code>azurecosmos</code> </p> </li> <li> <p> <code>bigquery</code> </p>
     * </li> <li> <p> <code>saphana</code> </p> </li> <li> <p> <code>teradata</code>
     * </p> </li> <li> <p> <code>vertica</code> </p> </li> </ul>
     */
    inline void SetConnectionType(const char* value) { m_connectionTypeHasBeenSet = true; m_connectionType.assign(value); }

    /**
     * <p>The <code>connectionType</code>, as provided to the underlying Glue library.
     * This node type supports the following connection types: </p> <ul> <li> <p>
     * <code>opensearch</code> </p> </li> <li> <p> <code>azuresql</code> </p> </li>
     * <li> <p> <code>azurecosmos</code> </p> </li> <li> <p> <code>bigquery</code> </p>
     * </li> <li> <p> <code>saphana</code> </p> </li> <li> <p> <code>teradata</code>
     * </p> </li> <li> <p> <code>vertica</code> </p> </li> </ul>
     */
    inline ConnectorDataTarget& WithConnectionType(const Aws::String& value) { SetConnectionType(value); return *this;}

    /**
     * <p>The <code>connectionType</code>, as provided to the underlying Glue library.
     * This node type supports the following connection types: </p> <ul> <li> <p>
     * <code>opensearch</code> </p> </li> <li> <p> <code>azuresql</code> </p> </li>
     * <li> <p> <code>azurecosmos</code> </p> </li> <li> <p> <code>bigquery</code> </p>
     * </li> <li> <p> <code>saphana</code> </p> </li> <li> <p> <code>teradata</code>
     * </p> </li> <li> <p> <code>vertica</code> </p> </li> </ul>
     */
    inline ConnectorDataTarget& WithConnectionType(Aws::String&& value) { SetConnectionType(std::move(value)); return *this;}

    /**
     * <p>The <code>connectionType</code>, as provided to the underlying Glue library.
     * This node type supports the following connection types: </p> <ul> <li> <p>
     * <code>opensearch</code> </p> </li> <li> <p> <code>azuresql</code> </p> </li>
     * <li> <p> <code>azurecosmos</code> </p> </li> <li> <p> <code>bigquery</code> </p>
     * </li> <li> <p> <code>saphana</code> </p> </li> <li> <p> <code>teradata</code>
     * </p> </li> <li> <p> <code>vertica</code> </p> </li> </ul>
     */
    inline ConnectorDataTarget& WithConnectionType(const char* value) { SetConnectionType(value); return *this;}


    /**
     * <p>A map specifying connection options for the node. You can find standard
     * connection options for the corresponding connection type in the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-connect.html">
     * Connection parameters</a> section of the Glue documentation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetData() const{ return m_data; }

    /**
     * <p>A map specifying connection options for the node. You can find standard
     * connection options for the corresponding connection type in the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-connect.html">
     * Connection parameters</a> section of the Glue documentation.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>A map specifying connection options for the node. You can find standard
     * connection options for the corresponding connection type in the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-connect.html">
     * Connection parameters</a> section of the Glue documentation.</p>
     */
    inline void SetData(const Aws::Map<Aws::String, Aws::String>& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>A map specifying connection options for the node. You can find standard
     * connection options for the corresponding connection type in the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-connect.html">
     * Connection parameters</a> section of the Glue documentation.</p>
     */
    inline void SetData(Aws::Map<Aws::String, Aws::String>&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>A map specifying connection options for the node. You can find standard
     * connection options for the corresponding connection type in the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-connect.html">
     * Connection parameters</a> section of the Glue documentation.</p>
     */
    inline ConnectorDataTarget& WithData(const Aws::Map<Aws::String, Aws::String>& value) { SetData(value); return *this;}

    /**
     * <p>A map specifying connection options for the node. You can find standard
     * connection options for the corresponding connection type in the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-connect.html">
     * Connection parameters</a> section of the Glue documentation.</p>
     */
    inline ConnectorDataTarget& WithData(Aws::Map<Aws::String, Aws::String>&& value) { SetData(std::move(value)); return *this;}

    /**
     * <p>A map specifying connection options for the node. You can find standard
     * connection options for the corresponding connection type in the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-connect.html">
     * Connection parameters</a> section of the Glue documentation.</p>
     */
    inline ConnectorDataTarget& AddData(const Aws::String& key, const Aws::String& value) { m_dataHasBeenSet = true; m_data.emplace(key, value); return *this; }

    /**
     * <p>A map specifying connection options for the node. You can find standard
     * connection options for the corresponding connection type in the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-connect.html">
     * Connection parameters</a> section of the Glue documentation.</p>
     */
    inline ConnectorDataTarget& AddData(Aws::String&& key, const Aws::String& value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map specifying connection options for the node. You can find standard
     * connection options for the corresponding connection type in the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-connect.html">
     * Connection parameters</a> section of the Glue documentation.</p>
     */
    inline ConnectorDataTarget& AddData(const Aws::String& key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map specifying connection options for the node. You can find standard
     * connection options for the corresponding connection type in the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-connect.html">
     * Connection parameters</a> section of the Glue documentation.</p>
     */
    inline ConnectorDataTarget& AddData(Aws::String&& key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map specifying connection options for the node. You can find standard
     * connection options for the corresponding connection type in the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-connect.html">
     * Connection parameters</a> section of the Glue documentation.</p>
     */
    inline ConnectorDataTarget& AddData(const char* key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map specifying connection options for the node. You can find standard
     * connection options for the corresponding connection type in the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-connect.html">
     * Connection parameters</a> section of the Glue documentation.</p>
     */
    inline ConnectorDataTarget& AddData(Aws::String&& key, const char* value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map specifying connection options for the node. You can find standard
     * connection options for the corresponding connection type in the <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-connect.html">
     * Connection parameters</a> section of the Glue documentation.</p>
     */
    inline ConnectorDataTarget& AddData(const char* key, const char* value) { m_dataHasBeenSet = true; m_data.emplace(key, value); return *this; }


    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline ConnectorDataTarget& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline ConnectorDataTarget& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline ConnectorDataTarget& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline ConnectorDataTarget& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }

    /**
     * <p>The nodes that are inputs to the data target.</p>
     */
    inline ConnectorDataTarget& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

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
