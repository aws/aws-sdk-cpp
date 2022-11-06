/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/PipelineConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

PipelineConfig::PipelineConfig() : 
    m_functionsHasBeenSet(false)
{
}

PipelineConfig::PipelineConfig(JsonView jsonValue) : 
    m_functionsHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineConfig& PipelineConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("functions"))
  {
    Aws::Utils::Array<JsonView> functionsJsonList = jsonValue.GetArray("functions");
    for(unsigned functionsIndex = 0; functionsIndex < functionsJsonList.GetLength(); ++functionsIndex)
    {
      m_functions.push_back(functionsJsonList[functionsIndex].AsString());
    }
    m_functionsHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineConfig::Jsonize() const
{
  JsonValue payload;

  if(m_functionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> functionsJsonList(m_functions.size());
   for(unsigned functionsIndex = 0; functionsIndex < functionsJsonList.GetLength(); ++functionsIndex)
   {
     functionsJsonList[functionsIndex].AsString(m_functions[functionsIndex]);
   }
   payload.WithArray("functions", std::move(functionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
