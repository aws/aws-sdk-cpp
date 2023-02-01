/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DynamicTransform.h>
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

DynamicTransform::DynamicTransform() : 
    m_nameHasBeenSet(false),
    m_transformNameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

DynamicTransform::DynamicTransform(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_transformNameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

DynamicTransform& DynamicTransform::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransformName"))
  {
    m_transformName = jsonValue.GetString("TransformName");

    m_transformNameHasBeenSet = true;
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

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Utils::Array<JsonView> parametersJsonList = jsonValue.GetArray("Parameters");
    for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
    {
      m_parameters.push_back(parametersJsonList[parametersIndex].AsObject());
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FunctionName"))
  {
    m_functionName = jsonValue.GetString("FunctionName");

    m_functionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue DynamicTransform::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_transformNameHasBeenSet)
  {
   payload.WithString("TransformName", m_transformName);

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

  if(m_parametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parametersJsonList(m_parameters.size());
   for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
   {
     parametersJsonList[parametersIndex].AsObject(m_parameters[parametersIndex].Jsonize());
   }
   payload.WithArray("Parameters", std::move(parametersJsonList));

  }

  if(m_functionNameHasBeenSet)
  {
   payload.WithString("FunctionName", m_functionName);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
