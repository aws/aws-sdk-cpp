/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/ScheduledSplitsLaunchConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

ScheduledSplitsLaunchConfig::ScheduledSplitsLaunchConfig() : 
    m_stepsHasBeenSet(false)
{
}

ScheduledSplitsLaunchConfig::ScheduledSplitsLaunchConfig(JsonView jsonValue) : 
    m_stepsHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduledSplitsLaunchConfig& ScheduledSplitsLaunchConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("steps"))
  {
    Aws::Utils::Array<JsonView> stepsJsonList = jsonValue.GetArray("steps");
    for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
    {
      m_steps.push_back(stepsJsonList[stepsIndex].AsObject());
    }
    m_stepsHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduledSplitsLaunchConfig::Jsonize() const
{
  JsonValue payload;

  if(m_stepsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stepsJsonList(m_steps.size());
   for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
   {
     stepsJsonList[stepsIndex].AsObject(m_steps[stepsIndex].Jsonize());
   }
   payload.WithArray("steps", std::move(stepsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
