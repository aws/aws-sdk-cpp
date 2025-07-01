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

TrainedModelsConfigurationPolicy::TrainedModelsConfigurationPolicy(JsonView jsonValue)
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
  if(jsonValue.ValueExists("maxArtifactSize"))
  {
    m_maxArtifactSize = jsonValue.GetObject("maxArtifactSize");
    m_maxArtifactSizeHasBeenSet = true;
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

  if(m_maxArtifactSizeHasBeenSet)
  {
   payload.WithObject("maxArtifactSize", m_maxArtifactSize.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
