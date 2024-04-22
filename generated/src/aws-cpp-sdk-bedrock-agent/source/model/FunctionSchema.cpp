/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/FunctionSchema.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

FunctionSchema::FunctionSchema() : 
    m_functionsHasBeenSet(false)
{
}

FunctionSchema::FunctionSchema(JsonView jsonValue) : 
    m_functionsHasBeenSet(false)
{
  *this = jsonValue;
}

FunctionSchema& FunctionSchema::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("functions"))
  {
    Aws::Utils::Array<JsonView> functionsJsonList = jsonValue.GetArray("functions");
    for(unsigned functionsIndex = 0; functionsIndex < functionsJsonList.GetLength(); ++functionsIndex)
    {
      m_functions.push_back(functionsJsonList[functionsIndex].AsObject());
    }
    m_functionsHasBeenSet = true;
  }

  return *this;
}

JsonValue FunctionSchema::Jsonize() const
{
  JsonValue payload;

  if(m_functionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> functionsJsonList(m_functions.size());
   for(unsigned functionsIndex = 0; functionsIndex < functionsJsonList.GetLength(); ++functionsIndex)
   {
     functionsJsonList[functionsIndex].AsObject(m_functions[functionsIndex].Jsonize());
   }
   payload.WithArray("functions", std::move(functionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
