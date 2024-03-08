/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/DataSourceIntrospectionResult.h>
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

DataSourceIntrospectionResult::DataSourceIntrospectionResult() : 
    m_modelsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

DataSourceIntrospectionResult::DataSourceIntrospectionResult(JsonView jsonValue) : 
    m_modelsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceIntrospectionResult& DataSourceIntrospectionResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("models"))
  {
    Aws::Utils::Array<JsonView> modelsJsonList = jsonValue.GetArray("models");
    for(unsigned modelsIndex = 0; modelsIndex < modelsJsonList.GetLength(); ++modelsIndex)
    {
      m_models.push_back(modelsJsonList[modelsIndex].AsObject());
    }
    m_modelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

    m_nextTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceIntrospectionResult::Jsonize() const
{
  JsonValue payload;

  if(m_modelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> modelsJsonList(m_models.size());
   for(unsigned modelsIndex = 0; modelsIndex < modelsJsonList.GetLength(); ++modelsIndex)
   {
     modelsJsonList[modelsIndex].AsObject(m_models[modelsIndex].Jsonize());
   }
   payload.WithArray("models", std::move(modelsJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
