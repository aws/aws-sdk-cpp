/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ContainerRestartPolicy.h>
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

ContainerRestartPolicy::ContainerRestartPolicy(JsonView jsonValue)
{
  *this = jsonValue;
}

ContainerRestartPolicy& ContainerRestartPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");
    m_enabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ignoredExitCodes"))
  {
    Aws::Utils::Array<JsonView> ignoredExitCodesJsonList = jsonValue.GetArray("ignoredExitCodes");
    for(unsigned ignoredExitCodesIndex = 0; ignoredExitCodesIndex < ignoredExitCodesJsonList.GetLength(); ++ignoredExitCodesIndex)
    {
      m_ignoredExitCodes.push_back(ignoredExitCodesJsonList[ignoredExitCodesIndex].AsInteger());
    }
    m_ignoredExitCodesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("restartAttemptPeriod"))
  {
    m_restartAttemptPeriod = jsonValue.GetInteger("restartAttemptPeriod");
    m_restartAttemptPeriodHasBeenSet = true;
  }
  return *this;
}

JsonValue ContainerRestartPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_ignoredExitCodesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ignoredExitCodesJsonList(m_ignoredExitCodes.size());
   for(unsigned ignoredExitCodesIndex = 0; ignoredExitCodesIndex < ignoredExitCodesJsonList.GetLength(); ++ignoredExitCodesIndex)
   {
     ignoredExitCodesJsonList[ignoredExitCodesIndex].AsInteger(m_ignoredExitCodes[ignoredExitCodesIndex]);
   }
   payload.WithArray("ignoredExitCodes", std::move(ignoredExitCodesJsonList));

  }

  if(m_restartAttemptPeriodHasBeenSet)
  {
   payload.WithInteger("restartAttemptPeriod", m_restartAttemptPeriod);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
