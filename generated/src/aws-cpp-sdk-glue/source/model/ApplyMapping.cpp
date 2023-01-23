/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ApplyMapping.h>
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

ApplyMapping::ApplyMapping() : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_mappingHasBeenSet(false)
{
}

ApplyMapping::ApplyMapping(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_mappingHasBeenSet(false)
{
  *this = jsonValue;
}

ApplyMapping& ApplyMapping::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Mapping"))
  {
    Aws::Utils::Array<JsonView> mappingJsonList = jsonValue.GetArray("Mapping");
    for(unsigned mappingIndex = 0; mappingIndex < mappingJsonList.GetLength(); ++mappingIndex)
    {
      m_mapping.push_back(mappingJsonList[mappingIndex].AsObject());
    }
    m_mappingHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplyMapping::Jsonize() const
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

  if(m_mappingHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mappingJsonList(m_mapping.size());
   for(unsigned mappingIndex = 0; mappingIndex < mappingJsonList.GetLength(); ++mappingIndex)
   {
     mappingJsonList[mappingIndex].AsObject(m_mapping[mappingIndex].Jsonize());
   }
   payload.WithArray("Mapping", std::move(mappingJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
