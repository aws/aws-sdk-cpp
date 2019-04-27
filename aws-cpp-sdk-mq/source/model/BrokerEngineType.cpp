/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/mq/model/BrokerEngineType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

BrokerEngineType::BrokerEngineType() : 
    m_engineType(EngineType::NOT_SET),
    m_engineTypeHasBeenSet(false),
    m_engineVersionsHasBeenSet(false)
{
}

BrokerEngineType::BrokerEngineType(JsonView jsonValue) : 
    m_engineType(EngineType::NOT_SET),
    m_engineTypeHasBeenSet(false),
    m_engineVersionsHasBeenSet(false)
{
  *this = jsonValue;
}

BrokerEngineType& BrokerEngineType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("engineType"))
  {
    m_engineType = EngineTypeMapper::GetEngineTypeForName(jsonValue.GetString("engineType"));

    m_engineTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("engineVersions"))
  {
    Array<JsonView> engineVersionsJsonList = jsonValue.GetArray("engineVersions");
    for(unsigned engineVersionsIndex = 0; engineVersionsIndex < engineVersionsJsonList.GetLength(); ++engineVersionsIndex)
    {
      m_engineVersions.push_back(engineVersionsJsonList[engineVersionsIndex].AsObject());
    }
    m_engineVersionsHasBeenSet = true;
  }

  return *this;
}

JsonValue BrokerEngineType::Jsonize() const
{
  JsonValue payload;

  if(m_engineTypeHasBeenSet)
  {
   payload.WithString("engineType", EngineTypeMapper::GetNameForEngineType(m_engineType));
  }

  if(m_engineVersionsHasBeenSet)
  {
   Array<JsonValue> engineVersionsJsonList(m_engineVersions.size());
   for(unsigned engineVersionsIndex = 0; engineVersionsIndex < engineVersionsJsonList.GetLength(); ++engineVersionsIndex)
   {
     engineVersionsJsonList[engineVersionsIndex].AsObject(m_engineVersions[engineVersionsIndex].Jsonize());
   }
   payload.WithArray("engineVersions", std::move(engineVersionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
