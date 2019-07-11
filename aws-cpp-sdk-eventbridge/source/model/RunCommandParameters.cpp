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

#include <aws/eventbridge/model/RunCommandParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

RunCommandParameters::RunCommandParameters() : 
    m_runCommandTargetsHasBeenSet(false)
{
}

RunCommandParameters::RunCommandParameters(JsonView jsonValue) : 
    m_runCommandTargetsHasBeenSet(false)
{
  *this = jsonValue;
}

RunCommandParameters& RunCommandParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RunCommandTargets"))
  {
    Array<JsonView> runCommandTargetsJsonList = jsonValue.GetArray("RunCommandTargets");
    for(unsigned runCommandTargetsIndex = 0; runCommandTargetsIndex < runCommandTargetsJsonList.GetLength(); ++runCommandTargetsIndex)
    {
      m_runCommandTargets.push_back(runCommandTargetsJsonList[runCommandTargetsIndex].AsObject());
    }
    m_runCommandTargetsHasBeenSet = true;
  }

  return *this;
}

JsonValue RunCommandParameters::Jsonize() const
{
  JsonValue payload;

  if(m_runCommandTargetsHasBeenSet)
  {
   Array<JsonValue> runCommandTargetsJsonList(m_runCommandTargets.size());
   for(unsigned runCommandTargetsIndex = 0; runCommandTargetsIndex < runCommandTargetsJsonList.GetLength(); ++runCommandTargetsIndex)
   {
     runCommandTargetsJsonList[runCommandTargetsIndex].AsObject(m_runCommandTargets[runCommandTargetsIndex].Jsonize());
   }
   payload.WithArray("RunCommandTargets", std::move(runCommandTargetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
