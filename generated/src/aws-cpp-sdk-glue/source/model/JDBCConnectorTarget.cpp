/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/JDBCConnectorTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

JDBCConnectorTarget::JDBCConnectorTarget() : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_connectionNameHasBeenSet(false),
    m_connectionTableHasBeenSet(false),
    m_connectorNameHasBeenSet(false),
    m_connectionTypeHasBeenSet(false),
    m_additionalOptionsHasBeenSet(false),
    m_outputSchemasHasBeenSet(false)
{
}

JDBCConnectorTarget::JDBCConnectorTarget(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_connectionNameHasBeenSet(false),
    m_connectionTableHasBeenSet(false),
    m_connectorNameHasBeenSet(false),
    m_connectionTypeHasBeenSet(false),
    m_additionalOptionsHasBeenSet(false),
    m_outputSchemasHasBeenSet(false)
{
  *this = jsonValue;
}

JDBCConnectorTarget& JDBCConnectorTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Inputs"))
  {
    Aws::Utils::Array<JsonView> inputsJsonList = jsonValue.GetArray("Inputs");
    for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
    {
      m_inputs.push_back(inputsJsonList[inputsIndex].AsString());
    }
    m_inputsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionName"))
  {
    m_connectionName = jsonValue.GetString("ConnectionName");

    m_connectionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionTable"))
  {
    m_connectionTable = jsonValue.GetString("ConnectionTable");

    m_connectionTableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectorName"))
  {
    m_connectorName = jsonValue.GetString("ConnectorName");

    m_connectorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionType"))
  {
    m_connectionType = jsonValue.GetString("ConnectionType");

    m_connectionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalOptions"))
  {
    Aws::Map<Aws::String, JsonView> additionalOptionsJsonMap = jsonValue.GetObject("AdditionalOptions").GetAllObjects();
    for(auto& additionalOptionsItem : additionalOptionsJsonMap)
    {
      m_additionalOptions[additionalOptionsItem.first] = additionalOptionsItem.second.AsString();
    }
    m_additionalOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputSchemas"))
  {
    Aws::Utils::Array<JsonView> outputSchemasJsonList = jsonValue.GetArray("OutputSchemas");
    for(unsigned outputSchemasIndex = 0; outputSchemasIndex < outputSchemasJsonList.GetLength(); ++outputSchemasIndex)
    {
      m_outputSchemas.push_back(outputSchemasJsonList[outputSchemasIndex].AsObject());
    }
    m_outputSchemasHasBeenSet = true;
  }

  return *this;
}

JsonValue JDBCConnectorTarget::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_inputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputsJsonList(m_inputs.size());
   for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
   {
     inputsJsonList[inputsIndex].AsString(m_inputs[inputsIndex]);
   }
   payload.WithArray("Inputs", std::move(inputsJsonList));

  }

  if(m_connectionNameHasBeenSet)
  {
   payload.WithString("ConnectionName", m_connectionName);

  }

  if(m_connectionTableHasBeenSet)
  {
   payload.WithString("ConnectionTable", m_connectionTable);

  }

  if(m_connectorNameHasBeenSet)
  {
   payload.WithString("ConnectorName", m_connectorName);

  }

  if(m_connectionTypeHasBeenSet)
  {
   payload.WithString("ConnectionType", m_connectionType);

  }

  if(m_additionalOptionsHasBeenSet)
  {
   JsonValue additionalOptionsJsonMap;
   for(auto& additionalOptionsItem : m_additionalOptions)
   {
     additionalOptionsJsonMap.WithString(additionalOptionsItem.first, additionalOptionsItem.second);
   }
   payload.WithObject("AdditionalOptions", std::move(additionalOptionsJsonMap));

  }

  if(m_outputSchemasHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputSchemasJsonList(m_outputSchemas.size());
   for(unsigned outputSchemasIndex = 0; outputSchemasIndex < outputSchemasJsonList.GetLength(); ++outputSchemasIndex)
   {
     outputSchemasJsonList[outputSchemasIndex].AsObject(m_outputSchemas[outputSchemasIndex].Jsonize());
   }
   payload.WithArray("OutputSchemas", std::move(outputSchemasJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
