/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Spigot.h>
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

Spigot::Spigot() : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_topk(0),
    m_topkHasBeenSet(false),
    m_prob(0.0),
    m_probHasBeenSet(false)
{
}

Spigot::Spigot(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_topk(0),
    m_topkHasBeenSet(false),
    m_prob(0.0),
    m_probHasBeenSet(false)
{
  *this = jsonValue;
}

Spigot& Spigot::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Topk"))
  {
    m_topk = jsonValue.GetInteger("Topk");

    m_topkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Prob"))
  {
    m_prob = jsonValue.GetDouble("Prob");

    m_probHasBeenSet = true;
  }

  return *this;
}

JsonValue Spigot::Jsonize() const
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

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  if(m_topkHasBeenSet)
  {
   payload.WithInteger("Topk", m_topk);

  }

  if(m_probHasBeenSet)
  {
   payload.WithDouble("Prob", m_prob);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
