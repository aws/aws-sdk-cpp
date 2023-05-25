/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Aggregate.h>
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

Aggregate::Aggregate() : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_aggsHasBeenSet(false)
{
}

Aggregate::Aggregate(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_aggsHasBeenSet(false)
{
  *this = jsonValue;
}

Aggregate& Aggregate::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Groups"))
  {
    Aws::Utils::Array<JsonView> groupsJsonList = jsonValue.GetArray("Groups");
    for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
    {
      Aws::Utils::Array<JsonView> enclosedInStringPropertiesJsonList = groupsJsonList[groupsIndex].AsArray();
      Aws::Vector<Aws::String> enclosedInStringPropertiesList;
      enclosedInStringPropertiesList.reserve((size_t)enclosedInStringPropertiesJsonList.GetLength());
      for(unsigned enclosedInStringPropertiesIndex = 0; enclosedInStringPropertiesIndex < enclosedInStringPropertiesJsonList.GetLength(); ++enclosedInStringPropertiesIndex)
      {
        enclosedInStringPropertiesList.push_back(enclosedInStringPropertiesJsonList[enclosedInStringPropertiesIndex].AsString());
      }
      m_groups.push_back(std::move(enclosedInStringPropertiesList));
    }
    m_groupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Aggs"))
  {
    Aws::Utils::Array<JsonView> aggsJsonList = jsonValue.GetArray("Aggs");
    for(unsigned aggsIndex = 0; aggsIndex < aggsJsonList.GetLength(); ++aggsIndex)
    {
      m_aggs.push_back(aggsJsonList[aggsIndex].AsObject());
    }
    m_aggsHasBeenSet = true;
  }

  return *this;
}

JsonValue Aggregate::Jsonize() const
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

  if(m_groupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupsJsonList(m_groups.size());
   for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
   {
     Aws::Utils::Array<JsonValue> enclosedInStringPropertiesJsonList(m_groups[groupsIndex].size());
     for(unsigned enclosedInStringPropertiesIndex = 0; enclosedInStringPropertiesIndex < enclosedInStringPropertiesJsonList.GetLength(); ++enclosedInStringPropertiesIndex)
     {
       enclosedInStringPropertiesJsonList[enclosedInStringPropertiesIndex].AsString(m_groups[groupsIndex][enclosedInStringPropertiesIndex]);
     }
     groupsJsonList[groupsIndex].AsArray(std::move(enclosedInStringPropertiesJsonList));
   }
   payload.WithArray("Groups", std::move(groupsJsonList));

  }

  if(m_aggsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aggsJsonList(m_aggs.size());
   for(unsigned aggsIndex = 0; aggsIndex < aggsJsonList.GetLength(); ++aggsIndex)
   {
     aggsJsonList[aggsIndex].AsObject(m_aggs[aggsIndex].Jsonize());
   }
   payload.WithArray("Aggs", std::move(aggsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
