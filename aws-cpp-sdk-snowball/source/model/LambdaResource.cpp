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

#include <aws/snowball/model/LambdaResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

LambdaResource::LambdaResource() : 
    m_lambdaArnHasBeenSet(false),
    m_eventTriggersHasBeenSet(false)
{
}

LambdaResource::LambdaResource(const JsonValue& jsonValue) : 
    m_lambdaArnHasBeenSet(false),
    m_eventTriggersHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaResource& LambdaResource::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("LambdaArn"))
  {
    m_lambdaArn = jsonValue.GetString("LambdaArn");

    m_lambdaArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventTriggers"))
  {
    Array<JsonValue> eventTriggersJsonList = jsonValue.GetArray("EventTriggers");
    for(unsigned eventTriggersIndex = 0; eventTriggersIndex < eventTriggersJsonList.GetLength(); ++eventTriggersIndex)
    {
      m_eventTriggers.push_back(eventTriggersJsonList[eventTriggersIndex].AsObject());
    }
    m_eventTriggersHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaResource::Jsonize() const
{
  JsonValue payload;

  if(m_lambdaArnHasBeenSet)
  {
   payload.WithString("LambdaArn", m_lambdaArn);

  }

  if(m_eventTriggersHasBeenSet)
  {
   Array<JsonValue> eventTriggersJsonList(m_eventTriggers.size());
   for(unsigned eventTriggersIndex = 0; eventTriggersIndex < eventTriggersJsonList.GetLength(); ++eventTriggersIndex)
   {
     eventTriggersJsonList[eventTriggersIndex].AsObject(m_eventTriggers[eventTriggersIndex].Jsonize());
   }
   payload.WithArray("EventTriggers", std::move(eventTriggersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws