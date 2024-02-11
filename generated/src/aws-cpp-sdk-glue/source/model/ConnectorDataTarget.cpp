/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ConnectorDataTarget.h>
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

ConnectorDataTarget::ConnectorDataTarget() : 
    m_nameHasBeenSet(false),
    m_connectionTypeHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_inputsHasBeenSet(false)
{
}

ConnectorDataTarget::ConnectorDataTarget(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_connectionTypeHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_inputsHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectorDataTarget& ConnectorDataTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionType"))
  {
    m_connectionType = jsonValue.GetString("ConnectionType");

    m_connectionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Data"))
  {
    Aws::Map<Aws::String, JsonView> dataJsonMap = jsonValue.GetObject("Data").GetAllObjects();
    for(auto& dataItem : dataJsonMap)
    {
      m_data[dataItem.first] = dataItem.second.AsString();
    }
    m_dataHasBeenSet = true;
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

  return *this;
}

JsonValue ConnectorDataTarget::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_connectionTypeHasBeenSet)
  {
   payload.WithString("ConnectionType", m_connectionType);

  }

  if(m_dataHasBeenSet)
  {
   JsonValue dataJsonMap;
   for(auto& dataItem : m_data)
   {
     dataJsonMap.WithString(dataItem.first, dataItem.second);
   }
   payload.WithObject("Data", std::move(dataJsonMap));

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

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
