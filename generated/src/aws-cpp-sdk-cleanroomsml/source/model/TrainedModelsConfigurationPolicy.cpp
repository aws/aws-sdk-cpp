/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/TrainedModelsConfigurationPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

TrainedModelsConfigurationPolicy::TrainedModelsConfigurationPolicy() : 
    m_containerLogsHasBeenSet(false),
    m_containerMetricsHasBeenSet(false)
{
}

TrainedModelsConfigurationPolicy::TrainedModelsConfigurationPolicy(JsonView jsonValue)
  : TrainedModelsConfigurationPolicy()
{
  *this = jsonValue;
}

TrainedModelsConfigurationPolicy& TrainedModelsConfigurationPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("containerLogs"))
  {
    Aws::Utils::Array<JsonView> containerLogsJsonList = jsonValue.GetArray("containerLogs");
    for(unsigned containerLogsIndex = 0; containerLogsIndex < containerLogsJsonList.GetLength(); ++containerLogsIndex)
    {
      m_containerLogs.push_back(containerLogsJsonList[containerLogsIndex].AsObject());
    }
    m_containerLogsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containerMetrics"))
  {
    m_containerMetrics = jsonValue.GetObject("containerMetrics");

    m_containerMetricsHasBeenSet = true;
  }

  return *this;
}

JsonValue TrainedModelsConfigurationPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_containerLogsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containerLogsJsonList(m_containerLogs.size());
   for(unsigned containerLogsIndex = 0; containerLogsIndex < containerLogsJsonList.GetLength(); ++containerLogsIndex)
   {
     containerLogsJsonList[containerLogsIndex].AsObject(m_containerLogs[containerLogsIndex].Jsonize());
   }
   payload.WithArray("containerLogs", std::move(containerLogsJsonList));

  }

  if(m_containerMetricsHasBeenSet)
  {
   payload.WithObject("containerMetrics", m_containerMetrics.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
