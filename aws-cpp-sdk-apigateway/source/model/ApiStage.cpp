﻿/*
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

#include <aws/apigateway/model/ApiStage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

ApiStage::ApiStage() : 
    m_apiIdHasBeenSet(false),
    m_stageHasBeenSet(false),
    m_throttleHasBeenSet(false)
{
}

ApiStage::ApiStage(JsonView jsonValue) : 
    m_apiIdHasBeenSet(false),
    m_stageHasBeenSet(false),
    m_throttleHasBeenSet(false)
{
  *this = jsonValue;
}

ApiStage& ApiStage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("apiId"))
  {
    m_apiId = jsonValue.GetString("apiId");

    m_apiIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stage"))
  {
    m_stage = jsonValue.GetString("stage");

    m_stageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("throttle"))
  {
    Aws::Map<Aws::String, JsonView> throttleJsonMap = jsonValue.GetObject("throttle").GetAllObjects();
    for(auto& throttleItem : throttleJsonMap)
    {
      m_throttle[throttleItem.first] = throttleItem.second.AsObject();
    }
    m_throttleHasBeenSet = true;
  }

  return *this;
}

JsonValue ApiStage::Jsonize() const
{
  JsonValue payload;

  if(m_apiIdHasBeenSet)
  {
   payload.WithString("apiId", m_apiId);

  }

  if(m_stageHasBeenSet)
  {
   payload.WithString("stage", m_stage);

  }

  if(m_throttleHasBeenSet)
  {
   JsonValue throttleJsonMap;
   for(auto& throttleItem : m_throttle)
   {
     throttleJsonMap.WithObject(throttleItem.first, throttleItem.second.Jsonize());
   }
   payload.WithObject("throttle", std::move(throttleJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws
