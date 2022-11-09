/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/RunCommandParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvents
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
    Aws::Utils::Array<JsonView> runCommandTargetsJsonList = jsonValue.GetArray("RunCommandTargets");
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
   Aws::Utils::Array<JsonValue> runCommandTargetsJsonList(m_runCommandTargets.size());
   for(unsigned runCommandTargetsIndex = 0; runCommandTargetsIndex < runCommandTargetsJsonList.GetLength(); ++runCommandTargetsIndex)
   {
     runCommandTargetsJsonList[runCommandTargetsIndex].AsObject(m_runCommandTargets[runCommandTargetsIndex].Jsonize());
   }
   payload.WithArray("RunCommandTargets", std::move(runCommandTargetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
