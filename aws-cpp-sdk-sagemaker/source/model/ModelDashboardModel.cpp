/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelDashboardModel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ModelDashboardModel::ModelDashboardModel() : 
    m_modelHasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_lastBatchTransformJobHasBeenSet(false),
    m_monitoringSchedulesHasBeenSet(false),
    m_modelCardHasBeenSet(false)
{
}

ModelDashboardModel::ModelDashboardModel(JsonView jsonValue) : 
    m_modelHasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_lastBatchTransformJobHasBeenSet(false),
    m_monitoringSchedulesHasBeenSet(false),
    m_modelCardHasBeenSet(false)
{
  *this = jsonValue;
}

ModelDashboardModel& ModelDashboardModel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Model"))
  {
    m_model = jsonValue.GetObject("Model");

    m_modelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Endpoints"))
  {
    Aws::Utils::Array<JsonView> endpointsJsonList = jsonValue.GetArray("Endpoints");
    for(unsigned endpointsIndex = 0; endpointsIndex < endpointsJsonList.GetLength(); ++endpointsIndex)
    {
      m_endpoints.push_back(endpointsJsonList[endpointsIndex].AsObject());
    }
    m_endpointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastBatchTransformJob"))
  {
    m_lastBatchTransformJob = jsonValue.GetObject("LastBatchTransformJob");

    m_lastBatchTransformJobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MonitoringSchedules"))
  {
    Aws::Utils::Array<JsonView> monitoringSchedulesJsonList = jsonValue.GetArray("MonitoringSchedules");
    for(unsigned monitoringSchedulesIndex = 0; monitoringSchedulesIndex < monitoringSchedulesJsonList.GetLength(); ++monitoringSchedulesIndex)
    {
      m_monitoringSchedules.push_back(monitoringSchedulesJsonList[monitoringSchedulesIndex].AsObject());
    }
    m_monitoringSchedulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelCard"))
  {
    m_modelCard = jsonValue.GetObject("ModelCard");

    m_modelCardHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelDashboardModel::Jsonize() const
{
  JsonValue payload;

  if(m_modelHasBeenSet)
  {
   payload.WithObject("Model", m_model.Jsonize());

  }

  if(m_endpointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> endpointsJsonList(m_endpoints.size());
   for(unsigned endpointsIndex = 0; endpointsIndex < endpointsJsonList.GetLength(); ++endpointsIndex)
   {
     endpointsJsonList[endpointsIndex].AsObject(m_endpoints[endpointsIndex].Jsonize());
   }
   payload.WithArray("Endpoints", std::move(endpointsJsonList));

  }

  if(m_lastBatchTransformJobHasBeenSet)
  {
   payload.WithObject("LastBatchTransformJob", m_lastBatchTransformJob.Jsonize());

  }

  if(m_monitoringSchedulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> monitoringSchedulesJsonList(m_monitoringSchedules.size());
   for(unsigned monitoringSchedulesIndex = 0; monitoringSchedulesIndex < monitoringSchedulesJsonList.GetLength(); ++monitoringSchedulesIndex)
   {
     monitoringSchedulesJsonList[monitoringSchedulesIndex].AsObject(m_monitoringSchedules[monitoringSchedulesIndex].Jsonize());
   }
   payload.WithArray("MonitoringSchedules", std::move(monitoringSchedulesJsonList));

  }

  if(m_modelCardHasBeenSet)
  {
   payload.WithObject("ModelCard", m_modelCard.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
