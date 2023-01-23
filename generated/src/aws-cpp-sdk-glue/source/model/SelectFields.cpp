/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/SelectFields.h>
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

SelectFields::SelectFields() : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_pathsHasBeenSet(false)
{
}

SelectFields::SelectFields(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_pathsHasBeenSet(false)
{
  *this = jsonValue;
}

SelectFields& SelectFields::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Paths"))
  {
    Aws::Utils::Array<JsonView> pathsJsonList = jsonValue.GetArray("Paths");
    for(unsigned pathsIndex = 0; pathsIndex < pathsJsonList.GetLength(); ++pathsIndex)
    {
      Aws::Utils::Array<JsonView> enclosedInStringPropertiesJsonList = pathsJsonList[pathsIndex].AsArray();
      Aws::Vector<Aws::String> enclosedInStringPropertiesList;
      enclosedInStringPropertiesList.reserve((size_t)enclosedInStringPropertiesJsonList.GetLength());
      for(unsigned enclosedInStringPropertiesIndex = 0; enclosedInStringPropertiesIndex < enclosedInStringPropertiesJsonList.GetLength(); ++enclosedInStringPropertiesIndex)
      {
        enclosedInStringPropertiesList.push_back(enclosedInStringPropertiesJsonList[enclosedInStringPropertiesIndex].AsString());
      }
      m_paths.push_back(std::move(enclosedInStringPropertiesList));
    }
    m_pathsHasBeenSet = true;
  }

  return *this;
}

JsonValue SelectFields::Jsonize() const
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

  if(m_pathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pathsJsonList(m_paths.size());
   for(unsigned pathsIndex = 0; pathsIndex < pathsJsonList.GetLength(); ++pathsIndex)
   {
     Aws::Utils::Array<JsonValue> enclosedInStringPropertiesJsonList(m_paths[pathsIndex].size());
     for(unsigned enclosedInStringPropertiesIndex = 0; enclosedInStringPropertiesIndex < enclosedInStringPropertiesJsonList.GetLength(); ++enclosedInStringPropertiesIndex)
     {
       enclosedInStringPropertiesJsonList[enclosedInStringPropertiesIndex].AsString(m_paths[pathsIndex][enclosedInStringPropertiesIndex]);
     }
     pathsJsonList[pathsIndex].AsArray(std::move(enclosedInStringPropertiesJsonList));
   }
   payload.WithArray("Paths", std::move(pathsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
