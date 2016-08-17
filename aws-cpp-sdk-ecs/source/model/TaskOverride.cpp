/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ecs/model/TaskOverride.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

TaskOverride::TaskOverride() : 
    m_containerOverridesHasBeenSet(false),
    m_taskRoleArnHasBeenSet(false)
{
}

TaskOverride::TaskOverride(const JsonValue& jsonValue) : 
    m_containerOverridesHasBeenSet(false),
    m_taskRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

TaskOverride& TaskOverride::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("containerOverrides"))
  {
    Array<JsonValue> containerOverridesJsonList = jsonValue.GetArray("containerOverrides");
    for(unsigned containerOverridesIndex = 0; containerOverridesIndex < containerOverridesJsonList.GetLength(); ++containerOverridesIndex)
    {
      m_containerOverrides.push_back(containerOverridesJsonList[containerOverridesIndex].AsObject());
    }
    m_containerOverridesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskRoleArn"))
  {
    m_taskRoleArn = jsonValue.GetString("taskRoleArn");

    m_taskRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskOverride::Jsonize() const
{
  JsonValue payload;

  if(m_containerOverridesHasBeenSet)
  {
   Array<JsonValue> containerOverridesJsonList(m_containerOverrides.size());
   for(unsigned containerOverridesIndex = 0; containerOverridesIndex < containerOverridesJsonList.GetLength(); ++containerOverridesIndex)
   {
     containerOverridesJsonList[containerOverridesIndex].AsObject(m_containerOverrides[containerOverridesIndex].Jsonize());
   }
   payload.WithArray("containerOverrides", std::move(containerOverridesJsonList));

  }

  if(m_taskRoleArnHasBeenSet)
  {
   payload.WithString("taskRoleArn", m_taskRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws