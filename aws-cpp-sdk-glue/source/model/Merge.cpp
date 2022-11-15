/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Merge.h>
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

Merge::Merge() : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_primaryKeysHasBeenSet(false)
{
}

Merge::Merge(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_primaryKeysHasBeenSet(false)
{
  *this = jsonValue;
}

Merge& Merge::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetString("Source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrimaryKeys"))
  {
    Aws::Utils::Array<JsonView> primaryKeysJsonList = jsonValue.GetArray("PrimaryKeys");
    for(unsigned primaryKeysIndex = 0; primaryKeysIndex < primaryKeysJsonList.GetLength(); ++primaryKeysIndex)
    {
      Aws::Utils::Array<JsonView> enclosedInStringPropertiesJsonList = primaryKeysJsonList[primaryKeysIndex].AsArray();
      Aws::Vector<Aws::String> enclosedInStringPropertiesList;
      enclosedInStringPropertiesList.reserve((size_t)enclosedInStringPropertiesJsonList.GetLength());
      for(unsigned enclosedInStringPropertiesIndex = 0; enclosedInStringPropertiesIndex < enclosedInStringPropertiesJsonList.GetLength(); ++enclosedInStringPropertiesIndex)
      {
        enclosedInStringPropertiesList.push_back(enclosedInStringPropertiesJsonList[enclosedInStringPropertiesIndex].AsString());
      }
      m_primaryKeys.push_back(std::move(enclosedInStringPropertiesList));
    }
    m_primaryKeysHasBeenSet = true;
  }

  return *this;
}

JsonValue Merge::Jsonize() const
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

  if(m_sourceHasBeenSet)
  {
   payload.WithString("Source", m_source);

  }

  if(m_primaryKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> primaryKeysJsonList(m_primaryKeys.size());
   for(unsigned primaryKeysIndex = 0; primaryKeysIndex < primaryKeysJsonList.GetLength(); ++primaryKeysIndex)
   {
     Aws::Utils::Array<JsonValue> enclosedInStringPropertiesJsonList(m_primaryKeys[primaryKeysIndex].size());
     for(unsigned enclosedInStringPropertiesIndex = 0; enclosedInStringPropertiesIndex < enclosedInStringPropertiesJsonList.GetLength(); ++enclosedInStringPropertiesIndex)
     {
       enclosedInStringPropertiesJsonList[enclosedInStringPropertiesIndex].AsString(m_primaryKeys[primaryKeysIndex][enclosedInStringPropertiesIndex]);
     }
     primaryKeysJsonList[primaryKeysIndex].AsArray(std::move(enclosedInStringPropertiesJsonList));
   }
   payload.WithArray("PrimaryKeys", std::move(primaryKeysJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
